bool __fastcall CoinMpsIO::isInteger(CoinMpsIO *this, int a2)
{
  __int64 v2; // rdx
  bool result; // al

  v2 = *((_QWORD *)this + 18);
  result = 0;
  if ( v2 )
    return *(_BYTE *)(v2 + a2) != 0;
  return result;
}

