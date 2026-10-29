double __fastcall CoinPackedVectorBase::normSquare(CoinPackedVectorBase *this)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  double *v4; // r12
  double *v5; // rax
  double result; // xmm0_8
  double v7; // xmm1_8

  v2 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  v3 = (*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  v4 = (double *)(v3 + 8LL * (**(int (__fastcall ***)(CoinPackedVectorBase *))this)(this));
  v5 = (double *)(*(__int64 (__fastcall **)(CoinPackedVectorBase *))(*(_QWORD *)this + 16LL))(this);
  for ( result = 0.0; v4 != v5; result = result + v7 * *(double *)(v2 - 8) )
  {
    v7 = *v5++;
    v2 += 8;
  }
  return result;
}

