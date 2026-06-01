__int64 __fastcall CoinIndexedVector::setVector(
        CoinIndexedVector *this,
        int a2,
        int a3,
        const int *a4,
        const double *a5)
{
  CoinIndexedVector::clear(this);
  return CoinIndexedVector::gutsOfSetVector(this, a2, a3, a4, a5);
}

