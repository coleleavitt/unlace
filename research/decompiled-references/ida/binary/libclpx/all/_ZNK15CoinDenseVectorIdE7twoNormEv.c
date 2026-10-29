double __fastcall CoinDenseVector<double>::twoNorm(__int64 a1)
{
  double *v1; // rdx
  double v2; // xmm0_8
  double *v3; // rax
  __int64 v4; // rcx
  double v5; // xmm1_8
  double v6; // xmm1_8

  if ( *(int *)a1 <= 0 )
    return 0.0;
  v1 = *(double **)(a1 + 8);
  v2 = 0.0;
  v3 = v1 + 1;
  v4 = (__int64)&v1[(unsigned int)(*(_DWORD *)a1 - 1) + 1];
  while ( 1 )
  {
    v5 = *v1;
    v1 = v3;
    v2 = v2 + v5 * v5;
    if ( (double *)v4 == v3 )
      break;
    ++v3;
  }
  v6 = sqrt(v2);
  if ( v2 < 0.0 )
    sqrt(v2);
  return v6;
}

