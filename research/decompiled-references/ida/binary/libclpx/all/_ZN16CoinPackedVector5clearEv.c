__int64 __fastcall CoinPackedVector::clear(CoinPackedVector *this)
{
  *((_DWORD *)this + 12) = 0;
  return CoinPackedVectorBase::clearBase(this);
}

