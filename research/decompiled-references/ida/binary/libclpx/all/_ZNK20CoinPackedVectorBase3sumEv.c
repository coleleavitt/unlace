double *__fastcall CoinPackedVectorBase::sum(CoinPackedVectorBase *this)
{
  __int64 v1; // rbx
  double *v2; // rbx
  double *result; // rax
  double i; // xmm0_8

  v1 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  v2 = (double *)(v1 + 8LL * (**(int (__fastcall ***)(CoinPackedVectorBase *))this)(this));
  result = (double *)(*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  for ( i = 0.0; v2 != result; ++result )
    i = i + *result;
  return result;
}

