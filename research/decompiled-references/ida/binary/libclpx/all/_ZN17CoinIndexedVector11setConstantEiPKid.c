__int64 __fastcall CoinIndexedVector::setConstant(CoinIndexedVector *this, int a2, const int *a3, double a4)
{
  CoinIndexedVector::clear(this);
  return CoinIndexedVector::gutsOfSetConstant(this, a2, a3, a4);
}

