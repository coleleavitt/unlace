__int64 __fastcall CoinModelHash::getName(CoinModelHash *this, int a2)
{
  if ( a2 >= *((_DWORD *)this + 4) )
    return 0;
  else
    return *(_QWORD *)(*(_QWORD *)this + 8LL * a2);
}

