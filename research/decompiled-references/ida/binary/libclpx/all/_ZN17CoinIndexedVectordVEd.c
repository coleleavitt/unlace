__int64 __fastcall CoinIndexedVector::operator/=(int **a1, double a2)
{
  __int64 result; // rax
  int *v3; // rdx
  __int64 v4; // rcx
  int *v5; // rsi
  __int64 v6; // rcx
  double *v7; // rdx
  double v8; // xmm1_8

  result = *((unsigned int *)a1 + 4);
  if ( (int)result > 0 )
  {
    v3 = *a1;
    v4 = (unsigned int)(result - 1);
    v5 = a1[1];
    result = (__int64)(*a1 + 1);
    v6 = result + 4 * v4;
    while ( 1 )
    {
      v7 = (double *)&v5[2 * *v3];
      v8 = *v7 / a2;
      if ( fabs(v8) >= 1.0e-50 )
      {
        *v7 = v8;
        v3 = (int *)result;
        if ( v6 == result )
          return result;
      }
      else
      {
        *v7 = 1.0e-100;
        v3 = (int *)result;
        if ( v6 == result )
          return result;
      }
      result += 4;
    }
  }
  return result;
}

