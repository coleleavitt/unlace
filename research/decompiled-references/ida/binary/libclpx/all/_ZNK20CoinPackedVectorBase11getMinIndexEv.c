__int64 __fastcall CoinPackedVectorBase::getMinIndex(CoinPackedVectorBase *this)
{
  CoinPackedVectorBase::findMaxMinIndices(this);
  return *((unsigned int *)this + 3);
}

