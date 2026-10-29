CoinMessageHandler *__fastcall CoinMessageHandler::operator=(CoinMessageHandler *a1, const CoinMessageHandler *a2)
{
  if ( a1 != a2 )
    CoinMessageHandler::gutsOfCopy(a1, a2);
  return a1;
}

