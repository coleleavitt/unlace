__int64 __fastcall CoinPackedVector::setVector(
        CoinPackedVector *this,
        int a2,
        const int *a3,
        const double *a4,
        bool a5)
{
  CoinPackedVector::clear(this);
  return CoinPackedVector::gutsOfSetVector(this, a2, a3, a4, a5, "setVector");
}

