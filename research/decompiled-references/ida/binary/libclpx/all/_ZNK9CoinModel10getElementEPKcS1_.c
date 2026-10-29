double __fastcall CoinModel::getElement(CoinModel *this, const char *a2, const char *a3)
{
  int v4; // ebp
  int v5; // eax
  int v6; // eax

  if ( !*((_DWORD *)this + 80) )
  {
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize((CoinModel *)((char *)this + 312));
  }
  v4 = CoinModelHash::hash((CoinModel *)((char *)this + 144), a2);
  v5 = CoinModelHash::hash((CoinModel *)((char *)this + 208), a3);
  if ( v4 < 0 )
    return 0.0;
  if ( v5 < 0 )
    return 0.0;
  v6 = CoinModelHash2::hash((char *)this + 312, (unsigned int)v4, (unsigned int)v5, *((_QWORD *)this + 37));
  if ( v6 < 0 )
    return 0.0;
  else
    return *(double *)(*((_QWORD *)this + 37) + 16LL * v6 + 8);
}

