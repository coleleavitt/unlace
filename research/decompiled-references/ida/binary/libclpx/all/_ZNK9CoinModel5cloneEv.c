CoinModel *__fastcall CoinModel::clone(CoinModel *this)
{
  CoinModel *v1; // rbx

  v1 = (CoinModel *)operator new(0x2D0u);
  CoinModel::CoinModel(v1, this);
  return v1;
}

