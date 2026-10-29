__int64 __fastcall CoinLpIO::columnName(CoinLpIO *this, int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 37);
  if ( v2 && a2 >= 0 && *((_DWORD *)this + 15) > a2 )
    return *(_QWORD *)(v2 + 8LL * a2);
  else
    return 0;
}

