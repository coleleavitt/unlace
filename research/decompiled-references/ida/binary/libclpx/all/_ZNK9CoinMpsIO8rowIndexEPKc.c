__int64 __fastcall CoinMpsIO::rowIndex(CoinMpsIO *this, const char *a2)
{
  if ( *((_QWORD *)this + 23) )
    return CoinMpsIO::findHash(this, a2, 0);
  if ( *((_DWORD *)this + 10) )
  {
    CoinMpsIO::startHash(this, 0);
    return CoinMpsIO::findHash(this, a2, 0);
  }
  return 0xFFFFFFFFLL;
}

