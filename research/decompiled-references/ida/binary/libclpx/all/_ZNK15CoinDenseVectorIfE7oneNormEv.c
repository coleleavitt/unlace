double __fastcall CoinDenseVector<float>::oneNorm(__int64 a1)
{
  float *v1; // rdx
  double result; // xmm0_8
  float *v3; // rax
  __int64 v4; // rcx
  float v5; // xmm1_4

  if ( *(int *)a1 > 0 )
  {
    v1 = *(float **)(a1 + 8);
    result = 0.0;
    v3 = v1 + 1;
    v4 = (__int64)&v1[*(_DWORD *)a1 - 1 + 1];
    while ( 1 )
    {
      v5 = *v1;
      if ( *v1 >= 0.0 )
      {
        *(float *)&result = *(float *)&result + v5;
        v1 = v3;
        if ( (float *)v4 == v3 )
          return result;
      }
      else
      {
        *(float *)&result = *(float *)&result - v5;
        v1 = v3;
        if ( (float *)v4 == v3 )
          return result;
      }
      ++v3;
    }
  }
  return 0.0;
}

