__int64 __fastcall CoinPackedVectorBase::getMaxIndex(CoinPackedVectorBase *this)
{
  CoinPackedVectorBase::findMaxMinIndices(this);
  return *((unsigned int *)this + 2);
}

