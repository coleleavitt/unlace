// Alternative name is '_ZN15CMessageHandlerC1ERKS_'
void __fastcall CMessageHandler::CMessageHandler(CMessageHandler *this, const CMessageHandler *a2)
{
  CoinMessageHandler::CoinMessageHandler(this, a2);
  *(_QWORD *)this = off_4D1330;
  *((_QWORD *)this + 200) = *((_QWORD *)a2 + 200);
  *(__m128i *)((char *)this + 1608) = _mm_loadu_si128((const __m128i *)((char *)a2 + 1608));
}

