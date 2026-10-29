void __fastcall CoinDenseFactorization::~CoinDenseFactorization(CoinDenseFactorization *this)
{
  CoinDenseFactorization::~CoinDenseFactorization(this);
  operator delete(this);
}

