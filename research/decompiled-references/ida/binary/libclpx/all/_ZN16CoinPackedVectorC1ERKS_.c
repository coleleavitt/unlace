// Alternative name is '_ZN16CoinPackedVectorC2ERKS_'
void __fastcall CoinPackedVector::CoinPackedVector(CoinPackedVector *this, const CoinPackedVector *a2)
{
  char v2; // r8
  const double *v3; // rcx
  const int *v4; // rdx
  int v5; // esi

  CoinPackedVectorBase::CoinPackedVectorBase(this);
  v2 = *((_BYTE *)a2 + 24);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  v3 = *((const double **)a2 + 5);
  v4 = *((const int **)a2 + 4);
  v5 = *((_DWORD *)a2 + 12);
  *(_QWORD *)this = off_4D1A98;
  CoinPackedVector::gutsOfSetVector(this, v5, v4, v3, v2, "copy constructor");
}

