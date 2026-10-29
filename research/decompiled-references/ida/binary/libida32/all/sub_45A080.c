unsigned __int64 __fastcall sub_45A080(__int64 *a1, int a2)
{
  __int64 v4; // rax
  void *v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  void *v19; // rbp
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  void *v23; // rdi
  _WORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  void *v29; // rbp
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rax
  void *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  void *v38; // rbp
  __m128i v39; // xmm0
  __m128i v40; // xmm1
  __int64 v41; // rax
  void *v42; // rdi
  void *v43; // r13
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  __m128i v48; // xmm0
  __m128i v49; // xmm1
  __int64 v50; // rax
  void *v51; // rdi
  _BYTE *v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // rdi
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rsi
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdi
  void *v62; // rbp
  __m128i v63; // xmm0
  __m128i v64; // xmm1
  __int64 v65; // rax
  void *v66; // rdi
  __m128i v67; // xmm0
  __int64 v68; // rax
  _BYTE *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // rdi
  void *v74; // rbp
  __m128i v75; // xmm0
  __m128i v76; // xmm1
  __int64 v77; // rax
  void *v78; // rdi
  __m128i v79; // xmm0
  __int64 v80; // rax
  __m128i v81; // xmm0
  __int64 v82; // rax
  __m128i v83; // xmm0
  __int64 v84; // rax
  __m128i v85; // xmm0
  __int64 v86; // rax
  unsigned __int64 v87; // rdx
  unsigned __int64 v88; // rdi
  __m128i v89; // xmm0
  __m128i v90; // xmm1
  __int64 v91; // rax
  void *v92; // rdi
  __int64 v93; // rax
  __m128i v94; // xmm0
  __m128i v95; // xmm1
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __m128i v112; // [rsp+0h] [rbp-58h] BYREF
  void *ptr; // [rsp+10h] [rbp-48h] BYREF
  __m128i v114; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v115; // [rsp+28h] [rbp-30h]

  v115 = __readfsqword(0x28u);
  if ( (a2 & 0x800) != 0 )
  {
    v114 = 0;
    ptr = nullptr;
    v69 = (_BYTE *)qvector_reserve(&ptr, 0, 4, 1);
    ptr = v69;
    v114.m128i_i64[0] = 4;
    *(_WORD *)v69 = 28003;
    v69[2] = 116;
    *((_BYTE *)ptr + 3) = 0;
    v70 = a1[1];
    v71 = *a1;
    v72 = a1[2];
    v73 = v70 + 1;
    if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v71 + 24 * v72 )
    {
      if ( v72 < v73 )
      {
        v98 = qvector_reserve(a1, v71, v70 + 1, 24);
        *a1 = v98;
        v71 = v98;
        v70 = a1[1];
      }
      v79 = _mm_loadu_si128(&v114);
      v80 = v71 + 24 * v70;
      *(_QWORD *)v80 = ptr;
      *(__m128i *)(v80 + 8) = v79;
      ++a1[1];
    }
    else
    {
      v74 = ptr;
      v75 = _mm_loadl_epi64(&v114);
      ptr = nullptr;
      v76 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
      v114 = 0;
      if ( v72 < v73 )
      {
        v112.m128i_i64[1] = v76.m128i_i64[0];
        v112.m128i_i64[0] = v75.m128i_i64[0];
        v110 = qvector_reserve(a1, v71, v70 + 1, 24);
        *a1 = v110;
        v71 = v110;
        v70 = a1[1];
        v76 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
        v75 = _mm_loadl_epi64(&v112);
      }
      v77 = v71 + 24 * v70;
      *(_QWORD *)v77 = v74;
      *(__m128i *)(v77 + 8) = _mm_unpacklo_epi64(v75, v76);
      v78 = ptr;
      ++a1[1];
      if ( v78 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v78);
      }
    }
  }
  if ( (a2 & 0x1000) != 0 )
  {
    v114 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
    v114.m128i_i64[0] = 5;
    strcpy((char *)ptr, "xref");
    v58 = a1[1];
    v59 = *a1;
    v60 = a1[2];
    v61 = v58 + 1;
    if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v59 + 24 * v60 )
    {
      if ( v60 < v61 )
      {
        v99 = qvector_reserve(a1, v59, v58 + 1, 24);
        *a1 = v99;
        v59 = v99;
        v58 = a1[1];
      }
      v67 = _mm_loadu_si128(&v114);
      v68 = v59 + 24 * v58;
      *(_QWORD *)v68 = ptr;
      *(__m128i *)(v68 + 8) = v67;
      ++a1[1];
    }
    else
    {
      v62 = ptr;
      v63 = _mm_loadl_epi64(&v114);
      ptr = nullptr;
      v64 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
      v114 = 0;
      if ( v60 < v61 )
      {
        v112.m128i_i64[1] = v64.m128i_i64[0];
        v112.m128i_i64[0] = v63.m128i_i64[0];
        v108 = qvector_reserve(a1, v59, v58 + 1, 24);
        *a1 = v108;
        v59 = v108;
        v58 = a1[1];
        v64 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
        v63 = _mm_loadl_epi64(&v112);
      }
      v65 = v59 + 24 * v58;
      *(_QWORD *)v65 = v62;
      *(__m128i *)(v65 + 8) = _mm_unpacklo_epi64(v63, v64);
      v66 = ptr;
      ++a1[1];
      if ( v66 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v66);
      }
    }
  }
  if ( (a2 & 0x2000) == 0 )
  {
LABEL_4:
    v4 = (unsigned __int16)a2 & 0xC000;
    if ( v4 != 0x8000 )
      goto LABEL_5;
LABEL_41:
    v114 = 0;
    ptr = nullptr;
    v52 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
    ptr = v52;
    v114.m128i_i64[0] = 10;
    *(_QWORD *)v52 = 0x6D616E796D6D7564LL;
    v52[8] = 101;
    v6 = ptr;
    *((_BYTE *)ptr + 9) = 0;
    v7 = a1[1];
    v8 = *a1;
    v53 = a1[2];
    v54 = v7 + 1;
    if ( (unsigned __int64)&ptr >= *a1 && (unsigned __int64)&ptr < v8 + 24 * v53 )
    {
      v94 = _mm_loadl_epi64(&v114);
      v95 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
      ptr = nullptr;
      v114 = 0;
      if ( v53 < v54 )
      {
        v112.m128i_i64[1] = v95.m128i_i64[0];
        v112.m128i_i64[0] = v94.m128i_i64[0];
        v103 = qvector_reserve(a1, v8, v7 + 1, 24);
        *a1 = v103;
        v8 = v103;
        v7 = a1[1];
        v95 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
        v94 = _mm_loadl_epi64(&v112);
      }
      v96 = v8 + 24 * v7;
      *(_QWORD *)v96 = v6;
      *(__m128i *)(v96 + 8) = _mm_unpacklo_epi64(v94, v95);
      v92 = ptr;
      ++a1[1];
      if ( v92 )
        goto LABEL_79;
      goto LABEL_7;
    }
    if ( v53 >= v54 )
    {
LABEL_81:
      v93 = v8 + 24 * v7;
      *(_QWORD *)v93 = v6;
      *(__m128i *)(v93 + 8) = _mm_loadu_si128(&v114);
      ++a1[1];
      goto LABEL_7;
    }
LABEL_43:
    v55 = qvector_reserve(a1, v8, v7 + 1, 24);
    *a1 = v55;
    v8 = v55;
    v6 = ptr;
    v7 = a1[1];
    goto LABEL_81;
  }
  v114 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
  v114.m128i_i64[0] = 9;
  strcpy((char *)ptr, "extracmt");
  v43 = ptr;
  v44 = a1[1];
  v45 = *a1;
  v46 = a1[2];
  v47 = v44 + 1;
  if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v45 + 24 * v46 )
  {
    if ( v46 < v47 )
    {
      v97 = qvector_reserve(a1, v45, v44 + 1, 24);
      *a1 = v97;
      v45 = v97;
      v43 = ptr;
      v44 = a1[1];
    }
    v56 = _mm_loadu_si128(&v114);
    v57 = v45 + 24 * v44;
    *(_QWORD *)v57 = v43;
    *(__m128i *)(v57 + 8) = v56;
    ++a1[1];
    goto LABEL_4;
  }
  v48 = _mm_loadl_epi64(&v114);
  v49 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
  ptr = nullptr;
  v114 = 0;
  if ( v46 < v47 )
  {
    v112.m128i_i64[1] = v49.m128i_i64[0];
    v112.m128i_i64[0] = v48.m128i_i64[0];
    v106 = qvector_reserve(a1, v45, v44 + 1, 24);
    *a1 = v106;
    v45 = v106;
    v44 = a1[1];
    v49 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
    v48 = _mm_loadl_epi64(&v112);
  }
  v50 = v45 + 24 * v44;
  *(_QWORD *)v50 = v43;
  *(__m128i *)(v50 + 8) = _mm_unpacklo_epi64(v48, v49);
  v51 = ptr;
  ++a1[1];
  if ( !v51 )
    goto LABEL_4;
  v114.m128i_i64[0] = 0;
  qfree(v51);
  v4 = (unsigned __int16)a2 & 0xC000;
  if ( v4 == 0x8000 )
    goto LABEL_41;
LABEL_5:
  if ( v4 == 0x4000 )
  {
    v114 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
    v114.m128i_i64[0] = 9;
    strcpy((char *)ptr, "username");
    v6 = ptr;
    v7 = a1[1];
    v8 = *a1;
    v87 = a1[2];
    v88 = v7 + 1;
    if ( (unsigned __int64)&ptr >= *a1 && (unsigned __int64)&ptr < v8 + 24 * v87 )
    {
      v89 = _mm_loadl_epi64(&v114);
      v90 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
      ptr = nullptr;
      v114 = 0;
      if ( v87 < v88 )
      {
        v112.m128i_i64[1] = v90.m128i_i64[0];
        v112.m128i_i64[0] = v89.m128i_i64[0];
        v104 = qvector_reserve(a1, v8, v7 + 1, 24);
        *a1 = v104;
        v8 = v104;
        v7 = a1[1];
        v90 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
        v89 = _mm_loadl_epi64(&v112);
      }
      v91 = v8 + 24 * v7;
      *(_QWORD *)v91 = v6;
      *(__m128i *)(v91 + 8) = _mm_unpacklo_epi64(v89, v90);
      v92 = ptr;
      ++a1[1];
      if ( v92 )
      {
LABEL_79:
        v114.m128i_i64[0] = 0;
        qfree(v92);
      }
LABEL_7:
      if ( (a2 & 0x10000) == 0 )
        goto LABEL_8;
      goto LABEL_17;
    }
    if ( v87 >= v88 )
      goto LABEL_81;
    goto LABEL_43;
  }
  if ( v4 != 49152 )
    goto LABEL_7;
  v114 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
  v114.m128i_i64[0] = 9;
  strcpy((char *)ptr, "autoname");
  v6 = ptr;
  v7 = a1[1];
  v8 = *a1;
  v9 = a1[2];
  v10 = v7 + 1;
  if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v8 + 24 * v9 )
  {
    if ( v9 >= v10 )
      goto LABEL_81;
    goto LABEL_43;
  }
  v11 = _mm_loadl_epi64(&v114);
  v12 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
  ptr = nullptr;
  v114 = 0;
  if ( v9 < v10 )
  {
    v112.m128i_i64[1] = v12.m128i_i64[0];
    v112.m128i_i64[0] = v11.m128i_i64[0];
    v105 = qvector_reserve(a1, v8, v7 + 1, 24);
    *a1 = v105;
    v8 = v105;
    v7 = a1[1];
    v12 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
    v11 = _mm_loadl_epi64(&v112);
  }
  v13 = v8 + 24 * v7;
  *(_QWORD *)v13 = v6;
  *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v11, v12);
  v14 = ptr;
  ++a1[1];
  if ( !v14 )
    goto LABEL_7;
  v114.m128i_i64[0] = 0;
  qfree(v14);
  if ( (a2 & 0x10000) == 0 )
    goto LABEL_8;
LABEL_17:
  v114 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v114.m128i_i64[0] = 5;
  strcpy((char *)ptr, "flow");
  v15 = a1[1];
  v16 = *a1;
  v17 = a1[2];
  v18 = v15 + 1;
  if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v16 + 24 * v17 )
  {
    if ( v17 < v18 )
    {
      v102 = qvector_reserve(a1, v16, v15 + 1, 24);
      *a1 = v102;
      v16 = v102;
      v15 = a1[1];
    }
    v85 = _mm_loadu_si128(&v114);
    v86 = v16 + 24 * v15;
    *(_QWORD *)v86 = ptr;
    *(__m128i *)(v86 + 8) = v85;
    ++a1[1];
LABEL_8:
    if ( (a2 & 0x20000) == 0 )
      goto LABEL_9;
    goto LABEL_23;
  }
  v19 = ptr;
  v20 = _mm_loadl_epi64(&v114);
  ptr = nullptr;
  v21 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
  v114 = 0;
  if ( v17 < v18 )
  {
    v112.m128i_i64[1] = v21.m128i_i64[0];
    v112.m128i_i64[0] = v20.m128i_i64[0];
    v109 = qvector_reserve(a1, v16, v15 + 1, 24);
    *a1 = v109;
    v16 = v109;
    v15 = a1[1];
    v21 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
    v20 = _mm_loadl_epi64(&v112);
  }
  v22 = v16 + 24 * v15;
  *(_QWORD *)v22 = v19;
  *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
  v23 = ptr;
  ++a1[1];
  if ( !v23 )
    goto LABEL_8;
  v114.m128i_i64[0] = 0;
  qfree(v23);
  if ( (a2 & 0x20000) == 0 )
    goto LABEL_9;
LABEL_23:
  v114 = 0;
  ptr = nullptr;
  v24 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
  ptr = v24;
  v114.m128i_i64[0] = 7;
  *(_DWORD *)v24 = 1852270963;
  v24[2] = 25701;
  *((_BYTE *)ptr + 6) = 0;
  v25 = a1[1];
  v26 = *a1;
  v27 = a1[2];
  v28 = v25 + 1;
  if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v26 + 24 * v27 )
  {
    if ( v27 < v28 )
    {
      v100 = qvector_reserve(a1, v26, v25 + 1, 24);
      *a1 = v100;
      v26 = v100;
      v25 = a1[1];
    }
    v83 = _mm_loadu_si128(&v114);
    v84 = v26 + 24 * v25;
    *(_QWORD *)v84 = ptr;
    *(__m128i *)(v84 + 8) = v83;
    ++a1[1];
LABEL_9:
    if ( (a2 & 0x40000) == 0 )
      return v115 - __readfsqword(0x28u);
    goto LABEL_29;
  }
  v29 = ptr;
  v30 = _mm_loadl_epi64(&v114);
  ptr = nullptr;
  v31 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
  v114 = 0;
  if ( v27 < v28 )
  {
    v112.m128i_i64[1] = v31.m128i_i64[0];
    v112.m128i_i64[0] = v30.m128i_i64[0];
    v111 = qvector_reserve(a1, v26, v25 + 1, 24);
    *a1 = v111;
    v26 = v111;
    v25 = a1[1];
    v31 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
    v30 = _mm_loadl_epi64(&v112);
  }
  v32 = v26 + 24 * v25;
  *(_QWORD *)v32 = v29;
  *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64(v30, v31);
  v33 = ptr;
  ++a1[1];
  if ( !v33 )
    goto LABEL_9;
  v114.m128i_i64[0] = 0;
  qfree(v33);
  if ( (a2 & 0x40000) == 0 )
    return v115 - __readfsqword(0x28u);
LABEL_29:
  v114 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v114.m128i_i64[0] = 5;
  strcpy((char *)ptr, "bnot");
  v34 = a1[1];
  v35 = *a1;
  v36 = a1[2];
  v37 = v34 + 1;
  if ( (unsigned __int64)&ptr < *a1 || (unsigned __int64)&ptr >= v35 + 24 * v36 )
  {
    if ( v36 < v37 )
    {
      v101 = qvector_reserve(a1, v35, v34 + 1, 24);
      *a1 = v101;
      v35 = v101;
      v34 = a1[1];
    }
    v81 = _mm_loadu_si128(&v114);
    v82 = v35 + 24 * v34;
    *(_QWORD *)v82 = ptr;
    *(__m128i *)(v82 + 8) = v81;
    ++a1[1];
  }
  else
  {
    v38 = ptr;
    v39 = _mm_loadl_epi64(&v114);
    ptr = nullptr;
    v40 = _mm_loadl_epi64((const __m128i *)&v114.m128i_u64[1]);
    v114 = 0;
    if ( v36 < v37 )
    {
      v112.m128i_i64[1] = v40.m128i_i64[0];
      v112.m128i_i64[0] = v39.m128i_i64[0];
      v107 = qvector_reserve(a1, v35, v34 + 1, 24);
      *a1 = v107;
      v35 = v107;
      v34 = a1[1];
      v40 = _mm_loadl_epi64((const __m128i *)&v112.m128i_u64[1]);
      v39 = _mm_loadl_epi64(&v112);
    }
    v41 = v35 + 24 * v34;
    *(_QWORD *)v41 = v38;
    *(__m128i *)(v41 + 8) = _mm_unpacklo_epi64(v39, v40);
    v42 = ptr;
    ++a1[1];
    if ( v42 )
    {
      v114.m128i_i64[0] = 0;
      qfree(v42);
    }
  }
  return v115 - __readfsqword(0x28u);
}

