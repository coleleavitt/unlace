__int64 __fastcall sub_405AE0(__m128i *a1, __int64 a2, size_t a3, unsigned __int64 a4, __int64 a5, __int64 a6)
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
  unsigned __int64 v18; // rsi
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
  void *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int *v42; // rax
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r9
  __m128i *v46; // rdx
  __int64 v47; // rcx
  const char *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rbp
  __int64 v51; // r14
  const char *v52; // rsi
  __int64 v53; // rdx
  const char *v54; // rcx
  __int64 v55; // r9
  void *v56; // r14
  size_t v57; // r13
  __int64 v58; // r10
  __int64 v59; // r12
  __int64 v60; // rax
  void *v61; // r15
  __int64 v62; // r8
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128i v67; // xmm0
  size_t v68; // rdx
  __int64 v69; // rdi
  __int64 v70; // rsi
  bool v71; // zf
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r11
  __int64 v75; // r8
  const char *v76; // rsi
  void *v77; // r14
  __int64 v78; // r9
  __int64 v79; // r15
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rsi
  __m128i v83; // xmm0
  __int64 v84; // rdi
  __int64 v85; // rax
  __m128i v86; // xmm0
  const char *v87; // rsi
  __int64 v88; // rdi
  void *v89; // r14
  __int64 v90; // r12
  size_t v91; // r13
  __int64 v92; // rax
  void *v93; // r15
  __int64 v94; // r8
  __int64 v95; // rax
  __int64 v96; // rsi
  __int64 v97; // rax
  __m128i v98; // xmm0
  void *v99; // r12
  __int64 v100; // rbp
  __int64 v101; // r13
  __int64 v102; // rbx
  int v103; // r14d
  void *v104; // rdi
  void *v105; // rdi
  void *v106; // rax
  const char *v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rax
  __m128i v112; // xmm2
  __m128i v113; // xmm1
  __m128i v114; // xmm0
  __int64 v115; // rdx
  __m128i si128; // xmm3
  __int64 v117; // rcx
  __m128i v118; // xmm3
  __int64 v119; // rax
  void *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdi
  void *v123; // rax
  void *v124; // rax
  __int64 v125; // rcx
  const char *v126; // rsi
  __int64 v127; // rax
  __int64 v128; // rdi
  unsigned __int64 v129; // r10
  __int64 v130; // r12
  void *v131; // rdi
  __int64 v132; // r9
  __int64 v133; // rax
  void *v134; // r13
  size_t v135; // r15
  void *v136; // r14
  __int64 v137; // r8
  __int64 v138; // rax
  __int64 v139; // rsi
  __m128i v140; // xmm0
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rax
  void *v144; // rax
  void *v145; // rax
  const void *v146; // rsi
  const void *v147; // r13
  __int64 v148; // rax
  __int64 v149; // rdi
  void *v150; // rax
  size_t v151; // r14
  void *v152; // rax
  __m128i v153; // [rsp+0h] [rbp-188h] BYREF
  __int64 v154; // [rsp+10h] [rbp-178h]
  __int64 v155; // [rsp+18h] [rbp-170h]
  __m128i n; // [rsp+20h] [rbp-168h] BYREF
  __int64 v157; // [rsp+30h] [rbp-158h]
  __int64 v158; // [rsp+38h] [rbp-150h]
  __int64 v159; // [rsp+40h] [rbp-148h]
  __int64 v160; // [rsp+48h] [rbp-140h]
  void *v161; // [rsp+50h] [rbp-138h] BYREF
  __int64 v162[2]; // [rsp+58h] [rbp-130h]
  void *dest; // [rsp+68h] [rbp-120h] BYREF
  __int64 v164[2]; // [rsp+70h] [rbp-118h]
  int v165[2]; // [rsp+80h] [rbp-108h]
  int v166; // [rsp+88h] [rbp-100h]
  __m128i v167[2]; // [rsp+90h] [rbp-F8h] BYREF
  int v168[4]; // [rsp+B0h] [rbp-D8h] BYREF
  int v169[2]; // [rsp+C0h] [rbp-C8h]
  int v170; // [rsp+C8h] [rbp-C0h]
  __int64 v171; // [rsp+D0h] [rbp-B8h]
  __int64 v172; // [rsp+100h] [rbp-88h]
  __m128i v173; // [rsp+110h] [rbp-78h]
  __m128i v174; // [rsp+120h] [rbp-68h]
  __m128i v175; // [rsp+130h] [rbp-58h]
  __int64 v176; // [rsp+140h] [rbp-48h]
  unsigned __int64 v177; // [rsp+148h] [rbp-40h]

  v7 = a4;
  v177 = __readfsqword(0x28u);
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
    sub_51F050(
      a2,
      (int)a1,
      a3,
      a4,
      a5,
      a6,
      v153.m128i_i32[0],
      v153.m128i_i32[2],
      v154,
      v155,
      n.m128i_i32[0],
      n.m128i_i32[2],
      v157,
      v158,
      v159,
      (void *)v160,
      (int)v161,
      v162[0],
      v162[1],
      (int)dest,
      v164[0],
      v164[1],
      v165[0],
      v166,
      v167[0].m128i_i32[0],
      v167[0].m128i_i32[2],
      v167[1].m128i_i32[0],
      v167[1].m128i_i32[2],
      v168[0],
      v168[2],
      v169[0],
      v170,
      v171);
    v17 = sub_51CE10(a1, a1, v14, v15, v16) != 2;
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
      v36 = (void *)qalloc_or_throw(*(_QWORD *)(v21 + 8), (const char *)v18);
      v18 = *(_QWORD *)v23;
      v20 = v36;
      memcpy(v36, *(const void **)v23, v22);
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
    v25 = (void *)qalloc_or_throw(v24, (const char *)v18);
    memcpy(v25, *(const void **)(v23 + 24), v24);
LABEL_14:
    v26 = *(_QWORD *)(v23 + 48);
    v27 = *(_QWORD *)(a2 + 152);
    v28 = *(_QWORD *)(a2 + 144);
    v172 = v26;
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
    v37 = qvector_reserve(a2 + 144, v28, v27 + 1, 56);
    *(_QWORD *)(a2 + 144) = v37;
    v27 = *(_QWORD *)(a2 + 152);
    v28 = v37;
    goto LABEL_15;
  }
  v31 = v13 & 7;
  if ( v31 )
  {
    v32 = 1 << (v31 - 1);
  }
  else
  {
    v153.m128i_i64[0] = a5;
    v35 = getinf(61);
    v10 = v153.m128i_i64[0];
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
  v153.m128i_i64[0] = v7 & ~v10;
  if ( v153.m128i_i64[0] )
  {
    set_error_data(1, v10, v11, a4, a5, a6);
    set_error_data(0, v7, v38, v39, v40, v41);
    return 4294967278LL;
  }
  v11 = a1[2].m128i_u64[0];
  if ( !v11 || (v42 = (int *)a1[1].m128i_i64[1], a4 = (unsigned __int64)&v42[v11], v42 == (int *)a4) )
  {
LABEL_27:
    set_error_data(0, a3, v11, a4, a5, a6);
    return 4294967289LL;
  }
  v11 = 0;
  while ( 1 )
  {
    v43 = *v42;
    a5 = v11;
    v11 += v43;
    if ( a3 < v11 )
      break;
    if ( (int *)a4 == ++v42 )
      goto LABEL_27;
  }
  v44 = a1->m128i_i64[0];
  v45 = 56 * a5;
  v46 = (__m128i *)(a1->m128i_i64[0] + 56 * a5);
  v47 = v10 ^ v46[3].m128i_i64[0];
  if ( (v33 & v47) != 0 )
  {
    v161 = nullptr;
    *(_OWORD *)v162 = 0;
    *(_OWORD *)v164 = 0;
    v153.m128i_i64[1] = 56 * a3;
    v68 = v44 + 56 * a3;
    dest = nullptr;
    v154 = (__int64)&v161;
    if ( (void **)v68 != &v161 )
    {
      v69 = *(_QWORD *)(v68 + 8);
      v155 = v69;
      if ( v69 )
      {
        n.m128i_i64[0] = v69 - 1;
        if ( v69 != 1 )
        {
          v119 = *(_QWORD *)v68;
          v160 = 56 * a5;
          v159 = v10;
          v158 = a5;
          v157 = v33;
          n.m128i_i64[1] = v119;
          v161 = (void *)qvector_reserve(v154, 0, v155, 1);
          v162[0] = v155;
          memmove(v161, (const void *)n.m128i_i64[1], n.m128i_u64[0]);
          v45 = v160;
          v10 = v159;
          a5 = v158;
          v33 = v157;
          *((char *)v161 + v155 - 1) = 0;
          v44 = a1->m128i_i64[0];
          v68 = a1->m128i_i64[0] + v153.m128i_i64[1];
        }
      }
    }
    if ( &dest != (void **)(v68 + 24) )
    {
      v70 = *(_QWORD *)(v68 + 32);
      v155 = v70;
      if ( v70 && (n.m128i_i64[0] = v70 - 1, v70 != 1) )
      {
        n.m128i_i64[1] = *(_QWORD *)(v68 + 24);
        v120 = dest;
        if ( v164[1] < (unsigned __int64)v155 )
        {
          v160 = v45;
          v159 = v10;
          v158 = a5;
          v157 = v33;
          v120 = (void *)qvector_reserve(&dest, dest, v155, 1);
          v45 = v160;
          v10 = v159;
          dest = v120;
          a5 = v158;
          v33 = v157;
        }
        v160 = v45;
        v159 = v10;
        v164[0] = v155;
        v158 = a5;
        v157 = v33;
        memmove(v120, (const void *)n.m128i_i64[1], n.m128i_u64[0]);
        v33 = v157;
        a5 = v158;
        v10 = v159;
        v45 = v160;
        *((char *)dest + v155 - 1) = 0;
        v44 = a1->m128i_i64[0];
      }
      else
      {
        v164[0] = 0;
      }
    }
    *(_QWORD *)v165 = v7;
    v158 = a5;
    v71 = (*(_QWORD *)(v44 + v45 + 48) & v33 & v10) == 0;
    v157 = v33;
    n.m128i_i64[1] = v33 & v10;
    n.m128i_i64[0] = v45;
    if ( v71 )
    {
      v153.m128i_i64[0] = v10;
      result = sub_4012E0(a1, (_DWORD *)a2, a3, a3 + 1, a5, v45);
      if ( !(_DWORD)result )
      {
        result = sub_403F40(a1, (_QWORD *)a2, v154, v153.m128i_u64[0], 32, -1);
        if ( !(_DWORD)result )
          *(_DWORD *)a2 = 10;
      }
      goto LABEL_100;
    }
    v159 = v10;
    v155 = (__int64)v167;
    sub_4010A0((__int64)v167, a1, v68, v33 & v10, a5, v45);
    LODWORD(v72) = n.m128i_i32[0];
    v73 = n.m128i_i64[1];
    LODWORD(v74) = v157;
    LODWORD(v75) = v158;
    if ( v43 == 1 )
    {
      n.m128i_i64[0] = v157;
      if ( (v157 & (v159 ^ v7)) != 0 )
      {
        sub_51F050(
          a2,
          (int)a1,
          v158,
          n.m128i_i32[2],
          v158,
          v72,
          v153.m128i_i32[0],
          n.m128i_i32[2],
          v154,
          v155,
          v72,
          v159,
          v157,
          v158,
          v159,
          (void *)v160,
          (int)v161,
          v162[0],
          v162[1],
          (int)dest,
          v164[0],
          v164[1],
          v165[0],
          v166,
          v167[0].m128i_i32[0],
          v167[0].m128i_i32[2],
          v167[1].m128i_i32[0],
          v167[1].m128i_i32[2],
          v168[0],
          v168[2],
          v169[0],
          v170,
          v171);
        v125 = v153.m128i_i64[1];
        v126 = "MM_%llXh_%s";
        v127 = a1->m128i_i64[0];
        v128 = n.m128i_i64[0];
        v153.m128i_i64[1] = n.m128i_i64[0];
        *(_QWORD *)(v127 + n.m128i_i64[0] + 48) = v125;
        sub_3573A0((char **)(a1->m128i_i64[0] + v128));
        v129 = n.m128i_u64[1];
        v130 = a1->m128i_i64[0] + v153.m128i_i64[1];
        n.m128i_i64[0] = v153.m128i_i64[1];
        v131 = *(void **)(v130 + 24);
        if ( v131 )
        {
          *(_QWORD *)(v130 + 32) = 0;
          v153.m128i_i64[1] = v129;
          qfree(v131);
          *(_QWORD *)(v130 + 24) = 0;
          v132 = n.m128i_i64[0];
          *(_QWORD *)(v130 + 40) = 0;
          v129 = v153.m128i_u64[1];
          v130 = a1->m128i_i64[0] + v132;
        }
        v133 = *(_QWORD *)(v130 + 8);
        v134 = nullptr;
        v153.m128i_i64[1] = v133;
        if ( v133 )
        {
          n.m128i_i64[0] = v129;
          v151 = v133;
          v152 = (void *)qalloc_or_throw(v133, "MM_%llXh_%s");
          v126 = *(const char **)v130;
          v134 = v152;
          memcpy(v152, *(const void **)v130, v151);
          v129 = n.m128i_i64[0];
        }
        v135 = *(_QWORD *)(v130 + 32);
        v136 = nullptr;
        if ( v135 )
        {
          v149 = *(_QWORD *)(v130 + 32);
          n.m128i_i64[0] = v129;
          v136 = (void *)qalloc_or_throw(v149, v126);
          memcpy(v136, *(const void **)(v130 + 24), v135);
          v129 = n.m128i_i64[0];
        }
        v137 = *(_QWORD *)(v130 + 48);
        v138 = *(_QWORD *)(a2 + 152);
        v139 = *(_QWORD *)(a2 + 144);
        v172 = v137;
        if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v138 + 1) )
        {
          n.m128i_i64[1] = v129;
          n.m128i_i64[0] = v137;
          v148 = qvector_reserve(a2 + 144, v139, v138 + 1, 56);
          *(_QWORD *)(a2 + 144) = v148;
          v139 = v148;
          v129 = n.m128i_u64[1];
          v138 = *(_QWORD *)(a2 + 152);
          v137 = n.m128i_i64[0];
        }
        v140 = _mm_loadl_epi64((const __m128i *)&v153.m128i_u64[1]);
        v141 = v139 + 56 * v138;
        v142 = v154;
        *(__m128i *)(v141 + 8) = _mm_unpacklo_epi64(v140, v140);
        *(_QWORD *)(v141 + 48) = v137;
        *(_QWORD *)v141 = v134;
        *(_QWORD *)(v141 + 24) = v136;
        *(__m128i *)(v141 + 32) = _mm_unpacklo_epi64((__m128i)v135, (__m128i)v135);
        ++*(_QWORD *)(a2 + 152);
        result = sub_403F40(a1, (_QWORD *)a2, v142, v129, 32, -1);
        goto LABEL_87;
      }
      v107 = (const char *)a1;
      sub_51F050(
        a2,
        (int)a1,
        a3,
        n.m128i_i32[2],
        v158,
        v72,
        v153.m128i_i32[0],
        v153.m128i_i32[2],
        v154,
        v155,
        n.m128i_i32[0],
        n.m128i_i32[2],
        v157,
        v158,
        v159,
        (void *)v160,
        (int)v161,
        v162[0],
        v162[1],
        (int)dest,
        v164[0],
        v164[1],
        v165[0],
        v166,
        v167[0].m128i_i32[0],
        v167[0].m128i_i32[2],
        v167[1].m128i_i32[0],
        v167[1].m128i_i32[2],
        v168[0],
        v168[2],
        v169[0],
        v170,
        v171);
      v108 = v153.m128i_i64[1];
      v89 = nullptr;
      *(_QWORD *)(a1->m128i_i64[0] + v153.m128i_i64[1] + 48) = n.m128i_i64[0] & v7;
      v109 = a1->m128i_i64[0] + v108;
      v91 = *(_QWORD *)(v109 + 8);
      if ( v91 )
      {
        v150 = (void *)qalloc_or_throw(*(_QWORD *)(v109 + 8), a1->m128i_i8);
        v107 = *(const char **)v109;
        v89 = v150;
        memcpy(v150, *(const void **)v109, v91);
      }
      v110 = *(_QWORD *)(v109 + 32);
      v93 = nullptr;
      v153.m128i_i64[1] = v110;
      if ( v110 )
      {
        v93 = (void *)qalloc_or_throw(v110, v107);
        memcpy(v93, *(const void **)(v109 + 24), v153.m128i_u64[1]);
      }
      v94 = *(_QWORD *)(v109 + 48);
      v95 = *(_QWORD *)(a2 + 152);
      v96 = *(_QWORD *)(a2 + 144);
      v172 = v94;
      if ( *(_QWORD *)(a2 + 160) >= (unsigned __int64)(v95 + 1) )
      {
LABEL_86:
        v97 = v96 + 56 * v95;
        *(_QWORD *)v97 = v89;
        *(_QWORD *)(v97 + 24) = v93;
        *(__m128i *)(v97 + 8) = _mm_unpacklo_epi64((__m128i)v91, (__m128i)v91);
        v98 = _mm_loadl_epi64((const __m128i *)&v153.m128i_u64[1]);
        *(_QWORD *)(v97 + 48) = v94;
        *(__m128i *)(v97 + 32) = _mm_unpacklo_epi64(v98, v98);
        ++*(_QWORD *)(a2 + 152);
        result = sub_401980((__int64)a1);
LABEL_87:
        if ( (_DWORD)result )
        {
          v112 = _mm_loadu_si128(a1);
          v113 = _mm_loadu_si128(a1 + 1);
          v114 = _mm_loadu_si128(a1 + 2);
          *a1 = _mm_load_si128(v167);
          v115 = a1[3].m128i_i64[0];
          si128 = _mm_load_si128(&v167[1]);
          v117 = *(_QWORD *)v169;
          v173 = v112;
          a1[1] = si128;
          v118 = _mm_load_si128((const __m128i *)v168);
          v176 = v115;
          a1[3].m128i_i64[0] = v117;
          *(_QWORD *)v169 = v115;
          v174 = v113;
          v175 = v114;
          a1[2] = v118;
          v167[0] = v112;
          v167[1] = v113;
          *(__m128i *)v168 = v114;
        }
        else
        {
          *(_DWORD *)a2 = 9;
        }
        if ( v167[1].m128i_i64[1] )
        {
          v153.m128i_i32[2] = result;
          qfree((void *)v167[1].m128i_i64[1]);
          result = v153.m128i_u32[2];
        }
        v99 = (void *)v167[0].m128i_i64[0];
        if ( v167[0].m128i_i64[0] )
        {
          v100 = v167[0].m128i_i64[1];
          v101 = v153.m128i_i64[0];
          v102 = v167[0].m128i_i64[0];
          v103 = result;
          if ( v167[0].m128i_i64[1] )
          {
            do
            {
              v104 = *(void **)(v102 + 24);
              if ( v104 )
              {
                *(_QWORD *)(v102 + 32) = 0;
                qfree(v104);
              }
              v105 = *(void **)v102;
              if ( *(_QWORD *)v102 )
              {
                *(_QWORD *)(v102 + 8) = 0;
                qfree(v105);
              }
              ++v101;
              v102 += 56;
            }
            while ( v100 != v101 );
            LODWORD(result) = v103;
          }
          v153.m128i_i32[0] = result;
          qfree(v99);
          result = v153.m128i_u32[0];
        }
LABEL_100:
        if ( dest )
        {
          v153.m128i_i32[0] = result;
          v164[0] = 0;
          qfree(dest);
          result = v153.m128i_u32[0];
        }
        if ( v161 )
        {
          v153.m128i_i32[0] = result;
          v162[0] = 0;
          qfree(v161);
          return v153.m128i_u32[0];
        }
        return result;
      }
      n.m128i_i64[0] = v94;
      v111 = qvector_reserve(a2 + 144, v96, v95 + 1, 56);
    }
    else
    {
      n.m128i_i64[1] = n.m128i_i64[0];
      n.m128i_i64[0] = v73;
      if ( a3 != v158 )
      {
        v76 = (const char *)a1;
        sub_51F050(
          a2,
          (int)a1,
          v158,
          v73,
          v158,
          v72,
          v153.m128i_i32[0],
          v153.m128i_i32[2],
          v154,
          v155,
          n.m128i_i32[0],
          n.m128i_i32[2],
          v157,
          v158,
          v159,
          (void *)v160,
          (int)v161,
          v162[0],
          v162[1],
          (int)dest,
          v164[0],
          v164[1],
          v165[0],
          v166,
          v167[0].m128i_i32[0],
          v167[0].m128i_i32[2],
          v167[1].m128i_i32[0],
          v167[1].m128i_i32[2],
          v168[0],
          v168[2],
          v169[0],
          v170,
          v171);
        LODWORD(v73) = n.m128i_i32[0];
        v77 = nullptr;
        v78 = n.m128i_i64[1];
        v74 = v157;
        *(_QWORD *)(a1->m128i_i64[0] + n.m128i_i64[1] + 48) = n.m128i_i64[0];
        v72 = a1->m128i_i64[0] + v78;
        v79 = v72;
        n.m128i_i64[0] = *(_QWORD *)(v72 + 8);
        if ( n.m128i_i64[0] )
        {
          n.m128i_i64[1] = v74;
          v144 = (void *)qalloc_or_throw(n.m128i_i64[0], a1->m128i_i8);
          v76 = *(const char **)v79;
          v77 = v144;
          memcpy(v144, *(const void **)v79, n.m128i_u64[0]);
          v74 = n.m128i_i64[1];
        }
        v157 = 0;
        v80 = *(_QWORD *)(v79 + 32);
        n.m128i_i64[1] = v80;
        if ( v80 )
        {
          v158 = v74;
          v145 = (void *)qalloc_or_throw(v80, v76);
          v146 = *(const void **)(v79 + 24);
          v157 = (__int64)v145;
          memcpy(v145, v146, n.m128i_u64[1]);
          v74 = v158;
        }
        v75 = *(_QWORD *)(v79 + 48);
        v81 = *(_QWORD *)(a2 + 152);
        v82 = *(_QWORD *)(a2 + 144);
        v172 = v75;
        if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v81 + 1) )
        {
          v159 = v75;
          v158 = v74;
          v143 = qvector_reserve(a2 + 144, v82, v81 + 1, 56);
          *(_QWORD *)(a2 + 144) = v143;
          v82 = v143;
          v75 = v159;
          v81 = *(_QWORD *)(a2 + 152);
          LODWORD(v74) = v158;
        }
        v83 = _mm_loadl_epi64(&n);
        v84 = v157;
        v85 = v82 + 56 * v81;
        *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64(v83, v83);
        v86 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
        *(_QWORD *)v85 = v77;
        *(_QWORD *)(v85 + 24) = v84;
        *(_QWORD *)(v85 + 48) = v75;
        *(__m128i *)(v85 + 32) = _mm_unpacklo_epi64(v86, v86);
        ++*(_QWORD *)(a2 + 152);
      }
      v87 = (const char *)a1;
      sub_51F050(
        a2,
        (int)a1,
        a3,
        v73,
        v75,
        v72,
        v153.m128i_i32[0],
        v153.m128i_i32[2],
        v154,
        v155,
        v74,
        n.m128i_i32[2],
        v157,
        v158,
        v159,
        (void *)v160,
        (int)v161,
        v162[0],
        v162[1],
        (int)dest,
        v164[0],
        v164[1],
        v165[0],
        v166,
        v167[0].m128i_i32[0],
        v167[0].m128i_i32[2],
        v167[1].m128i_i32[0],
        v167[1].m128i_i32[2],
        v168[0],
        v168[2],
        v169[0],
        v170,
        v171);
      v88 = v153.m128i_i64[1];
      v89 = nullptr;
      *(_QWORD *)(a1->m128i_i64[0] + v153.m128i_i64[1] + 48) = n.m128i_i64[0] & v7;
      v90 = v88 + a1->m128i_i64[0];
      v91 = *(_QWORD *)(v90 + 8);
      if ( v91 )
      {
        v124 = (void *)qalloc_or_throw(*(_QWORD *)(v90 + 8), a1->m128i_i8);
        v87 = *(const char **)v90;
        v89 = v124;
        memcpy(v124, *(const void **)v90, v91);
      }
      v92 = *(_QWORD *)(v90 + 32);
      v93 = nullptr;
      v153.m128i_i64[1] = v92;
      if ( v92 )
      {
        v93 = (void *)qalloc_or_throw(v92, v87);
        memcpy(v93, *(const void **)(v90 + 24), v153.m128i_u64[1]);
      }
      v94 = *(_QWORD *)(v90 + 48);
      v95 = *(_QWORD *)(a2 + 152);
      v96 = *(_QWORD *)(a2 + 144);
      v172 = v94;
      if ( *(_QWORD *)(a2 + 160) >= (unsigned __int64)(v95 + 1) )
        goto LABEL_86;
      n.m128i_i64[0] = v94;
      v111 = qvector_reserve(a2 + 144, v96, v95 + 1, 56);
    }
    *(_QWORD *)(a2 + 144) = v111;
    v96 = v111;
    v94 = n.m128i_i64[0];
    v95 = *(_QWORD *)(a2 + 152);
    goto LABEL_86;
  }
  if ( v43 != 1 || v7 == v10 )
  {
    v48 = (const char *)a1;
    v20 = nullptr;
    sub_51F050(
      a2,
      (int)a1,
      a3,
      v47,
      a5,
      v45,
      v153.m128i_i32[0],
      v153.m128i_i32[2],
      v154,
      v155,
      n.m128i_i32[0],
      n.m128i_i32[2],
      v157,
      v158,
      v159,
      (void *)v160,
      (int)v161,
      v162[0],
      v162[1],
      (int)dest,
      v164[0],
      v164[1],
      v165[0],
      v166,
      v167[0].m128i_i32[0],
      v167[0].m128i_i32[2],
      v167[1].m128i_i32[0],
      v167[1].m128i_i32[2],
      v168[0],
      v168[2],
      v169[0],
      v170,
      v171);
    *(_QWORD *)(a1->m128i_i64[0] + 56 * a3 + 48) = v7;
    v49 = a1->m128i_i64[0] + 56 * a3;
    v22 = *(_QWORD *)(v49 + 8);
    v50 = v49;
    if ( v22 )
    {
      v106 = (void *)qalloc_or_throw(*(_QWORD *)(v49 + 8), a1->m128i_i8);
      v48 = *(const char **)v50;
      v20 = v106;
      memcpy(v106, *(const void **)v50, v22);
    }
    v24 = *(_QWORD *)(v50 + 32);
    v25 = nullptr;
    if ( v24 )
    {
      v25 = (void *)qalloc_or_throw(*(_QWORD *)(v50 + 32), v48);
      memcpy(v25, *(const void **)(v50 + 24), v24);
    }
    v26 = *(_QWORD *)(v50 + 48);
    v27 = *(_QWORD *)(a2 + 152);
    v28 = *(_QWORD *)(a2 + 144);
    v172 = v26;
    if ( *(_QWORD *)(a2 + 160) >= (unsigned __int64)(v27 + 1) )
      goto LABEL_15;
    goto LABEL_32;
  }
  memset(v167, 0, sizeof(v167));
  v155 = (__int64)v167;
  *(_OWORD *)v168 = 0;
  if ( v46 != v167 )
  {
    v51 = v46->m128i_i64[1];
    if ( v51 )
    {
      v153.m128i_i64[0] = v51 - 1;
      if ( v51 != 1 )
      {
        v147 = (const void *)v46->m128i_i64[0];
        n.m128i_i64[0] = 56 * a5;
        v154 = v10;
        v153.m128i_i64[1] = a5;
        v167[0].m128i_i64[0] = qvector_reserve(v155, 0, v51, 1);
        v167[0].m128i_i64[1] = v51;
        memmove((void *)v167[0].m128i_i64[0], v147, v153.m128i_u64[0]);
        LODWORD(v45) = n.m128i_i32[0];
        LODWORD(v10) = v154;
        LODWORD(a5) = v153.m128i_i32[2];
        *(_BYTE *)(v167[0].m128i_i64[0] + v51 - 1) = 0;
      }
    }
  }
  sub_51F050(
    a2,
    (int)a1,
    a5,
    v47,
    a5,
    v45,
    v45,
    v10,
    v154,
    v155,
    n.m128i_i32[0],
    n.m128i_i32[2],
    v157,
    v158,
    v159,
    (void *)v160,
    (int)v161,
    v162[0],
    v162[1],
    (int)dest,
    v164[0],
    v164[1],
    v165[0],
    v166,
    v167[0].m128i_i32[0],
    v167[0].m128i_i32[2],
    v167[1].m128i_i32[0],
    v167[1].m128i_i32[2],
    v168[0],
    v168[2],
    v7,
    v170,
    v171);
  v52 = "MM_%llXh_%s";
  sub_3573A0((char **)(a1->m128i_i64[0] + v153.m128i_i64[0]));
  v55 = a1->m128i_i64[0] + v153.m128i_i64[0];
  v56 = nullptr;
  v57 = *(_QWORD *)(v55 + 8);
  v58 = v153.m128i_i64[1];
  v59 = v55;
  if ( v57 )
  {
    v122 = *(_QWORD *)(v55 + 8);
    v153.m128i_i64[0] = v153.m128i_i64[1];
    v123 = (void *)qalloc_or_throw(v122, "MM_%llXh_%s", v53, v54);
    v52 = *(const char **)v59;
    v56 = v123;
    memcpy(v123, *(const void **)v59, v57);
    v58 = v153.m128i_i64[1];
  }
  v60 = *(_QWORD *)(v59 + 32);
  v61 = nullptr;
  v153.m128i_i64[0] = v60;
  if ( v60 )
  {
    v153.m128i_i64[1] = v58;
    v61 = (void *)qalloc_or_throw(v60, v52);
    memcpy(v61, *(const void **)(v59 + 24), v153.m128i_u64[0]);
    v58 = v153.m128i_i64[1];
  }
  v62 = *(_QWORD *)(v59 + 48);
  v63 = *(_QWORD *)(a2 + 152);
  v64 = *(_QWORD *)(a2 + 144);
  v172 = v62;
  if ( *(_QWORD *)(a2 + 160) < (unsigned __int64)(v63 + 1) )
  {
    v154 = v58;
    v153.m128i_i64[1] = v62;
    v121 = qvector_reserve(a2 + 144, v64, v63 + 1, 56);
    *(_QWORD *)(a2 + 144) = v121;
    v64 = v121;
    v58 = v154;
    v63 = *(_QWORD *)(a2 + 152);
    v62 = v153.m128i_i64[1];
  }
  v65 = v64 + 56 * v63;
  v66 = v155;
  *(__m128i *)(v65 + 8) = _mm_unpacklo_epi64((__m128i)v57, (__m128i)v57);
  v67 = _mm_loadl_epi64(&v153);
  *(_QWORD *)(v65 + 48) = v62;
  *(_QWORD *)v65 = v56;
  *(_QWORD *)(v65 + 24) = v61;
  *(__m128i *)(v65 + 32) = _mm_unpacklo_epi64(v67, v67);
  ++*(_QWORD *)(a2 + 152);
  result = sub_403F40(a1, (_QWORD *)a2, v66, v58, 32, -1);
  if ( !(_DWORD)result )
    *(_DWORD *)a2 = 9;
  if ( v167[1].m128i_i64[1] )
  {
    v153.m128i_i32[0] = result;
    *(_QWORD *)v168 = 0;
    qfree((void *)v167[1].m128i_i64[1]);
    result = v153.m128i_u32[0];
  }
  if ( v167[0].m128i_i64[0] )
  {
    v153.m128i_i32[0] = result;
    v167[0].m128i_i64[1] = 0;
    qfree((void *)v167[0].m128i_i64[0]);
    return v153.m128i_u32[0];
  }
  return result;
}

