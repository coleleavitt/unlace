__int64 __fastcall CoinStructuredModel::addBlock(
        CoinStructuredModel *this,
        const std::string *a2,
        const std::string *a3,
        const CoinBaseModel *a4)
{
  CoinBaseModel *v5; // rax

  v5 = (CoinBaseModel *)(**(__int64 (__fastcall ***)(const CoinBaseModel *))a4)(a4);
  return CoinStructuredModel::addBlock(this, a2, a3, v5);
}

