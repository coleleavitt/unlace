CoinSimpFactorization *__fastcall CoinSimpFactorization::clone(CoinSimpFactorization *this)
{
  CoinSimpFactorization *v1; // rbx

  v1 = (CoinSimpFactorization *)operator new(0x240u);
  CoinSimpFactorization::CoinSimpFactorization(v1, this);
  return v1;
}

