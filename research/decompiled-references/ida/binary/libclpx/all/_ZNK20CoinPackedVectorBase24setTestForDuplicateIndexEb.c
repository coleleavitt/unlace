__int64 __fastcall CoinPackedVectorBase::setTestForDuplicateIndex(CoinPackedVectorBase *this, char a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    *((_BYTE *)this + 24) = 1;
    return CoinPackedVectorBase::duplicateIndex(this, "setTestForDuplicateIndex", "CoinPackedVectorBase");
  }
  else
  {
    *((_BYTE *)this + 24) = 0;
    *((_BYTE *)this + 25) = 0;
  }
  return result;
}

