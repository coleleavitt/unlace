void __fastcall CoinShallowPackedVector::~CoinShallowPackedVector(CoinShallowPackedVector *this)
{
  *(_QWORD *)this = off_4D1798;
  CoinPackedVectorBase::~CoinPackedVectorBase(this);
  operator delete(this);
}

