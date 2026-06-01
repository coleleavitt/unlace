__int64 __fastcall CoinModel::setColumnName(CoinModel *this, int a2, const char *a3)
{
  CoinModelHash *v3; // rbx
  __int64 result; // rax

  v3 = (CoinModel *)((char *)this + 208);
  CoinModel::fillColumns(this, a2, 1, 0);
  result = CoinModelHash::name((CoinModel *)((char *)this + 208), a2);
  if ( result )
    result = CoinModelHash::deleteHash(v3, a2);
  if ( a3 )
    return CoinModelHash::addHash(v3, a2, a3);
  return result;
}

