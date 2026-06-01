// Alternative name is '_ZN16CoinPackedVectorC2Eb'
void __fastcall CoinPackedVector::CoinPackedVector(CoinPackedVector *this, bool a2)
{
  CoinPackedVectorBase::CoinPackedVectorBase(this);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)this = off_4D1A98;
  CoinPackedVectorBase::setTestForDuplicateIndex(this, a2);
}

