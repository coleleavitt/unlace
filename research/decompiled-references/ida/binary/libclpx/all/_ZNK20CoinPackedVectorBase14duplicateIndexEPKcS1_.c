__int64 __fastcall CoinPackedVectorBase::duplicateIndex(CoinPackedVectorBase *this, const char *a2, const char *a3)
{
  __int64 result; // rax

  if ( *((_BYTE *)this + 24) )
    result = CoinPackedVectorBase::indexSet(this, a2, a3);
  *((_BYTE *)this + 25) = 1;
  return result;
}

