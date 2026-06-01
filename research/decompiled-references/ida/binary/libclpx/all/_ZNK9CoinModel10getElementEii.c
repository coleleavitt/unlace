double __fastcall CoinModel::getElement(CoinModel *this, unsigned int a2, unsigned int a3)
{
  CoinModelHash2 *v4; // rbp
  int v5; // eax
  double result; // xmm0_8

  v4 = (CoinModel *)((char *)this + 312);
  if ( !*((_DWORD *)this + 80) )
  {
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize(v4);
  }
  v5 = CoinModelHash2::hash(v4, a2, a3, *((_QWORD *)this + 37));
  result = 0.0;
  if ( v5 >= 0 )
    return *(double *)(*((_QWORD *)this + 37) + 16LL * v5 + 8);
  return result;
}

