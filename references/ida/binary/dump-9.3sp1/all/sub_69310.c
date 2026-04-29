__int64 __fastcall sub_69310(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned __int64 v8; // r12
  void *v9; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __m128i si128; // xmm0
  __int64 v13; // rdi
  void *v14; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm0
  __int64 v18; // rdi
  void *v19; // r13
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rdi
  void *v24; // r13
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdi
  void *v29; // r13
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rdi
  const void *v34; // rsi
  void *v35; // r13
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rdx
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // rax
  __int64 i; // r12
  __int64 v45; // rax
  _QWORD *v46; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rdi
  _DWORD *v49; // rax
  _DWORD *v50; // rcx
  __int64 v52; // r12
  __int64 v53; // r12
  __int64 v54; // r12
  void *v55; // rax
  __int64 v56; // r12
  __int64 v57; // r12
  __int64 v58; // r12
  const void *v59; // r14
  void *v60; // rdi
  __int64 v61; // rax
  char v62; // [rsp+8h] [rbp-50h]
  __m128i v64[4]; // [rsp+10h] [rbp-48h] BYREF

  v62 = a4;
  if ( !a2 || *(_DWORD *)(a2 + 76) == 1 )
    return 0;
  v6 = sub_68AC0(a1, a3, 0, a4);
  v7 = *(_DWORD *)(a2 + 24) & 0xFFFF7FFB;
  BYTE1(v7) |= 0x80u;
  *(_DWORD *)(v6 + 24) = v7;
  *(_QWORD *)(v6 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v6 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(v6 + 76) = *(_DWORD *)(a2 + 76);
  if ( a2 != v6 )
  {
    v8 = *(_QWORD *)(a2 + 400);
    if ( v8 > 1 )
    {
      v59 = *(const void **)(a2 + 392);
      v60 = *(void **)(v6 + 392);
      if ( *(_QWORD *)(v6 + 408) < v8 )
      {
        v61 = qvector_reserve(v6 + 392, *(_QWORD *)(v6 + 392), *(_QWORD *)(a2 + 400), 1);
        *(_QWORD *)(v6 + 392) = v61;
        v60 = (void *)v61;
      }
      *(_QWORD *)(v6 + 400) = v8;
      memmove(v60, v59, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(v6 + 392) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v6 + 400) = 0;
    }
  }
  v9 = nullptr;
  sub_648D0((__int64 *)(v6 + 80), (__int64 *)(a2 + 80));
  v11 = *(_QWORD *)(a2 + 104);
  si128 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  if ( v11 )
  {
    v64[0] = si128;
    v53 = 16 * v11;
    v9 = (void *)qalloc_or_throw(v53, a2 + 80, v53, v10);
    memcpy(v9, *(const void **)(a2 + 96), v53);
    si128 = _mm_load_si128(v64);
  }
  v13 = *(_QWORD *)(v6 + 96);
  if ( v13 )
  {
    *(_QWORD *)(v6 + 104) = 0;
    v64[0] = si128;
    qfree(v13);
    si128 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v6 + 96) = v9;
  v14 = nullptr;
  *(__m128i *)(v6 + 104) = si128;
  sub_648D0((__int64 *)(v6 + 120), (__int64 *)(a2 + 120));
  v16 = *(_QWORD *)(a2 + 144);
  v17 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( v16 )
  {
    v64[0] = v17;
    v52 = 16 * v16;
    v14 = (void *)qalloc_or_throw(v52, a2 + 120, v52, v15);
    memcpy(v14, *(const void **)(a2 + 136), v52);
    v17 = _mm_load_si128(v64);
  }
  v18 = *(_QWORD *)(v6 + 136);
  if ( v18 )
  {
    *(_QWORD *)(v6 + 144) = 0;
    v64[0] = v17;
    qfree(v18);
    v17 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v6 + 136) = v14;
  v19 = nullptr;
  *(__m128i *)(v6 + 144) = v17;
  sub_648D0((__int64 *)(v6 + 160), (__int64 *)(a2 + 160));
  v21 = *(_QWORD *)(a2 + 184);
  v22 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  if ( v21 )
  {
    v64[0] = v22;
    v58 = 16 * v21;
    v19 = (void *)qalloc_or_throw(v58, a2 + 160, v58, v20);
    memcpy(v19, *(const void **)(a2 + 176), v58);
    v22 = _mm_load_si128(v64);
  }
  v23 = *(_QWORD *)(v6 + 176);
  if ( v23 )
  {
    *(_QWORD *)(v6 + 184) = 0;
    v64[0] = v22;
    qfree(v23);
    v22 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v6 + 176) = v19;
  v24 = nullptr;
  *(__m128i *)(v6 + 184) = v22;
  sub_648D0((__int64 *)(v6 + 200), (__int64 *)(a2 + 200));
  v26 = *(_QWORD *)(a2 + 224);
  v27 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)v26);
  if ( v26 )
  {
    v64[0] = v27;
    v57 = 16 * v26;
    v24 = (void *)qalloc_or_throw(v57, a2 + 200, v57, v25);
    memcpy(v24, *(const void **)(a2 + 216), v57);
    v27 = _mm_load_si128(v64);
  }
  v28 = *(_QWORD *)(v6 + 216);
  if ( v28 )
  {
    *(_QWORD *)(v6 + 224) = 0;
    v64[0] = v27;
    qfree(v28);
    v27 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v6 + 216) = v24;
  v29 = nullptr;
  *(__m128i *)(v6 + 224) = v27;
  sub_648D0((__int64 *)(v6 + 240), (__int64 *)(a2 + 240));
  v31 = *(_QWORD *)(a2 + 264);
  v32 = _mm_unpacklo_epi64((__m128i)v31, (__m128i)v31);
  if ( v31 )
  {
    v64[0] = v32;
    v56 = 16 * v31;
    v29 = (void *)qalloc_or_throw(v56, a2 + 240, v56, v30);
    memcpy(v29, *(const void **)(a2 + 256), v56);
    v32 = _mm_load_si128(v64);
  }
  v33 = *(_QWORD *)(v6 + 256);
  if ( v33 )
  {
    *(_QWORD *)(v6 + 264) = 0;
    v64[0] = v32;
    qfree(v33);
    v32 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v6 + 256) = v29;
  v34 = (const void *)(a2 + 280);
  v35 = nullptr;
  *(__m128i *)(v6 + 264) = v32;
  sub_648D0((__int64 *)(v6 + 280), (__int64 *)(a2 + 280));
  v39 = *(_QWORD *)(a2 + 304);
  v40 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
  if ( v39 )
  {
    v64[0] = v40;
    v54 = 16 * v39;
    v55 = (void *)qalloc_or_throw(v54, (__int64)v34, v54, v36);
    v34 = *(const void **)(a2 + 296);
    v35 = v55;
    memcpy(v55, v34, v54);
    v40 = _mm_load_si128(v64);
  }
  v41 = *(_QWORD *)(v6 + 296);
  if ( v41 )
  {
    *(_QWORD *)(v6 + 304) = 0;
    v64[0] = v40;
    qfree(v41);
    v40 = _mm_load_si128(v64);
  }
  *(_QWORD *)(v6 + 296) = v35;
  v42 = 0;
  *(__m128i *)(v6 + 304) = v40;
  *(_QWORD *)(v6 + 320) = *(_QWORD *)(a2 + 320);
  *(_QWORD *)(v6 + 328) = *(_QWORD *)(a2 + 328);
  *(_QWORD *)(v6 + 336) = *(_QWORD *)(a2 + 336);
  *(_QWORD *)(v6 + 512) = *(_QWORD *)(a2 + 512);
  *(_QWORD *)(v6 + 520) = *(_QWORD *)(a2 + 520);
  v43 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(v6 + 416) = v43;
  *(_QWORD *)(v6 + 448) = v43;
  *(_DWORD *)(a1 + 4) &= 0xFFFFFE77;
  for ( i = *(_QWORD *)(a2 + 48); i; v42 = (__int64)v47 )
  {
    v45 = j__qalloc_or_throw(80, (__int64)v34, v39, v36);
    *(_QWORD *)(v45 + 32) = 0xFFFFFFFF00000000LL;
    v46 = (_QWORD *)v45;
    *(_QWORD *)(v45 + 40) = 0;
    *(_QWORD *)(v45 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v45 + 56) = 0;
    *(_QWORD *)(v45 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v45 + 72) = 0;
    *(_OWORD *)(v45 + 8) = 0;
    sub_1253A0(v45, i);
    v34 = v46;
    v47 = sub_A3160(v6, v46, v42);
    i = *(_QWORD *)(i + 8);
  }
  if ( *(_DWORD *)(v6 + 76) )
  {
    v48 = *(_QWORD *)(v6 + 16);
    v49 = *(_DWORD **)(v48 + 368);
    v50 = &v49[*(_QWORD *)(v48 + 376)];
    if ( v49 != v50 )
    {
      while ( a3 + 1 != *v49 )
      {
        if ( v50 == ++v49 )
          goto LABEL_39;
      }
      if ( v50 != v49 )
        sub_1D51C0(v48, 0);
    }
LABEL_39:
    LODWORD(v34) = 0;
    sub_1D51C0(v6, 0);
    sub_1D4FD0(a1);
    if ( (v62 & 2) != 0 && *(_QWORD *)(v6 + 376) == 1 )
      sub_A8320(v6);
  }
  if ( (v62 & 1) != 0 )
    sub_190300(a1, (_DWORD)v34, v39, v36, v37, v38);
  return v6;
}
