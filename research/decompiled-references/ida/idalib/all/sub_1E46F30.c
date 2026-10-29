unsigned __int64 __fastcall sub_1E46F30(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __m128 a5,
        __m128 a6,
        __m128i a7,
        __m128i a8,
        double a9,
        double a10,
        __m128 a11,
        __m128i a12)
{
  __int64 v14; // rbx
  unsigned __int64 v15; // rax
  bool v16; // di
  __int64 v17; // rsi
  char *v18; // rax
  __int64 v19; // rax
  __int64 *v20; // r12
  __int64 v21; // rsi
  char *v22; // rdi
  __int64 v23; // rax
  unsigned int v24; // r15d
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // r12
  __int64 v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  __int64 *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rax
  void *v41; // rdi
  void *v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rcx
  char v45; // al
  unsigned __int64 v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rsi
  unsigned __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  unsigned __int64 v61; // rsi
  _QWORD *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rsi
  __int64 v65; // rdx
  __int64 v67; // rax
  unsigned __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // rax
  _BYTE *v75; // rdx
  _DWORD *v76; // rax
  _WORD *v77; // r14
  unsigned __int64 v78; // r14
  __int64 v79; // r14
  __int64 v80; // rax
  int v81; // r15d
  __int64 v82; // rax
  unsigned __int64 v83; // rsi
  double v84; // xmm4_8
  double v85; // xmm5_8
  unsigned __int64 v86; // rax
  __m128 v87; // xmm0
  __m128 v88; // xmm1
  unsigned int *v89; // rax
  unsigned int *v90; // r15
  void **v91; // rsi
  __int64 *v92; // rdi
  int v93; // eax
  __int64 v94; // rcx
  const __m128i *v95; // rsi
  unsigned int *v96; // r9
  __int64 v97; // r13
  __int64 *v98; // r15
  unsigned __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rax
  unsigned __int64 v102; // rdx
  _BYTE *v103; // rax
  char *v104; // rax
  __int64 v105; // r14
  __int64 v106; // rax
  _QWORD *v107; // rsi
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned __int64 v114; // rsi
  void *v115; // rdi
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // rdi
  __int64 v121; // rax
  unsigned __int64 v122; // rax
  unsigned __int64 v123; // rdx
  __int64 *v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r15
  int v128; // ebx
  __int64 v129; // r12
  _QWORD *v130; // rax
  __int64 v131; // r15
  __int64 v132; // r9
  unsigned __int64 v133; // r13
  unsigned int v134; // eax
  unsigned __int64 v135; // rax
  __int64 v136; // r13
  unsigned __int8 v137; // al
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  char v141; // al
  int v142; // eax
  __int64 v143; // rdx
  void **v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rdx
  __int64 v147; // rcx
  __int64 v148; // r8
  __int64 v149; // r9
  unsigned __int64 *v150; // rax
  unsigned __int64 v151; // rdx
  unsigned __int64 v152; // rcx
  unsigned __int64 v153; // rax
  int *v154; // rbx
  unsigned int v155; // r13d
  unsigned __int64 v156; // rax
  __int64 v157; // r8
  __int64 v158; // r9
  int v159; // r14d
  int v160; // esi
  _QWORD *v161; // rdx
  int v162; // rax^4
  const __m128i *v163; // r15
  __int64 v164; // rax
  __int64 v165; // rdi
  __int64 v166; // rcx
  __int64 v167; // rdx
  unsigned __int64 v168; // rax
  __int64 v169; // rcx
  unsigned int *v170; // rax
  bool v171; // r12
  int v172; // rax^4
  __int64 v173; // rdx
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r8
  __int64 v177; // r9
  unsigned __int64 v178; // rdi
  unsigned __int8 v179; // dl
  int v180; // eax
  __int64 v181; // [rsp-8h] [rbp-3E0h]
  __int64 v182; // [rsp+10h] [rbp-3C8h]
  unsigned int *v184; // [rsp+30h] [rbp-3A8h]
  char v185; // [rsp+30h] [rbp-3A8h]
  unsigned __int64 v186; // [rsp+40h] [rbp-398h]
  char v187; // [rsp+40h] [rbp-398h]
  __int64 v188; // [rsp+48h] [rbp-390h]
  unsigned __int64 v189; // [rsp+50h] [rbp-388h]
  __int64 v190; // [rsp+50h] [rbp-388h]
  int v191; // [rsp+50h] [rbp-388h]
  __int64 v192; // [rsp+58h] [rbp-380h]
  __int64 v193; // [rsp+58h] [rbp-380h]
  __int64 v194; // [rsp+60h] [rbp-378h]
  unsigned __int64 v195; // [rsp+60h] [rbp-378h]
  bool v196; // [rsp+6Bh] [rbp-36Dh]
  unsigned int v197; // [rsp+6Ch] [rbp-36Ch]
  __int64 v198; // [rsp+70h] [rbp-368h]
  unsigned __int64 *v199; // [rsp+88h] [rbp-350h] BYREF
  __int64 v200[2]; // [rsp+90h] [rbp-348h] BYREF
  _BYTE v201[16]; // [rsp+A0h] [rbp-338h] BYREF
  __m128i v202; // [rsp+B0h] [rbp-328h] BYREF
  __m128i v203; // [rsp+C0h] [rbp-318h] BYREF
  __int64 v204; // [rsp+D0h] [rbp-308h]
  void *v205; // [rsp+E0h] [rbp-2F8h] BYREF
  __int64 v206; // [rsp+E8h] [rbp-2F0h]
  _BYTE s[32]; // [rsp+F0h] [rbp-2E8h] BYREF
  void *v208; // [rsp+110h] [rbp-2C8h] BYREF
  __int64 v209; // [rsp+118h] [rbp-2C0h]
  _BYTE v210[32]; // [rsp+120h] [rbp-2B8h] BYREF
  _QWORD v211[2]; // [rsp+140h] [rbp-298h] BYREF
  char v212; // [rsp+150h] [rbp-288h] BYREF
  _QWORD v213[2]; // [rsp+190h] [rbp-248h] BYREF
  _QWORD v214[2]; // [rsp+1A0h] [rbp-238h] BYREF
  char v215; // [rsp+1B0h] [rbp-228h]
  bool v216; // [rsp+1B1h] [rbp-227h]
  char v217; // [rsp+1B2h] [rbp-226h]
  __int64 v218; // [rsp+1B8h] [rbp-220h]
  __int64 v219; // [rsp+1D0h] [rbp-208h] BYREF
  _QWORD *v220; // [rsp+1D8h] [rbp-200h] BYREF
  __int64 v221; // [rsp+1E0h] [rbp-1F8h]
  _BYTE v222[64]; // [rsp+1E8h] [rbp-1F0h] BYREF
  void *v223[2]; // [rsp+228h] [rbp-1B0h]
  __int64 v224; // [rsp+238h] [rbp-1A0h]
  unsigned __int64 v225; // [rsp+240h] [rbp-198h]
  __m128 v226; // [rsp+248h] [rbp-190h]
  __int64 v227; // [rsp+258h] [rbp-180h]
  __int64 v228; // [rsp+260h] [rbp-178h]
  __int64 v229; // [rsp+268h] [rbp-170h]
  __int64 v230; // [rsp+270h] [rbp-168h]
  void *ptr[2]; // [rsp+280h] [rbp-158h] BYREF
  void *v232[2]; // [rsp+290h] [rbp-148h] BYREF
  __int128 v233; // [rsp+2A0h] [rbp-138h]
  int v234; // [rsp+2F0h] [rbp-E8h]
  char v235; // [rsp+2F4h] [rbp-E4h]
  __int64 v236; // [rsp+390h] [rbp-48h]

  v14 = a2;
  v15 = sub_B77A30(a2);
  v182 = v15;
  if ( v15 && !a3 )
  {
    v62 = (_QWORD *)v15;
    v63 = *(_QWORD *)a1[4];
    v64 = *(_QWORD *)(v63 + 8);
    v65 = *(_QWORD *)(v63 + 16);
    ptr[0] = nullptr;
    v46 = sub_BC3B30(v62, v64, v65, (__int64)ptr);
    if ( v46 )
      return v46;
  }
  else if ( !v15 )
  {
    v16 = 1;
    v196 = (*(_WORD *)(a2 + 30) & 0x180) != 0;
    if ( a3 )
      goto LABEL_5;
LABEL_60:
    v67 = sub_B8C1B0(a1[3]);
    v16 = sub_B8C200(v67, 0) != nullptr;
    goto LABEL_5;
  }
  v16 = 1;
  v196 = (*(_WORD *)(v182 + 30) & 0x180) != 0;
  if ( !a3 )
    goto LABEL_60;
LABEL_5:
  v17 = *a1;
  v211[1] = 1;
  v18 = &v212;
  v211[0] = v17;
  do
  {
    *(_QWORD *)v18 = -4096;
    v18 += 16;
  }
  while ( v18 != (char *)v213 );
  v215 = 0;
  v216 = v16;
  v217 = 0;
  v213[0] = v214;
  v213[1] = 0x100000000LL;
  v19 = *(_QWORD *)(v17 + 11280);
  *(_QWORD *)(v17 + 11280) = v211;
  v20 = (__int64 *)a1[4];
  v214[1] = v19;
  v218 = 0;
  ptr[0] = v232;
  ptr[1] = (void *)0x400000000LL;
  if ( *((_DWORD *)v20 + 2) )
    sub_1744960((__int64 *)ptr, v20);
  v21 = *a1;
  v234 = *((_DWORD *)v20 + 28);
  v235 = *((_BYTE *)v20 + 116);
  sub_1A2F130((__int64)v201, v21, v14, (__int64)ptr, (__int64)v211, 1);
  if ( ptr[0] != v232 )
    free(ptr[0]);
  v22 = s;
  v205 = s;
  v206 = 0x400000000LL;
  if ( v196 )
  {
    v189 = 0;
    v23 = *(_QWORD *)(v14 + 56);
    v24 = 0;
    if ( (v23 & 4) != 0 )
    {
      v24 = *(_DWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 16);
      if ( v24 )
      {
        v103 = s;
        v189 = v24;
        if ( v24 > 4uLL )
        {
          sub_2237220(&v205, s, v24, 8);
          v103 = v205;
          v22 = (char *)v205 + 8 * (unsigned int)v206;
        }
        v104 = &v103[8 * v24];
        if ( v104 != v22 )
          memset(v22, 0, 8 * ((unsigned __int64)(v104 - v22 - 8) >> 3) + 8);
        LODWORD(v206) = v24;
        v105 = 0;
        do
        {
          v106 = sub_1E48E00(a1, *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v14 + 56) & 0xFFFFFFFFFFFFFFF8LL) + 24) + v105));
          if ( !v106 )
            goto LABEL_76;
          *(_QWORD *)((char *)v205 + v105) = v106;
          v105 += 8;
        }
        while ( 8LL * (v24 - 1) + 8 != v105 );
      }
    }
  }
  else
  {
    v189 = 0;
    v24 = 0;
  }
  v25 = sub_B97670(v14);
  v26 = *a1;
  v27 = v25 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v25 & 0xFFFFFFFFFFFFFFFCLL) != 0
    && (*(_DWORD *)v27 & 0x20000) != 0
    && (v28 = v27 | 2,
        *(_DWORD *)(*(_QWORD *)(v26 + 11312) + ((unsigned __int64)*(unsigned int *)(v26 + 11320) << 6) - 64) == 4)
    || (v28 = sub_1E01710(v26, a1[4], v25, a5, a6), (v28 & 3) != 2)
    || (v28 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
  {
    if ( v14 && (*(_BYTE *)(v14 + 80) & 0x7Fu) - 35 <= 3 )
    {
      v29 = *(_QWORD *)(sub_B8C1B0(v14 + 72) + 16);
      if ( (v29 & 4) != 0 )
        v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v30 = v29 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v30 )
        BUG();
      v31 = *(_QWORD *)(v30 + 64);
      if ( v31 && (*(_BYTE *)(v31 + 10) & 0x20) != 0 )
      {
        v32 = *(_QWORD *)(v14 + 56) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v14 + 56) & 4) != 0 )
          v32 = *(_QWORD *)(v32 + 32);
        if ( !v32 && (*(_BYTE *)(v14 + 28) & 0x7D) == 0x24 )
        {
          v33 = (unsigned __int64)sub_A81910(*(_QWORD **)(*a1 + 248), *(_QWORD *)(v14 + 48), 0);
          v34 = *(_QWORD *)(v14 + 56);
          if ( (v34 & 4) != 0 )
            *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFF8LL) + 32) = v33;
          else
            *(_QWORD *)(v14 + 56) = v33 & 0xFFFFFFFFFFFFFFFBLL;
        }
      }
    }
    v208 = v210;
    v209 = 0x400000000LL;
    v35 = sub_1E02EA0((__int64)a1, v14, (__int64)&v208, a5, a6);
    v199 = (unsigned __int64 *)v35;
    if ( !v35 )
      goto LABEL_68;
    v200[0] = sub_1DFFA40(*(_QWORD *)(*a1 + 248), v14, (__int64)v35, v36);
    if ( a3 )
    {
      if ( (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF) != 0 )
      {
        v37 = 8LL * (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF);
        v75 = *(_BYTE **)(a3 + 24 + v37 - 8);
        if ( (v75[28] & 0x7F) == 0x43 && (v75[29] & 2) != 0 && (v75[60] & 2) != 0 )
        {
          v76 = nullptr;
          if ( (*(_BYTE *)(a3 + 23) & 0x40) != 0 )
            v76 = *(_DWORD **)(a3 + v37 + 24);
          a3 = sub_BC21A0(
                 *(_QWORD **)(*a1 + 248),
                 *(_DWORD *)(a3 + 8),
                 *(_DWORD *)(a3 + 12),
                 a3 + 24,
                 *(_DWORD *)(a3 + 20) & 0x1FFFFFFF,
                 *(unsigned int *)(a3 + 16),
                 v76);
        }
      }
    }
    v39 = *(_QWORD *)(v14 + 56);
    v40 = (v39 >> 2) & 1;
    if ( ((v39 >> 2) & 1) != 0 )
    {
      v68 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF8LL);
      v192 = *(_QWORD *)((v39 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( v68 )
      {
        v69 = sub_1DEB190(*a1, v68, *(void **)((v39 & 0xFFFFFFFFFFFFFFF8LL) + 8), a1[4]);
        v192 = v70;
        v194 = v69;
        if ( !v69 )
          goto LABEL_68;
        if ( !v196 )
        {
          v39 = *(_QWORD *)(v14 + 56);
          v186 = a1[3];
          v40 = (v39 >> 2) & 1;
LABEL_37:
          if ( !v186 )
          {
            v188 = 0;
LABEL_39:
            if ( v40 )
            {
              a8 = _mm_loadu_si128((const __m128i *)((v39 & 0xFFFFFFFFFFFFFFF8LL) + 40));
              v202 = a8;
            }
            else
            {
              a7 = _mm_loadu_si128(&xmmword_23DED40);
              v202 = a7;
            }
            v41 = *(void **)(v14 + 40);
            v42 = *(void **)(v14 + 160);
            v43 = *a1;
            LODWORD(ptr[1]) = *(_DWORD *)(v14 + 24);
            v44 = a1[4];
            ptr[0] = v41;
            v232[0] = v42;
            sub_1DD8EB0(&v203, v43, (const __m128i *)ptr, v44, v37, v38, a5, a6);
            if ( a4 )
              sub_1E05D70((__int64)a1, v14, v200, &v199, v203.m128i_i64);
            v45 = *(_BYTE *)(v14 + 28) & 0x7F;
            v197 = *(_DWORD *)(v14 + 64);
            switch ( v45 )
            {
              case '&':
                v46 = (unsigned __int64)sub_B98D00(
                                          *(_QWORD **)(*a1 + 248),
                                          v188,
                                          *(_DWORD *)(v14 + 64),
                                          v203.m128i_i64,
                                          v200[0],
                                          (__int64)v199,
                                          v28,
                                          (*(_QWORD *)(v14 + 80) & 0x80000000000LL) != 0,
                                          (*(_QWORD *)(v14 + 80) & 0x20000LL) != 0,
                                          0,
                                          *(_BYTE *)(v14 + 84) & 3,
                                          0,
                                          0,
                                          (__int64)&v202);
                *(_DWORD *)(v46 + 140) = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14) >> 32;
                break;
              case '$':
                v46 = sub_B99340(
                        *(_QWORD **)(*a1 + 248),
                        v188,
                        v197,
                        v203.m128i_i64,
                        v200[0],
                        (__int64)v199,
                        (*(_QWORD *)(v14 + 80) & 0x80000000000LL) != 0,
                        (*(_QWORD *)(v14 + 80) & 0x20000LL) != 0,
                        0,
                        *(_BYTE *)(v14 + 84) & 3,
                        (__int64)&v202);
                *(_BYTE *)(v46 + 83) |= 0x10u;
                *(_DWORD *)(v46 + 140) = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14) >> 32;
                v120 = *(_QWORD *)(*a1 + 248);
                v121 = *(_QWORD *)(v188 + 48);
                if ( v121 )
                {
                  v122 = v121 & 0xFFFFFFFFFFFFFFF0LL;
                  v123 = v122;
                }
                else
                {
                  v122 = sub_A7AA70(v120, v188, v116, v117, v118, v119);
                  v123 = v122 & 0xFFFFFFFFFFFFFFF0LL;
                }
                *(_QWORD *)(v46 + 40) = sub_B87700(
                                          v120 + 17536,
                                          *(_QWORD *)(v123 + 8) & 0xFFFFFFFFFFFFFFF8LL
                                        | ((unsigned __int8)*(_QWORD *)(v123 + 8) | (unsigned __int8)v122) & 7);
                break;
              case '%':
                v162 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14) >> 32;
                v46 = sub_B995D0(
                        *(_QWORD **)(*a1 + 248),
                        v188,
                        v197,
                        v203.m128i_i64,
                        v200[0],
                        (__int64)v199,
                        (*(_QWORD *)(v14 + 80) & 0x80000000000LL) != 0,
                        (*(_QWORD *)(v14 + 80) & 0x20000LL) != 0,
                        v28,
                        *(_BYTE *)(v14 + 84) & 3,
                        v162,
                        (__int64)&v202);
                break;
              default:
                v171 = sub_B979F0((_QWORD *)v14);
                v172 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14) >> 32;
                v46 = sub_B97D00(
                        *(_QWORD **)(*a1 + 248),
                        v188,
                        v197,
                        v203.m128i_i64,
                        v200[0],
                        (__int64)v199,
                        2 * v171,
                        (*(_QWORD *)(v14 + 80) & 0x80000000000LL) != 0,
                        (*(_QWORD *)(v14 + 80) & 0x20000LL) != 0,
                        *(_BYTE *)(v14 + 84) & 3,
                        v172,
                        (__int64)&v202);
                break;
            }
            if ( (*(_BYTE *)(v14 + 82) & 1) != 0 )
              *(_BYTE *)(v46 + 82) |= 1u;
            if ( v194 )
              sub_B7BD70(v46, v194, v192);
            if ( a3 )
            {
              v51 = v188 + 64;
              if ( !v188 )
                v51 = 0;
              v52 = sub_BBDCA0(*(_QWORD *)(*a1 + 248), v51, *(_DWORD *)(v46 + 24), *(_QWORD *)(v46 + 40), a3, v46);
              v182 = v52;
              if ( v196 )
              {
                v77 = (_WORD *)v52;
                sub_B90130(v52, a1[3], v53, v54, v55, v56);
                sub_17A0130(v77, 0);
              }
              else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) )
              {
                v61 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                  v61 = *(_QWORD *)(v61 + 8);
                sub_B90130(v182, v61, v57, v58, v59, v60);
              }
              sub_B77A70(v46, v182);
            }
            else if ( v182 )
            {
              v159 = (unsigned int)sub_BC1D90(
                                     *(_QWORD **)(*a1 + 248),
                                     *(const __m128i **)(*(_QWORD *)a1[4] + 8LL),
                                     *(_QWORD *)(*(_QWORD *)a1[4] + 16LL),
                                     v48,
                                     v49,
                                     v50);
              v160 = sub_B8C330(v46);
              sub_B77BD0(v46, v160, v182, v159, 0, 1, 0, 0);
              v49 = v181;
            }
            else
            {
              if ( v196 )
                goto LABEL_87;
              if ( !a4 )
              {
                v107 = (_QWORD *)sub_B8C330(v46);
                sub_B7DAE0(v46, v107, v14, 1, v108, v109);
                goto LABEL_122;
              }
            }
            if ( v196 )
            {
LABEL_87:
              if ( v24 )
                sub_B7C7A0(v46, *(_QWORD *)(*a1 + 248), v205, v189);
              sub_B90130(v46, a1[3], v47, v48, v49, v50);
              sub_17A0130((_WORD *)v46, 0);
              goto LABEL_90;
            }
LABEL_122:
            if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) )
            {
              v114 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
              if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
                v114 = *(_QWORD *)(v114 + 8);
              sub_B90130(v46, v114, v110, v111, v112, v113);
            }
LABEL_90:
            v78 = 0;
            if ( (_DWORD)v209 )
            {
              v79 = v46 + 72;
              v80 = 0;
              if ( !v46 )
                v79 = 0;
              v81 = 0;
              do
              {
                sub_B8C080(*((_QWORD *)v208 + v80), v79);
                v80 = (unsigned int)(v81 + 1);
                v81 = v80;
              }
              while ( (unsigned int)v80 < (unsigned int)v209 );
              v78 = (unsigned int)v209;
            }
            v82 = sub_B8C330(v46);
            sub_B7C440(v46, v82, v208, v78);
            v83 = v46;
            if ( (unsigned __int8)sub_1E41F90(a1, v46, v14, a5, a6, a7, a8, v84, v85, a11, a12) )
            {
              v83 = 1;
              sub_B88650(v46, 1);
            }
            else
            {
              if ( (*(_BYTE *)(v46 + 28) & 0x7F) == 0x24 && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 1LL) & 0x10) != 0 )
              {
                v83 = v46;
                sub_183DE70(*a1, v46);
              }
              *(_BYTE *)(v46 + 29) = *(_BYTE *)(v14 + 29) & 0x60 | *(_BYTE *)(v46 + 29) & 0x9F;
              if ( (*(_BYTE *)(v14 + 82) & 4) != 0 )
                *(_BYTE *)(v46 + 82) |= 4u;
            }
            v86 = *a1;
            v87 = 0;
            v88 = (__m128)_mm_load_si128(&v203);
            *(_OWORD *)v223 = 0;
            v225 = v86;
            v221 = 0x800000000LL;
            v220 = v222;
            v226 = v88;
            v227 = v204;
            v219 = 0;
            v224 = 0;
            v228 = 0;
            v229 = 0;
            v230 = 65793;
            sub_1A395A0((__int64)&v219);
            v89 = (unsigned int *)sub_B77C50(v14);
            v90 = v89;
            v184 = v89;
            if ( v89 )
            {
              v91 = *((void ***)v89 + 1);
              v92 = (__int64 *)*a1;
              ptr[1] = (void *)0x800000000LL;
              v236 = 0;
              ptr[0] = v232;
              if ( v91 )
              {
                v93 = *(_DWORD *)v91;
                v94 = a1[4];
                v95 = (const __m128i *)(v91 + 2);
                LODWORD(v236) = v93;
                HIDWORD(v236) = v95[-1].m128i_i32[1];
                if ( (unsigned __int8)sub_1DD74F0(
                                        (__int64)v92,
                                        v95,
                                        v95[-1].m128i_u32[2],
                                        v94,
                                        (__int64)ptr,
                                        (__m128)0LL,
                                        v88) )
                  goto LABEL_126;
                v96 = v90 + 4;
                v92 = (__int64 *)*a1;
                v97 = (__int64)&v90[2 * *v90 + 4];
                if ( (unsigned int *)v97 != v90 + 4 )
                {
LABEL_104:
                  v98 = (__int64 *)v96;
                  while ( 1 )
                  {
                    v99 = sub_1E38470((__int64)v92, *(_DWORD *)(v14 + 24), *v98, a1[4], 0, (__m128)0LL, v88, a7);
                    if ( !v99 )
                      break;
                    v100 = (unsigned int)v221;
                    v101 = (*(_BYTE *)(v99 + 29) >> 5) & 3 | v99;
                    v102 = (unsigned int)v221 + 1LL;
                    v200[1] = v101;
                    if ( v102 > HIDWORD(v221) )
                    {
                      v190 = v101;
                      sub_2237220(&v220, v222, v102, 8);
                      v100 = (unsigned int)v221;
                      v101 = v190;
                    }
                    ++v98;
                    v220[v100] = v101;
                    v92 = (__int64 *)*a1;
                    LODWORD(v221) = v221 + 1;
                    LODWORD(v219) = 2;
                    if ( (__int64 *)v97 == v98 )
                      goto LABEL_181;
                  }
LABEL_126:
                  v115 = ptr[0];
                  if ( ptr[0] == v232 )
                  {
LABEL_128:
                    v46 = 0;
LABEL_129:
                    sub_169D230((__int64)&v219);
LABEL_69:
                    if ( v208 != v210 )
                      free(v208);
                    goto LABEL_71;
                  }
LABEL_127:
                  free(v115);
                  goto LABEL_128;
                }
LABEL_181:
                v91 = *((void ***)v184 + 1);
                if ( v91 )
                  v91 = ptr;
              }
              else
              {
                v96 = v89 + 4;
                v97 = (__int64)&v89[2 * *v89 + 4];
                if ( v89 + 4 != (unsigned int *)v97 )
                  goto LABEL_104;
              }
              v124 = (__int64 *)v91;
              v83 = v46;
              if ( !(unsigned __int8)sub_1CC2B70(v92, v46, v124, (__int64)&v219, 0, 0.0, v88) )
                goto LABEL_140;
            }
            else
            {
              v163 = (const __m128i *)sub_B77B80(v14);
              if ( !v163 )
              {
                if ( v196 || a3 != 0 || !v182 )
                {
                  v83 = (unsigned __int64)&v219;
                  v173 = v188 + 64;
                  if ( !v188 )
                    v173 = 0;
                  sub_1A48440(*a1, (__int64)&v219, v173, 0);
                  if ( (_DWORD)v219 == 2 )
                  {
                    v178 = *v220 & 0xFFFFFFFFFFFFFFF8LL;
                    v179 = *(_BYTE *)(v178 + 28) & 0x7F;
                    v180 = v179;
                    if ( (unsigned int)v179 - 53 <= 1 || ((v179 + 52) & 0x7Fu) <= 1 )
                      v180 = *(_BYTE *)(sub_B72ED0(v178) + 28) & 0x7F;
                    if ( (unsigned int)(v180 - 58) <= 4 )
                    {
                      LODWORD(v219) = 0;
                      LODWORD(v221) = 0;
                      if ( v223[0] )
                        sub_1A39780((char *)v223[0]);
                      v87 = 0;
                      BYTE6(v230) = 0;
                      *(_OWORD *)v223 = 0;
                    }
                  }
                }
                v185 = 0;
                v187 = 0;
LABEL_143:
                if ( (unsigned __int8)sub_B8E290(v14) )
                {
                  v125 = (unsigned int)v209;
                  if ( (_DWORD)v209 )
                  {
                    v198 = v14;
                    v127 = 0;
                    v128 = 0;
                    v195 = v46;
                    do
                    {
                      v129 = 8 * v127;
                      if ( sub_B74820(*((_QWORD *)v208 + v127)) )
                      {
                        v83 = v197;
                        if ( (unsigned __int8)sub_1DC3F20(*a1, v197, *((_QWORD *)v208 + v127), a1[4], 0, v87, v88) )
                        {
                          v130 = (_QWORD *)sub_B74810(*((_QWORD *)v208 + v127));
                          v131 = *a1;
                          v132 = v130[1];
                          v133 = (unsigned __int64)v130;
                          ptr[0] = v130;
                          v193 = v132;
                          v191 = sub_EEC140((unsigned __int64)v130);
                          v134 = sub_EEB7E0(v133, v197, *(double *)v87.m128_u64);
                          v83 = v134;
                          v135 = sub_18C4330(v131, v134, v191, ptr, 1, v193);
                          if ( v135 > 1 )
                          {
                            v83 = v135 & 0xFFFFFFFFFFFFFFFELL;
                            sub_B74780(*(_QWORD *)((char *)v208 + v129), v135 & 0xFFFFFFFFFFFFFFFELL);
                          }
                        }
                      }
                      v127 = (unsigned int)(v128 + 1);
                      v128 = v127;
                    }
                    while ( (unsigned int)v127 < (unsigned int)v209 );
                    v46 = v195;
                    v14 = v198;
                  }
                }
                v136 = *a1;
                v137 = sub_B726C0(v46, v83, v125, v126);
                sub_17F3F10(v136, 0, (_WORD *)v46, (__int64)&v219, v185, v137, (__m128i)v87, *(double *)v88.m128_u64);
                if ( (*(_BYTE *)(v14 + 82) & 8) != 0 )
                  sub_184A5D0(*a1, v46, 0);
                if ( v196 && (v168 = sub_AEADA0((__int64 *)(v46 + 104))) != 0 )
                  v141 = (*(_BYTE *)(v168 + 29) >> 5) & 3;
                else
                  v141 = (*(_BYTE *)(v14 + 29) >> 5) & 3;
                v142 = 32 * (v141 & 3);
                v143 = v142 | *(_BYTE *)(v46 + 29) & 0x9Fu;
                *(_BYTE *)(v46 + 29) = v142 | *(_BYTE *)(v46 + 29) & 0x9F;
                if ( v182 )
                {
                  v138 = *(unsigned __int8 *)(v182 + 29);
                  v143 = (unsigned int)v138 & 0xFFFFFF9F;
                  *(_BYTE *)(v182 + 29) = v138 & 0x9F | v142;
                }
                v144 = (void **)v46;
                sub_1877EB0(*a1, v46, v143, v138, v139, v140);
                if ( (*(_BYTE *)(v14 + 83) & 4) != 0 )
                {
                  v144 = (void **)v46;
                  if ( (unsigned __int8)sub_1E39900((__int64)a1, v46, v14, v87, v88, a7) )
                    goto LABEL_128;
                }
                if ( (*(_BYTE *)(v14 + 82) & 0x40) != 0 )
                {
                  v145 = *(_QWORD *)(v14 + 80) >> 24;
                  if ( (v145 & 2) == 0 )
                  {
                    v169 = 0;
                    if ( (v145 & 8) != 0 )
                    {
                      v170 = *(unsigned int **)(v14 + 128);
                      if ( *((_BYTE *)v170 + 4) )
                        v169 = *(_QWORD *)&v170[2 * *v170 + 2];
                    }
                    v144 = (void **)v46;
                    sub_1869020(*a1, v46, *(_DWORD *)(v46 + 24), v169);
                  }
                }
                if ( !v196 && v187 )
                {
                  v144 = (void **)v46;
                  sub_1CB5B10(*a1, (_DWORD *)v46);
                }
                if ( (*(_BYTE *)(v46 + 28) & 0x7F) == 0x26 )
                {
                  if ( !sub_B98FC0(v46, (__int64)v144) )
                  {
                    v144 = ptr;
                    if ( !(unsigned __int8)sub_B990E0(v46, ptr, v146, v147) )
                      goto LABEL_167;
                  }
                }
                else if ( !sub_B98230((_QWORD *)v46, (__int64)v144) && !sub_B98360((_QWORD *)v46, (__int64)v144) )
                {
LABEL_167:
                  if ( !v182 && (*(char *)(v46 + 28) >= 0 || !(_DWORD)v221) )
                  {
                    if ( v196 )
                    {
                      if ( !sub_AEADA0((__int64 *)(v14 + 104)) )
                        sub_165BD80((_QWORD *)*a1, v46);
                      v144 = (void **)v46;
                      sub_B94A80(v188 + 64, v46, v174, v175, v176, v177);
                    }
                    else
                    {
                      v144 = (void **)v46;
                      sub_B94AD0((__m128i *)a1[3], v46, v146, v147, v148, v149);
                    }
                  }
                  if ( (*(_BYTE *)(v46 + 29) & 1) == 0 )
                    goto LABEL_129;
                  v150 = sub_B8C3D0(v46, (__int64)v144, v146, v147, v148, v149);
                  v151 = *v150;
                  v152 = *v150 + 8LL * *((unsigned int *)v150 + 2);
                  if ( *v150 >= v152 )
                  {
                    if ( v151 == v152 )
                      goto LABEL_129;
                    while ( *(_WORD *)(*(_QWORD *)v152 + 36LL) != 390 )
                    {
                      v152 += 8LL;
                      if ( v151 == v152 )
                        goto LABEL_129;
                    }
                  }
                  else
                  {
                    v153 = *v150;
                    while ( *(_WORD *)(*(_QWORD *)v153 + 36LL) != 390 )
                    {
                      v153 += 8LL;
                      if ( v152 == v153 )
                        goto LABEL_129;
                    }
                    if ( v152 == v153 )
                      goto LABEL_129;
                  }
                  v154 = (int *)a1[3];
                  if ( (v154[2] & 0x7Fu) - 59 <= 2 && v154 != &dword_40 )
                  {
                    v155 = 0;
                    v156 = sub_B97210((__int64)(v154 - 16));
                    if ( v156 )
                    {
                      v155 = *(_DWORD *)(v156 + 8);
                    }
                    else if ( (*(_BYTE *)(v154 - 9) & 0x7Fu) - 60 <= 1 )
                    {
                      v155 = v154[28];
                    }
                    sub_1910D40(*a1, v155, v46, 1, v157, v158, v87, v88);
                  }
                  goto LABEL_129;
                }
                *(_BYTE *)(v46 + 83) |= 0x10u;
                goto LABEL_167;
              }
              sub_1A48440(*a1, (__int64)&v219, v186, 0);
              v164 = v163->m128i_i64[0];
              v165 = *a1;
              v166 = a1[4];
              ptr[1] = (void *)0x800000000LL;
              v236 = v164;
              v167 = v163->m128i_u32[2];
              ptr[0] = v232;
              if ( (unsigned __int8)sub_1DD74F0(v165, v163 + 1, v167, v166, (__int64)ptr, (__m128)0LL, v88) )
              {
                v115 = ptr[0];
                if ( ptr[0] == v232 )
                  goto LABEL_128;
                goto LABEL_127;
              }
              v83 = v46;
              if ( !(unsigned __int8)sub_1CC2B70((__int64 *)*a1, v46, (__int64 *)ptr, (__int64)&v219, 0, 0.0, v88) )
              {
LABEL_140:
                if ( ptr[0] != v232 )
                  free(ptr[0]);
                v185 = 1;
                v187 = 1;
                goto LABEL_143;
              }
            }
            v83 = 1;
            sub_B88650(v46, 1);
            goto LABEL_140;
          }
LABEL_38:
          v188 = v186 - 64;
          goto LABEL_39;
        }
        a5 = 0;
        *(_OWORD *)ptr = 0;
        *(_OWORD *)v232 = 0;
        v233 = 0;
        sub_15AB8B0((__int64)ptr, v69, v70);
        v74 = sub_16A2930(*a1, (__int64)ptr, 0, v71, v72, v73);
        v186 = v74;
        if ( v74 && (unsigned __int8)sub_169F990(*a1, (__int64)ptr, v74) )
        {
          if ( HIDWORD(v232[1]) )
            free(v232[0]);
          goto LABEL_68;
        }
        if ( HIDWORD(v232[1]) )
          free(v232[0]);
LABEL_136:
        if ( v186 )
        {
          v39 = *(_QWORD *)(v14 + 56);
          v40 = (v39 >> 2) & 1;
          goto LABEL_38;
        }
LABEL_68:
        v46 = 0;
        goto LABEL_69;
      }
    }
    else
    {
      v192 = 0;
    }
    if ( !v196 )
    {
      v194 = 0;
      v186 = a1[3];
      goto LABEL_37;
    }
    v161 = (_QWORD *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v14 + 16) & 4) != 0 )
      v161 = (_QWORD *)*v161;
    v194 = 0;
    v186 = sub_1E39240(*a1, *(_DWORD *)(v14 + 24), (__int64)v161, a1[4], a5, a6, a7);
    goto LABEL_136;
  }
LABEL_76:
  v46 = 0;
LABEL_71:
  if ( v205 != s )
    free(v205);
  sub_146B590((__int64)v201);
  sub_1CB3BA0((__int64)v211);
  return v46;
}
