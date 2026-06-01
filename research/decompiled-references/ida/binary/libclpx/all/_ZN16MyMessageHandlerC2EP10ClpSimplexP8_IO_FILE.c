// Alternative name is '_ZN16MyMessageHandlerC1EP10ClpSimplexP8_IO_FILE'
void __fastcall MyMessageHandler::MyMessageHandler(MyMessageHandler *this, ClpSimplex *a2, _IO_FILE *a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rbp
  __int64 v6; // rax

  CoinMessageHandler::CoinMessageHandler(this);
  *((_QWORD *)this + 200) = a2;
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
  v3 = operator new(0x40u);
  v4 = *((_QWORD *)this + 202);
  *((_QWORD *)this + 201) = v3;
  v5 = (__int64 *)(v3 + 8 * ((unsigned __int64)(v4 - 1) >> 1));
  v6 = operator new(0x1F8u);
  *v5 = v6;
  *((_QWORD *)this + 206) = v5;
  *((_QWORD *)this + 210) = v5;
  *((_QWORD *)this + 204) = v6;
  *((_QWORD *)this + 205) = v6 + 504;
  *((_QWORD *)this + 208) = v6;
  *((_QWORD *)this + 209) = v6 + 504;
  *((_QWORD *)this + 203) = v6;
  *((_QWORD *)this + 207) = v6;
  *((_DWORD *)this + 422) = -1;
}

