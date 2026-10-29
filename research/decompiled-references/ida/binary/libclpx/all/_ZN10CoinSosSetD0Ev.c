void __fastcall CoinSosSet::~CoinSosSet(CoinSosSet *this)
{
  CoinSosSet::~CoinSosSet(this);
  operator delete(this);
}

