__int64 __fastcall CoinSimpFactorization::btran(CoinSimpFactorization *this, double *a2, double *a3)
{
  CoinSimpFactorization::xUeqb(this, a2, a3);
  CoinSimpFactorization::xHeqb(this, a3);
  return CoinSimpFactorization::xLeqb(this, a3);
}

