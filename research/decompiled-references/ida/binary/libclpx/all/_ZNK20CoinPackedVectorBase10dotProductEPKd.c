double __fastcall CoinPackedVectorBase::dotProduct(CoinPackedVectorBase *this, const double *a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdx
  double result; // xmm0_8
  double v8; // xmm1_8

  v2 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  v3 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 8LL))(this);
  v4 = (**(__int64 (__fastcall ***)(CoinPackedVectorBase *))this)(this) - 1;
  if ( v4 < 0 )
    return 0.0;
  v5 = v4;
  v6 = v4 - 1LL;
  result = 0.0;
  while ( 1 )
  {
    v8 = a2[*(int *)(v3 + 4 * v5)] * *(double *)(v2 + 8 * v5);
    v5 = v6;
    result = result + v8;
    if ( v4 - 1LL - (unsigned int)v4 == v6 )
      break;
    --v6;
  }
  return result;
}

