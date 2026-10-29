__int64 __fastcall CoinPackedVectorBase::clearBase(CoinPackedVectorBase *this)
{
  CoinPackedVectorBase::clearIndexSet(this);
  *((_BYTE *)this + 25) = 0;
  *((_QWORD *)this + 1) = 0x7FFFFFFF80000001LL;
  return 0x7FFFFFFF80000001LL;
}

