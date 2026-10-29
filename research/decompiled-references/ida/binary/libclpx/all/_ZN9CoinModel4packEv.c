__int64 __fastcall CoinModel::pack(CoinModel *this)
{
  int v1; // ebx

  v1 = CoinModel::packRows(this);
  return v1 + (unsigned int)CoinModel::packColumns(this);
}

