// Alternative name is '_ZN9CoinMpsIOC1Ev'
void __fastcall CoinMpsIO::CoinMpsIO(CoinMpsIO *this)
{
  _BYTE *v1; // rax
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  char *v6; // rax
  CoinMessageHandler *v7; // r12
  _BYTE v8[56]; // [rsp+0h] [rbp-38h] BYREF

  v1 = malloc(1u);
  *v1 = 0;
  *(_QWORD *)this = v1;
  v2 = malloc(1u);
  *v2 = 0;
  *((_QWORD *)this + 1) = v2;
  v3 = malloc(1u);
  *v3 = 0;
  *((_QWORD *)this + 2) = v3;
  v4 = malloc(1u);
  *v4 = 0;
  *((_QWORD *)this + 3) = v4;
  v5 = malloc(1u);
  *((_QWORD *)this + 5) = 0;
  *v5 = 0;
  *((_QWORD *)this + 4) = v5;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_QWORD *)this + 18) = 0;
  v6 = (char *)malloc(5u);
  if ( v6 != "????" )
    *(_DWORD *)v6 = 1061109567;
  v6[4] = 0;
  *((_QWORD *)this + 21) = v6;
  *((_DWORD *)this + 50) = 1;
  *((_BYTE *)this + 232) = 1;
  *((_QWORD *)this + 26) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 27) = 0x3D06849B86A12B9BLL;
  CoinMessages::CoinMessages((CoinMpsIO *)((char *)this + 240), 0);
  *((_QWORD *)this + 34) = 0;
  *((_BYTE *)this + 280) = 0;
  *(_QWORD *)((char *)this + 284) = 0;
  *(_QWORD *)((char *)this + 292) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 20) = 0;
  v7 = (CoinMessageHandler *)operator new(0x640u);
  CoinMessageHandler::CoinMessageHandler(v7);
  *((_QWORD *)this + 28) = v7;
  CoinMessage::CoinMessage(v8, 0);
  CoinMessages::operator=((char *)this + 240, v8);
  CoinMessages::~CoinMessages((CoinMessages *)v8);
}

