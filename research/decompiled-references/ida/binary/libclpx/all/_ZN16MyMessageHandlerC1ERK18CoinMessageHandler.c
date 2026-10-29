// Alternative name is '_ZN16MyMessageHandlerC2ERK18CoinMessageHandler'
void __fastcall MyMessageHandler::MyMessageHandler(MyMessageHandler *this, const CoinMessageHandler *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rbp
  __int64 v5; // rax

  CoinMessageHandler::CoinMessageHandler(this, a2);
  *((_QWORD *)this + 200) = 0;
  *((_QWORD *)this + 201) = 0;
  *((_QWORD *)this + 203) = 0;
  *((_QWORD *)this + 204) = 0;
  *((_QWORD *)this + 205) = 0;
  *((_QWORD *)this + 206) = 0;
  *((_QWORD *)this + 207) = 0;
  *(_QWORD *)this = &off_4D1380;
  *((_QWORD *)this + 208) = 0;
  *((_QWORD *)this + 209) = 0;
  *((_QWORD *)this + 210) = 0;
  *((_QWORD *)this + 202) = 8;
  v2 = operator new(0x40u);
  v3 = *((_QWORD *)this + 202);
  *((_QWORD *)this + 201) = v2;
  v4 = (__int64 *)(v2 + 8 * ((unsigned __int64)(v3 - 1) >> 1));
  v5 = operator new(0x1F8u);
  *v4 = v5;
  *((_QWORD *)this + 206) = v4;
  *((_QWORD *)this + 210) = v4;
  *((_QWORD *)this + 204) = v5;
  *((_QWORD *)this + 205) = v5 + 504;
  *((_QWORD *)this + 208) = v5;
  *((_QWORD *)this + 209) = v5 + 504;
  *((_QWORD *)this + 203) = v5;
  *((_QWORD *)this + 207) = v5;
  *((_DWORD *)this + 422) = -1;
}

