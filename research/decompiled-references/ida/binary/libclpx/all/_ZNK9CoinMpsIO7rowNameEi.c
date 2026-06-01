__int64 __fastcall CoinMpsIO::rowName(CoinMpsIO *this, int a2)
{
  if ( a2 < 0 || *((_DWORD *)this + 10) <= a2 )
    return 0;
  else
    return *(_QWORD *)(*((_QWORD *)this + 19) + 8LL * a2);
}

