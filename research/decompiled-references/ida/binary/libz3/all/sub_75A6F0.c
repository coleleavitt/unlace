__int64 __fastcall sub_75A6F0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r12
  unsigned int *i; // rbp
  _DWORD *v6; // rax
  int v7; // r8d
  int v8; // r9d
  unsigned int v9; // r12d
  void *v10; // rbp
  void *v11; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  int v15; // esi
  __int64 v16; // r9
  _QWORD *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r15
  __int64 v21; // rax
  void *v22; // r13
  void *v23; // r13
  __m128i v24; // xmm0
  unsigned int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // r10
  __int64 v28; // rdi
  int v29; // esi
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  void *v35; // r13
  void *v36; // r13
  __m128i *v37; // rax
  __m128i *j; // rdx
  unsigned __int64 v39; // rsi
  __int32 v40; // r9d
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r13
  bool v44; // cl
  __int8 v45; // al
  __m128i v46; // xmm0
  __int64 v47; // r13
  char v48; // al
  __int64 v49; // rax
  _QWORD *v50; // rsi
  char v51; // al
  __int64 v52; // rax
  char v53; // cl
  __m128i *v54; // rax
  __m128i si128; // xmm0
  __int8 v56; // dl
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  __m128i *v63; // rcx
  __int64 v64; // rax
  __int32 v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned int v68; // edx
  __int64 v69; // rax
  const __m128i *v70; // r12
  _DWORD *v71; // r8
  __int64 v72; // rax
  __int64 v73; // rdx
  const __m128i *v74; // rax
  const __m128i *v75; // r9
  _QWORD *v76; // rdx
  __int64 v77; // rcx
  __m128i v78; // xmm0
  __int8 v79; // di
  __int64 v80; // rcx
  __int8 v81; // di
  __int64 v82; // rcx
  __int8 v83; // di
  __int64 v84; // rcx
  __int8 v85; // di
  __int64 v86; // rcx
  __int64 v87; // rax
  const __m128i *v88; // rbp
  void *v89; // r13
  void *v90; // r13
  __int8 *v91; // rsi
  void *v92; // r13
  bool v93; // al
  void *v94; // r15
  void *v95; // r15
  __m128i v96; // xmm0
  _QWORD *v97; // rsi
  __int64 v98; // rax
  __m128i *v99; // rax
  __m128i v100; // xmm0
  __int8 v101; // dl
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rdx
  unsigned int v106; // edx
  __int64 v107; // rax
  const __m128i *v108; // r15
  _DWORD *v109; // r8
  __int64 v110; // rax
  __int64 v111; // rdx
  const __m128i *v112; // rax
  const __m128i *v113; // r9
  _QWORD *v114; // rdx
  __int64 v115; // rcx
  __m128i v116; // xmm0
  __int8 v117; // di
  __int64 v118; // rcx
  __int8 v119; // di
  __int64 v120; // rcx
  __int8 v121; // di
  __int64 v122; // rcx
  __int8 v123; // di
  __int64 v124; // rcx
  __int64 v125; // rax
  const __m128i *v126; // r12
  void *v127; // rbp
  void *v128; // rbp
  __int8 *v129; // rsi
  __int64 v130; // rax
  unsigned int v131; // ecx
  char *v132; // rdi
  unsigned int v133; // ecx
  __int64 v134; // rax
  char *v135; // r15
  char *v136; // r12
  void *v137; // rbp
  void *v138; // rbp
  char *v139; // rsi
  char v140; // al
  bool v141; // al
  void *v142; // r13
  bool v143; // al
  char v144; // dl
  _QWORD *v145; // rax
  char v146; // al
  _QWORD *v147; // rax
  __int32 v148; // eax
  char **exception; // rbp
  __int64 v150; // rdx
  char **v151; // rbp
  __int64 v152; // rdx
  __int32 v153; // [rsp+30h] [rbp-208h]
  __int64 v154; // [rsp+38h] [rbp-200h]
  unsigned int v155; // [rsp+38h] [rbp-200h]
  unsigned int v156; // [rsp+38h] [rbp-200h]
  _QWORD *v157; // [rsp+40h] [rbp-1F8h]
  int v158; // [rsp+40h] [rbp-1F8h]
  __int64 v159; // [rsp+40h] [rbp-1F8h]
  size_t v160; // [rsp+40h] [rbp-1F8h]
  __int64 v161; // [rsp+40h] [rbp-1F8h]
  _QWORD *v162; // [rsp+48h] [rbp-1F0h]
  _DWORD *v163; // [rsp+48h] [rbp-1F0h]
  _DWORD *v164; // [rsp+48h] [rbp-1F0h]
  _DWORD *v165; // [rsp+48h] [rbp-1F0h]
  unsigned int v166; // [rsp+48h] [rbp-1F0h]
  unsigned int v167; // [rsp+48h] [rbp-1F0h]
  _DWORD *v168; // [rsp+50h] [rbp-1E8h]
  const __m128i **v169; // [rsp+50h] [rbp-1E8h]
  size_t v170; // [rsp+50h] [rbp-1E8h]
  __int64 v171; // [rsp+50h] [rbp-1E8h]
  __int64 v172; // [rsp+50h] [rbp-1E8h]
  unsigned int *ptr; // [rsp+58h] [rbp-1E0h]
  int ptra; // [rsp+58h] [rbp-1E0h]
  unsigned int ptrb; // [rsp+58h] [rbp-1E0h]
  unsigned int *v176; // [rsp+60h] [rbp-1D8h]
  char v177; // [rsp+6Bh] [rbp-1CDh]
  __int64 v178; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v179[4]; // [rsp+80h] [rbp-1B8h] BYREF
  char v180[8]; // [rsp+A0h] [rbp-198h] BYREF
  __m128i v181; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v182; // [rsp+B8h] [rbp-180h]
  int v183[2]; // [rsp+C0h] [rbp-178h] BYREF
  __int64 v184; // [rsp+C8h] [rbp-170h]
  _QWORD v185[2]; // [rsp+D0h] [rbp-168h] BYREF
  _QWORD v186[2]; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v187[2]; // [rsp+F0h] [rbp-148h] BYREF
  int v188; // [rsp+100h] [rbp-138h]
  char v189; // [rsp+104h] [rbp-134h]
  _QWORD v190[14]; // [rsp+110h] [rbp-128h] BYREF
  __int64 v191; // [rsp+180h] [rbp-B8h]
  __int64 v192; // [rsp+188h] [rbp-B0h]
  _BYTE v193[24]; // [rsp+190h] [rbp-A8h] BYREF
  int v194[2]; // [rsp+1A8h] [rbp-90h] BYREF
  __int64 v195; // [rsp+1B0h] [rbp-88h]
  __int64 v196; // [rsp+1B8h] [rbp-80h] BYREF
  __int64 v197; // [rsp+1C0h] [rbp-78h]
  int v198[2]; // [rsp+1C8h] [rbp-70h] BYREF
  __int64 v199; // [rsp+1D0h] [rbp-68h]
  __int64 v200; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 v201; // [rsp+1E0h] [rbp-58h]
  __int64 v202; // [rsp+1E8h] [rbp-50h]
  char v203; // [rsp+1F0h] [rbp-48h]

  v4 = a2;
  for ( i = (unsigned int *)a1; !*(_WORD *)(v4 + 4); a3 ^= 1u )
  {
    v6 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
    if ( !v6 )
      break;
    if ( *v6 )
      break;
    if ( v6[1] != 8 )
      break;
    if ( *(_DWORD *)(v4 + 24) != 1 )
      break;
    v4 = *(_QWORD *)(v4 + 32);
  }
  v180[0] = 1;
  LODWORD(v182) = 0;
  BYTE4(v182) = 1;
  *(_QWORD *)v183 = 0;
  v184 = 0;
  v185[0] = 1;
  v185[1] = 0;
  v186[0] = 0;
  v186[1] = 0;
  v187[0] = 1;
  v187[1] = 0;
  v188 = 0;
  v189 = 1;
  v181 = 0;
  sub_182CBA0(qword_1C7F2C0, v185);
  BYTE4(v185[0]) &= ~1u;
  BYTE4(v186[0]) &= ~1u;
  LODWORD(v185[0]) = 1;
  LODWORD(v186[0]) = 0;
  sub_182CBA0(qword_1C7F2C0, v187);
  BYTE4(v187[0]) &= ~1u;
  LODWORD(v187[0]) = 1;
  v189 = 1;
  v9 = sub_754B30(a1, v4, &v178, (__int64)v180, v7, v8);
  if ( !(_BYTE)v9 )
    goto LABEL_5;
  if ( a3 )
  {
    if ( v180[0] )
    {
      v62 = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v182);
      if ( !BYTE4(v182) )
      {
        v181.m128i_i64[0] = 0;
        v181.m128i_i64[1] = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v182);
        BYTE4(v182) = 1;
        goto LABEL_8;
      }
      if ( v181.m128i_i64[0] )
      {
        if ( v181.m128i_i64[1] == v62 )
        {
          v181.m128i_i64[1] = v181.m128i_i64[0] - 1;
          v181.m128i_i64[0] = 0;
        }
        else
        {
          v67 = v181.m128i_i64[1] + 1;
          v181.m128i_i64[1] = v181.m128i_i64[0] - 1;
          v181.m128i_i64[0] = v67;
        }
        BYTE4(v182) = 0;
        goto LABEL_8;
      }
      if ( v181.m128i_i64[1] != v62 )
      {
        v66 = v181.m128i_i64[1] + 1;
        v181.m128i_i64[1] = 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v182);
        v181.m128i_i64[0] = v66;
        BYTE4(v182) = 0;
        goto LABEL_8;
      }
    }
    else if ( (unsigned __int8)sub_7553D0((__int64)v183, (__int64)v183) )
    {
      goto LABEL_8;
    }
    v9 = 0;
    goto LABEL_6;
  }
LABEL_8:
  v192 = 1;
  *(_OWORD *)v193 = 0u;
  v154 = v178;
  v191 = v178;
  *(_QWORD *)&v193[16] = 0x100000000LL;
  v202 = 0x100000000LL;
  *(_QWORD *)v194 = 0;
  v195 = 0;
  v196 = 1;
  v197 = 0;
  *(_QWORD *)v198 = 0;
  v199 = 0;
  v200 = 1;
  v201 = 0;
  sub_182CBA0(qword_1C7F2C0, &v196);
  BYTE4(v196) &= ~1u;
  LOBYTE(v198[1]) &= ~1u;
  LODWORD(v196) = 1;
  v198[0] = 0;
  sub_182CBA0(qword_1C7F2C0, &v200);
  v13 = *(unsigned int *)(a1 + 72);
  v14 = *(_QWORD **)(a1 + 64);
  LODWORD(v200) = 1;
  BYTE4(v200) &= ~1u;
  BYTE4(v202) = 1;
  v15 = *(_DWORD *)(v191 + 12);
  v16 = 112LL * (v15 & (unsigned int)(v13 - 1));
  v17 = &v14[(unsigned __int64)v16 / 8];
  v18 = 112 * v13;
  v19 = &v14[14 * v13];
  v20 = &v14[(unsigned __int64)v16 / 8];
  if ( v16 != v18 )
  {
    while ( 1 )
    {
      v21 = *v20;
      if ( *v20 > 1u )
        break;
      if ( !v21 )
        goto LABEL_15;
LABEL_12:
      v20 += 14;
      if ( v19 == v20 )
        goto LABEL_55;
    }
    if ( *(_DWORD *)(v21 + 12) != v15 || v191 != v21 )
      goto LABEL_12;
LABEL_33:
    v35 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v198);
    sub_182CBA0(v35, &v200);
    v36 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v194);
    sub_182CBA0(v36, &v196);
    LOBYTE(v190[0]) = 1;
    BYTE4(v190[3]) = 1;
    memset(&v190[1], 0, 20);
    sub_7547D0((__int64)&v190[4]);
    LOBYTE(v190[0]) = *((_BYTE *)v20 + 8);
    if ( LOBYTE(v190[0]) )
    {
      v37 = (__m128i *)(v20 + 2);
      for ( j = &v181; ; j = v63 )
      {
        v39 = v37->m128i_i64[0];
        if ( !v37->m128i_i64[0] )
        {
          v40 = v37[1].m128i_i32[0];
          v41 = v37->m128i_u64[1];
          v153 = v40;
          if ( v41 == 0xFFFFFFFFFFFFFFFFLL >> (64 - (unsigned __int8)v40) )
            goto LABEL_75;
          v42 = j->m128i_i64[0];
          v43 = j->m128i_u64[1];
          if ( !j->m128i_i64[0] )
          {
            if ( v41 != v43 )
            {
              if ( 0xFFFFFFFFFFFFFFFFLL >> (64 - j[1].m128i_i8[0]) != v43 )
              {
LABEL_42:
                v45 = v37[1].m128i_i8[4];
                if ( v45 )
                  v45 = j[1].m128i_i8[4];
                LODWORD(v190[3]) = v40;
                if ( v42 < v39 )
                  v42 = v39;
                BYTE4(v190[3]) = v45;
                if ( v43 <= v41 )
                  v41 = v43;
                v190[1] = v42;
                v190[2] = v41;
                goto LABEL_49;
              }
              goto LABEL_100;
            }
            if ( j[1].m128i_i8[4] != v37[1].m128i_i8[4] )
            {
              if ( 0xFFFFFFFFFFFFFFFFLL >> (64 - j[1].m128i_i8[0]) != v41 )
                goto LABEL_157;
              goto LABEL_100;
            }
            goto LABEL_75;
          }
          v44 = 0;
          if ( v43 >= v42 )
            goto LABEL_39;
          if ( v41 >= v42 )
            goto LABEL_75;
LABEL_105:
          v190[1] = v37->m128i_i64[0];
          if ( v43 <= v41 )
            v41 = v43;
          BYTE4(v190[3]) = 0;
          LODWORD(v190[3]) = v153;
          v190[2] = v41;
          goto LABEL_49;
        }
        v42 = j->m128i_i64[0];
        v43 = j->m128i_u64[1];
        if ( v39 == j->m128i_i64[0] )
        {
          v41 = v37->m128i_u64[1];
          if ( v41 == v43 && v37[1].m128i_i8[4] == j[1].m128i_i8[4] )
            goto LABEL_75;
        }
        else
        {
          if ( !v42 )
          {
            if ( 0xFFFFFFFFFFFFFFFFLL >> (64 - j[1].m128i_i8[0]) == v43 )
              goto LABEL_100;
            v41 = v37->m128i_u64[1];
            if ( v41 >= v39 )
            {
              v42 = v37->m128i_i64[0];
LABEL_157:
              v39 = v42;
              v42 = 0;
LABEL_158:
              v44 = v43 < v39;
LABEL_39:
              if ( v41 >= v42 && !v44 )
              {
                v40 = v37[1].m128i_i32[0];
                goto LABEL_42;
              }
LABEL_64:
              v9 = 0;
LABEL_65:
              sub_25A130((char *)&v190[8]);
              sub_25A130((char *)&v190[4]);
              goto LABEL_6;
            }
            goto LABEL_72;
          }
          v41 = v37->m128i_u64[1];
        }
        if ( v41 >= v39 )
        {
          if ( v43 >= v42 )
            goto LABEL_158;
          if ( v41 >= v42 )
          {
            if ( v43 < v39 )
            {
              v148 = v37[1].m128i_i32[0];
              v190[1] = j->m128i_i64[0];
              v190[2] = v41;
              LODWORD(v190[3]) = v148;
              BYTE4(v190[3]) = 0;
              goto LABEL_49;
            }
            goto LABEL_75;
          }
          if ( v43 < v39 )
            goto LABEL_64;
          v153 = v37[1].m128i_i32[0];
          goto LABEL_105;
        }
        if ( v43 < v42 )
        {
          if ( v41 < v42 )
          {
            if ( v43 < v39 )
            {
              v65 = v37[1].m128i_i32[0];
              BYTE4(v190[3]) = 0;
              if ( v39 >= v42 )
                v42 = v39;
              if ( v41 > v43 )
                v41 = v43;
              LODWORD(v190[3]) = v65;
              v190[1] = v42;
              v190[2] = v41;
              goto LABEL_49;
            }
LABEL_100:
            *(__m128i *)&v190[1] = _mm_loadu_si128(v37);
            *(_QWORD *)((char *)&v190[2] + 5) = *(__int64 *)((char *)&v37->m128i_i64[1] + 5);
            goto LABEL_49;
          }
LABEL_75:
          *(__m128i *)&v190[1] = _mm_loadu_si128(j);
          *(_QWORD *)((char *)&v190[2] + 5) = *(__int64 *)((char *)&j->m128i_i64[1] + 5);
          goto LABEL_49;
        }
LABEL_72:
        v63 = v37;
        v37 = j;
      }
    }
    if ( !(unsigned __int8)sub_757E00((__int64)(v20 + 5), (__int64)v183, (__int64)&v190[4]) )
      goto LABEL_64;
LABEL_49:
    if ( *((_BYTE *)v20 + 8) )
    {
      if ( *((_OWORD *)v20 + 1) == *(_OWORD *)&v190[1] && *((_BYTE *)v20 + 36) == BYTE4(v190[3]) )
        goto LABEL_65;
    }
    else
    {
      v92 = qword_1C7F2C0;
      if ( (*((_BYTE *)v20 + 44) & 1) != 0 || (v190[4] & 0x100000000LL) != 0 )
        v93 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v20 + 5, &v190[4]) == 0;
      else
        v93 = *((_DWORD *)v20 + 10) == LODWORD(v190[4]);
      if ( !v93 )
        goto LABEL_51;
      v141 = (*((_BYTE *)v20 + 60) & 1) != 0 || (v190[6] & 0x100000000LL) != 0
           ? (unsigned int)sub_182C7B0(v92, v20 + 7, &v190[6]) == 0
           : *((_DWORD *)v20 + 14) == LODWORD(v190[6]);
      v142 = qword_1C7F2C0;
      if ( !v141 )
        goto LABEL_51;
      if ( (*((_BYTE *)v20 + 76) & 1) != 0 || (v190[8] & 0x100000000LL) != 0 )
      {
        if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, v20 + 9, &v190[8]) )
          goto LABEL_51;
      }
      else if ( *((_DWORD *)v20 + 18) != LODWORD(v190[8]) )
      {
        goto LABEL_51;
      }
      if ( (*((_BYTE *)v20 + 92) & 1) != 0 || (v190[10] & 0x100000000LL) != 0 )
        v143 = (unsigned int)sub_182C7B0(v142, v20 + 11, &v190[10]) == 0;
      else
        v143 = *((_DWORD *)v20 + 22) == LODWORD(v190[10]);
      if ( v143 && *((_BYTE *)v20 + 108) == BYTE4(v190[12]) )
        goto LABEL_65;
    }
LABEL_51:
    v46 = _mm_loadu_si128((const __m128i *)v20 + 1);
    v47 = (__int64)(v20 + 5);
    v191 = v154;
    v48 = *((_BYTE *)v20 + 8);
    *(__m128i *)v193 = v46;
    LOBYTE(v192) = v48;
    v49 = v20[4];
    *(_QWORD *)v194 = 0;
    *(_QWORD *)&v193[16] = v49;
    v195 = 0;
    v196 = 1;
    v197 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v194, (int *)v20 + 10);
    *(_QWORD *)v198 = 0;
    v199 = 0;
    v200 = 1;
    v201 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)v198, (int *)v20 + 18);
    v50 = *((_QWORD **)i + 5);
    LODWORD(v202) = *((_DWORD *)v20 + 26);
    v51 = *((_BYTE *)v20 + 108);
    v203 = 0;
    BYTE4(v202) = v51;
    if ( v50 )
    {
      v52 = *((unsigned int *)v50 - 1);
      if ( (_DWORD)v52 == *((_DWORD *)v50 - 2) )
      {
        v155 = (unsigned int)(3 * v52 + 1) >> 1;
        v68 = 120 * v155 + 8;
        if ( 120 * (int)v52 + 8 >= v68 || (unsigned int)v52 >= (unsigned int)(3 * v52 + 1) >> 1 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_10DC44(v179, "Overflow encountered when expanding vector", v150);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v179);
          sub_233E40((__int64)v179);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v69 = sub_186B270(v68);
        v70 = *((const __m128i **)i + 5);
        v71 = (_DWORD *)v69;
        v50 = (_QWORD *)(v69 + 8);
        if ( v70 )
        {
          v72 = v70[-1].m128i_u32[3];
          v71[1] = v72;
          v73 = 15 * v72;
          v74 = v70;
          v75 = (const __m128i *)((char *)v70 + 8 * v73);
          v76 = v50;
          if ( v75 != v70 )
          {
            do
            {
              v77 = v74->m128i_i64[0];
              v78 = _mm_loadu_si128(v74 + 1);
              v74 = (const __m128i *)((char *)v74 + 120);
              v76 += 15;
              v79 = v74[-5].m128i_i8[4];
              *(v76 - 15) = v77;
              LOBYTE(v77) = v74[-7].m128i_i8[0];
              *(__m128i *)(v76 - 13) = v78;
              *((_BYTE *)v76 - 112) = v77;
              *(v76 - 11) = v74[-6].m128i_i64[1];
              *((_DWORD *)v76 - 20) = v74[-5].m128i_i32[0];
              *((_BYTE *)v76 - 76) = v79 & 3 | *((_BYTE *)v76 - 76) & 0xFC;
              v80 = v74[-5].m128i_i64[1];
              v74[-5].m128i_i64[1] = 0;
              *(v76 - 9) = v80;
              v81 = v74[-4].m128i_i8[4];
              *((_DWORD *)v76 - 16) = v74[-4].m128i_i32[0];
              *((_BYTE *)v76 - 60) = v81 & 3 | *((_BYTE *)v76 - 60) & 0xFC;
              v82 = v74[-4].m128i_i64[1];
              v74[-4].m128i_i64[1] = 0;
              *(v76 - 7) = v82;
              v83 = v74[-3].m128i_i8[4];
              *((_DWORD *)v76 - 12) = v74[-3].m128i_i32[0];
              *((_BYTE *)v76 - 44) = v83 & 3 | *((_BYTE *)v76 - 44) & 0xFC;
              v84 = v74[-3].m128i_i64[1];
              v74[-3].m128i_i64[1] = 0;
              *(v76 - 5) = v84;
              v85 = v74[-2].m128i_i8[4];
              *((_DWORD *)v76 - 8) = v74[-2].m128i_i32[0];
              *((_BYTE *)v76 - 28) = v85 & 3 | *((_BYTE *)v76 - 28) & 0xFC;
              v86 = v74[-2].m128i_i64[1];
              v74[-2].m128i_i64[1] = 0;
              *(v76 - 3) = v86;
              *((_DWORD *)v76 - 4) = v74[-1].m128i_i32[0];
              *((_BYTE *)v76 - 12) = v74[-1].m128i_i8[4];
              *((_BYTE *)v76 - 8) = v74[-1].m128i_i8[8];
            }
            while ( v75 != v74 );
          }
          v87 = v70[-1].m128i_u32[3];
          if ( (_DWORD)v87 )
          {
            v162 = v50;
            v168 = v71;
            ptr = i;
            v88 = (const __m128i *)((char *)v70 + 120 * v87);
            do
            {
              v89 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v70[4].m128i_u64[1]);
              sub_182CBA0(v89, &v70[5].m128i_u64[1]);
              v90 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v70[2].m128i_u64[1]);
              v91 = &v70[3].m128i_i8[8];
              v70 = (const __m128i *)((char *)v70 + 120);
              sub_182CBA0(v90, v91);
            }
            while ( v88 != v70 );
            i = ptr;
            v47 = (__int64)(v20 + 5);
            v50 = v162;
            v71 = v168;
            v70 = *((const __m128i **)ptr + 5);
          }
          v163 = v71;
          sub_186B220(&v70[-1].m128i_u64[1]);
          v71 = v163;
          v54 = (__m128i *)&v50[15 * (unsigned int)v163[1]];
        }
        else
        {
          *(_DWORD *)(v69 + 4) = 0;
          v54 = (__m128i *)(v69 + 8);
        }
        v53 = v203;
        *((_QWORD *)i + 5) = v50;
        *v71 = v155;
      }
      else
      {
        v53 = 0;
        v54 = (__m128i *)&v50[15 * v52];
      }
    }
    else
    {
      v147 = (_QWORD *)sub_186B270(0xF8u);
      *v147 = 2;
      v53 = v203;
      v50 = v147 + 1;
      *((_QWORD *)i + 5) = v147 + 1;
      v54 = (__m128i *)(v147 + 1);
    }
    si128 = _mm_load_si128((const __m128i *)v193);
    v54->m128i_i64[0] = v191;
    v56 = v192;
    v54[1] = si128;
    v54->m128i_i8[8] = v56;
    v54[2].m128i_i64[0] = *(_QWORD *)&v193[16];
    v54[2].m128i_i32[2] = v194[0];
    v54[2].m128i_i8[12] = v194[1] & 3 | v54[2].m128i_i8[12] & 0xFC;
    v57 = v195;
    v195 = 0;
    v54[3].m128i_i64[0] = v57;
    v54[3].m128i_i32[2] = v196;
    v54[3].m128i_i8[12] = BYTE4(v196) & 3 | v54[3].m128i_i8[12] & 0xFC;
    v58 = v197;
    v197 = 0;
    v54[4].m128i_i64[0] = v58;
    v54[4].m128i_i32[2] = v198[0];
    v54[4].m128i_i8[12] = v198[1] & 3 | v54[4].m128i_i8[12] & 0xFC;
    v59 = v199;
    v199 = 0;
    v54[5].m128i_i64[0] = v59;
    v54[5].m128i_i32[2] = v200;
    v54[5].m128i_i8[12] = BYTE4(v200) & 3 | v54[5].m128i_i8[12] & 0xFC;
    v60 = v201;
    v201 = 0;
    v54[6].m128i_i64[0] = v60;
    v54[6].m128i_i32[2] = v202;
    LOBYTE(v60) = BYTE4(v202);
    v54[7].m128i_i8[0] = v53;
    v54[6].m128i_i8[12] = v60;
    ++*((_DWORD *)v50 - 1);
    sub_25A130((char *)v198);
    sub_25A130((char *)v194);
    *((_BYTE *)v20 + 8) = v190[0];
    *((__m128i *)v20 + 1) = _mm_loadu_si128((const __m128i *)&v190[1]);
    *(_QWORD *)((char *)v20 + 29) = *(_QWORD *)((char *)&v190[2] + 5);
    sub_751B90(v47, (int *)&v190[4]);
    sub_25A130((char *)&v190[8]);
    sub_25A130((char *)&v190[4]);
    goto LABEL_5;
  }
LABEL_55:
  while ( v17 != v14 )
  {
    v61 = *v14;
    if ( *v14 > 1u )
    {
      if ( *(_DWORD *)(v61 + 12) == v15 && v191 == v61 )
      {
        v20 = v14;
        goto LABEL_33;
      }
    }
    else if ( !v61 )
    {
      break;
    }
    v14 += 14;
  }
LABEL_15:
  v22 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v198);
  sub_182CBA0(v22, &v200);
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v194);
  sub_182CBA0(v23, &v196);
  v24 = _mm_loadu_si128(&v181);
  *(_QWORD *)v194 = 0;
  v191 = v154;
  v195 = 0;
  LOBYTE(v192) = v180[0];
  v196 = 1;
  *(_QWORD *)&v193[16] = v182;
  v197 = 0;
  *(__m128i *)v193 = v24;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v194, v183);
  *(_QWORD *)v198 = 0;
  v199 = 0;
  v200 = 1;
  v201 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v198, (int *)v186);
  v25 = i[18];
  LODWORD(v202) = v188;
  BYTE4(v202) = v189;
  if ( 3 * v25 < 4 * (i[19] + i[20]) )
  {
    ptra = 2 * v25;
    v158 = 2 * v25;
    v170 = 224LL * v25;
    v130 = sub_186B270(v170);
    v131 = v158;
    v159 = v130;
    v166 = v131;
    sub_751C60(v130, v131);
    sub_75A420(*((__int64 **)i + 8), i[18], v159, v166);
    v132 = *((char **)i + 8);
    v26 = v159;
    v133 = v166;
    v27 = v170;
    v25 = ptra;
    if ( v132 )
    {
      v134 = i[18];
      if ( (_DWORD)v134 )
      {
        v160 = v170;
        v135 = *((char **)i + 8);
        v171 = v26;
        v176 = i;
        v177 = v9;
        v136 = &v132[112 * v134];
        do
        {
          v137 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v135 + 72);
          sub_182CBA0(v137, v135 + 88);
          v138 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v135 + 40);
          v139 = v135 + 56;
          v135 += 112;
          sub_182CBA0(v138, v139);
        }
        while ( v136 != v135 );
        v27 = v160;
        v25 = ptra;
        v26 = v171;
        LOBYTE(v9) = v177;
        i = v176;
        v133 = v166;
      }
      ptrb = v133;
      v172 = v26;
      v167 = v25;
      v161 = v27;
      sub_186B220(v132);
      v27 = v161;
      v25 = v167;
      v26 = v172;
      v133 = ptrb;
    }
    *((_QWORD *)i + 8) = v26;
    i[18] = v133;
    i[20] = 0;
  }
  else
  {
    v26 = *((_QWORD *)i + 8);
    v27 = 112LL * v25;
  }
  v28 = v191;
  v29 = *(_DWORD *)(v191 + 12);
  v30 = 112LL * (v29 & (v25 - 1));
  v31 = v26 + v30;
  if ( v27 == v30 )
  {
    v33 = 0;
LABEL_77:
    if ( v26 == v31 )
    {
LABEL_124:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      v64 = *(_QWORD *)v26;
      if ( *(_QWORD *)v26 > 1u )
      {
        if ( *(_DWORD *)(v64 + 12) == v29 && v191 == v64 )
        {
          v146 = v192;
          *(_QWORD *)v26 = v191;
          *(_BYTE *)(v26 + 8) = v146;
          *(__m128i *)(v26 + 16) = _mm_load_si128((const __m128i *)v193);
          *(_QWORD *)(v26 + 29) = *(_QWORD *)&v193[13];
          sub_751900((int *)(v26 + 40), v194);
          goto LABEL_125;
        }
      }
      else
      {
        if ( !v64 )
        {
          if ( v33 )
            goto LABEL_148;
          v33 = v26;
          goto LABEL_149;
        }
        v33 = v26;
      }
      v26 += 112;
      if ( v31 == v26 )
        goto LABEL_124;
    }
  }
  v32 = v26 + v30;
  v33 = 0;
  while ( 1 )
  {
    v34 = *(_QWORD *)v32;
    if ( *(_QWORD *)v32 <= 1u )
      break;
    if ( *(_DWORD *)(v34 + 12) == v29 && v191 == v34 )
    {
      v144 = v192;
      *(_QWORD *)v32 = v191;
      *(_BYTE *)(v32 + 8) = v144;
      *(__m128i *)(v32 + 16) = _mm_load_si128((const __m128i *)v193);
      *(_QWORD *)(v32 + 29) = *(_QWORD *)&v193[13];
      sub_751900((int *)(v32 + 40), v194);
      goto LABEL_125;
    }
LABEL_21:
    v32 += 112;
    if ( v26 + v27 == v32 )
      goto LABEL_77;
  }
  if ( v34 )
  {
    v33 = v32;
    goto LABEL_21;
  }
  if ( v33 )
LABEL_148:
    --i[20];
  else
    v33 = v32;
LABEL_149:
  v140 = v192;
  *(_QWORD *)v33 = v28;
  *(_BYTE *)(v33 + 8) = v140;
  *(__m128i *)(v33 + 16) = _mm_load_si128((const __m128i *)v193);
  *(_QWORD *)(v33 + 29) = *(_QWORD *)&v193[13];
  sub_751900((int *)(v33 + 40), v194);
  ++i[19];
LABEL_125:
  v94 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v198);
  sub_182CBA0(v94, &v200);
  v95 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v194);
  sub_182CBA0(v95, &v196);
  memset(v190, 0, 0x68u);
  LOBYTE(v190[0]) = 1;
  BYTE4(v190[3]) = 1;
  sub_7547D0((__int64)&v190[4]);
  *(_QWORD *)v194 = 0;
  v96 = _mm_loadu_si128((const __m128i *)&v190[1]);
  v195 = 0;
  v191 = v154;
  *(__m128i *)v193 = v96;
  LOBYTE(v192) = v190[0];
  v196 = 1;
  *(_QWORD *)&v193[16] = v190[3];
  v197 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v194, (int *)&v190[4]);
  *(_QWORD *)v198 = 0;
  v199 = 0;
  v200 = 1;
  v201 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v198, (int *)&v190[8]);
  v97 = *((_QWORD **)i + 5);
  v203 = 1;
  LODWORD(v202) = v190[12];
  BYTE4(v202) = BYTE4(v190[12]);
  if ( v97 )
  {
    v98 = *((unsigned int *)v97 - 1);
    if ( (_DWORD)v98 == *((_DWORD *)v97 - 2) )
    {
      v156 = (unsigned int)(3 * v98 + 1) >> 1;
      v106 = 120 * v156 + 8;
      if ( 120 * (int)v98 + 8 >= v106 || (unsigned int)v98 >= (unsigned int)(3 * v98 + 1) >> 1 )
      {
        v151 = (char **)__cxa_allocate_exception(0x28u);
        sub_10DC44(v179, "Overflow encountered when expanding vector", v152);
        *v151 = (char *)off_1C63128;
        sub_2333C0(v151 + 1, v179);
        sub_233E40((__int64)v179);
        __cxa_throw(v151, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v107 = sub_186B270(v106);
      v108 = *((const __m128i **)i + 5);
      v109 = (_DWORD *)v107;
      v97 = (_QWORD *)(v107 + 8);
      if ( v108 )
      {
        v110 = v108[-1].m128i_u32[3];
        v109[1] = v110;
        v111 = 15 * v110;
        v112 = v108;
        v113 = (const __m128i *)((char *)v108 + 8 * v111);
        v114 = v97;
        if ( v113 != v108 )
        {
          do
          {
            v115 = v112->m128i_i64[0];
            v116 = _mm_loadu_si128(v112 + 1);
            v112 = (const __m128i *)((char *)v112 + 120);
            v114 += 15;
            v117 = v112[-5].m128i_i8[4];
            *(v114 - 15) = v115;
            LOBYTE(v115) = v112[-7].m128i_i8[0];
            *(__m128i *)(v114 - 13) = v116;
            *((_BYTE *)v114 - 112) = v115;
            *(v114 - 11) = v112[-6].m128i_i64[1];
            *((_DWORD *)v114 - 20) = v112[-5].m128i_i32[0];
            *((_BYTE *)v114 - 76) = v117 & 3 | *((_BYTE *)v114 - 76) & 0xFC;
            v118 = v112[-5].m128i_i64[1];
            v112[-5].m128i_i64[1] = 0;
            *(v114 - 9) = v118;
            v119 = v112[-4].m128i_i8[4];
            *((_DWORD *)v114 - 16) = v112[-4].m128i_i32[0];
            *((_BYTE *)v114 - 60) = v119 & 3 | *((_BYTE *)v114 - 60) & 0xFC;
            v120 = v112[-4].m128i_i64[1];
            v112[-4].m128i_i64[1] = 0;
            *(v114 - 7) = v120;
            v121 = v112[-3].m128i_i8[4];
            *((_DWORD *)v114 - 12) = v112[-3].m128i_i32[0];
            *((_BYTE *)v114 - 44) = v121 & 3 | *((_BYTE *)v114 - 44) & 0xFC;
            v122 = v112[-3].m128i_i64[1];
            v112[-3].m128i_i64[1] = 0;
            *(v114 - 5) = v122;
            v123 = v112[-2].m128i_i8[4];
            *((_DWORD *)v114 - 8) = v112[-2].m128i_i32[0];
            *((_BYTE *)v114 - 28) = v123 & 3 | *((_BYTE *)v114 - 28) & 0xFC;
            v124 = v112[-2].m128i_i64[1];
            v112[-2].m128i_i64[1] = 0;
            *(v114 - 3) = v124;
            *((_DWORD *)v114 - 4) = v112[-1].m128i_i32[0];
            *((_BYTE *)v114 - 12) = v112[-1].m128i_i8[4];
            *((_BYTE *)v114 - 8) = v112[-1].m128i_i8[8];
          }
          while ( v113 != v112 );
        }
        v125 = v108[-1].m128i_u32[3];
        if ( (_DWORD)v125 )
        {
          v157 = v97;
          v164 = v109;
          v169 = (const __m128i **)i;
          v126 = (const __m128i *)((char *)v108 + 120 * v125);
          do
          {
            v127 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v108[4].m128i_u64[1]);
            sub_182CBA0(v127, &v108[5].m128i_u64[1]);
            v128 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v108[2].m128i_u64[1]);
            v129 = &v108[3].m128i_i8[8];
            v108 = (const __m128i *)((char *)v108 + 120);
            sub_182CBA0(v128, v129);
          }
          while ( v126 != v108 );
          i = (unsigned int *)v169;
          v97 = v157;
          v109 = v164;
          v108 = v169[5];
        }
        v165 = v109;
        sub_186B220(&v108[-1].m128i_u64[1]);
        v109 = v165;
        v99 = (__m128i *)&v97[15 * (unsigned int)v165[1]];
      }
      else
      {
        *(_DWORD *)(v107 + 4) = 0;
        v99 = (__m128i *)(v107 + 8);
      }
      *((_QWORD *)i + 5) = v97;
      LOBYTE(v9) = v203;
      *v109 = v156;
    }
    else
    {
      v99 = (__m128i *)&v97[15 * v98];
    }
  }
  else
  {
    v145 = (_QWORD *)sub_186B270(0xF8u);
    *v145 = 2;
    LOBYTE(v9) = v203;
    v97 = v145 + 1;
    *((_QWORD *)i + 5) = v145 + 1;
    v99 = (__m128i *)(v145 + 1);
  }
  v100 = _mm_load_si128((const __m128i *)v193);
  v99->m128i_i64[0] = v191;
  v101 = v192;
  v99[1] = v100;
  v99->m128i_i8[8] = v101;
  v99[2].m128i_i64[0] = *(_QWORD *)&v193[16];
  v99[2].m128i_i32[2] = v194[0];
  v99[2].m128i_i8[12] = v194[1] & 3 | v99[2].m128i_i8[12] & 0xFC;
  v102 = v195;
  v195 = 0;
  v99[3].m128i_i64[0] = v102;
  v99[3].m128i_i32[2] = v196;
  v99[3].m128i_i8[12] = BYTE4(v196) & 3 | v99[3].m128i_i8[12] & 0xFC;
  v103 = v197;
  v197 = 0;
  v99[4].m128i_i64[0] = v103;
  v99[4].m128i_i32[2] = v198[0];
  v99[4].m128i_i8[12] = v198[1] & 3 | v99[4].m128i_i8[12] & 0xFC;
  v104 = v199;
  v199 = 0;
  v99[5].m128i_i64[0] = v104;
  v99[5].m128i_i32[2] = v200;
  v99[5].m128i_i8[12] = BYTE4(v200) & 3 | v99[5].m128i_i8[12] & 0xFC;
  v105 = v201;
  v201 = 0;
  v99[6].m128i_i64[0] = v105;
  v99[6].m128i_i32[2] = v202;
  LOBYTE(v105) = BYTE4(v202);
  v99[7].m128i_i8[0] = v9;
  v99[6].m128i_i8[12] = v105;
  ++*((_DWORD *)v97 - 1);
  sub_25A130((char *)v198);
  sub_25A130((char *)v194);
  sub_25A130((char *)&v190[8]);
  sub_25A130((char *)&v190[4]);
LABEL_5:
  v9 = 1;
LABEL_6:
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v186);
  sub_182CBA0(v10, v187);
  v11 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v183);
  sub_182CBA0(v11, v185);
  return v9;
}

