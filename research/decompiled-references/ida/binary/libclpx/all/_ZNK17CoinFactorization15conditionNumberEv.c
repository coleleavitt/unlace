double __fastcall CoinFactorization::conditionNumber(CoinFactorization *this)
{
  double *v1; // rax
  int v2; // edx
  double v3; // xmm0_8
  __int64 v4; // rdx
  double v5; // xmm0_8

  v1 = *((double **)this + 69);
  if ( *((int *)this + 140) <= -2 )
    v1 = nullptr;
  v2 = *((_DWORD *)this + 8);
  if ( v2 <= 0 )
    return 1.0;
  v3 = 1.0;
  v4 = (__int64)&v1[(unsigned int)(v2 - 1) + 1];
  do
    v3 = v3 * *v1++;
  while ( (double *)v4 != v1 );
  v5 = fabs(v3);
  if ( v5 > 1.0e-50 )
    return 1.0 / v5;
  else
    return 1.0e50;
}

