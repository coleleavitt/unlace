__int64 __fastcall Clp_setLogLevel(__int64 a1, int a2)
{
  return CoinMessageHandler::setLogLevel(*(CoinMessageHandler **)(*(_QWORD *)a1 + 344LL), a2);
}

