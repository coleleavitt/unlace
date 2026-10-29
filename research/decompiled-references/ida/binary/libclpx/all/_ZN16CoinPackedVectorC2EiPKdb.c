// Alternative name is '_ZN16CoinPackedVectorC1EiPKdb'
void __fastcall CoinPackedVector::CoinPackedVector(CoinPackedVector *this, int a2, const double *a3, bool a4)
{
  CoinPackedVectorBase::CoinPackedVectorBase(this);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = off_4D1A98;
  CoinPackedVector::setFull(this, a2, a3, a4);
}

