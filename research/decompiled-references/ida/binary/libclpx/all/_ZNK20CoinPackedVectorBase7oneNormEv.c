double __fastcall CoinPackedVectorBase::oneNorm(CoinPackedVectorBase *this)
{
  __int64 v1; // rbp
  int v2; // eax
  double *v3; // rdx
  double result; // xmm0_8
  __int64 v5; // rcx
  double v6; // xmm1_8

  v1 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  v2 = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this) - 1;
  if ( v2 < 0 )
    return 0.0;
  v3 = (double *)(v1 + 8LL * v2);
  result = 0.0;
  v5 = (__int64)&v3[-v2 - 1];
  do
  {
    v6 = *v3--;
    result = result + fabs(v6);
  }
  while ( v3 != (double *)v5 );
  return result;
}

