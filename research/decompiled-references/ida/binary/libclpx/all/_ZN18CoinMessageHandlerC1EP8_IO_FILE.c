// Alternative name is '_ZN18CoinMessageHandlerC2EP8_IO_FILE'
void __fastcall CoinMessageHandler::CoinMessageHandler(CoinMessageHandler *this, _IO_FILE *a2)
{
  __m128i si128; // xmm0

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
  *((_DWORD *)this + 26) = 1;
  *((_DWORD *)this + 31) = 255;
  CoinOneMessage::CoinOneMessage((CoinMessageHandler *)((char *)this + 128));
  si128 = _mm_load_si128((const __m128i *)&xmmword_296BA0);
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = 0;
  *((_QWORD *)this + 197) = a2;
  strcpy((char *)this + 1584, "%.8g");
  *(__m128i *)((char *)this + 108) = si128;
  *((_QWORD *)this + 195) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)this + 196) = 0xFFFFFFFF00000000LL;
  *((_DWORD *)this + 398) = 8;
  *((_BYTE *)this + 552) = 0;
  *((_QWORD *)this + 194) = (char *)this + 552;
  std::string::assign((CoinMessageHandler *)((char *)this + 1560), "Unk", 3u);
}

