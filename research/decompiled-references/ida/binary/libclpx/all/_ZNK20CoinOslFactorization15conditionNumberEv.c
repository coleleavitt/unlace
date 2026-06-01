double __fastcall CoinOslFactorization::conditionNumber(CoinOslFactorization *this)
{
  int v1; // edx
  __int64 v2; // rsi
  int *v3; // rax
  double v4; // xmm0_8
  __int64 v5; // rsi
  __int64 v6; // rdx
  double v7; // xmm0_8

  v1 = *((_DWORD *)this + 9);
  v2 = *((_QWORD *)this + 19);
  if ( v1 <= 0 )
    return 1.0;
  v3 = (int *)(v2 + 4);
  v4 = 1.0;
  v5 = v2 + 4LL * (unsigned int)(v1 - 1) + 8;
  do
  {
    v6 = *v3++;
    v4 = v4 * *(double *)(*((_QWORD *)this + 35) + 8 * v6);
  }
  while ( (int *)v5 != v3 );
  v7 = fabs(v4);
  if ( v7 > 1.0e-50 )
    return 1.0 / v7;
  else
    return 1.0e50;
}

