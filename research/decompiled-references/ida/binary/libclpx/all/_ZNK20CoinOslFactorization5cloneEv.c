CoinOslFactorization *__fastcall CoinOslFactorization::clone(CoinOslFactorization *this)
{
  CoinOslFactorization *v1; // rbx

  v1 = (CoinOslFactorization *)operator new(0x1F0u);
  CoinOslFactorization::CoinOslFactorization(v1, this);
  return v1;
}

