void __fastcall CoinMessageHandler::setLogLevel(CoinMessageHandler *this, int a2)
{
  if ( a2 >= -1 )
    *((_DWORD *)this + 26) = a2;
}

