__int64 __fastcall sub_FB9A0(const __m128i *a1, __int64 a2)
{
  _QWORD *exception; // rdi
  _QWORD *v3; // rdi
  _QWORD *v4; // rdi
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // rax
  __m128i *v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  int v16; // edx
  unsigned __int64 v17; // rax
  unsigned int v18; // esi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  __int64 v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 m128i_i64; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rbp
  __int64 v31; // rdi
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // r13
  int v34; // r14d
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r13
  int v39; // eax
  int *v40; // r12
  int v41; // esi
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // r8
  int v45; // edx
  _DWORD *v46; // rcx
  _DWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // edx
  __int64 v51; // rcx
  int v52; // r14d
  int v53; // ebp
  __int64 v54; // rax
  int v55; // r12d
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // r12
  __int64 v58; // rbp
  __int64 v59; // r12
  __int64 v60; // rbp
  unsigned __int64 v61; // rax
  __int64 *v62; // r13
  int v63; // r13d
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rcx
  __int64 v68; // r13
  __int64 v69; // rax
  int v70; // eax
  int v71; // r13d
  __int64 v72; // rdi
  __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // rcx
  char v78; // al
  __int64 v79; // rax
  bool v80; // zf
  __int64 v81; // rsi
  __int32 v82; // r8d
  __int64 v83; // rdx
  __int32 v84; // r12d
  int v85; // r8d
  int v86; // ecx
  char v87; // al
  __int64 v88; // r12
  __int64 v89; // r8
  _DWORD *v90; // rcx
  _DWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  int **v94; // rax
  __int64 v95; // rdx
  _DWORD *v96; // rax
  __int64 v97; // rsi
  _DWORD *v98; // rdx
  __m128i *v99; // rbp
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rsi
  _QWORD *v104; // r13
  __int64 v105; // rdi
  __int64 v106; // rdx
  int *v107; // rax
  int *v108; // r12
  __int64 v109; // r8
  __int64 *v110; // r14
  unsigned __int64 v111; // rsi
  int v112; // r12d
  unsigned __int64 v113; // rbp
  int v114; // r12d
  unsigned __int64 v115; // r13
  unsigned __int64 *v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rbp
  unsigned __int64 *v119; // rdx
  __int64 v120; // rax
  __m128i v121; // xmm0
  __int64 v122; // rcx
  __int64 *v123; // r12
  __int64 v124; // rax
  __int64 *v125; // rdi
  __int64 *v126; // rdi
  int v127; // r13d
  __int64 v128; // r12
  _QWORD *v129; // r14
  __int64 v130; // rdi
  int v131; // eax
  __int64 v132; // rdx
  _QWORD *v133; // r12
  __int64 v134; // rdi
  char v135; // al
  unsigned __int64 v136; // rdx
  int v137; // ebp
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned int v140; // r8d
  __int64 v141; // rsi
  unsigned int *v142; // rdi
  __int64 v143; // rdx
  __int64 v144; // r8
  char v145; // al
  __int64 v146; // rdx
  char v147; // cl
  unsigned __int64 *v148; // rax
  __int64 v149; // rax
  char v150; // cl
  __int64 v151; // rax
  __m128i v152; // xmm0
  char v153; // al
  unsigned int v154; // eax
  _QWORD *v155; // rdx
  __int64 v156; // rax
  __int64 v157; // rax
  int v158; // esi
  __int64 v159; // rax
  __int64 v160; // rdx
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  __m128i v164; // xmm0
  char v165; // al
  int v166; // eax
  unsigned int v167; // eax
  int *v168; // r13
  int *i; // rbp
  int v170; // r14d
  int *v171; // r13
  int *j; // rbp
  int v173; // r14d
  int v174; // eax
  __int64 v175; // rax
  __int64 v176; // rax
  int v177; // eax
  __int32 v178; // eax
  __int64 v179; // rax
  __int32 v180; // r12d
  __int64 v181; // rsi
  __int64 v182; // rdx
  char v183; // al
  int v184; // eax
  __int64 v185; // rax
  char v186; // al
  __int64 v187; // rcx
  __int32 v188; // eax
  int v189; // eax
  int v190; // eax
  __int32 v191; // eax
  int v192; // eax
  int v193; // eax
  __int32 v194; // eax
  int v195; // eax
  __m128i v196; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 *v197; // [rsp+10h] [rbp-E8h]
  __int64 v198; // [rsp+18h] [rbp-E0h]
  __int64 *v199; // [rsp+20h] [rbp-D8h]
  int v200; // [rsp+2Ch] [rbp-CCh]
  __int64 v201; // [rsp+30h] [rbp-C8h]
  char v202; // [rsp+3Bh] [rbp-BDh]
  int v203; // [rsp+3Ch] [rbp-BCh]
  __int64 v204; // [rsp+40h] [rbp-B8h]
  __int64 v205; // [rsp+48h] [rbp-B0h]
  __int64 v206; // [rsp+50h] [rbp-A8h]
  int v207; // [rsp+58h] [rbp-A0h]
  unsigned int v208; // [rsp+5Ch] [rbp-9Ch]
  int v209; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v210; // [rsp+64h] [rbp-94h] BYREF
  unsigned __int64 v211; // [rsp+68h] [rbp-90h] BYREF
  __int64 v212[2]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v213; // [rsp+80h] [rbp-78h] BYREF
  __int64 v214; // [rsp+88h] [rbp-70h]
  _BYTE v215[24]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v216; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v217; // [rsp+B8h] [rbp-40h]

  v217 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v6 = a1[9].m128i_i64[0];
  v8 = a1[2].m128i_i64[0];
  v201 = *(_QWORD *)(v6 + 112);
  if ( (unsigned __int8)sub_120560(v8, 0) )
    return 0;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_DWORD *)(v9 + 20);
  v11 = v10;
  v203 = v10;
  LOBYTE(v11) = v10 & 0x7F;
  if ( v11 == 96 )
    return 0;
  if ( v10 == 80 )
    return 0;
  if ( *(_DWORD *)(v9 + 284) )
    return 0;
  v200 = *(_DWORD *)(v9 + 280) & 4;
  if ( v200 )
  {
    if ( (v10 & 0xFFFFFFF0) != 0xD0 && (v10 & 0xFFFFFFF0) != 0x40 )
      return 0;
  }
  if ( (unsigned __int8)sub_2B7C10(a1->m128i_i64[1], *(_QWORD *)(a1[2].m128i_i64[0] + 24)) )
    return 0;
  v12 = *(_QWORD *)v9;
  v202 = 0;
  if ( v12 != -1 )
  {
    if ( (v203 & 0xFFFFFFF0) != 0x40 && (v203 & 0xFFFFFFF0) != 0xD0 )
    {
      v13 = (__m128i *)a1[3].m128i_i64[0];
      v14 = *(_QWORD *)(v9 + 32);
      v213 = v12;
      *(_QWORD *)v215 = &v213;
      v15 = sub_FB6C0(v13, &v213, (__int64 **)v215);
      v16 = *(_DWORD *)(v15 + 56);
      v17 = v15 + 24;
      if ( (int)v14 >= v16 )
      {
        if ( v16 != -1 && !v13[1].m128i_i8[0] )
          goto LABEL_17;
      }
      else
      {
        v13[1].m128i_i8[0] = 1;
      }
      *(_DWORD *)(v17 + 32) = v14;
LABEL_17:
      v202 = 1;
      goto LABEL_18;
    }
    v202 = 0;
  }
LABEL_18:
  v18 = *(_DWORD *)(v9 + 20);
  if ( a1[8].m128i_i32[2] != v18 )
    sub_D1010((__int64)a1[4].m128i_i64, v18);
  v19 = a1[5].m128i_u64[0];
  v20 = a1[16].m128i_u64[0];
  *(_DWORD *)v215 = -1;
  if ( v19 >= v20 )
  {
    if ( v20 >= v19 )
      goto LABEL_29;
    v21 = a1[15].m128i_u64[1];
    v22 = a1[16].m128i_u64[1];
    v23 = (__int64)&a1[15].m128i_i64[1];
    if ( (unsigned __int64)v215 < v21 || (unsigned __int64)v215 >= v21 + 4 * v22 )
    {
      if ( v22 >= v19
        || (v176 = qvector_reserve(v23, v21, v19, 4),
            a1[15].m128i_i64[1] = v176,
            v21 = v176,
            v20 = a1[16].m128i_u64[0],
            v20 < v19) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v21 + 4 * v20++) = -1;
          if ( v19 == v20 )
            break;
          v21 = a1[15].m128i_u64[1];
        }
      }
    }
    else if ( v22 >= v19
           || (v179 = qvector_reserve(v23, v21, v19, 4),
               a1[15].m128i_i64[1] = v179,
               v21 = v179,
               v20 = a1[16].m128i_u64[0],
               v20 < v19) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v21 + 4 * v20++) = -1;
        if ( v19 == v20 )
          break;
        v21 = a1[15].m128i_u64[1];
      }
    }
  }
  a1[16].m128i_i64[0] = v19;
LABEL_29:
  v24 = a1[6].m128i_u64[1];
  v25 = a1[17].m128i_u64[1];
  *(_DWORD *)v215 = -1;
  if ( v24 >= v25 )
  {
    if ( v25 >= v24 )
      goto LABEL_38;
    v26 = a1[17].m128i_u64[0];
    v27 = a1[18].m128i_u64[0];
    m128i_i64 = (__int64)a1[17].m128i_i64;
    if ( (unsigned __int64)v215 < v26 || (unsigned __int64)v215 >= v26 + 4 * v27 )
    {
      if ( v27 >= v24
        || (v175 = qvector_reserve(m128i_i64, v26, v24, 4),
            a1[17].m128i_i64[0] = v175,
            v26 = v175,
            v25 = a1[17].m128i_u64[1],
            v25 < v24) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v26 + 4 * v25++) = -1;
          if ( v24 == v25 )
            break;
          v26 = a1[17].m128i_u64[0];
        }
      }
    }
    else if ( v27 >= v24
           || (v185 = qvector_reserve(m128i_i64, v26, v24, 4),
               a1[17].m128i_i64[0] = v185,
               v26 = v185,
               v25 = a1[17].m128i_u64[1],
               v25 < v24) )
    {
      while ( 1 )
      {
        *(_DWORD *)(v26 + 4 * v25++) = -1;
        if ( v24 == v25 )
          break;
        v26 = a1[17].m128i_u64[0];
      }
    }
  }
  a1[17].m128i_i64[1] = v24;
LABEL_38:
  v29 = a1[20].m128i_u64[0];
  a1[13].m128i_i64[0] = 0;
  v196.m128i_i64[1] = (__int64)a1[20].m128i_i64;
  if ( !v29 )
  {
LABEL_214:
    a1[20].m128i_i64[1] = 0;
    goto LABEL_41;
  }
  v30 = *(_QWORD *)v29;
  if ( a1[20].m128i_i64[1] )
  {
    v123 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
    v124 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v124 & 2) != 0 )
    {
LABEL_213:
      *(_QWORD *)v29 = v30 & 3 | v29 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[20].m128i_u64[0],
                                                (__m128i)a1[20].m128i_u64[0]);
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      goto LABEL_214;
    }
    v125 = (__int64 *)v123[1];
    if ( (*(_BYTE *)v125 & 2) != 0 )
    {
      v126 = (__int64 *)v123[2];
      if ( (*(_BYTE *)v126 & 2) != 0 )
        goto LABEL_319;
    }
    else
    {
      sub_F56D0(v125);
      v126 = (__int64 *)v123[2];
      if ( (*(_BYTE *)v126 & 2) != 0 )
        goto LABEL_209;
    }
    sub_F56D0(v126);
LABEL_209:
    v124 = *v123;
    if ( (*v123 & 2) != 0 )
    {
LABEL_210:
      if ( v30 > 3 )
        qfree(v30 & 0xFFFFFFFFFFFFFFFCLL);
      v29 = a1[20].m128i_u64[0];
      v30 = *(_QWORD *)v29;
      goto LABEL_213;
    }
LABEL_319:
    *v123 = v124 | 2;
    goto LABEL_210;
  }
  *(_QWORD *)v29 = *(_QWORD *)v29 & 3LL | v29 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64((__m128i)a1[20].m128i_u64[0], (__m128i)a1[20].m128i_u64[0]);
  *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
  *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
LABEL_41:
  v31 = a1[18].m128i_i64[1];
  if ( v31 )
  {
    a1[19].m128i_i64[0] = 0;
    qfree(v31);
    a1[18].m128i_i64[1] = 0;
    a1[19].m128i_i64[1] = 0;
  }
  v32 = *(_QWORD *)(v9 + 32);
  LODWORD(v33) = v32;
  if ( !v32 )
    goto LABEL_63;
  v34 = 0;
  v35 = 0;
LABEL_45:
  v36 = 80 * v35;
  v37 = v36 + *(_QWORD *)(v9 + 24);
  v38 = v36;
  v39 = *(_DWORD *)(v37 + 56);
  v40 = (int *)(v37 + 56);
  if ( v39 != 2 )
  {
    if ( v39 != 1 )
      goto LABEL_47;
LABEL_194:
    v196.m128i_i64[0] = *((_QWORD *)v40 + 1);
    sub_64190(&a1[12].m128i_i64[1], v34);
    v116 = (unsigned __int64 *)a1[20].m128i_i64[0];
    if ( !v116 )
    {
      v163 = qalloc();
      v164 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v163, (__m128i)(unsigned __int64)v163);
      if ( !v163 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v163 + 32) = 0;
      *(_OWORD *)(v163 + 16) = 0;
      *(__m128i *)(v163 + 8) = v164;
      *(_QWORD *)v163 = v163 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[20].m128i_i64[0] = v163;
      *(_QWORD *)v163 = v163 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v163 & 3LL;
      *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[20].m128i_u64[0],
                                                (__m128i)a1[20].m128i_u64[0]);
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      v116 = (unsigned __int64 *)a1[20].m128i_i64[0];
LABEL_196:
      v197 = v116;
      v117 = qalloc();
      v118 = v117;
      if ( !v117 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v119 = v197;
      *(_QWORD *)(v117 + 32) = 0;
      *(_OWORD *)v117 = 0;
      *(_OWORD *)(v117 + 16) = 0;
      v120 = v196.m128i_i64[0];
      *(_QWORD *)v118 = (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v118 + 24) = v120;
      v121 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v118 = (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v118 + 8) = _mm_unpacklo_epi64(v121, v121);
      if ( v119 != (unsigned __int64 *)a1[20].m128i_i64[0] )
      {
        v119[1] = v118;
        v122 = a1[20].m128i_i64[0];
        if ( v119 == *(unsigned __int64 **)(v122 + 8) )
          goto LABEL_278;
        goto LABEL_199;
      }
      goto LABEL_313;
    }
    if ( !a1[20].m128i_i64[1] )
      goto LABEL_196;
    if ( (*(_BYTE *)(*v116 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
      v147 = 1;
LABEL_274:
      LOBYTE(v198) = v147;
      v197 = v116;
      v149 = qalloc();
      v118 = v149;
      if ( !v149 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v119 = v197;
      v150 = v198;
      *(_QWORD *)(v149 + 32) = 0;
      *(_OWORD *)v149 = 0;
      *(_OWORD *)(v149 + 16) = 0;
      v151 = v196.m128i_i64[0];
      *(_QWORD *)v118 = (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v118 + 24) = v151;
      v152 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v118 = (unsigned __int64)v119 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v118 + 8) = _mm_unpacklo_epi64(v152, v152);
      if ( (unsigned __int64 *)a1[20].m128i_i64[0] != v119 )
      {
        if ( v150 )
        {
          v119[1] = v118;
          v122 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v122 + 8) == v119 )
LABEL_278:
            *(_QWORD *)(v122 + 8) = v118;
        }
        else
        {
          v119[2] = v118;
          v187 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v187 + 16) == v119 )
            *(_QWORD *)(v187 + 16) = v118;
        }
LABEL_199:
        sub_D7DE0((_QWORD *)v196.m128i_i64[1], (__int64 *)v118);
LABEL_200:
        ++a1[20].m128i_i64[1];
        goto LABEL_201;
      }
LABEL_313:
      *v119 = v118 & 0xFFFFFFFFFFFFFFFCLL | *v119 & 3;
      *(_QWORD *)(a1[20].m128i_i64[0] + 8) = v118;
      *(_QWORD *)(a1[20].m128i_i64[0] + 16) = v118;
      v162 = *(_QWORD *)v118 & 2LL;
      *(_QWORD *)v118 &= ~1uLL;
      *(_QWORD *)v118 = v162 | a1[20].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_200;
    }
    v116 = (unsigned __int64 *)(*v116 & 0xFFFFFFFFFFFFFFFCLL);
    v147 = 1;
    while ( 1 )
    {
      if ( v196.m128i_i64[0] >= (__int64)v116[3] )
      {
        if ( v196.m128i_i64[0] <= (__int64)v116[3] )
        {
          if ( !v116 )
            goto LABEL_274;
          v118 = (__int64)v116;
LABEL_201:
          *(_DWORD *)(v118 + 32) = v34;
          *(__m128i *)v215 = _mm_unpacklo_epi64(
                               _mm_loadl_epi64(&v196),
                               (__m128i)(unsigned __int64)*(int *)(*(_QWORD *)(v9 + 24) + v38 + 4));
          sub_316BB0(&a1[18].m128i_u64[1], v215);
LABEL_61:
          if ( ((*v40 - 2) & 0xFFFFFFFD) == 0 )
LABEL_156:
            sub_64190(&a1[13].m128i_i64[1], v34);
          v32 = *(_QWORD *)(v9 + 32);
          v35 = ++v34;
          LODWORD(v33) = v32;
          if ( v34 >= v32 )
            goto LABEL_63;
          goto LABEL_45;
        }
        v148 = (unsigned __int64 *)v116[2];
        v147 = 0;
      }
      else
      {
        v148 = (unsigned __int64 *)v116[1];
        v147 = 1;
      }
      if ( (*(_BYTE *)v148 & 2) != 0 )
        goto LABEL_274;
      v116 = v148;
    }
  }
  v94 = *(int ***)(v37 + 64);
  if ( v94[1] != (int *)&byte_1 )
    goto LABEL_152;
  v40 = *v94;
  v39 = **v94;
  if ( v39 == 1 )
    goto LABEL_194;
  if ( v39 != 2 )
  {
LABEL_47:
    if ( (unsigned int)(v39 - 3) <= 1 )
      goto LABEL_48;
    goto LABEL_159;
  }
LABEL_152:
  v95 = *((_QWORD *)v40 + 1);
  v96 = *(_DWORD **)v95;
  v97 = *(_QWORD *)v95 + 24LL * *(_QWORD *)(v95 + 8);
  if ( *(_QWORD *)v95 == v97 )
  {
LABEL_159:
    if ( !under_debugger )
      sub_383060(52134);
LABEL_469:
    BUG();
  }
  v98 = *(_DWORD **)v95;
  do
  {
    if ( *v98 == 1 )
      goto LABEL_156;
    v98 += 6;
  }
  while ( (_DWORD *)v97 != v98 );
  while ( (unsigned int)(*v96 - 3) > 1 )
  {
    v96 += 6;
    if ( (_DWORD *)v97 == v96 )
      goto LABEL_159;
  }
LABEL_48:
  memset(v215, 0, sizeof(v215));
  if ( (unsigned __int8)sub_D2BA0((__int64)a1[4].m128i_i64, (__int64)v215, v40, *(unsigned int *)(v37 + 4), 1) )
  {
    v41 = 0;
    v42 = 0;
    if ( !*(_QWORD *)&v215[8] )
    {
LABEL_59:
      if ( *(_QWORD *)v215 )
      {
        *(_QWORD *)&v215[8] = 0;
        qfree(*(__int64 *)v215);
      }
      goto LABEL_61;
    }
    while ( 2 )
    {
      v43 = *(_QWORD *)v215;
      v44 = a1[4].m128i_i64[1];
      v45 = *(_DWORD *)(*(_QWORD *)v215 + 4 * v42);
      v46 = (_DWORD *)(v44 + 4 * a1[5].m128i_i64[0]);
      if ( (_DWORD *)v44 == v46 )
        goto LABEL_141;
      v47 = (_DWORD *)a1[4].m128i_i64[1];
      while ( v45 != *v47 )
      {
        if ( v46 == ++v47 )
          goto LABEL_141;
      }
      if ( v46 == v47 || (v48 = ((__int64)v47 - v44) >> 2, v49 = (int)v48, (_DWORD)v48 == -1) )
      {
LABEL_141:
        v89 = a1[6].m128i_i64[0];
        v90 = (_DWORD *)(v89 + 4 * a1[6].m128i_i64[1]);
        if ( (_DWORD *)v89 == v90 )
          goto LABEL_191;
        v91 = (_DWORD *)a1[6].m128i_i64[0];
        while ( v45 != *v91 )
        {
          if ( v90 == ++v91 )
            goto LABEL_191;
        }
        if ( v90 == v91 )
          goto LABEL_191;
        v92 = ((__int64)v91 - v89) >> 2;
        v49 = (int)v92;
        if ( (_DWORD)v92 == -1 )
          goto LABEL_191;
        v50 = a1[21].m128i_i32[0] + 1;
        if ( a1[4].m128i_i32[0] == 3 )
          goto LABEL_161;
        a1[21].m128i_i32[0] = v50;
        v93 = 4LL * (int)v92;
      }
      else
      {
        v50 = a1[21].m128i_i32[0] + 1;
        if ( a1[4].m128i_i32[0] != 3 )
        {
          v51 = a1[15].m128i_i64[1];
          a1[21].m128i_i32[0] = v50;
          *(_DWORD *)(v51 + 4LL * (int)v48) = v34;
          goto LABEL_58;
        }
LABEL_161:
        a1[21].m128i_i32[0] = v50;
        v93 = 4 * v49;
        *(_DWORD *)(a1[15].m128i_i64[1] + 4 * v49) = v34;
      }
      *(_DWORD *)(a1[17].m128i_i64[0] + v93) = v34;
LABEL_58:
      v42 = ++v41;
      if ( (unsigned __int64)v41 >= *(_QWORD *)&v215[8] )
        goto LABEL_59;
      continue;
    }
  }
  v43 = *(_QWORD *)v215;
LABEL_191:
  if ( v43 )
  {
    *(_QWORD *)&v215[8] = 0;
    qfree(v43);
  }
  v32 = *(_QWORD *)(v9 + 32);
  LODWORD(v33) = v32;
LABEL_63:
  LOBYTE(v197) = (v203 & 0xFFFFFFF0) == 64 || (v203 & 0xFFFFFFF0) == 208;
  if ( !(_BYTE)v197 )
  {
    v52 = 0;
LABEL_65:
    if ( !v202 && (*(_BYTE *)(v9 + 281) & 1) == 0 )
    {
      v53 = v32 - 1;
      v196.m128i_i64[0] = (__int64)v215;
      if ( v52 > (int)v32 - 1 )
      {
        v53 = v32;
        v33 = (int)v32;
      }
      else
      {
        while ( 1 )
        {
          v33 = v53;
          v54 = *(_QWORD *)(v9 + 24) + 80LL * v53;
          v214 = 0;
          v213 = -1;
          if ( *(_BYTE *)v54 == 1 )
          {
            v136 = *(int *)(v54 + 8);
            LOBYTE(v214) = 1;
            v213 = v136;
            HIDWORD(v214) = *(_DWORD *)(v54 + 4);
          }
          else
          {
            if ( *(_BYTE *)v54 != 5 )
              goto LABEL_70;
            v132 = *(_QWORD *)(v54 + 8);
            LOBYTE(v214) = 5;
            v213 = *(_QWORD *)(v132 + 8);
            HIDWORD(v214) = *(_DWORD *)(v54 + 4);
          }
          sub_32F640(v196.m128i_i64[0], &v213, a1->m128i_i64[1]);
          v133 = (_QWORD *)a1[3].m128i_i64[1];
          if ( !(unsigned __int8)sub_64820(v196.m128i_i64[0], v133) )
            break;
          v135 = sub_317F40(v133 + 2, &v215[16]);
          v134 = *(_QWORD *)&v215[16];
          if ( !v135 )
            goto LABEL_231;
          if ( *(_QWORD *)&v215[16] )
          {
            v216 = 0;
            qfree(*(__int64 *)&v215[16]);
          }
          qfree(*(__int64 *)v215);
          if ( v52 > v53 - 1 )
            goto LABEL_71;
          --v53;
        }
        v134 = *(_QWORD *)&v215[16];
LABEL_231:
        if ( v134 )
        {
          v216 = 0;
          qfree(v134);
        }
        qfree(*(__int64 *)v215);
LABEL_70:
        v33 = ++v53;
LABEL_71:
        v32 = *(_QWORD *)(v9 + 32);
      }
      if ( v32 != v33 )
      {
        v55 = v32 - v53;
        sub_82440((__int64 *)(v9 + 24), v33);
        if ( v53 < *(_DWORD *)(v9 + 8) )
          *(_DWORD *)(v9 + 8) = v53;
        a1[21].m128i_i32[2] += v55;
        v33 = *(_QWORD *)(v9 + 32);
      }
    }
    goto LABEL_76;
  }
  if ( !v202 || (v52 = 0, v200) )
  {
    v52 = *(_DWORD *)(v9 + 8);
    goto LABEL_65;
  }
LABEL_76:
  v212[0] = 0;
  v212[1] = 0;
  v199 = v212;
  sub_63E80(v212, 0, v33);
  v56 = *(_QWORD *)(v9 + 32);
  v57 = v52;
  if ( v52 >= v56 )
    goto LABEL_172;
  v196.m128i_i64[0] = (__int64)v215;
  while ( 1 )
  {
    v58 = *(_QWORD *)(v9 + 24);
    v214 = 0;
    v213 = -1;
    v59 = 80 * v57;
    v60 = v59 + v58;
    if ( *(_BYTE *)v60 == 1 )
    {
      v61 = *(int *)(v60 + 8);
      LOBYTE(v214) = 1;
      v213 = v61;
      HIDWORD(v214) = *(_DWORD *)(v60 + 4);
    }
    else
    {
      if ( *(_BYTE *)v60 != 5 )
        goto LABEL_79;
      v69 = *(_QWORD *)(v60 + 8);
      LOBYTE(v214) = 5;
      v213 = *(_QWORD *)(v69 + 8);
      HIDWORD(v214) = *(_DWORD *)(v60 + 4);
    }
    v196.m128i_i8[8] = *(_BYTE *)v60 & 0xFB;
    if ( v196.m128i_i8[8] != 1 )
    {
      if ( !under_debugger )
        sub_383060(52030);
      goto LABEL_469;
    }
    if ( (_BYTE)v197 && *(_DWORD *)(v9 + 8) > v52 )
      goto LABEL_79;
    sub_32F640(v196.m128i_i64[0], &v213, a1->m128i_i64[1]);
    v62 = (__int64 *)a1[3].m128i_i64[1];
    sub_64700((__int64 *)v196.m128i_i64[0], v62);
    sub_3180C0(&v215[16], v62 + 2);
    if ( !(unsigned __int8)sub_64880(v196.m128i_i64[0]) || v216 )
    {
      if ( (unsigned __int8)sub_64880(v196.m128i_i64[0]) )
      {
        v64 = a1->m128i_i64[1];
        v196.m128i_i8[8] = 5;
        v65 = *(_QWORD *)(v64 + 1496);
        v66 = *(_QWORD *)(v64 + 1440);
        v67 = *(_QWORD *)(*(_QWORD *)(v65 + 24) + 16LL);
        v68 = v67 & (**(_QWORD **)&v215[16] - v66);
        v198 = v67
             & (*(_QWORD *)(*(_QWORD *)&v215[16] + 16 * v216 - 8)
              + *(_QWORD *)(*(_QWORD *)&v215[16] + 16 * v216 - 16)
              - v66);
      }
      else
      {
        LODWORD(v68) = sub_64960(v196.m128i_i64[0], 0);
        v198 = (int)(sub_64C00(v196.m128i_i64[0]) + 1);
        v65 = *(_QWORD *)(a1->m128i_i64[1] + 1496);
      }
      if ( (unsigned __int8)sub_11CC50(v60, v65, 0) )
      {
        if ( (_BYTE)v214 != v196.m128i_i8[8] )
          sub_F5300();
        v63 = v213 + HIDWORD(v214) - v198;
      }
      else
      {
        if ( (_BYTE)v214 != v196.m128i_i8[8] )
          sub_F5300();
        v63 = v68 - v213;
      }
    }
    else
    {
      v63 = *(_DWORD *)(v60 + 4);
    }
    if ( *(_QWORD *)&v215[16] )
    {
      v216 = 0;
      qfree(*(__int64 *)&v215[16]);
    }
    qfree(*(__int64 *)v215);
    if ( v63 < 0 )
    {
      if ( !under_debugger )
        sub_383060(52031);
      goto LABEL_469;
    }
    if ( *(_DWORD *)(v60 + 4) == v63 )
      goto LABEL_79;
    if ( !v63 )
      break;
    if ( (get_tinfo_property() & 0x2F) == 0xD
      || (get_tinfo_property() & 0xF) == 9
      || (*(_BYTE *)(v9 + 281) & 1) != 0
      && *(_DWORD *)(v60 + 4) > *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL) )
    {
      goto LABEL_79;
    }
    v70 = round_up_power2();
    v71 = v70;
    if ( *(_DWORD *)(v60 + 4) <= v70 )
      goto LABEL_79;
    v72 = (unsigned int)v70;
    v73 = *(_QWORD *)(a1->m128i_i64[1] + 1504);
    LODWORD(v198) = a1[8].m128i_i32[2];
    v196.m128i_i32[2] = *(_DWORD *)(v73 + 80);
    v74 = round_down_power2();
    v76 = (unsigned int)v198;
    v77 = (unsigned int)v74;
    if ( v74 > 1 )
    {
      while ( 1 )
      {
        v75 = (unsigned int)(v71 >> 31);
        LODWORD(v75) = v71 % (int)v77;
        if ( !(v71 % (int)v77) )
          break;
        v77 = (unsigned int)((int)v77 >> 1);
        if ( (_DWORD)v77 == 1 )
          goto LABEL_120;
      }
    }
    if ( ((unsigned int)v77 & ((_DWORD)v77 - 1)) != 0 )
      sub_F53F0(v72, 2, v75, v77, (unsigned int)v198);
LABEL_120:
    LODWORD(v198) = 2 * v196.m128i_i32[2];
    if ( 2 * v196.m128i_i32[2] >= (int)v77 )
    {
      if ( v196.m128i_i32[2] <= (int)v77 )
      {
        if ( (unsigned int)v76 <= 0x10 )
          goto LABEL_336;
        goto LABEL_298;
      }
      if ( (unsigned int)v76 > 0x10 )
        goto LABEL_123;
      goto LABEL_296;
    }
    if ( (unsigned int)v76 > 0x10 )
    {
      if ( (_DWORD)v76 == 176 || (_DWORD)v76 == 256 )
      {
        v77 = (unsigned int)v198;
        if ( v196.m128i_i32[2] <= (int)v198 )
          v77 = v196.m128i_u32[2];
        goto LABEL_127;
      }
      goto LABEL_292;
    }
    LODWORD(v205) = v77;
    LODWORD(v204) = v76;
    v174 = getinf();
    if ( v174 != 176 && v174 != 256 )
    {
      LODWORD(v76) = v204;
      LODWORD(v77) = v205;
LABEL_292:
      v72 = 67;
      LODWORD(v205) = v77;
      LODWORD(v204) = v76;
      v153 = getinf_flag();
      v77 = (unsigned int)v205;
      if ( v153 )
        goto LABEL_127;
      LODWORD(v77) = v198;
      if ( v196.m128i_i32[2] <= (int)v198 )
      {
        if ( (unsigned int)v204 > 0x10 )
        {
          LODWORD(v77) = v198;
LABEL_125:
          v72 = 67;
          LODWORD(v204) = v77;
          v78 = getinf_flag();
          v77 = (unsigned int)v204;
          if ( v78 )
            goto LABEL_127;
LABEL_126:
          v77 = v196.m128i_u32[2];
          goto LABEL_127;
        }
LABEL_335:
        LODWORD(v77) = v198;
LABEL_336:
        v72 = 99;
        LODWORD(v204) = v77;
        v167 = getinf();
        LODWORD(v77) = v204;
        v76 = v167;
LABEL_298:
        if ( (_DWORD)v76 != 176 && (_DWORD)v76 != 256 )
          goto LABEL_125;
        goto LABEL_126;
      }
      if ( (unsigned int)v204 > 0x10 )
        goto LABEL_125;
      goto LABEL_295;
    }
    if ( v196.m128i_i32[2] <= (int)v198 )
      goto LABEL_335;
LABEL_295:
    LODWORD(v77) = v198;
LABEL_296:
    v72 = 99;
    LODWORD(v204) = v77;
    v154 = getinf();
    v77 = (unsigned int)v204;
    v76 = v154;
LABEL_123:
    if ( (_DWORD)v76 != 176 && (_DWORD)v76 != 256 )
      goto LABEL_125;
LABEL_127:
    v79 = *(_QWORD *)(v9 + 24);
    v80 = *(_DWORD *)(v79 + v59 + 56) == 1;
    v205 = v79 + v59;
    if ( !v80 )
    {
      v81 = *(_QWORD *)(v79 + v59 + 24);
      LODWORD(v205) = v77;
      v82 = a1[8].m128i_i32[2];
      v209 = 0;
      LODWORD(v204) = v82;
      get_tinfo_size();
      v84 = v209;
      v85 = v204;
      v86 = v205;
      if ( (v209 & (v209 - 1)) != 0 )
        sub_F53F0(&v209, v81, v83, (unsigned int)v205, (unsigned int)v204);
      if ( (int)v198 >= v209 )
      {
        if ( v196.m128i_i32[2] > v209 )
        {
          if ( (unsigned int)v204 > 0x10 )
          {
LABEL_132:
            if ( v85 != 176 && v85 != 256 )
            {
LABEL_134:
              LODWORD(v198) = v86;
              v87 = getinf_flag();
              v86 = v198;
              if ( !v87 )
                goto LABEL_136;
            }
LABEL_135:
            v196.m128i_i32[2] = v84;
            goto LABEL_136;
          }
LABEL_327:
          LODWORD(v198) = v86;
          v166 = getinf();
          v86 = v198;
          v85 = v166;
          goto LABEL_132;
        }
        if ( (unsigned int)v204 > 0x10 )
        {
LABEL_329:
          if ( v85 == 176 || v85 == 256 )
            goto LABEL_136;
          goto LABEL_331;
        }
LABEL_361:
        LODWORD(v198) = v86;
        v177 = getinf();
        v86 = v198;
        v85 = v177;
        goto LABEL_329;
      }
      if ( (unsigned int)v204 <= 0x10 )
      {
        v184 = getinf();
        v86 = v205;
        if ( v184 == 176 || v184 == 256 )
        {
          if ( v196.m128i_i32[2] > (int)v198 )
          {
LABEL_326:
            v84 = v198;
            goto LABEL_327;
          }
LABEL_360:
          v84 = v198;
          goto LABEL_361;
        }
        v85 = v204;
      }
      else if ( (_DWORD)v204 == 256 || (_DWORD)v204 == 176 )
      {
        v178 = v198;
        if ( v196.m128i_i32[2] <= (int)v198 )
          v178 = v196.m128i_i32[2];
        v196.m128i_i32[2] = v178;
LABEL_136:
        if ( v86 == v196.m128i_i32[2] )
          goto LABEL_137;
        goto LABEL_79;
      }
      LODWORD(v205) = v86;
      LODWORD(v204) = v85;
      v165 = getinf_flag();
      v86 = v205;
      if ( v165 )
        goto LABEL_135;
      v84 = v198;
      if ( v196.m128i_i32[2] > (int)v198 )
      {
        if ( (unsigned int)v204 > 0x10 )
          goto LABEL_134;
        goto LABEL_326;
      }
      if ( (unsigned int)v204 > 0x10 )
      {
        v84 = v198;
LABEL_331:
        LODWORD(v198) = v86;
        if ( !(unsigned __int8)getinf_flag() )
          v84 = v196.m128i_i32[2];
        v86 = v198;
        v196.m128i_i32[2] = v84;
        goto LABEL_136;
      }
      goto LABEL_360;
    }
    if ( !v52 || (v138 = 80LL * (v52 - 1) + v79, *(_DWORD *)(v138 + 56) != 1) )
    {
LABEL_248:
      v207 = v52 + 1;
      v57 = v52 + 1;
      if ( v57 == *(_QWORD *)(v9 + 32) )
        goto LABEL_137;
      v139 = *(_QWORD *)(v9 + 24) + 80LL * (v52 + 1);
      v80 = *(_DWORD *)(v139 + 56) == 1;
      v206 = *(_QWORD *)(v9 + 24) + 80 * v57;
      if ( !v80 )
        goto LABEL_137;
      v140 = a1[8].m128i_u32[2];
      v141 = *(_QWORD *)(v139 + 24);
      v142 = &v210;
      v210 = 0;
      v208 = v140;
      get_tinfo_size();
      v144 = v208;
      LODWORD(v204) = v210;
      if ( ((v210 - 1) & v210) != 0 )
        sub_F53F0(&v210, v141, v143, v210, v208);
      if ( (int)v198 >= (int)v204 )
      {
LABEL_252:
        v141 = (unsigned int)v204;
        if ( v196.m128i_i32[2] > (int)v204 )
        {
          if ( (unsigned int)v144 > 0x10 )
          {
LABEL_254:
            if ( (_DWORD)v144 != 176 && (_DWORD)v144 != 256 )
            {
              v141 = 2;
              v142 = (unsigned int *)(&dword_40 + 3);
              v145 = getinf_flag();
              goto LABEL_257;
            }
            goto LABEL_259;
          }
LABEL_452:
          v142 = (_DWORD *)(&qword_60 + 3);
          v144 = (unsigned int)getinf();
          goto LABEL_254;
        }
        if ( (unsigned int)v144 > 0x10 )
        {
LABEL_400:
          if ( (_DWORD)v144 == 176 || (_DWORD)v144 == 256 )
            goto LABEL_258;
          v141 = 4;
          v142 = (unsigned int *)(&dword_40 + 3);
          v145 = getinf_flag();
LABEL_257:
          if ( !v145 )
LABEL_258:
            LODWORD(v204) = v196.m128i_i32[2];
LABEL_259:
          v146 = a1[8].m128i_u32[2];
          v205 = *(_QWORD *)(v205 + 64) + v71;
          if ( (((_DWORD)v204 - 1) & (unsigned int)v204) != 0 )
            sub_F53F0(v142, v141, v146, (unsigned int)v204, v144);
          if ( (int)v198 >= (int)v204 )
          {
LABEL_261:
            if ( v196.m128i_i32[2] > (int)v204 )
            {
              if ( (unsigned int)v146 > 0x10 )
              {
LABEL_263:
                if ( (_DWORD)v146 == 176 || (_DWORD)v146 == 256 || (unsigned __int8)getinf_flag() )
                  goto LABEL_266;
                goto LABEL_267;
              }
LABEL_421:
              LODWORD(v146) = getinf();
              goto LABEL_263;
            }
            if ( (unsigned int)v146 > 0x10 )
            {
LABEL_415:
              if ( (_DWORD)v146 != 176 && (_DWORD)v146 != 256 )
              {
                v80 = (unsigned __int8)getinf_flag() == 0;
                v188 = v204;
                if ( v80 )
                  v188 = v196.m128i_i32[2];
                v196.m128i_i32[2] = v188;
              }
              goto LABEL_267;
            }
LABEL_424:
            LODWORD(v146) = getinf();
            goto LABEL_415;
          }
LABEL_408:
          if ( (unsigned int)v146 <= 0x10 )
          {
            v208 = v146;
            v195 = getinf();
            if ( v195 == 176 || v195 == 256 )
            {
              if ( v196.m128i_i32[2] > (int)v198 )
              {
                LODWORD(v204) = v198;
                goto LABEL_421;
              }
              LODWORD(v204) = v198;
              goto LABEL_424;
            }
            LODWORD(v146) = v208;
          }
          else if ( (_DWORD)v146 == 256 || (_DWORD)v146 == 176 )
          {
            v194 = v198;
            if ( v196.m128i_i32[2] <= (int)v198 )
              v194 = v196.m128i_i32[2];
            v196.m128i_i32[2] = v194;
            goto LABEL_267;
          }
          v208 = v146;
          if ( !(unsigned __int8)getinf_flag() )
          {
            LODWORD(v146) = v208;
            LODWORD(v204) = v198;
            goto LABEL_261;
          }
LABEL_266:
          v196.m128i_i32[2] = v204;
LABEL_267:
          if ( *(_QWORD *)(v206 + 64) != ((v205 + v196.m128i_i32[2] - 1) & -v196.m128i_i32[2]) )
          {
            v56 = *(_QWORD *)(v9 + 32);
            v52 = v207;
            goto LABEL_80;
          }
LABEL_137:
          if ( *(_DWORD *)(v60 + 56) != 2 )
            goto LABEL_138;
          if ( v71 <= 0 || (v155 = *(_QWORD **)(v60 + 64), (v156 = v155[1]) == 0) )
          {
            if ( !under_debugger )
              sub_383060(52685);
            goto LABEL_469;
          }
          v157 = *v155 + 24 * v156 - 24;
          v158 = *(unsigned __int16 *)(v157 + 16);
          if ( v71 > v158 && v71 < v158 + *(unsigned __int16 *)(v157 + 18) )
          {
            *(_WORD *)(v157 + 18) = v71 - v158;
LABEL_138:
            v88 = v201;
            sub_1272B0(v60, v201, (unsigned int)v71, 0);
            v201 = v88;
            sub_32C430(v196.m128i_i64[0], v88, (unsigned int)v71, 0);
            copy_tinfo_t();
            clear_tinfo_t();
            sub_1C4140(v201, v60 + 56, 0, (unsigned int)v71, *(unsigned int *)(v9 + 20));
            ++v52;
            ++a1[21].m128i_i32[2];
            v56 = *(_QWORD *)(v9 + 32);
            v57 = v52;
            goto LABEL_80;
          }
          goto LABEL_79;
        }
LABEL_449:
        v142 = (_DWORD *)(&qword_60 + 3);
        v144 = (unsigned int)getinf();
        goto LABEL_400;
      }
      if ( v208 <= 0x10 )
      {
        v192 = getinf();
        if ( v192 == 176 || v192 == 256 )
        {
          if ( v196.m128i_i32[2] > (int)v198 )
          {
            LODWORD(v204) = v198;
            goto LABEL_452;
          }
          LODWORD(v204) = v198;
          goto LABEL_449;
        }
        LODWORD(v144) = v208;
      }
      else if ( v208 == 256 || v208 == 176 )
      {
        v141 = v196.m128i_u32[2];
        v191 = v198;
        if ( v196.m128i_i32[2] <= (int)v198 )
          v191 = v196.m128i_i32[2];
        LODWORD(v204) = v191;
        goto LABEL_259;
      }
      v142 = (unsigned int *)(&dword_40 + 3);
      v208 = v144;
      if ( !(unsigned __int8)getinf_flag() )
      {
        v144 = v208;
        LODWORD(v204) = v198;
        goto LABEL_252;
      }
      LODWORD(v146) = a1[8].m128i_i32[2];
      v205 = *(_QWORD *)(v205 + 64) + v71;
      goto LABEL_408;
    }
    v180 = v77 - 1;
    v181 = *(_QWORD *)(v138 + 64) + *(int *)(v138 + 4);
    v204 = v181;
    v182 = a1[8].m128i_u32[2];
    if ( ((unsigned int)v77 & ((_DWORD)v77 - 1)) != 0 )
      sub_F53F0(v72, v181, v182, v77, v76);
    if ( (int)v198 >= (int)v77 )
      goto LABEL_369;
    if ( (unsigned int)v182 > 0x10 )
    {
      if ( (_DWORD)v182 == 256 || (_DWORD)v182 == 176 )
      {
        LODWORD(v77) = v198;
        if ( v196.m128i_i32[2] <= (int)v198 )
          LODWORD(v77) = v196.m128i_i32[2];
        v180 = v77 - 1;
        goto LABEL_376;
      }
      goto LABEL_390;
    }
    LODWORD(v206) = a1[8].m128i_i32[2];
    v207 = v77;
    v193 = getinf();
    if ( v193 != 176 && v193 != 256 )
    {
      LODWORD(v77) = v207;
      LODWORD(v182) = v206;
LABEL_390:
      LODWORD(v206) = v182;
      v207 = v77;
      v186 = getinf_flag();
      LODWORD(v77) = v207;
      if ( v186 )
        goto LABEL_376;
      LODWORD(v182) = v206;
      LODWORD(v77) = v198;
LABEL_369:
      if ( v196.m128i_i32[2] <= (int)v77 )
      {
        if ( (unsigned int)v182 <= 0x10 )
        {
LABEL_437:
          v207 = v77;
          v189 = getinf();
          LODWORD(v77) = v207;
          LODWORD(v182) = v189;
        }
        v207 = v77;
        if ( (_DWORD)v182 == 176 || (_DWORD)v182 == 256 )
        {
LABEL_375:
          LODWORD(v77) = v196.m128i_i32[2];
          v180 = v196.m128i_i32[2] - 1;
          goto LABEL_376;
        }
        v183 = getinf_flag();
LABEL_374:
        LODWORD(v77) = v207;
        v180 = v207 - 1;
        if ( v183 )
          goto LABEL_376;
        goto LABEL_375;
      }
      if ( (unsigned int)v182 > 0x10 )
        goto LABEL_371;
      goto LABEL_440;
    }
    LODWORD(v77) = v198;
    if ( v196.m128i_i32[2] <= (int)v198 )
      goto LABEL_437;
    LODWORD(v77) = v198;
LABEL_440:
    v207 = v77;
    v190 = getinf();
    LODWORD(v77) = v207;
    LODWORD(v182) = v190;
LABEL_371:
    if ( (_DWORD)v182 != 176 && (_DWORD)v182 != 256 )
    {
      v207 = v77;
      v183 = getinf_flag();
      goto LABEL_374;
    }
    v180 = v77 - 1;
LABEL_376:
    if ( *(_QWORD *)(v205 + 64) == (-(int)v77 & (unsigned __int64)(v204 + v180)) )
      goto LABEL_248;
LABEL_79:
    ++v52;
    v56 = *(_QWORD *)(v9 + 32);
    v57 = v52;
LABEL_80:
    if ( v57 >= v56 )
      goto LABEL_172;
  }
  if ( (*(_BYTE *)(v9 + 281) & 1) != 0 && *(_DWORD *)(v9 + 8) <= v52 )
    goto LABEL_79;
  if ( v200 )
  {
    v56 = *(_QWORD *)(v9 + 32);
    v57 = v52 + 1;
    if ( v57 != v56 )
    {
      ++v52;
      goto LABEL_80;
    }
  }
  if ( v202 )
  {
    v99 = (__m128i *)a1[3].m128i_i64[0];
    v100 = *(_QWORD *)v9;
    *(_QWORD *)v215 = &v211;
    v211 = v100;
    v101 = sub_FB6C0(v99, &v211, (__int64 **)v196.m128i_i64[0]);
    v102 = *(_QWORD *)(v101 + 40);
    v103 = *(_QWORD *)(v101 + 32);
    v104 = (_QWORD *)(v101 + 24);
    v105 = v101 + 32;
    v106 = 4 * v102;
    v107 = (int *)(v103 + 4 * v102);
    if ( 4 * v102 )
    {
      v108 = (int *)v103;
      while ( v52 <= *v108 )
      {
        if ( v52 == *v108 )
          goto LABEL_170;
        if ( ++v108 == v107 )
          goto LABEL_239;
      }
      v109 = (__int64)v108 - v103;
      if ( v104[3] < (unsigned __int64)(v102 + 1) )
      {
        v196.m128i_i64[1] = (__int64)v108 - v103;
        v161 = qvector_reserve(v105, v103, v102 + 1, 4);
        v104[1] = v161;
        v109 = v196.m128i_i64[1];
        v108 = (int *)(v196.m128i_i64[1] + v161);
        v106 = 4LL * v104[2];
      }
      memmove(v108 + 1, v108, v106 - v109);
      *v108 = v52;
      ++v104[2];
    }
    else
    {
LABEL_239:
      if ( v104[3] < (unsigned __int64)(v102 + 1) )
      {
        v159 = qvector_reserve(v105, v103, v102 + 1, 4);
        v160 = v104[2];
        v104[1] = v159;
        v107 = (int *)(v159 + 4 * v160);
      }
      *v107 = v52;
      ++v104[2];
    }
LABEL_170:
    v99[1].m128i_i8[0] = 1;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(v60 + 56) != 1 && *(_DWORD *)(v9 + 8) > v52 || sub_F6BE0((__int64)a1, v9, v52) )
  {
    sub_64340(v199, v52);
    goto LABEL_79;
  }
  sub_64440(v199, v52, *(_DWORD *)(v9 + 32) - v52);
  v56 = *(_QWORD *)(v9 + 32);
LABEL_172:
  v110 = v199;
  sub_643C0(v199, v56);
  v111 = 0;
  v112 = 0;
  if ( !(unsigned __int8)sub_64880(v110) )
  {
    v112 = sub_64C00(v199) + 1;
    v111 = v112;
  }
  v113 = *(_QWORD *)(v9 + 32);
  if ( v111 < v113 )
  {
    v137 = v113 - v112;
    sub_82440((__int64 *)(v9 + 24), v111);
    if ( v112 < *(_DWORD *)(v9 + 8) )
      *(_DWORD *)(v9 + 8) = v112;
    a1[21].m128i_i32[2] += v137;
  }
  if ( !v202 )
  {
    *(_OWORD *)v215 = 0u;
    if ( (*(_BYTE *)(v201 + 48) & 8) != 0
      && ((*(_DWORD *)(v9 + 20) - 112) & 0xFFFFFFDF) == 0
      && (unsigned __int8)sub_64880(&a1[13].m128i_i64[1]) )
    {
      v168 = (int *)a1[15].m128i_i64[1];
      for ( i = &v168[a1[16].m128i_i64[0]]; i != v168; ++v168 )
      {
        v170 = *v168;
        if ( *v168 != -1 )
        {
          if ( sub_64930(v199, v170) )
          {
LABEL_398:
            *(_QWORD *)&v215[8] = 0;
            goto LABEL_178;
          }
          sub_64190((__int64 *)v215, v170);
        }
      }
      v171 = (int *)a1[17].m128i_i64[0];
      for ( j = &v171[a1[17].m128i_i64[1]]; j != v171; ++v171 )
      {
        v173 = *v171;
        if ( *v171 != -1 )
        {
          if ( sub_64930(v199, v173) )
            goto LABEL_398;
          sub_64190((__int64 *)v215, v173);
        }
      }
      *(_DWORD *)(v9 + 20) = 48;
    }
LABEL_178:
    v114 = 0;
    if ( *(_QWORD *)(v9 + 32) )
    {
      do
      {
        if ( !sub_64930(v199, v114) && sub_F6BE0((__int64)a1, v9, v114) )
          sub_64190((__int64 *)v215, v114);
        ++v114;
        v115 = *(_QWORD *)(v9 + 32);
      }
      while ( v114 < v115 );
      v127 = v115 - 1;
      if ( v127 >= 0 )
      {
        v128 = 80LL * (unsigned int)v127;
        do
        {
          if ( sub_64930(v215, v127) )
          {
            v129 = (_QWORD *)(v128 + *(_QWORD *)(v9 + 24));
            cleanup_argloc();
            v130 = v129[4];
            if ( v130 )
            {
              v129[5] = 0;
              qfree(v130);
            }
            clear_tinfo_t();
            sub_11CDA0(v129);
            memmove(v129, v129 + 10, *(_QWORD *)(v9 + 24) + 80LL * *(_QWORD *)(v9 + 32) - (_QWORD)v129 - 80);
            v131 = *(_DWORD *)(v9 + 8);
            --*(_QWORD *)(v9 + 32);
            if ( v131 > v127 )
              *(_DWORD *)(v9 + 8) = v131 - 1;
            ++a1[21].m128i_i32[2];
          }
          --v127;
          v128 -= 80;
        }
        while ( v127 != -1 );
      }
    }
    qfree(*(__int64 *)v215);
  }
  if ( !*(_QWORD *)(v9 + 32) && (v203 == 128 || (_BYTE)v197) )
    *(_DWORD *)(v9 + 20) = 32;
  qfree(v212[0]);
  return 0;
}
