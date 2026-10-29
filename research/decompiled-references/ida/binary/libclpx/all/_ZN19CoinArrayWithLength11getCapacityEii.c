__int64 __fastcall CoinArrayWithLength::getCapacity(CoinArrayWithLength *this, int a2, int a3)
{
  int v3; // ebx
  __int64 result; // rax
  int v7; // esi

  v3 = *((_DWORD *)this + 2);
  result = (unsigned int)(-2 - v3);
  if ( v3 >= -1 )
    result = (unsigned int)v3;
  if ( a2 > (int)result )
  {
    CoinArrayWithLength::reallyFreeArray(this);
    v7 = a3;
    *((_DWORD *)this + 2) = v3;
    if ( a2 >= a3 )
      v7 = a2;
    return CoinArrayWithLength::getArray(this, v7);
  }
  else if ( v3 < 0 )
  {
    result = (unsigned int)(-2 - v3);
    *((_DWORD *)this + 2) = result;
  }
  return result;
}

