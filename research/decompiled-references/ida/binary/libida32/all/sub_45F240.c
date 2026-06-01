char **__fastcall sub_45F240(__int64 a1, __int64 *a2)
{
  bool v3; // zf
  int v5; // r12d
  int v6; // ecx
  __int64 v7; // rdx
  char *v8; // rsi
  unsigned __int64 v9; // rax
  char *v10; // rdi
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r13
  char *v16; // rax
  void *v17; // rdi
  __int64 v18; // r13
  __int64 v19; // r12
  char *v20; // rdx
  void *v21; // rdi
  __int64 v22; // rax
  _DWORD *v23; // r8
  _DWORD *v24; // r13
  _DWORD *v25; // r14
  __int64 v26; // rdx
  char *v27; // rsi
  char *v28; // rdi
  _DWORD *v29; // rax
  __int64 v30; // rax
  char *v31; // rsi
  unsigned __int64 v32; // rdi
  void *v33; // r15
  __m128i v34; // xmm0
  __m128i v35; // xmm1
  char *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // r13
  char *v40; // rax
  void *v41; // rdi
  __int64 v42; // r13
  __int64 v43; // r12
  char *v44; // rdx
  void *v45; // rdi
  _QWORD *v46; // r13
  __int64 v47; // r14
  __int64 v48; // rdx
  char *v49; // rsi
  char *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // r13
  char *v54; // rax
  void *v55; // rdi
  __int64 v56; // r13
  __int64 v57; // r12
  char *v58; // rdx
  void *v59; // rdi
  __int64 v61; // rdx
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rdi
  __m128i v70; // xmm0
  char *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rsi
  __int64 v74; // rdi
  char *v75; // rdi
  __m128i *v76; // rax
  void *v77; // r13
  __int64 v78; // rax
  char *v79; // rsi
  unsigned __int64 v80; // rdi
  __m128i v81; // xmm0
  __m128i v82; // xmm1
  char *v83; // rax
  void *v84; // r13
  __int64 v85; // rax
  char *v86; // rsi
  unsigned __int64 v87; // rdi
  __m128i v88; // xmm0
  __m128i v89; // xmm1
  char *v90; // rax
  char *v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __m128i v95; // xmm0
  char *v96; // rax
  __m128i v97; // xmm0
  char *v98; // rax
  char *v99; // rsi
  char *v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __m128i v105; // [rsp+0h] [rbp-88h] BYREF
  void *v106; // [rsp+10h] [rbp-78h] BYREF
  __int128 v107; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v109; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v110; // [rsp+48h] [rbp-40h]

  v3 = *(_DWORD *)a1 == -1;
  v110 = __readfsqword(0x28u);
  if ( !v3 )
  {
    v72 = a2[1];
    v73 = *a2;
    if ( a2[2] < (unsigned __int64)(v72 + 1) )
    {
      v101 = qvector_reserve(a2, v73, v72 + 1, 24);
      v72 = a2[1];
      *a2 = v101;
      v73 = v101;
    }
    v74 = v73 + 24 * v72;
    *(_QWORD *)v74 = 0;
    *(_OWORD *)(v74 + 8) = 0;
    ++a2[1];
    sub_3573A0((char **)v74);
  }
  if ( !*(_BYTE *)(a1 + 328) )
    goto LABEL_25;
  v5 = *(_DWORD *)(a1 + 8);
  v106 = nullptr;
  v107 = 0;
  if ( v5 )
  {
    v106 = (void *)qvector_reserve(&v106, 0, 1, 24);
    v91 = (char *)v106 + 24 * v107;
    *(_QWORD *)v91 = 0;
    *(_OWORD *)(v91 + 8) = 0;
    *(_QWORD *)&v107 = v107 + 1;
    sub_3573A0((char **)v91);
  }
  v6 = *(_DWORD *)(a1 + 12);
  if ( v6 == -1 )
  {
LABEL_10:
    v11 = *(_DWORD *)(a1 + 4);
    if ( (v11 & 1) != 0 )
      goto LABEL_11;
    goto LABEL_97;
  }
  v7 = v107;
  v8 = (char *)v106;
  v9 = v107 + 1;
  if ( !v6 )
  {
    if ( *((_QWORD *)&v107 + 1) < v9 )
    {
      v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
      v7 = v107;
      v8 = (char *)v106;
    }
    v10 = &v8[24 * v7];
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    *(_QWORD *)&v107 = v107 + 1;
    sub_3573A0((char **)v10);
    goto LABEL_10;
  }
  if ( *((_QWORD *)&v107 + 1) < v9 )
  {
    v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
    v7 = v107;
    v8 = (char *)v106;
  }
  v75 = &v8[24 * v7];
  *(_QWORD *)v75 = 0;
  *(_OWORD *)(v75 + 8) = 0;
  *(_QWORD *)&v107 = v107 + 1;
  sub_3573A0((char **)v75);
  v11 = *(_DWORD *)(a1 + 4);
  if ( (v11 & 1) != 0 )
  {
LABEL_11:
    if ( (v11 & 2) == 0 )
      goto LABEL_12;
    goto LABEL_103;
  }
LABEL_97:
  v109 = 0;
  ptr = nullptr;
  v76 = (__m128i *)qvector_reserve(&ptr, 0, 20, 1);
  ptr = v76;
  v109.m128i_i64[0] = 20;
  *v76 = _mm_load_si128((const __m128i *)&xmmword_2383970);
  *(__int32 *)((char *)&v76->m128i_i32[3] + 3) = 1952675186;
  v77 = ptr;
  *((_BYTE *)ptr + 19) = 0;
  v78 = v107;
  v79 = (char *)v106;
  v80 = v107 + 1;
  if ( &ptr < v106 || &ptr >= (void **)((char *)v106 + 24 * *((_QWORD *)&v107 + 1)) )
  {
    if ( *((_QWORD *)&v107 + 1) < v80 )
    {
      v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
      v79 = (char *)v106;
      v77 = ptr;
      v78 = v107;
    }
    v95 = _mm_loadu_si128(&v109);
    v96 = &v79[24 * v78];
    *(_QWORD *)v96 = v77;
    *(__m128i *)(v96 + 8) = v95;
    *(_QWORD *)&v107 = v107 + 1;
  }
  else
  {
    v81 = _mm_loadl_epi64(&v109);
    v82 = _mm_loadl_epi64((const __m128i *)&v109.m128i_u64[1]);
    ptr = nullptr;
    v109 = 0;
    if ( *((_QWORD *)&v107 + 1) < v80 )
    {
      v105.m128i_i64[1] = v82.m128i_i64[0];
      v105.m128i_i64[0] = v81.m128i_i64[0];
      v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
      v79 = (char *)v106;
      v82 = _mm_loadl_epi64((const __m128i *)&v105.m128i_u64[1]);
      v78 = v107;
      v81 = _mm_loadl_epi64(&v105);
    }
    v83 = &v79[24 * v78];
    *(_QWORD *)v83 = v77;
    *(__m128i *)(v83 + 8) = _mm_unpacklo_epi64(v81, v82);
    *(_QWORD *)&v107 = v107 + 1;
    if ( ptr )
    {
      v109.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  v11 = *(_DWORD *)(a1 + 4);
  if ( (v11 & 2) == 0 )
  {
LABEL_12:
    v12 = v107;
    if ( (v11 & 4) == 0 )
      goto LABEL_13;
    goto LABEL_118;
  }
LABEL_103:
  v109 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 17, 1);
  v109.m128i_i64[0] = 17;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&xmmword_2383980);
  v84 = ptr;
  *((_BYTE *)ptr + 16) = 0;
  v85 = v107;
  v86 = (char *)v106;
  v87 = v107 + 1;
  if ( &ptr < v106 || &ptr >= (void **)((char *)v106 + 24 * *((_QWORD *)&v107 + 1)) )
  {
    if ( *((_QWORD *)&v107 + 1) < v87 )
    {
      v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
      v86 = (char *)v106;
      v84 = ptr;
      v85 = v107;
    }
    v97 = _mm_loadu_si128(&v109);
    v98 = &v86[24 * v85];
    *(_QWORD *)v98 = v84;
    *(__m128i *)(v98 + 8) = v97;
    v12 = v107 + 1;
    *(_QWORD *)&v107 = v107 + 1;
  }
  else
  {
    v88 = _mm_loadl_epi64(&v109);
    v89 = _mm_loadl_epi64((const __m128i *)&v109.m128i_u64[1]);
    ptr = nullptr;
    v109 = 0;
    if ( *((_QWORD *)&v107 + 1) < v87 )
    {
      v105.m128i_i64[1] = v89.m128i_i64[0];
      v105.m128i_i64[0] = v88.m128i_i64[0];
      v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
      v86 = (char *)v106;
      v89 = _mm_loadl_epi64((const __m128i *)&v105.m128i_u64[1]);
      v85 = v107;
      v88 = _mm_loadl_epi64(&v105);
    }
    v90 = &v86[24 * v85];
    *(_QWORD *)v90 = v84;
    *(__m128i *)(v90 + 8) = _mm_unpacklo_epi64(v88, v89);
    v12 = v107 + 1;
    *(_QWORD *)&v107 = v107 + 1;
    if ( ptr )
    {
      v109.m128i_i64[0] = 0;
      qfree(ptr);
      v12 = v107;
    }
  }
  if ( (*(_DWORD *)(a1 + 4) & 4) != 0 )
  {
LABEL_118:
    v99 = (char *)v106;
    if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)(v12 + 1) )
    {
      v106 = (void *)qvector_reserve(&v106, v106, v12 + 1, 24);
      v12 = v107;
      v99 = (char *)v106;
    }
    v100 = &v99[24 * v12];
    *(_QWORD *)v100 = 0;
    *(_OWORD *)(v100 + 8) = 0;
    *(_QWORD *)&v107 = v107 + 1;
    sub_3573A0((char **)v100);
    v12 = v107;
  }
LABEL_13:
  if ( v12 )
  {
    v13 = a2[1];
    v14 = *a2;
    if ( a2[2] < (unsigned __int64)(v13 + 1) )
    {
      v94 = qvector_reserve(a2, v14, v13 + 1, 24);
      *a2 = v94;
      v13 = a2[1];
      v14 = v94;
    }
    v15 = v14 + 24 * v13;
    *(_QWORD *)v15 = 0;
    *(_OWORD *)(v15 + 8) = 0;
    ++a2[1];
    sub_40E680((__int64 *)&ptr, (__int64 *)&v106, ",");
    sub_3573A0((char **)v15);
    if ( ptr )
    {
      v109.m128i_i64[0] = 0;
      qfree(ptr);
    }
    v16 = (char *)v106;
    v17 = v106;
    if ( !v106 )
      goto LABEL_25;
    v18 = v107;
    if ( (_QWORD)v107 )
    {
      v19 = 0;
      do
      {
        v20 = &v16[24 * v19];
        v21 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *((_QWORD *)v20 + 1) = 0;
          qfree(v21);
          v16 = (char *)v106;
        }
        ++v19;
        v17 = v16;
      }
      while ( v18 != v19 );
    }
    goto LABEL_24;
  }
  v17 = v106;
  if ( v106 )
  {
LABEL_24:
    *(_QWORD *)&v107 = 0;
    qfree(v17);
  }
LABEL_25:
  v22 = *(_QWORD *)(a1 + 24);
  if ( !v22 )
    goto LABEL_51;
  v23 = *(_DWORD **)(a1 + 16);
  v106 = nullptr;
  v107 = 0;
  v24 = &v23[v22];
  if ( v24 == v23 )
    goto LABEL_51;
  v25 = v23;
  do
  {
    while ( 1 )
    {
      if ( *v25 != -1 )
      {
        v26 = v107;
        v27 = (char *)v106;
        if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)(v107 + 1) )
        {
          v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
          v26 = v107;
          v27 = (char *)v106;
        }
        v28 = &v27[24 * v26];
        *(_QWORD *)v28 = 0;
        *(_OWORD *)(v28 + 8) = 0;
        *(_QWORD *)&v107 = v107 + 1;
        sub_3573A0((char **)v28);
        goto LABEL_31;
      }
      v109 = 0;
      ptr = nullptr;
      v29 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
      ptr = v29;
      v109.m128i_i64[0] = 8;
      *v29 = 1094992194;
      *(_DWORD *)((char *)v29 + 3) = 1380205633;
      *((_BYTE *)ptr + 7) = 0;
      v30 = v107;
      v31 = (char *)v106;
      v32 = v107 + 1;
      if ( &ptr < v106 || &ptr >= (void **)((char *)v106 + 24 * *((_QWORD *)&v107 + 1)) )
      {
        if ( *((_QWORD *)&v107 + 1) < v32 )
        {
          v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
          v31 = (char *)v106;
          v30 = v107;
        }
        v70 = _mm_loadu_si128(&v109);
        v71 = &v31[24 * v30];
        *(_QWORD *)v71 = ptr;
        *(__m128i *)(v71 + 8) = v70;
        *(_QWORD *)&v107 = v107 + 1;
        goto LABEL_31;
      }
      v33 = ptr;
      v34 = _mm_loadl_epi64(&v109);
      ptr = nullptr;
      v35 = _mm_loadl_epi64((const __m128i *)&v109.m128i_u64[1]);
      v109 = 0;
      if ( *((_QWORD *)&v107 + 1) < v32 )
      {
        v105.m128i_i64[1] = v35.m128i_i64[0];
        v105.m128i_i64[0] = v34.m128i_i64[0];
        v106 = (void *)qvector_reserve(&v106, v106, v107 + 1, 24);
        v31 = (char *)v106;
        v35 = _mm_loadl_epi64((const __m128i *)&v105.m128i_u64[1]);
        v30 = v107;
        v34 = _mm_loadl_epi64(&v105);
      }
      v36 = &v31[24 * v30];
      *(_QWORD *)v36 = v33;
      *(__m128i *)(v36 + 8) = _mm_unpacklo_epi64(v34, v35);
      *(_QWORD *)&v107 = v107 + 1;
      if ( ptr )
        break;
LABEL_31:
      if ( v24 == ++v25 )
        goto LABEL_39;
    }
    v109.m128i_i64[0] = 0;
    ++v25;
    qfree(ptr);
  }
  while ( v24 != v25 );
LABEL_39:
  if ( (_QWORD)v107 )
  {
    v37 = a2[1];
    v38 = *a2;
    if ( a2[2] < (unsigned __int64)(v37 + 1) )
    {
      v92 = qvector_reserve(a2, v38, v37 + 1, 24);
      *a2 = v92;
      v37 = a2[1];
      v38 = v92;
    }
    v39 = v38 + 24 * v37;
    *(_QWORD *)v39 = 0;
    *(_OWORD *)(v39 + 8) = 0;
    ++a2[1];
    sub_40E680((__int64 *)&ptr, (__int64 *)&v106, " ");
    sub_3573A0((char **)v39);
    if ( ptr )
    {
      v109.m128i_i64[0] = 0;
      qfree(ptr);
    }
    v40 = (char *)v106;
    v41 = v106;
    if ( v106 )
    {
      v42 = v107;
      if ( (_QWORD)v107 )
      {
        v43 = 0;
        do
        {
          v44 = &v40[24 * v43];
          v45 = *(void **)v44;
          if ( *(_QWORD *)v44 )
          {
            *((_QWORD *)v44 + 1) = 0;
            qfree(v45);
            v40 = (char *)v106;
          }
          ++v43;
          v41 = v40;
        }
        while ( v42 != v43 );
      }
LABEL_50:
      *(_QWORD *)&v107 = 0;
      qfree(v41);
    }
  }
  else
  {
    v41 = v106;
    if ( v106 )
      goto LABEL_50;
  }
LABEL_51:
  if ( !*(_BYTE *)(a1 + 337) )
    goto LABEL_71;
  v46 = (_QWORD *)(a1 + 48);
  v47 = 0;
  v48 = 0;
  v106 = nullptr;
  v107 = 0;
  do
  {
    while ( !*(_BYTE *)(a1 + v47 + 329) || *v46 <= 1u )
    {
      ++v47;
      v46 += 3;
      if ( v47 == 8 )
        goto LABEL_59;
    }
    v49 = (char *)v106;
    if ( *((_QWORD *)&v107 + 1) < (unsigned __int64)(v48 + 1) )
    {
      v106 = (void *)qvector_reserve(&v106, v106, v48 + 1, 24);
      v48 = v107;
      v49 = (char *)v106;
    }
    v50 = &v49[24 * v48];
    *(_QWORD *)v50 = 0;
    *(_OWORD *)(v50 + 8) = 0;
    *(_QWORD *)&v107 = v107 + 1;
    sub_3573A0((char **)v50);
    ++v47;
    v48 = v107;
    v46 += 3;
  }
  while ( v47 != 8 );
LABEL_59:
  if ( v48 )
  {
    v51 = a2[1];
    v52 = *a2;
    if ( a2[2] < (unsigned __int64)(v51 + 1) )
    {
      v93 = qvector_reserve(a2, v52, v51 + 1, 24);
      *a2 = v93;
      v51 = a2[1];
      v52 = v93;
    }
    v53 = v52 + 24 * v51;
    *(_QWORD *)v53 = 0;
    *(_OWORD *)(v53 + 8) = 0;
    ++a2[1];
    sub_40E680((__int64 *)&ptr, (__int64 *)&v106, " ");
    sub_3573A0((char **)v53);
    if ( ptr )
    {
      v109.m128i_i64[0] = 0;
      qfree(ptr);
    }
    v54 = (char *)v106;
    v55 = v106;
    if ( v106 )
    {
      v56 = v107;
      if ( (_QWORD)v107 )
      {
        v57 = 0;
        do
        {
          v58 = &v54[24 * v57];
          v59 = *(void **)v58;
          if ( *(_QWORD *)v58 )
          {
            *((_QWORD *)v58 + 1) = 0;
            qfree(v59);
            v54 = (char *)v106;
          }
          ++v57;
          v55 = v54;
        }
        while ( v56 != v57 );
      }
LABEL_70:
      *(_QWORD *)&v107 = 0;
      qfree(v55);
    }
LABEL_71:
    if ( *(_DWORD *)(a1 + 232) == -1 )
    {
LABEL_72:
      if ( !*(_BYTE *)(a1 + 338) )
        goto LABEL_73;
LABEL_80:
      v64 = a2[1];
      v65 = *a2;
      if ( a2[2] < (unsigned __int64)(v64 + 1) )
      {
        v104 = qvector_reserve(a2, v65, v64 + 1, 24);
        v64 = a2[1];
        *a2 = v104;
        v65 = v104;
      }
      v66 = v65 + 24 * v64;
      *(_QWORD *)v66 = 0;
      *(_OWORD *)(v66 + 8) = 0;
      ++a2[1];
      sub_3573A0((char **)v66);
      if ( *(_BYTE *)(a1 + 339) )
        goto LABEL_83;
      return (char **)(v110 - __readfsqword(0x28u));
    }
  }
  else
  {
    v55 = v106;
    if ( v106 )
      goto LABEL_70;
    if ( *(_DWORD *)(a1 + 232) == -1 )
      goto LABEL_72;
  }
  v61 = a2[1];
  v62 = *a2;
  if ( a2[2] < (unsigned __int64)(v61 + 1) )
  {
    v102 = qvector_reserve(a2, v62, v61 + 1, 24);
    v61 = a2[1];
    *a2 = v102;
    v62 = v102;
  }
  v63 = v62 + 24 * v61;
  *(_QWORD *)v63 = 0;
  *(_OWORD *)(v63 + 8) = 0;
  ++a2[1];
  sub_3573A0((char **)v63);
  if ( *(_BYTE *)(a1 + 338) )
    goto LABEL_80;
LABEL_73:
  if ( !*(_BYTE *)(a1 + 339) )
    return (char **)(v110 - __readfsqword(0x28u));
LABEL_83:
  v67 = a2[1];
  v68 = *a2;
  if ( a2[2] < (unsigned __int64)(v67 + 1) )
  {
    v103 = qvector_reserve(a2, v68, v67 + 1, 24);
    v67 = a2[1];
    *a2 = v103;
    v68 = v103;
  }
  v69 = v68 + 24 * v67;
  *(_QWORD *)v69 = 0;
  *(_OWORD *)(v69 + 8) = 0;
  ++a2[1];
  return sub_3573A0((char **)v69);
}

