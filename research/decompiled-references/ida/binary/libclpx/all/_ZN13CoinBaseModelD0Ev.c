void __fastcall CoinBaseModel::~CoinBaseModel(CoinBaseModel *this)
{
  CoinBaseModel::~CoinBaseModel(this);
  operator delete(this);
}

