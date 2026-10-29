void __fastcall sub_158FC10(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int *a5,
        __int64 a6,
        double a7)
{
  __int64 v8; // r12
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  char v13; // r14
  unsigned __int64 v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rbp
  unsigned int v17; // r13d
  _BYTE *v18; // rax
  _DWORD *v19; // rax
  int v20; // r13d
  unsigned int v21; // ebx
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rbx
  __int64 i; // rbp
  _QWORD *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 *v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rsi
  unsigned __int64 *v33; // rbx
  unsigned __int64 *v34; // rbp
  bool v35; // r13
  __m128i *v36; // r12
  _BYTE *v37; // rdi
  unsigned __int64 v38; // r14
  __int64 v39; // rax
  unsigned __int64 *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 *v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  unsigned __int16 *v53; // rdx
  char v54; // r15
  char *v55; // r9
  char *v56; // rdi
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r10
  char *v60; // rax
  char *v61; // r8
  unsigned int v62; // r13d
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rcx
  unsigned __int8 v66; // al
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rbp
  int v70; // ebx
  __int64 v71; // rcx
  unsigned __int64 *v72; // rax
  unsigned __int64 v73; // rax
  unsigned int v74; // ebp
  int v75; // eax
  __int64 v76; // rbp
  __int16 v77; // ax
  __int64 v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rdi
  unsigned __int64 v81; // rax
  __int64 v82; // r8
  unsigned __int8 v83; // al
  __int64 v84; // rbx
  bool v85; // al
  unsigned __int64 v86; // rdx
  unsigned __int8 v87; // cl
  char v88; // al
  __int64 v89; // r9
  __int64 v90; // r8
  char *v91; // rax
  void *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // rax
  unsigned __int64 v98; // rbx
  __int64 *v99; // rbp
  int v100; // r8d
  unsigned int v101; // ebp
  _DWORD *v102; // rcx
  unsigned int v103; // edx
  unsigned __int64 v104; // rax
  __int64 *v105; // rcx
  __int64 v106; // rdx
  char v107; // cl
  unsigned __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r13
  void *v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rdx
  unsigned int v126; // eax
  _BYTE *v127; // rdi
  __int64 v128; // rdx
  _QWORD *v129; // r13
  unsigned __int64 v130; // rbx
  unsigned int v131; // edx
  char *v132; // rsi
  _QWORD *v133; // rdi
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  unsigned __int64 v138; // rax
  int v139; // esi
  int v140; // r9d
  _QWORD *v141; // rdi
  __int64 v142; // rax
  unsigned int v143; // edx
  __int64 *v144; // rsi
  _QWORD *v145; // r9
  __m128 *v146; // rdi
  __int64 v147; // r15
  __int64 v148; // rbx
  int v149; // eax
  unsigned __int64 v150; // rsi
  unsigned __int16 v151; // ax
  __m128 *v152; // kr00_8
  char v153; // al
  char v154; // al
  bool v155; // zf
  __int64 v156; // r8
  __int64 v157; // r9
  unsigned __int64 v158; // rax
  __int64 v159; // rdx
  int v160; // esi
  __int64 v161; // rcx
  _QWORD *v162; // rdx
  unsigned __int64 v163; // rbx
  __int64 v164; // rcx
  __int64 v165; // r8
  __int64 v166; // r9
  __int64 v167; // rdx
  __int64 v168; // rax
  __int64 *v169; // rax
  int v170; // esi
  _QWORD *v171; // rax
  _QWORD *v172; // r13
  unsigned int v173; // ecx
  __int64 *v174; // rdx
  _QWORD *v175; // rbx
  __int64 v176; // r12
  unsigned int v177; // edx
  unsigned __int64 v178; // rax
  __int64 *v179; // rcx
  __int64 v180; // rdx
  __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rax
  __int64 v184; // r12
  __int64 v185; // rax
  __int64 v186; // r15
  char *v187; // rbx
  __int64 v188; // r14
  __int64 *v189; // r13
  bool v190; // al
  __int64 *v191; // rdx
  __int64 v192; // rax
  unsigned __int64 v193; // rsi
  unsigned __int64 v194; // rax
  __int64 *v195; // rsi
  __int64 *v196; // r12
  __int64 *v197; // r14
  __int64 v198; // rbx
  __int64 v199; // rsi
  __int64 v200; // rax
  char *v201; // rdx
  __int64 v202; // r8
  __int64 v203; // rcx
  unsigned int v204; // ecx
  _QWORD *v205; // rsi
  unsigned int v206; // edi
  _QWORD *v207; // rdx
  _QWORD *v208; // r9
  __int64 *v209; // r15
  __int64 *v210; // r13
  unsigned int v211; // ecx
  unsigned int v212; // eax
  __int64 v213; // rdx
  __int64 v214; // rdi
  __int64 v215; // r9
  int v216; // edx
  __int64 v217; // r8
  unsigned __int64 v218; // rdx
  int v219; // eax
  int v220; // esi
  __int64 v221; // r8
  __int64 v222; // rax
  unsigned __int64 v223; // rax
  char v224; // cl
  __m128 **v225; // rdx
  unsigned __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rcx
  __int64 v229; // rdx
  __int64 v230; // rdx
  unsigned __int64 v231; // rdx
  __int64 v232; // rax
  unsigned __int8 v233; // dl
  unsigned __int64 v234; // rax
  unsigned __int16 *v235; // rax
  unsigned __int64 v236; // rcx
  __int64 v237; // rdi
  int v238; // r10d
  __int64 *v239; // rdi
  __int64 *v240; // rsi
  int v241; // r10d
  unsigned __int64 v242; // rdi
  int v243; // eax
  int v244; // esi
  _DWORD *v245; // rax
  unsigned __int64 v246; // rdi
  unsigned __int64 *v247; // rax
  unsigned __int64 v248; // rdx
  unsigned __int64 v249; // rcx
  unsigned __int64 v250; // rax
  int v251; // edx
  int v252; // r10d
  _QWORD *v253; // r9
  _DWORD *v256; // [rsp+10h] [rbp-2A8h]
  bool v258; // [rsp+2Ah] [rbp-28Eh]
  unsigned __int8 v259; // [rsp+2Bh] [rbp-28Dh]
  unsigned int v260; // [rsp+2Ch] [rbp-28Ch]
  __int64 v261; // [rsp+30h] [rbp-288h]
  __int64 v262; // [rsp+38h] [rbp-280h]
  unsigned __int64 v263; // [rsp+40h] [rbp-278h]
  bool v264; // [rsp+48h] [rbp-270h]
  _QWORD *v265; // [rsp+50h] [rbp-268h]
  __int64 v266; // [rsp+50h] [rbp-268h]
  __int64 v267; // [rsp+58h] [rbp-260h]
  _DWORD *v268; // [rsp+60h] [rbp-258h]
  bool v269; // [rsp+60h] [rbp-258h]
  __m128i *v270; // [rsp+68h] [rbp-250h]
  int v271; // [rsp+68h] [rbp-250h]
  unsigned int v272; // [rsp+70h] [rbp-248h]
  bool v273; // [rsp+74h] [rbp-244h]
  bool v274; // [rsp+75h] [rbp-243h]
  char v275; // [rsp+76h] [rbp-242h]
  char v276; // [rsp+77h] [rbp-241h]
  _QWORD *v277; // [rsp+88h] [rbp-230h]
  _QWORD *v278; // [rsp+98h] [rbp-220h] BYREF
  __int64 v279; // [rsp+A0h] [rbp-218h] BYREF
  unsigned __int64 v280; // [rsp+A8h] [rbp-210h] BYREF
  __int64 v281; // [rsp+B0h] [rbp-208h] BYREF
  char v282; // [rsp+B8h] [rbp-200h]
  char v283; // [rsp+B9h] [rbp-1FFh]
  __m128 v284; // [rsp+C0h] [rbp-1F8h] BYREF
  _QWORD *v285; // [rsp+D0h] [rbp-1E8h] BYREF
  __int64 v286; // [rsp+D8h] [rbp-1E0h]
  unsigned int v287; // [rsp+E0h] [rbp-1D8h]
  char *v288; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v289; // [rsp+F8h] [rbp-1C0h]
  unsigned int v290; // [rsp+100h] [rbp-1B8h]
  __m128i v291; // [rsp+110h] [rbp-1A8h] BYREF
  char v292[8]; // [rsp+120h] [rbp-198h] BYREF
  __int64 v293; // [rsp+128h] [rbp-190h]
  void *ptr; // [rsp+130h] [rbp-188h] BYREF
  __int64 v295; // [rsp+138h] [rbp-180h]
  _BYTE v296[48]; // [rsp+140h] [rbp-178h] BYREF
  int v297; // [rsp+170h] [rbp-148h]
  void *s; // [rsp+180h] [rbp-138h] BYREF
  __int64 v299; // [rsp+188h] [rbp-130h]
  _DWORD v300[14]; // [rsp+190h] [rbp-128h] BYREF
  void *v301; // [rsp+1C8h] [rbp-F0h] BYREF
  __int64 v302; // [rsp+1D0h] [rbp-E8h]
  _QWORD v303[20]; // [rsp+1D8h] [rbp-E0h] BYREF
  unsigned __int64 v304; // [rsp+278h] [rbp-40h]

  v8 = a2;
  v9 = *(_BYTE *)(a2 + 28) & 0x7F;
  v10 = (unsigned int)v9 - 34;
  if ( (unsigned int)v10 > 5 )
  {
    if ( v9 != 18 )
    {
      if ( v9 == 8 )
      {
        v109 = *(_QWORD *)(sub_F68450(
                             *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL),
                             a2,
                             v10,
                             a4 & 0xFFFFFFFFFFFFFFF0LL,
                             (__int64)a5)
                         & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v109 + 16) - 25 <= 1
          || (v112 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v109 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 25,
              (unsigned int)v112 <= 1)
          && (v109 = sub_F63050(v109, a2, v112, v110)) != 0 )
        {
          v258 = 0;
          v111 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v109 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                           & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v111 + 16) == 13 )
            v258 = ((*(_WORD *)(v111 + 18) >> 3) & 0x1FF) == 435;
          v13 = *(_BYTE *)(v109 + 21) & 1;
          goto LABEL_6;
        }
        v48 = a1;
      }
      else
      {
        v48 = a1;
      }
      v49 = *(_QWORD *)(v48 + 264);
      v50 = a5[3];
      if ( v50 )
      {
        if ( v50 == 3 )
        {
          a2 = 6891;
          if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v49 + 32), 0x1AEBu, a5[4], v49, (__int64)a5, a6) == 1 )
            return;
        }
      }
      else
      {
        a2 = 6891;
        if ( (unsigned __int8)sub_FD3830(*(_QWORD *)(v49 + 32), 0x1AEBu, a5[4], v49, (__int64)a5, a6) == 1 )
          return;
      }
      v13 = 0;
      v258 = 0;
      goto LABEL_11;
    }
    v258 = 0;
    v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v43 + 16) == 13 )
      v258 = ((*(_WORD *)(v43 + 18) >> 3) & 0x1FF) == 435;
    v13 = 0;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v44 = sub_B8C3D0(a2, a2, v10, a4, (__int64)a5, a6);
      v45 = *v44;
      v46 = *v44 + 8LL * *((unsigned int *)v44 + 2);
      if ( *v44 < v46 )
      {
        v108 = *v44;
        while ( 1 )
        {
          v45 = v108;
          if ( *(_WORD *)(*(_QWORD *)v108 + 36LL) == 279 )
            goto LABEL_138;
          v108 += 8LL;
          if ( v46 == v108 )
            goto LABEL_63;
        }
      }
      if ( v45 == v46 )
        goto LABEL_6;
      if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 279 )
        goto LABEL_138;
      v47 = v46 + 8;
      while ( 1 )
      {
        v46 = v47;
        if ( v45 == v47 )
          break;
        v47 += 8LL;
        if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 279 )
          goto LABEL_138;
      }
LABEL_63:
      v13 = 0;
    }
  }
  else
  {
    if ( (*(_WORD *)a3 & 0x1FF) == 0xF6 )
    {
      v258 = *(_QWORD *)(a3 + 56) != 0;
    }
    else
    {
      v41 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v10 = (unsigned int)*(unsigned __int8 *)(v41 + 16) - 25;
      if ( (unsigned int)v10 > 1 )
        v41 = sub_F63050(v41, a2, v10, a4);
      v258 = 0;
      v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v42 + 16) == 13 )
        v258 = ((*(_WORD *)(v42 + 18) >> 3) & 0x1FF) == 435;
    }
    v13 = sub_B74ED0(a2, a2, v10, a4);
    if ( v13 || (*(_BYTE *)(a2 + 29) & 1) == 0 )
      goto LABEL_6;
    v72 = sub_B8C3D0(a2, a2, v11, v12, (__int64)a5, a6);
    v45 = *v72;
    v46 = *v72 + 8LL * *((unsigned int *)v72 + 2);
    if ( *v72 < v46 )
    {
      v73 = *v72;
      while ( 1 )
      {
        v45 = v73;
        if ( *(_WORD *)(*(_QWORD *)v73 + 36LL) == 236 )
          goto LABEL_138;
        v73 += 8LL;
        if ( v46 == v73 )
          goto LABEL_6;
      }
    }
    if ( v45 == v46 )
      goto LABEL_6;
    if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 236 )
    {
LABEL_138:
      v13 = v45 != v46;
      goto LABEL_6;
    }
    v79 = v46 + 8;
    while ( 1 )
    {
      v46 = v79;
      if ( v45 == v79 )
        break;
      v79 += 8LL;
      if ( *(_WORD *)(*(_QWORD *)v46 + 36LL) == 236 )
        goto LABEL_138;
    }
  }
LABEL_6:
  a2 = (__int64)a5;
  v14 = *(_QWORD *)(a1 + 264);
  v15 = a5[3];
  if ( v15 )
  {
    if ( v15 == 3 )
    {
      if ( v258
        || (a2 = 6891, (unsigned __int8)sub_FD3830(*(_QWORD *)(v14 + 32), 0x1AEBu, a5[4], v14, (__int64)a5, a6) == 1) )
      {
        if ( !v13 )
          return;
      }
    }
    else if ( v13 != 1 && v258 )
    {
      return;
    }
  }
  else
  {
    v16 = *(_QWORD *)(v14 + 32);
    if ( v258 )
    {
      v17 = a5[4];
      if ( !v13
        || (a2 = 7148,
            (unsigned __int8)sub_FD3830(*(_QWORD *)(v14 + 32), 0x1BECu, v17, *(_QWORD *)(a1 + 264), (__int64)a5, a6) == 1) )
      {
        a2 = 7401;
        if ( (unsigned __int8)sub_FD3830(v16, 0x1CE9u, v17, v14, (__int64)a5, a6) == 1 )
          return;
      }
      else
      {
        v258 = v13;
      }
    }
    else
    {
      v62 = a5[4];
      a2 = 6891;
      if ( (unsigned __int8)sub_FD3830(v16, 0x1AEBu, v62, v14, (__int64)a5, a6) == 1 )
      {
        if ( !v13 )
          return;
        a2 = 7148;
        if ( (unsigned __int8)sub_FD3830(v16, 0x1BECu, v62, v14, v63, v64) == 1 )
          return;
      }
    }
  }
LABEL_11:
  v260 = sub_EEB7E0(a3, a2, a7);
  v272 = sub_EEC140(a3);
  v18 = (_BYTE *)sub_B8BF30(v8);
  if ( v18 && sub_B753F0(v18) )
    return;
  v19 = sub_986B70(a6);
  v256 = v19;
  if ( !v19 )
    return;
  v20 = v19[6];
  ptr = v296;
  v21 = (unsigned int)(v20 + 63) >> 6;
  v295 = 0x600000000LL;
  if ( v21 > 6 )
  {
    sub_2237220(&ptr, v296, v21, 8);
    memset(ptr, 0, 8LL * v21);
    LODWORD(v295) = (unsigned int)(v20 + 63) >> 6;
  }
  else
  {
    if ( v21 )
    {
      v22 = 0;
      do
      {
        v23 = v22;
        v22 += 8;
        *(_QWORD *)&v296[v23] = 0;
      }
      while ( v22 < 8 * v21 );
    }
    LODWORD(v295) = (unsigned int)(v20 + 63) >> 6;
  }
  v297 = v20;
  v24 = sub_9C7230(*(_QWORD *)v256, (__int64 *)&ptr);
  if ( !*(_BYTE *)(a6 + 97) && v24 != v256[6] )
  {
    v25 = *((_QWORD *)v256 + 5);
    for ( i = *((_QWORD *)v256 + 6); i != v25; v25 += 8 )
    {
      v27 = *(_QWORD **)v25;
      v28 = *((_QWORD *)ptr + (*(_DWORD *)(*(_QWORD *)v25 + 48LL) >> 6));
      if ( !_bittest64(&v28, *(unsigned int *)(*(_QWORD *)v25 + 48LL))
        && v27[7] == v27[8]
        && (v27[4] & 0xFFFFFFFFFFFFFFF8LL) != 0
        && (*(_WORD *)(v27[4] & 0xFFFFFFFFFFFFFFF8LL) & 0x1FF) == 0xFB )
      {
        sub_9C7230((__int64)v27, (__int64 *)&ptr);
      }
    }
  }
  v29 = *((_QWORD *)v256 + 1);
  v30 = *(__int64 **)(v29 + 64);
  v31 = *(__int64 **)(v29 + 56);
  v292[0] |= 3u;
  v293 = v29;
  v291 = _mm_loadu_si128((const __m128i *)(v29 + 56));
  if ( v30 != v31 )
  {
    while ( 1 )
    {
      v32 = *v31;
      if ( !sub_995A90(v292, *v31, v29) )
        break;
      v31 = (__int64 *)(v291.m128i_i64[0] + 16);
      v291.m128i_i64[0] = (__int64)v31;
      if ( (__int64 *)v291.m128i_i64[1] == v31 )
        goto LABEL_111;
      v29 = v293;
    }
    v34 = (unsigned __int64 *)v291.m128i_i64[1];
    v33 = (unsigned __int64 *)v291.m128i_i64[0];
    v262 = v8;
    v35 = 0;
    v273 = 0;
    v36 = &v291;
    v259 = 0;
    v37 = ptr;
    v274 = 0;
    v275 = v13;
    v263 = a3;
    if ( v291.m128i_i64[0] == v291.m128i_i64[1] )
    {
LABEL_40:
      v13 = v275;
      v8 = v262;
      if ( !v259 )
      {
        if ( v273 )
        {
          if ( v37 != v296 )
            free(v37);
          return;
        }
        goto LABEL_112;
      }
      if ( v35 || v274 || v273 )
      {
        v70 = 2;
        if ( v37 == v296 )
        {
LABEL_126:
          if ( v275 )
          {
            v71 = *a5;
            if ( (_DWORD)v71 )
            {
              sub_168B9F0(&s, a1 + 8, v272, v71, 0);
              sub_1588370((__int64)&s, a5 + 3);
              sub_15F7200(&s);
            }
            return;
          }
          if ( v258 )
            return;
          v74 = a5[1];
          if ( !v74 )
            return;
          if ( sub_B8BF30(v262) )
          {
            if ( (*(_WORD *)v263 & 0x1FF) == 0xF9 )
            {
              v75 = *(_DWORD *)(v263 + 4);
              if ( v75 )
              {
                v76 = *(_QWORD *)(v263 + 8LL * (unsigned int)(v75 - 1) + 16);
                v77 = *(_WORD *)v76 & 0x1FF;
                if ( v77 == 60 )
                {
                  v76 = *(_QWORD *)(v76 + 16);
                  v77 = *(_WORD *)v76 & 0x1FF;
                }
                if ( ((v77 + 423) & 0x1FFu) <= 4 )
                {
                  v120 = sub_BFBC70(*(_QWORD *)(v76 + 32));
                  if ( v120 )
                  {
                    v124 = (*(_BYTE *)(v120 + 28) & 0x7Fu) - 34;
                    if ( (unsigned int)v124 <= 5 && (*(_BYTE *)(v120 + 29) & 1) != 0 )
                    {
                      v247 = sub_B8C3D0(v120, v32, v124, v121, v122, v123);
                      v248 = *v247;
                      v249 = *v247 + 8LL * *((unsigned int *)v247 + 2);
                      if ( *v247 >= v249 )
                      {
                        if ( v248 != v249 )
                        {
                          while ( *(_WORD *)(*(_QWORD *)v249 + 36LL) != 236 )
                          {
                            v249 += 8LL;
                            if ( v248 == v249 )
                              goto LABEL_229;
                          }
                          return;
                        }
                      }
                      else
                      {
                        v250 = *v247;
                        while ( *(_WORD *)(*(_QWORD *)v250 + 36LL) != 236 )
                        {
                          v250 += 8LL;
                          if ( v249 == v250 )
                            goto LABEL_229;
                        }
                        if ( v249 != v250 )
                          return;
                      }
                    }
                  }
LABEL_229:
                  v77 = *(_WORD *)v76 & 0x1FF;
                }
                if ( v77 == 97 )
                  return;
                v74 = a5[1];
              }
            }
          }
          LOBYTE(ptr) = v70 == 2;
          sub_168B9F0(&s, a1 + 8, v272, v74, 0);
          v78 = sub_1588370((__int64)&s, a5 + 3);
          sub_15890D0(v78, (unsigned __int8 *)&ptr);
          sub_15F7200(&s);
          return;
        }
      }
      else
      {
        v70 = 3;
        if ( v37 == v296 )
          goto LABEL_126;
      }
      free(v37);
      goto LABEL_126;
    }
    while ( 1 )
    {
      v38 = *v33;
      v39 = *(_QWORD *)&v37[8 * (*(_DWORD *)(*v33 + 48) >> 6)];
      if ( !_bittest64(&v39, *(unsigned int *)(*v33 + 48)) )
        goto LABEL_34;
      if ( (*(_BYTE *)(v38 + 104) & 1) != 0 )
        goto LABEL_33;
      v51 = *(_QWORD *)v38;
      v32 = *(_QWORD *)(v38 + 8);
      if ( *(_QWORD *)v38 == v32 )
      {
LABEL_101:
        if ( (*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v32 = v259;
          if ( (*(_WORD *)(*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF8LL) & 0x1FF) == 251
            || (*(_WORD *)(*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF8LL) & 0x1FF) == 156 )
          {
            v35 = (*(_WORD *)(*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF8LL) & 0x1FF) == 251
               || (*(_WORD *)(*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF8LL) & 0x1FF) == 156;
          }
          else
          {
            v32 = 1;
          }
          v259 = v32;
          goto LABEL_34;
        }
LABEL_100:
        v259 = 1;
        goto LABEL_34;
      }
      while ( 1 )
      {
        v52 = *(_DWORD *)v51 & 3 | (4 * (*(_QWORD *)(v51 + 8) & 3));
        if ( v52 <= 8 && (unsigned int)v52 > 5 )
          break;
        v51 += 16;
        if ( v32 == v51 )
          goto LABEL_101;
      }
      v53 = (unsigned __int16 *)(*(_QWORD *)v51 & 0xFFFFFFFFFFFFFFFCLL);
      v32 = *v53;
      LOWORD(v32) = v32 & 0x1FF;
      if ( (_WORD)v32 == 247 || (_WORD)v32 == 139 )
      {
        v273 = (_WORD)v32 == 247 || (_WORD)v32 == 139;
        goto LABEL_34;
      }
      v54 = (_WORD)v32 == 97 || (_WORD)v32 == 157;
      if ( v54 )
      {
        v274 = (_WORD)v32 == 97 || (_WORD)v32 == 157;
        goto LABEL_34;
      }
      if ( (_WORD)v32 == 255 )
      {
        v274 = 1;
        v273 = 1;
        goto LABEL_34;
      }
      if ( (_WORD)v32 == 251 )
        goto LABEL_33;
      v55 = *(char **)(v38 + 88);
      v56 = *(char **)(v38 + 80);
      v57 = *((_QWORD *)v256 + 1);
      v58 = (v55 - v56) >> 6;
      v59 = (v55 - v56) >> 4;
      if ( v58 <= 0 )
      {
        v60 = *(char **)(v38 + 80);
      }
      else
      {
        if ( v57 == *(_QWORD *)v56 )
        {
          v60 = *(char **)(v38 + 80);
          goto LABEL_98;
        }
        v60 = v56 + 16;
        if ( v57 == *((_QWORD *)v56 + 2) )
          goto LABEL_98;
        v60 = v56 + 32;
        if ( v57 == *((_QWORD *)v56 + 4) )
          goto LABEL_98;
        v60 = v56 + 48;
        v61 = &v56[64 * v58];
        if ( v57 == *((_QWORD *)v56 + 6) )
          goto LABEL_98;
        while ( 1 )
        {
          v60 = v56 + 64;
          if ( v61 == v56 + 64 )
            break;
          if ( v57 == *((_QWORD *)v56 + 8) )
            goto LABEL_98;
          if ( v57 == *((_QWORD *)v56 + 10) )
          {
            v60 = v56 + 80;
            goto LABEL_98;
          }
          if ( v57 == *((_QWORD *)v56 + 12) )
          {
            v60 = v56 + 96;
            goto LABEL_98;
          }
          if ( v57 == *((_QWORD *)v56 + 14) )
          {
            v60 = v56 + 112;
            goto LABEL_98;
          }
          v56 += 64;
        }
        v59 = (v55 - v60) >> 4;
      }
      if ( v59 != 2 )
      {
        if ( v59 != 3 )
        {
          if ( v59 == 1 )
          {
LABEL_97:
            if ( v57 == *(_QWORD *)v60 )
              goto LABEL_98;
          }
LABEL_33:
          v35 = 1;
          goto LABEL_34;
        }
        if ( v57 == *(_QWORD *)v60 )
          goto LABEL_98;
        v60 += 16;
      }
      if ( v57 != *(_QWORD *)v60 )
      {
        v60 += 16;
        goto LABEL_97;
      }
LABEL_98:
      if ( v55 == v60 )
        goto LABEL_33;
      LOWORD(v32) = (v32 + 423) & 0x1FF;
      if ( (unsigned __int16)v32 > 4u )
        goto LABEL_100;
      v80 = *((_QWORD *)v53 + 4);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 42 )
        goto LABEL_100;
      v81 = sub_BFBAE0(v80);
      if ( (*(_WORD *)v81 & 0x1FF) != 0x47 )
        goto LABEL_100;
      v82 = *(_QWORD *)(v81 + 16);
      v83 = *(_BYTE *)(v82 + 28) & 0x7F;
      if ( (unsigned int)v83 - 40 > 6 )
        goto LABEL_100;
      if ( v83 == 43
        || (v84 = *(_QWORD *)(v82 + 48),
            v261 = v82,
            v32 = sub_B8C330(*(_QWORD *)(a6 + 8)),
            v85 = sub_F56AE0(v84, (_QWORD *)v32),
            v82 = v261,
            !v85) )
      {
        v86 = *(_QWORD *)(v82 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v82 + 16) & 4) != 0 )
          v86 = *(_QWORD *)v86;
        v87 = *(_BYTE *)(v86 + 8) & 0x7F;
        if ( v87 <= 0x12u )
        {
          if ( ((1LL << v87) & 0x40182) != 0 )
            goto LABEL_176;
          goto LABEL_225;
        }
        if ( v87 <= 0x21u || v87 > 0x27u )
        {
LABEL_225:
          v34 = (unsigned __int64 *)v291.m128i_i64[1];
          v33 = (unsigned __int64 *)v291.m128i_i64[0];
          v259 = 1;
          goto LABEL_34;
        }
LABEL_176:
        v267 = v82;
        v285 = nullptr;
        v286 = 0;
        v287 = 0;
        v284.m128_u64[0] = v38;
        v88 = sub_15817A0((__int64 *)&v285, (__int64 *)&v284, &v288);
        v90 = v267;
        if ( v88 )
        {
          v91 = v288 + 8;
        }
        else
        {
          s = v288;
          v228 = (unsigned int)(4 * (v286 + 1));
          v229 = 3 * v287;
          if ( (unsigned int)v228 >= (unsigned int)v229 )
          {
            sub_15869A0((__int64 *)&v285, 2 * v287, v229, v228, v267, v89);
            sub_15817A0((__int64 *)&v285, (__int64 *)&v284, &s);
            v90 = v267;
          }
          else
          {
            v230 = v287 >> 3;
            if ( v287 - HIDWORD(v286) - ((_DWORD)v286 + 1) <= (unsigned int)v230 )
            {
              sub_15869A0((__int64 *)&v285, v287, v230, (__int64)&s, v267, v89);
              sub_15817A0((__int64 *)&v285, (__int64 *)&v284, &s);
              v90 = v267;
            }
          }
          LODWORD(v286) = v286 + 1;
          if ( *(_QWORD *)s != -4096 )
            --HIDWORD(v286);
          v231 = v284.m128_u64[0];
          v91 = (char *)s + 8;
          *((_BYTE *)s + 9) = 0;
          *((_QWORD *)v91 - 1) = v231;
        }
        if ( v91[1] )
          v91[1] = 0;
        v281 = v90;
        v283 = 0;
        v268 = sub_986B70(a6);
        v92 = sub_9C4E10();
        v97 = sub_984EE0(a6, (__int64)v92, v93, v94, v95, v96);
        v98 = *v97;
        v99 = v97;
        if ( !*v97 )
        {
          sub_9C5CE0((__int64 *)&s, a6);
          v98 = (unsigned __int64)s;
          v246 = *v99;
          s = nullptr;
          *v99 = v98;
          if ( v246 )
          {
            (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v246 + 8LL))(v246);
            if ( s )
              (*(void (__fastcall **)(void *))(*(_QWORD *)s + 8LL))(s);
            v98 = *v99;
          }
        }
        v100 = v268[6];
        s = v300;
        v299 = 0x600000000LL;
        v101 = (unsigned int)(v100 + 63) >> 6;
        if ( v101 > 6 )
        {
          v271 = v100;
          sub_2237220(&s, v300, v101, 8);
          v245 = memset(s, 0, 8LL * v101);
          LODWORD(v299) = v101;
          v100 = v271;
          v102 = v245;
        }
        else
        {
          if ( v101 )
            memset(v300, 0, 8LL * v101);
          LODWORD(v299) = (unsigned int)(v100 + 63) >> 6;
          v102 = v300;
        }
        v304 = v98;
        v301 = v303;
        v300[12] = v100;
        v302 = 0x1400000000LL;
        v288 = nullptr;
        v289 = 0;
        v290 = 0;
        v103 = *(_DWORD *)(v38 + 48);
        v104 = v103 & 0x3F;
        v105 = (__int64 *)&v102[2 * (v103 >> 6)];
        v106 = *v105;
        if ( _bittest64(&v106, v104) )
          goto LABEL_186;
        v125 = v106 | (1LL << v104);
        v269 = v35;
        v126 = 1;
        *v105 = v125;
        v303[0] = v38;
        LODWORD(v302) = 1;
        v276 = v54;
        v270 = v36;
        while ( 2 )
        {
          v127 = v301;
          v128 = 8LL * v126;
          v129 = *(_QWORD **)v301;
          if ( v128 != 8 )
          {
            v201 = (char *)v301 + v128;
            v202 = v304;
            v203 = *((_QWORD *)v201 - 1);
            *((_QWORD *)v201 - 1) = v129;
            sub_98F390((__int64)v127, 0, (v201 - 8 - v127) >> 3, v203, v202);
            v126 = v302;
          }
          LODWORD(v302) = v126 - 1;
          *((_QWORD *)s + (*((_DWORD *)v129 + 12) >> 6)) &= ~(1LL << *((_DWORD *)v129 + 12));
          v278 = v129;
          sub_15866C0(&v284, &v288[8 * v290], &v288[8 * v290], (__int64)&v288, 1);
          v130 = v284.m128_u64[0];
          if ( !v290 )
            goto LABEL_242;
          v131 = (v290 - 1) & (((unsigned int)v129 >> 9) ^ ((unsigned int)v129 >> 4));
          v132 = &v288[8 * v131];
          v133 = *(_QWORD **)v132;
          if ( v129 == *(_QWORD **)v132 )
            goto LABEL_235;
          v139 = 1;
          if ( v133 == (_QWORD *)-4096LL )
          {
LABEL_242:
            sub_15866C0(&v284, &v288[8 * v290], &v288[8 * v290], (__int64)&v288, 1);
            v138 = v284.m128_u64[0];
          }
          else
          {
            while ( 1 )
            {
              v140 = v139 + 1;
              v131 = (v290 - 1) & (v139 + v131);
              v132 = &v288[8 * v131];
              v141 = *(_QWORD **)v132;
              if ( v129 == *(_QWORD **)v132 )
                break;
              v139 = v140;
              if ( v141 == (_QWORD *)-4096LL )
                goto LABEL_242;
            }
LABEL_235:
            sub_15866C0(&v284, v132, &v288[8 * v290], (__int64)&v288, 1);
            v138 = v284.m128_u64[0];
          }
          if ( v130 != v138 )
          {
LABEL_237:
            v126 = v302;
            if ( (_DWORD)v302 )
              continue;
            v35 = v269;
            v54 = v276;
            v36 = v270;
LABEL_186:
            operator delete(v288, 8LL * v290, 8);
            if ( v301 != v303 )
              free(v301);
            if ( s != v300 )
              free(s);
            v32 = 16LL * v287;
            operator delete(v285, v32, 8);
            goto LABEL_191;
          }
          break;
        }
        v142 = v290;
        if ( v290 )
        {
          v135 = (__int64)v278;
          v136 = (__int64)v288;
          v143 = (v290 - 1) & (((unsigned int)v278 >> 9) ^ ((unsigned int)v278 >> 4));
          v144 = (__int64 *)&v288[8 * v143];
          v145 = (_QWORD *)*v144;
          if ( (_QWORD *)*v144 == v278 )
            goto LABEL_245;
          v238 = 1;
          v239 = nullptr;
          if ( v145 != (_QWORD *)-4096LL )
          {
            while ( 1 )
            {
              if ( !v239 && v145 == (_QWORD *)-8192LL )
                v239 = v144;
              v143 = (v290 - 1) & (v238 + v143);
              v144 = (__int64 *)&v288[8 * v143];
              v145 = (_QWORD *)*v144;
              if ( v278 == (_QWORD *)*v144 )
                break;
              if ( v145 == (_QWORD *)-4096LL )
              {
                if ( v239 )
                  goto LABEL_376;
                goto LABEL_375;
              }
              ++v238;
            }
LABEL_245:
            v146 = &v284;
            sub_9B5320(&v284, v144, &v288[8 * v290], (__int64)&v288, 1);
            goto LABEL_246;
          }
LABEL_375:
          v239 = v144;
LABEL_376:
          v284.m128_u64[0] = (unsigned __int64)v239;
          v134 = (unsigned int)(v289 + 1);
          v137 = (unsigned int)(4 * v134);
          if ( (unsigned int)v137 < 3 * v290 )
          {
            v137 = v290 >> 3;
            if ( v290 - HIDWORD(v289) - (unsigned int)v134 > (unsigned int)v137 )
              goto LABEL_378;
            v244 = v290;
LABEL_395:
            sub_158F9B0((__int64)&v288, v244, v134, v135, v136, v137);
            sub_1582480((__int64 *)&v288, (__int64 *)&v278, &v284);
            v135 = (__int64)v278;
            v136 = (__int64)v288;
            v142 = v290;
            LODWORD(v134) = v289 + 1;
            v239 = (__int64 *)v284.m128_u64[0];
LABEL_378:
            v155 = *v239 == -4096;
            LODWORD(v289) = v134;
            if ( !v155 )
              --HIDWORD(v289);
            *v239 = v135;
            v240 = v239;
            v146 = &v284;
            sub_9B5320(&v284, v240, (_QWORD *)(v136 + 8 * v142), (__int64)&v288, 1);
LABEL_246:
            v147 = *v278;
            v148 = v278[1];
            if ( *v278 == v148 )
              goto LABEL_271;
            while ( 2 )
            {
              v149 = *(_DWORD *)v147 & 3 | (4 * (*(_QWORD *)(v147 + 8) & 3));
              if ( v149 > 8 || (unsigned int)v149 <= 5 )
                goto LABEL_248;
              v150 = *(_QWORD *)v147 & 0xFFFFFFFFFFFFFFFCLL;
              if ( v283 )
                v283 = 0;
              v151 = *(_WORD *)v150 & 0x1FF;
              if ( v151 <= 0x75u )
              {
                if ( v151 != 4 )
                  goto LABEL_309;
                switch ( *(_BYTE *)(v150 + 2) >> 3 )
                {
                  case 0:
                  case 1:
                  case 2:
                  case 3:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 11:
                  case 12:
                  case 13:
                    goto LABEL_248;
                  case 4:
                    break;
                  default:
                    if ( *(_BYTE *)(v150 + 2) >> 3 != 4 )
                      goto LABEL_248;
                    break;
                }
                v146 = (__m128 *)&v281;
                sub_157DBB0((__int64)&v281, v150);
                v153 = v283;
              }
              else
              {
                if ( v151 <= 0x77u )
                {
                  v152 = v146;
                  v146 = (__m128 *)&v281;
                  switch ( (*(_WORD *)(v150 + 2) >> 3) & 0x3F )
                  {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xA:
                    case 0xB:
                    case 0xC:
                    case 0xD:
                    case 0xE:
                    case 0xF:
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    case 0x17:
                    case 0x18:
                    case 0x19:
                    case 0x1A:
                    case 0x1B:
                    case 0x1C:
                    case 0x1D:
                    case 0x1E:
                    case 0x1F:
                    case 0x20:
                      goto LABEL_260;
                    default:
                      v146 = v152;
                      break;
                  }
                }
LABEL_309:
                if ( v151 == 93 )
                {
LABEL_312:
                  v146 = (__m128 *)&v281;
                  sub_157D870((__int64)&v281, v150);
                  v153 = v283;
                }
                else
                {
                  if ( v151 > 0x5Du )
                  {
                    if ( v151 > 0xF4u )
                      goto LABEL_313;
                    if ( v151 >= 0x78u || v151 < 0x76u )
                      goto LABEL_248;
                    v146 = (__m128 *)&v281;
LABEL_260:
                    sub_157DF00((__int64)&v281, v150);
                  }
                  else
                  {
                    if ( v151 > 0x58u )
                      goto LABEL_312;
                    if ( v151 )
                    {
LABEL_248:
                      v147 += 16;
                      if ( v148 == v147 )
                        goto LABEL_271;
                      continue;
                    }
LABEL_313:
                    if ( v151 != 245 )
                      goto LABEL_248;
                    v192 = *(_QWORD *)(v150 + 8);
                    if ( (v192 & 1) != 0 )
                    {
                      v193 = v192 & 0xFFFFFFFFFFFFFFFELL;
                      v194 = (v192 & 0xFFFFFFFFFFFFFFFELL) + 8LL * *(unsigned int *)(v192 & 0xFFFFFFFFFFFFFFFELL) + 8;
                      v195 = (__int64 *)(v193 + 8);
LABEL_316:
                      v196 = (__int64 *)v194;
                      if ( v195 != (__int64 *)v194 )
                      {
                        v266 = v148;
                        v197 = v195;
                        do
                        {
                          v198 = *v197;
                          if ( (*(_BYTE *)(*v197 + 28) & 0x7Fu) - 40 <= 6 )
                          {
                            v146 = (__m128 *)*v197;
                            v199 = sub_B8C330(*v197);
                            v200 = sub_B7D8D0(v198, v199);
                            if ( v200 )
                            {
                              if ( v200 == v281 )
                              {
                                v223 = sub_B73640(v200);
                                v224 = 0;
                                v146 = (__m128 *)v223;
                                if ( v223 )
                                {
                                  if ( (*(_WORD *)v223 & 0x1FF) == 0x35 )
                                  {
                                    v225 = *(__m128 ***)(v223 + 16);
                                    if ( (unsigned int)((__int64)(*(_QWORD *)(v223 + 24) - (_QWORD)v225) >> 3) )
                                      v146 = *v225;
                                  }
                                  v226 = sub_BFD550((unsigned __int64)v146);
                                  v224 = 0;
                                  if ( (*(_WORD *)v226 & 0x1FF) == 0x47 )
                                  {
                                    v146 = *(__m128 **)(v226 + 16);
                                    v227 = (v146[1].m128_i8[12] & 0x7Fu) - 34;
                                    if ( (unsigned int)v227 <= 5 )
                                      v224 = sub_B74ED0((__int64)v146, v199, v227, 0);
                                  }
                                }
                                v282 = v224;
                                v283 = 1;
                              }
                            }
                          }
                          ++v197;
                        }
                        while ( v196 != v197 );
                        v148 = v266;
                      }
                    }
                    else if ( v192 )
                    {
                      v194 = v150 + 16;
                      v195 = (__int64 *)(v150 + 8);
                      goto LABEL_316;
                    }
                  }
                  v153 = v283;
                }
              }
              break;
            }
            if ( !v153 )
              goto LABEL_248;
            v154 = v282;
            if ( v282 )
            {
              v155 = (unsigned __int8)sub_15817A0((__int64 *)&v285, (__int64 *)&v278, &v280) == 0;
              v158 = v280;
              if ( v155 )
              {
                v284.m128_u64[0] = v280;
                v159 = (unsigned int)(v286 + 1);
                v160 = 2 * v287;
                v161 = 3 * v287;
                if ( 4 * (int)v159 < (unsigned int)v161 )
                {
                  v159 = v287 - HIDWORD(v286) - (unsigned int)v159;
                  v161 = v287 >> 3;
                  if ( (unsigned int)v159 > (unsigned int)v161 )
                    goto LABEL_267;
                  v160 = v287;
                }
                sub_15869A0((__int64 *)&v285, v160, v159, v161, v156, v157);
                sub_15817A0((__int64 *)&v285, (__int64 *)&v278, &v284);
LABEL_267:
                v158 = v284.m128_u64[0];
                LODWORD(v286) = v286 + 1;
                if ( *(_QWORD *)v284.m128_u64[0] != -4096 )
                  --HIDWORD(v286);
                v162 = v278;
                *(_BYTE *)(v284.m128_u64[0] + 9) = 0;
                *(_QWORD *)v158 = v162;
              }
              *(_WORD *)(v158 + 8) = 257;
LABEL_271:
              sub_1582530(&v284, &v285[2 * v287], &v285[2 * v287], (__int64)&v285, 1);
              v163 = v284.m128_u64[0];
              if ( (_DWORD)v286 )
                sub_1582530(&v284, v285, &v285[2 * v287], (__int64)&v285, 0);
              else
                sub_1582530(&v284, &v285[2 * v287], &v285[2 * v287], (__int64)&v285, 1);
              v167 = v284.m128_u64[0];
              if ( v163 != v284.m128_u64[0] )
              {
                if ( *(_BYTE *)(v284.m128_u64[0] + 9) && *(_BYTE *)(v284.m128_u64[0] + 8) )
                {
                  do
                  {
                    v164 = v167 + 16;
                    if ( v167 + 16 != v284.m128_u64[1] )
                    {
                      v168 = *(_QWORD *)(v167 + 16);
                      if ( v168 != -4096 && v168 != -8192 )
                      {
                        v167 += 16;
                        goto LABEL_283;
                      }
                      v169 = (__int64 *)(v167 + 32);
                      while ( 1 )
                      {
                        v167 = (__int64)v169;
                        if ( v169 == (__int64 *)v284.m128_u64[1] )
                          break;
                        v164 = *v169;
                        v169 += 2;
                        if ( v164 != -8192 && v164 != -4096 )
                          goto LABEL_283;
                      }
                    }
                    v167 = v284.m128_i64[1];
LABEL_283:
                    if ( v167 == v163 )
                      goto LABEL_381;
                  }
                  while ( *(_BYTE *)(v167 + 8) && *(_BYTE *)(v167 + 9) );
                }
                v170 = v287;
                if ( v287 )
                {
                  v171 = v278;
                  v166 = v287 - 1;
                  v172 = v278;
                  v173 = v166 & (((unsigned int)v278 >> 9) ^ ((unsigned int)v278 >> 4));
                  v174 = &v285[2 * v173];
                  v165 = *v174;
                  if ( v278 == (_QWORD *)*v174 )
                  {
LABEL_288:
                    if ( *((_BYTE *)v174 + 9) )
                      goto LABEL_237;
LABEL_289:
                    v175 = (_QWORD *)v171[7];
                    v265 = (_QWORD *)v171[8];
                    if ( v265 == v175 )
                    {
                      v204 = v287;
                      v205 = v285;
                      if ( !v287 )
                        goto LABEL_237;
LABEL_327:
                      v206 = (v204 - 1) & (((unsigned int)v171 >> 9) ^ ((unsigned int)v171 >> 4));
                      v207 = &v205[2 * v206];
                      v208 = (_QWORD *)*v207;
                      if ( (_QWORD *)*v207 != v171 )
                      {
                        v251 = 1;
                        if ( v208 == (_QWORD *)-4096LL )
                          goto LABEL_329;
                        while ( 1 )
                        {
                          v252 = v251 + 1;
                          v206 = (v204 - 1) & (v251 + v206);
                          v207 = &v205[2 * v206];
                          v253 = (_QWORD *)*v207;
                          if ( (_QWORD *)*v207 == v171 )
                            break;
                          v251 = v252;
                          if ( v253 == (_QWORD *)-4096LL )
                            goto LABEL_329;
                        }
                      }
                      *v207 = -8192;
                      v171 = v278;
                      LODWORD(v286) = v286 - 1;
                      ++HIDWORD(v286);
                    }
                    else
                    {
                      do
                      {
                        v176 = *v175;
                        if ( *v175 )
                        {
                          v177 = *(_DWORD *)(v176 + 48);
                          v178 = v177 & 0x3F;
                          v179 = (__int64 *)((char *)s + 8 * (v177 >> 6));
                          v180 = *v179;
                          if ( !_bittest64(&v180, v178) )
                          {
                            v181 = v180 | (1LL << v178);
                            v182 = (unsigned int)v302;
                            *v179 = v181;
                            if ( v182 + 1 > (unsigned __int64)HIDWORD(v302) )
                            {
                              sub_2237220(&v301, v303, v182 + 1, 8);
                              v182 = (unsigned int)v302;
                            }
                            *((_QWORD *)v301 + v182) = v176;
                            LODWORD(v302) = v302 + 1;
                            v183 = 8LL * (unsigned int)v302;
                            v184 = *(_QWORD *)((char *)v301 + v183 - 8);
                            v185 = v183 >> 3;
                            v284.m128_u64[0] = v304;
                            v186 = (v185 - 2) / 2;
                            if ( v185 - 1 <= 0 )
                            {
                              v191 = (__int64 *)((char *)v301 + 8 * v185 - 8);
                            }
                            else
                            {
                              v277 = v175;
                              v187 = (char *)v301;
                              v188 = v185 - 1;
                              while ( 1 )
                              {
                                v189 = (__int64 *)&v187[8 * v186];
                                v190 = sub_9C5DA0((__int64 *)&v284, *v189, v184);
                                v191 = (__int64 *)&v187[8 * v188];
                                if ( !v190 )
                                {
                                  v175 = v277;
                                  goto LABEL_302;
                                }
                                v188 = v186;
                                *v191 = *v189;
                                if ( v186 <= 0 )
                                  break;
                                v186 = (v186 - 1) / 2;
                              }
                              v175 = v277;
                              v191 = v189;
                            }
LABEL_302:
                            *v191 = v184;
                          }
                        }
                        v175 += 2;
                      }
                      while ( v265 != v175 );
                      v204 = v287;
                      v205 = v285;
                      v171 = v278;
                      if ( v287 )
                        goto LABEL_327;
                    }
LABEL_329:
                    v209 = (__int64 *)v171[8];
                    v210 = (__int64 *)v171[7];
                    if ( v209 == v210 )
                      goto LABEL_237;
                    while ( 2 )
                    {
                      v214 = *v210;
                      if ( v204 )
                      {
                        v211 = v204 - 1;
                        v212 = v211 & (((unsigned int)v214 >> 9) ^ ((unsigned int)v214 >> 4));
                        v213 = v205[2 * v212];
                        if ( v214 != v213 )
                        {
                          if ( v213 == -4096 )
                            break;
                          v216 = 1;
                          while ( 1 )
                          {
                            v212 = v211 & (v216 + v212);
                            v217 = v205[2 * v212];
                            if ( v214 == v217 )
                              break;
                            ++v216;
                            if ( v217 == -4096 )
                              goto LABEL_335;
                          }
                        }
LABEL_332:
                        v210 += 2;
                        if ( v209 == v210 )
                          goto LABEL_237;
                        v205 = v285;
                        v204 = v287;
                        continue;
                      }
                      break;
                    }
LABEL_335:
                    v279 = *v210;
                    if ( (unsigned __int8)sub_15817A0((__int64 *)&v285, &v279, &v280) )
                    {
                      if ( *(_BYTE *)(v280 + 9) )
                        *(_BYTE *)(v280 + 9) = 0;
                      goto LABEL_332;
                    }
                    v218 = v280;
                    v219 = v286 + 1;
                    v220 = 2 * v287;
                    v221 = (unsigned int)(4 * (v286 + 1));
                    v284.m128_u64[0] = v280;
                    if ( (unsigned int)v221 < 3 * v287 )
                    {
                      if ( v287 - HIDWORD(v286) - v219 > v287 >> 3 )
                      {
LABEL_346:
                        v155 = *(_QWORD *)v218 == -4096;
                        LODWORD(v286) = v219;
                        if ( !v155 )
                          --HIDWORD(v286);
                        v222 = v279;
                        *(_BYTE *)(v218 + 9) = 0;
                        *(_QWORD *)v218 = v222;
                        goto LABEL_332;
                      }
                      v220 = v287;
                    }
                    sub_15869A0((__int64 *)&v285, v220, v280, v287, v221, v215);
                    sub_15817A0((__int64 *)&v285, &v279, &v284);
                    v218 = v284.m128_u64[0];
                    v219 = v286 + 1;
                    goto LABEL_346;
                  }
                  v241 = 1;
                  v242 = 0;
                  if ( v165 == -4096 )
                    goto LABEL_384;
                  while ( 1 )
                  {
                    if ( v165 == -8192 && !v242 )
                      v242 = (unsigned __int64)v174;
                    v173 = v166 & (v241 + v173);
                    v174 = &v285[2 * v173];
                    v165 = *v174;
                    if ( v278 == (_QWORD *)*v174 )
                      goto LABEL_288;
                    if ( v165 == -4096 )
                      break;
                    ++v241;
                  }
                  if ( !v242 )
LABEL_384:
                    v242 = (unsigned __int64)v174;
                  v167 = 3 * v287;
                  v284.m128_u64[0] = v242;
                  v243 = v286 + 1;
                  v164 = (unsigned int)(4 * (v286 + 1));
                  if ( (unsigned int)v164 < (unsigned int)v167 )
                  {
                    v167 = v287 - HIDWORD(v286) - v243;
                    v164 = v287 >> 3;
                    if ( (unsigned int)v167 > (unsigned int)v164 )
                    {
LABEL_387:
                      v155 = *(_QWORD *)v242 == -4096;
                      LODWORD(v286) = v243;
                      if ( !v155 )
                        --HIDWORD(v286);
                      *(_QWORD *)v242 = v172;
                      v171 = v278;
                      *(_BYTE *)(v242 + 9) = 0;
                      goto LABEL_289;
                    }
LABEL_392:
                    sub_15869A0((__int64 *)&v285, v170, v167, v164, v165, v166);
                    sub_15817A0((__int64 *)&v285, (__int64 *)&v278, &v284);
                    v172 = v278;
                    v242 = v284.m128_u64[0];
                    v243 = v286 + 1;
                    goto LABEL_387;
                  }
                }
                else
                {
                  v284.m128_u64[0] = 0;
                }
                v170 = 2 * v287;
                goto LABEL_392;
              }
LABEL_381:
              v35 = v269;
              v36 = v270;
              v154 = 1;
            }
            else
            {
              v35 = v269;
              v36 = v270;
            }
            v54 = v154;
            goto LABEL_186;
          }
        }
        else
        {
          v284.m128_u64[0] = 0;
        }
        v244 = 2 * v290;
        goto LABEL_395;
      }
      v264 = v85;
      v32 = sub_B8C330(v261);
      v232 = sub_B7D8D0(v261, v32);
      v233 = v264;
      if ( v232 )
      {
        v234 = sub_B73640(v232);
        v233 = v264;
        if ( v234 )
        {
          if ( (*(_WORD *)v234 & 0x1FF) == 0x35 )
          {
            v32 = *(_QWORD *)(v234 + 16);
            if ( (unsigned int)((*(_QWORD *)(v234 + 24) - v32) >> 3) )
              v234 = *(_QWORD *)v32;
          }
          v235 = (unsigned __int16 *)sub_BFD550(v234);
          v233 = v264;
          v236 = *v235;
          LOWORD(v236) = v236 & 0x1FF;
          if ( (_WORD)v236 == 71 )
          {
            v237 = *((_QWORD *)v235 + 2);
            if ( (*(_BYTE *)(v237 + 28) & 0x7Fu) - 34 <= 5 )
            {
              v54 = sub_B74ED0(v237, v32, v264, v236);
LABEL_191:
              v107 = v259;
              v34 = (unsigned __int64 *)v291.m128i_i64[1];
              v33 = (unsigned __int64 *)v291.m128i_i64[0];
              if ( v54 )
                v35 = v54;
              else
                v107 = 1;
              v259 = v107;
              goto LABEL_34;
            }
          }
        }
      }
      v34 = (unsigned __int64 *)v291.m128i_i64[1];
      v33 = (unsigned __int64 *)v291.m128i_i64[0];
      v259 = v233;
LABEL_34:
      v291.m128i_i64[0] = (__int64)(v33 + 2);
      if ( v33 + 2 == v34 )
      {
        v40 = v34;
      }
      else
      {
        do
        {
          v32 = v33[2];
          if ( !sub_995A90((__m128i *)v36[1].m128i_i8, v32, v293) )
          {
            v34 = (unsigned __int64 *)v291.m128i_i64[1];
            v40 = (unsigned __int64 *)v291.m128i_i64[0];
            goto LABEL_39;
          }
          v40 = (unsigned __int64 *)v291.m128i_i64[1];
          v33 = (unsigned __int64 *)v291.m128i_i64[0];
          v291.m128i_i64[0] += 16;
        }
        while ( v291.m128i_i64[0] != v291.m128i_i64[1] );
        v34 = (unsigned __int64 *)v291.m128i_i64[1];
      }
LABEL_39:
      v33 = v40;
      v37 = ptr;
      if ( v40 == v34 )
        goto LABEL_40;
    }
  }
LABEL_111:
  v37 = ptr;
LABEL_112:
  if ( v37 != v296 )
    free(v37);
  if ( v13 != 1 && v258 )
  {
    v65 = a5[2];
    if ( (_DWORD)v65 )
    {
      v66 = *(_BYTE *)(v8 + 28) & 0x7F;
      v67 = a1 + 8;
      if ( (unsigned int)v66 - 34 > 5 )
      {
        if ( v66 != 18 )
        {
          sub_168B9F0(&s, v67, v260, v65, 0);
LABEL_121:
          sub_15F7200(&s);
          return;
        }
        sub_168B9F0(&s, v67, v260, v65, 0);
        v291.m128i_i32[0] = 1;
      }
      else
      {
        sub_168B9F0(&s, v67, v260, v65, 0);
        v291.m128i_i32[0] = 0;
      }
      v68 = sub_1587D10((__int64)&s, v291.m128i_i32);
      v69 = v68;
      if ( *(_BYTE *)(v68 + 120) )
      {
        sub_157E260((unsigned __int8 **)(v68 + 32), v8);
      }
      else if ( *(_BYTE *)(v68 + 132) )
      {
        v117 = sub_168B9E0(v68);
        v118 = *(void **)(v69 + 16);
        if ( v118 )
          v118 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v118 + 32LL))(*(_QWORD *)(v69 + 16));
        ptr = v118;
        v119 = sub_1587BC0(v117, (__int64 *)&ptr, v113, v114, v115, v116);
        sub_157E260((unsigned __int8 **)(*v119 + 32LL * *(unsigned int *)(v69 + 128) + 8), v8);
      }
      goto LABEL_121;
    }
  }
}
