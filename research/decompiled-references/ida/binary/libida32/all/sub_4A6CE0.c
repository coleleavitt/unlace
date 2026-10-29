__int64 __fastcall sub_4A6CE0(__int64 *a1)
{
  _BYTE *v2; // rax
  __int64 v3; // rbp
  const char *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // rsi
  size_t v8; // rbx
  __int64 v9; // rdx
  char v10; // al
  void *v11; // r14
  bool v12; // zf
  const char *v13; // rax
  __int64 v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rax
  __m128i si128; // xmm1
  __int64 v18; // rdi
  int place_class_id; // eax
  __int64 v20; // rax
  void *v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  const char *v24; // rbx
  __int64 v25; // rax
  const char *v26; // rsi
  size_t v27; // rbx
  __int64 v28; // rdx
  char v29; // al
  void *v30; // r14
  const char *v31; // r13
  __int64 v32; // r12
  __int64 v33; // rbx
  __int64 v34; // rax
  __m128i v35; // xmm2
  __int64 v36; // rdi
  int v37; // eax
  __int64 v38; // rax
  void *v40; // rax
  void *v41; // rsi
  size_t v42; // rbx
  __int64 v43; // rax
  void *v44; // rax
  void *v45; // rsi
  size_t v46; // rbx
  __int64 v47; // rax
  const char *v48; // [rsp+0h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-68h]
  void *src; // [rsp+18h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+20h] [rbp-50h]
  unsigned __int64 v52; // [rsp+30h] [rbp-40h]

  v52 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  src = nullptr;
  v2 = (_BYTE *)qvector_reserve(&src, 0, 10, 1);
  src = v2;
  n[0] = 10;
  *(_QWORD *)v2 = 0x5F6563616C706974LL;
  v2[8] = 116;
  *((_BYTE *)src + 9) = 0;
  v3 = operator new(0xC8u);
  v4 = (const char *)src;
  *(_QWORD *)(v3 + 16) = 0;
  *(_QWORD *)v3 = &off_2AFD020;
  v5 = *a1;
  *(_OWORD *)(v3 + 24) = 0;
  *(_QWORD *)(v3 + 8) = v5;
  v49 = (__int64)(a1 + 1);
  sub_49FBA0((_QWORD *)(v3 + 16), (__int64)(a1 + 1));
  v6 = a1[4];
  v7 = v4;
  *(_QWORD *)(v3 + 120) = -1;
  *(_QWORD *)(v3 + 40) = v6;
  LODWORD(v6) = *((_DWORD *)a1 + 10);
  *(_QWORD *)(v3 + 128) = -1;
  *(_DWORD *)(v3 + 48) = v6;
  *(_QWORD *)(v3 + 136) = 0xFFFFFFFFLL;
  *(_DWORD *)(v3 + 144) = 0;
  *(_OWORD *)(v3 + 56) = 0;
  *(_OWORD *)(v3 + 72) = 0;
  *(_OWORD *)(v3 + 88) = 0;
  *(_OWORD *)(v3 + 104) = 0;
  merge_handler_ctr();
  v8 = n[0];
  *(_QWORD *)(v3 + 152) = 0;
  *(_QWORD *)v3 = &off_2B02CC8;
  *(_OWORD *)(v3 + 160) = 0;
  if ( !v8 )
  {
    *(_QWORD *)(v3 + 176) = 0;
    *(_OWORD *)(v3 + 184) = 0;
    goto LABEL_3;
  }
  v40 = (void *)qalloc_or_throw(v8, v7);
  *(_QWORD *)(v3 + 168) = v8;
  v41 = src;
  *(_QWORD *)(v3 + 152) = v40;
  memcpy(v40, v41, v8);
  *(_QWORD *)(v3 + 160) = v8;
  v42 = n[0];
  *(_QWORD *)(v3 + 176) = 0;
  *(_OWORD *)(v3 + 184) = 0;
  if ( !v42 )
  {
LABEL_3:
    v9 = *(_QWORD *)(v3 + 8);
    *(_QWORD *)(v3 + 72) = 0;
    v10 = 1;
    v11 = nullptr;
    if ( *(int *)(v9 + 28) <= 0 )
      goto LABEL_10;
    goto LABEL_4;
  }
  v11 = (void *)qalloc_or_throw(v42, (const char *)v41);
  memcpy(v11, src, v42);
  v43 = *(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 72) = 0;
  if ( *(int *)(v43 + 28) > 0 )
  {
    v10 = 0;
LABEL_4:
    v12 = v10 == 0;
    v13 = haystack;
    if ( v12 )
      v13 = (const char *)v11;
    v14 = 0;
    v48 = v13;
    do
    {
      v15 = operator new(0x38u);
      v16 = *(_QWORD *)(v3 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v18 = *(int *)(v16 + 4LL * (int)v14 + 16);
      *(_DWORD *)(v15 + 12) = -1;
      *(_QWORD *)(v15 + 32) = v16;
      *(_DWORD *)(v15 + 8) = v18;
      *(_QWORD *)v15 = off_2B02D68;
      *(_QWORD *)(v15 + 40) = 0;
      *(__m128i *)(v15 + 16) = si128;
      switch_dbctx(v18);
      place_class_id = get_place_class_id(v48);
      *(_QWORD *)(v3 + 8 * v14 + 56) = v15;
      *(_DWORD *)(v15 + 48) = place_class_id;
      v20 = *(_QWORD *)(v3 + 8);
      *(_DWORD *)(v15 + 12) = v14++;
    }
    while ( *(_DWORD *)(v20 + 28) > (int)v14 );
  }
  if ( v11 )
    qfree(v11);
LABEL_10:
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
  *(_QWORD *)v22 = &off_2AFD020;
  v23 = *a1;
  *(_QWORD *)(v22 + 16) = 0;
  v24 = (const char *)src;
  *(_QWORD *)(v22 + 8) = v23;
  *(_OWORD *)(v22 + 24) = 0;
  sub_49FBA0((_QWORD *)(v22 + 16), v49);
  v25 = a1[4];
  v26 = v24;
  *(_QWORD *)(v22 + 120) = -1;
  *(_QWORD *)(v22 + 40) = v25;
  LODWORD(v25) = *((_DWORD *)a1 + 10);
  *(_QWORD *)(v22 + 128) = -1;
  *(_DWORD *)(v22 + 48) = v25;
  *(_QWORD *)(v22 + 136) = 0xFFFFFFFFLL;
  *(_DWORD *)(v22 + 144) = 0;
  *(_OWORD *)(v22 + 56) = 0;
  *(_OWORD *)(v22 + 72) = 0;
  *(_OWORD *)(v22 + 88) = 0;
  *(_OWORD *)(v22 + 104) = 0;
  merge_handler_ctr();
  v27 = n[0];
  *(_QWORD *)(v22 + 152) = 0;
  *(_QWORD *)v22 = &off_2B02D18;
  *(_OWORD *)(v22 + 160) = 0;
  if ( !v27 )
  {
    *(_QWORD *)(v22 + 176) = 0;
    *(_OWORD *)(v22 + 184) = 0;
    goto LABEL_14;
  }
  v44 = (void *)qalloc_or_throw(v27, v26);
  *(_QWORD *)(v22 + 168) = v27;
  v45 = src;
  *(_QWORD *)(v22 + 152) = v44;
  memcpy(v44, v45, v27);
  *(_QWORD *)(v22 + 160) = v27;
  v46 = n[0];
  *(_QWORD *)(v22 + 176) = 0;
  *(_OWORD *)(v22 + 184) = 0;
  if ( !v46 )
  {
LABEL_14:
    v28 = *(_QWORD *)(v22 + 8);
    *(_QWORD *)(v22 + 72) = 0;
    v29 = 1;
    v30 = nullptr;
    if ( *(int *)(v28 + 28) <= 0 )
      goto LABEL_21;
    goto LABEL_15;
  }
  v30 = (void *)qalloc_or_throw(v46, (const char *)v45);
  memcpy(v30, src, v46);
  v47 = *(_QWORD *)(v22 + 8);
  *(_QWORD *)(v22 + 72) = 0;
  if ( *(int *)(v47 + 28) > 0 )
  {
    v29 = 0;
LABEL_15:
    v31 = haystack;
    if ( !v29 )
      v31 = (const char *)v30;
    v32 = 0;
    do
    {
      v33 = operator new(0x38u);
      v34 = *(_QWORD *)(v22 + 8);
      v35 = _mm_load_si128((const __m128i *)&xmmword_23838C0);
      v36 = *(int *)(v34 + 4LL * (int)v32 + 16);
      *(_DWORD *)(v33 + 12) = -1;
      *(_QWORD *)(v33 + 32) = v34;
      *(_DWORD *)(v33 + 8) = v36;
      *(_QWORD *)v33 = off_2B02E20;
      *(_QWORD *)(v33 + 40) = 0;
      *(__m128i *)(v33 + 16) = v35;
      switch_dbctx(v36);
      v37 = get_place_class_id(v31);
      *(_QWORD *)(v22 + 8 * v32 + 56) = v33;
      *(_DWORD *)(v33 + 48) = v37;
      v38 = *(_QWORD *)(v22 + 8);
      *(_DWORD *)(v33 + 12) = v32++;
    }
    while ( *(_DWORD *)(v38 + 28) > (int)v32 );
  }
  if ( v30 )
    qfree(v30);
LABEL_21:
  if ( src )
  {
    n[0] = 0;
    qfree(src);
  }
  return 0;
}

