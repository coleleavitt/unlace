// Alternative name is '_ZN15CMessageHandlerC2Ev'
void __fastcall CMessageHandler::CMessageHandler(CMessageHandler *this)
{
  CoinMessageHandler::CoinMessageHandler(this);
  *((_QWORD *)this + 200) = 0;
  *((_QWORD *)this + 201) = 0;
  *((_QWORD *)this + 202) = 0;
  *(_QWORD *)this = off_4D1330;
}

