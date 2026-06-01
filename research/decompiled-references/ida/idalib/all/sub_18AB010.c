__int64 __fastcall sub_18AB010(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 *a4,
        int a5,
        __m128 a6,
        double a7,
        __int64 a8,
        __int64 *a9,
        __int64 a10)
{
  __int64 *v10; // r15
  unsigned int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r13
  bool v23; // zf
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rdx
  __int64 *v29; // r14
  __int64 v30; // rsi
  unsigned int v31; // edx
  unsigned __int8 v32; // al
  unsigned __int64 v33; // rdx
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned __int64 v39; // r15
  __int16 v40; // ax
  unsigned __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r13
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // rsi
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r13
  char v64; // al
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r12
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  _BYTE *v78; // rdx
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // rax
  __int64 v89; // r14
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // r13
  __int64 *v93; // rbp
  __int64 v94; // r12
  __int64 v95; // rax
  unsigned int *v96; // rax
  __int64 *v97; // r13
  unsigned int *v98; // r14
  __int64 v99; // rdx
  __int64 *v100; // rbp
  __int64 v101; // rax
  unsigned int *v102; // rdx
  __int64 *v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 *v111; // rax
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 *v115; // rdx
  __int64 v116; // rsi
  unsigned int v117; // edx
  int v118; // eax
  int v119; // eax
  __int64 v120; // rsi
  unsigned __int64 v121; // rax
  unsigned __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // rdi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 **v138; // r12
  __int64 v139; // rbp
  __int64 **v140; // rbx
  __int64 v141; // rax
  unsigned __int64 v142; // r12
  unsigned __int64 v143; // rax
  __int64 v144; // rdx
  __int64 *v145; // rcx
  __int64 v146; // rbx
  __int64 v147; // rdi
  char v148; // al
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rdi
  __int64 v154; // rax
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // r8
  __int64 v158; // r9
  _QWORD *v159; // r13
  unsigned __int64 v160; // rax
  __int64 *v161; // r12
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // r14
  __int64 v165; // rax
  __int64 i; // r12
  unsigned __int64 v167; // rax
  __int64 v168; // rdi
  __int64 v169; // rax
  __int64 v170; // r12
  __int64 v171; // rax
  unsigned int v172; // edx
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rax
  __int64 *v178; // rbx
  unsigned __int64 v179; // rax
  unsigned __int64 v180; // rax
  unsigned __int64 *v181; // rax
  __int64 *v182; // rdx
  unsigned __int64 v183; // rcx
  unsigned __int64 v184; // rax
  __int64 v185; // rdi
  char v186; // al
  __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // rbx
  __int64 *v190; // rax
  unsigned __int64 v191; // rcx
  __int64 *v192; // rax
  unsigned __int64 *v193; // rax
  unsigned __int64 *v194; // rax
  unsigned int v195; // edx
  unsigned int v196; // ecx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rax
  _QWORD *v202; // rax
  __int64 v203; // rax
  __int64 v204; // rax
  unsigned __int64 v205; // rax
  unsigned int v206; // r14d
  unsigned int v207; // r13d
  unsigned __int64 v208; // rax
  _QWORD *v209; // rax
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // r14
  __int64 v216; // rax
  _QWORD *v217; // rax
  size_t v218; // rax
  __int64 *v219; // rcx
  __int64 v220; // rax
  __int64 v221; // rax
  __int64 v222; // rdx
  __int64 v223; // rcx
  __int64 v224; // r8
  __int64 v225; // r9
  __int64 v226; // r12
  __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  __int64 v231; // r9
  unsigned __int64 v232; // rax
  unsigned __int64 v233; // rdx
  unsigned __int64 v234; // rax
  __int64 v235; // rdi
  char v236; // al
  __int64 v237; // rax
  __int64 v238; // rax
  __int64 v239; // rax
  __int64 v240; // rax
  __m128i *v241; // [rsp+0h] [rbp-1D8h]
  _QWORD *v242; // [rsp+0h] [rbp-1D8h]
  __int64 v243; // [rsp+8h] [rbp-1D0h]
  __int64 v244; // [rsp+10h] [rbp-1C8h]
  int v245; // [rsp+10h] [rbp-1C8h]
  __int64 v246; // [rsp+10h] [rbp-1C8h]
  __int64 v247; // [rsp+20h] [rbp-1B8h]
  char v248; // [rsp+28h] [rbp-1B0h]
  __int64 v249; // [rsp+28h] [rbp-1B0h]
  char v250; // [rsp+37h] [rbp-1A1h]
  __int32 v251; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v252; // [rsp+38h] [rbp-1A0h]
  unsigned __int64 v253; // [rsp+40h] [rbp-198h]
  __int64 v254; // [rsp+50h] [rbp-188h]
  __int64 v255; // [rsp+58h] [rbp-180h]
  __int64 v256; // [rsp+60h] [rbp-178h]
  __int64 v257; // [rsp+78h] [rbp-160h] BYREF
  __int64 v258; // [rsp+80h] [rbp-158h] BYREF
  __int64 v259; // [rsp+88h] [rbp-150h] BYREF
  _QWORD v260[2]; // [rsp+90h] [rbp-148h] BYREF
  unsigned int v261; // [rsp+A0h] [rbp-138h]
  _QWORD v262[2]; // [rsp+B0h] [rbp-128h] BYREF
  unsigned int v263; // [rsp+C0h] [rbp-118h]
  unsigned __int64 v264; // [rsp+D0h] [rbp-108h] BYREF
  char v265; // [rsp+D8h] [rbp-100h] BYREF
  void *v266; // [rsp+E8h] [rbp-F0h]
  __int64 v267; // [rsp+F8h] [rbp-E0h] BYREF
  __int64 v268[25]; // [rsp+110h] [rbp-C8h] BYREF

  v10 = a1;
  v251 = a3;
  v256 = (__int64)a2;
  v253 = HIDWORD(a3);
  v255 = sub_168B6C0((__int64)a1);
  if ( (unsigned int)sub_1895420((__int64)a1) == -1 )
    return 0;
  v16 = *(_QWORD *)(*a1 + 544);
  v241 = (__m128i *)v16;
  if ( !v16 )
    BUG();
  v243 = v16 - 48;
  v254 = v16 - 48;
  v248 = *(_BYTE *)(v16 - 20) & 0x7F;
  LOBYTE(v13) = ((v248 + 109) & 0x7Fu) <= 1;
  v17 = (v248 == 23) | v13;
  v250 = v17;
  if ( (*(_BYTE *)(v16 + 8) & 0x7F) == 0x15 && v16 != 48 )
  {
    v18 = sub_B8E970(v16);
    v19 = (_QWORD *)v18;
    if ( v18 )
    {
      if ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0xE )
      {
LABEL_139:
        v120 = v19[8];
        if ( v120 && (*(_BYTE *)(v120 + 58) & 0x10) != 0 )
          sub_B94AD0(v241, v120, v17, v16, v14, v15);
        a2 = (__int64 *)v19[9];
        if ( a2 && (*((_BYTE *)a2 + 58) & 0x10) != 0 )
          sub_B94AD0(v241, (__int64)a2, v17, v16, v14, v15);
        while ( 1 )
        {
          v121 = v19[1] & 0xFFFFFFFFFFFFFFF8LL;
          v19 = (_QWORD *)v121;
          if ( !v121 )
            break;
          if ( (*(_BYTE *)(v121 + 28) & 0x7F) == 0xE )
            goto LABEL_139;
        }
      }
      else
      {
        while ( 1 )
        {
          v20 = v19[1] & 0xFFFFFFFFFFFFFFF8LL;
          v19 = (_QWORD *)v20;
          if ( !v20 )
            break;
          if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0xE )
            goto LABEL_139;
        }
      }
    }
  }
  v260[0] = 0;
  v260[1] = 0;
  v261 = 0;
  v262[0] = 0;
  v262[1] = 0;
  v263 = 0;
  if ( a5 )
  {
    v21 = (__int64)&a4[(unsigned int)(a5 - 1) + 1];
    while ( 1 )
    {
      v22 = *a4;
      if ( *a4 )
        break;
LABEL_22:
      if ( (__int64 *)v21 == ++a4 )
        goto LABEL_23;
    }
    v23 = (*(_BYTE *)(v22 + 58) & 2) == 0;
    v268[0] = *(_QWORD *)(v22 + 40);
    if ( v23 )
    {
      v111 = sub_18987A0((__int64)v262, v268, (__int64 *)v17, v16, v14, v15);
      v115 = (__int64 *)*v111;
      v29 = v111;
      if ( !*v111 )
        goto LABEL_124;
      if ( !(unsigned __int8)sub_1896130((__int64)a1, v22, (__int64)v115, 1u) )
      {
        v116 = *v29;
        if ( !v250 )
          goto LABEL_120;
        if ( v116 )
        {
LABEL_126:
          sub_168B9F0((__int64)v268, a1, *(_DWORD *)(v22 + 24), 0xE84u, 0);
          v264 = *(_QWORD *)(v22 + 40);
          sub_15894B0((__int64)v268, (__int64 *)&v264);
          sub_15F7200(v268);
          sub_168B9F0((__int64)v268, a1, *(_DWORD *)(*v29 + 24), 0x70u, 0);
          sub_15F7200(v268);
          a2 = (_QWORD *)(&dword_0 + 1);
          sub_B88650(v22, 1);
          goto LABEL_22;
        }
        goto LABEL_124;
      }
      if ( v248 == 21 )
        goto LABEL_126;
      v116 = *v29;
LABEL_120:
      if ( !v116 )
      {
LABEL_124:
        v268[0] = *(_QWORD *)(v22 + 40);
        a2 = (__int64 *)v22;
        *sub_18987A0((__int64)v262, v268, v115, v112, v113, v114) = v22;
        sub_1898B30((__int64)a1, v22, 0, 0);
        goto LABEL_22;
      }
      sub_BA7EE0(v22, v116);
      v117 = *(_DWORD *)(v22 + 24);
      if ( v117 )
      {
        v119 = sub_1021680(*(_QWORD *)(v255 + 2312), v117);
        if ( !v119 || v119 == 3 )
        {
          v117 = *(_DWORD *)(v22 + 24);
          goto LABEL_122;
        }
      }
      else
      {
LABEL_122:
        sub_168B9F0((__int64)v268, a1, v117, 0x1ACFu, 0);
        v264 = *(_QWORD *)(v22 + 40);
        sub_15894B0((__int64)v268, (__int64 *)&v264);
        sub_15F7200(v268);
      }
      sub_168B9F0((__int64)v268, a1, *(_DWORD *)(*v29 + 24), 0x70u, 0);
      sub_15F7200(v268);
      goto LABEL_124;
    }
    v24 = sub_18987A0((__int64)v260, v268, (__int64 *)v17, v16, v14, v15);
    v28 = (__int64 *)*v24;
    v29 = v24;
    if ( !*v24 )
      goto LABEL_21;
    if ( (unsigned __int8)sub_1896130((__int64)a1, v22, (__int64)v28, 1u) )
    {
      if ( v248 == 21 )
        goto LABEL_126;
      v30 = *v29;
    }
    else
    {
      v30 = *v29;
      if ( v250 )
      {
        if ( v30 )
          goto LABEL_126;
        goto LABEL_21;
      }
    }
    if ( !v30 )
    {
LABEL_21:
      v268[0] = *(_QWORD *)(v22 + 40);
      a2 = (__int64 *)v22;
      *sub_18987A0((__int64)v260, v268, v28, v25, v26, v27) = v22;
      sub_1898B30((__int64)a1, v22, 0, 1);
      goto LABEL_22;
    }
    sub_BA7EE0(v22, v30);
    v31 = *(_DWORD *)(v22 + 24);
    if ( v31 )
    {
      v118 = sub_1021680(*(_QWORD *)(v255 + 2312), v31);
      if ( v118 != 3 && v118 )
        goto LABEL_20;
      v31 = *(_DWORD *)(v22 + 24);
    }
    sub_168B9F0((__int64)v268, a1, v31, 0x1ACFu, 0);
    v264 = *(_QWORD *)(v22 + 40);
    sub_15894B0((__int64)v268, (__int64 *)&v264);
    sub_15F7200(v268);
LABEL_20:
    sub_168B9F0((__int64)v268, a1, *(_DWORD *)(*v29 + 24), 0x70u, 0);
    sub_15F7200(v268);
    goto LABEL_21;
  }
LABEL_23:
  v32 = v241[-2].m128i_i8[12] & 0x7F;
  if ( v32 == 23 )
  {
    v33 = v241[-1].m128i_u64[1];
    if ( (v33 & 7) == 0 && (v33 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v138 = (__int64 **)v241[3].m128i_i64[1];
      v16 = v241[4].m128i_u32[0];
      v139 = *a1;
      v140 = &v138[v16];
      if ( v138 == v140 )
      {
LABEL_26:
        if ( (v33 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v177 = sub_B8E970((__int64)v241);
          v178 = (__int64 *)v177;
          if ( v177 )
          {
            if ( (*(_BYTE *)(v177 + 28) & 0x7F) == 0x4B )
            {
LABEL_234:
              while ( 1 )
              {
                a2 = v178;
                sub_1A942A0(a1, v178);
                v180 = v178[1] & 0xFFFFFFFFFFFFFFF8LL;
                v178 = (__int64 *)v180;
                if ( !v180 )
                  break;
                if ( (*(_BYTE *)(v180 + 28) & 0x7F) != 0x4B )
                {
                  while ( 1 )
                  {
                    v33 = v178[1] & 0xFFFFFFFFFFFFFFF8LL;
                    v178 = (__int64 *)v33;
                    if ( !v33 )
                      break;
                    if ( (*(_BYTE *)(v33 + 28) & 0x7F) == 0x4B )
                      goto LABEL_234;
                  }
                  v32 = v241[-2].m128i_i8[12] & 0x7F;
                  goto LABEL_27;
                }
              }
            }
            else
            {
              while ( 1 )
              {
                v179 = v178[1] & 0xFFFFFFFFFFFFFFF8LL;
                v178 = (__int64 *)v179;
                if ( !v179 )
                  break;
                if ( (*(_BYTE *)(v179 + 28) & 0x7F) == 0x4B )
                  goto LABEL_234;
              }
            }
          }
          v32 = v241[-2].m128i_i8[12] & 0x7F;
        }
        goto LABEL_27;
      }
    }
    else
    {
      a2 = (__int64 *)v243;
      sub_189A6A0(a1, v243, v241[2].m128i_i64[1]);
      v138 = (__int64 **)v241[3].m128i_i64[1];
      v139 = *a1;
      v140 = &v138[v241[4].m128i_u32[0]];
      if ( v138 == v140 )
      {
LABEL_170:
        v32 = v241[-2].m128i_i8[12] & 0x7F;
        goto LABEL_24;
      }
    }
    do
    {
      a2 = *v138++;
      sub_18A1370(v139, (__int64)a2, v243, v16, v14, v15);
    }
    while ( v140 != v138 );
    goto LABEL_170;
  }
LABEL_24:
  v33 = (unsigned int)v32 - 19;
  if ( (unsigned int)v33 > 4 )
    goto LABEL_28;
  v33 = v241[-1].m128i_u64[1];
  if ( (v33 & 7) == 0 )
    goto LABEL_26;
LABEL_27:
  v16 = (__int64)v241;
  v241[2].m128i_i32[0] = v251;
  v241[2].m128i_i32[1] = v253;
LABEL_28:
  if ( v32 == 21 )
  {
    v34 = v241[2].m128i_i64[1];
    v241[2].m128i_i32[0] = v251;
    v241[2].m128i_i32[1] = v253;
    if ( !v34 )
    {
LABEL_88:
      a2 = (__int64 *)v243;
      sub_1895A60(v10, v243);
      goto LABEL_89;
    }
    v35 = *(_QWORD *)(v34 + 120);
    if ( !v35 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(v34 + 96) + 88LL), *(_QWORD *)(v34 + 96), v33, (unsigned int)v253, v14, v15);
      v35 = *(_QWORD *)(v34 + 120);
    }
    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v36 )
    {
      if ( (*(_BYTE *)(v36 + 72) & 1) != 0 )
      {
        sub_BA8900(v34);
        v36 = *(_QWORD *)(v34 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v37 = *(_QWORD *)(v36 + 56);
      if ( v37 )
      {
        while ( 1 )
        {
          if ( *(char *)(v37 + 28) >= 0 )
          {
            v38 = *(_QWORD *)(v37 + 40);
            if ( ((v38 & 7) != 0 || (v38 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(v37 + 8) & 6) == 0 )
              break;
          }
          v37 = *(_QWORD *)(v37 + 128);
          if ( !v37 )
            goto LABEL_79;
        }
        v268[0] = v37;
        do
        {
          v39 = sub_B8E970(v37 + 48);
          if ( v39 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x4B )
              {
                v40 = *(_WORD *)(v39 + 72);
                if ( (v40 & 0x4000) == 0 )
                  break;
              }
              v39 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v39 )
                goto LABEL_77;
            }
LABEL_48:
            v41 = *(_QWORD *)(v39 + 40) & 0xFFFFFFFFFFFFFFF8LL;
            if ( (*(_QWORD *)(v39 + 40) & 7) != 0 )
              v41 = 0;
            v42 = sub_BA91C0(v243, v41, ((v40 & 0x4000) != 0) + 1);
            if ( !v42 || *(_QWORD *)(v42 + 56) )
            {
              v47 = *(_QWORD *)(v34 + 120);
              if ( !v47 )
              {
                sub_A794E0((__int64 *)(*(_QWORD *)(v34 + 96) + 88LL), *(_QWORD *)(v34 + 96), v43, v44, v45, v46);
                v47 = *(_QWORD *)(v34 + 120);
              }
              v48 = v47 & 0xFFFFFFFFFFFFFFF8LL;
              if ( v48 )
              {
                v49 = v48;
                if ( (*(_BYTE *)(v48 + 72) & 1) != 0 )
                {
                  sub_BA8900(v34);
                  v49 = *(_QWORD *)(v34 + 120) & 0xFFFFFFFFFFFFFFF8LL;
                }
                v50 = *(_QWORD *)(v49 + 56);
                if ( v50 )
                {
                  while ( 1 )
                  {
                    if ( *(char *)(v50 + 28) >= 0 )
                    {
                      v51 = *(_QWORD *)(v50 + 40);
                      if ( ((v51 & 7) != 0 || (v51 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(v50 + 8) & 6) == 0 )
                        break;
                    }
                    v50 = *(_QWORD *)(v50 + 128);
                    if ( !v50 )
                      goto LABEL_73;
                  }
LABEL_64:
                  v52 = sub_BAA9D0(v50, *(_QWORD *)(v39 + 80), 1, 0, v45, v46);
                  if ( v52 )
                    *(_BYTE *)(v52 + 58) |= 8u;
                  if ( (*(_BYTE *)(v39 + 72) & 1) == 0 )
                  {
                    v122 = sub_BAA9D0(v50, *(_QWORD *)(v39 + 88), 1, 0, v45, v46);
                    if ( v122 )
                      *(_BYTE *)(v122 + 58) |= 8u;
                  }
                  while ( 1 )
                  {
                    v50 = *(_QWORD *)(v50 + 128);
                    if ( !v50 )
                      break;
                    while ( *(char *)(v50 + 28) >= 0 )
                    {
                      v53 = *(_QWORD *)(v50 + 40);
                      if ( (v53 & 7) == 0 && (v53 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
                        break;
                      if ( (*(_BYTE *)(v50 + 8) & 6) == 0 )
                        goto LABEL_64;
                      v50 = *(_QWORD *)(v50 + 128);
                      if ( !v50 )
                        goto LABEL_73;
                    }
                  }
                }
              }
            }
LABEL_73:
            while ( 1 )
            {
              v39 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v39 )
                break;
              while ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x4B )
              {
                v40 = *(_WORD *)(v39 + 72);
                if ( (v40 & 0x4000) == 0 )
                  goto LABEL_48;
                v39 = *(_QWORD *)(v39 + 8) & 0xFFFFFFFFFFFFFFF8LL;
                if ( !v39 )
                  goto LABEL_77;
              }
            }
          }
LABEL_77:
          v268[0] = *(_QWORD *)(v268[0] + 128);
          sub_1894010(v268);
          v37 = v268[0];
        }
        while ( v268[0] );
        v10 = a1;
      }
    }
LABEL_79:
    sub_18AA690(v10, v256, v243, v34, 0, a6);
    sub_1A9DDF0(v10, v243, v34);
    v54 = (__int64 *)v243;
    sub_1A95370(v10, v243);
    if ( *(_DWORD *)(v256 + 412) >= *(_DWORD *)(*(_QWORD *)(v256 + 400) + 200LL) )
    {
      v54 = (__int64 *)v243;
      sub_189FBC0(v10, v243);
      if ( !sub_BAC370(v34, v243, v173, v174, v175, v176) )
        goto LABEL_81;
    }
    else if ( !sub_BAC370(v34, v243, v55, v56, v57, v58) )
    {
LABEL_81:
      v63 = *v10;
      v64 = *(_BYTE *)(*(_QWORD *)(*v10 + 232) + 107LL);
      if ( (v64 & 0x10) != 0 )
      {
        if ( (v64 & 4) == 0 )
          goto LABEL_83;
LABEL_208:
        for ( i = sub_BAC730(v34, (__int64)v54, v59, v60, v61, v62); i; i = *(_QWORD *)(i + 80) )
        {
          if ( *(char *)(i + 28) >= 0 )
          {
            v167 = *(_QWORD *)(i + 48) & 0xFFFFFFFFFFFFFFF0LL;
            v168 = *(_QWORD *)v167;
            v59 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v167 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v59 + 16) == 5 )
            {
              v169 = *(_QWORD *)&byte_8[*(_QWORD *)(i + 48) & 0xFFFFFFFFFFFFFFF0LL];
              if ( (v169 & 8) == 0
                || (v59 = v169 & 0xFFFFFFFFFFFFFFF0LL,
                    (((*(__int64 *)((char *)&qword_18 + (v169 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v169 & 7)) >> 6)
                   & 7) != 1) )
              {
                if ( sub_F6ACC0(v168, (__int64)v54, v59, v60, v61) )
                {
                  sub_168B9F0((__int64)v268, (__int64 *)(v63 + 8), *(_DWORD *)(i + 24), 0xEEFu, 0);
                  sub_15F7200(v268);
                  v54 = (_QWORD *)(&dword_0 + 1);
                  sub_B88650(i, 1);
                }
              }
            }
          }
        }
LABEL_83:
        if ( (*(_BYTE *)(v34 + 29) & 1) == 0 )
        {
LABEL_84:
          if ( sub_BAB630(v34, (__int64)v54, v59, v60, v61, v62) )
            goto LABEL_85;
          v206 = *(_DWORD *)(v34 + 24);
          v207 = sub_15F0EF0(*v10, v206, 0, (__m128i)a6, a7);
          sub_168B9F0((__int64)v268, v10, v206, 0x1C23u, 0);
          v208 = *(_QWORD *)(v34 + 40) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v34 + 40) & 7) != 0 )
            v208 = 0;
          v264 = v208;
          sub_18175F0((__int64)v268, (__int64 *)&v264);
          sub_15F7200(v268);
          v246 = *v10;
          v209 = sub_E935B0(v10[11], 0);
          v210 = sub_1A5B7C0(v246, *(_QWORD *)(*v10 + 192), v209, v206, 0, 0);
          v215 = v210;
          if ( v210 && (*(_BYTE *)(v210 + 28) & 0x7F) == 0x14 )
          {
            v216 = *(_QWORD *)(v210 + 120);
            if ( !v216 )
            {
              sub_A794E0((__int64 *)(*(_QWORD *)(v215 + 96) + 88LL), *(_QWORD *)(v215 + 96), v211, v212, v213, v214);
              v216 = *(_QWORD *)(v215 + 120);
            }
            v217 = (_QWORD *)(v216 & 0xFFFFFFFFFFFFFFF8LL);
            if ( v217 )
            {
              if ( *v217 )
              {
                sub_168B9F0((__int64)v268, v10, v207, 0x180Bu, 0);
                v218 = j__strlen(" : NSObject ");
                sub_9EC740((__int64)&v264, v207, " : NSObject ", v218, 0);
                v54 = (__int64 *)&v264;
                sub_1589170((__int64)v268, &v264);
                if ( v266 != &v267 )
                  operator delete(v266);
                goto LABEL_283;
              }
            }
          }
          v196 = 6155;
          v195 = v207;
LABEL_282:
          v54 = v10;
          sub_168B9F0((__int64)v268, v10, v195, v196, 0);
LABEL_283:
          sub_15F7200(v268);
LABEL_85:
          v73 = sub_BAB630(v34, (__int64)v54, v65, v66, v67, v68);
          if ( v73 )
          {
            if ( (*(_BYTE *)(v34 + 29) & 1) == 0 )
              goto LABEL_87;
            if ( sub_18941B0(v34, (__int64)v54, v69, v70, v71, v72)
              && (*(_BYTE *)(v73 + 29) & 1) != 0
              && sub_18941B0(v73, (__int64)v54, v69, v70, v71, v72) )
            {
              sub_168B9F0((__int64)v268, v10, v241[-2].m128i_u32[2], 0x1350u, 0);
              sub_15F7200(v268);
              v54 = v10;
              sub_168B9F0((__int64)v268, v10, *(_DWORD *)(v73 + 24), 0x16C4u, 0);
              sub_15F7200(v268);
            }
          }
          if ( (*(_BYTE *)(v34 + 29) & 1) != 0 )
          {
            v181 = sub_B8C3D0(v34, (__int64)v54, v69, v70, v71, v72);
            v182 = (__int64 *)*v181;
            v183 = *v181 + 8LL * *((unsigned int *)v181 + 2);
            if ( *v181 >= v183 )
            {
              if ( v182 == (__int64 *)v183 )
                goto LABEL_87;
              if ( *(_WORD *)(*(_QWORD *)v183 + 36LL) != 426 )
              {
                v219 = (__int64 *)(v183 + 8);
                while ( v182 != v219 )
                {
                  v220 = *v219++;
                  if ( *(_WORD *)(v220 + 36) == 426 )
                    goto LABEL_323;
                }
                goto LABEL_87;
              }
            }
            else
            {
              v184 = *v181;
              while ( *(_WORD *)(*(_QWORD *)v184 + 36LL) != 426 )
              {
                v184 += 8LL;
                if ( v183 == v184 )
                  goto LABEL_87;
              }
              if ( v183 == v184 )
                goto LABEL_87;
            }
LABEL_323:
            v54 = v10;
            sub_168B9F0((__int64)v268, v10, v241[-2].m128i_u32[2], 0xF66u, 0);
            sub_15F7200(v268);
          }
LABEL_87:
          v74 = sub_168B6E0((__int64)v10);
          v78 = byte_26430D8;
          if ( byte_26430D8[*(unsigned int *)(v74 + 368)] )
          {
            while ( sub_BAB630(v34, (__int64)v54, (__int64)v78, v75, v76, v77) )
            {
              v123 = sub_BAB630(v34, (__int64)v54, v131, v132, v133, v134);
              v54 = (__int64 *)v34;
              sub_189B170(v10, v34, v123, v124, v125, v126);
              v34 = sub_BAB630(v34, v34, v127, v128, v129, v130);
            }
          }
          goto LABEL_88;
        }
        v193 = sub_B8C3D0(v34, (__int64)v54, v59, v60, v61, v62);
        v59 = *v193;
        v60 = *v193 + 8LL * *((unsigned int *)v193 + 2);
        if ( *v193 >= v60 )
        {
          if ( v59 == v60 )
            goto LABEL_84;
          if ( *(_WORD *)(*(_QWORD *)v60 + 36LL) != 316 )
          {
            v60 += 8LL;
            while ( v59 != v60 )
            {
              v221 = *(_QWORD *)v60;
              v60 += 8LL;
              if ( *(_WORD *)(v221 + 36) == 316 )
                goto LABEL_280;
            }
            goto LABEL_84;
          }
        }
        else
        {
          v194 = (unsigned __int64 *)*v193;
          while ( 1 )
          {
            v59 = *v194;
            if ( *(_WORD *)(*v194 + 36) == 316 )
              break;
            if ( (unsigned __int64 *)v60 == ++v194 )
              goto LABEL_84;
          }
          if ( (unsigned __int64 *)v60 == v194 )
            goto LABEL_84;
        }
LABEL_280:
        if ( !sub_BAB630(v34, (__int64)v54, v59, v60, v61, v62) )
          goto LABEL_85;
        v195 = *(_DWORD *)(v34 + 24);
        v196 = 4380;
        goto LABEL_282;
      }
      v170 = sub_BAC730(v241[2].m128i_i64[1], (__int64)v54, v59, v60, v61, v62);
      if ( !v170 )
      {
LABEL_224:
        v63 = *v10;
        if ( (*(_BYTE *)(*(_QWORD *)(*v10 + 232) + 107LL) & 4) == 0 )
          goto LABEL_83;
        goto LABEL_208;
      }
      while ( 1 )
      {
        if ( *(char *)(v170 + 28) < 0 )
          goto LABEL_218;
        v171 = *(_QWORD *)&byte_8[*(_QWORD *)(v170 + 48) & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v171 & 8) == 0 )
          goto LABEL_218;
        v59 = v171 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (((*(__int64 *)((char *)&qword_18 + (v171 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned __int64)(v171 & 7)) >> 6) & 7) != 3 )
          goto LABEL_218;
        v54 = (__int64 *)(v63 + 8);
        v172 = *(_DWORD *)(v170 + 24);
        if ( (*(_BYTE *)(*(_QWORD *)(v63 + 232) + 107LL) & 8) != 0 )
        {
          sub_168B9F0((__int64)v268, v54, v172, 0xBE7u, 0);
          sub_15F7200(v268);
          v170 = *(_QWORD *)(v170 + 80);
          if ( !v170 )
            goto LABEL_224;
        }
        else
        {
          sub_168B9F0((__int64)v268, v54, v172, 0xBE9u, 0);
          sub_15F7200(v268);
LABEL_218:
          v170 = *(_QWORD *)(v170 + 80);
          if ( !v170 )
            goto LABEL_224;
        }
      }
    }
    v54 = (__int64 *)v243;
    sub_1A9CF20(v10, v243, v34);
    goto LABEL_81;
  }
  if ( v32 == 22 )
  {
    v135 = v241[2].m128i_i64[1];
    v241[2].m128i_i32[0] = v251;
    v241[2].m128i_i32[1] = v253;
    if ( !v135 )
      goto LABEL_99;
    v136 = v241[-1].m128i_i64[1];
    a2 = (__int64 *)(v136 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v136 & 7) != 0 )
      a2 = nullptr;
    v137 = sub_BADD00(v135, (__int64)a2, v33, (unsigned int)v253, v14, v15);
    if ( v137 )
    {
      a2 = (__int64 *)v256;
      sub_18AA690(v10, v256, v243, v137, 0, a6);
    }
    goto LABEL_89;
  }
  if ( v32 != 20 )
  {
    v244 = *a1;
    goto LABEL_290;
  }
  v189 = sub_BAB630(v243, (__int64)a2, v33, v16, v14, v15);
  if ( v189 )
  {
    if ( (v241[-2].m128i_i8[13] & 1) != 0 )
    {
      if ( sub_18941B0(v243, (__int64)a2, v79, v188, v80, v81) || (*(_BYTE *)(v189 + 29) & 1) == 0 )
        goto LABEL_264;
    }
    else if ( (*(_BYTE *)(v189 + 29) & 1) == 0 )
    {
      goto LABEL_89;
    }
    if ( sub_18941B0(v189, (__int64)a2, v79, v188, v80, v81) )
    {
      sub_168B9F0((__int64)v268, a1, v241[-2].m128i_u32[2], 0x1350u, 0);
      sub_15F7200(v268);
      a2 = a1;
      sub_168B9F0((__int64)v268, a1, *(_DWORD *)(v189 + 24), 0x16C4u, 0);
      sub_15F7200(v268);
    }
  }
LABEL_264:
  if ( (v241[-2].m128i_i8[13] & 1) == 0 )
    goto LABEL_89;
  v190 = sub_B8C3D0(v243, (__int64)a2, v79, v188, v80, v81);
  v79 = *v190;
  v191 = *v190 + 8LL * *((unsigned int *)v190 + 2);
  if ( *v190 >= v191 )
  {
    if ( v79 == v191 )
      goto LABEL_89;
    if ( *(_WORD *)(*(_QWORD *)v191 + 36LL) == 426 )
      goto LABEL_270;
    v191 += 8LL;
    while ( v79 != v191 )
    {
      v240 = *(_QWORD *)v191;
      v191 += 8LL;
      if ( *(_WORD *)(v240 + 36) == 426 )
        goto LABEL_270;
    }
  }
  else
  {
    v192 = (__int64 *)*v190;
    while ( 1 )
    {
      v79 = *v192;
      if ( *(_WORD *)(*v192 + 36) == 426 )
        break;
      if ( (__int64 *)v191 == ++v192 )
        goto LABEL_89;
    }
    if ( (__int64 *)v191 != v192 )
    {
LABEL_270:
      if ( (v241[-2].m128i_i8[13] & 1) == 0 || !sub_18941B0(v243, (__int64)a2, v79, v191, v80, v81) )
      {
        a2 = a1;
        sub_168B9F0((__int64)v268, a1, v241[-2].m128i_u32[2], 0xD6Eu, 0);
        sub_15F7200(v268);
      }
    }
  }
LABEL_89:
  v82 = (__int64)v241;
  v244 = *v10;
  v32 = v241[-2].m128i_i8[12] & 0x7F;
  if ( v32 != 20 )
  {
    if ( v32 == 21 )
    {
      v89 = v241[2].m128i_i64[1];
      v141 = sub_B8E970((__int64)v241);
      v87 = v141;
      if ( !v141 )
        goto LABEL_181;
      if ( (*(_BYTE *)(v141 + 28) & 0x7F) != 0x32 )
      {
        while ( 1 )
        {
          v160 = *(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v87 = v160;
          if ( !v160 )
            break;
          if ( (*(_BYTE *)(v160 + 28) & 0x7F) == 0x32 )
            goto LABEL_174;
        }
        if ( (v241[-2].m128i_i8[12] & 0x7F) == 0x14 )
          goto LABEL_181;
LABEL_175:
        if ( v87 )
          goto LABEL_176;
LABEL_181:
        if ( !v89 )
          goto LABEL_99;
        v92 = sub_BAC730(v89, (__int64)a2, v79, v82, v80, v81);
        if ( !v92 )
          goto LABEL_192;
        goto LABEL_183;
      }
LABEL_174:
      if ( (v241[-2].m128i_i8[12] & 0x7F) == 0x14 )
        goto LABEL_181;
      goto LABEL_175;
    }
LABEL_290:
    if ( v32 != 23 )
      goto LABEL_99;
    v203 = v241[-1].m128i_i64[1];
    if ( (v203 & 7) == 0 && (v203 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
      goto LABEL_99;
    v89 = v241[2].m128i_i64[1];
    v204 = sub_B8E970((__int64)v241);
    v87 = v204;
    if ( !v204 )
      goto LABEL_181;
    if ( (*(_BYTE *)(v204 + 28) & 0x7F) != 0x32 )
    {
      do
      {
        v205 = *(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v87 = v205;
      }
      while ( v205 && (*(_BYTE *)(v205 + 28) & 0x7F) != 0x32 );
    }
    goto LABEL_174;
  }
  v83 = v241[4].m128i_i64[1];
  if ( v83 )
  {
    v84 = (__int64 *)(v83 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v84 )
    {
LABEL_243:
      v89 = v243;
      v92 = sub_BAC730(v243, (__int64)a2, v79, v82, v80, v81);
      if ( !v92 )
        goto LABEL_99;
      v87 = 0;
      goto LABEL_183;
    }
  }
  else
  {
    a2 = (__int64 *)v241[3].m128i_i64[0];
    sub_A794E0(a2 + 11, (__int64)a2, v79, (__int64)v241, v80, v81);
    v79 = v241[4].m128i_i64[1];
    v84 = (__int64 *)(v79 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v79 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      if ( v79 )
        goto LABEL_243;
      a2 = (__int64 *)v241[3].m128i_i64[0];
      sub_A794E0(a2 + 11, (__int64)a2, 0, v82, v80, v81);
      v84 = (__int64 *)(v241[4].m128i_i64[1] & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v84 )
        goto LABEL_243;
    }
  }
  v85 = *v84;
  if ( !v85 )
    goto LABEL_243;
  v86 = sub_B8E970(v85 + 48);
  v87 = v86;
  if ( !v86 )
    goto LABEL_243;
  if ( (*(_BYTE *)(v86 + 28) & 0x7F) != 0x32 )
  {
    while ( 1 )
    {
      v88 = *(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v87 = v88;
      if ( !v88 )
        break;
      if ( (*(_BYTE *)(v88 + 28) & 0x7F) == 0x32 )
        goto LABEL_287;
    }
    v89 = v243;
    v92 = sub_BAC730(v243, (__int64)a2, v79, v82, v80, v81);
    if ( !v92 )
      goto LABEL_99;
    goto LABEL_183;
  }
LABEL_287:
  if ( (v241[-2].m128i_i8[12] & 0x7F) != 0x14 )
  {
    v89 = v243;
LABEL_176:
    v142 = v87;
LABEL_177:
    if ( *(char *)(v142 + 28) >= 0 )
    {
      v185 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v142 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
      v186 = *(_BYTE *)(v185 + 16);
      if ( v186 == 5 || v186 == 48 && *((char *)sub_F60F10(v185, (__int64)a2, v79, v82, v80, v81) + 74) < 0 )
      {
        sub_168B9F0((__int64)v268, (__int64 *)(v244 + 8), *(_DWORD *)(v142 + 24), 0x1D84u, 0);
        v264 = *(_QWORD *)(v142 + 40);
        v187 = sub_15894B0((__int64)v268, (__int64 *)&v264);
        a2 = &v259;
        v259 = *(_QWORD *)(v142 + 48);
        sub_162B6D0(v187, &v259);
        sub_15F7200(v268);
      }
    }
    while ( 1 )
    {
      v143 = *(_QWORD *)(v142 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v142 = v143;
      if ( !v143 )
        goto LABEL_181;
      if ( (*(_BYTE *)(v143 + 28) & 0x7F) == 0x32 )
        goto LABEL_177;
    }
  }
  v89 = v243;
  v92 = sub_BAC730(v243, (__int64)a2, v79, v82, v80, v81);
  if ( !v92 )
  {
    v89 = v243;
    goto LABEL_193;
  }
LABEL_183:
  v252 = v87;
  v146 = v92;
  v145 = &v259;
  v249 = v89;
  do
  {
    while ( 1 )
    {
      v144 = *(_QWORD *)(v146 + 80);
      if ( *(char *)(v146 + 28) < 0 || !v144 )
        break;
      v258 = *(_QWORD *)(v146 + 48);
      v147 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v258 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v148 = *(_BYTE *)(v147 + 16);
      if ( v148 == 5 )
      {
        v161 = (__int64 *)(v244 + 8);
        sub_168B9F0((__int64)v268, (__int64 *)(v244 + 8), *(_DWORD *)(v146 + 24), 0xEF3u, 0);
        v259 = *(_QWORD *)(v146 + 40);
        v162 = sub_15894B0((__int64)v268, &v259);
        v163 = sub_1605D30(v162, &v258);
        v164 = v163;
        if ( *(_BYTE *)(v163 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v163 + 32), 3, 2u);
        }
        else if ( *(_BYTE *)(v163 + 132) )
        {
          v247 = sub_168B9E0((_QWORD *)v163);
          v201 = *(_QWORD *)(v164 + 16);
          if ( v201 )
            v201 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v201 + 32LL))(*(_QWORD *)(v164 + 16));
          v264 = v201;
          v202 = sub_1587BC0(v247, (__int64 *)&v264, v197, v198, v199, v200);
          sub_AE9DF0((unsigned __int8 **)(*v202 + 32LL * *(unsigned int *)(v164 + 128) + 8), 3, 2u);
        }
        goto LABEL_205;
      }
      if ( v148 != 48 )
        break;
      if ( *((char *)sub_F60F10(v147, (__int64)a2, v144, (__int64)v145, v90, v91) + 74) < 0 )
      {
        v161 = (__int64 *)(v244 + 8);
        sub_168B9F0((__int64)v268, (__int64 *)(v244 + 8), *(_DWORD *)(v146 + 24), 0x113Eu, 0);
        v264 = *(_QWORD *)(v146 + 40);
        v165 = sub_15894B0((__int64)v268, (__int64 *)&v264);
        sub_1605D30(v165, &v258);
LABEL_205:
        sub_15F7200(v268);
        sub_168B9F0((__int64)v268, v161, *(_DWORD *)(*(_QWORD *)(v146 + 80) + 24LL), 0x17DFu, 0);
        LOBYTE(v264) = (*(_BYTE *)(*(_QWORD *)(v146 + 80) + 88LL) & 8) != 0;
        sub_1588420((__int64)v268, (unsigned __int8 *)&v264);
        sub_15F7200(v268);
        a2 = (_QWORD *)(&dword_0 + 1);
        sub_B88650(v146, 1);
      }
      v146 = *(_QWORD *)(v146 + 80);
      if ( !v146 )
        goto LABEL_191;
    }
    v146 = v144;
  }
  while ( v144 );
LABEL_191:
  v89 = v249;
  v87 = v252;
LABEL_192:
  if ( v87 )
  {
LABEL_193:
    if ( sub_BAC730(v89, (__int64)a2, v144, (__int64)v145, v90, v91) == v87 )
    {
      v153 = v89;
      do
      {
        v154 = sub_BAB630(v153, (__int64)a2, v149, v150, v151, v152);
        v159 = (_QWORD *)v154;
        if ( !v154 )
          goto LABEL_99;
        if ( !*(_QWORD *)(v154 + 120) )
        {
          a2 = *(__int64 **)(v154 + 96);
          sub_A794E0(a2 + 11, (__int64)a2, v155, v156, v157, v158);
        }
        v153 = (__int64)v159;
      }
      while ( !sub_1896F80((__int64)v159, (__int64)a2, v155, v156, v157, v158) );
      v226 = sub_1896F80((__int64)v159, (__int64)a2, v149, v150, v151, v152);
      if ( !v159[15] )
      {
        a2 = (__int64 *)v159[12];
        sub_A794E0(a2 + 11, (__int64)a2, v222, v223, v224, v225);
      }
      v227 = sub_1896F80((__int64)v159, (__int64)a2, v222, v223, v224, v225);
      if ( v227 )
      {
        v232 = *(_QWORD *)(v227 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v232 )
          goto LABEL_346;
        v229 = 0;
        while ( (*(_BYTE *)(v232 + 28) & 0x7F) == 0x32 )
        {
LABEL_350:
          ++v229;
          v232 = *(_QWORD *)(v232 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v232 )
            goto LABEL_341;
        }
        while ( 1 )
        {
          v233 = *(_QWORD *)(v232 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v232 = v233;
          if ( !v233 )
            break;
          if ( (*(_BYTE *)(v233 + 28) & 0x7F) == 0x32 )
            goto LABEL_350;
        }
LABEL_341:
        v228 = (unsigned int)v229 - 1LL;
        if ( !(_DWORD)v229 )
          goto LABEL_346;
      }
      else
      {
        v228 = 4294967294LL;
      }
      do
      {
        do
        {
          v234 = *(_QWORD *)(v226 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v226 = v234;
        }
        while ( v234 && (*(_BYTE *)(v234 + 28) & 0x7F) != 0x32 );
        --v228;
      }
      while ( v228 != -1 );
LABEL_346:
      v235 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v226 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
      v236 = *(_BYTE *)(v235 + 16);
      if ( v236 == 5 || v236 == 48 && *((char *)sub_F60F10(v235, (__int64)a2, v228, v229, v230, v231) + 74) < 0 )
      {
        sub_168B9F0((__int64)v268, (__int64 *)(v244 + 8), *(_DWORD *)(v87 + 24), 0x1CEBu, 0);
        v264 = *(_QWORD *)(v87 + 40);
        v237 = sub_15894B0((__int64)v268, (__int64 *)&v264);
        v259 = *(_QWORD *)(v226 + 40);
        v238 = sub_15894B0(v237, &v259);
        v258 = *(_QWORD *)(v226 + 48);
        v239 = sub_162B6D0(v238, &v258);
        v257 = v159[5];
        sub_15894B0(v239, &v257);
        sub_15F7200(v268);
        sub_168B9F0((__int64)v268, (__int64 *)(v244 + 8), *(_DWORD *)(v226 + 24), 0x172Eu, 0);
        v264 = *(_QWORD *)(v226 + 40);
        sub_15894B0((__int64)v268, (__int64 *)&v264);
        sub_15F7200(v268);
      }
    }
  }
LABEL_99:
  if ( v250 )
  {
    if ( !(_DWORD)a10 )
    {
      sub_1A865E0(v10);
      goto LABEL_115;
    }
    v245 = a10 - 1;
    v93 = a9;
    v94 = (__int64)&a9[(unsigned int)(a10 - 1) + 1];
    v242 = a9 + 1;
    while ( 2 )
    {
      while ( 1 )
      {
        v95 = *v93;
        v264 = v95;
        if ( (v95 & 1) != 0 )
          break;
        v98 = (unsigned int *)&v265;
        v97 = (__int64 *)&v264;
        if ( v95 )
          goto LABEL_104;
        if ( ++v93 == (__int64 *)v94 )
        {
LABEL_109:
          sub_1A865E0(v10);
LABEL_110:
          v100 = a9;
          do
          {
            v101 = *v100;
            v268[0] = v101;
            if ( (v101 & 1) != 0 )
            {
              v102 = (unsigned int *)(v101 & 0xFFFFFFFFFFFFFFFELL);
              v103 = (__int64 *)((v101 & 0xFFFFFFFFFFFFFFFELL) + 8);
              v104 = (__int64)&v102[2 * *v102 + 2];
              if ( (__int64 *)v104 != v103 )
              {
                do
                {
                  v105 = *v103++;
                  *(_BYTE *)(v105 + 29) |= 0x10u;
                }
                while ( v103 != (__int64 *)v104 );
              }
            }
            else if ( v101 )
            {
              *(_BYTE *)(v268[0] + 29) |= 0x10u;
            }
            ++v100;
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*v10 + 256) + 80LL))(
              *(_QWORD *)(*v10 + 256),
              v268[0]);
          }
          while ( &v242[v245] != v100 );
          goto LABEL_115;
        }
      }
      v96 = (unsigned int *)(v95 & 0xFFFFFFFFFFFFFFFELL);
      v97 = (__int64 *)(v96 + 2);
      v98 = &v96[2 * *v96 + 2];
      if ( v98 != v96 + 2 )
      {
        do
        {
LABEL_104:
          v99 = *v97;
          if ( (*(_BYTE *)(*v97 + 28) & 0x7Fu) - 40 <= 6 && (*(_BYTE *)(v99 + 96) & 5) != 1 )
          {
            sub_168B9F0((__int64)v268, v10, *(_DWORD *)(v99 + 24), 0x113Du, 0);
            sub_15F7200(v268);
          }
          ++v97;
        }
        while ( v97 != (__int64 *)v98 );
      }
      if ( ++v93 == (__int64 *)v94 )
        goto LABEL_109;
      continue;
    }
  }
  sub_1A865E0(v10);
  if ( (_DWORD)a10 )
  {
    v245 = a10 - 1;
    v242 = a9 + 1;
    goto LABEL_110;
  }
LABEL_115:
  sub_17A5800((__int64 *)*v10, v243, v106, v107, v108, v109);
  operator delete(v262[0], 16LL * v263, 8);
  operator delete(v260[0], 16LL * v261, 8);
  return v254;
}
