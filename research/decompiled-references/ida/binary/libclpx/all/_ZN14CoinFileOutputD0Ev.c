void __fastcall CoinFileOutput::~CoinFileOutput(CoinFileOutput *this)
{
  CoinFileOutput::~CoinFileOutput(this);
  operator delete(this);
}

