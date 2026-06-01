unsigned __int64 __fastcall sub_367060(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // rax
  int v9; // ebx
  __m128i si128; // xmm0
  __m128 v11; // xmm0
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128 v15; // xmm4
  __m128 v16; // xmm5
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 v19; // r12
  __int64 v20; // rsi
  const char *v21; // rdi
  char v23; // [rsp-8h] [rbp-78h]
  __int64 v24; // [rsp+0h] [rbp-70h] BYREF
  __int64 v25; // [rsp+8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+10h] [rbp-60h] BYREF
  __int64 v27; // [rsp+18h] [rbp-58h] BYREF
  __int128 v28; // [rsp+20h] [rbp-50h]
  unsigned __int64 v29; // [rsp+30h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v28 = 0;
  v27 = 0;
  v8 = qvector_reserve(&v27, 0, 225, 1);
  v27 = v8;
  v9 = 0;
  *(_QWORD *)&v28 = 225;
  *(__m128i *)v8 = _mm_load_si128((const __m128i *)&xmmword_5DD180);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD190);
  *(_BYTE *)(v8 + 224) = 0;
  *(__m128i *)(v8 + 16) = si128;
  *(__m128i *)(v8 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DD1A0);
  *(__m128i *)(v8 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DD1B0);
  *(__m128i *)(v8 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DD1C0);
  *(__m128i *)(v8 + 80) = _mm_load_si128((const __m128i *)&xmmword_5DD1D0);
  *(__m128i *)(v8 + 96) = _mm_load_si128((const __m128i *)&xmmword_5DD1E0);
  *(__m128i *)(v8 + 112) = _mm_load_si128((const __m128i *)&xmmword_5DD1F0);
  *(__m128i *)(v8 + 128) = _mm_load_si128((const __m128i *)&xmmword_5DD200);
  *(__m128i *)(v8 + 144) = _mm_load_si128((const __m128i *)&xmmword_5DD210);
  *(__m128i *)(v8 + 160) = _mm_load_si128((const __m128i *)&xmmword_5DD220);
  *(__m128i *)(v8 + 176) = _mm_load_si128((const __m128i *)&xmmword_5DD230);
  *(__m128i *)(v8 + 192) = _mm_load_si128((const __m128i *)&xmmword_5DD240);
  v11 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD250);
  *(__m128 *)(v8 + 208) = v11;
  while ( (unsigned __int8)get_mapping(&v24, &v25, &v26, v9, *(double *)v11.m128_u64) )
  {
    sub_16FAA0(
      &v27,
      (__int64)"  %08a..%08a -> %08a..%08a\n",
      *(double *)v11.m128_u64,
      *(double *)a2.m128_u64,
      *(double *)a3.m128_u64,
      *(double *)a4.m128_u64);
    ++v9;
  }
  v17 = v28;
  if ( (_QWORD)v28 )
  {
    v18 = v28 + 1;
    v19 = v28 + 2;
    v20 = v27;
    v17 = v28 - 1;
    if ( *((_QWORD *)&v28 + 1) >= (unsigned __int64)(v28 + 2) )
      goto LABEL_6;
  }
  else
  {
    v20 = v27;
    v19 = 3;
    v18 = 2;
    if ( *((_QWORD *)&v28 + 1) >= 3u )
      goto LABEL_6;
  }
  v27 = qvector_reserve(&v27, v20, v19, 1);
  v20 = v27;
LABEL_6:
  *(_QWORD *)&v28 = v19;
  v21 = &s1;
  *(_BYTE *)(v20 + v18) = 0;
  *(_WORD *)(v27 + v17) = 2570;
  if ( (_QWORD)v28 )
    LODWORD(v21) = v27;
  sub_1697D0((int)v21, (__int64)sub_34CA10, (__int64)sub_34C790, v12, v13, v14, v11, a2, a3, a4, v15, v16, a7, a8, v23);
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27, (const char *)sub_34CA10);
  }
  return v29 - __readfsqword(0x28u);
}
