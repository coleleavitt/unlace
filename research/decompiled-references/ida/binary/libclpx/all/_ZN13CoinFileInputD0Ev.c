void __fastcall CoinFileInput::~CoinFileInput(CoinFileInput *this)
{
  CoinFileInput::~CoinFileInput(this);
  operator delete(this);
}

