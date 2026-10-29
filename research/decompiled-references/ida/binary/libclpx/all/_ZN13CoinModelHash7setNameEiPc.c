__int64 __fastcall CoinModelHash::setName(CoinModelHash *this, int a2, char *a3)
{
  __int64 result; // rax

  if ( *((_DWORD *)this + 4) > a2 )
  {
    result = *(_QWORD *)this;
    *(_QWORD *)(*(_QWORD *)this + 8LL * a2) = a3;
  }
  return result;
}

