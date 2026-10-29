void __fastcall CoinSimpFactorization::~CoinSimpFactorization(CoinSimpFactorization *this)
{
  CoinSimpFactorization::~CoinSimpFactorization(this);
  operator delete(this);
}

