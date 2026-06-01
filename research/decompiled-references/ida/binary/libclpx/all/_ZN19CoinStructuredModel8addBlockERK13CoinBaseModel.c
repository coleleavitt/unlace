__int64 __fastcall CoinStructuredModel::addBlock(CoinStructuredModel *this, const CoinBaseModel *a2)
{
  return CoinStructuredModel::addBlock(
           this,
           (const CoinBaseModel *)((char *)a2 + 40),
           (const CoinBaseModel *)((char *)a2 + 48),
           a2);
}

