__int64 __fastcall CoinModel::getColumnName(CoinModel *this, int a2)
{
  if ( a2 >= *((_DWORD *)this + 56) )
    return 0;
  else
    return CoinModelHash::name((CoinModel *)((char *)this + 208), a2);
}

