__int64 __fastcall sub_FB3E0(const __m128i *a1, __int64 a2)
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
  __int8 *v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  const __m128i *v28; // rdi
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
  __int64 *v40; // r12
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
  __int64 v89; // rsi
  __int64 v90; // r12
  __int64 v91; // r8
  _DWORD *v92; // rcx
  _DWORD *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 **v96; // rax
  __int64 v97; // rdx
  _DWORD *v98; // rax
  __int64 v99; // rsi
  _DWORD *v100; // rdx
  __m128i *v101; // rbp
  unsigned __int64 v102; // rax
  unsigned __int64 v103; // rax
  __int64 v104; // rcx
  int *v105; // rsi
  _QWORD *v106; // r13
  unsigned __int64 v107; // rdi
  __int64 v108; // rdx
  int *v109; // rax
  int *v110; // r12
  __int64 v111; // r8
  __int64 *v112; // r14
  unsigned __int64 v113; // rsi
  int v114; // r12d
  unsigned __int64 v115; // rbp
  int v116; // r12d
  unsigned __int64 v117; // r13
  unsigned __int64 *v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rbp
  unsigned __int64 *v121; // rdx
  __int64 v122; // rax
  __m128i v123; // xmm0
  __int64 v124; // rcx
  __int64 *v125; // r12
  __int64 v126; // rax
  __int64 *v127; // rdi
  __int64 *v128; // rdi
  int v129; // r13d
  __int64 v130; // r12
  _QWORD *v131; // r14
  __int64 v132; // rdi
  int v133; // eax
  __int64 v134; // rdx
  _QWORD *v135; // r12
  __int64 v136; // rdi
  char v137; // al
  unsigned __int64 v138; // rdx
  int v139; // ebp
  __int64 v140; // rax
  __int64 v141; // rax
  unsigned int v142; // r8d
  __int64 v143; // rsi
  unsigned int *v144; // rdi
  __int64 v145; // rdx
  __int64 v146; // r8
  char v147; // al
  __int64 v148; // rdx
  char v149; // cl
  unsigned __int64 *v150; // rax
  __int64 v151; // rax
  char v152; // cl
  __int64 v153; // rax
  __m128i v154; // xmm0
  char v155; // al
  unsigned int v156; // eax
  _QWORD *v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rax
  int v160; // esi
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rax
  __m128i v166; // xmm0
  char v167; // al
  int v168; // eax
  unsigned int v169; // eax
  int *v170; // r13
  int *i; // rbp
  int v172; // r14d
  int *v173; // r13
  int *j; // rbp
  int v175; // r14d
  int v176; // eax
  __int64 v177; // rax
  __int64 v178; // rax
  int v179; // eax
  __int32 v180; // eax
  __int64 v181; // rax
  __int32 v182; // r12d
  __int64 v183; // rsi
  __int64 v184; // rdx
  char v185; // al
  int v186; // eax
  __int64 v187; // rax
  char v188; // al
  __int64 v189; // rcx
  __int32 v190; // eax
  int v191; // eax
  int v192; // eax
  __int32 v193; // eax
  int v194; // eax
  int v195; // eax
  __int32 v196; // eax
  int v197; // eax
  __m128i v198; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 *v199; // [rsp+10h] [rbp-E8h]
  __int64 v200; // [rsp+18h] [rbp-E0h]
  __int64 *v201; // [rsp+20h] [rbp-D8h]
  int v202; // [rsp+2Ch] [rbp-CCh]
  __int64 v203; // [rsp+30h] [rbp-C8h]
  char v204; // [rsp+3Bh] [rbp-BDh]
  int v205; // [rsp+3Ch] [rbp-BCh]
  __int64 v206; // [rsp+40h] [rbp-B8h]
  __int64 v207; // [rsp+48h] [rbp-B0h]
  __int64 v208; // [rsp+50h] [rbp-A8h]
  int v209; // [rsp+58h] [rbp-A0h]
  unsigned int v210; // [rsp+5Ch] [rbp-9Ch]
  int v211; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v212; // [rsp+64h] [rbp-94h] BYREF
  unsigned __int64 v213; // [rsp+68h] [rbp-90h] BYREF
  __int64 v214[2]; // [rsp+70h] [rbp-88h] BYREF
  unsigned __int64 v215; // [rsp+80h] [rbp-78h] BYREF
  __int64 v216; // [rsp+88h] [rbp-70h]
  _BYTE v217[24]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v218; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v219; // [rsp+B8h] [rbp-40h]

  v219 = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 != 8 )
    return 0;
  v6 = a1[9].m128i_i64[0];
  v8 = a1[2].m128i_i64[0];
  v203 = *(_QWORD *)(v6 + 112);
  if ( (unsigned __int8)sub_11FFA0(v8, 0) )
    return 0;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_DWORD *)(v9 + 20);
  v11 = v10;
  v205 = v10;
  LOBYTE(v11) = v10 & 0x7F;
  if ( v11 == 96 )
    return 0;
  if ( v10 == 80 )
    return 0;
  if ( *(_DWORD *)(v9 + 284) )
    return 0;
  v202 = *(_DWORD *)(v9 + 280) & 4;
  if ( v202 )
  {
    if ( (v10 & 0xFFFFFFF0) != 0xD0 && (v10 & 0xFFFFFFF0) != 0x40 )
      return 0;
  }
  if ( (unsigned __int8)sub_2B7FD0(a1->m128i_i64[1], *(_QWORD *)(a1[2].m128i_i64[0] + 24)) )
    return 0;
  v12 = *(_QWORD *)v9;
  v204 = 0;
  if ( v12 != -1 )
  {
    if ( (v205 & 0xFFFFFFF0) != 0x40 && (v205 & 0xFFFFFFF0) != 0xD0 )
    {
      v13 = (__m128i *)a1[3].m128i_i64[0];
      v14 = *(_QWORD *)(v9 + 32);
      v215 = v12;
      *(_QWORD *)v217 = &v215;
      v15 = sub_FB100(v13, &v215, (__int64 **)v217);
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
      v204 = 1;
      goto LABEL_18;
    }
    v204 = 0;
  }
LABEL_18:
  v18 = *(_DWORD *)(v9 + 20);
  if ( a1[8].m128i_i32[2] != v18 )
    sub_D0A50((__int64)a1[4].m128i_i64, v18);
  v19 = a1[5].m128i_u64[0];
  v20 = a1[16].m128i_u64[0];
  *(_DWORD *)v217 = -1;
  if ( v19 >= v20 )
  {
    if ( v20 >= v19 )
      goto LABEL_29;
    v21 = a1[15].m128i_u64[1];
    v22 = a1[16].m128i_u64[1];
    v23 = &a1[15].m128i_i8[8];
    if ( (unsigned __int64)v217 < v21 || (unsigned __int64)v217 >= v21 + 4 * v22 )
    {
      if ( v22 >= v19
        || (v178 = qvector_reserve(v23, v21, v19, 4),
            a1[15].m128i_i64[1] = v178,
            v21 = v178,
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
           || (v181 = qvector_reserve(v23, v21, v19, 4),
               a1[15].m128i_i64[1] = v181,
               v21 = v181,
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
  *(_DWORD *)v217 = -1;
  if ( v24 >= v25 )
  {
    if ( v25 >= v24 )
      goto LABEL_38;
    v26 = a1[17].m128i_u64[0];
    v27 = a1[18].m128i_u64[0];
    v28 = a1 + 17;
    if ( (unsigned __int64)v217 < v26 || (unsigned __int64)v217 >= v26 + 4 * v27 )
    {
      if ( v27 >= v24
        || (v177 = qvector_reserve(v28, v26, v24, 4),
            a1[17].m128i_i64[0] = v177,
            v26 = v177,
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
           || (v187 = qvector_reserve(v28, v26, v24, 4),
               a1[17].m128i_i64[0] = v187,
               v26 = v187,
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
  v198.m128i_i64[1] = (__int64)a1[20].m128i_i64;
  if ( !v29 )
  {
LABEL_215:
    a1[20].m128i_i64[1] = 0;
    goto LABEL_41;
  }
  v30 = *(_QWORD *)v29;
  if ( a1[20].m128i_i64[1] )
  {
    v125 = (__int64 *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
    v126 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v126 & 2) != 0 )
    {
LABEL_214:
      *(_QWORD *)v29 = v30 & 3 | v29 & 0xFFFFFFFFFFFFFFFCLL;
      *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[20].m128i_u64[0],
                                                (__m128i)a1[20].m128i_u64[0]);
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      goto LABEL_215;
    }
    v127 = (__int64 *)v125[1];
    if ( (*(_BYTE *)v127 & 2) != 0 )
    {
      v128 = (__int64 *)v125[2];
      if ( (*(_BYTE *)v128 & 2) != 0 )
        goto LABEL_320;
    }
    else
    {
      sub_F5110(v127);
      v128 = (__int64 *)v125[2];
      if ( (*(_BYTE *)v128 & 2) != 0 )
        goto LABEL_210;
    }
    sub_F5110(v128);
LABEL_210:
    v126 = *v125;
    if ( (*v125 & 2) != 0 )
    {
LABEL_211:
      if ( v30 > 3 )
        qfree(v30 & 0xFFFFFFFFFFFFFFFCLL);
      v29 = a1[20].m128i_u64[0];
      v30 = *(_QWORD *)v29;
      goto LABEL_214;
    }
LABEL_320:
    *v125 = v126 | 2;
    goto LABEL_211;
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
  v40 = (__int64 *)(v37 + 56);
  if ( v39 != 2 )
  {
    if ( v39 != 1 )
      goto LABEL_47;
LABEL_195:
    v198.m128i_i64[0] = v40[1];
    sub_63B90(&a1[12].m128i_i64[1], v34);
    v118 = (unsigned __int64 *)a1[20].m128i_i64[0];
    if ( !v118 )
    {
      v165 = qalloc(40);
      v166 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v165, (__m128i)(unsigned __int64)v165);
      if ( !v165 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          exception,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      *(_QWORD *)(v165 + 32) = 0;
      *(_OWORD *)(v165 + 16) = 0;
      *(__m128i *)(v165 + 8) = v166;
      *(_QWORD *)v165 = v165 & 0xFFFFFFFFFFFFFFFCLL | 2;
      a1[20].m128i_i64[0] = v165;
      *(_QWORD *)v165 = v165 & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v165 & 3LL;
      *(__m128i *)(a1[20].m128i_i64[0] + 8) = _mm_unpacklo_epi64(
                                                (__m128i)a1[20].m128i_u64[0],
                                                (__m128i)a1[20].m128i_u64[0]);
      *(_QWORD *)a1[20].m128i_i64[0] &= ~1uLL;
      *(_QWORD *)a1[20].m128i_i64[0] |= 2uLL;
      v118 = (unsigned __int64 *)a1[20].m128i_i64[0];
LABEL_197:
      v199 = v118;
      v119 = qalloc(40);
      v120 = v119;
      if ( !v119 )
      {
        v3 = __cxa_allocate_exception(8u);
        *v3 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v3,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v121 = v199;
      *(_QWORD *)(v119 + 32) = 0;
      *(_OWORD *)v119 = 0;
      *(_OWORD *)(v119 + 16) = 0;
      v122 = v198.m128i_i64[0];
      *(_QWORD *)v120 = (unsigned __int64)v121 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v120 + 24) = v122;
      v123 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v120 = (unsigned __int64)v121 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v120 + 8) = _mm_unpacklo_epi64(v123, v123);
      if ( v121 != (unsigned __int64 *)a1[20].m128i_i64[0] )
      {
        v121[1] = v120;
        v124 = a1[20].m128i_i64[0];
        if ( v121 == *(unsigned __int64 **)(v124 + 8) )
          goto LABEL_279;
        goto LABEL_200;
      }
      goto LABEL_314;
    }
    if ( !a1[20].m128i_i64[1] )
      goto LABEL_197;
    if ( (*(_BYTE *)(*v118 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
      v149 = 1;
LABEL_275:
      LOBYTE(v200) = v149;
      v199 = v118;
      v151 = qalloc(40);
      v120 = v151;
      if ( !v151 )
      {
        v4 = __cxa_allocate_exception(8u);
        *v4 = (char *)&`vtable for'std::bad_alloc + 16;
        __cxa_throw(
          v4,
          (struct type_info *)&`typeinfo for'std::bad_alloc,
          (void (*)(void *))&std::bad_alloc::~bad_alloc);
      }
      v121 = v199;
      v152 = v200;
      *(_QWORD *)(v151 + 32) = 0;
      *(_OWORD *)v151 = 0;
      *(_OWORD *)(v151 + 16) = 0;
      v153 = v198.m128i_i64[0];
      *(_QWORD *)v120 = (unsigned __int64)v121 & 0xFFFFFFFFFFFFFFFCLL;
      *(_QWORD *)(v120 + 24) = v153;
      v154 = _mm_loadl_epi64(a1 + 20);
      *(_QWORD *)v120 = (unsigned __int64)v121 & 0xFFFFFFFFFFFFFFFCLL | 1;
      *(__m128i *)(v120 + 8) = _mm_unpacklo_epi64(v154, v154);
      if ( (unsigned __int64 *)a1[20].m128i_i64[0] != v121 )
      {
        if ( v152 )
        {
          v121[1] = v120;
          v124 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v124 + 8) == v121 )
LABEL_279:
            *(_QWORD *)(v124 + 8) = v120;
        }
        else
        {
          v121[2] = v120;
          v189 = a1[20].m128i_i64[0];
          if ( *(unsigned __int64 **)(v189 + 16) == v121 )
            *(_QWORD *)(v189 + 16) = v120;
        }
LABEL_200:
        sub_D7820((_QWORD *)v198.m128i_i64[1], (__int64 *)v120);
LABEL_201:
        ++a1[20].m128i_i64[1];
        goto LABEL_202;
      }
LABEL_314:
      *v121 = v120 & 0xFFFFFFFFFFFFFFFCLL | *v121 & 3;
      *(_QWORD *)(a1[20].m128i_i64[0] + 8) = v120;
      *(_QWORD *)(a1[20].m128i_i64[0] + 16) = v120;
      v164 = *(_QWORD *)v120 & 2LL;
      *(_QWORD *)v120 &= ~1uLL;
      *(_QWORD *)v120 = v164 | a1[20].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      goto LABEL_201;
    }
    v118 = (unsigned __int64 *)(*v118 & 0xFFFFFFFFFFFFFFFCLL);
    v149 = 1;
    while ( 1 )
    {
      if ( v198.m128i_i64[0] >= (__int64)v118[3] )
      {
        if ( v198.m128i_i64[0] <= (__int64)v118[3] )
        {
          if ( !v118 )
            goto LABEL_275;
          v120 = (__int64)v118;
LABEL_202:
          *(_DWORD *)(v120 + 32) = v34;
          *(__m128i *)v217 = _mm_unpacklo_epi64(
                               _mm_loadl_epi64(&v198),
                               (__m128i)(unsigned __int64)*(int *)(*(_QWORD *)(v9 + 24) + v38 + 4));
          sub_316F70(&a1[18].m128i_u64[1], v217);
LABEL_61:
          if ( ((*(_DWORD *)v40 - 2) & 0xFFFFFFFD) == 0 )
LABEL_157:
            sub_63B90(&a1[13].m128i_i64[1], v34);
          v32 = *(_QWORD *)(v9 + 32);
          v35 = ++v34;
          LODWORD(v33) = v32;
          if ( v34 >= v32 )
            goto LABEL_63;
          goto LABEL_45;
        }
        v150 = (unsigned __int64 *)v118[2];
        v149 = 0;
      }
      else
      {
        v150 = (unsigned __int64 *)v118[1];
        v149 = 1;
      }
      if ( (*(_BYTE *)v150 & 2) != 0 )
        goto LABEL_275;
      v118 = v150;
    }
  }
  v96 = *(__int64 ***)(v37 + 64);
  if ( v96[1] != (__int64 *)&byte_1 )
    goto LABEL_153;
  v40 = *v96;
  v39 = *(_DWORD *)*v96;
  if ( v39 == 1 )
    goto LABEL_195;
  if ( v39 != 2 )
  {
LABEL_47:
    if ( (unsigned int)(v39 - 3) <= 1 )
      goto LABEL_48;
    goto LABEL_160;
  }
LABEL_153:
  v97 = v40[1];
  v98 = *(_DWORD **)v97;
  v99 = *(_QWORD *)v97 + 24LL * *(_QWORD *)(v97 + 8);
  if ( *(_QWORD *)v97 == v99 )
  {
LABEL_160:
    if ( !under_debugger )
      sub_3835A0(52134);
LABEL_470:
    BUG();
  }
  v100 = *(_DWORD **)v97;
  do
  {
    if ( *v100 == 1 )
      goto LABEL_157;
    v100 += 6;
  }
  while ( (_DWORD *)v99 != v100 );
  while ( (unsigned int)(*v98 - 3) > 1 )
  {
    v98 += 6;
    if ( (_DWORD *)v99 == v98 )
      goto LABEL_160;
  }
LABEL_48:
  memset(v217, 0, sizeof(v217));
  if ( (unsigned __int8)sub_D25E0((__int64)a1[4].m128i_i64, (__int64 *)v217, v40, *(_DWORD *)(v37 + 4), 1) )
  {
    v41 = 0;
    v42 = 0;
    if ( !*(_QWORD *)&v217[8] )
    {
LABEL_59:
      if ( *(_QWORD *)v217 )
      {
        *(_QWORD *)&v217[8] = 0;
        qfree(*(_QWORD *)v217);
      }
      goto LABEL_61;
    }
    while ( 2 )
    {
      v43 = *(_QWORD *)v217;
      v44 = a1[4].m128i_i64[1];
      v45 = *(_DWORD *)(*(_QWORD *)v217 + 4 * v42);
      v46 = (_DWORD *)(v44 + 4 * a1[5].m128i_i64[0]);
      if ( (_DWORD *)v44 == v46 )
        goto LABEL_142;
      v47 = (_DWORD *)a1[4].m128i_i64[1];
      while ( v45 != *v47 )
      {
        if ( v46 == ++v47 )
          goto LABEL_142;
      }
      if ( v46 == v47 || (v48 = ((__int64)v47 - v44) >> 2, v49 = (int)v48, (_DWORD)v48 == -1) )
      {
LABEL_142:
        v91 = a1[6].m128i_i64[0];
        v92 = (_DWORD *)(v91 + 4 * a1[6].m128i_i64[1]);
        if ( (_DWORD *)v91 == v92 )
          goto LABEL_192;
        v93 = (_DWORD *)a1[6].m128i_i64[0];
        while ( v45 != *v93 )
        {
          if ( v92 == ++v93 )
            goto LABEL_192;
        }
        if ( v92 == v93 )
          goto LABEL_192;
        v94 = ((__int64)v93 - v91) >> 2;
        v49 = (int)v94;
        if ( (_DWORD)v94 == -1 )
          goto LABEL_192;
        v50 = a1[21].m128i_i32[0] + 1;
        if ( a1[4].m128i_i32[0] == 3 )
          goto LABEL_162;
        a1[21].m128i_i32[0] = v50;
        v95 = 4LL * (int)v94;
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
LABEL_162:
        a1[21].m128i_i32[0] = v50;
        v95 = 4 * v49;
        *(_DWORD *)(a1[15].m128i_i64[1] + 4 * v49) = v34;
      }
      *(_DWORD *)(a1[17].m128i_i64[0] + v95) = v34;
LABEL_58:
      v42 = ++v41;
      if ( (unsigned __int64)v41 >= *(_QWORD *)&v217[8] )
        goto LABEL_59;
      continue;
    }
  }
  v43 = *(_QWORD *)v217;
LABEL_192:
  if ( v43 )
  {
    *(_QWORD *)&v217[8] = 0;
    qfree(v43);
  }
  v32 = *(_QWORD *)(v9 + 32);
  LODWORD(v33) = v32;
LABEL_63:
  LOBYTE(v199) = (v205 & 0xFFFFFFF0) == 64 || (v205 & 0xFFFFFFF0) == 208;
  if ( !(_BYTE)v199 )
  {
    v52 = 0;
LABEL_65:
    if ( !v204 && (*(_BYTE *)(v9 + 281) & 1) == 0 )
    {
      v53 = v32 - 1;
      v198.m128i_i64[0] = (__int64)v217;
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
          v216 = 0;
          v215 = -1;
          if ( *(_BYTE *)v54 == 1 )
          {
            v138 = *(int *)(v54 + 8);
            LOBYTE(v216) = 1;
            v215 = v138;
            HIDWORD(v216) = *(_DWORD *)(v54 + 4);
          }
          else
          {
            if ( *(_BYTE *)v54 != 5 )
              goto LABEL_70;
            v134 = *(_QWORD *)(v54 + 8);
            LOBYTE(v216) = 5;
            v215 = *(_QWORD *)(v134 + 8);
            HIDWORD(v216) = *(_DWORD *)(v54 + 4);
          }
          sub_32F960(v198.m128i_i64[0], &v215, a1->m128i_i64[1]);
          v135 = (_QWORD *)a1[3].m128i_i64[1];
          if ( !(unsigned __int8)sub_64220(v198.m128i_i64[0], v135) )
            break;
          v137 = sub_318300(v135 + 2, &v217[16]);
          v136 = *(_QWORD *)&v217[16];
          if ( !v137 )
            goto LABEL_232;
          if ( *(_QWORD *)&v217[16] )
          {
            v218 = 0;
            qfree(*(_QWORD *)&v217[16]);
          }
          qfree(*(_QWORD *)v217);
          if ( v52 > v53 - 1 )
            goto LABEL_71;
          --v53;
        }
        v136 = *(_QWORD *)&v217[16];
LABEL_232:
        if ( v136 )
        {
          v218 = 0;
          qfree(v136);
        }
        qfree(*(_QWORD *)v217);
LABEL_70:
        v33 = ++v53;
LABEL_71:
        v32 = *(_QWORD *)(v9 + 32);
      }
      if ( v32 != v33 )
      {
        v55 = v32 - v53;
        sub_81E80((_QWORD *)(v9 + 24), v33);
        if ( v53 < *(_DWORD *)(v9 + 8) )
          *(_DWORD *)(v9 + 8) = v53;
        a1[21].m128i_i32[2] += v55;
        v33 = *(_QWORD *)(v9 + 32);
      }
    }
    goto LABEL_76;
  }
  if ( !v204 || (v52 = 0, v202) )
  {
    v52 = *(_DWORD *)(v9 + 8);
    goto LABEL_65;
  }
LABEL_76:
  v214[0] = 0;
  v214[1] = 0;
  v201 = v214;
  sub_63880(v214, 0, v33);
  v56 = *(_QWORD *)(v9 + 32);
  v57 = v52;
  if ( v52 >= v56 )
    goto LABEL_173;
  v198.m128i_i64[0] = (__int64)v217;
  while ( 1 )
  {
    v58 = *(_QWORD *)(v9 + 24);
    v216 = 0;
    v215 = -1;
    v59 = 80 * v57;
    v60 = v59 + v58;
    if ( *(_BYTE *)v60 == 1 )
    {
      v61 = *(int *)(v60 + 8);
      LOBYTE(v216) = 1;
      v215 = v61;
      HIDWORD(v216) = *(_DWORD *)(v60 + 4);
    }
    else
    {
      if ( *(_BYTE *)v60 != 5 )
        goto LABEL_79;
      v69 = *(_QWORD *)(v60 + 8);
      LOBYTE(v216) = 5;
      v215 = *(_QWORD *)(v69 + 8);
      HIDWORD(v216) = *(_DWORD *)(v60 + 4);
    }
    v198.m128i_i8[8] = *(_BYTE *)v60 & 0xFB;
    if ( v198.m128i_i8[8] != 1 )
    {
      if ( !under_debugger )
        sub_3835A0(52030);
      goto LABEL_470;
    }
    if ( (_BYTE)v199 && *(_DWORD *)(v9 + 8) > v52 )
      goto LABEL_79;
    sub_32F960(v198.m128i_i64[0], &v215, a1->m128i_i64[1]);
    v62 = (__int64 *)a1[3].m128i_i64[1];
    sub_64100((__int64 *)v198.m128i_i64[0], v62);
    sub_318480(&v217[16], v62 + 2);
    if ( !(unsigned __int8)sub_64280(v198.m128i_i64[0]) || v218 )
    {
      if ( (unsigned __int8)sub_64280(v198.m128i_i64[0]) )
      {
        v64 = a1->m128i_i64[1];
        v198.m128i_i8[8] = 5;
        v65 = *(_QWORD *)(v64 + 1496);
        v66 = *(_QWORD *)(v64 + 1440);
        v67 = *(_QWORD *)(*(_QWORD *)(v65 + 24) + 16LL);
        v68 = v67 & (**(_QWORD **)&v217[16] - v66);
        v200 = v67
             & (*(_QWORD *)(*(_QWORD *)&v217[16] + 16 * v218 - 8)
              + *(_QWORD *)(*(_QWORD *)&v217[16] + 16 * v218 - 16)
              - v66);
      }
      else
      {
        LODWORD(v68) = sub_64360(v198.m128i_i64[0], 0);
        v200 = (int)(sub_64600(v198.m128i_i64[0]) + 1);
        v65 = *(_QWORD *)(a1->m128i_i64[1] + 1496);
      }
      if ( (unsigned __int8)sub_11C690(v60, v65, 0) )
      {
        if ( (_BYTE)v216 != v198.m128i_i8[8] )
          sub_F4D40();
        v63 = v215 + HIDWORD(v216) - v200;
      }
      else
      {
        if ( (_BYTE)v216 != v198.m128i_i8[8] )
          sub_F4D40();
        v63 = v68 - v215;
      }
    }
    else
    {
      v63 = *(_DWORD *)(v60 + 4);
    }
    if ( *(_QWORD *)&v217[16] )
    {
      v218 = 0;
      qfree(*(_QWORD *)&v217[16]);
    }
    qfree(*(_QWORD *)v217);
    if ( v63 < 0 )
    {
      if ( !under_debugger )
        sub_3835A0(52031);
      goto LABEL_470;
    }
    if ( *(_DWORD *)(v60 + 4) == v63 )
      goto LABEL_79;
    if ( !v63 )
      break;
    if ( (get_tinfo_property(*(_QWORD *)(v60 + 24), 2) & 0x2F) == 0xD
      || (get_tinfo_property(*(_QWORD *)(v60 + 24), 2) & 0xF) == 9
      || (*(_BYTE *)(v9 + 281) & 1) != 0
      && *(_DWORD *)(v60 + 4) > *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 1504) + 80LL) )
    {
      goto LABEL_79;
    }
    v70 = round_up_power2((unsigned int)v63);
    v71 = v70;
    if ( *(_DWORD *)(v60 + 4) <= v70 )
      goto LABEL_79;
    v72 = (unsigned int)v70;
    v73 = *(_QWORD *)(a1->m128i_i64[1] + 1504);
    LODWORD(v200) = a1[8].m128i_i32[2];
    v198.m128i_i32[2] = *(_DWORD *)(v73 + 80);
    v74 = round_down_power2(v72);
    v76 = (unsigned int)v200;
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
      sub_F4E30(v72, 2, v75, v77, (unsigned int)v200);
LABEL_120:
    LODWORD(v200) = 2 * v198.m128i_i32[2];
    if ( 2 * v198.m128i_i32[2] >= (int)v77 )
    {
      if ( v198.m128i_i32[2] <= (int)v77 )
      {
        if ( (unsigned int)v76 <= 0x10 )
          goto LABEL_337;
        goto LABEL_299;
      }
      if ( (unsigned int)v76 > 0x10 )
        goto LABEL_123;
      goto LABEL_297;
    }
    if ( (unsigned int)v76 > 0x10 )
    {
      if ( (_DWORD)v76 == 176 || (_DWORD)v76 == 256 )
      {
        v77 = (unsigned int)v200;
        if ( v198.m128i_i32[2] <= (int)v200 )
          v77 = v198.m128i_u32[2];
        goto LABEL_128;
      }
      goto LABEL_293;
    }
    LODWORD(v207) = v77;
    LODWORD(v206) = v76;
    v176 = getinf(99);
    if ( v176 != 176 && v176 != 256 )
    {
      LODWORD(v76) = v206;
      LODWORD(v77) = v207;
LABEL_293:
      v72 = 67;
      LODWORD(v207) = v77;
      LODWORD(v206) = v76;
      v155 = getinf_flag(67, 512);
      v77 = (unsigned int)v207;
      if ( v155 )
        goto LABEL_128;
      LODWORD(v77) = v200;
      if ( v198.m128i_i32[2] <= (int)v200 )
      {
        if ( (unsigned int)v206 > 0x10 )
        {
          LODWORD(v77) = v200;
LABEL_301:
          v72 = 67;
          LODWORD(v206) = v77;
          v78 = getinf_flag(67, 4);
LABEL_126:
          v77 = (unsigned int)v206;
          if ( v78 )
            goto LABEL_128;
          goto LABEL_127;
        }
LABEL_336:
        LODWORD(v77) = v200;
LABEL_337:
        v72 = 99;
        LODWORD(v206) = v77;
        v169 = getinf(99);
        LODWORD(v77) = v206;
        v76 = v169;
LABEL_299:
        if ( (_DWORD)v76 == 176 || (_DWORD)v76 == 256 )
        {
LABEL_127:
          v77 = v198.m128i_u32[2];
          goto LABEL_128;
        }
        goto LABEL_301;
      }
      if ( (unsigned int)v206 > 0x10 )
        goto LABEL_125;
      goto LABEL_296;
    }
    if ( v198.m128i_i32[2] <= (int)v200 )
      goto LABEL_336;
LABEL_296:
    LODWORD(v77) = v200;
LABEL_297:
    v72 = 99;
    LODWORD(v206) = v77;
    v156 = getinf(99);
    v77 = (unsigned int)v206;
    v76 = v156;
LABEL_123:
    if ( (_DWORD)v76 != 176 && (_DWORD)v76 != 256 )
    {
LABEL_125:
      v72 = 67;
      LODWORD(v206) = v77;
      v78 = getinf_flag(67, 2);
      goto LABEL_126;
    }
LABEL_128:
    v79 = *(_QWORD *)(v9 + 24);
    v80 = *(_DWORD *)(v79 + v59 + 56) == 1;
    v207 = v79 + v59;
    if ( !v80 )
    {
      v81 = *(_QWORD *)(v79 + v59 + 24);
      LODWORD(v207) = v77;
      v82 = a1[8].m128i_i32[2];
      v211 = 0;
      LODWORD(v206) = v82;
      get_tinfo_size(&v211, v81, 0);
      v84 = v211;
      v85 = v206;
      v86 = v207;
      if ( (v211 & (v211 - 1)) != 0 )
        sub_F4E30((__int64)&v211, v81, v83, (unsigned int)v207, (unsigned int)v206);
      if ( (int)v200 >= v211 )
      {
        if ( v198.m128i_i32[2] > v211 )
        {
          if ( (unsigned int)v206 > 0x10 )
          {
LABEL_133:
            if ( v85 != 176 && v85 != 256 )
            {
LABEL_135:
              LODWORD(v200) = v86;
              v87 = getinf_flag(67, 2);
              v86 = v200;
              if ( !v87 )
                goto LABEL_137;
            }
LABEL_136:
            v198.m128i_i32[2] = v84;
            goto LABEL_137;
          }
LABEL_328:
          LODWORD(v200) = v86;
          v168 = getinf(99);
          v86 = v200;
          v85 = v168;
          goto LABEL_133;
        }
        if ( (unsigned int)v206 > 0x10 )
        {
LABEL_330:
          if ( v85 == 176 || v85 == 256 )
            goto LABEL_137;
          goto LABEL_332;
        }
LABEL_362:
        LODWORD(v200) = v86;
        v179 = getinf(99);
        v86 = v200;
        v85 = v179;
        goto LABEL_330;
      }
      if ( (unsigned int)v206 <= 0x10 )
      {
        v186 = getinf(99);
        v86 = v207;
        if ( v186 == 176 || v186 == 256 )
        {
          if ( v198.m128i_i32[2] > (int)v200 )
          {
LABEL_327:
            v84 = v200;
            goto LABEL_328;
          }
LABEL_361:
          v84 = v200;
          goto LABEL_362;
        }
        v85 = v206;
      }
      else if ( (_DWORD)v206 == 256 || (_DWORD)v206 == 176 )
      {
        v180 = v200;
        if ( v198.m128i_i32[2] <= (int)v200 )
          v180 = v198.m128i_i32[2];
        v198.m128i_i32[2] = v180;
LABEL_137:
        if ( v86 == v198.m128i_i32[2] )
          goto LABEL_138;
        goto LABEL_79;
      }
      LODWORD(v207) = v86;
      LODWORD(v206) = v85;
      v167 = getinf_flag(67, 512);
      v86 = v207;
      if ( v167 )
        goto LABEL_136;
      v84 = v200;
      if ( v198.m128i_i32[2] > (int)v200 )
      {
        if ( (unsigned int)v206 > 0x10 )
          goto LABEL_135;
        goto LABEL_327;
      }
      if ( (unsigned int)v206 > 0x10 )
      {
        v84 = v200;
LABEL_332:
        LODWORD(v200) = v86;
        if ( !(unsigned __int8)getinf_flag(67, 4) )
          v84 = v198.m128i_i32[2];
        v86 = v200;
        v198.m128i_i32[2] = v84;
        goto LABEL_137;
      }
      goto LABEL_361;
    }
    if ( !v52 || (v140 = 80LL * (v52 - 1) + v79, *(_DWORD *)(v140 + 56) != 1) )
    {
LABEL_249:
      v209 = v52 + 1;
      v57 = v52 + 1;
      if ( v57 == *(_QWORD *)(v9 + 32) )
        goto LABEL_138;
      v141 = *(_QWORD *)(v9 + 24) + 80LL * (v52 + 1);
      v80 = *(_DWORD *)(v141 + 56) == 1;
      v208 = *(_QWORD *)(v9 + 24) + 80 * v57;
      if ( !v80 )
        goto LABEL_138;
      v142 = a1[8].m128i_u32[2];
      v143 = *(_QWORD *)(v141 + 24);
      v144 = &v212;
      v212 = 0;
      v210 = v142;
      get_tinfo_size(&v212, v143, 0);
      v146 = v210;
      LODWORD(v206) = v212;
      if ( ((v212 - 1) & v212) != 0 )
        sub_F4E30((__int64)&v212, v143, v145, v212, v210);
      if ( (int)v200 >= (int)v206 )
      {
LABEL_253:
        v143 = (unsigned int)v206;
        if ( v198.m128i_i32[2] > (int)v206 )
        {
          if ( (unsigned int)v146 > 0x10 )
          {
LABEL_255:
            if ( (_DWORD)v146 != 176 && (_DWORD)v146 != 256 )
            {
              v143 = 2;
              v144 = (unsigned int *)(&dword_40 + 3);
              v147 = getinf_flag(67, 2);
              goto LABEL_258;
            }
            goto LABEL_260;
          }
LABEL_453:
          v144 = (_DWORD *)(&qword_60 + 3);
          v146 = (unsigned int)getinf(99);
          goto LABEL_255;
        }
        if ( (unsigned int)v146 > 0x10 )
        {
LABEL_401:
          if ( (_DWORD)v146 == 176 || (_DWORD)v146 == 256 )
            goto LABEL_259;
          v143 = 4;
          v144 = (unsigned int *)(&dword_40 + 3);
          v147 = getinf_flag(67, 4);
LABEL_258:
          if ( !v147 )
LABEL_259:
            LODWORD(v206) = v198.m128i_i32[2];
LABEL_260:
          v148 = a1[8].m128i_u32[2];
          v207 = *(_QWORD *)(v207 + 64) + v71;
          if ( (((_DWORD)v206 - 1) & (unsigned int)v206) != 0 )
            sub_F4E30((__int64)v144, v143, v148, (unsigned int)v206, v146);
          if ( (int)v200 >= (int)v206 )
          {
LABEL_262:
            if ( v198.m128i_i32[2] > (int)v206 )
            {
              if ( (unsigned int)v148 > 0x10 )
              {
LABEL_264:
                if ( (_DWORD)v148 == 176 || (_DWORD)v148 == 256 || (unsigned __int8)getinf_flag(67, 2) )
                  goto LABEL_267;
                goto LABEL_268;
              }
LABEL_422:
              LODWORD(v148) = getinf(99);
              goto LABEL_264;
            }
            if ( (unsigned int)v148 > 0x10 )
            {
LABEL_416:
              if ( (_DWORD)v148 != 176 && (_DWORD)v148 != 256 )
              {
                v80 = (unsigned __int8)getinf_flag(67, 4) == 0;
                v190 = v206;
                if ( v80 )
                  v190 = v198.m128i_i32[2];
                v198.m128i_i32[2] = v190;
              }
              goto LABEL_268;
            }
LABEL_425:
            LODWORD(v148) = getinf(99);
            goto LABEL_416;
          }
LABEL_409:
          if ( (unsigned int)v148 <= 0x10 )
          {
            v210 = v148;
            v197 = getinf(99);
            if ( v197 == 176 || v197 == 256 )
            {
              if ( v198.m128i_i32[2] > (int)v200 )
              {
                LODWORD(v206) = v200;
                goto LABEL_422;
              }
              LODWORD(v206) = v200;
              goto LABEL_425;
            }
            LODWORD(v148) = v210;
          }
          else if ( (_DWORD)v148 == 256 || (_DWORD)v148 == 176 )
          {
            v196 = v200;
            if ( v198.m128i_i32[2] <= (int)v200 )
              v196 = v198.m128i_i32[2];
            v198.m128i_i32[2] = v196;
            goto LABEL_268;
          }
          v210 = v148;
          if ( !(unsigned __int8)getinf_flag(67, 512) )
          {
            LODWORD(v148) = v210;
            LODWORD(v206) = v200;
            goto LABEL_262;
          }
LABEL_267:
          v198.m128i_i32[2] = v206;
LABEL_268:
          if ( *(_QWORD *)(v208 + 64) != ((v207 + v198.m128i_i32[2] - 1) & -v198.m128i_i32[2]) )
          {
            v56 = *(_QWORD *)(v9 + 32);
            v52 = v209;
            goto LABEL_80;
          }
LABEL_138:
          if ( *(_DWORD *)(v60 + 56) != 2 )
            goto LABEL_139;
          if ( v71 <= 0 || (v157 = *(_QWORD **)(v60 + 64), (v158 = v157[1]) == 0) )
          {
            if ( !under_debugger )
              sub_3835A0(52685);
            goto LABEL_470;
          }
          v159 = *v157 + 24 * v158 - 24;
          v160 = *(unsigned __int16 *)(v159 + 16);
          if ( v71 > v160 && v71 < v160 + *(unsigned __int16 *)(v159 + 18) )
          {
            *(_WORD *)(v159 + 18) = v71 - v160;
LABEL_139:
            v88 = v203;
            sub_126CF0(v60, v203, (unsigned int)v71, 0);
            v203 = v88;
            v89 = v88;
            v90 = v198.m128i_i64[0];
            sub_32C760(v198.m128i_i64[0], v89, (unsigned int)v71, 0);
            copy_tinfo_t(v60 + 24, v90);
            clear_tinfo_t(v90);
            sub_1C3B80(v203, v60 + 56, 0, (unsigned int)v71, *(unsigned int *)(v9 + 20));
            ++v52;
            ++a1[21].m128i_i32[2];
            v56 = *(_QWORD *)(v9 + 32);
            v57 = v52;
            goto LABEL_80;
          }
          goto LABEL_79;
        }
LABEL_450:
        v144 = (_DWORD *)(&qword_60 + 3);
        v146 = (unsigned int)getinf(99);
        goto LABEL_401;
      }
      if ( v210 <= 0x10 )
      {
        v194 = getinf(99);
        if ( v194 == 176 || v194 == 256 )
        {
          if ( v198.m128i_i32[2] > (int)v200 )
          {
            LODWORD(v206) = v200;
            goto LABEL_453;
          }
          LODWORD(v206) = v200;
          goto LABEL_450;
        }
        LODWORD(v146) = v210;
      }
      else if ( v210 == 256 || v210 == 176 )
      {
        v143 = v198.m128i_u32[2];
        v193 = v200;
        if ( v198.m128i_i32[2] <= (int)v200 )
          v193 = v198.m128i_i32[2];
        LODWORD(v206) = v193;
        goto LABEL_260;
      }
      v144 = (unsigned int *)(&dword_40 + 3);
      v210 = v146;
      if ( !(unsigned __int8)getinf_flag(67, 512) )
      {
        v146 = v210;
        LODWORD(v206) = v200;
        goto LABEL_253;
      }
      LODWORD(v148) = a1[8].m128i_i32[2];
      v207 = *(_QWORD *)(v207 + 64) + v71;
      goto LABEL_409;
    }
    v182 = v77 - 1;
    v183 = *(_QWORD *)(v140 + 64) + *(int *)(v140 + 4);
    v206 = v183;
    v184 = a1[8].m128i_u32[2];
    if ( ((unsigned int)v77 & ((_DWORD)v77 - 1)) != 0 )
      sub_F4E30(v72, v183, v184, v77, v76);
    if ( (int)v200 >= (int)v77 )
      goto LABEL_370;
    if ( (unsigned int)v184 > 0x10 )
    {
      if ( (_DWORD)v184 == 256 || (_DWORD)v184 == 176 )
      {
        LODWORD(v77) = v200;
        if ( v198.m128i_i32[2] <= (int)v200 )
          LODWORD(v77) = v198.m128i_i32[2];
        v182 = v77 - 1;
        goto LABEL_377;
      }
      goto LABEL_391;
    }
    LODWORD(v208) = a1[8].m128i_i32[2];
    v209 = v77;
    v195 = getinf(99);
    if ( v195 != 176 && v195 != 256 )
    {
      LODWORD(v77) = v209;
      LODWORD(v184) = v208;
LABEL_391:
      LODWORD(v208) = v184;
      v209 = v77;
      v188 = getinf_flag(67, 512);
      LODWORD(v77) = v209;
      if ( v188 )
        goto LABEL_377;
      LODWORD(v184) = v208;
      LODWORD(v77) = v200;
LABEL_370:
      if ( v198.m128i_i32[2] <= (int)v77 )
      {
        if ( (unsigned int)v184 <= 0x10 )
        {
LABEL_438:
          v209 = v77;
          v191 = getinf(99);
          LODWORD(v77) = v209;
          LODWORD(v184) = v191;
        }
        v209 = v77;
        if ( (_DWORD)v184 == 176 || (_DWORD)v184 == 256 )
        {
LABEL_376:
          LODWORD(v77) = v198.m128i_i32[2];
          v182 = v198.m128i_i32[2] - 1;
          goto LABEL_377;
        }
        v185 = getinf_flag(67, 4);
LABEL_375:
        LODWORD(v77) = v209;
        v182 = v209 - 1;
        if ( v185 )
          goto LABEL_377;
        goto LABEL_376;
      }
      if ( (unsigned int)v184 > 0x10 )
        goto LABEL_372;
      goto LABEL_441;
    }
    LODWORD(v77) = v200;
    if ( v198.m128i_i32[2] <= (int)v200 )
      goto LABEL_438;
    LODWORD(v77) = v200;
LABEL_441:
    v209 = v77;
    v192 = getinf(99);
    LODWORD(v77) = v209;
    LODWORD(v184) = v192;
LABEL_372:
    if ( (_DWORD)v184 != 176 && (_DWORD)v184 != 256 )
    {
      v209 = v77;
      v185 = getinf_flag(67, 2);
      goto LABEL_375;
    }
    v182 = v77 - 1;
LABEL_377:
    if ( *(_QWORD *)(v207 + 64) == (-(int)v77 & (unsigned __int64)(v206 + v182)) )
      goto LABEL_249;
LABEL_79:
    ++v52;
    v56 = *(_QWORD *)(v9 + 32);
    v57 = v52;
LABEL_80:
    if ( v57 >= v56 )
      goto LABEL_173;
  }
  if ( (*(_BYTE *)(v9 + 281) & 1) != 0 && *(_DWORD *)(v9 + 8) <= v52 )
    goto LABEL_79;
  if ( v202 )
  {
    v56 = *(_QWORD *)(v9 + 32);
    v57 = v52 + 1;
    if ( v57 != v56 )
    {
      ++v52;
      goto LABEL_80;
    }
  }
  if ( v204 )
  {
    v101 = (__m128i *)a1[3].m128i_i64[0];
    v102 = *(_QWORD *)v9;
    *(_QWORD *)v217 = &v213;
    v213 = v102;
    v103 = sub_FB100(v101, &v213, (__int64 **)v198.m128i_i64[0]);
    v104 = *(_QWORD *)(v103 + 40);
    v105 = *(int **)(v103 + 32);
    v106 = (_QWORD *)(v103 + 24);
    v107 = v103 + 32;
    v108 = 4 * v104;
    v109 = &v105[v104];
    if ( 4 * v104 )
    {
      v110 = v105;
      while ( v52 <= *v110 )
      {
        if ( v52 == *v110 )
          goto LABEL_171;
        if ( ++v110 == v109 )
          goto LABEL_240;
      }
      v111 = (char *)v110 - (char *)v105;
      if ( v106[3] < (unsigned __int64)(v104 + 1) )
      {
        v198.m128i_i64[1] = (char *)v110 - (char *)v105;
        v163 = qvector_reserve(v107, v105, v104 + 1, 4);
        v106[1] = v163;
        v111 = v198.m128i_i64[1];
        v110 = (int *)(v198.m128i_i64[1] + v163);
        v108 = 4LL * v106[2];
      }
      memmove(v110 + 1, v110, v108 - v111);
      *v110 = v52;
      ++v106[2];
    }
    else
    {
LABEL_240:
      if ( v106[3] < (unsigned __int64)(v104 + 1) )
      {
        v161 = qvector_reserve(v107, v105, v104 + 1, 4);
        v162 = v106[2];
        v106[1] = v161;
        v109 = (int *)(v161 + 4 * v162);
      }
      *v109 = v52;
      ++v106[2];
    }
LABEL_171:
    v101[1].m128i_i8[0] = 1;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(v60 + 56) != 1 && *(_DWORD *)(v9 + 8) > v52 || sub_F6620((__int64)a1, v9, v52) )
  {
    sub_63D40(v201, v52);
    goto LABEL_79;
  }
  sub_63E40(v201, v52, *(_DWORD *)(v9 + 32) - v52);
  v56 = *(_QWORD *)(v9 + 32);
LABEL_173:
  v112 = v201;
  sub_63DC0(v201, v56);
  v113 = 0;
  v114 = 0;
  if ( !(unsigned __int8)sub_64280(v112) )
  {
    v114 = sub_64600(v201) + 1;
    v113 = v114;
  }
  v115 = *(_QWORD *)(v9 + 32);
  if ( v113 < v115 )
  {
    v139 = v115 - v114;
    sub_81E80((_QWORD *)(v9 + 24), v113);
    if ( v114 < *(_DWORD *)(v9 + 8) )
      *(_DWORD *)(v9 + 8) = v114;
    a1[21].m128i_i32[2] += v139;
  }
  if ( !v204 )
  {
    *(_OWORD *)v217 = 0u;
    if ( (*(_BYTE *)(v203 + 48) & 8) != 0
      && ((*(_DWORD *)(v9 + 20) - 112) & 0xFFFFFFDF) == 0
      && (unsigned __int8)sub_64280(&a1[13].m128i_i64[1]) )
    {
      v170 = (int *)a1[15].m128i_i64[1];
      for ( i = &v170[a1[16].m128i_i64[0]]; i != v170; ++v170 )
      {
        v172 = *v170;
        if ( *v170 != -1 )
        {
          if ( sub_64330(v201, v172) )
          {
LABEL_399:
            *(_QWORD *)&v217[8] = 0;
            goto LABEL_179;
          }
          sub_63B90((__int64 *)v217, v172);
        }
      }
      v173 = (int *)a1[17].m128i_i64[0];
      for ( j = &v173[a1[17].m128i_i64[1]]; j != v173; ++v173 )
      {
        v175 = *v173;
        if ( *v173 != -1 )
        {
          if ( sub_64330(v201, v175) )
            goto LABEL_399;
          sub_63B90((__int64 *)v217, v175);
        }
      }
      *(_DWORD *)(v9 + 20) = 48;
    }
LABEL_179:
    v116 = 0;
    if ( *(_QWORD *)(v9 + 32) )
    {
      do
      {
        if ( !sub_64330(v201, v116) && sub_F6620((__int64)a1, v9, v116) )
          sub_63B90((__int64 *)v217, v116);
        ++v116;
        v117 = *(_QWORD *)(v9 + 32);
      }
      while ( v116 < v117 );
      v129 = v117 - 1;
      if ( v129 >= 0 )
      {
        v130 = 80LL * (unsigned int)v129;
        do
        {
          if ( sub_64330(v217, v129) )
          {
            v131 = (_QWORD *)(v130 + *(_QWORD *)(v9 + 24));
            cleanup_argloc(v131 + 7);
            v132 = v131[4];
            if ( v132 )
            {
              v131[5] = 0;
              qfree(v132);
            }
            clear_tinfo_t(v131 + 3);
            sub_11C7E0(v131);
            memmove(v131, v131 + 10, *(_QWORD *)(v9 + 24) + 80LL * *(_QWORD *)(v9 + 32) - (_QWORD)v131 - 80);
            v133 = *(_DWORD *)(v9 + 8);
            --*(_QWORD *)(v9 + 32);
            if ( v133 > v129 )
              *(_DWORD *)(v9 + 8) = v133 - 1;
            ++a1[21].m128i_i32[2];
          }
          --v129;
          v130 -= 80;
        }
        while ( v129 != -1 );
      }
    }
    qfree(*(_QWORD *)v217);
  }
  if ( !*(_QWORD *)(v9 + 32) && (v205 == 128 || (_BYTE)v199) )
    *(_DWORD *)(v9 + 20) = 32;
  qfree(v214[0]);
  return 0;
}
