void __fastcall CoinPackedVectorBase::~CoinPackedVectorBase(CoinPackedVectorBase *this)
{
  CoinPackedVectorBase::~CoinPackedVectorBase(this);
  operator delete(this);
}

