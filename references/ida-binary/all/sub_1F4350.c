void __fastcall sub_1F4350(__int64 a1, const __m128i *a2, __int64 a3)
{
  __m128i v3; // xmm0

  if ( a2 )
  {
    *(__m128i *)(a1 + 264) = _mm_loadu_si128(a2);
    *(__m128i *)(a1 + 280) = _mm_loadu_si128(a2 + 1);
    *(__m128i *)(a1 + 296) = _mm_loadu_si128(a2 + 2);
    *(__m128i *)(a1 + 312) = _mm_loadu_si128(a2 + 3);
    *(__m128i *)(a1 + 328) = _mm_loadu_si128(a2 + 4);
    *(__m128i *)(a1 + 344) = _mm_loadu_si128(a2 + 5);
    v3 = _mm_loadu_si128(a2 + 6);
    *(_QWORD *)(a1 + 376) = a3;
    *(__m128i *)(a1 + 360) = v3;
  }
  else
  {
    *(_DWORD *)(a1 + 264) = 112;
    *(_QWORD *)(a1 + 368) = 0;
    *(_QWORD *)(a1 + 376) = 0;
    *(_OWORD *)(a1 + 272) = 0;
    *(_OWORD *)(a1 + 288) = 0;
    *(_OWORD *)(a1 + 304) = 0;
    *(_OWORD *)(a1 + 320) = 0;
    *(_OWORD *)(a1 + 336) = 0;
    *(_OWORD *)(a1 + 352) = 0;
  }
}
