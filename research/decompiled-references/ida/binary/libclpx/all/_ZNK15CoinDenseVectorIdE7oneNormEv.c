double __fastcall CoinDenseVector<double>::oneNorm(__int64 a1)
{
  double *v1; // rdx
  double result; // xmm0_8
  double *v3; // rax
  __int64 v4; // rcx
  double v5; // xmm1_8

  if ( *(int *)a1 > 0 )
  {
    v1 = *(double **)(a1 + 8);
    result = 0.0;
    v3 = v1 + 1;
    v4 = (__int64)&v1[(unsigned int)(*(_DWORD *)a1 - 1) + 1];
    while ( 1 )
    {
      v5 = *v1;
      if ( *v1 >= 0.0 )
      {
        result = result + v5;
        v1 = v3;
        if ( (double *)v4 == v3 )
          return result;
      }
      else
      {
        result = result - v5;
        v1 = v3;
        if ( (double *)v4 == v3 )
          return result;
      }
      ++v3;
    }
  }
  return 0.0;
}

