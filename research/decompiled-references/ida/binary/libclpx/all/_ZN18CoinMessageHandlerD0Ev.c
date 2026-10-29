void __fastcall CoinMessageHandler::~CoinMessageHandler(CoinMessageHandler *this)
{
  CoinMessageHandler::~CoinMessageHandler(this);
  operator delete(this);
}

