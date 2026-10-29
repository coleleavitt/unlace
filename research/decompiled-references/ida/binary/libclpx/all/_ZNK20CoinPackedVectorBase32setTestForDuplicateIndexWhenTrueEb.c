void __fastcall CoinPackedVectorBase::setTestForDuplicateIndexWhenTrue(CoinPackedVectorBase *this, char a2)
{
  *((_BYTE *)this + 24) = a2;
  *((_BYTE *)this + 25) = a2;
}

