CoinMessageHandler *__fastcall CoinMessageHandler::message(CoinMessageHandler *this, int a2)
{
  if ( a2 >= 0 )
    CoinMessageHandler::calcPrintStatus(this, a2, 0);
  return this;
}

