__int64 __fastcall CoinStructuredModel::refresh(CoinStructuredModel *this, int a2)
{
  CoinStructuredModel::coinBlock(this, a2);
  return CoinStructuredModel::fillInfo(this);
}

