__m128i *__fastcall sub_187F390(
        __int64 a1,
        __int64 *a2,
        int a3,
        _DWORD *a4,
        void *a5,
        unsigned __int64 a6,
        double a7,
        __m128i a8,
        _DWORD *a9,
        unsigned int *a10,
        int a11)
{
  __int64 v14; // r14
  bool v15; // al
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r15
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // edx
  int v27; // r14d
  __int64 v28; // rax
  size_t v29; // rax
  __int64 v30; // rax
  bool v31; // zf
  unsigned __int64 v32; // rax
  int *v33; // r9
  __m128i *v34; // r12
  __int64 v35; // r14
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  unsigned int v41; // edx
  char v42; // di
  __m128 si128; // xmm0
  __int64 v44; // r10
  __int64 v45; // rsi
  __int64 *v46; // r15
  __m128i *v47; // r14
  __int64 v48; // r8
  __int64 v49; // r9
  bool v50; // sf
  __int64 v51; // r10
  __int64 v52; // rax
  char v53; // bp
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int v59; // edx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbp
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v77; // rax
  __int64 *v78; // rsi
  unsigned __int8 v79; // al
  __int64 v80; // rax
  __int64 *v81; // rsi
  __int64 v82; // rax
  __int64 v83; // rdx
  unsigned int v84; // ecx
  __int64 v85; // r12
  char v86; // al
  char v87; // dl
  char v88; // dl
  __int64 v89; // r15
  char v90; // al
  unsigned int *v91; // rax
  __int64 v92; // rsi
  __int64 v93; // r12
  _QWORD *v94; // rdi
  unsigned __int64 v95; // rax
  __int64 v96; // rdi
  unsigned __int64 v97; // rbp
  __int64 v98; // rdi
  __int64 v99; // rdx
  unsigned __int64 v100; // r13
  __int64 v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  __int64 v105; // r9
  unsigned int v106; // eax
  unsigned int v107; // eax
  char v108; // si
  __int64 v109; // rdi
  unsigned __int64 v110; // rax
  _DWORD *v111; // rdi
  __int64 (*v112)(void); // rax
  unsigned int v113; // edx
  __int64 *v114; // rsi
  int v115; // r12d
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // r14
  __int64 v127; // r12
  unsigned int v128; // eax
  unsigned __int64 v129; // rdx
  __int64 v130; // r10
  char v131; // al
  __int64 m128i_i64; // rdx
  char v133; // al
  __int64 v134; // r15
  size_t v135; // rax
  _QWORD *v136; // rdi
  __int64 v137; // rax
  __int64 *v138; // rbp
  _QWORD *v139; // rax
  __int64 v140; // rdx
  unsigned __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int8 v144; // al
  unsigned __int64 v145; // rax
  unsigned __int64 v146; // rdi
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  _QWORD *v151; // rax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  _QWORD *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // rbp
  __int64 v165; // rsi
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  __int64 v169; // r9
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rcx
  __m128i **v175; // rax
  __int64 v176; // rcx
  __int64 v177; // r8
  __m128i **v178; // r9
  __int64 v179; // r10
  __int64 v180; // rax
  __int64 v181; // r12
  __int64 v182; // rbx
  __int64 v183; // r13
  __int64 v184; // rdx
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // rax
  __int64 v190; // rdi
  int v191; // eax
  int v192; // eax
  __int64 v193; // rax
  __int64 v194; // rbp
  __int64 *v195; // rax
  __int64 *v196; // rax
  __int64 v197; // rax
  __int64 v198; // rdi
  __int64 *v199; // rax
  __int64 *v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // r8
  __int64 v205; // r9
  __int64 v206; // r12
  __int64 v207; // rax
  _QWORD *v208; // rax
  __int64 v209; // rdx
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  __int64 v213; // r15
  __int64 v214; // rax
  _QWORD *v215; // rax
  unsigned __int64 *v216; // rax
  __int64 *v217; // rdx
  unsigned __int64 v218; // rcx
  unsigned __int64 v219; // rax
  __int64 *i; // rax
  __int64 v221; // rcx
  bool v222; // al
  __int64 *v223; // rax
  __int64 v224; // rcx
  __int64 v225; // rax
  __int64 v226; // r8
  __int64 v227; // r9
  __int64 v228; // rdi
  __int64 v231; // [rsp+8h] [rbp-1B0h]
  unsigned int v233; // [rsp+10h] [rbp-1A8h]
  __int64 v234; // [rsp+10h] [rbp-1A8h]
  __int64 *v235; // [rsp+18h] [rbp-1A0h]
  bool v236; // [rsp+18h] [rbp-1A0h]
  __int64 v237; // [rsp+20h] [rbp-198h]
  __int64 v238; // [rsp+28h] [rbp-190h]
  __int64 v239; // [rsp+28h] [rbp-190h]
  unsigned int v240; // [rsp+3Ch] [rbp-17Ch] BYREF
  __int64 v241; // [rsp+40h] [rbp-178h] BYREF
  unsigned __int64 v242; // [rsp+48h] [rbp-170h] BYREF
  __int64 v243; // [rsp+50h] [rbp-168h] BYREF
  __int64 v244; // [rsp+58h] [rbp-160h] BYREF
  char *v245; // [rsp+60h] [rbp-158h] BYREF
  char v246; // [rsp+68h] [rbp-150h]
  __int64 v247; // [rsp+70h] [rbp-148h] BYREF
  unsigned int v248; // [rsp+78h] [rbp-140h]
  __int64 v249; // [rsp+90h] [rbp-128h] BYREF
  char v250; // [rsp+98h] [rbp-120h]
  __int64 v251; // [rsp+9Ch] [rbp-11Ch]
  char v252; // [rsp+A4h] [rbp-114h]
  void *v253; // [rsp+A8h] [rbp-110h]
  __int64 v254; // [rsp+B0h] [rbp-108h]
  _BYTE v255[24]; // [rsp+B8h] [rbp-100h] BYREF
  __m128i v256; // [rsp+D0h] [rbp-E8h] BYREF
  __int64 v257; // [rsp+E0h] [rbp-D8h]
  __int64 v258; // [rsp+E8h] [rbp-D0h] BYREF
  unsigned __int8 *v259[7]; // [rsp+F0h] [rbp-C8h] BYREF
  __int128 v260; // [rsp+128h] [rbp-90h]
  __int64 v261; // [rsp+138h] [rbp-80h]
  __int64 v262; // [rsp+140h] [rbp-78h]
  __int64 v263; // [rsp+148h] [rbp-70h]
  unsigned int v264; // [rsp+150h] [rbp-68h]
  char v265; // [rsp+154h] [rbp-64h]
  __int64 v266; // [rsp+158h] [rbp-60h] BYREF
  __m128 v267; // [rsp+160h] [rbp-58h]
  __int64 v268; // [rsp+170h] [rbp-48h]

  v14 = *(_QWORD *)a4;
  sub_17B46E0((__int64)&v247, (__int64 *)a1, (__int64)a4, (__int64)a4, (__int64)a5, a6, a7);
  v241 = v247;
  v240 = v248;
  if ( !v248 )
    v240 = a4[22];
  v15 = sub_15AC3B0((__int64)a4);
  v17 = *(_QWORD *)(*(_QWORD *)a4 + 40LL);
  v18 = 8LL * *(unsigned int *)(*(_QWORD *)a4 + 48LL);
  v19 = v17 + v18;
  v20 = v18 >> 3;
  v21 = v18 >> 5;
  if ( v21 )
  {
    v22 = *(_QWORD *)v17;
    if ( (*(_BYTE *)(*(_QWORD *)v17 + 58LL) & 0x10) != 0 )
    {
      v23 = *(_QWORD *)(*(_QWORD *)a4 + 40LL);
    }
    else
    {
      v22 = *(_QWORD *)(v17 + 8);
      v23 = v17 + 8;
      if ( (*(_BYTE *)(v22 + 58) & 0x10) == 0 )
      {
        v22 = *(_QWORD *)(v17 + 16);
        v23 = v17 + 16;
        v24 = v17 + 32 * v21;
        if ( (*(_BYTE *)(v22 + 58) & 0x10) == 0 )
        {
          while ( 1 )
          {
            v22 = *(_QWORD *)(v17 + 24);
            if ( (*(_BYTE *)(v22 + 58) & 0x10) != 0 )
            {
              v23 = v17 + 24;
              goto LABEL_15;
            }
            v23 = v17 + 32;
            if ( v24 == v17 + 32 )
            {
              v20 = (v19 - v23) >> 3;
              goto LABEL_146;
            }
            v22 = *(_QWORD *)(v17 + 32);
            if ( (*(_BYTE *)(v22 + 58) & 0x10) != 0 )
              goto LABEL_15;
            v22 = *(_QWORD *)(v17 + 40);
            if ( (*(_BYTE *)(v22 + 58) & 0x10) != 0 )
            {
              v23 = v17 + 40;
              goto LABEL_15;
            }
            v22 = *(_QWORD *)(v17 + 48);
            if ( (*(_BYTE *)(v22 + 58) & 0x10) != 0 )
              break;
            v17 += 32;
          }
          v23 = v17 + 48;
        }
      }
    }
    goto LABEL_15;
  }
  v23 = *(_QWORD *)(*(_QWORD *)a4 + 40LL);
LABEL_146:
  if ( v20 != 2 )
  {
    if ( v20 != 3 )
    {
      if ( v20 != 1 )
      {
LABEL_149:
        v22 = 0;
        goto LABEL_17;
      }
      goto LABEL_161;
    }
    v22 = *(_QWORD *)v23;
    if ( (*(_BYTE *)(*(_QWORD *)v23 + 58LL) & 0x10) != 0 )
      goto LABEL_15;
    v23 += 8;
  }
  v22 = *(_QWORD *)v23;
  if ( (*(_BYTE *)(*(_QWORD *)v23 + 58LL) & 0x10) != 0 )
    goto LABEL_15;
  v23 += 8;
LABEL_161:
  v22 = *(_QWORD *)v23;
  if ( (*(_BYTE *)(*(_QWORD *)v23 + 58LL) & 0x10) == 0 )
    goto LABEL_149;
LABEL_15:
  if ( v19 == v23 )
    v22 = 0;
LABEL_17:
  v25 = *(_QWORD *)(a1 + 544);
  if ( !v25 )
    BUG();
  if ( *(_BYTE *)(v25 + 9) >> 5 != 1 )
  {
    LOBYTE(v26) = *(_BYTE *)v14 & 7;
    goto LABEL_20;
  }
  if ( v15 )
  {
    if ( a3 )
    {
      v115 = 1;
      v114 = (__int64 *)(a1 + 8);
      goto LABEL_136;
    }
    LOBYTE(v26) = *(_BYTE *)v14 & 7;
    if ( (_BYTE)v26 == 3 )
    {
      v115 = 2;
      v114 = (__int64 *)(a1 + 8);
      goto LABEL_136;
    }
    v17 = v241 & 7;
    if ( (_DWORD)v17 != 7 )
    {
      v17 = (unsigned int)(v17 - 3);
      if ( (unsigned int)v17 <= 3 )
      {
        v114 = (__int64 *)(a1 + 8);
        v115 = dword_2642F40[v17] - 1;
        if ( !byte_2642F30[v17] )
        {
          sub_168B9F0((__int64)&v256, v114, v240, 0x1Au, 0);
          LODWORD(v249) = v115;
          v116 = sub_16CF160((__int64)&v256, (unsigned int *)&v249);
          if ( *(_BYTE *)(v116 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v116 + 32), (__int64)&byte_22F0C30, 1u);
          }
          else if ( *(_BYTE *)(v116 + 132) )
          {
            sub_18510A0(v116, (__int64)&byte_22F0C30);
          }
          v47 = nullptr;
          sub_15F7200(&v256);
          return v47;
        }
LABEL_136:
        v47 = nullptr;
        sub_168B9F0((__int64)&v256, v114, v240, 0x1Au, 0);
        LODWORD(v249) = v115;
        v117 = sub_16CF160((__int64)&v256, (unsigned int *)&v249);
        sub_17B3DD0(v117, &v241);
        sub_15F7200(&v256);
        return v47;
      }
    }
  }
  else
  {
    LOBYTE(v26) = *(_BYTE *)v14 & 7;
    if ( !v22 && (_BYTE)v26 != 1 )
    {
      v115 = 0;
      v114 = (__int64 *)(a1 + 8);
      goto LABEL_136;
    }
  }
LABEL_20:
  if ( (_BYTE)v26 == 3 )
    goto LABEL_79;
  if ( (unsigned __int8)v26 <= 3u )
  {
    if ( (unsigned __int8)v26 > 1u )
    {
LABEL_88:
      v236 = v15;
      sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), *(_DWORD *)(v14 + 168), 0x13ACu, 0);
      sub_15F7200(&v256);
      v83 = *(_QWORD *)a4;
      v15 = v236;
      *(_BYTE *)v83 &= 0xC0u;
      *(_QWORD *)(v83 + 168) = 0;
      v26 = *(_BYTE *)v14 & 7;
      if ( (*(_BYTE *)v14 & 7) == 0 )
      {
LABEL_80:
        if ( v15 )
          goto LABEL_81;
        goto LABEL_24;
      }
LABEL_131:
      if ( v26 != 7 )
        goto LABEL_81;
      goto LABEL_80;
    }
LABEL_79:
    v26 = (unsigned __int8)v26;
    if ( !(_BYTE)v26 )
      goto LABEL_80;
    goto LABEL_131;
  }
  if ( (_BYTE)v26 != 7 )
    goto LABEL_88;
  if ( v15 )
  {
    sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), *(_DWORD *)(v14 + 168), 0x109Au, 0);
    sub_15F7200(&v256);
    v118 = *(_QWORD *)a4;
    *(_BYTE *)v118 &= 0xC0u;
    *(_QWORD *)(v118 + 168) = 0;
    goto LABEL_81;
  }
LABEL_24:
  if ( !a6 )
  {
    if ( (*(_BYTE *)(v14 + 4) & 0x30) == 0 )
      goto LABEL_32;
    sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), *(_DWORD *)(v14 + 272), 0xFB5u, 0);
    v27 = *(_DWORD *)(v14 + 272);
    if ( !a11 )
    {
      LODWORD(v245) = 0;
      v28 = sub_1587D10((__int64)&v256, (int *)&v245);
      LODWORD(v249) = 0;
      sub_1587D10(v28, (int *)&v249);
      if ( (*(_BYTE *)(*(_QWORD *)a4 + 3LL) & 4) != 0 )
      {
        v251 = 0;
        v253 = v255;
        v252 = 0;
        v254 = 0;
        v255[0] = 0;
        v255[16] = 0;
        LODWORD(v249) = v27;
        HIDWORD(v249) = v27;
        v250 = 1;
        sub_1589170((__int64)&v256, &v249);
        if ( v253 != v255 )
          operator delete(v253);
      }
      else
      {
        v29 = j__strlen("const");
        LODWORD(v245) = v27;
        HIDWORD(v245) = v27;
        v246 = 1;
        sub_1839360((__int64)&v249, (__int64)v245, 1, "const", v29);
        sub_1589170((__int64)&v256, &v249);
        if ( v253 != v255 )
          operator delete(v253);
        v30 = *(_QWORD *)a4;
        *(_BYTE *)(v30 + 4) &= 0xCFu;
        *(_DWORD *)(v30 + 272) = 0;
        sub_15AF3B0(*(_QWORD *)a4, 1, v27, &v249, (int *)&v244, *(_BYTE **)(a1 + 232));
      }
      sub_15F7200(&v256);
LABEL_32:
      if ( (v241 & 7) != 0 )
      {
        sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), v240, 0xCF1u, 0);
        sub_17B3DD0((__int64)&v256, &v241);
        sub_15F7200(&v256);
      }
      else
      {
        v31 = a4[14] == 7;
        v242 = v241 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v31 )
        {
          sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), a4[20], 0x103Eu, 0);
          v124 = sub_169D880((__int64)&v256, (__int64 *)&v242);
          v244 = *(_QWORD *)(*((_QWORD *)a4 + 8) + 36LL);
          v125 = sub_1587DB0(v124, &v244);
          v126 = *((_QWORD *)a4 + 8);
          v127 = v125;
          if ( *(_BYTE *)(v125 + 120) )
          {
            v192 = *(_DWORD *)(v126 + 36);
            v250 = 1;
            LODWORD(v249) = v192;
            HIDWORD(v249) = v192;
            sub_AEC610((__int64 *)(v127 + 32), &v249);
          }
          else if ( *(_BYTE *)(v125 + 132) )
          {
            v186 = sub_168B9E0((_QWORD *)v125);
            v189 = *(_QWORD *)(v127 + 16);
            if ( v189 )
            {
              v234 = v186;
              v189 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v189 + 32LL))(v189);
              v186 = v234;
            }
            v243 = v189;
            v190 = *sub_1587BC0(v186, &v243, v185, v186, v187, v188) + 32LL * *(unsigned int *)(v127 + 128);
            v191 = *(_DWORD *)(v126 + 36);
            v250 = 1;
            LODWORD(v249) = v191;
            HIDWORD(v249) = v191;
            sub_AEC610((__int64 *)(v190 + 8), &v249);
          }
          sub_15F7200(&v256);
          v128 = v240;
          v129 = v242;
          a4[14] = 0;
          *((_QWORD *)a4 + 8) = v129;
          a4[21] = v128;
          a4[20] = v128;
        }
        if ( *((_QWORD *)a4 + 2) )
        {
          v32 = sub_16A2930(a1, (__int64)(a4 + 2), 0, v17, v20, v16);
          if ( v32 )
          {
            v33 = nullptr;
            if ( a4[14] == 7 )
              v33 = *((int **)a4 + 8);
            sub_17CFA00(a1, (__int64)(a4 + 2), v32, v241, (unsigned int)a4[20], v33, 0);
          }
          else
          {
            sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), a4[20], 0x103Au, 0);
            v137 = sub_17B3DD0((__int64)&v256, &v241);
            v249 = *((_QWORD *)a4 + 1);
            sub_1587DB0(v137, &v249);
            sub_15F7200(&v256);
          }
          *((_QWORD *)a4 + 1) = 0;
          *((_QWORD *)a4 + 2) = 0;
          a4[8] = 0;
        }
        v34 = *(__m128i **)(a1 + 544);
        if ( v34 )
          v34 -= 4;
        if ( v22 )
        {
          if ( !a4[14] )
          {
            v35 = *((_QWORD *)a4 + 8);
            if ( v35 )
            {
              v233 = a4[20];
              v235 = (__int64 *)sub_1E85170(a1, a4);
              v237 = *v235;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
              {
                sub_186C8D0(a1, (__int64)a4, a7, v36, v37, v38, v39);
                if ( (unsigned __int8)sub_1E535C0(a1, (unsigned int)a4[20], v235, 3) )
                {
                  *((_BYTE *)a4 + 720) |= 1u;
                  v136 = *(_QWORD **)(a1 + 248);
                  v237 = v136[2340];
                  v235 = sub_A81910(v136, v237, v233);
                }
              }
              sub_17A3FF0(a1, *(_QWORD *)a4);
              v40 = *(_QWORD *)a4;
              if ( *(_BYTE *)(*(_QWORD *)a4 + 4LL) & 1 | (*(_BYTE *)(*(_QWORD *)a4 + 3LL) >> 7) )
              {
                if ( *(char *)(v40 + 3) < 0 )
                  v41 = *(_DWORD *)(v40 + 240);
                else
                  v41 = *(_DWORD *)(v40 + 260);
                sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), v41, 0xFA3u, 0);
                LODWORD(v249) = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) != 0;
                sub_1588370((__int64)&v256, (unsigned int *)&v249);
                sub_15F7200(&v256);
                v40 = *(_QWORD *)a4;
              }
              v42 = *(_BYTE *)v40 >> 3;
              if ( (v42 & 3) != 0 )
              {
                sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), *(_DWORD *)(v40 + 172), 0xFDFu, 0);
                v249 = (__int64)sub_15AC8E0(v42 & 3);
                sub_15AFC70((__int64)&v256, &v249);
                sub_15F7200(&v256);
              }
              v256.m128i_i64[0] = 0;
              v256.m128i_i64[1] = (__int64)&v258;
              v257 = 0x800000000LL;
              v260 = 0;
              v264 = v233;
              v261 = 0;
              v262 = a1;
              v263 = v35;
              sub_B85890(&v266, v35);
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23AA5C0);
              v268 = 65537;
              v267 = si128;
              sub_1A395A0(&v256);
              sub_1A49A10(a1, &v256, a2, 0, 0);
              if ( v256.m128i_i32[0] == 3 )
              {
                v130 = *(_QWORD *)v256.m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL;
              }
              else
              {
                if ( v256.m128i_i32[0] == 4 )
                  goto LABEL_171;
                v44 = 0;
                if ( v256.m128i_i32[0] != 2 )
                  goto LABEL_55;
                v130 = sub_16C47B0(*(_QWORD *)v256.m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL);
              }
              if ( v130 )
              {
                v131 = *(_BYTE *)(v130 + 28) & 0x7F;
                if ( ((v131 + 61) & 0x7Fu) <= 1 || v131 == 47 )
                {
                  sub_1CC2540(a1, (unsigned int)a4[20], v130, 0);
                  v44 = 0;
                }
                else
                {
                  m128i_i64 = (__int64)v34[4].m128i_i64;
                  if ( !v34 )
                    m128i_i64 = 0;
                  v239 = v130;
                  v133 = sub_17A3270(a1, v130, m128i_i64, a2, 0);
                  v44 = v239;
                  if ( !v133 )
                    goto LABEL_171;
                }
LABEL_55:
                v238 = v44;
                v45 = 0;
                v46 = (__int64 *)(16LL * ((*(_BYTE *)(v22 + 58) & 8) != 0)
                                + 104LL * ((*(_BYTE *)(v22 + 58) & 4) != 0)
                                + 80
                                + 8
                                * (*(unsigned __int16 *)(v22 + 56)
                                 + (unsigned __int64)((*(_BYTE *)(v22 + 58) & 0x20) != 0))
                                + v22);
                if ( v34 )
                  v45 = (__int64)v34[4].m128i_i64;
                v47 = (__m128i *)sub_B9B030(
                                   *(_QWORD **)(a1 + 248),
                                   v45,
                                   v233,
                                   v35,
                                   v237,
                                   (__int64)v235,
                                   a4[22],
                                   *v46,
                                   v46[1]);
                sub_1836CB0((__int64 *)a1, *(_QWORD *)(a1 + 192), v47, (__int64 *)a4, si128, a8);
                v50 = v47[1].m128i_i8[12] < 0;
                v47[1].m128i_i8[13] = (32 * (a3 & 3)) | v47[1].m128i_i8[13] & 0x9F;
                v51 = v238;
                if ( v50 )
                {
                  sub_B88650((__int64)v34, 1);
                  v51 = v238;
                  v49 = *(unsigned int *)(*(_QWORD *)a4 + 268LL);
                  if ( !(_DWORD)v49 )
                    goto LABEL_61;
                }
                else if ( !*(_DWORD *)(*(_QWORD *)a4 + 268LL) )
                {
LABEL_163:
                  sub_17B7670(a1, (__int64)v47, (__int64)a2, 1, v48, v49);
LABEL_63:
                  v53 = 0;
                  sub_169D230((__int64)&v256);
LABEL_64:
                  v55 = *(_QWORD *)(a1 + 544);
                  if ( v55 )
                    v55 -= 64;
                  sub_1868660(a1, &v240, v241, v55, 1, v54);
                  goto LABEL_67;
                }
                v52 = v47->m128i_i64[1];
                if ( (v52 & 7) != 0 )
                  v47->m128i_i64[1] = v52 & 0xFFFFFFFFFFFFFFF8LL | 4;
LABEL_61:
                if ( v47[1].m128i_i8[12] < 0 && v51 )
                  goto LABEL_63;
                goto LABEL_163;
              }
LABEL_171:
              v44 = 0;
              goto LABEL_55;
            }
          }
          sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), v240, 0xBB8u, 0);
          sub_15F7200(&v256);
        }
        else
        {
          v47 = (__m128i *)sub_17B8650((__int64 *)a1, a2, v34, v240, (__int64)a4, a9, a11, a3);
          if ( v47 )
          {
            v53 = 1;
            goto LABEL_64;
          }
        }
      }
      return nullptr;
    }
    LODWORD(v249) = 1;
    sub_1587D10((__int64)&v256, (int *)&v249);
    if ( (unsigned __int8)sub_15ACED0(*(char **)a4, a1, 3u, v27, &v245, (int *)&v243) )
    {
      LODWORD(v249) = 1;
      sub_1587D10((__int64)&v256, (int *)&v249);
      sub_15F7200(&v256);
      goto LABEL_32;
    }
    LODWORD(v244) = 0;
    v134 = sub_1587D10((__int64)&v256, (int *)&v244);
    v135 = j__strlen("static ");
    sub_9EC740((__int64)&v249, v27, "static ", v135, 0);
    sub_1589170(v134, &v249);
    if ( v253 != v255 )
      operator delete(v253);
    sub_15F7200(&v256);
  }
LABEL_81:
  v77 = sub_17FE280(a1, (__int64)a2, (__int64)a4, a5, a6, v16, a7, *(double *)a8.m128i_i64);
  v47 = (__m128i *)v77;
  if ( !v77 )
    return v47;
  if ( !a9 )
    goto LABEL_94;
  if ( *(char *)(v77 + 28) >= 0 )
  {
    v78 = (__int64 *)(a1 + 8);
    v79 = *(_BYTE *)(v77 + 28) & 0x7F;
    if ( (unsigned int)v79 - 40 <= 6 || v79 == 69 )
    {
      v84 = 5024;
    }
    else
    {
      if ( v79 != 64 )
      {
        sub_168B9F0((__int64)&v256, v78, v240, 0x10E9u, 0);
        v80 = sub_17B3DD0((__int64)&v256, &v241);
        v81 = (__int64 *)&v245;
        v245 = (char *)v47[3].m128i_i64[0];
        v82 = sub_162B6D0(v80, (__int64 *)&v245);
LABEL_92:
        v85 = v82;
        v249 = sub_EEC8C0((unsigned __int64)a9, (__int64)v81, a7);
        sub_1587DB0(v85, &v249);
        sub_15F7200(&v256);
        goto LABEL_93;
      }
      v84 = 5326;
    }
    sub_168B9F0((__int64)&v256, v78, v240, v84, 0);
    v81 = &v241;
    v82 = sub_17B3DD0((__int64)&v256, &v241);
    goto LABEL_92;
  }
LABEL_93:
  sub_B88650((__int64)v47, 1);
LABEL_94:
  v86 = v47[1].m128i_i8[12] & 0x7F;
  v87 = a3 & 3;
  if ( v86 == 71 || v86 == 69 )
  {
    v88 = 32 * v87;
    v89 = v47[3].m128i_i64[0];
    v47[1].m128i_i8[13] = v88 | v47[1].m128i_i8[13] & 0x9F;
    if ( v47 == (__m128i *)v89 )
    {
      v86 = v47[1].m128i_i8[12] & 0x7F;
    }
    else
    {
      v90 = *(_BYTE *)(v89 + 28);
      *(_BYTE *)(v89 + 29) = *(_BYTE *)(v89 + 29) & 0x9F | v88;
      v86 = v90 & 0x7F;
    }
  }
  else
  {
    v89 = (__int64)v47;
    v56 = v47[1].m128i_i8[13] & 0x9F;
    v47[1].m128i_i8[13] = v47[1].m128i_i8[13] & 0x9F | (32 * v87);
  }
  if ( v86 != 39 )
    goto LABEL_144;
  if ( (*(_DWORD *)(v89 + 40) & 7) != 7
    || (v91 = (unsigned int *)(*(_QWORD *)(v89 + 40) & 0xFFFFFFFFFFFFFFF8LL), v92 = *v91, (_DWORD)v92) )
  {
    BUG();
  }
  v93 = *((_QWORD *)v91 + 2);
  if ( ((*(_BYTE *)(v93 + 29) >> 5) & 3) == a3 )
    goto LABEL_144;
  v94 = (_QWORD *)(*(_QWORD *)(v93 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v93 + 16) & 4) != 0 )
    v94 = (_QWORD *)*v94;
  v95 = sub_B8EAA0((__int64)v94);
  v96 = *(_QWORD *)(v89 + 16);
  v97 = v95;
  v98 = (v96 & 4) != 0 ? *(_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF8LL) : v96 & 0xFFFFFFFFFFFFFFF8LL;
  v100 = sub_B8EAA0(v98);
  if ( v100 )
  {
    v101 = v97;
    v53 = 0;
    v231 = sub_B91570(v101, v92, v99, v56, v57, v58);
    if ( v231 == sub_B91570(v100, v92, v102, v103, v104, v105) )
    {
      v106 = sub_B73090(v89);
      sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), v106, 0xE28u, 0);
      sub_15F7200(&v256);
      v107 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
      sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), v107, 0x16F5u, 0);
      v108 = *(_BYTE *)(v93 + 29) >> 5;
      if ( (_BYTE)v263 )
      {
        sub_B9B310(v259, v108 & 3);
      }
      else if ( v265 )
      {
        v213 = sub_168B9E0(&v256);
        v214 = v257;
        if ( v257 )
          v214 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v257 + 32LL))(v257);
        v249 = v214;
        v215 = sub_1587BC0(v213, &v249, v209, v210, v211, v212);
        sub_B9B310((unsigned __int8 **)(*v215 + 32LL * v264 + 8), v108 & 3);
      }
      sub_15F7200(&v256);
      v109 = *(_QWORD *)(a1 + 544);
      if ( v109 )
        v109 -= 64;
      v110 = sub_B8E970(v109 + 64);
      if ( !v110 )
        BUG();
      v111 = nullptr;
      do
      {
        if ( (*(_BYTE *)(v110 + 28) & 0x7F) == 0x59 )
          v111 = (_DWORD *)v110;
        v110 = *(_QWORD *)(v110 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      }
      while ( v110 );
      v112 = *(__int64 (**)(void))(*(_QWORD *)v111 + 16LL);
      if ( (char *)v112 == (char *)sub_B94BC0 )
        v113 = v111[6];
      else
        v113 = v112();
      sub_168B9F0((__int64)&v256, (__int64 *)(a1 + 8), v113, 0x16F4u, 0);
      if ( (_BYTE)v263 )
      {
        sub_B9B310(v259, a3);
      }
      else if ( v265 )
      {
        v206 = sub_168B9E0(&v256);
        v207 = v257;
        if ( v257 )
          v207 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v257 + 32LL))(v257);
        v249 = v207;
        v208 = sub_1587BC0(v206, &v249, v202, v203, v204, v205);
        sub_B9B310((unsigned __int8 **)(*v208 + 32LL * v264 + 8), a3);
      }
      v53 = 0;
      sub_15F7200(&v256);
    }
  }
  else
  {
LABEL_144:
    v53 = 0;
  }
LABEL_67:
  v59 = *a10;
  if ( (*a10 & 1) != 0 )
  {
    v119 = sub_B319D0(*(_QWORD *)(a1 + 248), ((unsigned __int64)a10[2] << 32) | a10[2]);
    sub_B8CC60((__int64)v47, v119, v120, v121, v122, v123);
    v59 = *a10;
  }
  if ( (v59 & 0xE) != 0 )
  {
    v60 = sub_B30AE0(*(_QWORD *)(a1 + 248), ((unsigned __int64)a10[3] << 32) | a10[3], (v59 >> 2) & 1);
    sub_B8CC60((__int64)v47, v60, v61, v62, v63, v64);
  }
  v65 = a10[6];
  if ( (_DWORD)v65 && (v47[1].m128i_i8[12] & 0x7Fu) - 35 <= 3 )
    v47[8].m128i_i32[3] = v65;
  sub_1877EB0(a1, (__int64)v47, v65, v56, v57, v58);
  if ( !v53 )
    return v47;
  v68 = *(_QWORD *)(a1 + 3920);
  v69 = *(unsigned int *)(v68 + 8);
  if ( v69 + 1 > (unsigned __int64)*(unsigned int *)(v68 + 12) )
  {
    sub_2237220(*(_QWORD *)(a1 + 3920), v68 + 16, v69 + 1, 8);
    v69 = *(unsigned int *)(v68 + 8);
  }
  *(_QWORD *)(*(_QWORD *)v68 + 8 * v69) = v47;
  v70 = *(unsigned int *)(v68 + 280);
  v71 = *(_QWORD *)(v68 + 272);
  ++*(_DWORD *)(v68 + 8);
  ++*(_QWORD *)(v71 + 8 * v70 - 8);
  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1D6Bu,
                          v47[1].m128i_u32[2],
                          *(_QWORD *)(a1 + 264),
                          v66,
                          v67) == 1
    || (((unsigned __int8)v47[1].m128i_i8[13] >> 5) & 3) != 2
    || !v47[2].m128i_i64[1] )
  {
    return v47;
  }
  v138 = (__int64 *)(v47[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL);
  v139 = sub_F631C0(*v138, 7531, v72, v73, v74, v75);
  if ( v139 )
  {
    if ( (*((_BYTE *)v139 + 29) & 1) == 0 )
      goto LABEL_185;
    v195 = sub_B8C3D0((__int64)v139, 7531, v140, v141, v142, v143);
    v140 = *v195;
    v141 = *v195 + 8LL * *((unsigned int *)v195 + 2);
    if ( *v195 < v141 )
    {
      v196 = (__int64 *)*v195;
      while ( 1 )
      {
        v140 = *v196;
        if ( *(_WORD *)(*v196 + 36) == 397 )
          goto LABEL_233;
        if ( (__int64 *)v141 == ++v196 )
          goto LABEL_185;
      }
    }
    if ( v140 == v141 )
      goto LABEL_185;
    if ( *(_WORD *)(*(_QWORD *)v141 + 36LL) == 397 )
      goto LABEL_199;
    v200 = (__int64 *)(v141 + 8);
    while ( 1 )
    {
      v141 = (unsigned __int64)v200;
      if ( (__int64 *)v140 == v200 )
        break;
      v201 = *v200++;
      if ( *(_WORD *)(v201 + 36) == 397 )
        goto LABEL_199;
    }
  }
  else
  {
    v197 = sub_F6AC00(*v138);
    if ( v197 )
    {
      v198 = *(_QWORD *)(v197 + 32);
      if ( (*(_BYTE *)(v198 + 29) & 1) != 0 )
      {
        v199 = sub_B8C3D0(v198, 7531, v140, v141, v142, v143);
        v140 = *v199;
        v141 = *v199 + 8LL * *((unsigned int *)v199 + 2);
        if ( *v199 < v141 )
        {
          v196 = (__int64 *)*v199;
          while ( 1 )
          {
            v140 = *v196;
            if ( *(_WORD *)(*v196 + 36) == 397 )
              break;
            if ( (__int64 *)v141 == ++v196 )
              goto LABEL_185;
          }
LABEL_233:
          if ( (__int64 *)v141 == v196 )
            goto LABEL_185;
LABEL_199:
          v174 = *(unsigned int *)(a1 + 3936);
          v249 = (__int64)v47;
          if ( (_DWORD)v174 )
          {
            sub_187F1D0(&v256, a1 + 3928, (__int64)&v249, v174, v142, v143);
            if ( (_BYTE)v257 )
            {
              v193 = *(unsigned int *)(a1 + 3960);
              v194 = v249;
              if ( v193 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 3964) )
              {
                sub_2237220(a1 + 3952, a1 + 3968, v193 + 1, 8);
                v193 = *(unsigned int *)(a1 + 3960);
              }
              *(_QWORD *)(*(_QWORD *)(a1 + 3952) + 8 * v193) = v194;
              ++*(_DWORD *)(a1 + 3960);
            }
          }
          else
          {
            v175 = (__m128i **)sub_18382E0(
                                 *(_QWORD **)(a1 + 3952),
                                 *(_QWORD *)(a1 + 3952) + 8LL * *(unsigned int *)(a1 + 3960),
                                 &v249);
            if ( v178 == v175 )
            {
              if ( v179 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 3964) )
              {
                sub_2237220(a1 + 3952, a1 + 3968, v179 + 1, 8);
                v178 = (__m128i **)(*(_QWORD *)(a1 + 3952) + 8LL * *(unsigned int *)(a1 + 3960));
              }
              *v178 = v47;
              v180 = (unsigned int)(*(_DWORD *)(a1 + 3960) + 1);
              *(_DWORD *)(a1 + 3960) = v180;
              if ( (unsigned int)v180 > 0x10 )
              {
                v181 = *(_QWORD *)(a1 + 3952);
                v182 = a1 + 3928;
                v183 = v181 + 8 * v180;
                do
                {
                  v184 = v181;
                  v181 += 8;
                  sub_187F1D0(&v256, v182, v184, v176, v177, (__int64)v178);
                }
                while ( v183 != v181 );
              }
            }
          }
          return v47;
        }
        if ( v140 == v141 )
          goto LABEL_185;
        if ( *(_WORD *)(*(_QWORD *)v141 + 36LL) == 397 )
          goto LABEL_199;
        v223 = (__int64 *)(v141 + 8);
        while ( 1 )
        {
          v141 = (unsigned __int64)v223;
          if ( (__int64 *)v140 == v223 )
            break;
          v224 = *v223++;
          if ( *(_WORD *)(v224 + 36) == 397 )
            goto LABEL_199;
        }
      }
    }
  }
LABEL_185:
  v144 = v47[1].m128i_i8[13];
  if ( (v144 & 2) != 0 )
    return v47;
  if ( (v144 & 1) != 0 )
  {
    v216 = sub_B8C3D0((__int64)v47, 7531, v140, v141, v142, v143);
    v217 = (__int64 *)*v216;
    v218 = *v216 + 8LL * *((unsigned int *)v216 + 2);
    if ( *v216 >= v218 )
    {
      if ( v217 != (__int64 *)v218 )
      {
        if ( *(_WORD *)(*(_QWORD *)v218 + 36LL) == 389 )
          return v47;
        for ( i = (__int64 *)(v218 + 8); v217 != i; ++i )
        {
          v221 = *i;
          if ( *(_WORD *)(v221 + 36) == 389 )
            return v47;
        }
      }
    }
    else
    {
      v219 = *v216;
      while ( *(_WORD *)(*(_QWORD *)v219 + 36LL) != 389 )
      {
        v219 += 8LL;
        if ( v218 == v219 )
          goto LABEL_187;
      }
      if ( v218 != v219 )
        return v47;
    }
  }
LABEL_187:
  v145 = v47[1].m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v47[1].m128i_i64[0] & 4) != 0 )
    v145 = *(_QWORD *)v145;
  v146 = v145 - 64;
  if ( (*(_BYTE *)(v145 + 8) & 0x7Fu) - 58 >= 4 )
    v146 = 0;
  if ( !(unsigned __int8)sub_B8E180(v146 + 64) )
  {
    v151 = sub_F631C0(*v138, 7531, v147, v148, v149, v150);
    if ( v151 )
    {
      if ( (*((_BYTE *)v151 + 29) & 1) == 0 )
        goto LABEL_194;
      v222 = sub_1838060((__int64)v151, 7531, v152, v153, v154, v155);
    }
    else
    {
      v225 = sub_F6AC00(*v138);
      if ( !v225 )
        goto LABEL_194;
      v228 = *(_QWORD *)(v225 + 32);
      if ( (*(_BYTE *)(v228 + 29) & 1) == 0 )
        goto LABEL_194;
      v222 = sub_1838060(v228, 7531, v152, v153, v226, v227);
    }
    if ( v222 )
      return v47;
LABEL_194:
    v156 = sub_ED7E80(*(_QWORD *)(v47[3].m128i_i64[0] & 0xFFFFFFFFFFFFFFF0LL), 7531, v152, v153);
    v161 = sub_F63270(v156, 7531, v157, v158, v159, v160);
    v164 = (__int64)v161;
    if ( v161 )
    {
      if ( (*((_BYTE *)v161 + 74) & 1) == 0 )
        return v47;
      v165 = v161[13];
      sub_7052B0((__int64 *)(v165 + 96), v165, v162, v163, v142, v143);
      if ( (*(_BYTE *)(*(_QWORD *)(v164 + 128) + 9LL) & 1) == 0
        && !(unsigned __int8)sub_B9BFC0(v164, v165, v166, v167, v168, v169) )
      {
        return v47;
      }
      sub_7052B0((__int64 *)(*(_QWORD *)(v164 + 104) + 96LL), *(_QWORD *)(v164 + 104), v166, v167, v168, v169);
      if ( *(char *)(*(_QWORD *)(v164 + 128) + 4LL) >= 0 )
        return v47;
      sub_7052B0((__int64 *)(*(_QWORD *)(v164 + 104) + 96LL), *(_QWORD *)(v164 + 104), v170, v171, v172, v173);
      if ( (*(_BYTE *)(*(_QWORD *)(v164 + 128) + 5LL) & 0x10) == 0 )
        return v47;
    }
    goto LABEL_199;
  }
  return v47;
}
