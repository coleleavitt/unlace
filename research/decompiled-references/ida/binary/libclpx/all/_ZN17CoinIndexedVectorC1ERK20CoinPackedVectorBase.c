// Alternative name is '_ZN17CoinIndexedVectorC2ERK20CoinPackedVectorBase'
void __fastcall CoinIndexedVector::CoinIndexedVector(CoinIndexedVector *this, const CoinPackedVectorBase *a2)
{
  __int64 v2; // rax
  const double *v3; // r13
  const int *v4; // r12
  int v5; // eax

  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  v2 = *(_QWORD *)a2;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 28) = 0;
  v3 = (const double *)(*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(v2 + 16))(a2);
  v4 = (const int *)(*(__int64 (__fastcall **)(const CoinPackedVectorBase *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (**(__int64 (__fastcall ***)(const CoinPackedVectorBase *))a2)(a2);
  CoinIndexedVector::gutsOfSetVector(this, v5, v4, v3);
}

