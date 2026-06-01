__int64 __fastcall CoinMpsIO::columnIndex(CoinMpsIO *this, const char *a2)
{
  if ( *((_QWORD *)this + 24) )
    return CoinMpsIO::findHash(this, a2, 1);
  if ( *((_DWORD *)this + 11) )
  {
    CoinMpsIO::startHash(this, 1);
    return CoinMpsIO::findHash(this, a2, 1);
  }
  return 0xFFFFFFFFLL;
}

