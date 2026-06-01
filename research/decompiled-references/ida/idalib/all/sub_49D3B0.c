__int64 __fastcall sub_49D3B0(__int64 a1, const __m128i *a2)
{
  size_t v4; // r12
  size_t v5; // r12
  size_t v6; // r12
  __int32 v7; // eax
  size_t v8; // r12
  __int8 v9; // al
  __int64 v10; // r12
  __int64 v11; // r12
  const __m128i *v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int8 v16; // al
  __int64 v17; // r13
  unsigned __int64 v18; // rdx
  void *v19; // r14
  __m128i v20; // xmm0
  __int64 v21; // rax
  size_t v22; // r12
  __int64 v23; // r12
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // r13
  __int64 v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 result; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r15
  __int64 v37; // r12
  __int64 v38; // r14
  void *v39; // rax
  const void *v40; // rsi
  void *v41; // rax
  const void *v42; // rsi
  void *v43; // rax
  const void *v44; // rsi
  void *v45; // rax
  const void *v46; // rsi
  void *v47; // rax
  const void *v48; // rsi
  void *v49; // rax
  const void *v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 v54; // r14
  __int64 v55; // r12
  void *v56; // rax
  const void *v57; // rsi
  unsigned __int64 v58; // rdx

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  sub_493230((_QWORD *)a1, (__int64)a2);
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  v4 = a2[2].m128i_u64[0];
  if ( v4 )
  {
    v49 = (void *)qalloc_or_throw(a2[2].m128i_i64[0]);
    *(_QWORD *)(a1 + 24) = v49;
    v50 = (const void *)a2[1].m128i_i64[1];
    *(_QWORD *)(a1 + 40) = v4;
    memcpy(v49, v50, v4);
    *(_QWORD *)(a1 + 32) = v4;
  }
  *(_QWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v5 = a2[3].m128i_u64[1];
  if ( v5 )
  {
    v47 = (void *)qalloc_or_throw(a2[3].m128i_i64[1]);
    *(_QWORD *)(a1 + 48) = v47;
    v48 = (const void *)a2[3].m128i_i64[0];
    *(_QWORD *)(a1 + 64) = v5;
    memcpy(v47, v48, v5);
    *(_QWORD *)(a1 + 56) = v5;
  }
  *(_QWORD *)(a1 + 72) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  sub_493230((_QWORD *)(a1 + 72), (__int64)&a2[4].m128i_i64[1]);
  *(_QWORD *)(a1 + 96) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  v6 = a2[6].m128i_u64[1];
  if ( v6 )
  {
    v45 = (void *)qalloc_or_throw(a2[6].m128i_i64[1]);
    *(_QWORD *)(a1 + 96) = v45;
    v46 = (const void *)a2[6].m128i_i64[0];
    *(_QWORD *)(a1 + 112) = v6;
    memcpy(v45, v46, v6);
    *(_QWORD *)(a1 + 104) = v6;
  }
  v7 = a2[7].m128i_i32[2];
  *(_QWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  v8 = a2[8].m128i_u64[1];
  *(_DWORD *)(a1 + 120) = v7;
  if ( v8 )
  {
    v43 = (void *)qalloc_or_throw(v8);
    *(_QWORD *)(a1 + 128) = v43;
    v44 = (const void *)a2[8].m128i_i64[0];
    *(_QWORD *)(a1 + 144) = v8;
    memcpy(v43, v44, v8);
    *(_QWORD *)(a1 + 136) = v8;
  }
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  sub_493230((_QWORD *)(a1 + 152), (__int64)&a2[9].m128i_i64[1]);
  *(_QWORD *)(a1 + 176) = a2[11].m128i_i64[0];
  v9 = a2[11].m128i_i8[8];
  *(_QWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  v10 = a2[12].m128i_i64[1];
  *(_BYTE *)(a1 + 184) = v9;
  if ( v10 )
  {
    v41 = (void *)qalloc_or_throw(4 * v10);
    *(_QWORD *)(a1 + 192) = v41;
    v42 = (const void *)a2[12].m128i_i64[0];
    *(_QWORD *)(a1 + 208) = v10;
    memcpy(v41, v42, 4 * v10);
    *(_QWORD *)(a1 + 200) = v10;
  }
  *(_QWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 224) = 0;
  v11 = a2[14].m128i_i64[0];
  if ( v11 )
  {
    v39 = (void *)qalloc_or_throw(16 * v11);
    *(_QWORD *)(a1 + 216) = v39;
    v40 = (const void *)a2[13].m128i_i64[1];
    *(_QWORD *)(a1 + 232) = v11;
    memcpy(v39, v40, 16 * v11);
    *(_QWORD *)(a1 + 224) = v11;
  }
  *(_QWORD *)(a1 + 240) = 0;
  v12 = a2 + 15;
  v13 = a1 + 240;
  *(_OWORD *)(a1 + 248) = 0;
  sub_493230((_QWORD *)(a1 + 240), (__int64)a2[15].m128i_i64);
  *(_QWORD *)(a1 + 264) = a2[16].m128i_i64[1];
  *(_WORD *)(a1 + 272) = a2[17].m128i_i16[0];
  v16 = a2[17].m128i_i8[2];
  *(_QWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 274) = v16;
  *(_OWORD *)(a1 + 288) = 0;
  v17 = a2[18].m128i_i64[0];
  if ( v17 )
  {
    v34 = qalloc_or_throw(32 * v17);
    *(_QWORD *)(a1 + 280) = v34;
    v35 = v34;
    v36 = 0;
    *(_QWORD *)(a1 + 296) = v17;
    while ( 1 )
    {
      v37 = 32 * v36 + v35;
      v38 = a2[17].m128i_i64[1] + 32 * v36;
      *(_QWORD *)v37 = 0;
      v12 = (const __m128i *)v38;
      v13 = v37;
      *(_OWORD *)(v37 + 8) = 0;
      sub_493230((_QWORD *)v37, v38);
      ++v36;
      *(_QWORD *)(v37 + 24) = *(_QWORD *)(v38 + 24);
      if ( v17 == v36 )
        break;
      v35 = *(_QWORD *)(a1 + 280);
    }
    *(_QWORD *)(a1 + 288) = v17;
  }
  v18 = a2[19].m128i_u64[1];
  *(_QWORD *)(a1 + 320) = 0;
  v19 = (void *)(a1 + 352);
  v20 = _mm_loadu_si128(a2 + 21);
  v21 = a2[20].m128i_i64[1];
  *(_QWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 312) = v18;
  *(_QWORD *)(a1 + 328) = v21;
  *(_QWORD *)(a1 + 352) = 0;
  *(__m128i *)(a1 + 336) = v20;
  if ( v18 != 1 )
  {
    if ( v18 >> 60 )
    {
      v58 = v18 >> 61;
      if ( v58 )
        sub_2EBC5E(v13, v12, v58, v14, v15);
      std::__throw_bad_alloc();
    }
    v22 = 8 * v18;
    v19 = (void *)operator new(8 * v18);
    memset(v19, 0, v22);
  }
  v23 = a2[20].m128i_i64[0];
  *(_QWORD *)(a1 + 304) = v19;
  if ( v23 )
  {
    v24 = operator new(0x20u);
    *(_QWORD *)v24 = 0;
    v25 = (_QWORD *)v24;
    *(__m128i *)(v24 + 8) = _mm_loadu_si128((const __m128i *)(v23 + 8));
    v26 = *(_QWORD *)(v23 + 24);
    *(_QWORD *)(a1 + 320) = v25;
    v25[3] = v26;
    if ( v25 )
      *(_QWORD *)(*(_QWORD *)(a1 + 304) + 8LL * (v25[1] % *(_QWORD *)(a1 + 312))) = a1 + 320;
    while ( 1 )
    {
      v23 = *(_QWORD *)v23;
      if ( !v23 )
        break;
      while ( 1 )
      {
        v27 = v25;
        v28 = operator new(0x20u);
        *(_QWORD *)v28 = 0;
        v25 = (_QWORD *)v28;
        *(__m128i *)(v28 + 8) = _mm_loadu_si128((const __m128i *)(v23 + 8));
        *(_QWORD *)(v28 + 24) = *(_QWORD *)(v23 + 24);
        *v27 = v28;
        v29 = (_QWORD *)(*(_QWORD *)(a1 + 304) + 8LL * (*(_QWORD *)(v28 + 8) % *(_QWORD *)(a1 + 312)));
        if ( *v29 )
          break;
        *v29 = v27;
        v23 = *(_QWORD *)v23;
        if ( !v23 )
          goto LABEL_23;
      }
    }
  }
LABEL_23:
  *(_QWORD *)(a1 + 360) = 0;
  *(_OWORD *)(a1 + 368) = 0;
  v30 = a2[23].m128i_i64[0];
  if ( v30 )
  {
    v56 = (void *)qalloc_or_throw(8 * v30);
    *(_QWORD *)(a1 + 360) = v56;
    v57 = (const void *)a2[22].m128i_i64[1];
    *(_QWORD *)(a1 + 376) = v30;
    memcpy(v56, v57, 8 * v30);
    *(_QWORD *)(a1 + 368) = v30;
  }
  *(_QWORD *)(a1 + 384) = 0;
  *(_OWORD *)(a1 + 392) = 0;
  v31 = a2[24].m128i_i64[1];
  if ( v31 )
  {
    v51 = qalloc_or_throw(144 * v31);
    *(_QWORD *)(a1 + 384) = v51;
    v52 = v51;
    v53 = 0;
    *(_QWORD *)(a1 + 400) = v31;
    while ( 1 )
    {
      v54 = 144 * v53 + v52;
      v55 = a2[24].m128i_i64[0] + 144 * v53;
      sub_495840(v54, v55);
      ++v53;
      *(_DWORD *)(v54 + 140) = *(_DWORD *)(v55 + 140);
      if ( v31 == v53 )
        break;
      v52 = *(_QWORD *)(a1 + 384);
    }
    *(_QWORD *)(a1 + 392) = v31;
  }
  result = a2[26].m128i_u16[0];
  v33 = a2[25].m128i_i64[1];
  *(_WORD *)(a1 + 416) = result;
  *(_QWORD *)(a1 + 408) = v33;
  return result;
}
