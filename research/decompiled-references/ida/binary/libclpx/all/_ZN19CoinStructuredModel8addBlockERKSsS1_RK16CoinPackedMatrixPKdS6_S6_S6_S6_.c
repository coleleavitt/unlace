__int64 __fastcall CoinStructuredModel::addBlock(
        CoinStructuredModel *this,
        const std::string *a2,
        const std::string *a3,
        const CoinPackedMatrix *a4,
        const double *a5,
        const double *a6,
        double *a7,
        double *a8,
        double *a9)
{
  CoinModel *v11; // rbx

  v11 = (CoinModel *)operator new(0x2D0u);
  CoinModel::CoinModel(v11);
  CoinModel::loadBlock(v11, a4, a7, a8, a9, a5, a6);
  return CoinStructuredModel::addBlock(this, a2, a3, v11);
}

