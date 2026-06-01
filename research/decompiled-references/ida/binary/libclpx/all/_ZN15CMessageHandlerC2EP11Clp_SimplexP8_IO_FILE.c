// Alternative name is '_ZN15CMessageHandlerC1EP11Clp_SimplexP8_IO_FILE'
__int64 (__fastcall **__fastcall CMessageHandler::CMessageHandler(
        CoinMessageHandler *a1,
        __int64 a2))(CMessageHandler *__hidden this)
{
  CoinMessageHandler::CoinMessageHandler(a1);
  *((_QWORD *)a1 + 200) = a2;
  *((_QWORD *)a1 + 201) = 0;
  *((_QWORD *)a1 + 202) = 0;
  *(_QWORD *)a1 = off_4D1330;
  return off_4D1330;
}

