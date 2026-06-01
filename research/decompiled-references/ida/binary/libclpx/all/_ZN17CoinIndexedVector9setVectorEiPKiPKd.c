__int64 __fastcall CoinIndexedVector::setVector(CoinIndexedVector *this, int a2, const int *a3, const double *a4)
{
  CoinIndexedVector::clear(this);
  return CoinIndexedVector::gutsOfSetVector(this, a2, a3, a4);
}

