// Alternative name is '_ZN22CoinPrePostsolveMatrixC1Eiii'
void __fastcall CoinPrePostsolveMatrix::CoinPrePostsolveMatrix(CoinPrePostsolveMatrix *this, int a2, int a3, int a4)
{
  CoinMessageHandler *v5; // r12

  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  *(_QWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = a4;
  *((_QWORD *)this + 4) = 0x4000000000000000LL;
  *((_QWORD *)this + 5) = 0;
  *((_QWORD *)this + 6) = 0;
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
  *((_QWORD *)this + 19) = 0;
  *((_QWORD *)this + 20) = 0;
  *((_QWORD *)this + 21) = 0;
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 23) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_QWORD *)this + 25) = 0;
  *((_QWORD *)this + 26) = 0;
  *((_BYTE *)this + 216) = 0;
  CoinMessage::CoinMessage((char *)this + 224, 0);
  v5 = (CoinMessageHandler *)operator new(0x640u);
  CoinMessageHandler::CoinMessageHandler(v5);
  *((_QWORD *)this + 26) = v5;
  *((_BYTE *)this + 216) = 1;
  *((_DWORD *)this + 6) = (int)((double)a4 * *((double *)this + 4));
}

