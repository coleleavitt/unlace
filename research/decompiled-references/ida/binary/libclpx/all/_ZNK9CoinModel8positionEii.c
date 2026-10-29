__int64 __fastcall CoinModel::position(CoinModel *this, unsigned int a2, unsigned int a3)
{
  CoinModelHash2 *v4; // rbp

  v4 = (CoinModel *)((char *)this + 312);
  if ( !*((_DWORD *)this + 80) )
  {
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize(v4);
  }
  return CoinModelHash2::hash(v4, a2, a3, *((_QWORD *)this + 37));
}

