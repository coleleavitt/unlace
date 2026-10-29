void __fastcall sub_1E00240(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v7; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  int v16; // ebp
  __int64 v17; // rax
  void **v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r14d
  unsigned int v24; // eax
  __int64 v25; // rsi
  unsigned __int16 *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned __int8 v29; // al
  __int64 v30; // r9
  unsigned __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int64 *v36; // r14
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  void **v43; // rax
  __int64 v44; // rax
  unsigned int v45; // edx
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // eax
  __int64 v50; // rsi
  unsigned __int16 *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // r8
  char *v54; // rdi
  unsigned __int16 *v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // r15
  void **v58; // rbp
  unsigned __int64 *v59; // rax
  unsigned __int64 *v60; // r14
  __int64 *v61; // r12
  unsigned __int64 *v62; // r15
  unsigned __int64 v63; // rbx
  unsigned __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rbp
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  void **v70; // rax
  __int64 v71; // rax
  unsigned int v72; // edx
  unsigned __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned int v76; // eax
  __int64 v77; // rsi
  unsigned __int16 *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 *v81; // rdi
  unsigned __int16 *v82; // rbx
  unsigned __int64 v83; // rbx
  __int64 v84; // rbp
  void **v85; // r12
  unsigned __int64 *v86; // rax
  unsigned __int64 *v87; // r14
  __int64 *v88; // r12
  unsigned __int64 *v89; // r15
  unsigned __int64 v90; // rbx
  unsigned __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rbp
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  void **v97; // rax
  __int64 v98; // rax
  unsigned int v99; // edx
  unsigned __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned int v103; // eax
  __int64 v104; // rsi
  unsigned __int16 *v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 *v108; // rdi
  unsigned __int16 *v109; // rbx
  unsigned __int64 v110; // rbx
  __int64 v111; // rbp
  void **v112; // r12
  const void *v113; // r12
  __int64 v114; // rax
  signed __int64 v115; // rbp
  __int64 v116; // rbx
  unsigned __int64 v117; // rdx
  unsigned int *v118; // rdx
  __int64 *v119; // rsi
  __int64 v120; // rcx
  __int64 v121; // rbp
  __int64 *v122; // r14
  unsigned __int64 v123; // rax
  unsigned __int8 v124; // al
  __int64 v125; // r9
  unsigned __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  unsigned __int64 v130; // rbx
  __int64 v131; // rbx
  __int64 v132; // rcx
  unsigned __int64 v133; // rbx
  unsigned __int64 v134; // rdx
  unsigned __int8 v135; // al
  __int64 v136; // r9
  unsigned __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rdx
  unsigned __int64 v141; // rbx
  __int64 v142; // rbx
  __int64 v143; // r9
  unsigned __int64 v144; // rcx
  unsigned __int64 v145; // rbx
  unsigned __int64 v146; // rdx
  unsigned __int64 v147; // rsi
  unsigned __int64 v148; // rbx
  __int64 v149; // rcx
  unsigned __int64 v150; // rdx
  unsigned __int8 v151; // al
  __int64 v152; // r9
  unsigned __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rdx
  unsigned __int64 v157; // rbx
  __int64 v158; // rbx
  __int64 v159; // r9
  unsigned __int64 v160; // rcx
  unsigned __int64 v161; // rbx
  unsigned __int64 v162; // rdx
  unsigned __int64 v163; // rsi
  unsigned __int64 v164; // rbx
  __int64 v165; // rcx
  unsigned __int64 v166; // rdx
  unsigned __int64 *v168; // [rsp+0h] [rbp-2D8h]
  __int64 v169; // [rsp+8h] [rbp-2D0h]
  unsigned __int64 v170; // [rsp+10h] [rbp-2C8h]
  unsigned int *v171; // [rsp+10h] [rbp-2C8h]
  __int64 v172; // [rsp+18h] [rbp-2C0h]
  __int64 v173; // [rsp+28h] [rbp-2B0h]
  __int64 v174; // [rsp+28h] [rbp-2B0h]
  __int64 v175; // [rsp+28h] [rbp-2B0h]
  int v176; // [rsp+28h] [rbp-2B0h]
  __int64 v177; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 *v178; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 *v179; // [rsp+30h] [rbp-2A8h]
  unsigned __int64 *v180; // [rsp+30h] [rbp-2A8h]
  __int64 v182; // [rsp+38h] [rbp-2A0h]
  int v183; // [rsp+40h] [rbp-298h]
  __int64 v184; // [rsp+40h] [rbp-298h]
  __int64 v185; // [rsp+40h] [rbp-298h]
  __int64 v186; // [rsp+40h] [rbp-298h]
  __int64 *v187; // [rsp+40h] [rbp-298h]
  __int64 v188; // [rsp+48h] [rbp-290h]
  __int64 v189; // [rsp+50h] [rbp-288h]
  __int64 v190; // [rsp+50h] [rbp-288h]
  __int64 v191; // [rsp+50h] [rbp-288h]
  unsigned __int64 *v192; // [rsp+50h] [rbp-288h]
  __int64 v193; // [rsp+58h] [rbp-280h]
  int v194; // [rsp+60h] [rbp-278h]
  int v195; // [rsp+60h] [rbp-278h]
  int v196; // [rsp+60h] [rbp-278h]
  unsigned __int64 *v197; // [rsp+60h] [rbp-278h]
  __int64 v198; // [rsp+68h] [rbp-270h]
  int v199; // [rsp+74h] [rbp-264h]
  int v200; // [rsp+74h] [rbp-264h]
  int v201; // [rsp+74h] [rbp-264h]
  unsigned __int64 v202; // [rsp+78h] [rbp-260h]
  unsigned __int64 v203; // [rsp+78h] [rbp-260h]
  unsigned __int64 v204; // [rsp+78h] [rbp-260h]
  unsigned __int64 v205; // [rsp+88h] [rbp-250h]
  unsigned __int16 *v206; // [rsp+90h] [rbp-248h]
  unsigned __int16 *v207; // [rsp+90h] [rbp-248h]
  unsigned __int16 *v208; // [rsp+90h] [rbp-248h]
  __int64 *v209; // [rsp+98h] [rbp-240h]
  __int64 *v210; // [rsp+98h] [rbp-240h]
  void *v211; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v212; // [rsp+D8h] [rbp-200h]
  _BYTE v213[40]; // [rsp+E0h] [rbp-1F8h] BYREF
  __int64 v214; // [rsp+108h] [rbp-1D0h]
  void *v215; // [rsp+120h] [rbp-1B8h] BYREF
  __int64 v216; // [rsp+128h] [rbp-1B0h]
  _BYTE v217[32]; // [rsp+130h] [rbp-1A8h] BYREF
  void *v218; // [rsp+150h] [rbp-188h] BYREF
  __int64 v219; // [rsp+158h] [rbp-180h]
  _BYTE v220[32]; // [rsp+160h] [rbp-178h] BYREF
  void *v221; // [rsp+180h] [rbp-158h] BYREF
  __int64 v222; // [rsp+188h] [rbp-150h]
  _BYTE v223[32]; // [rsp+190h] [rbp-148h] BYREF
  void *v224; // [rsp+1B0h] [rbp-128h] BYREF
  __int64 v225; // [rsp+1B8h] [rbp-120h]
  _BYTE v226[32]; // [rsp+1C0h] [rbp-118h] BYREF
  void *v227; // [rsp+1E0h] [rbp-F8h] BYREF
  __int64 v228; // [rsp+1E8h] [rbp-F0h]
  _BYTE v229[32]; // [rsp+1F0h] [rbp-E8h] BYREF
  __int64 v230; // [rsp+210h] [rbp-C8h] BYREF
  __int64 v231; // [rsp+218h] [rbp-C0h]
  __int64 v232; // [rsp+220h] [rbp-B8h] BYREF
  unsigned int v233; // [rsp+228h] [rbp-B0h]
  void *ptr; // [rsp+260h] [rbp-78h] BYREF
  __int64 v235; // [rsp+268h] [rbp-70h]
  __int64 v236; // [rsp+270h] [rbp-68h] BYREF
  __int64 v237; // [rsp+278h] [rbp-60h]
  __int16 v238; // [rsp+280h] [rbp-58h]
  char v239; // [rsp+282h] [rbp-56h]
  __int64 v240; // [rsp+288h] [rbp-50h]

  v7 = a4;
  if ( (*(_BYTE *)(a4 + 28) & 0x7F) == 0x47 )
    v7 = *(_QWORD *)(a4 + 48);
  v170 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
    v170 = *(_QWORD *)(*(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v170 )
  {
    v9 = 0;
    if ( (*(_BYTE *)(v170 + 8) & 0x7Fu) - 59 < 3 )
      v9 = v170 - 64;
    v170 = v9;
  }
  v215 = v217;
  v216 = 0x400000000LL;
  v218 = v220;
  v219 = 0x400000000LL;
  v222 = 0x400000000LL;
  v225 = 0x400000000LL;
  v228 = 0x400000000LL;
  v212 = 0x400000000LL;
  v221 = v223;
  v10 = *(_QWORD *)(a3 + 48);
  v224 = v226;
  v11 = v10;
  v227 = v229;
  v211 = v213;
  v205 = v10;
  if ( !v10 )
    goto LABEL_25;
  sub_18C74E0(a1, 6, 0, 4);
  v12 = sub_BFBAE0(v11);
  if ( (*(_WORD *)v12 & 0x1FF) == 0x47 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    if ( (*(_BYTE *)(v13 + 28) & 0x7F) == 0x2B )
    {
      v14 = *(_QWORD *)(a1 + 512);
      v15 = *(_QWORD *)(a1 + 544);
      *(_QWORD *)(a1 + 512) = 0;
      v230 = a1;
      v16 = *(_DWORD *)(a1 + 2632);
      v177 = v14;
      v17 = *(_QWORD *)(a1 + 9944);
      v231 = 1;
      v214 = v17;
      LODWORD(v17) = *(_DWORD *)(a1 + 80);
      *(_QWORD *)(a1 + 9944) = 0;
      v183 = v17;
      *(_QWORD *)(a1 + 544) = v7 + 72;
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
      v18 = (void **)&v232;
      do
      {
        *v18 = (void *)-4096LL;
        v18 += 2;
      }
      while ( v18 != &ptr );
      ptr = &v236;
      v235 = 0x100000000LL;
      v19 = *(_QWORD *)(a1 + 11280);
      *(_QWORD *)(a1 + 11280) = &v230;
      v238 = 0;
      v237 = v19;
      v239 = 0;
      v240 = 0;
      v23 = sub_B76070(v7, 0, -4096, (__int64)&ptr);
      v24 = (unsigned __int8)(*(_WORD *)(v13 + 98) >> 4);
      if ( v24 == 255 )
      {
        if ( v23 <= (unsigned int)sub_B74880(v13) )
        {
LABEL_17:
          v25 = v205;
          v26 = sub_1DF2070(a1, v205, a2, v20, v21, v22, a6, a7);
          sub_1CB3BA0((__int64)&v230);
          if ( v15 )
          {
            *(_QWORD *)(a1 + 544) = v15;
            *(_DWORD *)(a1 + 2632) = v16;
            *(_QWORD *)(a1 + 512) = v177;
            *(_QWORD *)(a1 + 9944) = v214;
            *(_DWORD *)(a1 + 80) = v183;
          }
          goto LABEL_20;
        }
        v24 = (unsigned __int8)(*(_WORD *)(v13 + 98) >> 4);
        if ( v24 == 255 )
          v24 = sub_B74880(v13);
      }
      else if ( v23 <= v24 )
      {
        goto LABEL_17;
      }
      sub_1DC20B0((__int64)&v230, v13, *(_QWORD *)(*(_QWORD *)(v7 + 120) + 8LL * v24), v20);
      goto LABEL_17;
    }
  }
  v29 = sub_B72F20(v7);
  sub_19A2CD0((__int64)&v230, a1, v170, 0, v29, v30);
  v25 = v205;
  v26 = sub_1DF2070(a1, v205, a2, v31, v32, v33, a6, a7);
  sub_19A2DA0(&v230);
LABEL_20:
  v205 = 0;
  if ( v26 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    v34 = 0;
    if ( ((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFELL) != 0 )
      v34 = (unsigned int)sub_C00A40((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFELL, v25, 0, v27, v28);
    v205 = sub_19B4A30(a1, (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFELL, v34, 0, 0, 0, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
  }
  sub_190D5E0(a1, a6);
LABEL_25:
  v35 = *(unsigned int *)(a3 + 56);
  if ( !(_DWORD)v35 )
    goto LABEL_54;
  v173 = v7;
  v36 = *(unsigned __int64 **)(a3 + 64);
  v178 = &v36[v35];
  v202 = v7 + 72;
  do
  {
    v37 = *v36;
    sub_18C74E0(a1, 6, 0, 4);
    v38 = sub_BFBAE0(v37);
    if ( (*(_WORD *)v38 & 0x1FF) != 0x47 || (v39 = *(_QWORD *)(v38 + 16), (*(_BYTE *)(v39 + 28) & 0x7F) != 0x2B) )
    {
      v124 = sub_B72F20(v173);
      sub_19A2CD0((__int64)&v230, a1, v170, 0, v124, v125);
      v50 = v37;
      v55 = sub_1DF2070(a1, v37, a2, v126, v127, v128, a6, a7);
      sub_19A2DA0(&v230);
      if ( v55 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_51;
      goto LABEL_130;
    }
    v40 = *(_QWORD *)(a1 + 544);
    v230 = a1;
    v231 = 1;
    v184 = v40;
    v41 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = 0;
    v189 = v41;
    v42 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    v214 = v42;
    v194 = *(_DWORD *)(a1 + 80);
    v199 = *(_DWORD *)(a1 + 2632);
    *(_QWORD *)(a1 + 544) = v202;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
    v43 = (void **)&v232;
    do
    {
      *v43 = (void *)-4096LL;
      v43 += 2;
    }
    while ( v43 != &ptr );
    v239 = 0;
    ptr = &v236;
    v235 = 0x100000000LL;
    v44 = *(_QWORD *)(a1 + 11280);
    *(_QWORD *)(a1 + 11280) = &v230;
    v237 = v44;
    v238 = 0;
    v240 = 0;
    v45 = sub_B76070(v173, 6, (__int64)&ptr, 0);
    v49 = (unsigned __int8)(*(_WORD *)(v39 + 98) >> 4);
    if ( v49 != 255 )
    {
      if ( v45 <= v49 )
        goto LABEL_34;
      goto LABEL_33;
    }
    if ( v45 > (unsigned int)sub_B74880(v39) )
    {
      v49 = (unsigned __int8)(*(_WORD *)(v39 + 98) >> 4);
      if ( v49 == 255 )
        v49 = sub_B74880(v39);
LABEL_33:
      sub_1DC20B0((__int64)&v230, v39, *(_QWORD *)(*(_QWORD *)(v173 + 120) + 8LL * v49), v46);
    }
LABEL_34:
    v50 = v37;
    v51 = sub_1DF2070(a1, v37, a2, v46, v47, v48, a6, a7);
    v54 = (char *)ptr;
    v55 = v51;
    if ( !(_BYTE)v238 )
    {
      v54 = (char *)ptr;
      if ( (_DWORD)v235 )
      {
        v206 = v51;
        v56 = 0;
        v57 = 8LL * (unsigned int)(v235 - 1) + 8;
        do
        {
          v58 = *(void ***)&v54[v56];
          if ( v58 )
          {
            if ( *v58 != v58 + 2 )
              free(*v58);
            v50 = 48;
            operator delete(v58, 0x30u);
            v54 = (char *)ptr;
          }
          v56 += 8;
        }
        while ( v57 != v56 );
        v55 = v206;
      }
      *(_QWORD *)(v230 + 11280) = v237;
      LOBYTE(v238) = 1;
    }
    if ( v54 != (char *)&v236 )
      free(v54);
    if ( (v231 & 1) == 0 )
    {
      v50 = 16LL * v233;
      operator delete(v232, v50, 8);
    }
    if ( v184 )
    {
      *(_QWORD *)(a1 + 544) = v184;
      *(_QWORD *)(a1 + 512) = v189;
      *(_QWORD *)(a1 + 9944) = v214;
      *(_DWORD *)(a1 + 80) = v194;
      *(_DWORD *)(a1 + 2632) = v199;
    }
    if ( v55 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    {
LABEL_51:
      sub_190D5E0(a1, a6);
      goto LABEL_52;
    }
LABEL_130:
    v129 = 0;
    v130 = (unsigned __int64)v55 & 0xFFFFFFFFFFFFFFFELL;
    if ( v130 )
      v129 = (unsigned int)sub_C00A40(v130, v50, 0, v52, v53);
    v131 = sub_19B4A30(a1, v130, v129, 0, 0, 0, a6, a7);
    sub_190D5E0(a1, a6);
    if ( v131 != 1 )
    {
      v132 = (unsigned int)v216;
      v133 = v131 & 0xFFFFFFFFFFFFFFFELL;
      v134 = (unsigned int)v216 + 1LL;
      if ( v134 > HIDWORD(v216) )
      {
        sub_2237220(&v215, v217, v134, 8);
        v132 = (unsigned int)v216;
      }
      *((_QWORD *)v215 + v132) = v133;
      LODWORD(v216) = v216 + 1;
    }
LABEL_52:
    ++v36;
  }
  while ( v178 != v36 );
  v7 = v173;
LABEL_54:
  v59 = *(unsigned __int64 **)(a3 + 80);
  v179 = &v59[*(unsigned int *)(a3 + 72)];
  if ( v59 == v179 )
    goto LABEL_83;
  v60 = *(unsigned __int64 **)(a3 + 80);
  v61 = &v230;
  v174 = v7;
  v203 = v7 + 72;
  v62 = *(unsigned __int64 **)(a3 + 96);
  while ( 2 )
  {
    v63 = *v60;
    sub_18C74E0(a1, 6, 0, 4);
    v64 = sub_BFBAE0(v63);
    if ( (*(_WORD *)v64 & 0x1FF) == 0x47 && (v66 = *(_QWORD *)(v64 + 16), (*(_BYTE *)(v66 + 28) & 0x7F) == 0x2B) )
    {
      v67 = *(_QWORD *)(a1 + 544);
      v230 = a1;
      v231 = 1;
      v185 = v67;
      v68 = *(_QWORD *)(a1 + 512);
      *(_QWORD *)(a1 + 512) = 0;
      v190 = v68;
      v69 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 9944) = 0;
      v214 = v69;
      v195 = *(_DWORD *)(a1 + 80);
      v200 = *(_DWORD *)(a1 + 2632);
      *(_QWORD *)(a1 + 544) = v203;
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
      v70 = (void **)(v61 + 2);
      do
      {
        *v70 = (void *)-4096LL;
        v70 += 2;
      }
      while ( v70 != &ptr );
      v239 = 0;
      ptr = v61 + 12;
      v235 = 0x100000000LL;
      v71 = *(_QWORD *)(a1 + 11280);
      *(_QWORD *)(a1 + 11280) = v61;
      v238 = 0;
      v237 = v71;
      v240 = 0;
      v72 = sub_B76070(v174, 6, 0, v65);
      v76 = (unsigned __int8)(*(_WORD *)(v66 + 98) >> 4);
      if ( v76 == 255 )
      {
        if ( v72 > (unsigned int)sub_B74880(v66) )
        {
          v76 = (unsigned __int8)(*(_WORD *)(v66 + 98) >> 4);
          if ( v76 == 255 )
            v76 = sub_B74880(v66);
LABEL_62:
          sub_1DC20B0((__int64)v61, v66, *(_QWORD *)(*(_QWORD *)(v174 + 120) + 8LL * v76), v174);
        }
      }
      else if ( v72 > v76 )
      {
        goto LABEL_62;
      }
      v77 = v63;
      v78 = sub_1DF2070(a1, v63, a2, v73, v74, v75, a6, a7);
      v81 = (__int64 *)ptr;
      v82 = v78;
      if ( !(_BYTE)v238 )
      {
        v81 = (__int64 *)ptr;
        if ( (_DWORD)v235 )
        {
          v209 = v61;
          v207 = v78;
          v83 = 0;
          v84 = 8LL * (unsigned int)(v235 - 1) + 8;
          do
          {
            v85 = (void **)v81[v83 / 8];
            if ( v85 )
            {
              if ( *v85 != v85 + 2 )
                free(*v85);
              v77 = 48;
              operator delete(v85, 0x30u);
              v81 = (__int64 *)ptr;
            }
            v83 += 8LL;
          }
          while ( v84 != v83 );
          v82 = v207;
          v61 = v209;
        }
        *(_QWORD *)(v230 + 11280) = v237;
        LOBYTE(v238) = 1;
      }
      if ( v81 != v61 + 12 )
        free(v81);
      if ( (v231 & 1) == 0 )
      {
        v77 = 16LL * v233;
        operator delete(v232, v77, 8);
      }
      if ( v185 )
      {
        *(_QWORD *)(a1 + 544) = v185;
        *(_QWORD *)(a1 + 512) = v190;
        *(_QWORD *)(a1 + 9944) = v214;
        *(_DWORD *)(a1 + 80) = v195;
        *(_DWORD *)(a1 + 2632) = v200;
      }
      if ( v82 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
LABEL_80:
        sub_190D5E0(a1, a6);
        goto LABEL_81;
      }
    }
    else
    {
      v151 = sub_B72F20(v174);
      sub_19A2CD0((__int64)v61, a1, v170, 0, v151, v152);
      v77 = v63;
      v82 = sub_1DF2070(a1, v63, a2, v153, v154, v155, a6, a7);
      sub_19A2DA0(v61);
      if ( v82 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_80;
    }
    v156 = 0;
    v157 = (unsigned __int64)v82 & 0xFFFFFFFFFFFFFFFELL;
    if ( v157 )
      v156 = (unsigned int)sub_C00A40(v157, v77, 0, v79, v80);
    v158 = sub_19B4A30(a1, v157, v156, 0, 0, 0, a6, a7);
    sub_190D5E0(a1, a6);
    if ( v158 != 1 )
    {
      v160 = (unsigned int)v219;
      v161 = v158 & 0xFFFFFFFFFFFFFFFELL;
      v162 = (unsigned int)v219 + 1LL;
      if ( v162 > HIDWORD(v219) )
      {
        sub_2237220(&v218, v220, v162, 8);
        v160 = (unsigned int)v219;
      }
      *((_QWORD *)v218 + v160) = v161;
      v163 = *v62;
      v164 = 0;
      LODWORD(v219) = v219 + 1;
      if ( v163 )
        v164 = (unsigned __int64)sub_1DF2070(a1, v163, a2, v160, a5, v159, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
      v165 = (unsigned int)v222;
      v166 = (unsigned int)v222 + 1LL;
      if ( v166 > HIDWORD(v222) )
      {
        sub_2237220(&v221, v223, v166, 8);
        v165 = (unsigned int)v222;
      }
      ++v62;
      *((_QWORD *)v221 + v165) = v164;
      LODWORD(v222) = v222 + 1;
    }
LABEL_81:
    if ( v179 != ++v60 )
      continue;
    break;
  }
  v7 = v174;
LABEL_83:
  v86 = *(unsigned __int64 **)(a3 + 112);
  v180 = &v86[*(unsigned int *)(a3 + 104)];
  if ( v86 == v180 )
    goto LABEL_112;
  v87 = *(unsigned __int64 **)(a3 + 112);
  v88 = &v230;
  v175 = v7;
  v204 = v7 + 72;
  v89 = *(unsigned __int64 **)(a3 + 144);
  while ( 2 )
  {
    v90 = *v87;
    sub_18C74E0(a1, 6, 0, 4);
    v91 = sub_BFBAE0(v90);
    if ( (*(_WORD *)v91 & 0x1FF) == 0x47 && (v93 = *(_QWORD *)(v91 + 16), (*(_BYTE *)(v93 + 28) & 0x7F) == 0x2B) )
    {
      v94 = *(_QWORD *)(a1 + 544);
      v230 = a1;
      v231 = 1;
      v186 = v94;
      v95 = *(_QWORD *)(a1 + 512);
      *(_QWORD *)(a1 + 512) = 0;
      v191 = v95;
      v96 = *(_QWORD *)(a1 + 9944);
      *(_QWORD *)(a1 + 9944) = 0;
      v214 = v96;
      v196 = *(_DWORD *)(a1 + 80);
      v201 = *(_DWORD *)(a1 + 2632);
      *(_QWORD *)(a1 + 544) = v204;
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
      v97 = (void **)(v88 + 2);
      do
      {
        *v97 = (void *)-4096LL;
        v97 += 2;
      }
      while ( &ptr != v97 );
      v239 = 0;
      ptr = v88 + 12;
      v235 = 0x100000000LL;
      v98 = *(_QWORD *)(a1 + 11280);
      *(_QWORD *)(a1 + 11280) = v88;
      v237 = v98;
      v238 = 0;
      v240 = 0;
      v99 = sub_B76070(v175, 6, (__int64)&ptr, v92);
      v103 = (unsigned __int8)(*(_WORD *)(v93 + 98) >> 4);
      if ( v103 == 255 )
      {
        if ( v99 > (unsigned int)sub_B74880(v93) )
        {
          v103 = (unsigned __int8)(*(_WORD *)(v93 + 98) >> 4);
          if ( v103 == 255 )
            v103 = sub_B74880(v93);
LABEL_91:
          sub_1DC20B0((__int64)v88, v93, *(_QWORD *)(*(_QWORD *)(v175 + 120) + 8LL * v103), v175);
        }
      }
      else if ( v99 > v103 )
      {
        goto LABEL_91;
      }
      v104 = v90;
      v105 = sub_1DF2070(a1, v90, a2, v100, v101, v102, a6, a7);
      v108 = (__int64 *)ptr;
      v109 = v105;
      if ( !(_BYTE)v238 )
      {
        v108 = (__int64 *)ptr;
        if ( (_DWORD)v235 )
        {
          v210 = v88;
          v208 = v105;
          v110 = 0;
          v111 = 8LL * (unsigned int)(v235 - 1) + 8;
          do
          {
            v112 = (void **)v108[v110 / 8];
            if ( v112 )
            {
              if ( *v112 != v112 + 2 )
                free(*v112);
              v104 = 48;
              operator delete(v112, 0x30u);
              v108 = (__int64 *)ptr;
            }
            v110 += 8LL;
          }
          while ( v110 != v111 );
          v109 = v208;
          v88 = v210;
        }
        *(_QWORD *)(v230 + 11280) = v237;
        LOBYTE(v238) = 1;
      }
      if ( v108 != v88 + 12 )
        free(v108);
      if ( (v231 & 1) == 0 )
      {
        v104 = 16LL * v233;
        operator delete(v232, v104, 8);
      }
      if ( v186 )
      {
        *(_QWORD *)(a1 + 544) = v186;
        *(_QWORD *)(a1 + 512) = v191;
        *(_QWORD *)(a1 + 9944) = v214;
        *(_DWORD *)(a1 + 80) = v196;
        *(_DWORD *)(a1 + 2632) = v201;
      }
      if ( v109 == (unsigned __int16 *)((char *)&dword_0 + 1) )
      {
LABEL_109:
        sub_190D5E0(a1, a6);
        goto LABEL_110;
      }
    }
    else
    {
      v135 = sub_B72F20(v175);
      sub_19A2CD0((__int64)v88, a1, v170, 0, v135, v136);
      v104 = v90;
      v109 = sub_1DF2070(a1, v90, a2, v137, v138, v139, a6, a7);
      sub_19A2DA0(v88);
      if ( v109 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        goto LABEL_109;
    }
    v140 = 0;
    v141 = (unsigned __int64)v109 & 0xFFFFFFFFFFFFFFFELL;
    if ( v141 )
      v140 = (unsigned int)sub_C00A40(v141, v104, 0, v106, v107);
    v142 = sub_19B4A30(a1, v141, v140, 0, 0, 0, a6, a7);
    sub_190D5E0(a1, a6);
    if ( v142 != 1 )
    {
      v144 = (unsigned int)v225;
      v145 = v142 & 0xFFFFFFFFFFFFFFFELL;
      v146 = (unsigned int)v225 + 1LL;
      if ( v146 > HIDWORD(v225) )
      {
        sub_2237220(&v224, v226, v146, 8);
        v144 = (unsigned int)v225;
      }
      *((_QWORD *)v224 + v144) = v145;
      v147 = *v89;
      v148 = 0;
      LODWORD(v225) = v225 + 1;
      if ( v147 )
        v148 = (unsigned __int64)sub_1DF2070(a1, v147, a2, v144, a5, v143, a6, a7) & 0xFFFFFFFFFFFFFFFELL;
      v149 = (unsigned int)v228;
      v150 = (unsigned int)v228 + 1LL;
      if ( v150 > HIDWORD(v228) )
      {
        sub_2237220(&v227, v229, v150, 8);
        v149 = (unsigned int)v228;
      }
      ++v89;
      *((_QWORD *)v227 + v149) = v148;
      LODWORD(v228) = v228 + 1;
    }
LABEL_110:
    if ( v180 != ++v87 )
      continue;
    break;
  }
  v7 = v175;
LABEL_112:
  v113 = *(const void **)(a3 + 128);
  v114 = (unsigned int)v212;
  v115 = 4LL * *(unsigned int *)(a3 + 120);
  v116 = v115 >> 2;
  v117 = (v115 >> 2) + (unsigned int)v212;
  if ( v117 > HIDWORD(v212) )
  {
    sub_2237220(&v211, v213, v117, 4);
    v114 = (unsigned int)v212;
  }
  v118 = (unsigned int *)v211;
  if ( v115 )
  {
    memcpy((char *)v211 + 4 * v114, v113, v115);
    v118 = (unsigned int *)v211;
    LODWORD(v114) = v212;
  }
  v119 = *(__int64 **)(a1 + 760);
  v171 = v118;
  LODWORD(v212) = v116 + v114;
  v172 = (unsigned int)(v116 + v114);
  v168 = (unsigned __int64 *)v224;
  v187 = (__int64 *)v218;
  v120 = *(unsigned int *)(a3 + 40);
  v169 = (unsigned int)v225;
  v197 = (unsigned __int64 *)v227;
  v121 = *(_QWORD *)(a3 + 24);
  v198 = (unsigned int)v228;
  v122 = (__int64 *)v215;
  v192 = (unsigned __int64 *)v221;
  v193 = (unsigned int)v222;
  v188 = (unsigned int)v219;
  v182 = (unsigned int)v216;
  v176 = v120;
  v123 = sub_17A2530(a1, v7, 0, v120, a5, (__int64)v227);
  sub_1B41EB0(
    v119,
    v123,
    v176,
    v205,
    v122,
    v182,
    a6,
    a7,
    v187,
    v188,
    v192,
    v193,
    v168,
    v169,
    v171,
    v172,
    v197,
    v198,
    v121);
  if ( v211 != v213 )
    free(v211);
  if ( v227 != v229 )
    free(v227);
  if ( v224 != v226 )
    free(v224);
  if ( v221 != v223 )
    free(v221);
  if ( v218 != v220 )
    free(v218);
  if ( v215 != v217 )
    free(v215);
}
