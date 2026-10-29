const char *__fastcall CoinModel::getElementAsString(CoinModel *this, unsigned int a2, unsigned int a3)
{
  CoinModelHash2 *v4; // rbp
  int v5; // eax
  __int64 v6; // rdx
  const char *result; // rax

  v4 = (CoinModel *)((char *)this + 312);
  if ( !*((_DWORD *)this + 80) )
  {
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize(v4);
  }
  v5 = CoinModelHash2::hash(v4, a2, a3, *((_QWORD *)this + 37));
  if ( v5 < 0 )
    return nullptr;
  v6 = *((_QWORD *)this + 37) + 16LL * v5;
  result = "Numeric";
  if ( *(int *)v6 < 0 )
    return (const char *)CoinModelHash::name((CoinModel *)((char *)this + 248), (int)*(double *)(v6 + 8));
  return result;
}

