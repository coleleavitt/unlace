__int64 __fastcall CoinMpsIO::startHash(CoinMpsIO *this, char **a2, int a3, int a4)
{
  *((_QWORD *)this + a4 + 19) = a2;
  *((_DWORD *)this + a4 + 44) = a3;
  return CoinMpsIO::startHash(this, a4);
}

