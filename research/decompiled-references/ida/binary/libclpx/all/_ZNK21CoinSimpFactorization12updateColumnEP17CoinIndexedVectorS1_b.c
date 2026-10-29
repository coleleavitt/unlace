__int64 __fastcall CoinSimpFactorization::updateColumn(
        CoinSimpFactorization *this,
        CoinIndexedVector *a2,
        CoinIndexedVector *a3,
        bool a4)
{
  return CoinSimpFactorization::upColumn(this, a2, a3, a4, 0);
}

