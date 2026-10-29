void __fastcall CoinParam::~CoinParam(CoinParam *this)
{
  CoinParam::~CoinParam(this);
  operator delete(this);
}

