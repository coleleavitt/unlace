void __fastcall CoinMessageHandler::setLogLevel(CoinMessageHandler *this, unsigned int a2, int a3)
{
  if ( a2 <= 3 && a3 >= -1 )
    *((_DWORD *)this + (int)a2 + 27) = a3;
}

