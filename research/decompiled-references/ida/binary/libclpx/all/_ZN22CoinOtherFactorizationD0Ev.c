void __fastcall CoinOtherFactorization::~CoinOtherFactorization(CoinOtherFactorization *this)
{
  CoinOtherFactorization::~CoinOtherFactorization(this);
  operator delete(this);
}

