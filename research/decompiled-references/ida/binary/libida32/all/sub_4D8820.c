void __fastcall sub_4D8820(__int64 *a1)
{
  const char *v1; // r12
  __int64 *v2; // rbx
  __m128i v3; // xmm2
  __m128i v4; // xmm3
  const char *v5; // r13
  __int64 v6; // r14
  void *v7; // rdi
  __int64 v8; // r15
  __m128i v9; // xmm0
  void *v10; // rdi
  __int64 v11; // r15
  __m128i v12; // xmm0
  const char *v13; // rsi
  void *v14; // rdi
  __m128i v15; // xmm4
  void *v16; // rdi
  __m128i si128; // xmm5
  __m128i v18; // [rsp+0h] [rbp-68h] BYREF
  __m128i v19; // [rsp+10h] [rbp-58h] BYREF
  __m128i v20[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = haystack;
  v2 = a1;
  v3 = _mm_loadu_si128((const __m128i *)a1 + 2);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 1));
  *((_OWORD *)a1 + 2) = 0;
  v5 = (const char *)a1[3];
  v6 = *a1;
  *(_OWORD *)(a1 + 1) = 0;
  *a1 = 0;
  a1[3] = 0;
  if ( v3.m128i_i64[0] )
    v1 = v5;
  v19 = v4;
  v20[0] = v3;
  while ( 1 )
  {
    v13 = haystack;
    if ( *(v2 - 2) )
      v13 = (const char *)*(v2 - 3);
    if ( strcasecmp(v1, v13) >= 0 )
      break;
    v7 = (void *)*v2;
    v8 = *(v2 - 6);
    *(v2 - 6) = 0;
    v9 = _mm_loadu_si128((const __m128i *)(v2 - 5));
    *(_OWORD *)(v2 - 5) = 0;
    if ( v7 )
    {
      v2[1] = 0;
      v18 = v9;
      qfree(v7);
      v9 = _mm_load_si128(&v18);
    }
    v10 = (void *)v2[3];
    *v2 = v8;
    *(__m128i *)(v2 + 1) = v9;
    v11 = *(v2 - 3);
    v12 = _mm_loadu_si128((const __m128i *)v2 - 1);
    *(v2 - 3) = 0;
    *((_OWORD *)v2 - 1) = 0;
    if ( v10 )
    {
      v2[4] = 0;
      v18 = v12;
      qfree(v10);
      v12 = _mm_load_si128(&v18);
    }
    v2[3] = v11;
    v2 -= 6;
    *((__m128i *)v2 + 5) = v12;
  }
  v14 = (void *)*v2;
  if ( *v2 )
  {
    v2[1] = 0;
    qfree(v14);
  }
  v15 = _mm_load_si128(&v19);
  v16 = (void *)v2[3];
  *v2 = v6;
  *(__m128i *)(v2 + 1) = v15;
  if ( v16 )
  {
    v2[4] = 0;
    qfree(v16);
  }
  si128 = _mm_load_si128(v20);
  v2[3] = (__int64)v5;
  *((__m128i *)v2 + 2) = si128;
}

