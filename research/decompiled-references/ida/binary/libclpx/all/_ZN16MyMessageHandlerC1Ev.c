// Alternative name is '_ZN16MyMessageHandlerC2Ev'
void __fastcall MyMessageHandler::MyMessageHandler(MyMessageHandler *this)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 *v3; // rbp
  __int64 v4; // rax

  CoinMessageHandler::CoinMessageHandler(this);
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
  v1 = operator new(0x40u);
  v2 = *((_QWORD *)this + 202);
  *((_QWORD *)this + 201) = v1;
  v3 = (__int64 *)(v1 + 8 * ((unsigned __int64)(v2 - 1) >> 1));
  v4 = operator new(0x1F8u);
  *v3 = v4;
  *((_QWORD *)this + 206) = v3;
  *((_QWORD *)this + 210) = v3;
  *((_QWORD *)this + 204) = v4;
  *((_QWORD *)this + 205) = v4 + 504;
  *((_QWORD *)this + 208) = v4;
  *((_QWORD *)this + 209) = v4 + 504;
  *((_QWORD *)this + 203) = v4;
  *((_QWORD *)this + 207) = v4;
  *((_DWORD *)this + 422) = -1;
}

