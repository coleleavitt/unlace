// Alternative name is '_ZN15CMessageHandlerC2ERK18CoinMessageHandler'
void __fastcall CMessageHandler::CMessageHandler(CMessageHandler *this, const CoinMessageHandler *a2)
{
  CoinMessageHandler::CoinMessageHandler(this, a2);
  *((_QWORD *)this + 200) = 0;
  *((_QWORD *)this + 201) = 0;
  *((_QWORD *)this + 202) = 0;
  *(_QWORD *)this = off_4D1330;
}

