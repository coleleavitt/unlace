// Alternative name is '_ZN18CoinMessageHandlerC2ERKS_'
void __fastcall CoinMessageHandler::CoinMessageHandler(CoinMessageHandler *this, const CoinMessageHandler *a2)
{
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
  *((_QWORD *)this + 7) = 0;
  *(_QWORD *)this = off_4D1720;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  CoinOneMessage::CoinOneMessage((CoinMessageHandler *)((char *)this + 128));
  *((_QWORD *)this + 195) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  CoinMessageHandler::gutsOfCopy(this, a2);
}

