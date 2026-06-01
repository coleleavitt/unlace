CoinStructuredModel *__fastcall CoinStructuredModel::clone(CoinStructuredModel *this)
{
  CoinStructuredModel *v1; // rbx

  v1 = (CoinStructuredModel *)operator new(0xC0u);
  CoinStructuredModel::CoinStructuredModel(v1, this);
  return v1;
}

