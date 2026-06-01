bool __fastcall CoinMessageHandler::prefix(CoinMessageHandler *this)
{
  return *((_DWORD *)this + 31) != 0;
}

