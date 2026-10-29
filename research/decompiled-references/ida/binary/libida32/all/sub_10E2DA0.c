void __fastcall sub_10E2DA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        const __m128i *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  const __m128i *v13; // rbp
  unsigned int v14; // r8d
  void *v15; // rax
  const __m128i *v16; // r15
  const __m128i *v17; // rsi
  __m128i v18; // xmm0
  __int8 *v19; // rsi
  __int64 v20; // r13
  __int64 v21; // rbp
  char *v22; // rsi
  __int64 v23; // rdx
  __m128i *v24; // rsi
  __int64 v25; // rdi
  size_t v26; // rdx
  unsigned int v27; // [rsp+0h] [rbp-68h]
  unsigned int v28; // [rsp+0h] [rbp-68h]
  __m128i v29; // [rsp+10h] [rbp-58h] BYREF
  __m128i v30[4]; // [rsp+20h] [rbp-48h] BYREF

  *(_QWORD *)(a1 + 24) = a4;
  v13 = a8;
  *(_QWORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 64) = 0x1000000000LL;
  v14 = *(_DWORD *)(a7 + 8);
  *(_QWORD *)a1 = &off_2B7EF90;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 48) = a12;
  v15 = (void *)(a1 + 72);
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  if ( v14 )
  {
    v25 = a1 + 56;
    if ( v25 != a7 )
    {
      v26 = 8LL * v14;
      if ( v14 <= 0x10uLL
        || (v28 = v14,
            sub_22134E0(v25, v15, v14, 8),
            v15 = *(void **)(a1 + 56),
            v14 = v28,
            (v26 = 8LL * *(unsigned int *)(a7 + 8)) != 0) )
      {
        v27 = v14;
        memcpy(v15, *(const void **)a7, v26);
        v14 = v27;
      }
      *(_DWORD *)(a1 + 64) = v14;
    }
  }
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 256) = a1 + 272;
  *(_QWORD *)(a1 + 264) = 0x1000000000LL;
  *(_QWORD *)(a1 + 400) = a1 + 416;
  *(_WORD *)(a1 + 512) = 0;
  v16 = (const __m128i *)((char *)a8 + 40 * a9);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_BYTE *)(a1 + 416) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_BYTE *)(a1 + 504) = 0;
  if ( v16 != a8 )
  {
    do
    {
      while ( v13->m128i_i32[2] != 1 )
      {
LABEL_4:
        v13 = (const __m128i *)((char *)v13 + 40);
        if ( v16 == v13 )
          goto LABEL_8;
      }
      v17 = *(const __m128i **)(a1 + 208);
      if ( v17 == *(const __m128i **)(a1 + 216) )
      {
        sub_10E2C00(a1 + 200, v17, v13);
        goto LABEL_4;
      }
      v18 = _mm_loadu_si128(v13);
      v19 = &v17[2].m128i_i8[8];
      v13 = (const __m128i *)((char *)v13 + 40);
      *(__m128i *)(v19 - 40) = v18;
      *(__m128i *)(v19 - 24) = _mm_loadu_si128((const __m128i *)((char *)v13 - 24));
      *((_QWORD *)v19 - 1) = v13[-1].m128i_i64[1];
      *(_QWORD *)(a1 + 208) = v19;
    }
    while ( v16 != v13 );
  }
LABEL_8:
  v20 = a10 + 40 * a11;
  if ( a10 != v20 )
  {
    v21 = a10;
    do
    {
      while ( *(_DWORD *)(v21 + 8) != 1 )
      {
LABEL_10:
        v21 += 40;
        if ( v20 == v21 )
          return;
      }
      v22 = *(char **)v21;
      v29.m128i_i64[0] = (__int64)v30;
      v23 = -1;
      if ( v22 )
        v23 = (__int64)&v22[strlen(v22)];
      sub_10E2350(&v29, v22, v23);
      v24 = *(__m128i **)(a1 + 232);
      if ( v24 == *(__m128i **)(a1 + 240) )
      {
        sub_A5EC30((void ***)(a1 + 224), v24, &v29);
        if ( (__m128i *)v29.m128i_i64[0] != v30 )
          operator delete((void *)v29.m128i_i64[0]);
        goto LABEL_10;
      }
      v24->m128i_i64[0] = (__int64)v24[1].m128i_i64;
      if ( (__m128i *)v29.m128i_i64[0] == v30 )
      {
        v24[1] = _mm_load_si128(v30);
      }
      else
      {
        v24->m128i_i64[0] = v29.m128i_i64[0];
        v24[1].m128i_i64[0] = v30[0].m128i_i64[0];
      }
      v21 += 40;
      v24->m128i_i64[1] = v29.m128i_i64[1];
      *(_QWORD *)(a1 + 232) += 32LL;
    }
    while ( v20 != v21 );
  }
}

