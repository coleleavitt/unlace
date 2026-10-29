__int64 __fastcall CoinPackedVector::setConstant(CoinPackedVector *this, int a2, const int *a3, double a4, bool a5)
{
  CoinPackedVector::clear(this);
  return CoinPackedVector::gutsOfSetConstant(this, a2, a3, a4, a5, "setConstant");
}

