__int64 __fastcall sub_2EFD40(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // r15
  double v11; // xmm4_8
  double v12; // xmm5_8
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // r12
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned int v22; // r13d
  int v24; // eax
  __int64 v25; // rax
  const char *v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __m128i v29; // xmm0
  char *v30; // rax
  __int32 v31; // eax
  unsigned __int64 v32; // r14
  __int64 v33; // rax
  const char *v34; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __m128 si128; // xmm0
  char *v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r15
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r13
  unsigned __int64 v44; // rax
  __int64 v45; // r14
  __int64 func; // rax
  const char *v47; // rsi
  const char *v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r13
  __int64 v53; // r15
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __m128 v59; // xmm4
  __m128 v60; // xmm5
  const __m128i *v61; // rdx
  __int64 v62; // rcx
  __m128i v63; // xmm0
  const char *v64; // rsi
  __m128i *v65; // r14
  __int64 v66; // rdi
  __m128i v67; // xmm6
  __int64 v68; // rdi
  __int64 v69; // r12
  __int64 v70; // r15
  _QWORD *v71; // rbx
  __int64 v72; // rdi
  __int64 v73; // rdi
  __int64 v74; // rax
  __m128i v75; // xmm7
  __int64 v76; // rsi
  __int64 v77; // rdi
  __int64 v78; // r12
  __int64 v79; // r15
  _QWORD *v80; // rbx
  __int64 v81; // rdi
  __int64 v82; // rdi
  __int64 v83; // r15
  __m128i v84; // xmm0
  char *v85; // rax
  __int64 v86; // rdi
  __int64 v87; // r14
  __m128i v88; // xmm0
  char *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rcx
  __int64 v94; // r13
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rsi
  __m128i v98; // xmm0
  __int64 v99; // rax
  __m128i v100; // xmm0
  __int64 v101; // rbx
  __m128 v102; // xmm4
  __m128 v103; // xmm5
  _QWORD *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  __int64 v108; // r12
  __int64 v109; // rax
  __m128i v110; // xmm0
  __int64 ph; // rbx
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  unsigned __int64 v115; // r13
  __int64 v116; // rax
  __int64 v117; // rdi
  __int64 v118; // r14
  __int64 v119; // rdi
  __int64 v120; // rax
  __int64 v121; // r14
  __int64 v122; // r15
  __int64 v123; // rdx
  __int64 v124; // r14
  __m128i v125; // xmm0
  __int64 v126; // rdx
  __int64 v127; // rdi
  void *v128; // rax
  size_t v129; // rdx
  const __m128i *v130; // rcx
  __int64 v131; // rdi
  void *v132; // rax
  size_t v133; // rdx
  const __m128i *v134; // rcx
  const __m128i *v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // [rsp+0h] [rbp-140h]
  __int64 v139; // [rsp+0h] [rbp-140h]
  char v140; // [rsp+0h] [rbp-140h]
  __m128i v141; // [rsp+8h] [rbp-138h] BYREF
  const __m128i *v142; // [rsp+18h] [rbp-128h]
  __m128i v143; // [rsp+20h] [rbp-120h] BYREF
  __int64 v144; // [rsp+30h] [rbp-110h]
  __m128i n; // [rsp+38h] [rbp-108h] BYREF
  __m128i v146; // [rsp+48h] [rbp-F8h] BYREF
  __m128 v147; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v148; // [rsp+70h] [rbp-D0h]
  __int128 v149; // [rsp+78h] [rbp-C8h]
  __int64 v150; // [rsp+88h] [rbp-B8h]
  __int128 v151; // [rsp+90h] [rbp-B0h]
  __int64 v152; // [rsp+A0h] [rbp-A0h]
  __int64 v153; // [rsp+A8h] [rbp-98h]
  __m512i v154; // [rsp+B0h] [rbp-90h] BYREF
  __int64 v155; // [rsp+F0h] [rbp-50h]
  __int64 v156; // [rsp+F8h] [rbp-48h]
  unsigned __int64 v157; // [rsp+108h] [rbp-38h]

  v157 = __readfsqword(0x28u);
  v10 = sub_2EF280(3, a1, *(double *)a2.m128_u64, a3, a4, a5, a6, a7, a8, a9);
  v13 = sub_2EF280(0, a1, *(double *)a2.m128_u64, a3, a4, a5, v11, v12, a8, a9);
  v19 = v13;
  if ( v10 )
  {
    if ( v13 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 32LL))(v10, v13);
    v19 = v10;
  }
  else if ( !v13 )
  {
    return 0;
  }
  v20 = *(_QWORD *)(v19 + 24);
  v21 = *(_QWORD *)(a1 + 8);
  if ( v21 != v20 )
  {
    sub_169700(
      (int)"ERROR: mismatch between number of functions sent out (%zu) and received(%zu)\n",
      v20,
      v21,
      v14,
      v15,
      v16,
      a2,
      a3,
      a4,
      a5,
      v17,
      v18,
      a8,
      a9,
      v138);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    return 0;
  }
  v144 = qtime64();
  v24 = *(_DWORD *)(v19 + 72);
  v143.m128i_i64[0] = (__int64)&v154;
  n.m128i_i64[1] = 0;
  LODWORD(v142) = v24;
  memset(&v154, 0, 24);
  v146 = 0;
  v154.m512i_i64[0] = qvector_reserve(&v154, 0, 1, 1);
  v154.m512i_i64[1] = 1;
  *(_BYTE *)v154.m512i_i64[0] = 0;
  v25 = *(_QWORD *)(v19 + 72);
  v26 = *(const char **)(v19 + 64);
  v27 = *(_QWORD *)(v19 + 80);
  v28 = v25 + 1;
  if ( &v154 >= (__m512i *)v26 && v143.m128i_i64[0] < (unsigned __int64)&v26[24 * v27] )
  {
    a4 = 0;
    v83 = v154.m512i_i64[0];
    v84 = _mm_loadl_epi64((const __m128i *)&v154.m512i_u64[1]);
    memset(&v154, 0, 24);
    a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v154.m512i_u64[2]);
    if ( v27 < v28 )
    {
      v141.m128i_i64[1] = a3.m128_u64[0];
      n.m128i_i64[0] = v84.m128i_i64[0];
      v137 = qvector_reserve(v19 + 64, v26, v25 + 1, 24);
      *(_QWORD *)(v19 + 64) = v137;
      v26 = (const char *)v137;
      a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v141.m128i_u64[1]);
      v84 = _mm_loadl_epi64(&n);
      v25 = *(_QWORD *)(v19 + 72);
    }
    v85 = (char *)&v26[24 * v25];
    *(_QWORD *)v85 = v83;
    *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64(v84, (__m128i)a3);
    v86 = v154.m512i_i64[0];
    ++*(_QWORD *)(v19 + 72);
    if ( v86 )
    {
      v154.m512i_i64[1] = 0;
      qfree(v86, v26);
    }
  }
  else
  {
    if ( v27 < v28 )
    {
      v114 = qvector_reserve(v19 + 64, v26, v25 + 1, 24);
      *(_QWORD *)(v19 + 64) = v114;
      v26 = (const char *)v114;
      v25 = *(_QWORD *)(v19 + 72);
    }
    v29 = _mm_loadu_si128((const __m128i *)&v154.m512i_u64[1]);
    v30 = (char *)&v26[24 * v25];
    *(_QWORD *)v30 = v154.m512i_i64[0];
    *(__m128i *)(v30 + 8) = v29;
    ++*(_QWORD *)(v19 + 72);
  }
  v31 = *(_DWORD *)(v19 + 96);
  v32 = v143.m128i_i64[0];
  memset(&v154, 0, 24);
  v141.m128i_i32[2] = v31;
  v154.m512i_i64[0] = qvector_reserve(v143.m128i_i64[0], 0, 1, 1);
  v154.m512i_i64[1] = 1;
  *(_BYTE *)v154.m512i_i64[0] = 0;
  v33 = *(_QWORD *)(v19 + 96);
  v34 = *(const char **)(v19 + 88);
  v35 = *(_QWORD *)(v19 + 104);
  v36 = v33 + 1;
  if ( v32 >= (unsigned __int64)v34 && v143.m128i_i64[0] < (unsigned __int64)&v34[24 * v35] )
  {
    a4 = 0;
    v87 = v154.m512i_i64[0];
    v88 = _mm_loadl_epi64((const __m128i *)&v154.m512i_u64[1]);
    memset(&v154, 0, 24);
    a3 = (__m128)_mm_loadl_epi64((const __m128i *)&v154.m512i_u64[2]);
    if ( v35 < v36 )
    {
      v141.m128i_i64[0] = a3.m128_u64[0];
      n.m128i_i64[0] = v88.m128i_i64[0];
      v136 = qvector_reserve(v19 + 88, v34, v33 + 1, 24);
      *(_QWORD *)(v19 + 88) = v136;
      v34 = (const char *)v136;
      a3 = (__m128)_mm_loadl_epi64(&v141);
      v88 = _mm_loadl_epi64(&n);
      v33 = *(_QWORD *)(v19 + 96);
    }
    si128 = (__m128)_mm_unpacklo_epi64(v88, (__m128i)a3);
    v89 = (char *)&v34[24 * v33];
    *(_QWORD *)v89 = v87;
    *(__m128 *)(v89 + 8) = si128;
    v90 = v154.m512i_i64[0];
    ++*(_QWORD *)(v19 + 96);
    if ( v90 )
    {
      v154.m512i_i64[1] = 0;
      *(double *)si128.m128_u64 = qfree(v90, v34);
    }
  }
  else
  {
    if ( v35 < v36 )
    {
      v113 = qvector_reserve(v19 + 88, v34, v33 + 1, 24);
      *(_QWORD *)(v19 + 88) = v113;
      v34 = (const char *)v113;
      v33 = *(_QWORD *)(v19 + 96);
    }
    si128 = (__m128)_mm_loadu_si128((const __m128i *)&v154.m512i_u64[1]);
    v38 = (char *)&v34[24 * v33];
    *(_QWORD *)v38 = v154.m512i_i64[0];
    *(__m128 *)(v38 + 8) = si128;
    ++*(_QWORD *)(v19 + 96);
  }
  v39 = *(_QWORD *)(a1 + 8);
  v40 = v146.m128i_i64[0];
  n.m128i_i64[0] = v39;
  if ( v39 != v146.m128i_i64[0] )
  {
    si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
    a3 = 0;
    v148 = 0;
    v150 = 0;
    v152 = 0;
    v153 = 0;
    v147 = si128;
    v149 = 0;
    v151 = 0;
    if ( v39 < v146.m128i_i64[0] )
    {
      v115 = v39;
      do
      {
        v116 = n.m128i_i64[1] + 80 * v115;
        v117 = *(_QWORD *)(v116 + 40);
        v118 = v116;
        if ( v117 )
        {
          *(_QWORD *)(v116 + 48) = 0;
          *(double *)si128.m128_u64 = qfree(v117, v34);
        }
        v119 = *(_QWORD *)(v118 + 16);
        if ( v119 )
        {
          *(_QWORD *)(v118 + 24) = 0;
          *(double *)si128.m128_u64 = qfree(v119, v34, *(double *)si128.m128_u64);
        }
        ++v115;
      }
      while ( v115 < v40 );
    }
    else if ( (unsigned __int64)&v147 < n.m128i_i64[1]
           || (unsigned __int64)&v147 >= n.m128i_i64[1] + 80 * v146.m128i_i64[1] )
    {
      if ( v146.m128i_i64[1] < (unsigned __int64)n.m128i_i64[0] )
      {
        n.m128i_i64[1] = qvector_reserve(&n.m128i_u64[1], n.m128i_i64[1], n.m128i_i64[0], 80);
        v40 = v146.m128i_i64[0];
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
      }
      if ( v40 < n.m128i_i64[0] )
      {
        a3 = 0;
        v41 = 80 * v40;
        do
        {
          ++v40;
          v42 = v41 + n.m128i_i64[1];
          v41 += 80;
          *(_QWORD *)(v42 + 16) = 0;
          *(_QWORD *)(v42 + 40) = 0;
          *(_QWORD *)(v42 + 64) = 0;
          *(_QWORD *)(v42 + 72) = 0;
          *(__m128 *)v42 = si128;
          *(_OWORD *)(v42 + 24) = 0;
          *(_OWORD *)(v42 + 48) = 0;
        }
        while ( n.m128i_i64[0] != v40 );
      }
    }
    else
    {
      memset(&v154.m512i_u64[2], 0, 48);
      v155 = 0;
      v156 = 0;
      *(__m128 *)v154.m512i_i8 = si128;
      if ( v146.m128i_i64[1] < (unsigned __int64)n.m128i_i64[0] )
      {
        n.m128i_i64[1] = qvector_reserve(&n.m128i_u64[1], n.m128i_i64[1], n.m128i_i64[0], 80);
        v40 = v146.m128i_i64[0];
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
      }
      if ( v40 < n.m128i_i64[0] )
      {
        a3 = 0;
        v91 = 80 * v40;
        do
        {
          ++v40;
          v92 = v91 + n.m128i_i64[1];
          v91 += 80;
          *(_QWORD *)(v92 + 16) = 0;
          *(_QWORD *)(v92 + 40) = 0;
          *(_QWORD *)(v92 + 64) = 0;
          *(_QWORD *)(v92 + 72) = 0;
          *(__m128 *)v92 = si128;
          *(_OWORD *)(v92 + 24) = 0;
          *(_OWORD *)(v92 + 48) = 0;
        }
        while ( n.m128i_i64[0] != v40 );
      }
    }
    v40 = *(_QWORD *)(a1 + 8);
    v146.m128i_i64[0] = n.m128i_i64[0];
  }
  v43 = 0;
  if ( v40 )
  {
    while ( 1 )
    {
      v44 = *(int *)(*(_QWORD *)(v19 + 16) + 4 * v43);
      if ( (v44 & 0x80000000) != 0LL || v44 >= *(_QWORD *)(v19 + 48) )
        goto LABEL_30;
      v45 = n.m128i_i64[1] + 80 * v43;
      func = get_func(*(_QWORD *)(*(_QWORD *)a1 + 8 * v43));
      if ( !func )
        break;
      v47 = (const char *)v143.m128i_i64[0];
      a5 = 0;
      memset(&v154, 0, 56);
      n.m128i_i64[0] = func;
      if ( !calc_func_metadata(0, v143.m128i_i64[0], func, 0) )
      {
        if ( v154.m512i_i64[4] )
        {
          v154.m512i_i64[5] = 0;
          *(double *)si128.m128_u64 = qfree(v154.m512i_i64[4], v47);
        }
        if ( v154.m512i_i64[0] )
        {
          v154.m512i_i64[1] = 0;
          *(double *)si128.m128_u64 = qfree(v154.m512i_i64[0], v47, *(double *)si128.m128_u64);
        }
        break;
      }
      v48 = &byte_4;
      if ( (~((unsigned __int16)get_flags_ex(*(_QWORD *)n.m128i_i64[0], 4) >> 8) & 0xC0) == 0 )
      {
        v48 = *(const char **)n.m128i_i64[0];
        get_ea_name(v143.m128i_i64[0], *(_QWORD *)n.m128i_i64[0], 0, 0);
      }
      v49 = *(_QWORD *)(v45 + 16);
      si128 = (__m128)_mm_loadu_si128((const __m128i *)(v45 + 24));
      *(_QWORD *)(v45 + 64) = v144;
      *(_DWORD *)(v45 + 72) = (_DWORD)v142;
      *(_DWORD *)(v45 + 76) = v141.m128i_i32[2];
      *(_QWORD *)(v45 + 16) = v154.m512i_i64[0];
      a3 = (__m128)_mm_loadu_si128((const __m128i *)&v154.m512i_u64[1]);
      *(__m128 *)(v45 + 24) = a3;
      v154.m512i_i64[0] = v49;
      *(__m128 *)&v154.m512i_u64[1] = si128;
      v50 = *(_QWORD *)(v45 + 40);
      v51 = *(_QWORD *)(v45 + 56);
      *(_QWORD *)(v45 + 40) = v154.m512i_i64[4];
      *(_OWORD *)(v45 + 48) = *(_OWORD *)&v154.m512i_u64[5];
      v154.m512i_i64[4] = v50;
      v154.m512i_i64[6] = v51;
      if ( v50 )
      {
        v154.m512i_i64[5] = 0;
        *(double *)si128.m128_u64 = qfree(v50, v48);
        v49 = v154.m512i_i64[0];
      }
      if ( v49 )
      {
        v154.m512i_i64[1] = 0;
        ++v43;
        *(double *)si128.m128_u64 = qfree(v49, v48);
        if ( v43 == v40 )
          break;
      }
      else
      {
LABEL_30:
        if ( ++v43 == v40 )
          break;
      }
    }
  }
  v52 = sub_4FAE20("Lumina Metadata History", 0);
  if ( !v52 )
  {
    v94 = qalloc_or_throw(216);
    *(_QWORD *)v94 = &stru_86F6A0;
    *(_QWORD *)(v94 + 8) = 4278190084LL;
    v95 = (_QWORD *)(v94 + 80);
    *(_QWORD *)(v94 + 32) = 0;
    *(_QWORD *)(v94 + 40) = 0;
    *(_DWORD *)(v94 + 48) = 0;
    *(_DWORD *)(v94 + 72) = -1;
    n.m128i_i64[0] = v94 + 80;
    *(_OWORD *)(v94 + 16) = -1;
    *(_OWORD *)(v94 + 56) = 0;
    do
    {
      *v95 = 0;
      v95 += 3;
      *((_OWORD *)v95 - 1) = 0;
    }
    while ( (_QWORD *)(v94 + 176) != v95 );
    *(_DWORD *)(v94 + 176) = 0;
    v96 = *(unsigned int *)(v94 + 12);
    v97 = ((*(_DWORD *)(v94 + 12) >> 19) & 0x3Fu) - 1;
    if ( ((*(_DWORD *)(v94 + 12) >> 19) & 0x3F) != 0 )
    {
      if ( *(_BYTE *)(v94 + 11) != 0xFF )
      {
        if ( under_debugger )
          goto LABEL_124;
        interr(3449, v97, v96, v93, 0.0);
LABEL_122:
        if ( !under_debugger )
          interr(3449, v97, v105, v106, 0.0);
LABEL_124:
        BUG();
      }
      *(_BYTE *)(v94 + 11) = ((*(_DWORD *)(v94 + 12) >> 19) & 0x3F) - 1;
      *(_DWORD *)(v94 + 12) = v96 & 0xFE07FFFF;
    }
    v98 = _mm_loadl_epi64((const __m128i *)&off_862978);
    *(_QWORD *)(v94 + 184) = 0;
    *(_QWORD *)v94 = fh_funcs_chooser_t___vtable;
    *(_OWORD *)(v94 + 192) = 0;
    v99 = *(_QWORD *)a1;
    *(_DWORD *)(v94 + 48) = 1;
    *(__m128i *)(v94 + 56) = _mm_unpacklo_epi64(v98, (__m128i)(unsigned __int64)&off_8628C8);
    v100 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    *(_QWORD *)(v94 + 184) = v99;
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(v94 + 208) = v19;
    *(__m128i *)(v94 + 192) = v100;
    *(_OWORD *)(a1 + 8) = 0;
    v101 = qalloc_or_throw(240);
    *(_QWORD *)v101 = &stru_86F6A0;
    *(_QWORD *)(v101 + 32) = 0;
    *(_QWORD *)(v101 + 40) = 0;
    *(_DWORD *)(v101 + 48) = 0;
    *(_DWORD *)(v101 + 72) = -1;
    *(_OWORD *)(v101 + 16) = -1;
    *(_QWORD *)(v101 + 8) = 0x4FF000004LL;
    v104 = (_QWORD *)(v101 + 80);
    *(_OWORD *)(v101 + 56) = 0;
    do
    {
      *v104 = 0;
      v104 += 3;
      *((_OWORD *)v104 - 1) = 0;
    }
    while ( (_QWORD *)(v101 + 176) != v104 );
    *(_DWORD *)(v101 + 176) = 0;
    v105 = *(unsigned int *)(v101 + 12);
    v106 = ((*(_DWORD *)(v101 + 12) >> 19) & 0x3Fu) - 1;
    if ( ((*(_DWORD *)(v101 + 12) >> 19) & 0x3F) == 0 )
      goto LABEL_93;
    if ( *(_BYTE *)(v101 + 11) == 0xFF )
    {
      *(_BYTE *)(v101 + 11) = ((*(_DWORD *)(v101 + 12) >> 19) & 0x3F) - 1;
      *(_DWORD *)(v101 + 12) = v105 & 0xFE07FFFF;
LABEL_93:
      *(_QWORD *)(v101 + 184) = v19;
      *(_QWORD *)v101 = fh_entries_chooser_t___vtable;
      v107 = v146.m128i_i64[0];
      *(_QWORD *)(v101 + 192) = 0;
      *(_QWORD *)(v101 + 200) = 0;
      v108 = v107;
      *(_OWORD *)(v101 + 208) = 0;
      if ( v107 )
      {
        v120 = qalloc_or_throw(80 * v107);
        *(_QWORD *)(v101 + 200) = v120;
        v121 = v120;
        v122 = 0;
        *(_QWORD *)(v101 + 216) = v108;
        while ( 1 )
        {
          v102 = 0;
          v124 = 80 * v122 + v121;
          v135 = (const __m128i *)(n.m128i_i64[1] + 80 * v122);
          v125 = _mm_loadu_si128(v135);
          *(_QWORD *)(v124 + 16) = 0;
          *(_OWORD *)(v124 + 24) = 0;
          *(__m128i *)v124 = v125;
          v126 = v135[1].m128i_i64[1];
          if ( v126 )
          {
            v127 = v135[1].m128i_i64[1];
            v142 = v135;
            n.m128i_i64[0] = v126;
            v128 = (void *)qalloc_or_throw(v127);
            v129 = n.m128i_i64[0];
            v130 = v142;
            *(_QWORD *)(v124 + 16) = v128;
            *(_QWORD *)(v124 + 32) = v129;
            memcpy(v128, (const void *)v130[1].m128i_i64[0], v129);
            v135 = v142;
            *(_QWORD *)(v124 + 24) = n.m128i_i64[0];
          }
          v103 = 0;
          *(_QWORD *)(v124 + 40) = 0;
          *(_OWORD *)(v124 + 48) = 0;
          v123 = v135[3].m128i_i64[0];
          if ( v123 )
          {
            v131 = v135[3].m128i_i64[0];
            v142 = v135;
            n.m128i_i64[0] = v123;
            v132 = (void *)qalloc_or_throw(v131);
            v133 = n.m128i_i64[0];
            v134 = v142;
            *(_QWORD *)(v124 + 40) = v132;
            *(_QWORD *)(v124 + 56) = v133;
            memcpy(v132, (const void *)v134[2].m128i_i64[1], v133);
            v135 = v142;
            *(_QWORD *)(v124 + 48) = n.m128i_i64[0];
          }
          ++v122;
          *(_QWORD *)(v124 + 64) = v135[4].m128i_i64[0];
          *(_QWORD *)(v124 + 72) = v135[4].m128i_i64[1];
          if ( v108 == v122 )
            break;
          v121 = *(_QWORD *)(v101 + 200);
        }
        *(_QWORD *)(v101 + 208) = v108;
      }
      v109 = v144;
      v110 = _mm_loadl_epi64((const __m128i *)&off_862980);
      *(_DWORD *)(v101 + 48) = 5;
      v76 = 4;
      *(_QWORD *)(v101 + 224) = v109;
      *(_DWORD *)(v101 + 232) = -1;
      *(__m128i *)(v101 + 56) = _mm_unpacklo_epi64(v110, (__m128i)(unsigned __int64)off_8628A0);
      *(_OWORD *)v154.m512i_i8 = 0x28u;
      v154.m512i_i32[8] = 132;
      *(_OWORD *)&v154.m512i_u64[2] = 0;
      sub_2EF360(
        (int)"BUTTON NO NONE\n"
             "BUTTON YES NONE\n"
             "BUTTON CANCEL NONE\n"
             "Lumina Metadata History\n"
             "\n"
             "%/%*<:E3::50::><|><:E4::90::>\n"
             "<->\n"
             "<:t5::60:::><|><:t6::60:::>\n"
             "\n",
        4,
        (__int64)&sub_2F47C0,
        v101,
        v94,
        0,
        (__m128)0LL,
        (__m128)0LL,
        (__m128)(unsigned __int64)&off_8628C8,
        a5,
        v102,
        v103,
        (__m128)(unsigned __int64)off_8628A0,
        a9,
        v101);
      ph = get_ph(
             "BUTTON NO NONE\n"
             "BUTTON YES NONE\n"
             "BUTTON CANCEL NONE\n"
             "Lumina Metadata History\n"
             "\n"
             "%/%*<:E3::50::><|><:E4::90::>\n"
             "<->\n"
             "<:t5::60:::><|><:t6::60:::>\n"
             "\n",
             &byte_4);
      if ( (unsigned __int8)netnode_inited(0.0) )
      {
        if ( (*(_BYTE *)(ph + 12) & 0x20) != 0 )
        {
          v112 = sub_4A0300(
                   (void *)"Lumina Metadata History:3",
                   v138,
                   v141.m128i_i32[0],
                   v141.m128i_i32[2],
                   (int)v142,
                   v143.m128i_i32[0],
                   v143.m128i_i32[2],
                   v144);
          if ( v112 )
          {
            v76 = (__int64)&unk_8627C0;
            *(_QWORD *)(v112 + 2152) = 3;
            *(_QWORD *)(v112 + 2144) = &unk_8627C0;
          }
        }
      }
      if ( v154.m512i_i64[1] )
      {
        v154.m512i_i64[2] = 0;
        qfree(v154.m512i_i64[1], (const char *)v76);
      }
      goto LABEL_56;
    }
    goto LABEL_122;
  }
  v53 = sub_4A0300(
          (void *)"Lumina Metadata History:3",
          v138,
          v141.m128i_i32[0],
          v141.m128i_i32[2],
          (int)v142,
          v143.m128i_i32[0],
          v143.m128i_i32[2],
          v144);
  v54 = sub_4A0300(
          "Lumina Metadata History:4",
          v139,
          v141.m128i_i32[0],
          v141.m128i_i32[2],
          (int)v142,
          v143.m128i_i32[0],
          v143.m128i_i32[2],
          v144);
  if ( v53 && v54 )
  {
    v61 = *(const __m128i **)(v53 + 2392);
    v62 = v61[11].m128i_i64[1];
    v61[11].m128i_i64[1] = *(_QWORD *)a1;
    v63 = _mm_loadu_si128(v61 + 12);
    v61[12].m128i_i64[0] = *(_QWORD *)(a1 + 8);
    v64 = *(const char **)(a1 + 16);
    v61[12].m128i_i64[1] = (__int64)v64;
    *(_QWORD *)a1 = v62;
    *(__m128i *)(a1 + 8) = v63;
    v61[13].m128i_i64[0] = v19;
    v65 = *(__m128i **)(v54 + 2392);
    v66 = v65[11].m128i_i64[1];
    if ( v66 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 8LL))(v66);
    v67 = _mm_loadu_si128(&v146);
    v68 = v65[12].m128i_i64[1];
    v65[11].m128i_i64[1] = v19;
    v146 = 0;
    v69 = n.m128i_i64[1];
    v143 = v67;
    n.m128i_i64[1] = 0;
    if ( v68 )
    {
      n.m128i_i64[0] = v65[13].m128i_i64[0];
      if ( n.m128i_i64[0] )
      {
        v70 = 0;
        do
        {
          v71 = (_QWORD *)(v68 + 80 * v70);
          v72 = v71[5];
          if ( v72 )
          {
            v71[6] = 0;
            qfree(v72, v64);
          }
          v73 = v71[2];
          if ( v73 )
          {
            v71[3] = 0;
            qfree(v73, v64);
          }
          v68 = v65[12].m128i_i64[1];
          ++v70;
        }
        while ( n.m128i_i64[0] != v70 );
      }
      v65[13].m128i_i64[0] = 0;
      qfree(v68, v64);
    }
    v74 = v144;
    v75 = _mm_load_si128(&v143);
    v76 = 0xFFFFFFFFLL;
    v65[12].m128i_i64[1] = v69;
    v65[14].m128i_i64[0] = v74;
    v65[13] = v75;
    sub_4F9A60(v52, 0xFFFFFFFFLL);
LABEL_56:
    v22 = 1;
    goto LABEL_57;
  }
  sub_169700(
    (int)"Failed to find chooser(s) in form \"Lumina Metadata History\"\n",
    0,
    v55,
    v56,
    v57,
    v58,
    si128,
    a3,
    a4,
    a5,
    v59,
    v60,
    a8,
    a9,
    v140);
  v76 = v52;
  sub_482660(QT::QCoreApplication::self + 2, v52, 0);
  v22 = 0;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
LABEL_57:
  v77 = n.m128i_i64[1];
  if ( n.m128i_i64[1] )
  {
    v78 = v146.m128i_i64[0];
    if ( v146.m128i_i64[0] )
    {
      v79 = 0;
      do
      {
        v80 = (_QWORD *)(v77 + 80 * v79);
        v81 = v80[5];
        if ( v81 )
        {
          v80[6] = 0;
          qfree(v81, (const char *)v76);
        }
        v82 = v80[2];
        if ( v82 )
        {
          v80[3] = 0;
          qfree(v82, (const char *)v76);
        }
        v77 = n.m128i_i64[1];
        ++v79;
      }
      while ( v78 != v79 );
    }
    v146.m128i_i64[0] = 0;
    qfree(v77, (const char *)v76);
  }
  return v22;
}
