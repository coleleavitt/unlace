__int64 __fastcall sub_159D3D0(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // ax
  __int64 v7; // rbp
  unsigned int v8; // r13d
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // r14
  __int16 v19; // ax
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r15
  _WORD *v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rdx
  bool v32; // r15
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int8 v37; // al
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // rax
  unsigned __int64 *v46; // rax
  unsigned __int64 *v47; // rdx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rdi
  __int64 v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r12
  unsigned int v55; // r14d
  __int64 v56; // rdx
  __int64 v57; // rcx
  unsigned __int64 i; // rdx
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  __int64 v61; // r9
  unsigned int v62; // ebp
  __int64 v63; // r15
  unsigned __int64 v64; // r13
  unsigned __int64 v65; // rax
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rax
  __m128i *v68; // rdi
  const __m128i *v69; // rcx
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r14
  unsigned __int64 v78; // r14
  __int64 v79; // rdx
  unsigned __int16 *v80; // rax
  __int64 v81; // rdx
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r9
  __int64 v85; // r14
  __int64 v86; // rax
  unsigned __int64 v87; // rax
  __int64 v88; // r11
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // r14
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  char v98; // al
  int v99; // eax
  unsigned __int64 v100; // rdx
  unsigned __int64 v101; // rsi
  const __m128i *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // rcx
  unsigned __int64 v107; // rax
  __int64 v108; // rax
  const __m128i *v109; // r14
  __m128i *v110; // rax
  __int64 v111; // rax
  unsigned __int64 v112; // r14
  unsigned __int64 v113; // rsi
  unsigned int v114; // eax
  unsigned __int64 v115; // r14
  bool v116; // cf
  __int64 v117; // rax
  unsigned __int64 *v118; // rax
  unsigned __int64 *v119; // rax
  unsigned __int64 *v120; // rax
  unsigned __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rdi
  char *v125; // rax
  unsigned __int64 v126; // rsi
  unsigned __int64 v127; // rax
  __int64 v128; // rax
  unsigned __int64 *v129; // rax
  __int64 *v130; // rax
  __int64 v131; // rcx
  __int64 v132; // r12
  unsigned __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 v135; // rdx
  unsigned __int64 v136; // rax
  unsigned __int64 *v137; // rax
  __int64 *v138; // rdi
  __int64 v139; // rdx
  __int64 v140; // rsi
  unsigned __int64 v141; // r15
  __int64 v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rax
  unsigned __int64 v145; // rax
  unsigned int *v146; // r15
  unsigned __int64 v147; // r14
  void *v148; // r14
  __int8 v149; // al
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 *v152; // r14
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  char v158; // al
  char *v159; // r15
  bool v160; // zf
  __int64 v161; // rax
  int v162; // edx
  int v163; // edx
  unsigned __int64 v164; // rsi
  unsigned __int64 v165; // rdx
  const __m128i *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rdx
  unsigned __int64 v169; // rax
  __int64 v170; // rdx
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 *v173; // rdx
  __int64 v174; // rdx
  __int64 *v175; // rax
  __int64 v176; // rdx
  __int64 *v177; // rax
  __int64 *v178; // rax
  __int64 v179; // rdx
  __int64 *v180; // rax
  __int64 *v181; // rax
  __int64 *v182; // rax
  _QWORD *v183; // r14
  __int64 v184; // rdx
  __int64 *v185; // rax
  __int64 v186; // rdx
  __int64 *v187; // rax
  unsigned __int64 *v188; // rax
  unsigned __int64 v189; // rdx
  unsigned __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rax
  __int64 v194; // rdx
  __int64 v195; // rax
  unsigned __int64 v196; // rax
  unsigned int *v197; // rax
  const char *v198; // r14
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 *v201; // r14
  __int64 v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // r9
  char v207; // al
  int v208; // eax
  unsigned __int64 v209; // rsi
  __int64 v210; // rcx
  __int64 v211; // r8
  __int64 v212; // r9
  unsigned __int64 v213; // r15
  __int64 v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rdx
  int v217; // esi
  int v218; // esi
  __int64 v219; // r15
  __int64 v220; // rsi
  char *v221; // r14
  unsigned __int64 v222; // rdi
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // rax
  __int64 v227; // rdx
  __int64 v228; // rdx
  unsigned __int64 *v229; // rax
  __int64 v230; // rax
  __int64 v231; // rdx
  __int64 v232; // rax
  unsigned __int64 v233; // rax
  int v234; // r15d
  __int64 v235; // rax
  __int64 v236; // rdx
  unsigned __int64 v237; // rax
  unsigned __int64 *v238; // rax
  unsigned __int64 v239; // rdx
  unsigned __int64 v240; // rax
  unsigned __int64 *v241; // rax
  unsigned __int64 *v242; // rax
  unsigned __int64 v243; // rdx
  unsigned __int64 v244; // rax
  int v245; // eax
  int v246; // eax
  __int64 v247; // rax
  __int64 v248; // rdx
  __int64 v249; // rax
  unsigned __int64 v250; // rax
  unsigned int *v251; // rdi
  unsigned __int64 v252; // rax
  void *v253; // rdi
  __int64 v254; // rsi
  int v255; // eax
  unsigned __int64 *v256; // rax
  __int64 *v257; // rax
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // rcx
  char *v261; // rax
  __int64 v262; // rax
  char **v263; // rax
  __int64 v264; // rax
  unsigned int *v265; // rdi
  unsigned __int64 v266; // rax
  void *v267; // rdi
  __int64 v268; // rax
  __int64 v269; // rdx
  __int64 v270; // rdi
  __int64 v271; // r9
  unsigned __int64 *v272; // rax
  unsigned __int64 v273; // rdx
  unsigned __int64 v274; // rax
  __int64 v275; // rax
  __int64 v276; // rdx
  int v277; // eax
  void *s1; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int64 *v279; // [rsp+8h] [rbp-B0h]
  __int64 v280; // [rsp+10h] [rbp-A8h]
  __int64 v281; // [rsp+18h] [rbp-A0h] BYREF
  unsigned __int16 *v282; // [rsp+20h] [rbp-98h]
  __int64 v283; // [rsp+28h] [rbp-90h]
  __int64 v284; // [rsp+30h] [rbp-88h]
  __int64 v285; // [rsp+38h] [rbp-80h]
  char *v286; // [rsp+40h] [rbp-78h]
  bool v287; // [rsp+4Ah] [rbp-6Eh]
  bool v288; // [rsp+4Bh] [rbp-6Dh]
  unsigned int v289; // [rsp+4Ch] [rbp-6Ch]
  char v290; // [rsp+5Fh] [rbp-59h] BYREF
  void *v291; // [rsp+60h] [rbp-58h] BYREF
  __m128 v292; // [rsp+68h] [rbp-50h]

  v5 = *a2;
  v282 = a2;
  LOWORD(s1) = v5;
  v6 = v5 & 0x1FF;
  v284 = a3;
  v283 = a4;
  if ( v6 <= 0x58u )
  {
    v7 = *((_QWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 8);
    goto LABEL_3;
  }
  if ( v6 > 0x5Du )
  {
    v7 = *((_QWORD *)a2 + 2);
    v8 = *((_DWORD *)a2 + 8);
    if ( v6 == 114 )
    {
      result = (__int64)(a2 + 24);
      v279 = (unsigned __int64 *)(a2 + 24);
LABEL_4:
      if ( !v7 )
        return result;
      goto LABEL_5;
    }
LABEL_3:
    result = (__int64)(v282 + 20);
    v279 = (unsigned __int64 *)(v282 + 20);
    goto LABEL_4;
  }
  v103 = sub_BFBC70(*((_QWORD *)a2 + 4));
  v7 = v103;
  if ( v103 && (*(_BYTE *)(v103 + 28) & 0x7Fu) - 34 >= 6 )
    v7 = 0;
  v8 = *((_DWORD *)v282 + 4);
  LOBYTE(s1) = *((_BYTE *)v282 + 2);
  result = (__int64)&v282[4 * (((unsigned __int8)s1 & 8) != 0) + 20];
  v279 = (unsigned __int64 *)result;
  if ( !v7 )
    return result;
LABEL_5:
  v10 = sub_B8C330(v7);
  v11 = sub_A62AC0(v10);
  v12 = 6791;
  v18 = sub_FD3830(*(_QWORD *)(v11 + 32), 0x1A87u, 0, v11, v13, v14);
  v288 = v18 != 1;
  LOWORD(s1) = *v282;
  v19 = (unsigned __int16)s1 & 0x1FF;
  if ( ((unsigned __int16)s1 & 0x1FF) == 0x5B )
  {
    if ( (unsigned __int8)sub_B72F20(v7) )
    {
      --v8;
      v20 = *v279++;
      goto LABEL_8;
    }
    LOWORD(s1) = *v282;
    v19 = (unsigned __int16)s1 & 0x1FF;
  }
  v20 = 0;
  if ( v19 == 92 )
    v20 = sub_C94680((__int64)v282);
LABEL_8:
  v21 = *(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v22 = (unsigned int)*(unsigned __int8 *)(v21 + 16) - 25;
  if ( (unsigned int)v22 > 1 )
    v21 = sub_F63050(v21, 6791, v22, v15);
  v23 = sub_F63240(*(_QWORD *)(*(_QWORD *)(v21 + 24) & 0xFFFFFFFFFFFFFFF0LL), 6791, v22, v15, v16, v17);
  v28 = (__int64)v23;
  if ( !v23 || (*((_BYTE *)v23 + 29) & 1) == 0 )
    goto LABEL_12;
  v175 = sub_B8C3D0((__int64)v23, 6791, v24, v25, v26, v27);
  v176 = *v175;
  v25 = *v175 + 8LL * *((unsigned int *)v175 + 2);
  if ( *v175 >= v25 )
  {
    if ( v176 == v25 )
      goto LABEL_12;
    while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 191 )
    {
      v25 += 8LL;
      if ( v176 == v25 )
        goto LABEL_12;
    }
  }
  else
  {
    v177 = (__int64 *)*v175;
    while ( 1 )
    {
      v176 = *v177;
      if ( *(_WORD *)(*v177 + 36) == 191 )
        break;
      if ( (__int64 *)v25 == ++v177 )
        goto LABEL_12;
    }
    if ( (__int64 *)v25 == v177 )
      goto LABEL_12;
  }
  if ( (*(_BYTE *)(v28 + 29) & 1) == 0 )
  {
LABEL_12:
    v287 = 0;
    goto LABEL_13;
  }
  v178 = sub_B8C3D0(v28, 6791, v176, v25, v26, v27);
  v179 = *v178;
  v25 = *v178 + 8LL * *((unsigned int *)v178 + 2);
  if ( *v178 >= v25 )
  {
    if ( v179 != v25 )
    {
      if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 193 )
      {
        v229 = (unsigned __int64 *)(v25 + 8);
        while ( 1 )
        {
          v25 = (unsigned __int64)v229;
          if ( (unsigned __int64 *)v179 == v229 )
            goto LABEL_12;
          v25 = *v229++;
          if ( *(_WORD *)(v25 + 36) == 193 )
            goto LABEL_241;
        }
      }
      goto LABEL_241;
    }
    goto LABEL_12;
  }
  v180 = (__int64 *)*v178;
  while ( 1 )
  {
    v179 = *v180;
    if ( *(_WORD *)(*v180 + 36) == 193 )
      break;
    if ( (__int64 *)v25 == ++v180 )
      goto LABEL_12;
  }
  if ( (__int64 *)v25 == v180 )
    goto LABEL_12;
LABEL_241:
  if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
  {
LABEL_242:
    v287 = 1;
    goto LABEL_13;
  }
  v242 = sub_B8C3D0(v7, 6791, v179, v25, v26, v27);
  v25 = *v242;
  v243 = *v242 + 8LL * *((unsigned int *)v242 + 2);
  if ( *v242 >= v243 )
  {
    if ( v25 == v243 )
      goto LABEL_242;
    if ( *(_WORD *)(*(_QWORD *)v243 + 36LL) != 190 )
    {
      v263 = (char **)(v243 + 8);
      do
      {
        v243 = (unsigned __int64)v263;
        if ( (char **)v25 == v263 )
          goto LABEL_242;
        v12 = (__int64)*v263++;
      }
      while ( *(_WORD *)(*(_QWORD *)v243 + 36LL) != 190 );
    }
  }
  else
  {
    v244 = *v242;
    while ( 1 )
    {
      v12 = *(_QWORD *)v244;
      v25 = v244;
      if ( *(_WORD *)(*(_QWORD *)v244 + 36LL) == 190 )
        break;
      v244 += 8LL;
      if ( v243 == v244 )
        goto LABEL_242;
    }
  }
  v287 = v25 == v243;
LABEL_13:
  if ( !v20 )
    goto LABEL_38;
  v29 = (_WORD *)sub_BFB900(v20);
  v32 = ((*v29 & 0x1FF) != 0x33 || (v30 = sub_C95130((__int64)v29), v30 != v31)) && v287;
  if ( !(unsigned __int8)sub_17A5E20(v7) )
  {
    if ( !sub_159D190(v7, v12, v33, v34, v35, v36) && !v32 )
      goto LABEL_19;
LABEL_94:
    v104 = *(unsigned int *)(a1 + 8);
    s1 = (void *)v7;
    v105 = v104 + 1;
    LODWORD(v291) = 4;
    v106 = 24 * v104;
    v107 = *(unsigned int *)(a1 + 12);
    v292 = _mm_loadh_ps((const double *)&s1);
    if ( v105 > v107 )
    {
      v219 = *(_QWORD *)a1;
      v109 = (const __m128i *)&v291;
      v220 = a1 + 16;
      if ( *(_QWORD *)a1 > (unsigned __int64)&v291 || (unsigned __int64)&v291 >= v219 + v106 )
      {
        sub_2237220(a1, v220, v105, 24);
        v108 = *(_QWORD *)a1;
        v106 = 24LL * *(unsigned int *)(a1 + 8);
      }
      else
      {
        sub_2237220(a1, v220, v105, 24);
        v108 = *(_QWORD *)a1;
        v109 = (const __m128i *)((char *)&v291 + *(_QWORD *)a1 - v219);
        v106 = 24LL * *(unsigned int *)(a1 + 8);
      }
    }
    else
    {
      v108 = *(_QWORD *)a1;
      v109 = (const __m128i *)&v291;
    }
    v110 = (__m128i *)(v106 + v108);
    *v110 = _mm_loadu_si128(v109);
    v110[1].m128i_i64[0] = v109[1].m128i_i64[0];
    ++*(_DWORD *)(a1 + 8);
    if ( (*(_BYTE *)(v20 + 1) & 6) != 0 )
    {
LABEL_215:
      v12 = v20;
      sub_15A0640(a1, v20, 0, v284, v283);
      goto LABEL_98;
    }
LABEL_97:
    v12 = v20;
    sub_159F540(a1, v20, v284, v283, 1);
LABEL_98:
    --*(_DWORD *)(a1 + 8);
    goto LABEL_38;
  }
  if ( sub_159D190(v7, v12, v33, v34, v35, v36) )
    goto LABEL_94;
LABEL_19:
  if ( v18 != 1 )
  {
    v37 = *(_BYTE *)(v7 + 28) & 0x7F;
    if ( (unsigned int)v37 - 35 <= 3 )
    {
      if ( v37 == 37 )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        v39 = (unsigned int)*(unsigned __int8 *)(v38 + 16) - 25;
        if ( (unsigned int)v39 > 1 )
          v38 = sub_F63050(v38, v12, v39, v25);
        if ( (unsigned __int8)sub_1598920(*(_QWORD *)(v38 + 24), v12, v39, v25, v26, v27) )
        {
          v40 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
          if ( (v40 & 4) != 0 )
            v45 = *(_QWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
          else
            v45 = v40 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v45 )
            BUG();
          if ( (*(_BYTE *)(v45 - 35) & 1) != 0 )
          {
            v46 = sub_B8C3D0(v45 - 64, v12, v41, v42, v43, v44);
            v47 = (unsigned __int64 *)*v46;
            v25 = *v46 + 8LL * *((unsigned int *)v46 + 2);
            if ( *v46 >= v25 )
            {
              if ( v47 != (unsigned __int64 *)v25 )
              {
                if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 323 )
                  goto LABEL_205;
                v256 = (unsigned __int64 *)(v25 + 8);
                while ( v47 != v256 )
                {
                  v25 = *v256++;
                  if ( *(_WORD *)(v25 + 36) == 323 )
                    goto LABEL_205;
                }
              }
            }
            else
            {
              v48 = *v46;
              while ( *(_WORD *)(*(_QWORD *)v48 + 36LL) != 323 )
              {
                v48 += 8LL;
                if ( v25 == v48 )
                  goto LABEL_33;
              }
              if ( v25 != v48 )
                goto LABEL_205;
            }
          }
        }
      }
LABEL_33:
      v49 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
      v50 = (_QWORD *)(v49 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v49 & 4) != 0 )
        v50 = (_QWORD *)*v50;
      if ( v50 )
        v50 -= 8;
      if ( sub_1598700((__int64)v50) )
      {
        v213 = sub_B987D0((_QWORD *)v7, v12);
        v214 = *(_QWORD *)(v213 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v214 + 16) - 43 <= 1
          || (v215 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v214 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 43,
              (unsigned int)v215 <= 1)
          && (v214 = sub_F63050(v214, v12, v215, v210)) != 0 )
        {
          while ( 1 )
          {
            v215 = *(_QWORD *)(v214 + 32);
            if ( (*(_BYTE *)(v214 + 18) & 0x10) == 0 )
              break;
            v214 = *(_QWORD *)(v215 & 0xFFFFFFFFFFFFFFF0LL);
            v216 = (unsigned int)*(unsigned __int8 *)(v214 + 16) - 43;
            if ( (unsigned int)v216 > 1 )
              v214 = sub_F63050(v214, v12, v216, v210);
          }
          v213 = *(_QWORD *)(v214 + 32);
        }
        if ( (unsigned __int8)sub_1598920(v213, v12, v215, v210, v211, v212) )
          goto LABEL_187;
        v141 = sub_B987D0((_QWORD *)v7, v12);
        v226 = *(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v226 + 16) - 43 <= 1
          || (v227 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v226 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 43,
              (unsigned int)v227 <= 1)
          && (v226 = sub_F63050(v226, v12, v227, v223)) != 0 )
        {
          while ( 1 )
          {
            v227 = *(_QWORD *)(v226 + 32);
            if ( (*(_BYTE *)(v226 + 18) & 0x10) == 0 )
              break;
            v226 = *(_QWORD *)(v227 & 0xFFFFFFFFFFFFFFF0LL);
            v228 = (unsigned int)*(unsigned __int8 *)(v226 + 16) - 43;
            if ( (unsigned int)v228 > 1 )
              v226 = sub_F63050(v226, v12, v228, v223);
          }
          v141 = *(_QWORD *)(v226 + 32);
        }
        if ( (unsigned __int8)sub_1598A90(v141, v12, v227, v223, v224, v225) )
        {
LABEL_187:
          v142 = *(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL);
          v143 = (unsigned int)*(unsigned __int8 *)(v142 + 16) - 25;
          if ( (unsigned int)v143 > 1 )
            v142 = sub_F63050(v142, v12, v143, v25);
          if ( sub_1598E70(*(_QWORD *)(v142 + 24), v12, v143, v25, v26, v27) )
          {
            v144 = *(_QWORD *)(v7 + 40);
            if ( (v144 & 7) == 0 )
            {
              v145 = v144 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v145 )
              {
                v146 = *(unsigned int **)(v145 + 16);
                v147 = *v146;
                v25 = (unsigned __int64)(v146 + 4);
                v292.m128_i8[9] = 0;
                v291 = v146 + 4;
                v292.m128_u64[0] = v147;
                switch ( v147 )
                {
                  case 5uLL:
                    if ( v146[4] == 1768383842 && *((_BYTE *)v146 + 20) == 110 )
                      goto LABEL_400;
                    break;
                  case 6uLL:
                    v12 = (__int64)"rbegin";
                    s1 = v146 + 4;
                    v245 = memcmp(v146 + 4, "rbegin", 6u);
                    v25 = (unsigned __int64)(v146 + 4);
                    if ( !v245 )
                      goto LABEL_400;
                    v12 = (__int64)"cbegin";
                    v246 = memcmp(s1, "cbegin", 6u);
                    v25 = (unsigned __int64)s1;
                    if ( !v246 )
                      goto LABEL_400;
                    break;
                  case 7uLL:
                    v12 = (__int64)"crbegin";
                    s1 = v146 + 4;
                    v277 = memcmp(v146 + 4, "crbegin", 7u);
                    v25 = (unsigned __int64)(v146 + 4);
                    if ( !v277 )
                      v292.m128_i16[4] = 257;
                    break;
                }
                if ( v292.m128_i8[9] )
                  goto LABEL_197;
                switch ( v147 )
                {
                  case 3uLL:
                    if ( *((_WORD *)v146 + 8) == 28261 && *(_BYTE *)(v25 + 2) == 100 )
                      goto LABEL_496;
                    break;
                  case 4uLL:
                    if ( v146[4] == 1684956530 )
                    {
LABEL_496:
                      v292.m128_i16[4] = 257;
                      v290 = 1;
                      goto LABEL_198;
                    }
                    if ( v146[4] == 1684956515 )
                    {
                      v292.m128_i16[4] = 257;
                      v290 = 1;
                      goto LABEL_198;
                    }
                    break;
                  case 5uLL:
                    v12 = (__int64)"crend";
                    s1 = (void *)v25;
                    v255 = memcmp((const void *)v25, "crend", 5u);
                    v25 = (unsigned __int64)s1;
                    if ( !v255 )
LABEL_400:
                      v292.m128_i16[4] = 257;
                    break;
                }
LABEL_197:
                v290 = 1;
                if ( !v292.m128_i8[9] )
                {
                  if ( v147 == 5 )
                  {
                    if ( v146[4] != 1953718115 || *(_BYTE *)(v25 + 4) != 114 )
                      goto LABEL_198;
                  }
                  else if ( v147 != 4 || v146[4] != 1635017060 )
                  {
                    goto LABEL_198;
                  }
                  v292.m128_i16[4] = 257;
                  goto LABEL_199;
                }
LABEL_198:
                v12 = (__int64)&v290;
                sub_B7E0A0((__int64)&v291, &v290, "get", 3);
LABEL_199:
                if ( v292.m128_i8[9] )
                {
LABEL_202:
                  if ( !v292.m128_i8[9] )
                    goto LABEL_38;
                  v149 = v292.m128_i8[8];
                  goto LABEL_204;
                }
                v148 = v291;
                if ( v292.m128_u64[0] == 4 )
                {
                  if ( *(_DWORD *)v291 != 1684957542 )
                    goto LABEL_202;
                }
                else
                {
                  if ( v292.m128_u64[0] != 11 )
                    goto LABEL_202;
                  v12 = (__int64)"equal_range";
                  if ( memcmp(v291, "equal_range", 0xBu) )
                  {
                    v12 = (__int64)"lower_bound";
                    if ( memcmp(v148, "lower_bound", 0xBu) )
                    {
                      v12 = (__int64)"upper_bound";
                      if ( memcmp(v148, "upper_bound", 0xBu) )
                        goto LABEL_202;
                    }
                  }
                }
LABEL_435:
                v292.m128_i16[4] = 257;
                goto LABEL_202;
              }
            }
          }
          else
          {
            v230 = *(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL);
            v231 = (unsigned int)*(unsigned __int8 *)(v230 + 16) - 25;
            if ( (unsigned int)v231 > 1 )
              v230 = sub_F63050(v230, v12, v231, v25);
            if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v230 + 24)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
                                 - 43) <= 1u )
            {
              v232 = *(_QWORD *)(v7 + 40);
              if ( (v232 & 7) == 0 )
              {
                v233 = v232 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v233 )
                {
                  v265 = *(unsigned int **)(v233 + 16);
                  v266 = *v265;
                  v267 = v265 + 4;
                  v292.m128_i8[9] = 0;
                  v291 = v267;
                  v292.m128_u64[0] = v266;
                  v290 = 1;
                  if ( v266 != 5 || (v12 = (__int64)"front", memcmp(v267, "front", 5u)) )
                  {
                    v12 = (__int64)&v290;
                    if ( !(unsigned __int8)sub_B7E0A0((__int64)&v291, &v290, "back", 4) )
                    {
                      v12 = (__int64)&v290;
                      if ( !(unsigned __int8)sub_B7E0A0((__int64)&v291, &v290, "at", 2) )
                      {
                        v12 = (__int64)&v290;
                        if ( !(unsigned __int8)sub_B7E0A0((__int64)&v291, &v290, "top", 3) )
                        {
                          v12 = (__int64)&v290;
                          sub_B7E0A0((__int64)&v291, &v290, "value", 5);
                        }
                      }
                    }
                    goto LABEL_202;
                  }
                  goto LABEL_435;
                }
              }
              v234 = sub_B77890(v7);
              v235 = *(_QWORD *)(sub_B8C1B0(v7 + 72) + 16);
              if ( (v235 & 4) != 0 )
                v237 = *(_QWORD *)(v235 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v237 = v235 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v237 )
                BUG();
              if ( (*(_BYTE *)(v237 - 35) & 1) != 0 )
              {
                v238 = sub_B8C3D0(v237 - 64, v12, v236, v25, v26, v27);
                v239 = *v238;
                v25 = *v238 + 8LL * *((unsigned int *)v238 + 2);
                if ( *v238 >= v25 )
                {
                  if ( v239 == v25 )
                    goto LABEL_38;
                  while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 323 )
                  {
                    v25 += 8LL;
                    if ( v239 == v25 )
                      goto LABEL_38;
                  }
                }
                else
                {
                  v240 = *v238;
                  while ( *(_WORD *)(*(_QWORD *)v240 + 36LL) != 323 )
                  {
                    v240 += 8LL;
                    if ( v25 == v240 )
                      goto LABEL_38;
                  }
                  if ( v25 == v240 )
                    goto LABEL_38;
                }
                v149 = v234 == 7 || v234 == 43;
LABEL_204:
                if ( !v149 )
                  goto LABEL_38;
LABEL_205:
                v150 = *(_QWORD *)(*(_QWORD *)(v7 + 48) & 0xFFFFFFFFFFFFFFF0LL);
                v151 = (unsigned int)*(unsigned __int8 *)(v150 + 16) - 25;
                if ( (unsigned int)v151 > 1 )
                  v150 = sub_F63050(v150, v12, v151, v25);
                v152 = (__int64 *)(*(_QWORD *)(v150 + 24) & 0xFFFFFFFFFFFFFFF0LL);
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v152 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 43 > 1 )
                {
                  v161 = *(unsigned int *)(a1 + 8);
                  v159 = *(char **)a1;
                  v25 = *(_QWORD *)a1 + 24 * v161;
                  v163 = 9;
                }
                else
                {
                  v153 = sub_F68450(*v152, v12, v151, v25, v26);
                  v158 = sub_1598A90(v153, v12, v154, v155, v156, v157);
                  v159 = *(char **)a1;
                  v160 = v158 == 0;
                  v161 = *(unsigned int *)(a1 + 8);
                  v25 = *(_QWORD *)a1 + 24 * v161;
                  if ( v160 && v159 != (char *)v25 )
                  {
                    v162 = *(_DWORD *)(v25 - 24);
                    v12 = (v162 - 4) & 0xFFFFFFFB;
                    if ( ((v162 - 4) & 0xFFFFFFFB) != 0 )
                    {
LABEL_211:
                      if ( (unsigned int)(v162 - 9) <= 1 )
                        goto LABEL_38;
                    }
                    else
                    {
                      v12 = *(_QWORD *)a1 + 24 * v161;
                      while ( 1 )
                      {
                        v12 -= 24;
                        if ( v159 == (char *)v12 )
                          break;
                        v162 = *(_DWORD *)(v12 - 24);
                        if ( ((v162 - 4) & 0xFFFFFFFB) != 0 )
                          goto LABEL_211;
                      }
                    }
                  }
                  v163 = 9
                       - ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v152 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                           + 16LL)
                        - 43 < 2);
                }
                s1 = (void *)v7;
                v164 = *(unsigned int *)(a1 + 12);
                LODWORD(v291) = v163;
                v165 = v161 + 1;
                v166 = (const __m128i *)&v291;
                v292 = _mm_loadh_ps((const double *)&s1);
                if ( v165 > v164 )
                {
                  v254 = a1 + 16;
                  if ( v159 > (char *)&v291 || (s1 = &v291, v25 <= (unsigned __int64)&v291) )
                  {
                    sub_2237220(a1, v254, v165, 24);
                    v25 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
                    v166 = (const __m128i *)&v291;
                  }
                  else
                  {
                    sub_2237220(a1, v254, v165, 24);
                    v166 = (const __m128i *)(*(_QWORD *)a1 + (_BYTE *)s1 - v159);
                    v25 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
                  }
                }
                *(__m128i *)v25 = _mm_loadu_si128(v166);
                *(_QWORD *)(v25 + 16) = v166[1].m128i_i64[0];
                ++*(_DWORD *)(a1 + 8);
                if ( (*(_BYTE *)(v20 + 1) & 6) != 0 )
                  goto LABEL_215;
                goto LABEL_97;
              }
            }
          }
        }
      }
    }
  }
LABEL_38:
  v51 = *(_QWORD *)(v7 + 112);
  v52 = *(_QWORD *)(v51 + 104);
  v53 = v52 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v52 & 1) == 0 )
  {
    v25 = v52 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (v52 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v54 = v52 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v52 & 2) == 0 )
        goto LABEL_41;
      v132 = *(_QWORD *)(v25 + 18360);
      v133 = v51 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v132 )
      {
        v134 = *(_QWORD *)(v25 + 2352);
        *(_QWORD *)(v25 + 2432) += 24LL;
        v135 = (v134 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        v12 = v135 + 24;
        if ( *(_QWORD *)(v25 + 2360) >= v135 + 24 && v134 )
        {
          *(_QWORD *)(v25 + 2352) = v12;
          v136 = (v134 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v12 = 24;
          v136 = sub_986170(v25 + 2352, 24, 24, 3, v26, v27);
          v135 = v136 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v136 = v132;
        v133 = v135 | 4;
        *(_DWORD *)(v136 + 8) = 0;
        *(_QWORD *)(v136 + 16) = v51;
      }
      v53 = v133 & 0xFFFFFFFFFFFFFFFELL;
      v52 = v53 | 1;
      *(_QWORD *)(v51 + 104) = v53 | 1;
    }
  }
  v137 = (unsigned __int64 *)(v52 & 0xFFFFFFFFFFFFFFF8LL);
  v54 = (unsigned __int64)v137;
  if ( v53 )
  {
    v53 &= 4u;
    if ( (_DWORD)v53 )
    {
      v54 = 0;
      if ( v137 )
      {
        v138 = (__int64 *)*v137;
        v53 = *(unsigned int *)(*v137 + 12);
        if ( *((_DWORD *)v137 + 2) != (_DWORD)v53 )
        {
          *((_DWORD *)v137 + 2) = v53;
          v139 = *v138;
          v12 = v51;
          s1 = v137;
          (*(void (__fastcall **)(__int64 *, __int64))(v139 + 152))(v138, v51);
          v137 = (unsigned __int64 *)s1;
        }
        v54 = v137[2];
      }
    }
  }
LABEL_41:
  v55 = sub_B76070(v54, v12, v53, v25);
  result = sub_B76070(v7, v12, v56, v57);
  if ( v55 > (unsigned int)result )
    v55 = result;
  if ( v55 > v8 )
    v55 = v8;
  if ( v55 )
  {
    v62 = *(_DWORD *)(a1 + 8);
    v280 = v55 - 1;
    v63 = 0;
    s1 = &v291;
    v285 = v284;
    while ( 1 )
    {
      v64 = v279[v63];
      if ( (*(_WORD *)v64 & 0x1FF) == 0x70 )
      {
        v65 = *(_QWORD *)(v64 + 16);
        v12 = *(unsigned int *)(a1 + 12);
        v292.m128_u64[0] = v279[v63];
        v66 = v62 + 1LL;
        LODWORD(v291) = 11;
        v292.m128_u64[1] = v65;
        v67 = *(_QWORD *)a1;
        v68 = (__m128i *)(*(_QWORD *)a1 + 24LL * v62);
        v69 = (const __m128i *)s1;
        if ( v66 > v12 )
        {
          v12 = a1 + 16;
          v281 = *(_QWORD *)a1;
          if ( v67 > (unsigned __int64)s1 || v68 <= s1 )
          {
            sub_2237220(a1, v12, v66, 24);
            v69 = (const __m128i *)s1;
            v68 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
          }
          else
          {
            sub_2237220(a1, v12, v66, 24);
            v69 = (const __m128i *)((char *)s1 + *(_QWORD *)a1 - v281);
            v68 = (__m128i *)(*(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8));
          }
        }
        *v68 = _mm_loadu_si128(v69);
        v68[1].m128i_i64[0] = v69[1].m128i_i64[0];
        ++*(_DWORD *)(a1 + 8);
        v64 = sub_C94C80(v64);
      }
      v70 = *(_QWORD *)(*(_QWORD *)(v54 + 120) + 8 * v63);
      if ( v287 )
        goto LABEL_100;
      if ( (*(_BYTE *)(v70 + 29) & 1) != 0 )
      {
        v118 = sub_B8C3D0(v70, v12, i, v59, v60, v61);
        i = *v118;
        v59 = *v118 + 8LL * *((unsigned int *)v118 + 2);
        if ( *v118 < v59 )
        {
          v119 = (unsigned __int64 *)*v118;
          while ( 1 )
          {
            i = *v119;
            if ( *(_WORD *)(*v119 + 36) == 67 )
              break;
            if ( (unsigned __int64 *)v59 == ++v119 )
            {
              v70 = *(_QWORD *)(*(_QWORD *)(v54 + 120) + 8 * v63);
              goto LABEL_122;
            }
          }
          i = *(_QWORD *)(v54 + 120);
          v70 = *(_QWORD *)(i + 8 * v63);
          if ( (unsigned __int64 *)v59 == v119 )
            goto LABEL_122;
LABEL_100:
          v111 = *(unsigned int *)(a1 + 8);
          v112 = *(_QWORD *)a1;
          v281 = v64;
          v113 = *(unsigned int *)(a1 + 12);
          v281 = v70;
          v100 = v111 + 1;
          LODWORD(v291) = 4;
          v59 = v112 + 24 * v111;
          v102 = (const __m128i *)s1;
          v292 = _mm_loadh_ps((const double *)&v281);
          if ( v100 <= v113 )
            goto LABEL_101;
          v140 = a1 + 16;
          if ( v112 > (unsigned __int64)s1 || v59 <= (unsigned __int64)s1 )
            goto LABEL_322;
LABEL_182:
          sub_2237220(a1, v140, v100, 24);
          v102 = (const __m128i *)((char *)s1 + *(_QWORD *)a1 - v112);
          v59 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
          goto LABEL_101;
        }
        v70 = *(_QWORD *)(*(_QWORD *)(v54 + 120) + 8 * v63);
        if ( i != v59 )
        {
          if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) == 67 )
            goto LABEL_100;
          v130 = (__int64 *)(v59 + 8);
          while ( 1 )
          {
            v59 = (unsigned __int64)v130;
            if ( (__int64 *)i == v130 )
              break;
            v131 = *v130++;
            if ( *(_WORD *)(v131 + 36) == 67 )
              goto LABEL_100;
          }
        }
LABEL_122:
        if ( (*(_BYTE *)(v70 + 29) & 1) != 0 )
          break;
      }
LABEL_52:
      if ( (_DWORD)v63 || !v288 )
        goto LABEL_114;
      v71 = *(_QWORD *)(v54 + 40);
      if ( (v71 & 7) != 0 )
        goto LABEL_57;
      if ( (v71 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_57;
      if ( (unsigned int)sub_B76070(v54, v12, i, v59) != 1 )
        goto LABEL_57;
      v183 = sub_F67D30(
               *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v54 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
               v12,
               v72,
               v59,
               v60,
               v61);
      if ( !sub_B8EC80(v54) )
        goto LABEL_57;
      if ( !v183 )
        goto LABEL_57;
      if ( !sub_B8EC80((__int64)v183) )
        goto LABEL_57;
      v160 = (*((_BYTE *)v183 + 29) & 1) == 0;
      LOBYTE(v281) = *((_BYTE *)v183 + 29) & 1;
      if ( v160 )
        goto LABEL_57;
      v185 = sub_B8C3D0((__int64)v183, v12, v184, v59, v60, v61);
      v186 = *v185;
      v59 = *v185 + 8LL * *((unsigned int *)v185 + 2);
      if ( *v185 >= v59 )
      {
        if ( v186 != v59 )
        {
          if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) == 328 )
            goto LABEL_268;
          v241 = (unsigned __int64 *)(v59 + 8);
          while ( 1 )
          {
            v59 = (unsigned __int64)v241;
            if ( (unsigned __int64 *)v186 == v241 )
              break;
            v59 = *v241++;
            if ( *(_WORD *)(v59 + 36) == 328 )
              goto LABEL_268;
          }
        }
      }
      else
      {
        v187 = (__int64 *)*v185;
        while ( 1 )
        {
          v186 = *v187;
          if ( *(_WORD *)(*v187 + 36) == 328 )
            break;
          if ( (__int64 *)v59 == ++v187 )
            goto LABEL_262;
        }
        if ( (__int64 *)v59 != v187 )
          goto LABEL_268;
      }
LABEL_262:
      if ( (*((_BYTE *)v183 + 29) & 1) == 0 )
        goto LABEL_57;
      v188 = sub_B8C3D0((__int64)v183, v12, v186, v59, v60, v61);
      v189 = *v188;
      v59 = *v188 + 8LL * *((unsigned int *)v188 + 2);
      if ( *v188 >= v59 )
      {
        if ( v189 == v59 )
          goto LABEL_57;
        while ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 323 )
        {
          v59 += 8LL;
          if ( v189 == v59 )
            goto LABEL_57;
        }
      }
      else
      {
        v190 = *v188;
        while ( *(_WORD *)(*(_QWORD *)v190 + 36LL) != 323 )
        {
          v190 += 8LL;
          if ( v59 == v190 )
            goto LABEL_57;
        }
        if ( v59 == v190 )
          goto LABEL_57;
      }
LABEL_268:
      v191 = *(_QWORD *)(*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v192 = (unsigned int)*(unsigned __int8 *)(v191 + 16) - 25;
      if ( (unsigned int)v192 > 1 )
        v191 = sub_F63050(v191, v12, v192, v59);
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v191 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 42 )
        goto LABEL_274;
      v193 = *(_QWORD *)(*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v194 = (unsigned int)*(unsigned __int8 *)(v193 + 16) - 25;
      if ( (unsigned int)v194 > 1 )
        v193 = sub_F63050(v193, v12, v194, v59);
      if ( (unsigned __int8)sub_1598920(*(_QWORD *)(v193 + 24), v12, v194, v59, v60, v61) )
      {
LABEL_274:
        v195 = *(_QWORD *)(v54 + 40);
        if ( (v195 & 7) != 0 || (v196 = v195 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v286 = nullptr;
          v198 = &byte_22F0C30;
          goto LABEL_279;
        }
        v197 = *(unsigned int **)(v196 + 16);
        v12 = *v197;
        v198 = (const char *)(v197 + 4);
        v286 = (char *)v12;
        if ( v12 == 5 )
        {
          if ( v197[4] == 1768383842 && *((_BYTE *)v197 + 20) == 110 )
            goto LABEL_283;
LABEL_278:
          v12 = (__int64)"crend";
          if ( !memcmp(v197 + 4, "crend", 5u) )
            goto LABEL_283;
          goto LABEL_279;
        }
        if ( v286 == &byte_6 )
        {
          v12 = (__int64)"rbegin";
          if ( !memcmp(v197 + 4, "rbegin", 6u) )
            goto LABEL_283;
          v12 = (__int64)"cbegin";
          if ( !memcmp(v198, "cbegin", 6u) )
            goto LABEL_283;
          goto LABEL_279;
        }
        if ( v286 == &byte_7 )
        {
          v12 = (__int64)"crbegin";
          if ( memcmp(v197 + 4, "crbegin", 7u) )
            goto LABEL_279;
        }
        else
        {
          if ( v286 == (_BYTE *)&dword_0 + 3 )
          {
            if ( *((_WORD *)v197 + 8) == 28261 && *((_BYTE *)v197 + 18) == 100 )
              goto LABEL_283;
          }
          else if ( v286 == &byte_4 )
          {
            if ( v197[4] == 1684956530 || v197[4] == 1684956515 )
              goto LABEL_283;
          }
          else if ( v286 == &byte_5 )
          {
            goto LABEL_278;
          }
LABEL_279:
          LOBYTE(v281) = 0;
        }
        if ( v286 == &byte_4 )
        {
          if ( (_BYTE)v281 || *(_DWORD *)v198 == 1635017060 )
            goto LABEL_283;
        }
        else if ( (_BYTE)v281 )
        {
          goto LABEL_283;
        }
        goto LABEL_57;
      }
      v247 = *(_QWORD *)(*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v248 = (unsigned int)*(unsigned __int8 *)(v247 + 16) - 25;
      if ( (unsigned int)v248 > 1 )
        v247 = sub_F63050(v247, v12, v248, v59);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v247 + 24) & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 43) <= 1u )
      {
        v249 = *(_QWORD *)(v54 + 40);
        if ( (v249 & 7) == 0 )
        {
          v250 = v249 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v250 )
          {
            v251 = *(unsigned int **)(v250 + 16);
            v252 = *v251;
            v253 = v251 + 4;
            v292.m128_i8[9] = 0;
            v291 = v253;
            v292.m128_u64[0] = v252;
            v290 = 1;
            if ( v252 == 3 && (v12 = (__int64)"get", !memcmp(v253, "get", 3u)) )
            {
              v292.m128_i16[4] = 257;
            }
            else
            {
LABEL_408:
              v12 = (__int64)&v290;
              sub_B7E0A0((__int64)s1, &v290, "any_cast", 8);
            }
            if ( v292.m128_i8[9] && v292.m128_i8[8] )
            {
LABEL_283:
              v199 = *(_QWORD *)(*(_QWORD *)(v54 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              v200 = (unsigned int)*(unsigned __int8 *)(v199 + 16) - 25;
              if ( (unsigned int)v200 > 1 )
                v199 = sub_F63050(v199, v12, v200, v59);
              v201 = (__int64 *)(*(_QWORD *)(v199 + 24) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v201 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                 - 43 > 1 )
              {
                i = *(unsigned int *)(a1 + 8);
                v60 = *(_QWORD *)a1;
                v59 = *(_QWORD *)a1 + 24 * i;
                v208 = 9;
              }
              else
              {
                v202 = sub_F68450(*v201, v12, v200, v59, v60);
                v207 = sub_1598A90(v202, v12, v203, v204, v205, v206);
                v60 = *(_QWORD *)a1;
                i = *(unsigned int *)(a1 + 8);
                if ( v207 )
                {
                  v59 = v60 + 24 * i;
                  goto LABEL_288;
                }
                v114 = *(_DWORD *)(a1 + 8);
                v59 = v60 + 24 * i;
                if ( v60 != v59 )
                {
                  v218 = *(_DWORD *)(v59 - 24);
                  if ( ((v218 - 4) & 0xFFFFFFFB) != 0 )
                  {
LABEL_317:
                    v12 = (unsigned int)(v218 - 9);
                    if ( (unsigned int)v12 <= 1 )
                      goto LABEL_104;
                  }
                  else
                  {
                    v222 = v60 + 24 * i;
                    while ( 1 )
                    {
                      v222 -= 24LL;
                      if ( v60 == v222 )
                        break;
                      v218 = *(_DWORD *)(v222 - 24);
                      v61 = (v218 - 4) & 0xFFFFFFFB;
                      if ( ((v218 - 4) & 0xFFFFFFFB) != 0 )
                        goto LABEL_317;
                    }
                  }
                }
LABEL_288:
                v208 = 9
                     - ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v201 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                         + 16LL)
                      - 43 < 2);
              }
              v100 = i + 1;
              v281 = v54;
              v209 = *(unsigned int *)(a1 + 12);
              LODWORD(v291) = v208;
              v102 = (const __m128i *)s1;
              v292 = _mm_loadh_ps((const double *)&v281);
              if ( v100 <= v209 )
              {
LABEL_101:
                *(__m128i *)v59 = _mm_loadu_si128(v102);
                *(_QWORD *)(v59 + 16) = v102[1].m128i_i64[0];
                ++*(_DWORD *)(a1 + 8);
                v12 = v64;
                if ( (*(_BYTE *)(v64 + 1) & 6) != 0 )
                  sub_15A0640(a1, v64, 0, v285, v283);
                else
                  sub_159F540(a1, v64, v284, v283, 1);
                i = (unsigned int)(*(_DWORD *)(a1 + 8) - 1);
                *(_DWORD *)(a1 + 8) = i;
                v114 = i;
LABEL_104:
                v115 = v62;
                v116 = v62 < i;
                if ( v62 == i )
                  goto LABEL_115;
                goto LABEL_105;
              }
              v140 = a1 + 16;
              v221 = (char *)s1;
              v281 = v60;
              if ( v60 <= (unsigned __int64)s1 && v59 > (unsigned __int64)s1 )
              {
LABEL_355:
                sub_2237220(a1, v140, v100, 24);
                v102 = (const __m128i *)&v221[*(_QWORD *)a1 - v281];
                v59 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
                goto LABEL_101;
              }
LABEL_322:
              sub_2237220(a1, v140, v100, 24);
              v59 = *(_QWORD *)a1 + 24LL * *(unsigned int *)(a1 + 8);
              v102 = (const __m128i *)s1;
              goto LABEL_101;
            }
            goto LABEL_57;
          }
        }
        v292.m128_i8[9] = 0;
        v291 = (void *)&byte_22F0C30;
        v292.m128_u64[0] = 0;
        v290 = 1;
        goto LABEL_408;
      }
LABEL_57:
      if ( (*v282 & 0x1FFu) - 113 <= 1 )
      {
        v73 = *((_QWORD *)v282 + 2) + 72LL;
        v281 = *((_QWORD *)v282 + 2);
        v77 = *(_QWORD *)(sub_B8C1B0(v73) + 16);
        if ( (v77 & 4) != 0 )
          v78 = *(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v78 = v77 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v78 )
          BUG();
        if ( (*(_BYTE *)(v78 - 35) & 1) != 0 )
        {
          v181 = sub_B8C3D0(v78 - 64, v12, v74, v59, v75, v76);
          v74 = *v181;
          v59 = *v181 + 8LL * *((unsigned int *)v181 + 2);
          if ( *v181 >= v59 )
          {
            if ( v74 != v59 )
            {
              while ( *(_WORD *)(*(_QWORD *)v59 + 36LL) != 328 )
              {
                v59 += 8LL;
                if ( v74 == v59 )
                  goto LABEL_62;
              }
LABEL_76:
              v88 = *((_QWORD *)v282 + 2);
              v89 = *(_QWORD *)(*(_QWORD *)(v88 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              v90 = (unsigned int)*(unsigned __int8 *)(v89 + 16) - 25;
              if ( (unsigned int)v90 > 1 )
              {
                v281 = *((_QWORD *)v282 + 2);
                v89 = sub_F63050(v89, v12, v90, v59);
                v88 = v281;
              }
              v91 = *(_QWORD *)(v89 + 24) & 0xFFFFFFFFFFFFFFF0LL;
              v92 = *(_QWORD *)v91;
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v91 + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 43 > 1 )
              {
                i = *(unsigned int *)(a1 + 8);
                v60 = *(_QWORD *)a1;
                v59 = *(_QWORD *)a1 + 24 * i;
                v99 = 9;
              }
              else
              {
                v281 = v88;
                v93 = sub_F68450(v92, v12, v90, v59, v60);
                v98 = sub_1598A90(v93, v12, v94, v95, v96, v97);
                v60 = *(_QWORD *)a1;
                i = *(unsigned int *)(a1 + 8);
                v88 = v281;
                if ( v98 )
                {
                  v59 = v60 + 24 * i;
                }
                else
                {
                  v114 = *(_DWORD *)(a1 + 8);
                  v59 = v60 + 24 * i;
                  if ( v60 != v59 )
                  {
                    v217 = *(_DWORD *)(v59 - 24);
                    if ( ((v217 - 4) & 0xFFFFFFFB) != 0 )
                    {
LABEL_312:
                      v12 = (unsigned int)(v217 - 9);
                      if ( (unsigned int)v12 <= 1 )
                        goto LABEL_104;
                    }
                    else
                    {
                      v61 = v60 + 24 * i;
                      while ( 1 )
                      {
                        v61 -= 24;
                        if ( v60 == v61 )
                          break;
                        v217 = *(_DWORD *)(v61 - 24);
                        if ( ((v217 - 4) & 0xFFFFFFFB) != 0 )
                          goto LABEL_312;
                      }
                    }
                  }
                }
                v99 = 9
                    - ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v91 + 8LL)
                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 16LL)
                     - 43 < 2);
              }
              v100 = i + 1;
              v281 = v88;
              v101 = *(unsigned int *)(a1 + 12);
              LODWORD(v291) = v99;
              v102 = (const __m128i *)s1;
              v292 = _mm_loadh_ps((const double *)&v281);
              if ( v100 <= v101 )
                goto LABEL_101;
              v140 = a1 + 16;
              v221 = (char *)s1;
              v281 = v60;
              if ( v60 <= (unsigned __int64)s1 && v59 > (unsigned __int64)s1 )
                goto LABEL_355;
              goto LABEL_322;
            }
          }
          else
          {
            v182 = (__int64 *)*v181;
            while ( 1 )
            {
              v74 = *v182;
              if ( *(_WORD *)(*v182 + 36) == 328 )
                break;
              if ( (__int64 *)v59 == ++v182 )
                goto LABEL_62;
            }
            if ( (__int64 *)v59 != v182 )
              goto LABEL_76;
          }
        }
LABEL_62:
        if ( (unsigned int)sub_B76070(*((_QWORD *)v282 + 2), v12, v74, v59)
          && (unsigned __int8)sub_1598D60(v78 - 64, v12, v79, v59, v60, v61) )
        {
          v12 = *v282;
          v80 = v282 + 20;
          v81 = v12;
          if ( (v12 & 0x1FF) == 0x72 )
            v80 = v282 + 24;
          v281 = *(_QWORD *)(*(_QWORD *)v80 + 8LL);
          LOWORD(v81) = v12 & 0x1FF;
          v82 = sub_F63240(*(_QWORD *)(v281 & 0xFFFFFFFFFFFFFFF0LL), v12, v81, (__int64)(v282 + 24), v60, v61);
          v85 = (__int64)v82;
          if ( v82 )
          {
            if ( (*((_BYTE *)v82 + 28) & 0x7Fu) - 60 <= 1 )
            {
              v286 = (char *)v82[21];
              if ( sub_1598700((__int64)v82) )
              {
                v86 = *(_QWORD *)(v85 + 40);
                if ( (v86 & 7) == 0 )
                {
                  v87 = v86 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v87 )
                  {
                    v59 = *(_QWORD *)(v87 + 16);
                    if ( *(_DWORD *)v59 == 16 )
                    {
                      v12 = *(_QWORD *)(v59 + 16) ^ 0x696C616974696E69LL;
                      if ( !(v12 | *(_QWORD *)(v59 + 24) ^ 0x7473696C5F72657ALL) )
                      {
                        v59 = *(unsigned int *)v286;
                        if ( (_DWORD)v59 )
                        {
                          v289 = *((_DWORD *)v286 + 2);
                          if ( (v289 & 0x7FFFFFFF) == 1 && sub_1598E70(*((_QWORD *)v286 + 2), v12, v83, v59, v60, v84) )
                            goto LABEL_76;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ( (unsigned __int8)sub_1598A90(v281, v12, v83, v59, v60, v84)
            && !(unsigned __int8)sub_1598D60(v85, v12, v167, v59, v60, v61) )
          {
            if ( !v85 || (*(_BYTE *)(v85 + 28) & 0x7Fu) - 60 > 1 || (*(_BYTE *)(v85 + 29) & 1) == 0 )
            {
LABEL_222:
              v169 = sub_B77AF0(*((_QWORD *)v282 + 2));
              if ( !v169 )
                goto LABEL_76;
              v171 = *(_QWORD *)(v169 + 48);
              if ( !v171 )
                goto LABEL_76;
              if ( (*(_BYTE *)(v171 + 28) & 0x7F) != 0x26 )
                goto LABEL_76;
              if ( (unsigned int)sub_B76070(v171, v12, v170, v59) != 1 )
                goto LABEL_76;
              v172 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v171 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (unsigned int)*(unsigned __int8 *)(v172 + 16) - 43 > 1 )
              {
                v276 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v172 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                        + 16LL)
                     - 43;
                if ( (unsigned int)v276 > 1 )
                  goto LABEL_76;
                v172 = sub_F63050(
                         *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v171 + 120) + 48LL) & 0xFFFFFFFFFFFFFFF0LL),
                         v12,
                         v276,
                         v59);
                if ( !v172 )
                  goto LABEL_76;
              }
              while ( 1 )
              {
                v173 = (__int64 *)(*(_QWORD *)(v172 + 32) & 0xFFFFFFFFFFFFFFF0LL);
                if ( (*(_BYTE *)(v172 + 18) & 0x10) == 0 )
                  break;
                v172 = *v173;
                v174 = (unsigned int)*(unsigned __int8 *)(*v173 + 16) - 43;
                if ( (unsigned int)v174 > 1 )
                  v172 = sub_F63050(v172, v12, v174, v59);
              }
              v268 = sub_F6A860(*v173);
              if ( !v268 )
                goto LABEL_76;
              v12 = 0;
              v291 = *(void **)(v268 + 32);
              v270 = *(_QWORD *)(sub_F22BD0((__int64 *)s1, 0) + 48);
              if ( (*(_BYTE *)(v270 + 29) & 1) == 0 )
                goto LABEL_76;
              v272 = sub_B8C3D0(v270, 0, v269, v59, v60, v271);
              v273 = *v272;
              v59 = *v272 + 8LL * *((unsigned int *)v272 + 2);
              if ( *v272 >= v59 )
              {
                while ( v59 != v273 )
                {
                  v275 = *(_QWORD *)v59;
                  v59 += 8LL;
                  if ( *(_WORD *)(v275 + 36) == 323 )
                    goto LABEL_114;
                }
                goto LABEL_76;
              }
              v274 = *v272;
              while ( *(_WORD *)(*(_QWORD *)v274 + 36LL) != 323 )
              {
                v274 += 8LL;
                if ( v59 == v274 )
                  goto LABEL_76;
              }
              if ( v59 == v274 )
                goto LABEL_76;
              goto LABEL_114;
            }
            v257 = sub_B8C3D0(v85, v12, v168, v59, v60, v61);
            v260 = *v257;
            v12 = *v257 + 8LL * *((unsigned int *)v257 + 2);
            if ( *v257 >= (unsigned __int64)v12 )
            {
              if ( v260 == v12 )
                goto LABEL_222;
              if ( *(_WORD *)(*(_QWORD *)v12 + 36LL) != 323 )
              {
                v12 += 8;
                while ( v260 != v12 )
                {
                  v264 = *(_QWORD *)v12;
                  v12 += 8;
                  if ( *(_WORD *)(v264 + 36) == 323 )
                    goto LABEL_448;
                }
                goto LABEL_222;
              }
            }
            else
            {
              v261 = (char *)*v257;
              while ( *(_WORD *)(*(_QWORD *)v261 + 36LL) != 323 )
              {
                v261 += 8;
                if ( (char *)v12 == v261 )
                  goto LABEL_222;
              }
              if ( (char *)v12 == v261 )
                goto LABEL_222;
            }
LABEL_448:
            v262 = *(_QWORD *)(v85 + 168);
            if ( *(_DWORD *)v262
              && (*(_DWORD *)(v262 + 8) & 0x7FFFFFFF) == 1
              && (unsigned __int8)sub_1598A90(
                                    *(_QWORD *)(v262 + 16),
                                    v12,
                                    (*(_DWORD *)(v262 + 8) & 0x7FFFFFFFu) - 1,
                                    v260,
                                    v258,
                                    v259) )
            {
              goto LABEL_76;
            }
            goto LABEL_222;
          }
        }
      }
LABEL_114:
      i = *(unsigned int *)(a1 + 8);
      v115 = v62;
      v114 = *(_DWORD *)(a1 + 8);
      v116 = v62 < i;
      if ( v62 == i )
      {
LABEL_115:
        v62 = v114;
        goto LABEL_111;
      }
LABEL_105:
      if ( !v116 )
      {
        if ( v115 > *(unsigned int *)(a1 + 12) )
        {
          v12 = a1 + 16;
          sub_2237220(a1, a1 + 16, v115, 24);
          i = *(unsigned int *)(a1 + 8);
        }
        v59 = *(_QWORD *)a1;
        v117 = *(_QWORD *)a1 + 24 * i;
        for ( i = *(_QWORD *)a1 + 24 * v115; i != v117; v117 += 24 )
          *(_QWORD *)(v117 + 16) = 0;
      }
      *(_DWORD *)(a1 + 8) = v62;
LABEL_111:
      result = v63 + 1;
      if ( v280 == v63 )
        return result;
      ++v63;
    }
    v120 = sub_B8C3D0(v70, v12, i, v59, v60, v61);
    i = *v120;
    v121 = *v120 + 8LL * *((unsigned int *)v120 + 2);
    if ( i >= v121 )
    {
      if ( i == v121 )
        goto LABEL_52;
      v59 = *(_QWORD *)v121;
      if ( *(_WORD *)(*(_QWORD *)v121 + 36LL) != 68 )
      {
        v129 = (unsigned __int64 *)(v121 + 8);
        do
        {
          v59 = (unsigned __int64)v129;
          if ( (unsigned __int64 *)i == v129 )
            goto LABEL_52;
          v59 = *v129++;
        }
        while ( *(_WORD *)(v59 + 36) != 68 );
      }
    }
    else
    {
      v59 = i;
      while ( 1 )
      {
        v12 = *(_QWORD *)v59;
        if ( *(_WORD *)(*(_QWORD *)v59 + 36LL) == 68 )
          break;
        v59 += 8LL;
        if ( v121 == v59 )
          goto LABEL_52;
      }
      if ( v121 == v59 )
        goto LABEL_52;
    }
    while ( 1 )
    {
      v122 = *(_QWORD *)i;
      if ( *(_WORD *)(*(_QWORD *)i + 36LL) == 68 )
        break;
      i += 8LL;
    }
    i = *(_BYTE *)(v54 + 28) & 0x7F;
    if ( (_BYTE)i != 38 )
      goto LABEL_52;
    i = *(_QWORD *)(v122 + 48);
    v123 = 4LL * *(unsigned int *)(v122 + 40);
    v12 = i + v123;
    v124 = v123 >> 2;
    v59 = v123 >> 4;
    if ( v59 )
    {
      if ( *(_DWORD *)i )
      {
        v125 = (char *)(i + 4);
        if ( *(_DWORD *)(i + 4) )
        {
          v125 = (char *)(i + 8);
          if ( *(_DWORD *)(i + 8) )
          {
            v61 = *(unsigned int *)(i + 12);
            v125 = (char *)(i + 12);
            v59 = i + 16 * v59;
            if ( (_DWORD)v61 )
            {
              while ( 1 )
              {
                v125 = (char *)(i + 16);
                if ( v59 == i + 16 )
                {
                  v124 = (v12 - (__int64)v125) >> 2;
                  goto LABEL_145;
                }
                v60 = *(unsigned int *)(i + 16);
                if ( !(_DWORD)v60 )
                  goto LABEL_149;
                if ( !*(_DWORD *)(i + 20) )
                {
                  v125 = (char *)(i + 20);
                  goto LABEL_149;
                }
                if ( !*(_DWORD *)(i + 24) )
                {
                  v125 = (char *)(i + 24);
                  goto LABEL_149;
                }
                if ( !*(_DWORD *)(i + 28) )
                  break;
                i += 16LL;
              }
              v125 = (char *)(i + 28);
            }
          }
        }
      }
      else
      {
        v125 = *(char **)(v122 + 48);
      }
LABEL_149:
      if ( (char *)v12 != v125 )
      {
        v126 = *(unsigned int *)(a1 + 12);
        v127 = *(_QWORD *)(*(_QWORD *)(v54 + 120) + 8 * v63);
        v112 = *(_QWORD *)a1;
        v292.m128_u64[0] = v64;
        LODWORD(v291) = 4;
        v292.m128_u64[1] = v127;
        v128 = *(unsigned int *)(a1 + 8);
        v100 = v128 + 1;
        v59 = v112 + 24 * v128;
        v102 = (const __m128i *)s1;
        if ( v100 <= v126 )
          goto LABEL_101;
        v140 = a1 + 16;
        if ( v112 > (unsigned __int64)s1 || v59 <= (unsigned __int64)s1 )
          goto LABEL_322;
        goto LABEL_182;
      }
      goto LABEL_52;
    }
    v125 = *(char **)(v122 + 48);
LABEL_145:
    if ( v124 != 2 )
    {
      if ( v124 != 3 )
      {
        if ( v124 != 1 )
          goto LABEL_52;
        goto LABEL_148;
      }
      v61 = *(unsigned int *)v125;
      if ( !(_DWORD)v61 )
        goto LABEL_149;
      v125 += 4;
    }
    v60 = *(unsigned int *)v125;
    if ( !(_DWORD)v60 )
      goto LABEL_149;
    v125 += 4;
LABEL_148:
    if ( *(_DWORD *)v125 )
      goto LABEL_52;
    goto LABEL_149;
  }
  return result;
}
