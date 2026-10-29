// write access to const memory has been detected, the output may be wrong!
void __fastcall sub_1F1B720(__int64 *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __m128i v15; // rax
  __int64 v16; // rsi
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  unsigned __int64 v19; // rdx
  int v20; // ebp
  char *v21; // r14
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  int v26; // r15d
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  int v30; // r15d
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rdx
  __int64 v35; // rdx
  int v36; // r15d
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  int v40; // r15d
  __int64 v41; // rdx
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  __m128i v44; // [rsp+0h] [rbp-118h] BYREF
  __int64 v45; // [rsp+18h] [rbp-100h]
  void *v46; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-F0h]
  __m128i v48; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+40h] [rbp-D8h]
  void *ptr; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-C0h]
  _QWORD v52[23]; // [rsp+60h] [rbp-B8h] BYREF

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
  *(_DWORD *)(a2 + 48) = v9;
  v15.m128i_i64[0] = sub_1F194E0(v10, v4, v11, v12, v13, v14);
  v16 = *a1;
  v44 = v15;
  sub_1F194A0((__int64)&v48, v16);
  v17 = _mm_load_si128(&v44);
  v18 = _mm_load_si128(&v48);
  v19 = *(unsigned int *)(a2 + 16);
  ptr = v52;
  v52[0] = v49;
  *(_QWORD *)(a2 + 88) = v49;
  v20 = v19;
  *(__m128i *)(a2 + 56) = v17;
  *(__m128i *)(a2 + 72) = v18;
  v51 = 0x1000000000LL;
  if ( v19 <= 0x10 )
  {
    v21 = (char *)(a2 + 96);
    if ( (_DWORD)v19 )
      goto LABEL_4;
LABEL_29:
    v46 = ptr;
    v47 = (unsigned int)v51;
    sub_EB8020((__int64)&v46, v21);
    LODWORD(v51) = 0;
    sub_EB82F0(a2, (__int64)ptr, 0);
    LODWORD(v51) = 0;
    sub_EB8320(a2, (__int64)ptr, 0);
    LODWORD(v51) = 0;
    sub_EB8350(a2, (__int64)ptr, 0);
    LODWORD(v51) = 0;
    v41 = 0;
    goto LABEL_24;
  }
  v21 = (char *)(a2 + 96);
  sub_2237220(&ptr, v52, v19, 8);
  if ( !v20 )
    goto LABEL_29;
LABEL_4:
  v22 = 0;
  v44.m128i_i64[0] = (__int64)v52;
  do
  {
    while ( 1 )
    {
      v24 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v25 = (unsigned int)v51 + 1LL;
      if ( v25 > HIDWORD(v51) )
        break;
      ++v22;
      *((_QWORD *)ptr + (unsigned int)v51) = v24;
      v23 = (unsigned int)(v51 + 1);
      LODWORD(v51) = v51 + 1;
      if ( v22 == v20 )
        goto LABEL_8;
    }
    ++v22;
    v45 = v24;
    sub_2237220(&ptr, v44.m128i_i64[0], v25, 8);
    *((_QWORD *)ptr + (unsigned int)v51) = v45;
    v23 = (unsigned int)(v51 + 1);
    LODWORD(v51) = v51 + 1;
  }
  while ( v20 != v22 );
LABEL_8:
  v26 = 0;
  v47 = v23;
  v46 = ptr;
  sub_EB8020((__int64)&v46, v21);
  LODWORD(v51) = 0;
  do
  {
    while ( 1 )
    {
      v28 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v29 = (unsigned int)v51 + 1LL;
      if ( v29 > HIDWORD(v51) )
        break;
      ++v26;
      *((_QWORD *)ptr + (unsigned int)v51) = v28;
      v27 = (unsigned int)(v51 + 1);
      LODWORD(v51) = v51 + 1;
      if ( v26 == v20 )
        goto LABEL_12;
    }
    v44.m128i_i64[0] = v28;
    sub_2237220(&ptr, v52, v29, 8);
    ++v26;
    *((_QWORD *)ptr + (unsigned int)v51) = v44.m128i_i64[0];
    v27 = (unsigned int)(v51 + 1);
    LODWORD(v51) = v51 + 1;
  }
  while ( v20 != v26 );
LABEL_12:
  v30 = 0;
  sub_EB82F0(a2, (__int64)ptr, v27);
  LODWORD(v51) = 0;
  do
  {
    v31 = sub_1F61940(*(_QWORD *)(*a1 + 8));
    v32 = (unsigned int)v51;
    v33 = (unsigned int)v51 + 1LL;
    if ( v33 > HIDWORD(v51) )
    {
      v44.m128i_i64[0] = v31;
      sub_2237220(&ptr, v52, v33, 8);
      v32 = (unsigned int)v51;
      v34 = ptr;
      v31 = v44.m128i_i64[0];
    }
    else
    {
      v34 = ptr;
    }
    v34[v32] = v31;
    ++v30;
    v35 = (unsigned int)(v51 + 1);
    LODWORD(v51) = v51 + 1;
  }
  while ( v30 != v20 );
  v36 = 0;
  sub_EB8320(a2, (__int64)ptr, v35);
  LODWORD(v51) = 0;
  do
  {
    while ( 1 )
    {
      v38 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v39 = (unsigned int)v51 + 1LL;
      if ( v39 > HIDWORD(v51) )
        break;
      ++v36;
      *((_QWORD *)ptr + (unsigned int)v51) = v38;
      v37 = (unsigned int)(v51 + 1);
      LODWORD(v51) = v51 + 1;
      if ( v36 == v20 )
        goto LABEL_20;
    }
    v44.m128i_i64[0] = v38;
    sub_2237220(&ptr, v52, v39, 8);
    ++v36;
    *((_QWORD *)ptr + (unsigned int)v51) = v44.m128i_i64[0];
    v37 = (unsigned int)(v51 + 1);
    LODWORD(v51) = v51 + 1;
  }
  while ( v20 != v36 );
LABEL_20:
  v40 = 0;
  sub_EB8350(a2, (__int64)ptr, v37);
  LODWORD(v51) = 0;
  do
  {
    while ( 1 )
    {
      v42 = sub_1F61940(*(_QWORD *)(*a1 + 8));
      v43 = (unsigned int)v51 + 1LL;
      if ( v43 > HIDWORD(v51) )
        break;
      ++v40;
      *((_QWORD *)ptr + (unsigned int)v51) = v42;
      v41 = (unsigned int)(v51 + 1);
      LODWORD(v51) = v51 + 1;
      if ( v40 == v20 )
        goto LABEL_24;
    }
    v44.m128i_i64[0] = v42;
    sub_2237220(&ptr, v52, v43, 8);
    ++v40;
    *((_QWORD *)ptr + (unsigned int)v51) = v44.m128i_i64[0];
    v41 = (unsigned int)(v51 + 1);
    LODWORD(v51) = v51 + 1;
  }
  while ( v20 != v40 );
LABEL_24:
  sub_EB8380(a2, (__int64)ptr, v41);
  if ( ptr != v52 )
    free(ptr);
}
