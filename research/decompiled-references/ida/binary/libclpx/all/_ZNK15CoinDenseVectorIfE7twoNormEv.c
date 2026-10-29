double __fastcall CoinDenseVector<float>::twoNorm(__int64 a1)
{
  float *v1; // rdx
  double v2; // xmm0_8
  float *v3; // rax
  __int64 v4; // rcx
  float v5; // xmm1_4
  double v6; // xmm1_8

  if ( *(int *)a1 <= 0 )
    return 0.0;
  v1 = *(float **)(a1 + 8);
  v2 = 0.0;
  v3 = v1 + 1;
  v4 = (__int64)&v1[*(_DWORD *)a1 - 1 + 1];
  while ( 1 )
  {
    v5 = *v1;
    v1 = v3;
    v2 = v2 + (float)(v5 * v5);
    if ( (float *)v4 == v3 )
      break;
    ++v3;
  }
  v6 = sqrt(v2);
  if ( v2 < 0.0 )
    sqrt(v2);
  return v6;
}

