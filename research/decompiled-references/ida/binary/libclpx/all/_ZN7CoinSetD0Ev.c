void __fastcall CoinSet::~CoinSet(CoinSet *this)
{
  CoinSet::~CoinSet(this);
  operator delete(this);
}

