/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7DF64
// Address: 0x0007DF64

//----- (0007DF64) --------------------------------------------------------
int __fastcall sub_7DF64(int *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int *v8; // r1
  unsigned int v9; // r3
  unsigned int *v10; // r4
  int v11; // r0
  unsigned int v13; // r2
  int v14; // r3

  if ( a2 == a3 )
    return 0;
  if ( !sub_7DDE8(a1, a2) )
    return -1;
  v8 = (unsigned int *)a1[3];
  v9 = v8[1];
  if ( v9 >= a2 + a4 )
  {
    if ( a3 < a3 + a4 )
    {
      v10 = (unsigned int *)*a1;
      v11 = *a1 + 8 * a1[1];
      if ( *a1 == v11 )
        return 0;
      while ( a3 >= v10[1] )
      {
        v10 += 2;
        if ( (unsigned int *)v11 == v10 )
          return 0;
      }
      v13 = *v10;
      if ( a3 < *v10 )
      {
        if ( v10 == v8 || a4 <= v13 - a3 )
          return 0;
      }
      else if ( v10 == v8 )
      {
        v14 = v9 != a2 + a4;
        if ( a2 == v13 )
        {
          if ( a2 >= a3 )
            v14 = 0;
          if ( !v14 )
          {
LABEL_15:
            if ( v10 == (unsigned int *)(v11 - 8) || a4 <= v10[2] - a3 )
              return 0;
          }
        }
        else
        {
          if ( a2 > a3 )
            v14 |= 1u;
          if ( !v14 )
            goto LABEL_15;
        }
      }
    }
    return -3;
  }
  return -2;
}
// 7DFF6: masking with 0x1 was optimized away because r3.4 <= 0x1
