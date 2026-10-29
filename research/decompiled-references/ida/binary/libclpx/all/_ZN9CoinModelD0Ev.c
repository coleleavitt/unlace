void __fastcall CoinModel::~CoinModel(CoinModel *this)
{
  CoinModel::~CoinModel(this);
  operator delete(this);
}

