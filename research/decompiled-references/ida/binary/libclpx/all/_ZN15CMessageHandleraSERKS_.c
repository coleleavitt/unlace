__int64 __fastcall CMessageHandler::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    CoinMessageHandler::operator=();
    *(_QWORD *)(a1 + 1600) = *(_QWORD *)(a2 + 1600);
    *(__m128i *)(a1 + 1608) = _mm_loadu_si128((const __m128i *)(a2 + 1608));
  }
  return a1;
}

