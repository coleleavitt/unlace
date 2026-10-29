unsigned __int64 __fastcall sub_1CFC180(
        unsigned __int64 a1,
        char *a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        const void *a12,
        unsigned __int64 a13,
        __int64 a14)
{
  __int64 v15; // rbp
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // r12
  __int64 **v22; // rax
  __int64 *v23; // rdx
  unsigned __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v30; // rax
  bool v31; // dl
  int v32; // eax
  __int64 *v33; // r14
  __int64 v34; // r15
  __int64 v35; // rbp
  char v36; // al
  unsigned __int64 v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // rsi
  __int64 *v40; // rax
  void *v41; // rax
  __int64 *v42; // rcx
  unsigned int v43; // eax
  __int64 v44; // rsi
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // edx
  int v49; // ecx
  int v50; // r8d
  int v51; // r9d
  __int64 v52; // r15
  __int64 v53; // rbp
  __int64 v54; // r15
  __int64 *v55; // rax
  __int64 v56; // rax
  void *v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // r14
  __int64 v60; // rcx
  _QWORD *v61; // rsi
  __m128i *v62; // rbp
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v68; // rdx
  char v69; // al
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  _QWORD *v74; // rdi
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // r12
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  unsigned int v87; // edx
  unsigned int v88; // eax
  __int64 v89; // rax
  __int64 *v90; // rax
  unsigned int v91; // eax
  unsigned int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r14
  void *v98; // rax
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rdx
  __int64 v104; // rcx
  void *v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  void *v111; // rax
  _QWORD *v112; // rax
  int v113; // eax
  char *v114; // rax
  __int64 v115; // rdx
  char *v116; // rsi
  size_t v117; // rcx
  _QWORD *v118; // rax
  _BYTE *v119; // rdi
  unsigned __int64 v120; // rdx
  __int64 v121; // rax
  int v122; // r15d
  int v123; // edi
  __int64 v124; // rax
  __int64 v125; // r14
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // r12
  __int64 *v129; // r13
  size_t v130; // rdx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  unsigned __int64 v135; // rax
  __int64 v136; // rsi
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  __int64 v141; // rax
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  __int64 v149; // r15
  void *v150; // rax
  _QWORD *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __m128i *v164; // rdi
  unsigned __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rdx
  __int64 v175; // rcx
  __int64 v176; // r9
  __int64 v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // rdx
  unsigned __int64 v185; // rax
  __int64 v186; // rdx
  __int64 v187; // rcx
  __int64 v188; // r8
  __int64 v189; // r9
  __int64 v190; // r14
  __int64 v191; // rax
  _QWORD *v192; // rax
  __int64 v193; // rsi
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // r9
  __int64 v198; // rax
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  __int64 v203; // [rsp-8h] [rbp-3D0h]
  unsigned int v204; // [rsp+0h] [rbp-3C8h]
  unsigned __int64 v205; // [rsp+0h] [rbp-3C8h]
  unsigned __int64 v206; // [rsp+0h] [rbp-3C8h]
  unsigned __int64 v207; // [rsp+0h] [rbp-3C8h]
  __int64 v210; // [rsp+18h] [rbp-3B0h]
  int v211; // [rsp+20h] [rbp-3A8h]
  unsigned __int64 v212; // [rsp+30h] [rbp-398h]
  signed __int64 v213; // [rsp+30h] [rbp-398h]
  unsigned __int64 v214; // [rsp+38h] [rbp-390h]
  __int64 *v215; // [rsp+38h] [rbp-390h]
  unsigned int v217; // [rsp+44h] [rbp-384h]
  unsigned int *v218; // [rsp+48h] [rbp-380h]
  _BYTE *v219; // [rsp+48h] [rbp-380h]
  __int64 v220; // [rsp+50h] [rbp-378h]
  __int64 v221; // [rsp+50h] [rbp-378h]
  __int64 v222; // [rsp+50h] [rbp-378h]
  unsigned int v223; // [rsp+58h] [rbp-370h]
  char v225; // [rsp+60h] [rbp-368h]
  __int64 *v226; // [rsp+60h] [rbp-368h]
  __int64 v227; // [rsp+60h] [rbp-368h]
  __int64 v228; // [rsp+68h] [rbp-360h]
  double v229[3]; // [rsp+70h] [rbp-358h] BYREF
  char v230; // [rsp+8Eh] [rbp-33Ah] BYREF
  unsigned __int8 v231; // [rsp+8Fh] [rbp-339h] BYREF
  void *v232; // [rsp+90h] [rbp-338h] BYREF
  __int64 v233; // [rsp+98h] [rbp-330h] BYREF
  __int64 v234; // [rsp+A0h] [rbp-328h] BYREF
  unsigned __int64 v235; // [rsp+A8h] [rbp-320h] BYREF
  unsigned __int64 v236; // [rsp+B0h] [rbp-318h] BYREF
  char v237; // [rsp+B8h] [rbp-310h]
  __int64 v238; // [rsp+BCh] [rbp-30Ch]
  char v239; // [rsp+C4h] [rbp-304h]
  void *v240; // [rsp+C8h] [rbp-300h]
  __int64 v241; // [rsp+D0h] [rbp-2F8h]
  _BYTE v242[16]; // [rsp+D8h] [rbp-2F0h] BYREF
  char v243; // [rsp+E8h] [rbp-2E0h]
  size_t n[2]; // [rsp+F0h] [rbp-2D8h] BYREF
  _QWORD v245[2]; // [rsp+100h] [rbp-2C8h] BYREF
  unsigned __int8 *v246; // [rsp+110h] [rbp-2B8h] BYREF
  char v247; // [rsp+168h] [rbp-260h]
  unsigned int v248; // [rsp+170h] [rbp-258h]
  char v249; // [rsp+174h] [rbp-254h]
  void *v250; // [rsp+180h] [rbp-248h] BYREF
  _BYTE v251[12]; // [rsp+188h] [rbp-240h] BYREF
  char v252; // [rsp+194h] [rbp-234h]
  void *dest; // [rsp+198h] [rbp-230h]
  __m128 v254; // [rsp+1A0h] [rbp-228h] BYREF
  char v255; // [rsp+1B8h] [rbp-210h]
  void *v256; // [rsp+1F0h] [rbp-1D8h]
  __int64 v257; // [rsp+1F8h] [rbp-1D0h]
  _WORD v258[49]; // [rsp+200h] [rbp-1C8h] BYREF
  char v259; // [rsp+262h] [rbp-166h]
  void *ptr; // [rsp+270h] [rbp-158h] BYREF
  __int64 v261; // [rsp+278h] [rbp-150h]
  void *v262; // [rsp+280h] [rbp-148h] BYREF
  __int64 v263; // [rsp+288h] [rbp-140h]
  unsigned __int8 *v264[11]; // [rsp+290h] [rbp-138h] BYREF
  char v265; // [rsp+2E8h] [rbp-E0h]
  unsigned int v266; // [rsp+2F0h] [rbp-D8h]
  char v267; // [rsp+2F4h] [rbp-D4h]
  __int64 v268; // [rsp+380h] [rbp-48h]

  v15 = a10;
  v210 = (__int64)a2;
  v204 = *(_DWORD *)(a10 + 4);
  v223 = *(_DWORD *)(a10 + 36);
  v217 = *(_DWORD *)(a10 + 40);
  sub_F22A90(&ptr, *(_QWORD *)(a10 + 24));
  v232 = ptr;
  v16 = sub_F22BD0((__int64 *)&v232, 0);
  if ( !v16 || (v21 = (_QWORD *)v16, (*(_BYTE *)(v16 + 28) & 0x7F) != 0x48) )
  {
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v204, 0x10E5u, 0);
    v30 = sub_F22BD0((__int64 *)&v232, 0);
    v31 = 0;
    if ( v30 )
      v31 = (*(_BYTE *)(sub_F22BD0((__int64 *)&v232, 0) + 28) & 0x7F) == 68;
    LOBYTE(v250) = v31;
    sub_1588420((__int64)&ptr, (unsigned __int8 *)&v250);
    sub_15F7200(&ptr);
    return 0;
  }
  if ( (*(_BYTE *)(v16 + 29) & 1) == 0 )
    goto LABEL_10;
  v22 = (__int64 **)sub_B8C3D0(v16, 0, v17, v18, v19, v20);
  v23 = *v22;
  v24 = (unsigned __int64)&(*v22)[*((unsigned int *)v22 + 2)];
  if ( (unsigned __int64)v23 < v24 )
  {
    v42 = v23;
    while ( *(_WORD *)(*v42 + 36) != 281 )
    {
      if ( (__int64 *)v24 == ++v42 )
        goto LABEL_10;
    }
    if ( (__int64 *)v24 != v42 )
      goto LABEL_56;
LABEL_10:
    if ( a2[8] >= 0 )
      goto LABEL_14;
    goto LABEL_11;
  }
  if ( v23 == (__int64 *)v24 )
    goto LABEL_10;
  if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 281 )
  {
    v25 = (__int64 *)(v24 + 8);
    while ( v23 != v25 )
    {
      v26 = *v25++;
      if ( *(_WORD *)(v26 + 36) == 281 )
        goto LABEL_56;
    }
    goto LABEL_10;
  }
LABEL_56:
  v54 = *v23;
  if ( *(_WORD *)(*v23 + 36) != 281 )
  {
    v55 = v23 + 1;
    do
      v54 = *v55++;
    while ( *(_WORD *)(v54 + 36) != 281 );
  }
  v219 = *(_BYTE **)(v54 + 48);
  v213 = *(unsigned int *)(v54 + 40);
  sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), v204, 0x1B99u, 0);
  if ( v265 )
  {
    sub_AE9DF0(v264, (__int64)v21, 0xAu);
  }
  else if ( v267 )
  {
    v107 = sub_168B9E0(&ptr);
    v111 = v262;
    if ( v262 )
    {
      v222 = v107;
      v111 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v262 + 32LL))(v262);
      v107 = v222;
    }
    v250 = v111;
    v112 = sub_1587BC0(v107, (__int64 *)&v250, v107, v108, v109, v110);
    sub_AE9DF0((unsigned __int8 **)(*v112 + 32LL * v266 + 8), (__int64)v21, 0xAu);
  }
  LOBYTE(n[0]) = v213 != 0;
  v56 = sub_1588420((__int64)&ptr, (unsigned __int8 *)n);
  if ( *(_BYTE *)(v56 + 120) )
  {
    sub_AEC220((unsigned __int8 **)(v56 + 32), v219, v213);
  }
  else if ( *(_BYTE *)(v56 + 132) )
  {
    v220 = v56;
    v100 = sub_168B9E0((_QWORD *)v56);
    v103 = v220;
    v104 = v100;
    v105 = *(void **)(v220 + 16);
    if ( v105 )
    {
      v227 = v104;
      v105 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v105 + 32LL))(v105);
      v104 = v227;
      v103 = v220;
    }
    v250 = v105;
    v221 = v103;
    v106 = sub_1587BC0(v104, (__int64 *)&v250, v103, v104, v101, v102);
    sub_AEC220((unsigned __int8 **)(*v106 + 32LL * *(unsigned int *)(v221 + 128) + 8), v219, v213);
  }
  sub_15F7200(&ptr);
  sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(v54 + 24), 0x17BFu, 0);
  if ( v265 )
  {
    sub_AE9DF0(v264, v54, 0xEu);
  }
  else if ( v267 )
  {
    v97 = sub_168B9E0(&ptr);
    v98 = v262;
    if ( v262 )
      v98 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v262 + 32LL))(v262);
    v250 = v98;
    v99 = sub_1587BC0(v97, (__int64 *)&v250, v93, v94, v95, v96);
    sub_AE9DF0((unsigned __int8 **)(*v99 + 32LL * v266 + 8), v54, 0xEu);
  }
  sub_15F7200(&ptr);
  if ( a2[8] < 0 )
  {
LABEL_11:
    v27 = v21[6];
    if ( v27 )
      v27 += 64LL;
    sub_17A2EE0(a1, a2, v27);
  }
LABEL_14:
  v212 = v21[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v21[2] & 4) != 0 )
    v212 = *(_QWORD *)(v21[2] & 0xFFFFFFFFFFFFFFF8LL);
  v230 = 0;
  if ( *(_QWORD *)(a9 + 8) && a4 && a4 != 3 && (unsigned __int8)sub_17CFA00(a1, a9, v212, v21[5], v204, (int *)a10, 0) )
    return 0;
  v231 = 0;
  v28 = sub_1CD3B10(a1, a5, v204, a9, a10, a4 == 3, a7, (__int64)a12, a13, &v230, &v231, 0);
  v218 = (unsigned int *)v28;
  v225 = v231;
  if ( v231 )
    return 0;
  if ( !v28 )
    goto LABEL_45;
  if ( (unsigned __int8)sub_1CBD040(a1, (__int64)a2, v28) )
    return 0;
  if ( !(unsigned __int8)sub_B8E180(v212) )
  {
LABEL_28:
    v32 = v218[5] & 0x1FFFFFFF;
    if ( v32 )
    {
      if ( a4 != 3 )
      {
        v33 = (__int64 *)(v218 + 6);
        v34 = (__int64)&v218[2 * (v32 - 1) + 8];
        v226 = (__int64 *)(a1 + 8);
        while ( 1 )
        {
          v35 = *v33;
          v36 = *(_BYTE *)(*v33 + 28) & 0x7F;
          v37 = *(_QWORD *)(*v33 + 72) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v36 == 67 )
          {
            if ( v37 )
            {
              v92 = sub_BBE470(*v33);
              a2 = (char *)(a1 + 8);
              sub_168B9F0((__int64)&ptr, v226, v92, 0xE2Bu, 0);
              sub_15F7200(&ptr);
              *(_QWORD *)(v35 + 72) = 0;
            }
            goto LABEL_33;
          }
          if ( v36 != 47 )
            break;
          if ( v37 )
          {
            v38 = sub_BBEB00(*v33);
            v39 = a1 + 8;
            sub_168B9F0((__int64)&ptr, v226, v38, 0xE2Bu, 0);
            v40 = sub_A5EEA0(v35);
LABEL_38:
            v41 = (void *)sub_F1E510((__int64)v40, v39, *(double *)a7.m128_u64);
            a2 = (char *)&v250;
            v250 = v41;
            sub_1587DB0((__int64)&ptr, (__int64 *)&v250);
            sub_15F7200(&ptr);
            *(_QWORD *)(v35 + 72) = 0;
          }
LABEL_33:
          if ( ++v33 == (__int64 *)v34 )
          {
            v15 = a10;
            v225 = 1;
            goto LABEL_45;
          }
        }
        if ( !v37 )
          goto LABEL_33;
        v90 = sub_A5EFB0(*v33);
        v91 = sub_1CB2FB0((__int64)v90, (__int64)a2, *(double *)a7.m128_u64);
        v39 = a1 + 8;
        sub_168B9F0((__int64)&ptr, v226, v91, 0xE2Bu, 0);
        v40 = sub_A5EFB0(v35);
        goto LABEL_38;
      }
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a5, 0x12C2u, 0);
      v250 = (void *)__PAIR64__(v217, v223);
      sub_1587DB0((__int64)&ptr, (__int64 *)&v250);
      sub_15F7200(&ptr);
      return 0;
    }
    if ( a4 == 3 )
    {
      sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a5, 0x1426u, 0);
      v87 = v218[2];
      v88 = v218[4];
      *(_QWORD *)&v251[4] = 0;
      v250 = (void *)__PAIR64__(v88, v87);
      v252 = 0;
      dest = &v254.m128_u16[4];
      v254.m128_u64[0] = 0;
      v254.m128_i8[8] = 0;
      v255 = 0;
      v251[0] = 1;
      v89 = sub_1589170((__int64)&ptr, &v250);
      n[0] = __PAIR64__(v217, v223);
      sub_1587DB0(v89, (__int64 *)n);
      if ( dest != &v254.m128_u16[4] )
        operator delete(dest);
      sub_15F7200(&ptr);
      v225 = 0;
    }
LABEL_45:
    v43 = sub_F58610(a3);
    v44 = v21[6];
    LODWORD(v229[0]) = v43;
    v45 = v21[5] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v21[5] & 7) != 0 )
      v45 = 0;
    if ( sub_17B1BF0(a1, v44, v43, a4 == 2, a5, v45) )
    {
LABEL_48:
      v46 = *(_QWORD *)(v15 + 36);
      ptr = &v262;
      v268 = v46;
      v250 = (void *)(v15 + 56);
      v47 = *(unsigned int *)(v15 + 44);
      v261 = 0x800000000LL;
      *(_QWORD *)v251 = v47;
      sub_1CB4530(a1, &v250, (__int64 *)&ptr);
      if ( (_DWORD)v261 )
      {
        v52 = 0;
        v53 = 32 * ((unsigned int)(v261 - 1) + 1LL);
        while ( !(unsigned __int8)sub_1E52D80(
                                    a1,
                                    16 - (unsigned int)(v225 == 0),
                                    v48,
                                    v49,
                                    v50,
                                    v51,
                                    *(_QWORD *)((char *)ptr + v52),
                                    *(_QWORD *)((char *)ptr + v52 + 8),
                                    *(_QWORD *)((char *)ptr + v52 + 16),
                                    *(_QWORD *)((char *)ptr + v52 + 24)) )
        {
          v52 += 32;
          if ( v53 == v52 )
            goto LABEL_70;
        }
        result = 0;
        goto LABEL_53;
      }
LABEL_70:
      v259 = 0;
      *(_OWORD *)n = 0;
      v250 = &v251[8];
      *(_QWORD *)v251 = 0x400000000LL;
      v257 = 0x400000000LL;
      v256 = v258;
      v258[48] = 0;
      v245[0] = 0;
      if ( (unsigned __int8)sub_1CCEE60(
                              a1,
                              (__int64)v21,
                              v204,
                              (__int64)&ptr,
                              (__int64)n,
                              0,
                              (__m128)0LL,
                              a8,
                              (__int64)&v250,
                              1,
                              nullptr) )
        goto LABEL_96;
      v57 = v256;
      v58 = (unsigned int)v257;
      if ( v225 )
      {
        if ( sub_1CCBDE0(a1, v204, (__int64)v21, v261, (__int64)v256, (__m128)0LL) )
          goto LABEL_96;
        if ( sub_F235A0((__int64 *)&v232, v204, v131, v132, v133, v134)
          || sub_F5E540((__int64)&ptr, (__int64)v256, (unsigned int)v257) )
        {
          v233 = 0;
          v59 = (__int64)sub_BC50F0(v21, (__int64)v256, (unsigned int)v257, (__int64)v218, (__int64)&v233);
          if ( a4 == 3 || !sub_1CC0680((__int64 *)a1, (__int64)v21, v204, 1u) )
          {
            v215 = sub_AB8350(*(_QWORD **)(a1 + 248), (__int64)v232, v204, (__int64)&ptr, v256, (unsigned int)v257, 0);
            v135 = sub_BC3930((__int64)v21);
            v136 = *v215;
            if ( (*(_QWORD *)&byte_8[v136 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)v136 | (unsigned __int8)*(_QWORD *)&byte_8[v136 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v135 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v135 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v135) & 7) )
            {
              if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) >= 0 || !sub_BBDA40((__int64)v218) )
              {
                sub_168B9F0((__int64)n, (__int64 *)(a1 + 8), v204, 0x12BEu, 0);
                LODWORD(v235) = 0;
                v182 = sub_1587D10((__int64)n, (int *)&v235);
                LOBYTE(v234) = a4 == 2;
                v183 = sub_1588420(v182, (unsigned __int8 *)&v234);
                v238 = 0;
                v239 = 0;
                v236 = __PAIR64__(v217, v223);
                v240 = v242;
                v241 = 0;
                v242[0] = 0;
                v243 = 0;
                v237 = 1;
                sub_1589170(v183, &v236);
                if ( v240 != v242 )
                  operator delete(v240);
                sub_15F7200(n);
                v184 = v21[5];
                v185 = v184 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v184 & 7) != 0 )
                  v185 = 0;
                result = sub_1CFA5D0(
                           a1,
                           v210,
                           a3,
                           a4,
                           a5,
                           (unsigned int *)a9,
                           0.0,
                           a8,
                           v185,
                           v204,
                           a11,
                           v218,
                           3,
                           0,
                           0,
                           (int)a13 - 1,
                           a12,
                           0);
                goto LABEL_97;
              }
              v136 = *v215;
            }
            v62 = (__m128i *)sub_BC2CB0(
                               *(_QWORD **)(a1 + 248),
                               SLOBYTE(v229[0]),
                               v212,
                               a5,
                               v204,
                               (__int64)v218,
                               (__int64)v21,
                               (const __m128i *)v256,
                               (unsigned int)v257,
                               v136,
                               v59);
            sub_1CB3490((__int64)v62, (__int64 *)&ptr);
            if ( *(_QWORD *)(a9 + 8) )
            {
              v141 = sub_15AB9E0(a9, *(_QWORD **)(a1 + 248), v137, v138, v139, v140);
              sub_B7C4C0((__int64)v62, v141, v142);
              if ( a13 > 1 )
              {
                if ( *(_QWORD *)(a9 + 8) )
                  sub_B7C6B0((__int64)v62, *(_QWORD *)(a1 + 248), a12, a13 - 1);
              }
            }
            if ( v59 )
            {
              v143 = *(_QWORD *)(v59 + 104);
              v144 = *(_QWORD *)(v143 + 192);
              if ( (v144 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                *(_QWORD *)(v143 + 192) = v144 | 4;
            }
            else
            {
              sub_BC45A0(v21, (__int64)v62, v233);
            }
            sub_1CE31F0(a1, (__int64)v62);
            v211 = 1;
LABEL_88:
            if ( v59 && *(_DWORD *)(v59 + 176) )
            {
              v81 = v59;
              while ( (unsigned int)sub_1CAF7B0(v81) != 2 )
              {
                v81 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 48LL))(v81);
                if ( !v81 )
                {
                  v236 = __PAIR64__(v217, v204);
                  sub_168B9F0((__int64)n, (__int64 *)(a1 + 8), v204, 0x138Au, 0);
                  v85 = v62[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL;
                  if ( !v62[3].m128i_i64[0] )
                    v85 = sub_A7AA70(*(_QWORD *)(a1 + 248), (__int64)v62, 0, v82, v83, v84);
                  v235 = v85;
                  v86 = sub_162B6D0((__int64)n, (__int64 *)&v235);
                  sub_15884C0(v86, (__int64 *)&v236);
                  sub_15F7200(n);
                  sub_168B9F0((__int64)n, (__int64 *)(a1 + 8), *(_DWORD *)(v59 + 176), 0x17A4u, 0);
                  LOBYTE(v235) = (unsigned int)sub_B97260(v59) != 1;
                  sub_1588420((__int64)n, (unsigned __int8 *)&v235);
                  sub_15F7200(n);
                  goto LABEL_96;
                }
              }
            }
            if ( a4 == 3 || (v62[11].m128i_i8[4] = v62[11].m128i_i8[4] & 0xF8 | 2, a4 != 2) )
            {
              LOWORD(n[0]) = 1;
              sub_1836B60((__int64 *)a1, v210, v62, a11, n, (__m128)0LL, (__m128i)a8);
              sub_167AF90(a1, (__int64)v62, v152, v153, v154, v155, (__m128i)0LL, *(double *)a8.m128_u64);
              if ( !a6 )
              {
                sub_B90130((__int64)v62, *(_QWORD *)(a1 + 544), v156, v157, v158, v159);
                goto LABEL_178;
              }
LABEL_197:
              sub_168B9F0((__int64)n, (__int64 *)(a1 + 8), v62[1].m128i_u32[2], 0x1072u, 0);
              LODWORD(v235) = v211;
              v177 = sub_1587D10((__int64)n, (int *)&v235);
              v238 = 0;
              v239 = 0;
              LODWORD(v236) = a6;
              HIDWORD(v236) = a6;
              v240 = v242;
              v241 = 0;
              v242[0] = 0;
              v243 = 0;
              v237 = 1;
              sub_1589170(v177, &v236);
              if ( v240 != v242 )
                operator delete(v240);
              sub_15F7200(n);
              sub_B90130((__int64)v62, *(_QWORD *)(a1 + 544), v178, v179, v180, v181);
              if ( a4 == 2 )
                goto LABEL_191;
LABEL_178:
              v164 = *(__m128i **)(a1 + 544);
              if ( a4 == 3 )
              {
                v165 = sub_BA5C60(
                         *(_QWORD **)(a1 + 248),
                         (__int64)v164,
                         v204,
                         (unsigned __int64)v215 | 4,
                         a5,
                         0,
                         nullptr,
                         0);
                *(_BYTE *)(v165 + 29) &= 0x9Fu;
                sub_B94AD0(*(__m128i **)(a1 + 544), v165, v166, v167, v168, v169);
LABEL_180:
                if ( a14 && *(_BYTE *)a14 )
                {
                  result = *(_QWORD *)(a14 + 8);
                }
                else
                {
                  sub_B88650((__int64)v62, v231);
                  sub_16693B0(a1, v62);
                  result = (unsigned __int64)v62;
                }
                goto LABEL_97;
              }
LABEL_195:
              sub_B94AD0(v164, (__int64)v62, v160, v161, v162, v163);
              goto LABEL_180;
            }
            v127 = v62[8].m128i_i64[0];
            if ( v127
              || (sub_7052B0((__int64 *)(v62[6].m128i_i64[1] + 96), v62[6].m128i_i64[1], v80, v77, v78, v79),
                  (v127 = v62[8].m128i_i64[0]) != 0) )
            {
              v128 = *(_QWORD *)(v127 + 88);
              v234 = 0;
              if ( v128 && a14 )
              {
                if ( (unsigned __int8)sub_1E61520(a1, v128, &v234, 0) )
                {
LABEL_143:
                  v129 = (__int64 *)(a1 + 8);
                  v236 = __PAIR64__(v217, v204);
                  sub_168B9F0((__int64)n, v129, v204, 0x1326u, 0);
                  if ( v247 )
                  {
                    sub_AE9DF0(&v246, (__int64)v62, 0xAu);
                  }
                  else if ( v249 )
                  {
                    v190 = sub_168B9E0(n);
                    v191 = v245[0];
                    if ( v245[0] )
                      v191 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v245[0] + 32LL))(v245[0]);
                    v235 = v191;
                    v192 = sub_1587BC0(v190, (__int64 *)&v235, v186, v187, v188, v189);
                    sub_AE9DF0((unsigned __int8 **)(*v192 + 32LL * v248 + 8), (__int64)v62, 0xAu);
                  }
                  sub_15884C0((__int64)n, (__int64 *)&v236);
                  sub_15F7200(n);
                  sub_168B9F0((__int64)n, v129, *(_DWORD *)(v128 + 24), 0x71u, 0);
                  sub_15F7200(n);
                  sub_B88650((__int64)v62, 1);
                  result = 0;
                  goto LABEL_97;
                }
                v193 = v234;
                *(_QWORD *)(a14 + 8) = v128;
                *(_BYTE *)a14 = 1;
                sub_1A39AF0(a1, v193);
                LOWORD(n[0]) = 1;
                sub_1836B60((__int64 *)a1, v210, v62, a11, n, (__m128)0LL, (__m128i)a8);
                sub_167AF90(a1, (__int64)v62, v194, v195, v196, v197, (__m128i)0LL, *(double *)a8.m128_u64);
                goto LABEL_185;
              }
              if ( v128 )
                goto LABEL_143;
            }
            LOWORD(n[0]) = 1;
            sub_1836B60((__int64 *)a1, v210, v62, a11, n, (__m128)0LL, (__m128i)a8);
            sub_167AF90(a1, (__int64)v62, v170, v171, v172, v173, (__m128i)0LL, *(double *)a8.m128_u64);
            if ( !a14 )
            {
LABEL_186:
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 89LL) & 1) != 0 )
              {
                v198 = sub_B32990(*(_QWORD *)(a1 + 248), 0, 0);
                sub_B8CC60((__int64)v62, v198, v199, v200, v201, v202);
              }
              sub_1665300(a1, (__int64)v62);
              sub_1665460(a1, (__int64)v62);
LABEL_189:
              if ( !a6 )
              {
                sub_B90130((__int64)v62, *(_QWORD *)(a1 + 544), v174, v175, 0, v176);
LABEL_191:
                if ( !a14 || !*(_BYTE *)a14 )
                  sub_B809C0((__int64)v62);
                v164 = *(__m128i **)(a1 + 544);
                goto LABEL_195;
              }
              goto LABEL_197;
            }
LABEL_185:
            if ( *(_BYTE *)a14 )
              goto LABEL_189;
            goto LABEL_186;
          }
LABEL_96:
          result = 0;
LABEL_97:
          if ( v256 != v258 )
          {
            v206 = result;
            free(v256);
            result = v206;
          }
          if ( v250 != &v251[8] )
          {
            v207 = result;
            free(v250);
            result = v207;
          }
LABEL_53:
          if ( ptr != &v262 )
          {
            v205 = result;
            free(ptr);
            return v205;
          }
          return result;
        }
        sub_168B9F0((__int64)n, (__int64 *)(a1 + 8), v204, 0x12BFu, 0);
        v236 = v21[5];
        sub_15894B0((__int64)n, (__int64 *)&v236);
        sub_15F7200(n);
        v231 = 1;
        v57 = v256;
        v233 = 0;
        v58 = (unsigned int)v257;
      }
      else
      {
        v233 = 0;
      }
      v59 = sub_BC4EE0(v21, (__int64)v57, v58, (__int64)&v233);
      if ( a4 == 3 || !sub_1CC0680((__int64 *)a1, (__int64)v21, v204, 0) )
      {
        v60 = v21[2];
        v214 = 0;
        v61 = (_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v60 & 4) != 0 )
          v61 = (_QWORD *)*v61;
        v62 = (__m128i *)sub_BC2FB0(
                           *(_QWORD **)(a1 + 248),
                           SLOBYTE(v229[0]),
                           (__int64)v61,
                           a5,
                           v204,
                           (__int64)v21,
                           (const __m128i *)v256,
                           (unsigned int)v257,
                           v259,
                           v59);
        sub_1CB3490((__int64)v62, (__int64 *)&ptr);
        if ( *(_QWORD *)(a9 + 8) )
        {
          v67 = sub_15AB9E0(a9, *(_QWORD **)(a1 + 248), v63, v64, v65, v66);
          sub_B7C4C0((__int64)v62, v67, v68);
        }
        if ( a13 )
          sub_B7C6B0((__int64)v62, *(_QWORD *)(a1 + 248), a12, a13);
        if ( !v59 )
          sub_BC3800(v21, (__int64)v62, v233);
        v69 = sub_B8E180(*(_QWORD *)(a1 + 544));
        v74 = *(_QWORD **)(a1 + 248);
        if ( !v69 )
        {
          v75 = v62[3].m128i_i64[0];
          if ( v75 )
          {
            v76 = v75 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v76 = sub_A7AA70((__int64)v74, (__int64)v62, v70, v71, v72, v73);
            v74 = *(_QWORD **)(a1 + 248);
          }
          v214 = v76;
        }
        v215 = sub_AB8350(v74, (__int64)v232, v204, (__int64)&ptr, v256, (unsigned int)v257, v214);
        v80 = v203;
        v211 = 0;
        goto LABEL_88;
      }
      goto LABEL_96;
    }
    sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), a5, 0x150Du, 0);
    if ( v265 )
    {
      sub_AE9DF0(v264, (__int64)v21, 0xAu);
    }
    else if ( v267 )
    {
      v149 = sub_168B9E0(&ptr);
      v150 = v262;
      if ( v262 )
        v150 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v262 + 32LL))(v262);
      v250 = v150;
      v151 = sub_1587BC0(v149, (__int64 *)&v250, v145, v146, v147, v148);
      sub_AE9DF0((unsigned __int8 **)(*v151 + 32LL * v266 + 8), (__int64)v21, 0xAu);
    }
    v113 = sub_F58620(*(_BYTE *)(v21[6] + 73LL) >> 5);
    v114 = sub_F58640(v113);
    v252 = 0;
    v116 = v114;
    v117 = v115;
    *(_QWORD *)&v251[4] = 0;
    v254.m128_u64[0] = 0;
    v254.m128_i8[8] = 0;
    dest = &v254.m128_u16[4];
    v255 = 0;
    LODWORD(v250) = a5;
    HIDWORD(v250) = a5;
    n[0] = (size_t)v245;
    v251[0] = 1;
    if ( &v114[v115] && !v114 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v115 > 0xF )
    {
      if ( v115 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      *(_QWORD *)&v229[1] = v114;
      *(_QWORD *)&v229[0] = v115;
      v118 = (_QWORD *)operator new(v115 + 1);
      v117 = *(_QWORD *)&v229[0];
      n[0] = (size_t)v118;
      *(double *)v245 = v229[0];
    }
    else
    {
      if ( v115 == 1 )
      {
        LOBYTE(v245[0]) = *v114;
        v118 = v245;
        goto LABEL_123;
      }
      v118 = v245;
      if ( !v115 )
      {
LABEL_123:
        n[1] = v117;
        *((_BYTE *)v118 + v117) = 0;
        v119 = dest;
        if ( (_QWORD *)n[0] == v245 )
        {
          v130 = n[1];
          if ( n[1] )
          {
            if ( n[1] == 1 )
              *(_BYTE *)dest = v245[0];
            else
              memcpy(dest, (const void *)n[0], n[1]);
            v130 = n[1];
            v119 = dest;
          }
          v254.m128_u64[0] = v130;
          v119[v130] = 0;
          v119 = (_BYTE *)n[0];
          goto LABEL_127;
        }
        if ( dest == &v254.m128_u16[4] )
        {
          v229[0] = *(double *)v245;
          dest = (void *)n[0];
          v254 = _mm_loadh_ps(v229);
        }
        else
        {
          v229[0] = *(double *)v245;
          v120 = v254.m128_u64[1];
          dest = (void *)n[0];
          v254 = _mm_loadh_ps(v229);
          if ( v119 )
          {
            n[0] = (size_t)v119;
            v245[0] = v120;
LABEL_127:
            n[1] = 0;
            *v119 = 0;
            if ( (_QWORD *)n[0] != v245 )
              operator delete((void *)n[0]);
            sub_1589170((__int64)&ptr, &v250);
            if ( dest != &v254.m128_u16[4] )
              operator delete(dest);
            sub_15F7200(&ptr);
            sub_168B9F0((__int64)&ptr, (__int64 *)(a1 + 8), *(_DWORD *)(v21[6] + 24LL), 0x73u, 0);
            sub_15F7200(&ptr);
            LODWORD(v229[0]) = *(_BYTE *)(v21[6] + 73LL) >> 5;
            goto LABEL_48;
          }
        }
        v119 = v245;
        n[0] = (size_t)v245;
        goto LABEL_127;
      }
    }
    *(_QWORD *)&v229[0] = v117;
    memcpy(v118, v116, v117);
    v118 = (_QWORD *)n[0];
    v117 = *(_QWORD *)&v229[0];
    goto LABEL_123;
  }
  v121 = *(_QWORD *)(a1 + 512);
  v122 = *(_DWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 512) = 0;
  v123 = *(_DWORD *)(a1 + 2632);
  v228 = v121;
  v124 = *(_QWORD *)(a1 + 9944);
  v125 = *(_QWORD *)(a1 + 544);
  a2 = (char *)v218;
  *(_QWORD *)(a1 + 544) = v212;
  v263 = v124;
  LODWORD(v124) = *(_DWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 9944) = 0;
  *(_DWORD *)(a1 + 80) = v124;
  *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
  if ( !(unsigned __int8)sub_1CFA440(a1, (__int64)v218, a7, a8) )
  {
    if ( v125 )
    {
      *(_QWORD *)(a1 + 544) = v125;
      *(_DWORD *)(a1 + 80) = v122;
      *(_QWORD *)(a1 + 512) = v228;
      *(_QWORD *)(a1 + 9944) = v263;
      *(_DWORD *)(a1 + 2632) = v123;
    }
    goto LABEL_28;
  }
  result = 0;
  if ( v125 )
  {
    *(_DWORD *)(a1 + 80) = v122;
    v126 = v263;
    *(_QWORD *)(a1 + 544) = v125;
    *(_QWORD *)(a1 + 512) = v228;
    *(_QWORD *)(a1 + 9944) = v126;
    *(_DWORD *)(a1 + 2632) = v123;
  }
  return result;
}
