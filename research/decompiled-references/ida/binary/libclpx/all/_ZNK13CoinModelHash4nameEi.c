__int64 __fastcall CoinModelHash::name(CoinModelHash *this, int a2)
{
  if ( *((_DWORD *)this + 4) <= a2 )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
}

