// Alternative name is '_ZN9CoinMpsIOC2ERKS_'
void __fastcall CoinMpsIO::CoinMpsIO(CoinMpsIO *this, const CoinMpsIO *a2)
{
  _BYTE *v2; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rax
  char *v7; // rax
  int v8; // eax
  char v9; // al
  CoinMessageHandler *v10; // r13
  _BYTE v11[72]; // [rsp+0h] [rbp-48h] BYREF

  v2 = malloc(1u);
  *v2 = 0;
  *(_QWORD *)this = v2;
  v3 = malloc(1u);
  *v3 = 0;
  *((_QWORD *)this + 1) = v3;
  v4 = malloc(1u);
  *v4 = 0;
  *((_QWORD *)this + 2) = v4;
  v5 = malloc(1u);
  *v5 = 0;
  *((_QWORD *)this + 3) = v5;
  v6 = malloc(1u);
  *((_QWORD *)this + 5) = 0;
  *v6 = 0;
  *((_QWORD *)this + 4) = v6;
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
  v7 = (char *)malloc(5u);
  if ( v7 != "????" )
    *(_DWORD *)v7 = 1061109567;
  v7[4] = 0;
  *((_QWORD *)this + 21) = v7;
  *((_DWORD *)this + 50) = 1;
  *((_BYTE *)this + 232) = 1;
  *((_QWORD *)this + 26) = 0x7FEFFFFFFFFFFFFFLL;
  *((_QWORD *)this + 27) = 0x3D06849B86A12B9BLL;
  CoinMessages::CoinMessages((CoinMpsIO *)((char *)this + 240), 0);
  *((_QWORD *)this + 34) = 0;
  *((_DWORD *)this + 71) = *((_DWORD *)a2 + 71);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  v8 = *((_DWORD *)a2 + 73);
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_DWORD *)this + 73) = v8;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 20) = 0;
  if ( *((_QWORD *)a2 + 12) || *((_QWORD *)a2 + 14) )
    CoinMpsIO::gutsOfCopy(this, a2);
  v9 = *((_BYTE *)a2 + 232);
  *((_BYTE *)this + 232) = v9;
  if ( v9 )
  {
    v10 = (CoinMessageHandler *)operator new(0x640u);
    CoinMessageHandler::CoinMessageHandler(v10, *((const CoinMessageHandler **)a2 + 28));
    *((_QWORD *)this + 28) = v10;
  }
  else
  {
    *((_QWORD *)this + 28) = *((_QWORD *)a2 + 28);
  }
  CoinMessage::CoinMessage(v11, 0);
  CoinMessages::operator=((char *)this + 240, v11);
  CoinMessages::~CoinMessages((CoinMessages *)v11);
}

