__int64 __fastcall CoinPackedVector::getNumElements(CoinPackedVector *this)
{
  return *((unsigned int *)this + 12);
}

