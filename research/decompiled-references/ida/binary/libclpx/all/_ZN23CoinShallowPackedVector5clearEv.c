__int64 __fastcall CoinShallowPackedVector::clear(CoinShallowPackedVector *this)
{
  __int64 result; // rax

  result = CoinPackedVectorBase::clearBase(this);
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = 0;
  return result;
}

