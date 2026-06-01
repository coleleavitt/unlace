CoinMessageHandler *__fastcall CoinMessageHandler::clone(CoinMessageHandler *this)
{
  CoinMessageHandler *v1; // rbx

  v1 = (CoinMessageHandler *)operator new(0x640u);
  CoinMessageHandler::CoinMessageHandler(v1, this);
  return v1;
}

