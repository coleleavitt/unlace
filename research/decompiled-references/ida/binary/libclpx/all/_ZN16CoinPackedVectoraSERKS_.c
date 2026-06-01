CoinPackedVector *__fastcall CoinPackedVector::operator=(CoinPackedVector *this, __int64 a2)
{
  if ( this != (CoinPackedVector *)a2 )
  {
    CoinPackedVector::clear(this);
    CoinPackedVector::gutsOfSetVector(
      this,
      *(_DWORD *)(a2 + 48),
      *(const int **)(a2 + 32),
      *(const double **)(a2 + 40),
      *((_BYTE *)this + 24),
      "operator=");
  }
  return this;
}

