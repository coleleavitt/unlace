void __fastcall CoinPackedVector::~CoinPackedVector(CoinPackedVector *this)
{
  CoinPackedVector::~CoinPackedVector(this);
  operator delete(this);
}

