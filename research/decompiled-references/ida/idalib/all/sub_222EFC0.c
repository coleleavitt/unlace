__int64 __fastcall sub_222EFC0(__int64 a1, const void *a2, unsigned __int64 a3)
{
  __m128i si128; // xmm0
  size_t v4; // rbp
  void *v5; // rax

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v4 = a3;
  *(_QWORD *)a1 = off_2BEB0F8;
  v5 = (void *)(a1 + 32);
  *(_QWORD *)(a1 + 8) = a1 + 32;
  *(__m128i *)(a1 + 16) = si128;
  if ( a3 > 0x80 )
  {
    sub_2236E10(a1 + 8, a1 + 32, a3, 1);
    v5 = (void *)(*(_QWORD *)(a1 + 8) + *(_QWORD *)(a1 + 16));
    goto LABEL_5;
  }
  if ( a3 )
  {
LABEL_5:
    memcpy(v5, a2, v4);
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    a3 = v4 + *(_QWORD *)(a1 + 16);
  }
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 160) = a1 + 184;
  *(__m128i *)(a1 + 168) = si128;
  *(_QWORD *)(a1 + 312) = a1 + 336;
  *(__m128i *)(a1 + 320) = si128;
  *(_BYTE *)(a1 + 504) = 0;
  return a1 + 336;
}
