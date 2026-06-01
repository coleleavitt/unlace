__int64 *__fastcall sub_DF7E50(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rax
  __m128i si128; // xmm0
  __m128i v6; // xmm0

  v2 = *(_QWORD *)(a2 + 872);
  if ( v2 )
  {
    (*(void (**)(void))(*(_QWORD *)v2 + 48LL))();
  }
  else
  {
    *a1 = (__int64)(a1 + 2);
    v4 = operator new(0x38u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_18B6A20);
    a1[2] = 55;
    *a1 = v4;
    *(__m128i *)v4 = si128;
    *(__m128i *)(v4 + 16) = _mm_load_si128((const __m128i *)&xmmword_18B6A30);
    v6 = _mm_load_si128((const __m128i *)&xmmword_18B6A40);
    a1[1] = 55;
    *(__m128i *)(v4 + 32) = v6;
    strcpy((char *)(v4 + 47), "ot known");
  }
  return a1;
}

