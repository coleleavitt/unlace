__int64 __fastcall sub_1AD6F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // r15
  __m128i si128; // xmm0
  size_t v14; // r14
  void *v15; // rax
  __m128i v16[4]; // [rsp+0h] [rbp-48h] BYREF

  v5 = (const char *)&qword_8CAD40;
  v6 = sub_4AED50(a1, &qword_8CAD40, a3, a4);
  if ( v6 < 0 )
    return 0;
  v7 = v6;
  v8 = a1[28];
  if ( v7 < v8 )
  {
    v9 = a1[27] + 24 * v7;
  }
  else
  {
    if ( v7 >= v8 + a1[31] )
      return 0;
    v9 = a1[30] + 24 * (v7 - v8);
  }
  if ( !v9 )
    return 0;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = 0;
  si128 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  if ( v10 )
  {
    v14 = 8 * v10;
    v16[0] = si128;
    v15 = (void *)qalloc_or_throw(8 * v10);
    v5 = *(const char **)v9;
    v11 = (__int64)v15;
    memcpy(v15, *(const void **)v9, v14);
    si128 = _mm_load_si128(v16);
  }
  if ( qword_8CAD40 )
  {
    v16[0] = si128;
    *(_QWORD *)&xmmword_8CAD48 = 0;
    qfree(qword_8CAD40, v5);
    si128 = _mm_load_si128(v16);
  }
  qword_8CAD40 = v11;
  xmmword_8CAD48 = (__int128)si128;
  return sub_1ACB20(a1 + 23, a2, nullptr, v7);
}
