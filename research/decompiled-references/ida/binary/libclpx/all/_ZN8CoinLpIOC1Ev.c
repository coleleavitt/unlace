// Alternative name is '_ZN8CoinLpIOC2Ev'
void __fastcall CoinLpIO::CoinLpIO(CoinLpIO *this)
{
  _BYTE *v1; // rax
  CoinMessageHandler *v2; // r12
  _BYTE v3[56]; // [rsp+0h] [rbp-38h] BYREF

  v1 = malloc(1u);
  *v1 = 0;
  *(_QWORD *)this = v1;
  *((_BYTE *)this + 16) = 1;
  CoinMessages::CoinMessages((CoinLpIO *)((char *)this + 24), 0);
  *((_QWORD *)this + 7) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 27) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 28) = 0x3EE4F8B588E368F1LL;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_BYTE *)this + 256) = 0;
  *((_QWORD *)this + 172) = 0;
  *((_QWORD *)this + 18) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_QWORD *)this + 29) = 0x90000000ALL;
  *((_QWORD *)this + 30) = 0;
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0;
  *((_QWORD *)this + 36) = 0;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 38) = 0;
  *((_QWORD *)this + 39) = 0;
  *((_QWORD *)this + 40) = 0;
  *((_QWORD *)this + 41) = 0;
  v2 = (CoinMessageHandler *)operator new(0x640u);
  CoinMessageHandler::CoinMessageHandler(v2);
  *((_QWORD *)this + 1) = v2;
  CoinMessage::CoinMessage(v3, 0);
  CoinMessages::operator=((char *)this + 24, v3);
  CoinMessages::~CoinMessages((CoinMessages *)v3);
}

