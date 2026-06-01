__int64 __fastcall sub_27C280(__m128i *a1)
{
  __int64 v2; // rbx
  int *v3; // rdi
  int *v4; // rax
  int *v5; // rdx
  int *v6; // rcx
  int *v7; // rdx
  int *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  char *v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 i; // r12
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  unsigned int v18; // r12d
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  __int64 v21; // rdi
  int v23; // edx
  __int64 v24; // r12
  __int64 v25; // r12
  __int64 v26; // rax
  _DWORD *v27; // rax
  bool v28; // r14
  __int64 v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // r15d
  __int64 v32; // rdx
  size_t v33; // rcx
  unsigned __int64 v34; // r13
  void *v35; // rax
  const void *v36; // rsi
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r14
  __int64 v40; // rdx
  __m128i si128; // xmm0
  __int64 v42; // r13
  __int64 v43; // rbx
  __int64 *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r12
  __int64 v49; // rdx
  __m128i v50; // xmm0
  __int64 v51; // r13
  __int64 v52; // rbx
  __int64 *v53; // rax
  __int64 v54; // rdi
  unsigned __int64 v55; // r13
  const __m128i *v56; // rax
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __m128i *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 m; // rbx
  __int64 v66; // rdi
  __m128i v67; // xmm0
  __int32 v68; // eax
  __int64 v69; // rdi
  __int64 v70; // rax
  __m128i *v71; // r13
  __int64 v72; // r15
  __int64 v73; // r12
  unsigned __int64 v74; // r14
  void *v75; // rax
  size_t v76; // rbx
  char *v77; // rax
  const void *v78; // rsi
  __int64 v79; // r13
  __int64 j; // rbx
  __int64 v81; // rdx
  size_t v82; // rdx
  __int64 v83; // r12
  void *v84; // rax
  const void **v85; // rdx
  char *v86; // rbx
  void *v87; // rdi
  __int64 v88; // r13
  __int64 k; // rbx
  __int64 v90; // rdx
  size_t v91; // rdx
  __int64 v92; // rcx
  size_t v93; // r15
  void *v94; // rax
  __int64 v95; // rcx
  const void **v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rdx
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rdx
  __m128i v103; // [rsp+0h] [rbp-108h] BYREF
  size_t v104[2]; // [rsp+10h] [rbp-F8h] BYREF
  int *v105; // [rsp+20h] [rbp-E8h]
  __int64 v106; // [rsp+28h] [rbp-E0h]
  size_t n; // [rsp+30h] [rbp-D8h]
  __int64 v108; // [rsp+38h] [rbp-D0h]
  char *v109; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v110; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v111; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v112; // [rsp+60h] [rbp-A8h] BYREF
  size_t v113; // [rsp+70h] [rbp-98h]
  __m128i v114; // [rsp+78h] [rbp-90h]
  char v115[8]; // [rsp+90h] [rbp-78h] BYREF
  int v116; // [rsp+98h] [rbp-70h] BYREF
  void *v117; // [rsp+A0h] [rbp-68h]
  int *v118; // [rsp+A8h] [rbp-60h]
  int *v119; // [rsp+B0h] [rbp-58h]
  __int64 v120; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v121; // [rsp+C8h] [rbp-40h]

  v121 = __readfsqword(0x28u);
  sub_27B380(0xAu, &a1[17].m128i_u64[1]);
  v2 = a1[15].m128i_i64[1];
  v117 = nullptr;
  v118 = &v116;
  v119 = &v116;
  v120 = 0;
  v3 = *(int **)(v2 + 16);
  v116 = 0;
  v105 = &v116;
  if ( v3 )
  {
    v4 = (int *)sub_27B1D0(v3, (__int64)&v116);
    v5 = v4;
    do
    {
      v6 = v5;
      v5 = *((int **)v5 + 2);
    }
    while ( v5 );
    v118 = v6;
    v7 = v4;
    do
    {
      v8 = v7;
      v7 = *((int **)v7 + 3);
    }
    while ( v7 );
    v9 = *(_QWORD *)(v2 + 40);
    v119 = v8;
    v117 = v4;
    v120 = v9;
  }
  v109 = nullptr;
  v10 = a1[14].m128i_i64[1];
  v110 = v10;
  if ( v10 )
  {
    v76 = 16 * v10;
    v77 = (char *)qalloc_or_throw(16 * v10);
    v78 = (const void *)a1[14].m128i_i64[0];
    v109 = v77;
    memcpy(v77, v78, v76);
  }
  sub_2939B0(a1);
  v11 = (char *)a1[23].m128i_u32[2];
  if ( (int)v11 > a1[17].m128i_i32[0] )
  {
    v12 = a1[22].m128i_i64[0];
    if ( v12 )
    {
      v13 = a1[22].m128i_i64[1];
      if ( v13 )
      {
        for ( i = 0; i != v13; ++i )
        {
          v15 = (_QWORD *)(v12 + (i << 6));
          v16 = v15[5];
          if ( v16 )
          {
            v15[6] = 0;
            qfree(v16, v11);
          }
          v17 = v15[2];
          if ( v17 )
          {
            v15[3] = 0;
            qfree(v17, v11);
          }
          v12 = a1[22].m128i_i64[0];
        }
      }
      a1[22].m128i_i64[1] = 0;
      qfree(v12, v11);
      a1[22].m128i_i64[0] = 0;
      a1[23].m128i_i64[0] = 0;
    }
    a1[23].m128i_i32[2] = 0;
    v18 = 0;
    goto LABEL_20;
  }
  (*(void (__fastcall **)(__m128i *))(a1->m128i_i64[0] + 184))(a1);
  v23 = a1[23].m128i_i32[2];
  LODWORD(v104[0]) = 1;
  v106 = 0;
  if ( v23 > 0 )
  {
    while ( 1 )
    {
      v24 = a1[22].m128i_i64[0];
      v103.m128i_i32[0] = v106;
      v25 = (v106 << 6) + v24;
      v26 = *(_QWORD *)(v25 + 24);
      if ( v26 == 2 )
        break;
      if ( v26 )
      {
        v27 = *(_DWORD **)(v25 + 16);
        v28 = 0;
LABEL_31:
        v29 = 0;
        while ( 1 )
        {
          v31 = v27[v29];
          if ( (int)v31 < v23 )
          {
            v112.m128i_i64[1] = -1;
            v114 = 0;
            v112.m128i_i64[0] = 0x1FFFFFFFFLL;
            v113 = 0;
            v111 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v103.m128i_u32[0]), _mm_cvtsi32_si128(v31)).m128i_u64[0];
            v32 = sub_27C1F0((__int64)v115, (int *)&v111);
            if ( (int *)v32 != v105 )
            {
              v33 = 0;
              v112 = *(__m128i *)(v32 + 40);
              v34 = *(_QWORD *)(v32 + 64);
              if ( v34 )
              {
                v108 = v32;
                n = 8 * v34;
                v35 = (void *)qalloc_or_throw(8 * v34);
                v36 = *(const void **)(v108 + 56);
                v37 = memcpy(v35, v36, 8 * v34);
                v33 = (size_t)v37;
                if ( v113 )
                {
                  n = (size_t)v37;
                  v114.m128i_i64[0] = 0;
                  qfree(v113, (const char *)v36, v38, v37);
                  v33 = n;
                }
              }
              v113 = v33;
              v114 = _mm_unpacklo_epi64((__m128i)v34, (__m128i)v34);
            }
            v30 = -2129403325;
            if ( v28 )
              v30 = (v31 == LODWORD(v104[0])) - 2129403324;
            v112.m128i_i64[0] = v30 | 0x100000000LL;
            v11 = (char *)v103.m128i_u32[0];
            (*(void (__fastcall **)(__m128i *, _QWORD, _QWORD, __m128i *))(a1->m128i_i64[0] + 208))(
              a1,
              v103.m128i_u32[0],
              v31,
              &v112);
            if ( v113 )
            {
              v114.m128i_i64[0] = 0;
              qfree(v113, (const char *)v103.m128i_u32[0]);
            }
            v23 = a1[23].m128i_i32[2];
          }
          if ( (unsigned __int64)++v29 >= *(_QWORD *)(v25 + 24) )
            break;
          v27 = *(_DWORD **)(v25 + 16);
        }
      }
      ++v106;
      ++LODWORD(v104[0]);
      if ( v23 <= (int)v106 )
        goto LABEL_46;
    }
    v27 = *(_DWORD **)(v25 + 16);
    v28 = 1;
    if ( LODWORD(v104[0]) != *v27 )
      v28 = v27[1] == LODWORD(v104[0]);
    goto LABEL_31;
  }
LABEL_46:
  v39 = a1[13].m128i_i64[0];
  if ( v39 )
  {
    v103.m128i_i64[0] = qalloc_or_throw(24 * v39);
    v79 = v103.m128i_i64[0];
    for ( j = 0; j != v39; ++j )
    {
      v81 = a1[12].m128i_i64[1];
      *(_QWORD *)v79 = 0;
      *(_OWORD *)(v79 + 8) = 0;
      v82 = v81 + 24 * j;
      v83 = *(_QWORD *)(v82 + 8);
      if ( v83 )
      {
        v104[0] = v82;
        v84 = (void *)qalloc_or_throw(4 * v83);
        v85 = (const void **)v104[0];
        *(_QWORD *)v79 = v84;
        *(_QWORD *)(v79 + 16) = v83;
        v11 = (char *)*v85;
        memcpy(v84, *v85, 4 * v83);
        *(_QWORD *)(v79 + 8) = v83;
      }
      v79 += 24;
    }
  }
  else
  {
    v103.m128i_i64[0] = 0;
  }
  v40 = a1[9].m128i_i64[1];
  si128 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v39, (__m128i)(unsigned __int64)v39);
  if ( v40 )
  {
    v42 = a1[10].m128i_i64[0];
    if ( v42 )
    {
      v43 = 0;
      *(__m128i *)v104 = si128;
      do
      {
        v44 = (__int64 *)(v40 + 24 * v43);
        v45 = *v44;
        if ( *v44 )
        {
          v44[1] = 0;
          qfree(v45, v11);
          v40 = a1[9].m128i_i64[1];
        }
        ++v43;
      }
      while ( v42 != v43 );
      si128 = _mm_load_si128((const __m128i *)v104);
    }
    a1[10].m128i_i64[0] = 0;
    *(__m128i *)v104 = si128;
    qfree(v40, v11);
    si128 = _mm_load_si128((const __m128i *)v104);
  }
  v46 = v103.m128i_i64[0];
  v47 = a1[11].m128i_i64[1];
  a1[10] = si128;
  v48 = 0;
  a1[9].m128i_i64[1] = v46;
  if ( v47 )
  {
    v48 = qalloc_or_throw(24 * v47);
    v88 = v48;
    for ( k = 0; k != v47; ++k )
    {
      v90 = a1[11].m128i_i64[0];
      *(_QWORD *)v88 = 0;
      *(_OWORD *)(v88 + 8) = 0;
      v91 = v90 + 24 * k;
      v92 = *(_QWORD *)(v91 + 8);
      if ( v92 )
      {
        v93 = 4 * v92;
        v104[0] = v91;
        v103.m128i_i64[0] = v92;
        v94 = (void *)qalloc_or_throw(4 * v92);
        v95 = v103.m128i_i64[0];
        v96 = (const void **)v104[0];
        *(_QWORD *)v88 = v94;
        *(_QWORD *)(v88 + 16) = v95;
        v11 = (char *)*v96;
        memcpy(v94, *v96, v93);
        *(_QWORD *)(v88 + 8) = v103.m128i_i64[0];
      }
      v88 += 24;
    }
  }
  v49 = a1[8].m128i_i64[0];
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v47, (__m128i)(unsigned __int64)v47);
  if ( v49 )
  {
    v51 = a1[8].m128i_i64[1];
    if ( v51 )
    {
      v52 = 0;
      v103 = v50;
      do
      {
        v53 = (__int64 *)(v49 + 24 * v52);
        v54 = *v53;
        if ( *v53 )
        {
          v53[1] = 0;
          qfree(v54, v11);
          v49 = a1[8].m128i_i64[0];
        }
        ++v52;
      }
      while ( v51 != v52 );
      v50 = _mm_load_si128(&v103);
    }
    a1[8].m128i_i64[1] = 0;
    v103 = v50;
    qfree(v49, v11);
    v50 = _mm_load_si128(&v103);
  }
  v55 = a1[19].m128i_u64[0];
  a1[8].m128i_i64[0] = v48;
  *(__m128i *)((char *)a1 + 136) = v50;
  if ( v55 > 1 )
  {
    v86 = (char *)a1[18].m128i_i64[1];
    v87 = (void *)a1->m128i_i64[1];
    if ( a1[1].m128i_i64[1] < v55 )
    {
      v97 = qvector_reserve(&a1->m128i_u64[1], a1->m128i_i64[1], v55, 1);
      a1->m128i_i64[1] = v97;
      v87 = (void *)v97;
    }
    a1[1].m128i_i64[0] = v55;
    v11 = v86;
    memmove(v87, v86, v55 - 1);
    *(_BYTE *)(a1->m128i_i64[1] + v55 - 1) = 0;
  }
  else
  {
    a1[1].m128i_i64[0] = 0;
  }
  v56 = (const __m128i *)a1[21].m128i_i64[0];
  if ( v56 )
    a1[16] = _mm_loadu_si128(v56);
  else
    a1[16].m128i_i64[0] = -1;
  sub_29B8E0(a1);
  v18 = 1;
  if ( v110 )
  {
    v57 = a1[14].m128i_u64[1];
    v103.m128i_i64[0] = a1[14].m128i_i64[0];
    a1[14].m128i_i64[0] = (__int64)v109;
    v58 = v110;
    *(__m128i *)((char *)a1 + 232) = _mm_unpacklo_epi64((__m128i)v110, (__m128i)v110);
    v112 = 0;
    if ( v57 >= v58 )
    {
      if ( v110 >= v57 )
      {
LABEL_77:
        for ( m = (__int64)v118; (int *)m != v105; m = std::_Rb_tree_increment(m) )
        {
          v68 = a1[23].m128i_i32[2];
          v11 = (char *)(m + 32);
          if ( *(_DWORD *)(m + 32) >= v68 || v68 <= *(_DWORD *)(m + 36) )
          {
            v69 = a1[15].m128i_i64[1];
            v70 = sub_27C1F0(v69, (int *)v11);
            v71 = (__m128i *)v70;
            if ( v70 != v69 + 8 )
            {
              v72 = *(_QWORD *)(v70 + 40);
              v73 = 0;
              *(_DWORD *)(v70 + 40) = *(_DWORD *)(m + 40);
              *(_DWORD *)(v70 + 44) = *(_DWORD *)(m + 44);
              *(_DWORD *)(v70 + 48) = *(_DWORD *)(m + 48);
              *(_DWORD *)(v70 + 52) = *(_DWORD *)(m + 52);
              v74 = *(_QWORD *)(m + 64);
              if ( v74 )
              {
                v104[0] = 8 * v74;
                v75 = (void *)qalloc_or_throw(8 * v74);
                v11 = *(char **)(m + 56);
                v73 = (__int64)v75;
                memcpy(v75, v11, v104[0]);
              }
              v66 = v71[3].m128i_i64[1];
              v67 = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v74);
              if ( v66 )
              {
                v71[4].m128i_i64[0] = 0;
                *(__m128i *)v104 = v67;
                qfree(v66, v11);
                v67 = _mm_load_si128((const __m128i *)v104);
              }
              v71[3].m128i_i64[1] = v73;
              v71[2].m128i_i64[1] = v72;
              v71[4] = v67;
            }
          }
        }
        v18 = 1;
        v109 = (char *)v103.m128i_i64[0];
        goto LABEL_20;
      }
      v11 = v109;
      v59 = a1 + 14;
      if ( &v112 < (__m128i *)v109 || &v112 >= (__m128i *)&v109[16 * v110] )
      {
        v11 = v109;
        v60 = qvector_reserve(v59, v109, v57, 16);
        a1[14].m128i_i64[0] = v60;
        v61 = v60;
        v62 = a1[14].m128i_u64[1];
        if ( v62 < v57 )
        {
          v63 = v62 + 1;
          *(__m128i *)(v61 + 16 * a1[14].m128i_i64[1]) = _mm_load_si128(&v112);
          if ( v63 < v57 )
          {
            do
            {
              v64 = v63++;
              *(__m128i *)(a1[14].m128i_i64[0] + 16 * v64) = _mm_load_si128(&v112);
            }
            while ( v57 != v63 );
          }
        }
      }
      else
      {
        v98 = qvector_reserve(v59, v109, v57, 16);
        a1[14].m128i_i64[0] = v98;
        v99 = v98;
        v100 = a1[14].m128i_u64[1];
        if ( v100 < v57 )
        {
          v101 = v100 + 1;
          *(_OWORD *)(v99 + 16 * a1[14].m128i_i64[1]) = 0;
          if ( v101 < v57 )
          {
            do
            {
              v102 = v101++;
              *(_OWORD *)(a1[14].m128i_i64[0] + 16 * v102) = 0;
            }
            while ( v57 != v101 );
          }
        }
      }
    }
    a1[14].m128i_i64[1] = v57;
    goto LABEL_77;
  }
LABEL_20:
  if ( v109 )
    qfree(v109, v11);
  v19 = v117;
  if ( v117 )
  {
    do
    {
      v20 = v19;
      sub_27AF10((_QWORD *)v19[3], v11);
      v21 = v19[7];
      v19 = (_QWORD *)v19[2];
      if ( v21 )
      {
        v20[8] = 0;
        qfree(v21, v11);
      }
      v11 = (_BYTE *)off_50;
      operator delete(v20, 0x50u);
    }
    while ( v19 );
  }
  return v18;
}
