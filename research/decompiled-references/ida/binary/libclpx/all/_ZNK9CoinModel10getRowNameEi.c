__int64 __fastcall CoinModel::getRowName(CoinModel *this, int a2)
{
  if ( a2 >= *((_DWORD *)this + 40) )
    return 0;
  else
    return CoinModelHash::name((CoinModel *)((char *)this + 144), a2);
}

