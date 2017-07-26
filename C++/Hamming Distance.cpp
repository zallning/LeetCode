class Solution {
public:
    int hammingDistance(int x, int y) {
        int a[31] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, b[31] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int i1 = log(x)/log(2);
        int i2 = log(y)/log(2);
        int sum = 0;
        for(int i3 = i1; i3 >= 0; i3--)
        {
            if(x>=pow(2,i3))
            {
                x -= pow(2,i3);
                a[i3] = 1;
            }
        }
        for(int i4 = i2; i4 >= 0; i4--)
        {
            if(y>=pow(2,i4))
            {
                y -= pow(2,i4);
                b[i4] = 1;
            }
        }
        int i5 = (i1>i2)?i1:i2;
        for(int i = 0; i <= i5; i++)
        {
            if(a[i] != b[i])
            {
                sum++;
            }
        }
        return sum;
    }
};