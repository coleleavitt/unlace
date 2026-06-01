__int64 __fastcall sub_69310(__int64 a1, __int64 a2, int a3, char a4)
{
  _QWORD *v4; // rbx
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned __int64 v8; // r12
  void *v9; // r13
  unsigned __int64 v10; // rdx
  __m128i si128; // xmm0
  void *v12; // r13
  unsigned __int64 v13; // rdx
  __m128i v14; // xmm0
  void *v15; // r13
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm0
  void *v18; // r13
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm0
  void *v21; // r13
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm0
  void *v24; // r13
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 i; // r12
  __int64 v33; // rax
  _QWORD *v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rdi
  _DWORD *v37; // rax
  _DWORD *v38; // rcx
  size_t v40; // r12
  size_t v41; // r12
  size_t v42; // r12
  void *v43; // rax
  size_t v44; // r12
  size_t v45; // r12
  size_t v46; // r12
  const void *v47; // r14
  void *v48; // rdi
  __int64 v49; // rax
  __m128i v52[4]; // [rsp+10h] [rbp-48h] BYREF

  v4 = (_QWORD *)a2;
  if ( !a2 || *(_DWORD *)(a2 + 76) == 1 )
    return 0;
  v6 = sub_68AC0(a1, a3, 0);
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
      v47 = *(const void **)(a2 + 392);
      v48 = *(void **)(v6 + 392);
      if ( *(_QWORD *)(v6 + 408) < v8 )
      {
        v49 = qvector_reserve();
        *(_QWORD *)(v6 + 392) = v49;
        v48 = (void *)v49;
      }
      *(_QWORD *)(v6 + 400) = v8;
      memmove(v48, v47, v8 - 1);
      *(_BYTE *)(*(_QWORD *)(v6 + 392) + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(v6 + 400) = 0;
    }
  }
  v9 = nullptr;
  sub_648D0((__int64 *)(v6 + 80), (__int64 *)(a2 + 80));
  v10 = *(_QWORD *)(a2 + 104);
  si128 = _mm_unpacklo_epi64((__m128i)v10, (__m128i)v10);
  if ( v10 )
  {
    v52[0] = si128;
    v41 = 16 * v10;
    v9 = (void *)qalloc_or_throw();
    memcpy(v9, *(const void **)(a2 + 96), v41);
    si128 = _mm_load_si128(v52);
  }
  if ( *(_QWORD *)(v6 + 96) )
  {
    *(_QWORD *)(v6 + 104) = 0;
    v52[0] = si128;
    qfree();
    si128 = _mm_load_si128(v52);
  }
  *(_QWORD *)(v6 + 96) = v9;
  v12 = nullptr;
  *(__m128i *)(v6 + 104) = si128;
  sub_648D0((__int64 *)(v6 + 120), (__int64 *)(a2 + 120));
  v13 = *(_QWORD *)(a2 + 144);
  v14 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
  if ( v13 )
  {
    v52[0] = v14;
    v40 = 16 * v13;
    v12 = (void *)qalloc_or_throw();
    memcpy(v12, *(const void **)(a2 + 136), v40);
    v14 = _mm_load_si128(v52);
  }
  if ( *(_QWORD *)(v6 + 136) )
  {
    *(_QWORD *)(v6 + 144) = 0;
    v52[0] = v14;
    qfree();
    v14 = _mm_load_si128(v52);
  }
  *(_QWORD *)(v6 + 136) = v12;
  v15 = nullptr;
  *(__m128i *)(v6 + 144) = v14;
  sub_648D0((__int64 *)(v6 + 160), (__int64 *)(a2 + 160));
  v16 = *(_QWORD *)(a2 + 184);
  v17 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  if ( v16 )
  {
    v52[0] = v17;
    v46 = 16 * v16;
    v15 = (void *)qalloc_or_throw();
    memcpy(v15, *(const void **)(a2 + 176), v46);
    v17 = _mm_load_si128(v52);
  }
  if ( *(_QWORD *)(v6 + 176) )
  {
    *(_QWORD *)(v6 + 184) = 0;
    v52[0] = v17;
    qfree();
    v17 = _mm_load_si128(v52);
  }
  *(_QWORD *)(v6 + 176) = v15;
  v18 = nullptr;
  *(__m128i *)(v6 + 184) = v17;
  sub_648D0((__int64 *)(v6 + 200), (__int64 *)(a2 + 200));
  v19 = *(_QWORD *)(a2 + 224);
  v20 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
  if ( v19 )
  {
    v52[0] = v20;
    v45 = 16 * v19;
    v18 = (void *)qalloc_or_throw();
    memcpy(v18, *(const void **)(a2 + 216), v45);
    v20 = _mm_load_si128(v52);
  }
  if ( *(_QWORD *)(v6 + 216) )
  {
    *(_QWORD *)(v6 + 224) = 0;
    v52[0] = v20;
    qfree();
    v20 = _mm_load_si128(v52);
  }
  *(_QWORD *)(v6 + 216) = v18;
  v21 = nullptr;
  *(__m128i *)(v6 + 224) = v20;
  sub_648D0((__int64 *)(v6 + 240), (__int64 *)(a2 + 240));
  v22 = *(_QWORD *)(a2 + 264);
  v23 = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
  if ( v22 )
  {
    v52[0] = v23;
    v44 = 16 * v22;
    v21 = (void *)qalloc_or_throw();
    memcpy(v21, *(const void **)(a2 + 256), v44);
    v23 = _mm_load_si128(v52);
  }
  if ( *(_QWORD *)(v6 + 256) )
  {
    *(_QWORD *)(v6 + 264) = 0;
    v52[0] = v23;
    qfree();
    v23 = _mm_load_si128(v52);
  }
  *(_QWORD *)(v6 + 256) = v21;
  LODWORD(a2) = a2 + 280;
  v24 = nullptr;
  *(__m128i *)(v6 + 264) = v23;
  sub_648D0((__int64 *)(v6 + 280), v4 + 35);
  v28 = v4[38];
  v29 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
  if ( v28 )
  {
    v52[0] = v29;
    v42 = 16 * v28;
    v43 = (void *)qalloc_or_throw();
    a2 = v4[37];
    v24 = v43;
    memcpy(v43, (const void *)a2, v42);
    v29 = _mm_load_si128(v52);
  }
  if ( *(_QWORD *)(v6 + 296) )
  {
    *(_QWORD *)(v6 + 304) = 0;
    v52[0] = v29;
    qfree();
    v29 = _mm_load_si128(v52);
  }
  *(_QWORD *)(v6 + 296) = v24;
  v30 = 0;
  *(__m128i *)(v6 + 304) = v29;
  *(_QWORD *)(v6 + 320) = v4[40];
  *(_QWORD *)(v6 + 328) = v4[41];
  *(_QWORD *)(v6 + 336) = v4[42];
  *(_QWORD *)(v6 + 512) = v4[64];
  *(_QWORD *)(v6 + 520) = v4[65];
  v31 = v4[8];
  *(_QWORD *)(v6 + 416) = v31;
  *(_QWORD *)(v6 + 448) = v31;
  *(_DWORD *)(a1 + 4) &= 0xFFFFFE77;
  for ( i = v4[6]; i; v30 = (__int64)v35 )
  {
    v33 = j__qalloc_or_throw();
    *(_QWORD *)(v33 + 32) = 0xFFFFFFFF00000000LL;
    v34 = (_QWORD *)v33;
    *(_QWORD *)(v33 + 40) = 0;
    *(_QWORD *)(v33 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v33 + 56) = 0;
    *(_QWORD *)(v33 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v33 + 72) = 0;
    *(_OWORD *)(v33 + 8) = 0;
    sub_1253A0(v33, i);
    LODWORD(a2) = (_DWORD)v34;
    v35 = sub_A3160(v6, v34, v30);
    i = *(_QWORD *)(i + 8);
  }
  if ( *(_DWORD *)(v6 + 76) )
  {
    v36 = *(_QWORD *)(v6 + 16);
    v37 = *(_DWORD **)(v36 + 368);
    v38 = &v37[*(_QWORD *)(v36 + 376)];
    if ( v37 != v38 )
    {
      while ( a3 + 1 != *v37 )
      {
        if ( v38 == ++v37 )
          goto LABEL_39;
      }
      if ( v38 != v37 )
        sub_1D51C0(v36, 0);
    }
LABEL_39:
    LODWORD(a2) = 0;
    sub_1D51C0(v6, 0);
    sub_1D4FD0(a1);
    if ( (a4 & 2) != 0 && *(_QWORD *)(v6 + 376) == 1 )
      sub_A8320(v6);
  }
  if ( (a4 & 1) != 0 )
    sub_190300(a1, a2, v28, v25, v26, v27);
  return v6;
}
