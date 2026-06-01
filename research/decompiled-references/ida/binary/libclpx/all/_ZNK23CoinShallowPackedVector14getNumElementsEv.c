__int64 __fastcall CoinShallowPackedVector::getNumElements(CoinShallowPackedVector *this)
{
  return *((unsigned int *)this + 12);
}

