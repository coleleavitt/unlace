bool __fastcall CoinModel::getColumnIsInteger(CoinModel *this, int a2)
{
  bool result; // al
  __int64 v3; // rdx

  result = 0;
  if ( *((_DWORD *)this + 3) > a2 )
  {
    v3 = *((_QWORD *)this + 30);
    if ( v3 )
      return *(_DWORD *)(v3 + 4LL * a2) != 0;
  }
  return result;
}

