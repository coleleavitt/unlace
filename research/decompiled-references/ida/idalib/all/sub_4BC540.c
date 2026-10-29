__int64 __fastcall sub_4BC540(__int64 *a1)
{
  _BYTE *v2; // rax
  __int64 v3; // rbp
  size_t v4; // rbx
  void *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  size_t v8; // rbx
  __int64 v9; // rdx
  char v10; // al
  void *v11; // r14
  bool v12; // zf
  const char *v13; // rax
  __int64 v14; // r12
  __m128i *v15; // rbx
  __int64 v16; // rax
  __m128i si128; // xmm1
  __int64 v18; // rdi
  __int32 place_class_id; // eax
  __int64 v20; // rax
  void *v21; // rsi
  __int64 v22; // rbp
  size_t v23; // rbx
  void *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  size_t v27; // rbx
  __int64 v28; // rdx
  char v29; // al
  void *v30; // r14
  const char *v31; // r13
  __int64 v32; // r12
  __m128i *v33; // rbx
  __int64 v34; // rax
  __m128i v35; // xmm2
  __int64 v36; // rdi
  __int32 v37; // eax
  __int64 v38; // rax
  void *v40; // rax
  const void *v41; // rsi
  void *v42; // rax
  void *v43; // rsi
  size_t v44; // rbx
  __int64 v45; // rax
  void *v46; // rax
  const void *v47; // rsi
  void *v48; // rax
  void *v49; // rsi
  size_t v50; // rbx
  __int64 v51; // rax
  const char *v52; // [rsp+0h] [rbp-68h]
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-50h]
  unsigned __int64 v55; // [rsp+28h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  v2 = (_BYTE *)qvector_reserve(&src, 0, 10, 1);
  src = v2;
  n[0] = 10;
  *(_QWORD *)v2 = 0x5F6563616C706974LL;
  v2[8] = 116;
  *((_BYTE *)src + 9) = 0;
  v3 = operator new(0xC8u);
  v4 = a1[2];
  v5 = src;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)v3 = &off_2B26160;
  v6 = *a1;
  *(_OWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 8) = v6;
  if ( v4 )
  {
    v40 = (void *)qalloc_or_throw(v4);
    *(_QWORD *)(v3 + 16) = v40;
    v41 = (const void *)a1[1];
    *(_QWORD *)(v3 + 32) = v4;
    memcpy(v40, v41, v4);
    *(_QWORD *)(v3 + 24) = v4;
  }
  v7 = a1[4];
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 40) = v7;
  LODWORD(v7) = *((_DWORD *)a1 + 10);
  *(_QWORD *)(v3 + 128) = -1;
  *(_DWORD *)(v3 + 48) = v7;
  *(_QWORD *)(v3 + 136) = -1;
  *(_QWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 104) = 0;
  merge_handler_ctr(v3, v5);
  v8 = n[0];
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)v3 = &off_2B2CC88;
  *(_OWORD *)(v3 + 160) = 0;
  if ( !v8 )
  {
    *(_QWORD *)(v3 + 176) = 0;
    *(_OWORD *)(v3 + 184) = 0;
    goto LABEL_5;
  }
  v48 = (void *)qalloc_or_throw(v8);
  *(_QWORD *)(v3 + 168) = v8;
  v49 = src;
  *(_QWORD *)(v3 + 152) = v48;
  memcpy(v48, v49, v8);
  *(_QWORD *)(v3 + 160) = v8;
  v50 = n[0];
  *(_QWORD *)(v3 + 176) = 0;
  *(_OWORD *)(v3 + 184) = 0;
  if ( !v50 )
  {
LABEL_5:
    v9 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 72) = 0;
    v10 = 1;
    v11 = nullptr;
    if ( *(int *)(v9 + 28) <= 0 )
      goto LABEL_12;
    goto LABEL_6;
  }
  v11 = (void *)qalloc_or_throw(v50);
  memcpy(v11, src, v50);
  v51 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 72) = 0;
  if ( *(int *)(v51 + 28) > 0 )
  {
    v10 = 0;
LABEL_6:
    v12 = v10 == 0;
    v13 = haystack;
    if ( v12 )
      v13 = (const char *)v11;
    v14 = 0;
    v52 = v13;
    do
    {
      v15 = (__m128i *)operator new(0x38u);
      v16 = *(_QWORD *)(v3 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v18 = *(int *)(v16 + 4LL * (int)v14 + 16);
      v15->m128i_i32[3] = -1;
      v15[2].m128i_i64[0] = v16;
      v15->m128i_i32[2] = v18;
      v15->m128i_i64[0] = (__int64)off_2B2CD28;
      v15[2].m128i_i64[1] = 0;
      v15[1] = si128;
      switch_dbctx(v18);
      place_class_id = get_place_class_id(v52);
      *(_QWORD *)(v3 + 8 * v14 + 56) = v15;
      v15[3].m128i_i32[0] = place_class_id;
      v20 = *(_QWORD *)(v3 + 8);
      v15->m128i_i32[3] = v14++;
    }
    while ( *(_DWORD *)(v20 + 28) > (int)v14 );
  }
  if ( v11 )
    qfree(v11);
LABEL_12:
  v21 = src;
  if ( n[1] <= 0xA )
  {
    src = (void *)qvector_reserve(&src, src, 11, 1);
    v21 = src;
  }
  n[0] = 11;
  qmemcpy(v21, "idaplace_t", 10);
  *((_BYTE *)src + 10) = 0;
  v22 = operator new(0xC8u);
  v23 = a1[2];
  v24 = src;
  *(_QWORD *)(v22 + 16) = 0;
  *(_QWORD *)v22 = &off_2B26160;
  v25 = *a1;
  *(_OWORD *)(v22 + 24) = 0;
  *(_QWORD *)(v22 + 8) = v25;
  if ( v23 )
  {
    v46 = (void *)qalloc_or_throw(v23);
    *(_QWORD *)(v22 + 16) = v46;
    v47 = (const void *)a1[1];
    *(_QWORD *)(v22 + 32) = v23;
    memcpy(v46, v47, v23);
    *(_QWORD *)(v22 + 24) = v23;
  }
  v26 = a1[4];
  *(_QWORD *)(v22 + 120) = -1;
  *(_QWORD *)(v22 + 40) = v26;
  LODWORD(v26) = *((_DWORD *)a1 + 10);
  *(_QWORD *)(v22 + 128) = -1;
  *(_DWORD *)(v22 + 48) = v26;
  *(_QWORD *)(v22 + 136) = -1;
  *(_QWORD *)(v22 + 144) = 0;
  *(_OWORD *)(v22 + 56) = 0;
  *(_OWORD *)(v22 + 72) = 0;
  *(_OWORD *)(v22 + 88) = 0;
  *(_OWORD *)(v22 + 104) = 0;
  merge_handler_ctr(v22, v24);
  v27 = n[0];
  *(_QWORD *)(v22 + 152) = 0;
  *(_QWORD *)v22 = off_2B2CCD8;
  *(_OWORD *)(v22 + 160) = 0;
  if ( !v27 )
  {
    *(_QWORD *)(v22 + 176) = 0;
    *(_OWORD *)(v22 + 184) = 0;
    goto LABEL_18;
  }
  v42 = (void *)qalloc_or_throw(v27);
  *(_QWORD *)(v22 + 168) = v27;
  v43 = src;
  *(_QWORD *)(v22 + 152) = v42;
  memcpy(v42, v43, v27);
  *(_QWORD *)(v22 + 160) = v27;
  v44 = n[0];
  *(_QWORD *)(v22 + 176) = 0;
  *(_OWORD *)(v22 + 184) = 0;
  if ( !v44 )
  {
LABEL_18:
    v28 = *(_QWORD *)(v22 + 8);
    *(_QWORD *)(v22 + 72) = 0;
    v29 = 1;
    v30 = nullptr;
    if ( *(int *)(v28 + 28) <= 0 )
      goto LABEL_25;
    goto LABEL_19;
  }
  v30 = (void *)qalloc_or_throw(v44);
  memcpy(v30, src, v44);
  v45 = *(_QWORD *)(v22 + 8);
  *(_QWORD *)(v22 + 72) = 0;
  if ( *(int *)(v45 + 28) > 0 )
  {
    v29 = 0;
LABEL_19:
    v31 = haystack;
    if ( !v29 )
      v31 = (const char *)v30;
    v32 = 0;
    do
    {
      v33 = (__m128i *)operator new(0x38u);
      v34 = *(_QWORD *)(v22 + 8);
      v35 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v36 = *(int *)(v34 + 4LL * (int)v32 + 16);
      v33->m128i_i32[3] = -1;
      v33[2].m128i_i64[0] = v34;
      v33->m128i_i32[2] = v36;
      v33->m128i_i64[0] = (__int64)off_2B2CDE0;
      v33[2].m128i_i64[1] = 0;
      v33[1] = v35;
      switch_dbctx(v36);
      v37 = get_place_class_id(v31);
      *(_QWORD *)(v22 + 8 * v32 + 56) = v33;
      v33[3].m128i_i32[0] = v37;
      v38 = *(_QWORD *)(v22 + 8);
      v33->m128i_i32[3] = v32++;
    }
    while ( *(_DWORD *)(v38 + 28) > (int)v32 );
  }
  if ( v30 )
    qfree(v30);
LABEL_25:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 0;
}
