__int64 __fastcall sub_1E2AF0(_QWORD *a1)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  __int64 v4; // rax
  __m128i v5; // xmm1
  __int64 v6; // rdi
  __int64 result; // rax
  __m128i v8; // xmm2

  sub_1E8790(a1, 0, 0, 0);
  sub_1E88C0(a1, 1);
  v2 = qalloc_or_throw(24);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC600);
  *(_QWORD *)v2 = dbgreg_place_t___vtable;
  *(__m128i *)(v2 + 8) = si128;
  a1[14] = v2;
  v4 = qalloc_or_throw(24);
  v5 = _mm_load_si128((const __m128i *)&xmmword_5DC600);
  *(_QWORD *)v4 = dbgreg_place_t___vtable;
  *(__m128i *)(v4 + 8) = v5;
  v6 = a1[13];
  a1[15] = v4;
  if ( v6 )
  {
    qfree(v6, (_BYTE *)&dword_0 + 1);
    a1[13] = 0;
  }
  result = qalloc_or_throw(24);
  v8 = _mm_load_si128((const __m128i *)&xmmword_5DC600);
  *(_QWORD *)result = dbgreg_place_t___vtable;
  *(__m128i *)(result + 8) = v8;
  a1[13] = result;
  return result;
}
