CoinDenseFactorization *__fastcall CoinDenseFactorization::clone(CoinDenseFactorization *this)
{
  CoinDenseFactorization *v1; // rbx

  v1 = (CoinDenseFactorization *)operator new(0x68u);
  CoinDenseFactorization::CoinDenseFactorization(v1, this);
  return v1;
}

