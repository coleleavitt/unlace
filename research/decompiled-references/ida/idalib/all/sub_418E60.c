__int64 __fastcall sub_418E60(
        __m128i *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v7; // r12
  __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  __int8 v13; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BOOL4 v17; // r14d
  __int64 v18; // rsi
  _BOOL8 v19; // rdx
  void *v20; // r14
  __int64 v21; // rax
  size_t v22; // r13
  __int64 v23; // rbp
  size_t v24; // r12
  void *v25; // r15
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 result; // rax
  int v31; // eax
  int v32; // ecx
  __int64 v33; // r11
  __int64 v34; // rax
  unsigned __int8 v35; // al
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int *v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // r9
  __m128i *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rbp
  __int64 v49; // r14
  __int64 v50; // r9
  void *v51; // r14
  size_t v52; // r13
  __int64 v53; // r10
  __int64 v54; // r12
  __int64 v55; // rax
  void *v56; // r15
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // rdx
  __m128i v62; // xmm0
  __int64 v63; // rdx
  __int64 v64; // rdi
  __int64 v65; // rsi
  bool v66; // zf
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r11
  __int64 v70; // r8
  void *v71; // r14
  __int64 v72; // r9
  __int64 v73; // r15
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rsi
  __m128i v77; // xmm0
  __int64 v78; // rdi
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // rdi
  void *v82; // r14
  __int64 v83; // r12
  size_t v84; // r13
  __int64 v85; // rax
  void *v86; // r15
  __int64 v87; // r8
  __int64 v88; // rax
  __int64 v89; // rsi
  __int64 v90; // rax
  __m128i v91; // xmm0
  void *v92; // r12
  __int64 v93; // rbp
  __int64 v94; // r13
  __int64 v95; // rbx
  int v96; // r14d
  void *v97; // rdi
  void *v98; // rdi
  __int64 v99; // rdi
  __int64 v100; // rdi
  __int64 v101; // rax
  __int64 v102; // rax
  __m128i v103; // xmm2
  __m128i v104; // xmm1
  __m128i v105; // xmm0
  __int64 v106; // rdx
  __m128i si128; // xmm3
  __int64 v108; // rcx
  __m128i v109; // xmm3
  __int64 v110; // rax
  void *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 v114; // rcx
  __int64 v115; // rax
  __int64 v116; // rdi
  unsigned __int64 v117; // r10
  __int64 v118; // r12
  void *v119; // rdi
  __int64 v120; // r9
  __int64 v121; // rax
  void *v122; // r13
  size_t v123; // r15
  void *v124; // r14
  __int64 v125; // r8
  __int64 v126; // rax
  __int64 v127; // rsi
  __m128i v128; // xmm0
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  void *v132; // rax
  const void *v133; // rsi
  const void *v134; // r13
  __int64 v135; // rax
  __int64 v136; // rdi
  size_t v137; // r14
  __m128i v138; // [rsp+0h] [rbp-188h] BYREF
  __int64 v139; // [rsp+10h] [rbp-178h]
  __int64 v140; // [rsp+18h] [rbp-170h]
  __m128i n; // [rsp+20h] [rbp-168h] BYREF
  __int64 v142; // [rsp+30h] [rbp-158h]
  __int64 v143; // [rsp+38h] [rbp-150h]
  __int64 v144; // [rsp+40h] [rbp-148h]
  __int64 v145; // [rsp+48h] [rbp-140h]
  void *v146; // [rsp+50h] [rbp-138h] BYREF
  __int64 v147[2]; // [rsp+58h] [rbp-130h]
  void *dest; // [rsp+68h] [rbp-120h] BYREF
  __int64 v149[2]; // [rsp+70h] [rbp-118h]
  int v150[2]; // [rsp+80h] [rbp-108h]
  int v151; // [rsp+88h] [rbp-100h]
  __m128i v152[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v153[4]; // [rsp+B0h] [rbp-D8h] BYREF
  int v154[2]; // [rsp+C0h] [rbp-C8h]
  int v155; // [rsp+C8h] [rbp-C0h]
  __int64 v156; // [rsp+D0h] [rbp-B8h]
  __int64 v157; // [rsp+100h] [rbp-88h]
  __m128i v158; // [rsp+110h] [rbp-78h]
  __m128i v159; // [rsp+120h] [rbp-68h]
  __m128i v160; // [rsp+130h] [rbp-58h]
  __int64 v161; // [rsp+140h] [rbp-48h]
  unsigned __int64 v162; // [rsp+148h] [rbp-40h]

  v7 = a4;
  v162 = __readfsqword(0x28u);
  v10 = a5;
  *(_DWORD *)a2 = 0;
  v11 = a1->m128i_u64[1];
  if ( a3 >= v11 )
    goto LABEL_27;
  if ( v11 > 0xFD )
  {
    v12 = a1->m128i_i64[0];
    LODWORD(a4) = 7 * v11;
    v11 = a1->m128i_i64[0] + 56 * v11;
    if ( a1->m128i_i64[0] != v11 )
    {
      a4 = 1;
      do
      {
        if ( v7 == *(_QWORD *)(v12 + 48) )
          ++a4;
        v12 += 56;
      }
      while ( v11 != v12 );
      if ( a4 > 0xFE )
      {
        set_error_data(0, v7, v11, a4, a5, a6);
        return 4294967266LL;
      }
    }
  }
  v13 = a1[3].m128i_i8[4];
  if ( (v13 & 0x10) == 0 )
  {
    sub_537B70(
      a2,
      (int)a1,
      a3,
      a4,
      a5,
      a6,
      v138.m128i_i32[0],
      v138.m128i_i32[2],
      v139,
      v140,
      n.m128i_i32[0],
      n.m128i_i32[2],
      v142,
      v143,
      v144,
      (void *)v145,
      (int)v146,
      v147[0],
      v147[1],
      (int)dest,
      v149[0],
      v149[1],
      v150[0],
      v151,
      v152[0].m128i_i32[0],
      v152[0].m128i_i32[2],
      v152[1].m128i_i32[0],
      v152[1].m128i_i32[2],
      v153[0],
      v153[2],
      v154[0],
      v155,
      v156);
    v17 = sub_535940(a1, a1, v14, v15, v16) != 2;
    if ( (a1[3].m128i_i8[4] & 7) != 0 )
      v18 = (unsigned int)(1 << ((a1[3].m128i_i8[4] & 7) - 1));
    else
      v18 = (unsigned __int8)getinf(61);
    v19 = v17;
    v20 = nullptr;
    *(_QWORD *)(a1->m128i_i64[0] + 56 * a3 + 48) = extend_sign(v7, v18, v19);
    v21 = a1->m128i_i64[0] + 56 * a3;
    v22 = *(_QWORD *)(v21 + 8);
    v23 = v21;
    if ( v22 )
    {
      v25 = nullptr;
      v20 = (void *)qalloc_or_throw(*(_QWORD *)(v21 + 8));
      memcpy(v20, *(const void **)v23, v22);
      v24 = *(_QWORD *)(v23 + 32);
      if ( !v24 )
        goto LABEL_14;
    }
    else
    {
      v24 = *(_QWORD *)(v21 + 32);
      v25 = nullptr;
      if ( !v24 )
        goto LABEL_14;
    }
    v25 = (void *)qalloc_or_throw(v24);
    memcpy(v25, *(const void **)(v23 + 24), v24);
LABEL_14:
    v26 = *(_QWORD *)(v23 + 48);
    v27 = *(_QWORD *)(a2 + 152);
    v28 = *(_QWORD *)(a2 + 144);
    v157 = v26;
    if ( *(_QWORD *)(a2 + 160) >= (unsigned __int64)(v27 + 1) )
    {
LABEL_15:
      v29 = v28 + 56 * v27;
      *(__m128i *)(v29 + 8) = _mm_unpacklo_epi64((__m128i)v22, (__m128i)v22);
      *(_QWORD *)v29 = v20;
      *(_QWORD *)(v29 + 24) = v25;
      *(_QWORD *)(v29 + 48) = v26;
      *(__m128i *)(v29 + 32) = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      result = 0;
      ++*(_QWORD *)(a2 + 152);
      *(_DWORD *)a2 = 9;
      return result;
    }
LABEL_32:
    v36 = qvector_reserve(a2 + 144, v28, v27 + 1, 56);
    *(_QWORD *)(a2 + 144) = v36;
    v27 = *(_QWORD *)(a2 + 152);
    v28 = v36;
    goto LABEL_15;
  }
  v31 = v13 & 7;
  if ( v31 )
  {
    v32 = 1 << (v31 - 1);
  }
  else
  {
    v138.m128i_i64[0] = a5;
    v35 = getinf(61);
    v10 = v138.m128i_i64[0];
    v32 = v35;
  }
  a4 = (unsigned int)(8 * v32);
  if ( (int)a4 > 63 )
  {
    if ( v10 )
    {
      v33 = -1;
      goto LABEL_25;
    }
LABEL_23:
    set_error_data(0, v10, v11, a4, a5, a6);
    return 4294967279LL;
  }
  v34 = 1LL << a4;
  if ( !v10 )
    goto LABEL_23;
  v33 = v34 - 1;
  v11 = -v34;
  if ( (v10 & -v34) != 0 )
    goto LABEL_23;
LABEL_25:
  v138.m128i_i64[0] = v7 & ~v10;
  if ( v138.m128i_i64[0] )
  {
    set_error_data(1, v10, v11, a4, a5, a6);
    set_error_data(0, v7, v37, v38, v39, v40);
    return 4294967278LL;
  }
  v11 = a1[2].m128i_u64[0];
  if ( !v11 || (v41 = (int *)a1[1].m128i_i64[1], a4 = (unsigned __int64)&v41[v11], v41 == (int *)a4) )
  {
LABEL_27:
    set_error_data(0, a3, v11, a4, a5, a6);
    return 4294967289LL;
  }
  v11 = 0;
  while ( 1 )
  {
    v42 = *v41;
    a5 = v11;
    v11 += v42;
    if ( a3 < v11 )
      break;
    if ( (int *)a4 == ++v41 )
      goto LABEL_27;
  }
  v43 = a1->m128i_i64[0];
  v44 = 56 * a5;
  v45 = (__m128i *)(a1->m128i_i64[0] + 56 * a5);
  v46 = v10 ^ v45[3].m128i_i64[0];
  if ( (v33 & v46) != 0 )
  {
    v146 = nullptr;
    *(_OWORD *)v147 = 0;
    *(_OWORD *)v149 = 0;
    v138.m128i_i64[1] = 56 * a3;
    v63 = v43 + 56 * a3;
    dest = nullptr;
    v139 = (__int64)&v146;
    if ( (void **)v63 != &v146 )
    {
      v64 = *(_QWORD *)(v63 + 8);
      v140 = v64;
      if ( v64 )
      {
        n.m128i_i64[0] = v64 - 1;
        if ( v64 != 1 )
        {
          v110 = *(_QWORD *)v63;
          v145 = 56 * a5;
          v144 = v10;
          v143 = a5;
          v142 = v33;
          n.m128i_i64[1] = v110;
          v146 = (void *)qvector_reserve(v139, 0, v140, 1);
          v147[0] = v140;
          memmove(v146, (const void *)n.m128i_i64[1], n.m128i_u64[0]);
          v44 = v145;
          v10 = v144;
          a5 = v143;
          v33 = v142;
          *((char *)v146 + v140 - 1) = 0;
          v43 = a1->m128i_i64[0];
          v63 = a1->m128i_i64[0] + v138.m128i_i64[1];
        }
      }
    }
    if ( &dest != (void **)(v63 + 24) )
    {
      v65 = *(_QWORD *)(v63 + 32);
      v140 = v65;
      if ( v65 && (n.m128i_i64[0] = v65 - 1, v65 != 1) )
      {
        n.m128i_i64[1] = *(_QWORD *)(v63 + 24);
        v111 = dest;
        if ( v149[1] < (unsigned __int64)v140 )
        {
          v145 = v44;
          v144 = v10;
          v143 = a5;
          v142 = v33;
          v111 = (void *)qvector_reserve(&dest, dest, v140, 1);
          v44 = v145;
          v10 = v144;
          dest = v111;
          a5 = v143;
          v33 = v142;
        }
        v145 = v44;
        v144 = v10;
        v149[0] = v140;
        v143 = a5;
        v142 = v33;
        memmove(v111, (const void *)n.m128i_i64[1], n.m128i_u64[0]);
        v33 = v142;
        a5 = v143;
        v10 = v144;
        v44 = v145;
        *((char *)dest + v140 - 1) = 0;
        v43 = a1->m128i_i64[0];
      }
      else
      {
        v149[0] = 0;
      }
    }
    *(_QWORD *)v150 = v7;
    v143 = a5;
    v66 = (*(_QWORD *)(v43 + v44 + 48) & v33 & v10) == 0;
    v142 = v33;
    n.m128i_i64[1] = v33 & v10;
    n.m128i_i64[0] = v44;
    if ( v66 )
    {
      v138.m128i_i64[0] = v10;
      result = sub_414680(a1, (_DWORD *)a2, a3, a3 + 1, a5, v44);
      if ( !(_DWORD)result )
      {
        result = sub_4172C0(a1, (_QWORD *)a2, v139, v138.m128i_u64[0], 32, -1);
        if ( !(_DWORD)result )
          *(_DWORD *)a2 = 10;
      }
      goto LABEL_100;
    }
    v144 = v10;
    v140 = (__int64)v152;
    sub_414440((__int64)v152, (__int64)a1);
    LODWORD(v67) = n.m128i_i32[0];
    v68 = n.m128i_i64[1];
    LODWORD(v69) = v142;
    LODWORD(v70) = v143;
    if ( v42 == 1 )
    {
      n.m128i_i64[0] = v142;
      if ( (v142 & (v144 ^ v7)) != 0 )
      {
        sub_537B70(
          a2,
          (int)a1,
          v143,
          n.m128i_i32[2],
          v143,
          v67,
          v138.m128i_i32[0],
          n.m128i_i32[2],
          v139,
          v140,
          v67,
          v144,
          v142,
          v143,
          v144,
          (void *)v145,
          (int)v146,
          v147[0],
          v147[1],
          (int)dest,
          v149[0],
          v149[1],
          v150[0],
          v151,
          v152[0].m128i_i32[0],
          v152[0].m128i_i32[2],
          v152[1].m128i_i32[0],
          v152[1].m128i_i32[2],
          v153[0],
          v153[2],
          v154[0],
          v155,
          v156);
        v114 = v138.m128i_i64[1];
        v115 = a1->m128i_i64[0];
        v116 = n.m128i_i64[0];
        v138.m128i_i64[1] = n.m128i_i64[0];
        *(_QWORD *)(v115 + n.m128i_i64[0] + 48) = v114;
        sub_35A790((char **)(a1->m128i_i64[0] + v116));
        v117 = n.m128i_u64[1];
        v118 = a1->m128i_i64[0] + v138.m128i_i64[1];
        n.m128i_i64[0] = v138.m128i_i64[1];
        v119 = *(void **)(v118 + 24);
        if ( v119 )
        {
          *(_QWORD *)(v118 + 32) = 0;
          v138.m128i_i64[1] = v117;
          qfree(v119);
          *(_QWORD *)(v118 + 24) = 0;
          v120 = n.m128i_i64[0];
          *(_QWORD *)(v118 + 40) = 0;
          v117 = v138.m128i_u64[1];
          v118 = a1->m128i_i64[0] + v120;
        }
        v121 = *(_QWORD *)(v118 + 8);
        v122 = nullptr;
        v138.m128i_i64[1] = v121;
        if ( v121 )
        {
          n.m128i_i64[0] = v117;
          v137 = v121;
          v122 = (void *)qalloc_or_throw(v121);
          memcpy(v122, *(const void **)v118, v137);
          v117 = n.m128i_i64[0];
        }
        v123 = *(_QWORD *)(v118 + 32);
        v124 = nullptr;
        if ( v123 )
        {
          v136 = *(_QWORD *)(v118 + 32);
          n.m128i_i64[0] = v117;
          v124 = (void *)qalloc_or_throw(v136);
          memcpy(v124, *(const void **)(v118 + 24), v123);
          v117 = n.m128i_i64[0];
        }
        v125 = *(_QWORD *)(v118 + 48);
        v126 = *(_QWORD *)(a2 + 152);
        v127 = *(_QWORD *)(a2 + 144);
        v157 = v125;
        if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v126 + 1) )
        {
          n.m128i_i64[1] = v117;
          n.m128i_i64[0] = v125;
          v135 = qvector_reserve(a2 + 144, v127, v126 + 1, 56);
          *(_QWORD *)(a2 + 144) = v135;
          v127 = v135;
          v117 = n.m128i_u64[1];
          v126 = *(_QWORD *)(a2 + 152);
          v125 = n.m128i_i64[0];
        }
        v128 = _mm_loadl_epi64((const __m128i *)&v138.m128i_u64[1]);
        v129 = v127 + 56 * v126;
        v130 = v139;
        *(__m128i *)(v129 + 8) = _mm_unpacklo_epi64(v128, v128);
        *(_QWORD *)(v129 + 48) = v125;
        *(_QWORD *)v129 = v122;
        *(_QWORD *)(v129 + 24) = v124;
        *(__m128i *)(v129 + 32) = _mm_unpacklo_epi64((__m128i)v123, (__m128i)v123);
        ++*(_QWORD *)(a2 + 152);
        result = sub_4172C0(a1, (_QWORD *)a2, v130, v117, 32, -1);
        goto LABEL_87;
      }
      sub_537B70(
        a2,
        (int)a1,
        a3,
        n.m128i_i32[2],
        v143,
        v67,
        v138.m128i_i32[0],
        v138.m128i_i32[2],
        v139,
        v140,
        n.m128i_i32[0],
        n.m128i_i32[2],
        v142,
        v143,
        v144,
        (void *)v145,
        (int)v146,
        v147[0],
        v147[1],
        (int)dest,
        v149[0],
        v149[1],
        v150[0],
        v151,
        v152[0].m128i_i32[0],
        v152[0].m128i_i32[2],
        v152[1].m128i_i32[0],
        v152[1].m128i_i32[2],
        v153[0],
        v153[2],
        v154[0],
        v155,
        v156);
      v99 = v138.m128i_i64[1];
      v82 = nullptr;
      *(_QWORD *)(a1->m128i_i64[0] + v138.m128i_i64[1] + 48) = n.m128i_i64[0] & v7;
      v100 = a1->m128i_i64[0] + v99;
      v84 = *(_QWORD *)(v100 + 8);
      if ( v84 )
      {
        v82 = (void *)qalloc_or_throw(*(_QWORD *)(v100 + 8));
        memcpy(v82, *(const void **)v100, v84);
      }
      v101 = *(_QWORD *)(v100 + 32);
      v86 = nullptr;
      v138.m128i_i64[1] = v101;
      if ( v101 )
      {
        v86 = (void *)qalloc_or_throw(v101);
        memcpy(v86, *(const void **)(v100 + 24), v138.m128i_u64[1]);
      }
      v87 = *(_QWORD *)(v100 + 48);
      v88 = *(_QWORD *)(a2 + 152);
      v89 = *(_QWORD *)(a2 + 144);
      v157 = v87;
      if ( *(_QWORD *)(a2 + 160) >= (unsigned __int64)(v88 + 1) )
      {
LABEL_86:
        v90 = v89 + 56 * v88;
        *(_QWORD *)v90 = v82;
        *(_QWORD *)(v90 + 24) = v86;
        *(__m128i *)(v90 + 8) = _mm_unpacklo_epi64((__m128i)v84, (__m128i)v84);
        v91 = _mm_loadl_epi64((const __m128i *)&v138.m128i_u64[1]);
        *(_QWORD *)(v90 + 48) = v87;
        *(__m128i *)(v90 + 32) = _mm_unpacklo_epi64(v91, v91);
        ++*(_QWORD *)(a2 + 152);
        result = sub_414D20((__int64)a1);
LABEL_87:
        if ( (_DWORD)result )
        {
          v103 = _mm_loadu_si128(a1);
          v104 = _mm_loadu_si128(a1 + 1);
          v105 = _mm_loadu_si128(a1 + 2);
          *a1 = _mm_load_si128(v152);
          v106 = a1[3].m128i_i64[0];
          si128 = _mm_load_si128(&v152[1]);
          v108 = *(_QWORD *)v154;
          v158 = v103;
          a1[1] = si128;
          v109 = _mm_load_si128((const __m128i *)v153);
          v161 = v106;
          a1[3].m128i_i64[0] = v108;
          *(_QWORD *)v154 = v106;
          v159 = v104;
          v160 = v105;
          a1[2] = v109;
          v152[0] = v103;
          v152[1] = v104;
          *(__m128i *)v153 = v105;
        }
        else
        {
          *(_DWORD *)a2 = 9;
        }
        if ( v152[1].m128i_i64[1] )
        {
          v138.m128i_i32[2] = result;
          qfree((void *)v152[1].m128i_i64[1]);
          result = v138.m128i_u32[2];
        }
        v92 = (void *)v152[0].m128i_i64[0];
        if ( v152[0].m128i_i64[0] )
        {
          v93 = v152[0].m128i_i64[1];
          v94 = v138.m128i_i64[0];
          v95 = v152[0].m128i_i64[0];
          v96 = result;
          if ( v152[0].m128i_i64[1] )
          {
            do
            {
              v97 = *(void **)(v95 + 24);
              if ( v97 )
              {
                *(_QWORD *)(v95 + 32) = 0;
                qfree(v97);
              }
              v98 = *(void **)v95;
              if ( *(_QWORD *)v95 )
              {
                *(_QWORD *)(v95 + 8) = 0;
                qfree(v98);
              }
              ++v94;
              v95 += 56;
            }
            while ( v93 != v94 );
            LODWORD(result) = v96;
          }
          v138.m128i_i32[0] = result;
          qfree(v92);
          result = v138.m128i_u32[0];
        }
LABEL_100:
        if ( dest )
        {
          v138.m128i_i32[0] = result;
          v149[0] = 0;
          qfree(dest);
          result = v138.m128i_u32[0];
        }
        if ( v146 )
        {
          v138.m128i_i32[0] = result;
          v147[0] = 0;
          qfree(v146);
          return v138.m128i_u32[0];
        }
        return result;
      }
      n.m128i_i64[0] = v87;
      v102 = qvector_reserve(a2 + 144, v89, v88 + 1, 56);
    }
    else
    {
      n.m128i_i64[1] = n.m128i_i64[0];
      n.m128i_i64[0] = v68;
      if ( a3 != v143 )
      {
        sub_537B70(
          a2,
          (int)a1,
          v143,
          v68,
          v143,
          v67,
          v138.m128i_i32[0],
          v138.m128i_i32[2],
          v139,
          v140,
          n.m128i_i32[0],
          n.m128i_i32[2],
          v142,
          v143,
          v144,
          (void *)v145,
          (int)v146,
          v147[0],
          v147[1],
          (int)dest,
          v149[0],
          v149[1],
          v150[0],
          v151,
          v152[0].m128i_i32[0],
          v152[0].m128i_i32[2],
          v152[1].m128i_i32[0],
          v152[1].m128i_i32[2],
          v153[0],
          v153[2],
          v154[0],
          v155,
          v156);
        LODWORD(v68) = n.m128i_i32[0];
        v71 = nullptr;
        v72 = n.m128i_i64[1];
        v69 = v142;
        *(_QWORD *)(a1->m128i_i64[0] + n.m128i_i64[1] + 48) = n.m128i_i64[0];
        v67 = a1->m128i_i64[0] + v72;
        v73 = v67;
        n.m128i_i64[0] = *(_QWORD *)(v67 + 8);
        if ( n.m128i_i64[0] )
        {
          n.m128i_i64[1] = v69;
          v71 = (void *)qalloc_or_throw(n.m128i_i64[0]);
          memcpy(v71, *(const void **)v73, n.m128i_u64[0]);
          v69 = n.m128i_i64[1];
        }
        v142 = 0;
        v74 = *(_QWORD *)(v73 + 32);
        n.m128i_i64[1] = v74;
        if ( v74 )
        {
          v143 = v69;
          v132 = (void *)qalloc_or_throw(v74);
          v133 = *(const void **)(v73 + 24);
          v142 = (__int64)v132;
          memcpy(v132, v133, n.m128i_u64[1]);
          v69 = v143;
        }
        v70 = *(_QWORD *)(v73 + 48);
        v75 = *(_QWORD *)(a2 + 152);
        v76 = *(_QWORD *)(a2 + 144);
        v157 = v70;
        if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v75 + 1) )
        {
          v144 = v70;
          v143 = v69;
          v131 = qvector_reserve(a2 + 144, v76, v75 + 1, 56);
          *(_QWORD *)(a2 + 144) = v131;
          v76 = v131;
          v70 = v144;
          v75 = *(_QWORD *)(a2 + 152);
          LODWORD(v69) = v143;
        }
        v77 = _mm_loadl_epi64(&n);
        v78 = v142;
        v79 = v76 + 56 * v75;
        *(__m128i *)(v79 + 8) = _mm_unpacklo_epi64(v77, v77);
        v80 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
        *(_QWORD *)v79 = v71;
        *(_QWORD *)(v79 + 24) = v78;
        *(_QWORD *)(v79 + 48) = v70;
        *(__m128i *)(v79 + 32) = _mm_unpacklo_epi64(v80, v80);
        ++*(_QWORD *)(a2 + 152);
      }
      sub_537B70(
        a2,
        (int)a1,
        a3,
        v68,
        v70,
        v67,
        v138.m128i_i32[0],
        v138.m128i_i32[2],
        v139,
        v140,
        v69,
        n.m128i_i32[2],
        v142,
        v143,
        v144,
        (void *)v145,
        (int)v146,
        v147[0],
        v147[1],
        (int)dest,
        v149[0],
        v149[1],
        v150[0],
        v151,
        v152[0].m128i_i32[0],
        v152[0].m128i_i32[2],
        v152[1].m128i_i32[0],
        v152[1].m128i_i32[2],
        v153[0],
        v153[2],
        v154[0],
        v155,
        v156);
      v81 = v138.m128i_i64[1];
      v82 = nullptr;
      *(_QWORD *)(a1->m128i_i64[0] + v138.m128i_i64[1] + 48) = n.m128i_i64[0] & v7;
      v83 = v81 + a1->m128i_i64[0];
      v84 = *(_QWORD *)(v83 + 8);
      if ( v84 )
      {
        v82 = (void *)qalloc_or_throw(*(_QWORD *)(v83 + 8));
        memcpy(v82, *(const void **)v83, v84);
      }
      v85 = *(_QWORD *)(v83 + 32);
      v86 = nullptr;
      v138.m128i_i64[1] = v85;
      if ( v85 )
      {
        v86 = (void *)qalloc_or_throw(v85);
        memcpy(v86, *(const void **)(v83 + 24), v138.m128i_u64[1]);
      }
      v87 = *(_QWORD *)(v83 + 48);
      v88 = *(_QWORD *)(a2 + 152);
      v89 = *(_QWORD *)(a2 + 144);
      v157 = v87;
      if ( *(_QWORD *)(a2 + 160) >= (unsigned __int64)(v88 + 1) )
        goto LABEL_86;
      n.m128i_i64[0] = v87;
      v102 = qvector_reserve(a2 + 144, v89, v88 + 1, 56);
    }
    *(_QWORD *)(a2 + 144) = v102;
    v89 = v102;
    v87 = n.m128i_i64[0];
    v88 = *(_QWORD *)(a2 + 152);
    goto LABEL_86;
  }
  if ( v42 != 1 || v7 == v10 )
  {
    v20 = nullptr;
    sub_537B70(
      a2,
      (int)a1,
      a3,
      v46,
      a5,
      v44,
      v138.m128i_i32[0],
      v138.m128i_i32[2],
      v139,
      v140,
      n.m128i_i32[0],
      n.m128i_i32[2],
      v142,
      v143,
      v144,
      (void *)v145,
      (int)v146,
      v147[0],
      v147[1],
      (int)dest,
      v149[0],
      v149[1],
      v150[0],
      v151,
      v152[0].m128i_i32[0],
      v152[0].m128i_i32[2],
      v152[1].m128i_i32[0],
      v152[1].m128i_i32[2],
      v153[0],
      v153[2],
      v154[0],
      v155,
      v156);
    *(_QWORD *)(a1->m128i_i64[0] + 56 * a3 + 48) = v7;
    v47 = a1->m128i_i64[0] + 56 * a3;
    v22 = *(_QWORD *)(v47 + 8);
    v48 = v47;
    if ( v22 )
    {
      v20 = (void *)qalloc_or_throw(*(_QWORD *)(v47 + 8));
      memcpy(v20, *(const void **)v48, v22);
    }
    v24 = *(_QWORD *)(v48 + 32);
    v25 = nullptr;
    if ( v24 )
    {
      v25 = (void *)qalloc_or_throw(*(_QWORD *)(v48 + 32));
      memcpy(v25, *(const void **)(v48 + 24), v24);
    }
    v26 = *(_QWORD *)(v48 + 48);
    v27 = *(_QWORD *)(a2 + 152);
    v28 = *(_QWORD *)(a2 + 144);
    v157 = v26;
    if ( *(_QWORD *)(a2 + 160) >= (unsigned __int64)(v27 + 1) )
      goto LABEL_15;
    goto LABEL_32;
  }
  memset(v152, 0, sizeof(v152));
  v140 = (__int64)v152;
  *(_OWORD *)v153 = 0;
  if ( v45 != v152 )
  {
    v49 = v45->m128i_i64[1];
    if ( v49 )
    {
      v138.m128i_i64[0] = v49 - 1;
      if ( v49 != 1 )
      {
        v134 = (const void *)v45->m128i_i64[0];
        n.m128i_i64[0] = 56 * a5;
        v139 = v10;
        v138.m128i_i64[1] = a5;
        v152[0].m128i_i64[0] = qvector_reserve(v140, 0, v49, 1);
        v152[0].m128i_i64[1] = v49;
        memmove((void *)v152[0].m128i_i64[0], v134, v138.m128i_u64[0]);
        LODWORD(v44) = n.m128i_i32[0];
        LODWORD(v10) = v139;
        LODWORD(a5) = v138.m128i_i32[2];
        *(_BYTE *)(v152[0].m128i_i64[0] + v49 - 1) = 0;
      }
    }
  }
  sub_537B70(
    a2,
    (int)a1,
    a5,
    v46,
    a5,
    v44,
    v44,
    v10,
    v139,
    v140,
    n.m128i_i32[0],
    n.m128i_i32[2],
    v142,
    v143,
    v144,
    (void *)v145,
    (int)v146,
    v147[0],
    v147[1],
    (int)dest,
    v149[0],
    v149[1],
    v150[0],
    v151,
    v152[0].m128i_i32[0],
    v152[0].m128i_i32[2],
    v152[1].m128i_i32[0],
    v152[1].m128i_i32[2],
    v153[0],
    v153[2],
    v7,
    v155,
    v156);
  sub_35A790((char **)(a1->m128i_i64[0] + v138.m128i_i64[0]));
  v50 = a1->m128i_i64[0] + v138.m128i_i64[0];
  v51 = nullptr;
  v52 = *(_QWORD *)(v50 + 8);
  v53 = v138.m128i_i64[1];
  v54 = v50;
  if ( v52 )
  {
    v113 = *(_QWORD *)(v50 + 8);
    v138.m128i_i64[0] = v138.m128i_i64[1];
    v51 = (void *)qalloc_or_throw(v113);
    memcpy(v51, *(const void **)v54, v52);
    v53 = v138.m128i_i64[1];
  }
  v55 = *(_QWORD *)(v54 + 32);
  v56 = nullptr;
  v138.m128i_i64[0] = v55;
  if ( v55 )
  {
    v138.m128i_i64[1] = v53;
    v56 = (void *)qalloc_or_throw(v55);
    memcpy(v56, *(const void **)(v54 + 24), v138.m128i_u64[0]);
    v53 = v138.m128i_i64[1];
  }
  v57 = *(_QWORD *)(v54 + 48);
  v58 = *(_QWORD *)(a2 + 152);
  v59 = *(_QWORD *)(a2 + 144);
  v157 = v57;
  if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v58 + 1) )
  {
    v139 = v53;
    v138.m128i_i64[1] = v57;
    v112 = qvector_reserve(a2 + 144, v59, v58 + 1, 56);
    *(_QWORD *)(a2 + 144) = v112;
    v59 = v112;
    v53 = v139;
    v58 = *(_QWORD *)(a2 + 152);
    v57 = v138.m128i_i64[1];
  }
  v60 = v59 + 56 * v58;
  v61 = v140;
  *(__m128i *)(v60 + 8) = _mm_unpacklo_epi64((__m128i)v52, (__m128i)v52);
  v62 = _mm_loadl_epi64(&v138);
  *(_QWORD *)(v60 + 48) = v57;
  *(_QWORD *)v60 = v51;
  *(_QWORD *)(v60 + 24) = v56;
  *(__m128i *)(v60 + 32) = _mm_unpacklo_epi64(v62, v62);
  ++*(_QWORD *)(a2 + 152);
  result = sub_4172C0(a1, (_QWORD *)a2, v61, v53, 32, -1);
  if ( !(_DWORD)result )
    *(_DWORD *)a2 = 9;
  if ( v152[1].m128i_i64[1] )
  {
    v138.m128i_i32[0] = result;
    *(_QWORD *)v153 = 0;
    qfree((void *)v152[1].m128i_i64[1]);
    result = v138.m128i_u32[0];
  }
  if ( v152[0].m128i_i64[0] )
  {
    v138.m128i_i32[0] = result;
    v152[0].m128i_i64[1] = 0;
    qfree((void *)v152[0].m128i_i64[0]);
    return v138.m128i_u32[0];
  }
  return result;
}
