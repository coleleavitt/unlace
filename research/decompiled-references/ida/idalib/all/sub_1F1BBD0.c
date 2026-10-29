// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_1F1BBD0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128i v17; // rax
  __int64 v18; // rsi
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  unsigned __int64 v21; // rdx
  int v22; // r12d
  char *v23; // r15
  int v24; // r14d
  __int64 v25; // rax
  char *v26; // rsi
  int v27; // r15d
  __int64 v28; // rax
  int v29; // r15d
  __int64 v30; // rax
  int v31; // r15d
  __int64 v32; // rax
  int v33; // r15d
  __int64 v34; // rax
  __int64 v35; // rcx
  __m128i si128; // xmm0
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r12
  unsigned __int64 v41; // rsi
  size_t v42; // rax
  __int64 v43; // r15
  bool v44; // r9
  _BYTE *v45; // rdx
  _BYTE *v46; // rbx
  __int64 v47; // rdx
  int v48; // r15d
  __int64 v49; // rax
  int v50; // r15d
  __int64 v51; // rax
  int v52; // r15d
  __int64 v53; // rax
  __m128i v54; // [rsp+0h] [rbp-138h] BYREF
  bool v55; // [rsp+1Fh] [rbp-119h]
  __m128i v56; // [rsp+20h] [rbp-118h] BYREF
  __int64 v57; // [rsp+30h] [rbp-108h]
  void *src; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v59; // [rsp+48h] [rbp-F0h]
  _BYTE v60[24]; // [rsp+58h] [rbp-E0h] BYREF
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+78h] [rbp-C0h]
  _QWORD v63[23]; // [rsp+80h] [rbp-B8h] BYREF

  if ( !a2 )
  {
    sub_1EACA60(a1, 0);
    *(_QWORD *)&word_10 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    BUG();
  }
  v4 = a2 + 24;
  sub_1EACA60(a1, v4);
  v5 = sub_1F61940(*(_QWORD *)(*a1 + 8));
  v6 = *a1;
  *(_QWORD *)(a2 + 40) = v5;
  v7 = sub_1EE7490(v6);
  v8 = *a1;
  *(_DWORD *)(a2 + 12) = v7;
  v9 = sub_1EE7490(v8);
  v10 = *a1;
  *(_DWORD *)(a2 + 56) = v9;
  v11 = sub_1EE7490(v10);
  v12 = *a1;
  *(_DWORD *)(a2 + 60) = v11;
  v17.m128i_i64[0] = sub_1F194E0(v12, v4, v13, v14, v15, v16);
  v18 = *a1;
  v54 = v17;
  sub_1F194A0((__int64)&v56, v18);
  v19 = _mm_load_si128(&v54);
  v20 = _mm_load_si128(&v56);
  v21 = *(unsigned int *)(a2 + 16);
  ptr = v63;
  v63[0] = v57;
  *(_QWORD *)(a2 + 96) = v57;
  v22 = v21;
  *(__m128i *)(a2 + 64) = v19;
  *(__m128i *)(a2 + 80) = v20;
  v62 = 0x1000000000LL;
  if ( v21 > 0x10 )
  {
    v23 = (char *)(a2 + 104);
    sub_2237220(&ptr, v63, v21, 8);
    if ( v22 )
      goto LABEL_4;
LABEL_32:
    src = ptr;
    v59.m128i_i64[0] = (unsigned int)v62;
    sub_EB8020((__int64)&src, v23);
    LODWORD(v62) = 0;
    sub_EB8050(a2, (__int64)ptr, 0);
    LODWORD(v62) = 0;
    sub_EB8080(a2, (__int64)ptr, 0);
    LODWORD(v62) = 0;
    sub_EB80B0(a2, (__int64)ptr, 0);
    LODWORD(v62) = 0;
    sub_EB80E0(a2, (__int64)ptr, 0);
    if ( *(_DWORD *)(a2 + 48) != 1 )
      goto LABEL_15;
    LODWORD(v62) = 0;
    sub_EB8110(a2, (__int64)ptr, 0);
    LODWORD(v62) = 0;
    sub_EB8140(a2, (__int64)ptr, 0);
    LODWORD(v62) = 0;
    v47 = 0;
    goto LABEL_42;
  }
  v23 = (char *)(a2 + 104);
  if ( !(_DWORD)v21 )
    goto LABEL_32;
LABEL_4:
  v24 = 0;
  do
  {
    ++v24;
    v25 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&ptr, v25);
  }
  while ( v24 != v22 );
  v26 = v23;
  v27 = 0;
  src = ptr;
  v59.m128i_i64[0] = (unsigned int)v62;
  sub_EB8020((__int64)&src, v26);
  LODWORD(v62) = 0;
  do
  {
    ++v27;
    v28 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&ptr, v28);
  }
  while ( v27 != v22 );
  v29 = 0;
  sub_EB8050(a2, (__int64)ptr, (unsigned int)v62);
  LODWORD(v62) = 0;
  do
  {
    ++v29;
    v30 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&ptr, v30);
  }
  while ( v29 != v22 );
  v31 = 0;
  sub_EB8080(a2, (__int64)ptr, (unsigned int)v62);
  LODWORD(v62) = 0;
  do
  {
    ++v31;
    v32 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&ptr, v32);
  }
  while ( v31 != v22 );
  v33 = 0;
  sub_EB80B0(a2, (__int64)ptr, (unsigned int)v62);
  LODWORD(v62) = 0;
  do
  {
    ++v33;
    v34 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    sub_14B7B40((__int64)&ptr, v34);
  }
  while ( v33 != v22 );
  sub_EB80E0(a2, (__int64)ptr, (unsigned int)v62);
  if ( *(_DWORD *)(a2 + 48) == 1 )
  {
    LODWORD(v62) = 0;
    v48 = 0;
    do
    {
      ++v48;
      v49 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      sub_14B7B40((__int64)&ptr, v49);
    }
    while ( v48 != v22 );
    v50 = 0;
    sub_EB8110(a2, (__int64)ptr, (unsigned int)v62);
    LODWORD(v62) = 0;
    do
    {
      ++v50;
      v51 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      sub_14B7B40((__int64)&ptr, v51);
    }
    while ( v50 != v22 );
    v52 = 0;
    sub_EB8140(a2, (__int64)ptr, (unsigned int)v62);
    LODWORD(v62) = 0;
    do
    {
      ++v52;
      v53 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      sub_14B7B40((__int64)&ptr, v53);
    }
    while ( v52 != v22 );
    v47 = (unsigned int)v62;
LABEL_42:
    sub_EB8170(a2, (__int64)ptr, v47);
  }
LABEL_15:
  v35 = *a1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v37 = *(unsigned int *)(*a1 + 24);
  v38 = *(_QWORD *)(*(_QWORD *)(*a1 + 32) + 8 * v37);
  v39 = (unsigned int)(v37 + 1);
  *(_DWORD *)(*a1 + 24) = v39;
  v40 = (unsigned int)v38;
  src = v60;
  v59 = si128;
  if ( (unsigned int)v38 > 0x10uLL )
  {
    sub_2236E10(&src, v60, (unsigned int)v38, 1);
    v35 = *a1;
    v41 = v59.m128i_u64[1];
    v42 = v59.m128i_i64[0];
    v39 = *(unsigned int *)(*a1 + 24);
  }
  else
  {
    if ( !(_DWORD)v38 )
      goto LABEL_27;
    v41 = 16;
    v42 = 0;
  }
  v43 = 0;
  v54.m128i_i64[0] = (__int64)v60;
  while ( 1 )
  {
    *(_DWORD *)(v35 + 24) = v39 + 1;
    v44 = *(_QWORD *)(*(_QWORD *)(v35 + 32) + 8 * v39) != 0;
    if ( v42 + 1 > v41 )
    {
      v55 = *(_QWORD *)(*(_QWORD *)(v35 + 32) + 8 * v39) != 0;
      sub_2236E10(&src, v54.m128i_i64[0], v42 + 1, 1);
      v45 = src;
      v42 = v59.m128i_i64[0];
      v44 = v55;
    }
    else
    {
      v45 = src;
    }
    v45[v42] = v44;
    ++v43;
    v42 = ++v59.m128i_i64[0];
    if ( v40 == v43 )
      break;
    v35 = *a1;
    v41 = v59.m128i_u64[1];
    v39 = *(unsigned int *)(*a1 + 24);
  }
  v46 = src;
  if ( v42 )
    memmove(
      (void *)(a2 + 8LL * *(_DWORD *)(a2 + 16) * (3 * (unsigned int)(*(_DWORD *)(a2 + 48) == 1) + 5) + 104),
      src,
      v42);
  if ( v46 != v60 )
    free(v46);
LABEL_27:
  if ( ptr != v63 )
    free(ptr);
}
