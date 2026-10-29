unsigned __int64 __fastcall sub_466210(__int64 a1, __int64 *a2, unsigned int a3)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // r15d
  int i; // ebx
  char *v21; // rdi
  char *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdi
  size_t v27; // rbx
  void *v28; // rdi
  size_t v29; // rbx
  void *v30; // rdi
  __int64 v32; // rax
  __int64 custom_data_type; // rax
  size_t v34; // rax
  const char *v35; // r9
  size_t v36; // r8
  char *v37; // rdi
  void *v38; // rdx
  void *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rsi
  __int64 v42; // rax
  char *v43; // r15
  __m128i v44; // xmm1
  __m128i v45; // xmm2
  __int64 v46; // rax
  char *v47; // rdi
  void *v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rsi
  __int64 v51; // rax
  const char *v52; // rax
  size_t v53; // rax
  const char *v54; // r8
  size_t v55; // r9
  char *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rsi
  __int64 v62; // rax
  char *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  char *v69; // rdi
  void *v70; // rdx
  _QWORD *src; // [rsp+8h] [rbp-150h]
  int srca; // [rsp+8h] [rbp-150h]
  const char *srcb; // [rsp+8h] [rbp-150h]
  _BYTE *srce; // [rsp+8h] [rbp-150h]
  const char *srcc; // [rsp+8h] [rbp-150h]
  _BYTE *srcg; // [rsp+8h] [rbp-150h]
  void *srcd; // [rsp+8h] [rbp-150h]
  void *srcf; // [rsp+8h] [rbp-150h]
  __m128i v79; // [rsp+10h] [rbp-148h] BYREF
  unsigned int v80; // [rsp+2Ch] [rbp-12Ch] BYREF
  void *ptr; // [rsp+30h] [rbp-128h] BYREF
  size_t n; // [rsp+38h] [rbp-120h]
  char *s1; // [rsp+50h] [rbp-108h] BYREF
  _BYTE v84[24]; // [rsp+58h] [rbp-100h] BYREF
  void *v85[3]; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v86[34]; // [rsp+90h] [rbp-C8h] BYREF
  unsigned __int64 v87; // [rsp+118h] [rbp-40h]

  v6 = *(int *)(a1 + 8);
  v87 = __readfsqword(0x28u);
  src = (_QWORD *)switch_dbctx(v6);
  v7 = sub_458D90(*(_QWORD *)(a1 + 32), &v80, a3, *(_DWORD *)(a1 + 12), 1);
  v8 = v7 & 0x600;
  v9 = a2[1];
  v10 = *a2;
  if ( a2[2] < (unsigned __int64)(v9 + 1) )
  {
    v57 = qvector_reserve(a2, v10, v9 + 1, 24);
    v9 = a2[1];
    *a2 = v57;
    v10 = v57;
  }
  v11 = v10 + 24 * v9;
  *(_OWORD *)(v11 + 8) = 0;
  *(_QWORD *)v11 = 0;
  ++a2[1];
  sub_3573A0((char **)v11);
  sub_466140((__int64 *)&s1, v7, 1);
  v12 = a2[1];
  v13 = *a2;
  v14 = a2[2];
  v15 = v12 + 1;
  if ( (unsigned __int64)&s1 >= *a2 && (unsigned __int64)&s1 < v13 + 24 * v14 )
  {
    v43 = s1;
    v44 = _mm_loadl_epi64((const __m128i *)v84);
    s1 = nullptr;
    v45 = _mm_loadl_epi64((const __m128i *)&v84[8]);
    *(_OWORD *)v84 = 0;
    if ( v14 < v15 )
    {
      v79.m128i_i64[1] = v45.m128i_i64[0];
      v79.m128i_i64[0] = v44.m128i_i64[0];
      v65 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v65;
      v13 = v65;
      v45 = _mm_loadl_epi64((const __m128i *)&v79.m128i_u64[1]);
      v12 = a2[1];
      v44 = _mm_loadl_epi64(&v79);
    }
    v46 = v13 + 24 * v12;
    *(_QWORD *)v46 = v43;
    *(__m128i *)(v46 + 8) = _mm_unpacklo_epi64(v44, v45);
    v47 = s1;
    ++a2[1];
    if ( v47 )
    {
      *(_QWORD *)v84 = 0;
      qfree(v47);
    }
  }
  else
  {
    if ( v14 < v15 )
    {
      v58 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v58;
      v13 = v58;
      v12 = a2[1];
    }
    v16 = _mm_loadu_si128((const __m128i *)v84);
    v17 = v13 + 24 * v12;
    *(_QWORD *)v17 = s1;
    *(__m128i *)(v17 + 8) = v16;
    ++a2[1];
  }
  v18 = (unsigned int)v7 & 0xF0000600;
  if ( v18 != 1610613760 && (v7 & 0x70000600) != 0x50000400 )
    goto LABEL_10;
  *(_OWORD *)v84 = 0;
  s1 = nullptr;
  get_opinfo(v86, a3, 0, v7);
  if ( v8 == 1024 )
  {
    v59 = (unsigned int)v7 & 0xF0000000;
    if ( v59 == 1610612736 )
    {
      sub_69AD40(src[185], &s1, v86[0]);
      goto LABEL_77;
    }
    if ( v59 == 1342177280 )
    {
      print_strlit_type(&s1, v86[0], 0, 8);
      goto LABEL_77;
    }
  }
  custom_data_type = get_custom_data_type((unsigned int)SLOWORD(v86[0]));
  if ( custom_data_type )
  {
    if ( !*(_QWORD *)(custom_data_type + 24) )
      goto LABEL_68;
    srcb = *(const char **)(custom_data_type + 24);
    v34 = strlen(srcb);
    v35 = srcb;
    v36 = v34;
    if ( !v34 )
      goto LABEL_68;
    v37 = s1;
    v38 = (void *)(v34 + 1);
    if ( *(_QWORD *)&v84[8] < v34 + 1 )
    {
      v79.m128i_i64[1] = v34;
      v79.m128i_i64[0] = (__int64)srcb;
      srcd = (void *)(v34 + 1);
      s1 = (char *)qvector_reserve(&s1, s1, v38, 1);
      v36 = v79.m128i_u64[1];
      v37 = s1;
      v35 = (const char *)v79.m128i_i64[0];
      v38 = srcd;
    }
    *(_QWORD *)v84 = v38;
    srce = (_BYTE *)v36;
    memmove(v37, v35, v36);
    srce[(_QWORD)s1] = 0;
  }
  else
  {
    v52 = sub_3E29A0(src[185], SLOWORD(v86[0]));
    if ( !v52 )
      goto LABEL_68;
    srcc = v52;
    v53 = strlen(v52);
    v54 = srcc;
    v55 = v53;
    if ( !v53 )
      goto LABEL_68;
    v69 = s1;
    v70 = (void *)(v53 + 1);
    if ( *(_QWORD *)&v84[8] < v53 + 1 )
    {
      v79.m128i_i64[1] = v53;
      v79.m128i_i64[0] = (__int64)srcc;
      srcf = (void *)(v53 + 1);
      s1 = (char *)qvector_reserve(&s1, s1, v70, 1);
      v55 = v79.m128i_u64[1];
      v69 = s1;
      v54 = (const char *)v79.m128i_i64[0];
      v70 = srcf;
    }
    *(_QWORD *)v84 = v70;
    srcg = (_BYTE *)v55;
    memmove(v69, v54, v55);
    srcg[(_QWORD)s1] = 0;
  }
LABEL_77:
  if ( *(_QWORD *)v84 <= 1u )
  {
LABEL_68:
    v56 = s1;
    goto LABEL_69;
  }
  v60 = a2[1];
  v61 = *a2;
  if ( a2[2] < (unsigned __int64)(v60 + 1) )
  {
    v68 = qvector_reserve(a2, v61, v60 + 1, 24);
    *a2 = v68;
    v60 = a2[1];
    v61 = v68;
  }
  v62 = v61 + 24 * v60;
  *(_OWORD *)(v62 + 8) = 0;
  *(_QWORD *)v62 = 0;
  v63 = s1;
  ++a2[1];
  v56 = *(char **)v62;
  *(_QWORD *)v62 = v63;
  v64 = *(_QWORD *)(v62 + 16);
  *(_QWORD *)(v62 + 8) = *(_QWORD *)v84;
  *(_QWORD *)(v62 + 16) = *(_QWORD *)&v84[8];
  s1 = v56;
  *(_QWORD *)&v84[8] = v64;
LABEL_69:
  if ( v56 )
  {
    *(_QWORD *)v84 = 0;
    qfree(v56);
  }
  if ( v18 == 1610613760 || (v7 & 0x70000600) == 0x50000400 )
  {
    srca = v7 & 0xFF0FFFFF;
    goto LABEL_11;
  }
LABEL_10:
  srca = v7;
LABEL_11:
  v19 = 1;
  if ( v8 == 1536 )
    v19 = 8;
  for ( i = 0; i != v19; ++i )
  {
    while ( 1 )
    {
      *(_OWORD *)v84 = 0;
      s1 = nullptr;
      print_optype_description((int)&s1, a3, srca, i);
      if ( *(_QWORD *)v84 <= 1u )
      {
        v21 = s1;
LABEL_15:
        if ( v21 )
        {
          *(_QWORD *)v84 = 0;
          qfree(v21);
        }
        goto LABEL_17;
      }
      if ( i > 1 )
      {
        v21 = s1;
        if ( (unsigned __int64)(*(_QWORD *)v84 - 1LL) > 2 )
        {
          v22 = &s1[*(_QWORD *)v84 - 4];
          if ( *v22 == 40 && v22[1] == 63 && v22[2] == 41 )
            goto LABEL_15;
        }
        v79.m128i_i64[0] = (__int64)s1;
        v23 = strcmp(s1, "invsign");
        v21 = (char *)v79.m128i_i64[0];
        if ( !v23 )
          goto LABEL_15;
      }
      v24 = a2[1];
      v25 = *a2;
      if ( a2[2] < (unsigned __int64)(v24 + 1) )
      {
        v32 = qvector_reserve(a2, v25, v24 + 1, 24);
        *a2 = v32;
        v24 = a2[1];
        v25 = v32;
      }
      v26 = v25 + 24 * v24;
      *(_QWORD *)v26 = 0;
      *(_OWORD *)(v26 + 8) = 0;
      ++a2[1];
      sub_3573A0((char **)v26);
      if ( s1 )
        break;
LABEL_17:
      if ( ++i == v19 )
        goto LABEL_28;
    }
    *(_QWORD *)v84 = 0;
    qfree(s1);
  }
LABEL_28:
  LODWORD(s1) = 0;
  memset(v84, 0, sizeof(v84));
  memset(v85, 0, sizeof(v85));
  sub_456A50((int *)&s1, a3, v7);
  if ( (_DWORD)s1 )
  {
    sub_45E830((__int64 *)&ptr, (int *)&s1, v7);
    v27 = n;
    if ( n > 1 )
    {
      v48 = (void *)qalloc_or_throw(n, (const char *)&s1);
      memcpy(v48, ptr, v27);
      v49 = a2[1];
      v50 = *a2;
      if ( a2[2] < (unsigned __int64)(v49 + 1) )
      {
        v66 = qvector_reserve(a2, v50, v49 + 1, 24);
        *a2 = v66;
        v49 = a2[1];
        v50 = v66;
      }
      v51 = v50 + 24 * v49;
      *(_QWORD *)v51 = v48;
      *(__m128i *)(v51 + 8) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
      v28 = ptr;
      ++a2[1];
      if ( v28 )
      {
LABEL_31:
        n = 0;
        qfree(v28);
      }
    }
    else
    {
      v28 = ptr;
      if ( ptr )
        goto LABEL_31;
    }
  }
  if ( v85[0] )
  {
    v85[1] = nullptr;
    qfree(v85[0]);
  }
  if ( *(_QWORD *)v84 )
  {
    *(_QWORD *)&v84[8] = 0;
    qfree(*(void **)v84);
  }
  sub_460300(a2, a3, v7);
  s1 = nullptr;
  memset(v84, 0, sizeof(v84));
  memset(v85, 0, 17);
  sub_3C09E0((__int64)&s1, a3, v7);
  if ( ((__int64)v85[0] | *(_QWORD *)v84) > 1uLL )
  {
    sub_3BE960((__int64 *)&ptr, (__int64)&s1);
    v29 = n;
    if ( n > 1 )
    {
      v39 = (void *)qalloc_or_throw(n, (const char *)&s1);
      memcpy(v39, ptr, v29);
      v40 = a2[1];
      v41 = *a2;
      if ( a2[2] < (unsigned __int64)(v40 + 1) )
      {
        v67 = qvector_reserve(a2, v41, v40 + 1, 24);
        *a2 = v67;
        v40 = a2[1];
        v41 = v67;
      }
      v42 = v41 + 24 * v40;
      *(_QWORD *)v42 = v39;
      *(__m128i *)(v42 + 8) = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
      v30 = ptr;
      ++a2[1];
      if ( v30 )
      {
LABEL_39:
        n = 0;
        qfree(v30);
      }
    }
    else
    {
      v30 = ptr;
      if ( ptr )
        goto LABEL_39;
    }
  }
  if ( *(_QWORD *)&v84[16] )
  {
    v85[0] = nullptr;
    qfree(*(void **)&v84[16]);
  }
  if ( s1 )
  {
    *(_QWORD *)v84 = 0;
    qfree(s1);
  }
  return v87 - __readfsqword(0x28u);
}

