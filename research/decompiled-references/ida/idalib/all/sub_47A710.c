unsigned __int64 __fastcall sub_47A710(__int64 a1, __int64 *a2, __int64 *a3)
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
  __int64 v34; // rdx
  __int64 v35; // rcx
  size_t v36; // rax
  const char *v37; // r9
  size_t v38; // r8
  char *v39; // rdi
  void *v40; // rdx
  void *v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rsi
  __int64 v44; // rax
  char *v45; // r15
  __m128i v46; // xmm1
  __m128i v47; // xmm2
  __int64 v48; // rax
  char *v49; // rdi
  void *v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rax
  const char *v54; // rax
  size_t v55; // rax
  const char *v56; // r8
  size_t v57; // r9
  char *v58; // rdi
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  char *v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  char *v71; // rdi
  void *v72; // rdx
  _QWORD *src; // [rsp+8h] [rbp-1E0h]
  int srca; // [rsp+8h] [rbp-1E0h]
  const char *srcb; // [rsp+8h] [rbp-1E0h]
  _BYTE *srce; // [rsp+8h] [rbp-1E0h]
  const char *srcc; // [rsp+8h] [rbp-1E0h]
  _BYTE *srcg; // [rsp+8h] [rbp-1E0h]
  void *srcd; // [rsp+8h] [rbp-1E0h]
  void *srcf; // [rsp+8h] [rbp-1E0h]
  __m128i v81; // [rsp+10h] [rbp-1D8h] BYREF
  char *v82; // [rsp+28h] [rbp-1C0h] BYREF
  void *ptr; // [rsp+30h] [rbp-1B8h] BYREF
  size_t n; // [rsp+38h] [rbp-1B0h]
  char *s1; // [rsp+50h] [rbp-198h] BYREF
  _BYTE v86[24]; // [rsp+58h] [rbp-190h] BYREF
  void *v87[3]; // [rsp+70h] [rbp-178h] BYREF
  __int64 v88[35]; // [rsp+90h] [rbp-158h] BYREF
  unsigned __int64 v89; // [rsp+1A8h] [rbp-40h]

  v6 = *(int *)(a1 + 8);
  v89 = __readfsqword(0x28u);
  src = (_QWORD *)switch_dbctx(v6);
  v7 = sub_46D210(*(_QWORD *)(a1 + 32), &v82, a3, *(_DWORD *)(a1 + 12), 1);
  v8 = v7 & 0x600;
  v9 = a2[1];
  v10 = *a2;
  if ( a2[2] < (unsigned __int64)(v9 + 1) )
  {
    v59 = qvector_reserve(a2, v10, v9 + 1, 24);
    v9 = a2[1];
    *a2 = v59;
    v10 = v59;
  }
  v11 = v10 + 24 * v9;
  *(_OWORD *)(v11 + 8) = 0;
  *(_QWORD *)v11 = 0;
  ++a2[1];
  sub_35A790((char **)v11);
  sub_47A640((__int64 *)&s1, v7, 1);
  v12 = a2[1];
  v13 = *a2;
  v14 = a2[2];
  v15 = v12 + 1;
  if ( (unsigned __int64)&s1 >= *a2 && (unsigned __int64)&s1 < v13 + 24 * v14 )
  {
    v45 = s1;
    v46 = _mm_loadl_epi64((const __m128i *)v86);
    s1 = nullptr;
    v47 = _mm_loadl_epi64((const __m128i *)&v86[8]);
    *(_OWORD *)v86 = 0;
    if ( v14 < v15 )
    {
      v81.m128i_i64[1] = v47.m128i_i64[0];
      v81.m128i_i64[0] = v46.m128i_i64[0];
      v67 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v67;
      v13 = v67;
      v47 = _mm_loadl_epi64((const __m128i *)&v81.m128i_u64[1]);
      v12 = a2[1];
      v46 = _mm_loadl_epi64(&v81);
    }
    v48 = v13 + 24 * v12;
    *(_QWORD *)v48 = v45;
    *(__m128i *)(v48 + 8) = _mm_unpacklo_epi64(v46, v47);
    v49 = s1;
    ++a2[1];
    if ( v49 )
    {
      *(_QWORD *)v86 = 0;
      qfree(v49);
    }
  }
  else
  {
    if ( v14 < v15 )
    {
      v60 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v60;
      v13 = v60;
      v12 = a2[1];
    }
    v16 = _mm_loadu_si128((const __m128i *)v86);
    v17 = v13 + 24 * v12;
    *(_QWORD *)v17 = s1;
    *(__m128i *)(v17 + 8) = v16;
    ++a2[1];
  }
  v18 = (unsigned int)v7 & 0xF0000600;
  if ( v18 != 1610613760 && (v7 & 0x70000600) != 0x50000400 )
    goto LABEL_10;
  *(_OWORD *)v86 = 0;
  s1 = nullptr;
  get_opinfo(v88, a3, 0, v7);
  if ( v8 == 1024 )
  {
    v61 = (unsigned int)v7 & 0xF0000000;
    if ( v61 == 1610612736 )
    {
      sub_6BB720(src[209], &s1, v88[0]);
      goto LABEL_77;
    }
    if ( v61 == 1342177280 )
    {
      print_strlit_type((__int64)&s1, v88[0], nullptr, 8);
      goto LABEL_77;
    }
  }
  custom_data_type = get_custom_data_type((unsigned int)SLOWORD(v88[0]));
  if ( custom_data_type )
  {
    if ( !*(_QWORD *)(custom_data_type + 24) )
      goto LABEL_68;
    srcb = *(const char **)(custom_data_type + 24);
    v36 = strlen(srcb);
    v37 = srcb;
    v38 = v36;
    if ( !v36 )
      goto LABEL_68;
    v39 = s1;
    v40 = (void *)(v36 + 1);
    if ( *(_QWORD *)&v86[8] < v36 + 1 )
    {
      v81.m128i_i64[1] = v36;
      v81.m128i_i64[0] = (__int64)srcb;
      srcd = (void *)(v36 + 1);
      s1 = (char *)qvector_reserve(&s1, s1, v40, 1);
      v38 = v81.m128i_u64[1];
      v39 = s1;
      v37 = (const char *)v81.m128i_i64[0];
      v40 = srcd;
    }
    *(_QWORD *)v86 = v40;
    srce = (_BYTE *)v38;
    memmove(v39, v37, v38);
    srce[(_QWORD)s1] = 0;
  }
  else
  {
    v54 = sub_3E8C20(src[209], (unsigned int)SLOWORD(v88[0]), v34, v35);
    if ( !v54 )
      goto LABEL_68;
    srcc = v54;
    v55 = strlen(v54);
    v56 = srcc;
    v57 = v55;
    if ( !v55 )
      goto LABEL_68;
    v71 = s1;
    v72 = (void *)(v55 + 1);
    if ( *(_QWORD *)&v86[8] < v55 + 1 )
    {
      v81.m128i_i64[1] = v55;
      v81.m128i_i64[0] = (__int64)srcc;
      srcf = (void *)(v55 + 1);
      s1 = (char *)qvector_reserve(&s1, s1, v72, 1);
      v57 = v81.m128i_u64[1];
      v71 = s1;
      v56 = (const char *)v81.m128i_i64[0];
      v72 = srcf;
    }
    *(_QWORD *)v86 = v72;
    srcg = (_BYTE *)v57;
    memmove(v71, v56, v57);
    srcg[(_QWORD)s1] = 0;
  }
LABEL_77:
  if ( *(_QWORD *)v86 <= 1u )
  {
LABEL_68:
    v58 = s1;
    goto LABEL_69;
  }
  v62 = a2[1];
  v63 = *a2;
  if ( a2[2] < (unsigned __int64)(v62 + 1) )
  {
    v70 = qvector_reserve(a2, v63, v62 + 1, 24);
    *a2 = v70;
    v62 = a2[1];
    v63 = v70;
  }
  v64 = v63 + 24 * v62;
  *(_OWORD *)(v64 + 8) = 0;
  *(_QWORD *)v64 = 0;
  v65 = s1;
  ++a2[1];
  v58 = *(char **)v64;
  *(_QWORD *)v64 = v65;
  v66 = *(_QWORD *)(v64 + 16);
  *(_QWORD *)(v64 + 8) = *(_QWORD *)v86;
  *(_QWORD *)(v64 + 16) = *(_QWORD *)&v86[8];
  s1 = v58;
  *(_QWORD *)&v86[8] = v66;
LABEL_69:
  if ( v58 )
  {
    *(_QWORD *)v86 = 0;
    qfree(v58);
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
      *(_OWORD *)v86 = 0;
      s1 = nullptr;
      print_optype_description((int)&s1, (int)a3, srca, i);
      if ( *(_QWORD *)v86 <= 1u )
      {
        v21 = s1;
LABEL_15:
        if ( v21 )
        {
          *(_QWORD *)v86 = 0;
          qfree(v21);
        }
        goto LABEL_17;
      }
      if ( i > 1 )
      {
        v21 = s1;
        if ( (unsigned __int64)(*(_QWORD *)v86 - 1LL) > 2 )
        {
          v22 = &s1[*(_QWORD *)v86 - 4];
          if ( *v22 == 40 && v22[1] == 63 && v22[2] == 41 )
            goto LABEL_15;
        }
        v81.m128i_i64[0] = (__int64)s1;
        v23 = strcmp(s1, "invsign");
        v21 = (char *)v81.m128i_i64[0];
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
      sub_35A790((char **)v26);
      if ( s1 )
        break;
LABEL_17:
      if ( ++i == v19 )
        goto LABEL_28;
    }
    *(_QWORD *)v86 = 0;
    qfree(s1);
  }
LABEL_28:
  LODWORD(s1) = 0;
  memset(v86, 0, sizeof(v86));
  memset(v87, 0, sizeof(v87));
  sub_46AE10((int *)&s1, (__int64)a3, v7);
  if ( (_DWORD)s1 )
  {
    sub_472CA0((__int64 *)&ptr, (int *)&s1, v7);
    v27 = n;
    if ( n > 1 )
    {
      v50 = (void *)qalloc_or_throw(n);
      memcpy(v50, ptr, v27);
      v51 = a2[1];
      v52 = *a2;
      if ( a2[2] < (unsigned __int64)(v51 + 1) )
      {
        v68 = qvector_reserve(a2, v52, v51 + 1, 24);
        *a2 = v68;
        v51 = a2[1];
        v52 = v68;
      }
      v53 = v52 + 24 * v51;
      *(_QWORD *)v53 = v50;
      *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64((__m128i)v27, (__m128i)v27);
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
  if ( v87[0] )
  {
    v87[1] = nullptr;
    qfree(v87[0]);
  }
  if ( *(_QWORD *)v86 )
  {
    *(_QWORD *)&v86[8] = 0;
    qfree(*(void **)v86);
  }
  sub_4747A0(a2, (unsigned __int64)a3, v7);
  s1 = nullptr;
  memset(v86, 0, sizeof(v86));
  memset(v87, 0, 17);
  sub_3C5AF0((__int64)&s1, (__int64)a3, v7);
  if ( ((__int64)v87[0] | *(_QWORD *)v86) > 1uLL )
  {
    sub_3C3A80((__int64 *)&ptr, (__int64)&s1);
    v29 = n;
    if ( n > 1 )
    {
      v41 = (void *)qalloc_or_throw(n);
      memcpy(v41, ptr, v29);
      v42 = a2[1];
      v43 = *a2;
      if ( a2[2] < (unsigned __int64)(v42 + 1) )
      {
        v69 = qvector_reserve(a2, v43, v42 + 1, 24);
        *a2 = v69;
        v42 = a2[1];
        v43 = v69;
      }
      v44 = v43 + 24 * v42;
      *(_QWORD *)v44 = v41;
      *(__m128i *)(v44 + 8) = _mm_unpacklo_epi64((__m128i)v29, (__m128i)v29);
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
  if ( *(_QWORD *)&v86[16] )
  {
    v87[0] = nullptr;
    qfree(*(void **)&v86[16]);
  }
  if ( s1 )
  {
    *(_QWORD *)v86 = 0;
    qfree(s1);
  }
  return v89 - __readfsqword(0x28u);
}
