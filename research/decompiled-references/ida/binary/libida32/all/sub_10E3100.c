__int64 (__fastcall **__fastcall sub_10E3100(
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
        __int64 a12))()
{
  const __m128i *v13; // rbp
  unsigned int v14; // r8d
  void *v15; // rax
  __int64 v16; // rcx
  const __m128i *v17; // r15
  const __m128i *v18; // rsi
  __m128i v19; // xmm0
  __int8 *v20; // rsi
  __int64 v21; // rbp
  const char *v22; // r14
  __m128i *v23; // r15
  size_t v24; // rax
  size_t v25; // r12
  __m128i *v26; // rsi
  __m128i *v28; // rax
  __int64 v29; // rdi
  size_t v30; // rdx
  __int64 v31; // [rsp+0h] [rbp-68h]
  unsigned int v32; // [rsp+0h] [rbp-68h]
  __int64 v33; // [rsp+0h] [rbp-68h]
  unsigned int v34; // [rsp+0h] [rbp-68h]
  __m128i v35; // [rsp+10h] [rbp-58h] BYREF
  __m128i v36[4]; // [rsp+20h] [rbp-48h] BYREF

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
    v29 = a1 + 56;
    if ( v29 != a7 )
    {
      v30 = 8LL * v14;
      if ( v14 <= 0x10uLL
        || (v34 = v14,
            sub_22134E0(v29, v15, v14, 8),
            v15 = *(void **)(a1 + 56),
            v14 = v34,
            (v30 = 8LL * *(unsigned int *)(a7 + 8)) != 0) )
      {
        v32 = v14;
        memcpy(v15, *(const void **)a7, v30);
        v14 = v32;
      }
      *(_DWORD *)(a1 + 64) = v14;
    }
  }
  v16 = a1 + 200;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 256) = a1 + 272;
  *(_QWORD *)(a1 + 264) = 0x1000000000LL;
  *(_QWORD *)(a1 + 400) = a1 + 416;
  *(_WORD *)(a1 + 512) = 0;
  v17 = (const __m128i *)((char *)a8 + 40 * a9);
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
  if ( v17 != a8 )
  {
    do
    {
      while ( v13->m128i_i32[2] != 1 )
      {
LABEL_4:
        v13 = (const __m128i *)((char *)v13 + 40);
        if ( v17 == v13 )
          goto LABEL_8;
      }
      v18 = *(const __m128i **)(a1 + 208);
      if ( v18 == *(const __m128i **)(a1 + 216) )
      {
        v33 = v16;
        sub_10E2C00(v16, v18, v13);
        v16 = v33;
        goto LABEL_4;
      }
      v19 = _mm_loadu_si128(v13);
      v20 = &v18[2].m128i_i8[8];
      v13 = (const __m128i *)((char *)v13 + 40);
      *(__m128i *)(v20 - 40) = v19;
      *(__m128i *)(v20 - 24) = _mm_loadu_si128((const __m128i *)((char *)v13 - 24));
      *((_QWORD *)v20 - 1) = v13[-1].m128i_i64[1];
      *(_QWORD *)(a1 + 208) = v20;
    }
    while ( v17 != v13 );
  }
LABEL_8:
  v31 = a10 + 40 * a11;
  if ( v31 != a10 )
  {
    v21 = a10;
    while ( 1 )
    {
      while ( *(_DWORD *)(v21 + 8) != 1 )
      {
LABEL_10:
        v21 += 40;
        if ( v31 == v21 )
          goto LABEL_20;
      }
      v22 = *(const char **)v21;
      v23 = v36;
      v35.m128i_i64[0] = (__int64)v36;
      if ( !v22 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v24 = strlen(v22);
      v25 = v24;
      if ( v24 > 0xF )
        break;
      if ( v24 == 1 )
      {
        v36[0].m128i_i8[0] = *v22;
        goto LABEL_16;
      }
      if ( v24 )
      {
        v28 = v36;
LABEL_26:
        memcpy(v28, v22, v25);
        v23 = (__m128i *)v35.m128i_i64[0];
      }
LABEL_16:
      v35.m128i_i64[1] = v25;
      v23->m128i_i8[v25] = 0;
      v26 = *(__m128i **)(a1 + 232);
      if ( v26 == *(__m128i **)(a1 + 240) )
      {
        sub_A5EC30((void ***)(a1 + 224), v26, &v35);
        if ( (__m128i *)v35.m128i_i64[0] != v36 )
          operator delete((void *)v35.m128i_i64[0]);
        goto LABEL_10;
      }
      v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
      if ( (__m128i *)v35.m128i_i64[0] == v36 )
      {
        v26[1] = _mm_load_si128(v36);
      }
      else
      {
        v26->m128i_i64[0] = v35.m128i_i64[0];
        v26[1].m128i_i64[0] = v36[0].m128i_i64[0];
      }
      v21 += 40;
      v26->m128i_i64[1] = v35.m128i_i64[1];
      *(_QWORD *)(a1 + 232) += 32LL;
      if ( v31 == v21 )
        goto LABEL_20;
    }
    v28 = (__m128i *)operator new(v24 + 1);
    v36[0].m128i_i64[0] = v25;
    v35.m128i_i64[0] = (__int64)v28;
    goto LABEL_26;
  }
LABEL_20:
  *(_BYTE *)(a1 + 513) = 1;
  *(_QWORD *)a1 = &off_2B7EFC8;
  return &off_2B7EFC8;
}

