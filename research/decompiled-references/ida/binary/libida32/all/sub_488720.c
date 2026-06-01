__int64 __fastcall sub_488720(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v4; // r12
  size_t v5; // r12
  const char *v6; // rsi
  size_t v7; // r12
  int v8; // eax
  size_t v9; // r12
  const char *v10; // rsi
  char v11; // al
  __int64 v12; // r12
  __int64 v13; // r12
  const char *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  char v18; // al
  __int64 v19; // r13
  unsigned __int64 v20; // rdx
  void *v21; // r14
  __m128i v22; // xmm0
  __int64 v23; // rax
  size_t v24; // r12
  __int64 *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // r13
  __int64 v30; // rax
  __int64 **v31; // rax
  __int64 v32; // r12
  __int64 v33; // r13
  __int64 result; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r15
  __int64 v39; // r12
  __int64 v40; // r14
  void *v41; // rax
  const void *v42; // rsi
  void *v43; // rax
  void *v44; // rax
  const void *v45; // rsi
  void *v46; // rax
  void *v47; // rax
  const void *v48; // rsi
  void *v49; // rax
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // r15
  __int64 v53; // r14
  const __m128i *v54; // r12
  void *v55; // rax
  unsigned __int64 v56; // rdx

  v2 = a2;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_47E730((_QWORD *)a1, a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 32);
  if ( v4 )
  {
    v49 = (void *)qalloc_or_throw(*(_QWORD *)(a2 + 32), (const char *)a2);
    *(_QWORD *)(a1 + 24) = v49;
    a2 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a1 + 40) = v4;
    memcpy(v49, (const void *)a2, v4);
    *(_QWORD *)(a1 + 32) = v4;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v5 = *(_QWORD *)(v2 + 56);
  if ( v5 )
  {
    v47 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 56), (const char *)a2);
    *(_QWORD *)(a1 + 48) = v47;
    v48 = *(const void **)(v2 + 48);
    *(_QWORD *)(a1 + 64) = v5;
    memcpy(v47, v48, v5);
    *(_QWORD *)(a1 + 56) = v5;
  }
  *(_QWORD *)(a1 + 72) = 0;
  v6 = (const char *)(v2 + 72);
  *(_OWORD *)(a1 + 80) = 0;
  sub_47E730((_QWORD *)(a1 + 72), v2 + 72);
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v7 = *(_QWORD *)(v2 + 104);
  if ( v7 )
  {
    v46 = (void *)qalloc_or_throw(*(_QWORD *)(v2 + 104), v6);
    *(_QWORD *)(a1 + 96) = v46;
    v6 = *(const char **)(v2 + 96);
    *(_QWORD *)(a1 + 112) = v7;
    memcpy(v46, v6, v7);
    *(_QWORD *)(a1 + 104) = v7;
  }
  v8 = *(_DWORD *)(v2 + 120);
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  v9 = *(_QWORD *)(v2 + 136);
  *(_DWORD *)(a1 + 120) = v8;
  if ( v9 )
  {
    v44 = (void *)qalloc_or_throw(v9, v6);
    *(_QWORD *)(a1 + 128) = v44;
    v45 = *(const void **)(v2 + 128);
    *(_QWORD *)(a1 + 144) = v9;
    memcpy(v44, v45, v9);
    *(_QWORD *)(a1 + 136) = v9;
  }
  *(_QWORD *)(a1 + 152) = 0;
  v10 = (const char *)(v2 + 152);
  *(_OWORD *)(a1 + 160) = 0;
  sub_47E730((_QWORD *)(a1 + 152), v2 + 152);
  *(_QWORD *)(a1 + 176) = *(_QWORD *)(v2 + 176);
  v11 = *(_BYTE *)(v2 + 184);
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  v12 = *(_QWORD *)(v2 + 200);
  *(_BYTE *)(a1 + 184) = v11;
  if ( v12 )
  {
    v43 = (void *)qalloc_or_throw(4 * v12, v10);
    *(_QWORD *)(a1 + 192) = v43;
    v10 = *(const char **)(v2 + 192);
    *(_QWORD *)(a1 + 208) = v12;
    memcpy(v43, v10, 4 * v12);
    *(_QWORD *)(a1 + 200) = v12;
  }
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v13 = *(_QWORD *)(v2 + 224);
  if ( v13 )
  {
    v41 = (void *)qalloc_or_throw(16 * v13, v10);
    *(_QWORD *)(a1 + 216) = v41;
    v42 = *(const void **)(v2 + 216);
    *(_QWORD *)(a1 + 232) = v13;
    memcpy(v41, v42, 16 * v13);
    *(_QWORD *)(a1 + 224) = v13;
  }
  *(_QWORD *)(a1 + 240) = 0;
  v14 = (const char *)(v2 + 240);
  v15 = a1 + 240;
  *(_OWORD *)(a1 + 248) = 0;
  sub_47E730((_QWORD *)(a1 + 240), v2 + 240);
  *(_DWORD *)(a1 + 264) = *(_DWORD *)(v2 + 264);
  *(_WORD *)(a1 + 268) = *(_WORD *)(v2 + 268);
  v18 = *(_BYTE *)(v2 + 270);
  *(_QWORD *)(a1 + 272) = 0;
  *(_BYTE *)(a1 + 270) = v18;
  *(_OWORD *)(a1 + 280) = 0;
  v19 = *(_QWORD *)(v2 + 280);
  if ( v19 )
  {
    v36 = qalloc_or_throw(32 * v19, v14);
    *(_QWORD *)(a1 + 272) = v36;
    v37 = v36;
    v38 = 0;
    *(_QWORD *)(a1 + 288) = v19;
    while ( 1 )
    {
      v39 = 32 * v38 + v37;
      v40 = *(_QWORD *)(v2 + 272) + 32 * v38;
      *(_QWORD *)v39 = 0;
      v14 = (const char *)v40;
      v15 = v39;
      *(_OWORD *)(v39 + 8) = 0;
      sub_47E730((_QWORD *)v39, v40);
      ++v38;
      *(_DWORD *)(v39 + 24) = *(_DWORD *)(v40 + 24);
      if ( v19 == v38 )
        break;
      v37 = *(_QWORD *)(a1 + 272);
    }
    *(_QWORD *)(a1 + 280) = v19;
  }
  v20 = *(_QWORD *)(v2 + 304);
  *(_QWORD *)(a1 + 312) = 0;
  v21 = (void *)(a1 + 344);
  v22 = _mm_loadu_si128((const __m128i *)(v2 + 328));
  v23 = *(_QWORD *)(v2 + 320);
  *(_QWORD *)(a1 + 296) = 0;
  *(_QWORD *)(a1 + 304) = v20;
  *(_QWORD *)(a1 + 320) = v23;
  *(_QWORD *)(a1 + 344) = 0;
  *(__m128i *)(a1 + 328) = v22;
  if ( v20 != 1 )
  {
    if ( v20 >> 60 )
    {
      v56 = v20 >> 61;
      if ( v56 )
        sub_2E883E(v15, v14, v56, v16, v17);
      std::__throw_bad_alloc();
    }
    v24 = 8 * v20;
    v14 = nullptr;
    v21 = (void *)operator new(8 * v20);
    memset(v21, 0, v24);
  }
  v25 = *(__int64 **)(v2 + 312);
  *(_QWORD *)(a1 + 296) = v21;
  if ( v25 )
  {
    v26 = operator new(0x20u);
    *(_QWORD *)v26 = 0;
    v27 = v26;
    *(__m128i *)(v26 + 8) = _mm_loadu_si128((const __m128i *)(v25 + 1));
    v28 = v25[3];
    *(_QWORD *)(a1 + 312) = v27;
    *(_QWORD *)(v27 + 24) = v28;
    if ( v27 )
    {
      v14 = (const char *)(a1 + 312);
      *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8 * ((unsigned __int64)*(unsigned int *)(v27 + 8) % *(_QWORD *)(a1 + 304))) = a1 + 312;
    }
    while ( 1 )
    {
      v25 = (__int64 *)*v25;
      if ( !v25 )
        break;
      while ( 1 )
      {
        v29 = (__int64 *)v27;
        v30 = operator new(0x20u);
        *(_QWORD *)v30 = 0;
        v27 = v30;
        *(__m128i *)(v30 + 8) = _mm_loadu_si128((const __m128i *)(v25 + 1));
        *(_QWORD *)(v30 + 24) = v25[3];
        *v29 = v30;
        v31 = (__int64 **)(*(_QWORD *)(a1 + 296)
                         + 8 * ((unsigned __int64)*(unsigned int *)(v30 + 8) % *(_QWORD *)(a1 + 304)));
        if ( *v31 )
          break;
        *v31 = v29;
        v25 = (__int64 *)*v25;
        if ( !v25 )
          goto LABEL_23;
      }
    }
  }
LABEL_23:
  *(_QWORD *)(a1 + 352) = 0;
  *(_OWORD *)(a1 + 360) = 0;
  v32 = *(_QWORD *)(v2 + 360);
  if ( v32 )
  {
    v55 = (void *)qalloc_or_throw(8 * v32, v14);
    *(_QWORD *)(a1 + 352) = v55;
    v14 = *(const char **)(v2 + 352);
    *(_QWORD *)(a1 + 368) = v32;
    memcpy(v55, v14, 8 * v32);
    *(_QWORD *)(a1 + 360) = v32;
  }
  *(_QWORD *)(a1 + 376) = 0;
  *(_OWORD *)(a1 + 384) = 0;
  v33 = *(_QWORD *)(v2 + 384);
  if ( v33 )
  {
    v50 = qalloc_or_throw(v33 << 7, v14);
    *(_QWORD *)(a1 + 376) = v50;
    v51 = v50;
    v52 = 0;
    *(_QWORD *)(a1 + 392) = v33;
    while ( 1 )
    {
      v53 = (v52 << 7) + v51;
      v54 = (const __m128i *)(*(_QWORD *)(v2 + 376) + (v52 << 7));
      sub_480B60(v53, v54);
      ++v52;
      *(_DWORD *)(v53 + 124) = v54[7].m128i_i32[3];
      if ( v33 == v52 )
        break;
      v51 = *(_QWORD *)(a1 + 376);
    }
    *(_QWORD *)(a1 + 384) = v33;
  }
  result = *(unsigned __int16 *)(v2 + 408);
  v35 = *(_QWORD *)(v2 + 400);
  *(_WORD *)(a1 + 408) = result;
  *(_QWORD *)(a1 + 400) = v35;
  return result;
}

