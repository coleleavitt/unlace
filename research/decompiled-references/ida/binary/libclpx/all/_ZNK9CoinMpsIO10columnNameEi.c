__int64 __fastcall CoinMpsIO::columnName(CoinMpsIO *this, int a2)
{
  if ( a2 < 0 || *((_DWORD *)this + 11) <= a2 )
    return 0;
  else
    return *(_QWORD *)(*((_QWORD *)this + 20) + 8LL * a2);
}

