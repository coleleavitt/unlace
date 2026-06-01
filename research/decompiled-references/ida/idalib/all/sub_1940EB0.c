__int64 __fastcall sub_1940EB0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // r13
  unsigned __int64 v6; // rbp
  __int64 v7; // rbp
  unsigned __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r12
  _BYTE *v11; // rbp
  _DWORD *v12; // rdx
  _DWORD *i; // rbp
  _DWORD *v14; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r12d
  _BOOL4 v26; // r15d
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r12
  unsigned __int64 *v31; // rcx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r12
  _BYTE *v34; // r14
  unsigned __int8 v35; // bp
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  int v43; // r12d
  _BOOL4 v44; // r15d
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rcx
  void *v48; // rbp
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // rdi
  char v53; // al
  __int64 v54; // rdi
  unsigned int v55; // ecx
  unsigned int v56; // ebx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 *v62; // r9
  __int64 *v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rbx
  __int64 v68; // r14
  bool v69; // al
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rsi
  unsigned __int64 v76; // rbx
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  char v79; // dl
  __int64 v80; // rbp
  int v81; // eax
  __int64 v82; // rsi
  int v83; // ebp
  int v84; // r12d
  __int64 v85; // rax
  __int64 v86; // rsi
  unsigned int v87; // edx
  __int64 v88; // rdi
  __int64 v89; // rax
  _QWORD *v90; // r14
  __int64 v91; // rbx
  __int64 v92; // r13
  _BYTE *v93; // r12
  _BYTE *v94; // r14
  int v95; // eax
  unsigned int v96; // ebp
  void *v97; // rax
  _BYTE *v98; // rdx
  const void *v99; // rsi
  int v100; // eax
  _QWORD *v101; // rbx
  int v102; // r12d
  _QWORD *v103; // rdi
  int v104; // ebx
  unsigned __int64 v105; // rax
  int v106; // eax
  unsigned __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 *v110; // r9
  unsigned __int64 v111; // r14
  _BYTE *v112; // r12
  __int64 *v113; // rdx
  __int64 v114; // rax
  __int64 *v115; // r10
  __int64 v116; // rbp
  __int64 v117; // rdx
  unsigned __int64 v118; // rax
  __int64 *v119; // r14
  unsigned __int64 v120; // r13
  __int64 v121; // rax
  int v122; // eax
  _DWORD *v123; // rbp
  unsigned __int64 v124; // r8
  __int64 v125; // rbx
  __int64 v126; // rax
  unsigned __int64 v127; // rdx
  __int64 *v128; // rdi
  __int64 v129; // rax
  __int64 v130; // rbx
  __m128 si128; // xmm0
  __int64 v132; // rax
  __int64 v133; // r8
  __int64 v134; // r9
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // rax
  __int64 v137; // r8
  __int64 v138; // r9
  __int64 v139; // rbx
  _QWORD *v140; // r12
  _QWORD *v141; // rbp
  _QWORD *v142; // rdi
  __int64 v144; // rbp
  _BYTE *v145; // rbx
  _BYTE *v146; // r12
  _BYTE *v147; // rdi
  unsigned __int64 v148; // r14
  __int64 v149; // rdx
  __int64 v150; // rbx
  __int64 v151; // rax
  __int64 v152; // r10
  __int64 v153; // rbx
  __int64 v154; // rax
  __int64 v155; // rbp
  char v156; // bl
  int v157; // r14d
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // r8
  __int64 *v162; // r9
  __int64 v163; // rax
  unsigned __int64 v164; // rax
  __int64 v165; // rbp
  __int64 v166; // rdx
  __int64 v167; // rcx
  int v168; // esi
  int v169; // r14d
  int v170; // eax
  __int64 v171; // rax
  unsigned int v172; // ebx
  int v173; // eax
  __int64 v174; // rdi
  char v175; // dl
  int v176; // r9d
  __int64 v177; // rax
  __int64 v178; // rbx
  __int64 v179; // rax
  unsigned __int64 v180; // rsi
  unsigned __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // r8
  __int64 v185; // r9
  __int64 v186; // rax
  _QWORD *v187; // rax
  size_t v188; // rdx
  __int64 v189; // rax
  _QWORD *v190; // rax
  unsigned __int64 v191; // rbx
  unsigned __int64 v192; // rbp
  unsigned __int64 v193; // r12
  __int64 v194; // r14
  int v195; // eax
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rdi
  unsigned int v199; // edx
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  __int64 v203; // r9
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // r8
  __int64 v207; // r9
  __int64 v208; // rdx
  __int64 v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rax
  unsigned int v212; // eax
  unsigned int v213; // r13d
  __int64 *v214; // r14
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 *v217; // rbx
  __int64 v218; // rbp
  _DWORD *v219; // rax
  __int64 v220; // rbp
  __int64 *v221; // [rsp+8h] [rbp-AD0h]
  int v223; // [rsp+8h] [rbp-AD0h]
  __int64 v224; // [rsp+8h] [rbp-AD0h]
  void **v225; // [rsp+8h] [rbp-AD0h]
  char v226; // [rsp+8h] [rbp-AD0h]
  unsigned int v227; // [rsp+8h] [rbp-AD0h]
  __int64 v228; // [rsp+8h] [rbp-AD0h]
  unsigned int v229; // [rsp+8h] [rbp-AD0h]
  unsigned __int64 v230; // [rsp+10h] [rbp-AC8h]
  __int64 v231; // [rsp+10h] [rbp-AC8h]
  __int64 v232; // [rsp+10h] [rbp-AC8h]
  unsigned __int64 v233; // [rsp+10h] [rbp-AC8h]
  unsigned __int64 v234; // [rsp+10h] [rbp-AC8h]
  __int64 v235; // [rsp+18h] [rbp-AC0h]
  unsigned __int64 v236; // [rsp+20h] [rbp-AB8h]
  __int64 v237; // [rsp+20h] [rbp-AB8h]
  __int64 v238; // [rsp+20h] [rbp-AB8h]
  int v239; // [rsp+28h] [rbp-AB0h]
  __int64 v240; // [rsp+28h] [rbp-AB0h]
  int v241; // [rsp+28h] [rbp-AB0h]
  __int64 v242; // [rsp+28h] [rbp-AB0h]
  __int64 v243; // [rsp+28h] [rbp-AB0h]
  __int64 v244; // [rsp+28h] [rbp-AB0h]
  int v245; // [rsp+30h] [rbp-AA8h]
  __int64 *v246; // [rsp+30h] [rbp-AA8h]
  int v247; // [rsp+30h] [rbp-AA8h]
  __int64 v248; // [rsp+30h] [rbp-AA8h]
  __int64 v249; // [rsp+38h] [rbp-AA0h]
  __int64 *v250; // [rsp+38h] [rbp-AA0h]
  bool v251; // [rsp+40h] [rbp-A98h]
  char v252; // [rsp+57h] [rbp-A81h]
  _QWORD *v253; // [rsp+60h] [rbp-A78h]
  __int64 v254; // [rsp+68h] [rbp-A70h]
  int v255; // [rsp+70h] [rbp-A68h]
  int v256; // [rsp+74h] [rbp-A64h]
  __int64 v257; // [rsp+78h] [rbp-A60h]
  __int64 v258; // [rsp+80h] [rbp-A58h]
  __int64 v259; // [rsp+88h] [rbp-A50h]
  _QWORD *v260; // [rsp+90h] [rbp-A48h]
  __int64 v261; // [rsp+98h] [rbp-A40h]
  __int64 v262; // [rsp+A8h] [rbp-A30h] BYREF
  __int64 v263; // [rsp+B0h] [rbp-A28h] BYREF
  char v264; // [rsp+B8h] [rbp-A20h]
  __m128i v265; // [rsp+C0h] [rbp-A18h] BYREF
  __int64 v266; // [rsp+E8h] [rbp-9F0h]
  void *v267; // [rsp+100h] [rbp-9D8h] BYREF
  __m128 v268; // [rsp+108h] [rbp-9D0h]
  _DWORD v269[9]; // [rsp+118h] [rbp-9C0h] BYREF
  char v270; // [rsp+13Ch] [rbp-99Ch]
  unsigned __int64 v271; // [rsp+140h] [rbp-998h] BYREF
  unsigned __int64 v272; // [rsp+148h] [rbp-990h]
  __int128 v273; // [rsp+150h] [rbp-988h]
  __int64 v274; // [rsp+160h] [rbp-978h]
  __int64 v275; // [rsp+168h] [rbp-970h]
  __int64 v276; // [rsp+170h] [rbp-968h]
  __int64 v277; // [rsp+178h] [rbp-960h]
  _BYTE *v278; // [rsp+180h] [rbp-958h] BYREF
  __int64 v279; // [rsp+188h] [rbp-950h]
  _BYTE v280[352]; // [rsp+190h] [rbp-948h] BYREF
  void *ptr; // [rsp+2F0h] [rbp-7E8h] BYREF
  __int64 v282; // [rsp+2F8h] [rbp-7E0h]
  __int64 v283; // [rsp+300h] [rbp-7D8h] BYREF
  __int64 v284; // [rsp+308h] [rbp-7D0h]
  char v285; // [rsp+8A9h] [rbp-22Fh]
  __int64 v286; // [rsp+920h] [rbp-1B8h]
  __int64 v287; // [rsp+928h] [rbp-1B0h]

  v5 = a2;
  v278 = v280;
  v279 = 0x400000000LL;
  v6 = sub_C952A0(a2);
  v7 = v6 - sub_C95230(a2);
  v8 = v7 >> 4;
  v9 = 0;
  if ( !(v7 >> 4) )
    goto LABEL_8;
  v10 = 88 * v8;
  if ( v8 < (unsigned int)v279 )
  {
    v144 = v7 >> 4;
    v145 = &v278[88 * (unsigned int)v279];
    v146 = &v278[v10];
    if ( v145 != v146 )
    {
      do
      {
        while ( 1 )
        {
          v145 -= 88;
          v147 = *((_BYTE **)v145 + 1);
          if ( v147 == v145 + 24 )
            break;
          free(v147);
          if ( v146 == v145 )
            goto LABEL_123;
        }
      }
      while ( v146 != v145 );
LABEL_123:
      LODWORD(v8) = v144;
    }
    LODWORD(v279) = v8;
    goto LABEL_8;
  }
  if ( v8 <= HIDWORD(v279) )
  {
    v11 = v278;
    goto LABEL_5;
  }
  v89 = sub_2237400(&v278, v280, v7 >> 4, 88, &ptr);
  v8 = v7 >> 4;
  v11 = (_BYTE *)v89;
  v90 = &v278[88 * (unsigned int)v279];
  if ( v278 == (_BYTE *)v90 )
    goto LABEL_72;
  v91 = v89;
  v92 = v89;
  v238 = v10;
  v93 = &v278[88 * (unsigned int)v279];
  v94 = v278;
  do
  {
    while ( 1 )
    {
      v95 = *(_DWORD *)v94;
      *(_DWORD *)(v91 + 16) = 0;
      *(_DWORD *)(v91 + 20) = 4;
      *(_DWORD *)v91 = v95;
      v96 = *((_DWORD *)v94 + 4);
      v97 = (void *)(v91 + 24);
      *(_QWORD *)(v91 + 8) = v91 + 24;
      if ( v96 )
      {
        if ( (_BYTE *)(v91 + 8) != v94 + 8 )
          break;
      }
LABEL_62:
      v94 += 88;
      v91 += 88;
      if ( v93 == v94 )
        goto LABEL_67;
    }
    v98 = *((_BYTE **)v94 + 1);
    v99 = v94 + 24;
    if ( v98 == v94 + 24 )
    {
      v188 = 16LL * v96;
      if ( v96 <= 4uLL
        || (v234 = v8,
            sub_2237220(v91 + 8, v91 + 24, v96, 16),
            v97 = *(void **)(v91 + 8),
            v99 = *((const void **)v94 + 1),
            v8 = v234,
            (v188 = 16LL * *((unsigned int *)v94 + 4)) != 0) )
      {
        v233 = v8;
        memcpy(v97, v99, v188);
        v8 = v233;
      }
      *(_DWORD *)(v91 + 16) = v96;
      *((_DWORD *)v94 + 4) = 0;
      goto LABEL_62;
    }
    *(_DWORD *)(v91 + 16) = v96;
    v100 = *((_DWORD *)v94 + 5);
    v94 += 88;
    v91 += 88;
    *(_QWORD *)(v91 - 80) = v98;
    *(_DWORD *)(v91 - 68) = v100;
    *((_QWORD *)v94 - 10) = v99;
    *((_DWORD *)v94 - 17) = 0;
    *((_DWORD *)v94 - 18) = 0;
  }
  while ( v93 != v94 );
LABEL_67:
  v101 = v278;
  v11 = (_BYTE *)v92;
  v10 = v238;
  v5 = a2;
  v90 = &v278[88 * (unsigned int)v279];
  if ( v278 != (_BYTE *)v90 )
  {
    v102 = v8;
    do
    {
      while ( 1 )
      {
        v90 -= 11;
        v103 = (_QWORD *)v90[1];
        if ( v103 == v90 + 3 )
          break;
        free(v103);
        if ( v90 == v101 )
          goto LABEL_71;
      }
    }
    while ( v90 != v101 );
LABEL_71:
    LODWORD(v8) = v102;
    v90 = v278;
    v10 = v238;
  }
LABEL_72:
  v104 = (int)ptr;
  if ( v90 != (_QWORD *)v280 )
  {
    v223 = v8;
    free(v90);
    LODWORD(v8) = v223;
  }
  v278 = v11;
  v9 = (unsigned int)v279;
  HIDWORD(v279) = v104;
LABEL_5:
  v12 = &v11[88 * v9];
  for ( i = &v11[v10]; i != v12; *((_QWORD *)v12 - 10) = v14 )
  {
    memset(v12, 0, 0x58u);
    v14 = v12 + 6;
    v12[5] = 4;
    v12 += 22;
  }
  LODWORD(v279) = v8;
LABEL_8:
  v15 = sub_C95050(v5);
  v236 = sub_C950C0(v5);
  if ( v15 == v236 )
    goto LABEL_30;
  v221 = a1;
  while ( 2 )
  {
    while ( 2 )
    {
      if ( !sub_C94FB0(v5, (_QWORD *)v15) )
      {
LABEL_20:
        v15 += 16LL;
        if ( v236 == v15 )
          goto LABEL_29;
        continue;
      }
      break;
    }
    v32 = sub_C95050(v5);
    v33 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF8LL;
    v34 = &v278[88 * ((__int64)(v15 - v32) >> 4)];
    if ( sub_B799A0(v33) )
    {
      v16 = *(_QWORD *)(v33 + 56) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v33 + 56) & 4) != 0 )
        v16 = *(_QWORD *)(v16 + 32);
      v17 = *(_QWORD *)v16;
      ptr = &v283;
      v282 = 0x200000000LL;
      v18 = sub_B73640(v33);
      sub_1E4CA90(v18);
      v239 = *(_DWORD *)(v17 + 20);
      sub_B73640(v33);
      v245 = *(_DWORD *)(v16 + 8);
      LOBYTE(v17) = ((*(_BYTE *)(v33 + 96) >> 5) & 3) == 1;
      v19 = sub_B73640(v33);
      v23 = sub_1934A90(v221, v19, v17, a3, a4, v20, v21, v22);
      if ( v23 == 1 )
      {
        v186 = *((unsigned int *)v34 + 4);
        if ( v186 + 1 > (unsigned __int64)*((unsigned int *)v34 + 5) )
        {
          sub_2237220(v34 + 8, v34 + 24, v186 + 1, 16);
          v186 = *((unsigned int *)v34 + 4);
        }
        v187 = (_QWORD *)(*((_QWORD *)v34 + 1) + 16 * v186);
        *v187 = 1;
        v187[1] = 0;
        ++*((_DWORD *)v34 + 4);
      }
      else
      {
        v271 = v23 & 0xFFFFFFFFFFFFFFFELL;
        v249 = *v221;
        v24 = *(_QWORD *)(v33 + 40);
        v25 = 0;
        v26 = (*(_BYTE *)((*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF8LL) + 96) & 0x60) != 0;
        if ( (v24 & 7) == 0 )
          v25 = v24 & 0xFFFFFFF8;
        v27 = sub_C94E40((__int64 *)v15);
        v28 = sub_1A2D1F0(v249, *(_DWORD *)(v15 + 8), v27 == 3, v245, v239, v25, v26, (__int64)&v271);
        v29 = *((unsigned int *)v34 + 4);
        v30 = v271;
        if ( v29 + 1 > (unsigned __int64)*((unsigned int *)v34 + 5) )
        {
          v243 = v28;
          sub_2237220(v34 + 8, v34 + 24, v29 + 1, 16);
          v29 = *((unsigned int *)v34 + 4);
          v28 = v243;
        }
        v31 = (unsigned __int64 *)(*((_QWORD *)v34 + 1) + 16 * v29);
        *v31 = v30;
        v31[1] = v28;
        ++*((_DWORD *)v34 + 4);
      }
      *(_DWORD *)v34 = *(_DWORD *)(v16 + 8);
      if ( ptr != &v283 )
        free(ptr);
      goto LABEL_20;
    }
    v35 = ((*(_BYTE *)(v33 + 96) >> 5) & 3) == 1;
    v36 = sub_B73640(v33);
    v40 = sub_1934A90(v221, v36, v35, a3, a4, v37, v38, v39);
    if ( v40 == 1 )
    {
      v189 = *((unsigned int *)v34 + 4);
      if ( v189 + 1 > (unsigned __int64)*((unsigned int *)v34 + 5) )
      {
        sub_2237220(v34 + 8, v34 + 24, v189 + 1, 16);
        v189 = *((unsigned int *)v34 + 4);
      }
      v190 = (_QWORD *)(*((_QWORD *)v34 + 1) + 16 * v189);
      *v190 = 1;
      v190[1] = 0;
      ++*((_DWORD *)v34 + 4);
      goto LABEL_20;
    }
    ptr = (void *)(v40 & 0xFFFFFFFFFFFFFFFELL);
    v41 = *v221;
    v42 = *(_QWORD *)(v33 + 40);
    v43 = 0;
    v44 = (*(_BYTE *)((*(_QWORD *)v15 & 0xFFFFFFFFFFFFFFF8LL) + 96) & 0x60) != 0;
    if ( (v42 & 7) == 0 )
      v43 = v42 & 0xFFFFFFF8;
    v45 = sub_C94E40((__int64 *)v15);
    v46 = sub_1A2D1F0(v41, *(_DWORD *)(v15 + 8), v45 == 3, 0, 0, v43, v44, (__int64)&ptr);
    v47 = *((unsigned int *)v34 + 4);
    v48 = ptr;
    if ( v47 + 1 > (unsigned __int64)*((unsigned int *)v34 + 5) )
    {
      v244 = v46;
      sub_2237220(v34 + 8, v34 + 24, v47 + 1, 16);
      v47 = *((unsigned int *)v34 + 4);
      v46 = v244;
    }
    v49 = (_QWORD *)(*((_QWORD *)v34 + 1) + 16 * v47);
    v15 += 16LL;
    *v49 = v48;
    v49[1] = v46;
    ++*((_DWORD *)v34 + 4);
    if ( v236 != v15 )
      continue;
    break;
  }
LABEL_29:
  a1 = v221;
LABEL_30:
  v50 = sub_15F1F10(*a1);
  v51 = *a1;
  v264 = 1;
  v237 = v50;
  v52 = *(_QWORD *)(v51 + 544);
  v263 = v51;
  v53 = *(_BYTE *)(v52 + 8) & 0x7F;
  if ( v53 == 2 )
  {
    do
    {
      while ( 1 )
      {
        v54 = *(_QWORD *)(sub_B8C1B0(v52) + 16);
        if ( (v54 & 4) != 0 )
          break;
        v52 = v54 & 0xFFFFFFFFFFFFFFF8LL;
        v53 = *(_BYTE *)(v52 + 8) & 0x7F;
        if ( v53 != 2 )
          goto LABEL_33;
      }
      v52 = *(_QWORD *)(v54 & 0xFFFFFFFFFFFFFFF8LL);
      v53 = *(_BYTE *)(v52 + 8) & 0x7F;
    }
    while ( v53 == 2 );
LABEL_33:
    v51 = *a1;
  }
  v55 = *(_DWORD *)(*(_QWORD *)(v51 + 4616) + 640LL * *(unsigned int *)(v51 + 4624) - 640);
  if ( v55 - 3 > 2 && v55 > 1 && !*(_BYTE *)(v51 + 2440)
    || v53 && v53 != 24 && (v105 = sub_B72690(v52), (unsigned __int8)sub_B8E180(v105)) )
  {
    v56 = 0;
  }
  else
  {
    v56 = 2;
  }
  v260 = (_QWORD *)sub_C95330(v5);
  v57 = sub_1A2CF40(*a1, *(_QWORD *)(v5 + 16), 0, v56, (*(_BYTE *)(v5 + 2) >> 3) & 3);
  ptr = v260;
  v253 = (_QWORD *)v57;
  v58 = v57;
  v261 = (__int64)(a1 + 1);
  v63 = sub_1742A40((__int64)(a1 + 1), (__int64 *)&ptr, v59, v60, v61, v62);
  v64 = *a1;
  *v63 = v58;
  v65 = *(_QWORD *)(v5 + 16);
  v66 = sub_1A2D760(v64, v65, v58);
  v67 = *a1;
  v254 = v66;
  v68 = v66;
  v69 = sub_C953E0(v5, v65);
  sub_1A2D040(
    v67,
    v237,
    v68,
    *(_QWORD *)(v5 + 16),
    (*(_BYTE *)(v5 + 2) >> 3) & 3,
    *(_DWORD *)(v5 + 24),
    (*(_QWORD *)v5 >> 21) & 1,
    v69);
  v70 = *a1;
  v71 = v68 + 72;
  if ( !v68 )
    v71 = 0;
  v72 = *(_QWORD *)(v70 + 544);
  v73 = *(_QWORD *)(v70 + 9944);
  v258 = *a1;
  *(_QWORD *)(v70 + 544) = v71;
  v74 = *(_DWORD *)(v70 + 40);
  v259 = v72;
  v75 = *(_QWORD *)(v70 + 512);
  *(_QWORD *)(v70 + 512) = 0;
  v257 = v75;
  LODWORD(v75) = *(_DWORD *)(v70 + 80);
  *(_DWORD *)(v70 + 80) = v74;
  v256 = v75;
  LODWORD(v75) = *(_DWORD *)(v70 + 2632);
  *(_DWORD *)(v70 + 2632) = *(_DWORD *)(v70 + 3688);
  v266 = v73;
  v255 = v75;
  v76 = sub_C95050(v5);
  v230 = sub_C950C0(v5);
  if ( v76 == v230 || (v77 = *(_QWORD *)v76, (*(_QWORD *)v76 & 1) != 0) )
  {
    v251 = 0;
    goto LABEL_101;
  }
  v252 = 0;
  v240 = v5;
  while ( 2 )
  {
    if ( (v77 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( (v77 & 4) != 0 )
      {
        v78 = sub_15F1540(*a1, 0);
        if ( v78 )
        {
          v79 = *(_BYTE *)(v78 + 8);
          v78 -= 64LL;
          if ( (v79 & 0x7Fu) - 59 >= 3 )
            v78 = 0;
        }
        sub_19A2CD0(&ptr, *a1, v78, 0, 1);
        v80 = *a1;
        v81 = sub_C94E40((__int64 *)v76);
        sub_19B4460(v80, *(unsigned int *)(v76 + 8), (*(_DWORD *)v76 & 1) == 0, 1, 0, v81 == 1);
        sub_19A2DA0(&ptr);
      }
      goto LABEL_48;
    }
    v251 = sub_C94FB0(v240, (_QWORD *)v76);
    if ( !v251 )
    {
      v82 = *(_QWORD *)v76;
      v83 = 0;
      if ( (*(_QWORD *)v76 & 1) == 0 )
      {
        v83 = 1;
        v106 = sub_C94E40((__int64 *)v76);
        v82 = *(_QWORD *)v76;
        if ( v106 != 2 )
          v83 = 2;
      }
      v84 = *(_DWORD *)(v76 + 12);
      v85 = sub_18CBB50((__int64)a1, v82 & 0xFFFFFFFFFFFFFFF8LL);
      v86 = v85;
      if ( v85 && *(char *)(v85 + 28) >= 0 )
      {
        if ( (*(_BYTE *)(v85 + 28) & 0x7Fu) - 40 <= 6 && !*(_DWORD *)(v76 + 12) )
          *(_BYTE *)(v237 + 1465) |= sub_B799A0(v85);
        v87 = *(_DWORD *)(v76 + 8);
        v88 = *a1;
        v76 += 16LL;
        v271 = 0;
        ptr = nullptr;
        sub_1903850(v88, v86, v87, v83, v84, 1u, (__int64 *)&v271, (__int64 *)&ptr, nullptr);
        if ( v230 == v76 )
        {
LABEL_59:
          v5 = v240;
          v251 = v252;
          goto LABEL_101;
        }
        goto LABEL_49;
      }
      v252 = 1;
LABEL_48:
      v76 += 16LL;
      if ( v230 == v76 )
        goto LABEL_59;
LABEL_49:
      v77 = *(_QWORD *)v76;
      if ( (*(_QWORD *)v76 & 1) != 0 )
        goto LABEL_59;
      continue;
    }
    break;
  }
  v107 = sub_C95050(v240);
  v111 = *(_QWORD *)v76 & 0xFFFFFFFFFFFFFFF8LL;
  v112 = &v278[88 * ((__int64)(v76 - v107) >> 4)];
  v113 = &v283;
  v282 = 0x400000000LL;
  v114 = *((unsigned int *)v112 + 4);
  ptr = &v283;
  v115 = *((__int64 **)v112 + 1);
  v250 = &v115[2 * v114];
  if ( v115 == v250 )
  {
    v128 = &v283;
  }
  else
  {
    v116 = *v115;
    v117 = v115[1];
    if ( *v115 == 1 || (v117 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v5 = v240;
      goto LABEL_101;
    }
    v118 = v111;
    v246 = (__int64 *)v76;
    v119 = v115 + 2;
    v120 = v118;
    while ( 1 )
    {
      v123 = (_DWORD *)(v116 & 0xFFFFFFFFFFFFFFFELL);
      v124 = *(_QWORD *)(v120 + 40) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v120 + 40) & 7) != 0 )
        LODWORD(v124) = 0;
      v125 = sub_1A2D600(
               *a1,
               *(_DWORD *)(v120 + 24),
               v117,
               *(_DWORD *)v112,
               v124,
               (*(_BYTE *)(v120 + 96) >> 5) & 3,
               (__int64)v123,
               *(_QWORD *)(*a1 + 544));
      if ( !v125 )
      {
LABEL_98:
        v5 = v240;
        v128 = (__int64 *)ptr;
        goto LABEL_99;
      }
      v126 = (unsigned int)v282;
      v127 = (unsigned int)v282 + 1LL;
      if ( v127 > HIDWORD(v282) )
      {
        sub_2237220(&ptr, &v283, v127, 8);
        v126 = (unsigned int)v282;
      }
      *((_QWORD *)ptr + v126) = v125;
      v121 = *a1;
      LODWORD(v282) = v282 + 1;
      v224 = v121;
      v122 = sub_C94E40(v246);
      sub_1A31240(v224, v237, v125, v122 == 3);
      if ( !*(_DWORD *)v112 )
        *(_BYTE *)(v237 + 1465) |= (*v123 & 0x4000) != 0;
      if ( v250 == v119 )
        break;
      v116 = *v119;
      v117 = v119[1];
      if ( *v119 != 1 )
      {
        v119 += 2;
        if ( (v117 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          continue;
      }
      goto LABEL_98;
    }
    v76 = (unsigned __int64)v246;
    v128 = (__int64 *)ptr;
    v111 = v120;
  }
  if ( !v252 )
  {
    v271 = v111;
    v220 = *v128;
    *sub_1742A40(v261, (__int64 *)&v271, (__int64)v113, v108, v109, v110) = v220;
    if ( ptr != &v283 )
      free(ptr);
    goto LABEL_48;
  }
  v5 = v240;
LABEL_99:
  if ( v128 != &v283 )
    free(v128);
LABEL_101:
  sub_1A2D100(*a1, v237);
  v129 = sub_C95360(v5);
  v130 = v129;
  *(_QWORD *)(v237 + 1656) = v129;
  if ( v129 )
  {
    sub_1A2D830(*a1, v254, v253, v129);
    *(_BYTE *)(v237 + 1465) |= sub_BBD670(v130);
  }
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA8B0);
  v269[8] = 0;
  v270 = 0;
  v267 = v269;
  v268 = si128;
  v132 = *(_QWORD *)(sub_C95340(v5) + 56);
  v135 = v132 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v132 & 4) != 0 )
    v135 = *(_QWORD *)(v135 + 32);
  v136 = sub_193F4E0(a1, (__int64)&v267, *(_QWORD *)v135, (__m128i *)(v135 + 8), v133, v134, si128, a4);
  if ( (v136 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v139 = 1;
    if ( v267 != v269 && v267 )
      operator delete[](v267);
    if ( v259 )
    {
      *(_QWORD *)(v258 + 544) = v259;
      *(_QWORD *)(v258 + 512) = v257;
      *(_QWORD *)(v258 + 9944) = v266;
      *(_DWORD *)(v258 + 80) = v256;
      *(_DWORD *)(v258 + 2632) = v255;
    }
    goto LABEL_111;
  }
  *(_BYTE *)(v237 + 1465) |= *(_BYTE *)(*(_QWORD *)(v136 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 1;
  v225 = (void **)sub_18C0B80(&v267, *(_QWORD **)(*a1 + 248), v136, v237, v137, v138);
  ptr = *v225;
  v282 = (__int64)(v225 + 1);
  v148 = sub_BF48A0((__int64 *)&ptr);
  v150 = v149;
  v151 = *(_QWORD *)(sub_C95340(v5) + 56);
  if ( (v151 & 4) != 0 )
    v265 = _mm_loadu_si128((const __m128i *)((v151 & 0xFFFFFFFFFFFFFFF8LL) + 40));
  else
    v265 = _mm_loadu_si128(&xmmword_23DED40);
  v152 = *a1;
  if ( !v265.m128i_i32[2] )
    v265.m128i_i32[2] = *(_DWORD *)(v152 + 12632);
  v153 = v150 + 16;
  v154 = 0;
  v155 = (*(_QWORD *)v5 >> 22) & 1LL;
  if ( *(_BYTE *)(v148 + 16) != 25 )
    v154 = *(unsigned __int16 *)(v148 + 22);
  v247 = v152;
  v241 = (int)v225;
  v231 = v153;
  v235 = v154;
  v226 = *(_BYTE *)(sub_C95340(v5) + 81) >> 5;
  v156 = *(_BYTE *)(sub_C95340(v5) + 84);
  v157 = *(_DWORD *)(sub_C95340(v5) + 64);
  v158 = sub_C95340(v5);
  sub_1A2D870(v247, v254, *(_DWORD *)(v158 + 24), v157, (unsigned int)&v265, v241, v156 & 3, v226, v231, v235, v155);
  sub_C95340(v5);
  ptr = (void *)sub_C95340(v5);
  *sub_1742A40(v261, (__int64 *)&ptr, v159, v160, v161, v162) = v254;
  v163 = v253[2];
  if ( (v163 & 4) != 0 )
    v164 = *(_QWORD *)(v163 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v164 = v163 & 0xFFFFFFFFFFFFFFF8LL;
  v165 = *a1;
  v166 = *(_QWORD *)(*a1 + 9944);
  v242 = *(_QWORD *)(*a1 + 544);
  v167 = *(_QWORD *)(*a1 + 512);
  *(_QWORD *)(v165 + 512) = 0;
  v284 = v166;
  v168 = *(_DWORD *)(v165 + 80);
  *(_QWORD *)(v165 + 544) = v164;
  v169 = *(_DWORD *)(v165 + 2632);
  v248 = v167;
  *(_DWORD *)(v165 + 80) = *(_DWORD *)(v165 + 40);
  v170 = *(_DWORD *)(v165 + 3688);
  *(_QWORD *)(v165 + 9944) = 0;
  *(_DWORD *)(v165 + 2632) = v170;
  *((_QWORD *)&v273 + 1) = 0;
  v232 = sub_B970F0((__int64)v260);
  v171 = v260[16];
  v227 = *(_DWORD *)(v171 + 112);
  v172 = *(_DWORD *)(v171 + 108) >> 1;
  v173 = sub_B97150((__int64)v260);
  v174 = *a1;
  v175 = *(_BYTE *)(v260[16] + 108LL);
  v272 = __PAIR64__(v172, v227);
  v271 = v232;
  BYTE4(v273) = v175 & 1;
  LODWORD(v273) = v173;
  BYTE8(v273) = 1;
  sub_1A2FD60(v174, (_DWORD)v253, v254, (_DWORD)v260, v232, v176, v232, __SPAIR64__(v172, v227), v273, 1);
  if ( v242 )
  {
    *(_QWORD *)(v165 + 544) = v242;
    *(_QWORD *)(v165 + 512) = v248;
    v177 = v284;
    *(_DWORD *)(v165 + 80) = v168;
    *(_QWORD *)(v165 + 9944) = v177;
    *(_DWORD *)(v165 + 2632) = v169;
  }
  v178 = *a1;
  v179 = sub_C95340(v5);
  v180 = 6;
  sub_18C7FE0(v178, 6, v179);
  v273 = 0;
  v274 = 0;
  LODWORD(v275) = 0;
  v276 = 0;
  v277 = 0;
  LODWORD(v271) = 5;
  WORD2(v271) = 0;
  v181 = sub_C94E80(v5);
  LODWORD(v272) = sub_EEB7E0(v181, 6, 0.0);
  sub_1DBA9B0(*a1, 6, v182, v183, v184, v185, v271, v272, v273, *((_QWORD *)&v273 + 1), v274, v275, v276, v277);
  if ( v251 )
  {
    sub_1DBAAE0(*a1, 6);
    v264 = 0;
    goto LABEL_138;
  }
  v228 = sub_C94E80(v5);
  v191 = sub_C95050(v5);
  v192 = sub_C950C0(v5);
  if ( v191 == v192 )
  {
LABEL_172:
    sub_1DBAAE0(*a1, v180);
    v264 = 0;
    if ( v228 == 1 )
      goto LABEL_138;
    sub_17595E0((__int64)&ptr, v237, v200, v201, v202, v203);
    sub_17EEDE0(
      *a1,
      v254,
      (unsigned __int16 *)(v228 & 0xFFFFFFFFFFFFFFFELL),
      (unsigned __int16 *)((char *)&dword_0 + 1),
      v204,
      v205,
      (__m128i)0LL);
    if ( v259 )
    {
      *(_QWORD *)(v258 + 544) = v259;
      *(_QWORD *)(v258 + 512) = v257;
      *(_QWORD *)(v258 + 9944) = v266;
      *(_DWORD *)(v258 + 80) = v256;
      *(_DWORD *)(v258 + 2632) = v255;
    }
    v208 = 0;
    v209 = *(_QWORD *)(v286 + 128);
    if ( v209 && (*(_BYTE *)(v209 + 10) & 0x20) != 0 )
      v208 = *(_BYTE *)(v209 + 104) & 3;
    v210 = v253[16];
    *(_BYTE *)(v210 + 104) = v208 | *(_BYTE *)(v210 + 104) & 0xFC;
    v211 = *a1;
    v253[6] = 0;
    sub_A7AA70(*(_QWORD *)(v211 + 248), (__int64)v253, v208, v210, v206, v207);
    v212 = sub_EEC140(v228 & 0xFFFFFFFFFFFFFFFELL);
    v213 = *(_DWORD *)(v5 + 16);
    v229 = v212;
    v214 = *(__int64 **)(v287 + 120);
    v217 = &v214[(unsigned int)sub_B76070(v287, (__int64)v253, v215, v216)];
    if ( v214 == v217 )
    {
LABEL_185:
      v139 = sub_1A33A60(*a1, v213, v229, &ptr);
      sub_15F04D0((__int64)&ptr);
      goto LABEL_141;
    }
    while ( 1 )
    {
      v218 = *v214;
      v219 = (_DWORD *)sub_B73640(*v214);
      if ( !v219 )
      {
        if ( (*(_BYTE *)(v218 + 97) & 6) != 4 )
          goto LABEL_181;
        v219 = (_DWORD *)sub_B74810(v218);
      }
      v285 |= (*v219 & 0x4000) != 0;
LABEL_181:
      if ( v217 == ++v214 )
        goto LABEL_185;
    }
  }
  v193 = v191;
  while ( 1 )
  {
    v196 = *(_QWORD *)v193;
    if ( (*(_QWORD *)v193 & 1) == 0 )
      goto LABEL_166;
    v180 = v196 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v196 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( (v196 & 4) != 0 )
      {
        v194 = *a1;
        v195 = sub_C94E40((__int64 *)v193);
        v180 = *(unsigned int *)(v193 + 8);
        sub_19B4460(v194, v180, (*(_DWORD *)v193 & 1) == 0, 1, 0, v195 == 1);
      }
      goto LABEL_166;
    }
    v197 = sub_18CBB50((__int64)a1, v180);
    if ( !v197 )
      break;
    v198 = *a1;
    if ( *(char *)(v197 + 28) < 0 )
      goto LABEL_189;
    v199 = *(_DWORD *)(v193 + 8);
    v262 = 0;
    v180 = v197;
    ptr = nullptr;
    sub_1903850(v198, v197, v199, 0, 0, 1u, &v262, (__int64 *)&ptr, nullptr);
LABEL_166:
    v193 += 16LL;
    if ( v192 == v193 )
      goto LABEL_172;
  }
  v198 = *a1;
LABEL_189:
  sub_1DBAAE0(v198, v180);
  v264 = 0;
LABEL_138:
  if ( v259 )
  {
    *(_QWORD *)(v258 + 544) = v259;
    *(_QWORD *)(v258 + 512) = v257;
    *(_QWORD *)(v258 + 9944) = v266;
    *(_DWORD *)(v258 + 80) = v256;
    *(_DWORD *)(v258 + 2632) = v255;
  }
  v139 = 1;
  sub_1A2F720(*a1, *(unsigned int *)(v5 + 16), 0, 1);
LABEL_141:
  if ( v267 != v269 && v267 )
    operator delete[](v267);
LABEL_111:
  sub_146B590((__int64)&v263);
  v140 = v278;
  v141 = &v278[88 * (unsigned int)v279];
  if ( v278 != (_BYTE *)v141 )
  {
    do
    {
      while ( 1 )
      {
        v141 -= 11;
        v142 = (_QWORD *)v141[1];
        if ( v142 == v141 + 3 )
          break;
        free(v142);
        if ( v140 == v141 )
          goto LABEL_114;
      }
    }
    while ( v140 != v141 );
LABEL_114:
    v141 = v278;
  }
  if ( v141 != (_QWORD *)v280 )
    free(v141);
  return v139;
}
