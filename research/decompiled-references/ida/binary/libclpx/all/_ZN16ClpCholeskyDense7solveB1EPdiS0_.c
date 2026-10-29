__int64 __fastcall ClpCholeskyDense::solveB1(ClpCholeskyDense *this, double *a2, int a3, double *a4)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // r11
  int v7; // r10d
  unsigned int v8; // ebx
  __int64 v9; // rbp
  double v10; // xmm1_8
  double v11; // xmm0_8

  result = (unsigned int)(a3 - 1);
  if ( a3 - 1 >= 0 )
  {
    v5 = (int)result;
    result = (unsigned int)result;
    v6 = (int)result - 1LL;
    v7 = a3;
    v8 = -1;
    v9 = v6 - (unsigned int)result;
    while ( 1 )
    {
      v10 = a4[v5];
      if ( a3 > v7 )
      {
        result = v7;
        do
        {
          v11 = a4[result] * a2[16 * (int)v5 + result];
          ++result;
          v10 = v10 - v11;
        }
        while ( v7 + (unsigned __int64)v8 + 1 != result );
      }
      --v7;
      ++v8;
      a4[v5] = v10;
      v5 = v6;
      if ( v9 == v6 )
        break;
      --v6;
    }
  }
  return result;
}

