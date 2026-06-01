// Alternative name is '_ZN8ClpModelC2Eb'
void __fastcall ClpModel::ClpModel(ClpModel *this)
{
  CoinMessageHandler *v1; // rbp
  ClpEventHandler *v2; // rbp

  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *(_QWORD *)this = 0x3FF0000000000000LL;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 10) = 0x3BC79CA10C924223LL;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 11) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 12) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 27) = 0;
  *((_QWORD *)this + 28) = 0;
  *((_QWORD *)this + 29) = 0;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_DWORD *)this + 64) = 3;
  *(_QWORD *)((char *)this + 316) = 0xFFFFFFFF00000000LL;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *(_QWORD *)((char *)this + 308) = 0;
  *(_QWORD *)((char *)this + 324) = 0;
  *(_QWORD *)((char *)this + 332) = 0;
  *((_BYTE *)this + 352) = 1;
  *((_DWORD *)this + 89) = 12345678;
  *((_QWORD *)this + 46) = 0;
  *((_QWORD *)this + 47) = 0;
  *((_QWORD *)this + 48) = 0;
  *((_QWORD *)this + 49) = 0;
  *((_QWORD *)this + 50) = 0;
  *((_QWORD *)this + 51) = 0;
  CoinMessages::CoinMessages((ClpModel *)((char *)this + 416), 0);
  CoinMessages::CoinMessages((ClpModel *)((char *)this + 448), 0);
  *((_OWORD *)this + 30) = -1;
  CoinPackedMatrix::CoinPackedMatrix((ClpModel *)((char *)this + 496));
  CoinPackedMatrix::CoinPackedMatrix((ClpModel *)((char *)this + 584));
  *((_QWORD *)this + 84) = 0;
  *((_QWORD *)this + 1) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 85) = 0;
  *((_DWORD *)this + 76) = 1;
  *((_QWORD *)this + 2) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 86) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)this + 37) = 0x98967F7FFFFFFFLL;
  *((_QWORD *)this + 3) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 4) = 0x3E7AD7F29ABCAF48LL;
  *((_QWORD *)this + 8) = 0x3E45798EE2308C3ALL;
  *((_QWORD *)this + 6) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 7) = 0xBFF0000000000000LL;
  std::string::assign((ClpModel *)((char *)this + 688), "ClpDefaultName", 0xEu);
  v1 = (CoinMessageHandler *)operator new(0x640u);
  CoinMessageHandler::CoinMessageHandler(v1);
  *((_QWORD *)this + 43) = v1;
  CoinMessageHandler::setLogLevel(v1, 1);
  v2 = (ClpEventHandler *)operator new(0x10u);
  ClpEventHandler::ClpEventHandler(v2, nullptr);
  *((_QWORD *)this + 45) = v2;
  *((_DWORD *)this + 89) = 1234567;
}

