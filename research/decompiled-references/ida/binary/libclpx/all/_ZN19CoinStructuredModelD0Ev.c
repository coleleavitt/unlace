void __fastcall CoinStructuredModel::~CoinStructuredModel(CoinStructuredModel *this)
{
  CoinStructuredModel::~CoinStructuredModel(this);
  operator delete(this);
}

