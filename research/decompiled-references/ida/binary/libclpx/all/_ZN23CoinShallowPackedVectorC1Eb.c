// Alternative name is '_ZN23CoinShallowPackedVectorC2Eb'
void __fastcall CoinShallowPackedVector::CoinShallowPackedVector(CoinShallowPackedVector *this, bool a2)
{
  CoinPackedVectorBase::CoinPackedVectorBase(this);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = off_4D1798;
  CoinPackedVectorBase::setTestForDuplicateIndex(this, a2);
}

