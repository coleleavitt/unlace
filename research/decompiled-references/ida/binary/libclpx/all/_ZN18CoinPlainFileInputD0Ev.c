void __fastcall CoinPlainFileInput::~CoinPlainFileInput(CoinPlainFileInput *this)
{
  CoinPlainFileInput::~CoinPlainFileInput(this);
  operator delete(this);
}

