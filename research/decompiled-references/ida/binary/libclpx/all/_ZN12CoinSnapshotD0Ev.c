void __fastcall CoinSnapshot::~CoinSnapshot(CoinSnapshot *this)
{
  CoinSnapshot::~CoinSnapshot(this);
  operator delete(this);
}

