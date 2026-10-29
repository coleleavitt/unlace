unsigned __int64 sub_12C370()
{
  __int64 v0; // rax
  int v1; // ebx
  __m128i si128; // xmm0
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rsi
  const char *v7; // rdi
  const char *v9; // [rsp+Ch] [rbp-58h] BYREF
  __int128 v10; // [rsp+14h] [rbp-50h]
  unsigned __int64 v11; // [rsp+24h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v10 = 0;
  v0 = qvector_reserve();
  v9 = (const char *)v0;
  v1 = 0;
  *(_QWORD *)&v10 = 225;
  *(__m128i *)v0 = _mm_load_si128((const __m128i *)&xmmword_1D2580);
  si128 = _mm_load_si128((const __m128i *)&xmmword_1D2590);
  *(_BYTE *)(v0 + 224) = 0;
  *(__m128i *)(v0 + 16) = si128;
  *(__m128i *)(v0 + 32) = _mm_load_si128((const __m128i *)&xmmword_1D25A0);
  *(__m128i *)(v0 + 48) = _mm_load_si128((const __m128i *)&xmmword_1D25B0);
  *(__m128i *)(v0 + 64) = _mm_load_si128((const __m128i *)&xmmword_1D25C0);
  *(__m128i *)(v0 + 80) = _mm_load_si128((const __m128i *)&xmmword_1D25D0);
  *(__m128i *)(v0 + 96) = _mm_load_si128((const __m128i *)&xmmword_1D25E0);
  *(__m128i *)(v0 + 112) = _mm_load_si128((const __m128i *)&xmmword_1D25F0);
  *(__m128i *)(v0 + 128) = _mm_load_si128((const __m128i *)&xmmword_1D2600);
  *(__m128i *)(v0 + 144) = _mm_load_si128((const __m128i *)&xmmword_1D2610);
  *(__m128i *)(v0 + 160) = _mm_load_si128((const __m128i *)&xmmword_1D2620);
  *(__m128i *)(v0 + 176) = _mm_load_si128((const __m128i *)&xmmword_1D2630);
  *(__m128i *)(v0 + 192) = _mm_load_si128((const __m128i *)&xmmword_1D2640);
  *(__m128i *)(v0 + 208) = _mm_load_si128((const __m128i *)&xmmword_1D2650);
  while ( (unsigned __int8)get_mapping() )
  {
    sub_96570((__int64 *)&v9);
    ++v1;
  }
  v3 = v10;
  if ( (_QWORD)v10 )
  {
    v4 = v10 + 1;
    v5 = v10 + 2;
    v6 = (__int64)v9;
    v3 = v10 - 1;
    if ( *((_QWORD *)&v10 + 1) >= (unsigned __int64)(v10 + 2) )
      goto LABEL_6;
  }
  else
  {
    v6 = (__int64)v9;
    v5 = 3;
    v4 = 2;
    if ( *((_QWORD *)&v10 + 1) >= 3u )
      goto LABEL_6;
  }
  v9 = (const char *)qvector_reserve();
  v6 = (__int64)v9;
LABEL_6:
  *(_QWORD *)&v10 = v5;
  v7 = s1;
  *(_BYTE *)(v6 + v4) = 0;
  *(_WORD *)&v9[v3] = 2570;
  if ( (_QWORD)v10 )
    v7 = v9;
  sub_8F730((__int64)v7, sub_1272E0, sub_127060);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree();
  }
  return v11 - __readfsqword(0x28u);
}

