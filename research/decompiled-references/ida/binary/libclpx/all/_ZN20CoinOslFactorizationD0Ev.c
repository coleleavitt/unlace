void __fastcall CoinOslFactorization::~CoinOslFactorization(CoinOslFactorization *this)
{
  CoinOslFactorization::~CoinOslFactorization(this);
  operator delete(this);
}

