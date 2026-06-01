void __fastcall sub_1CA9E30(__int64 *a1, __int64 a2, const __m128i *a3)
{
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 *v25; // rax
  _QWORD *v26; // r12
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rbp
  unsigned __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 j; // rax
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  __int64 *v54; // rax
  _QWORD *v55; // r15
  _QWORD *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rax
  __int64 v72; // r12
  _QWORD *v73; // rax
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __m128i *v77; // rbp
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // edx
  __int64 *v90; // rsi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 v95; // r12
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rbp
  unsigned __int64 v101; // r12
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 i; // rax
  __int64 v110; // rdi
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  __int64 *v115; // rax
  _QWORD *v116; // r12
  _QWORD *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // r12
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  unsigned __int64 v132; // rax
  __int64 v133; // rsi
  __int64 v134; // r12
  unsigned int *v135; // rsi
  signed __int64 v136; // r15
  bool v137; // bl
  unsigned int *v138; // rsi
  signed __int64 v139; // r15
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // r9
  __int64 v144; // r12
  __int64 v145; // rax
  _QWORD *v146; // rax
  unsigned __int8 *v147; // r12
  _BYTE *v148; // rdx
  __int64 v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // r12
  __int64 v155; // rax
  _QWORD *v156; // rax
  bool v157; // r15
  unsigned __int8 *v158; // rbx
  _BYTE *v159; // rdx
  __int64 v160; // rax
  bool v161; // r15
  unsigned __int8 *v162; // rbx
  _BYTE *v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // r8
  __int64 v168; // r9
  __int64 v169; // rax
  _QWORD *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // r8
  __int64 v174; // r9
  __int64 v175; // r13
  __int64 v176; // rax
  _QWORD *v177; // rax
  _BOOL8 v178; // rcx
  __int64 v179; // r13
  unsigned __int8 *v180; // rbx
  _BYTE *v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rdx
  int v184; // eax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // r8
  __int64 v188; // r9
  __int64 v189; // r13
  __int64 v190; // rax
  _QWORD *v191; // rax
  _BOOL8 v192; // rcx
  __int64 v193; // r13
  unsigned __int8 *v194; // rbx
  _BYTE *v195; // rdx
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // r9
  __int64 v201; // rax
  _QWORD *v202; // rax
  __int64 v203; // rax
  __int64 v204; // r14
  __int64 v205; // r15
  __int64 v206; // r14
  void *v207; // rdi
  __int64 v208; // rdx
  int v209; // eax
  __int64 v210; // rdx
  int v211; // eax
  __int64 v212; // rdx
  int v213; // eax
  __int64 v214; // rdx
  int v215; // eax
  __int64 v216; // rax
  __int64 v217; // r13
  __int64 v218; // rdx
  __int64 v219; // r13
  void *v220; // rdi
  __int64 v221; // rax
  __int64 v222; // r15
  __int64 v223; // rdx
  __int64 v224; // r15
  void *v225; // rdi
  __int64 v226; // rax
  __int64 v227; // r13
  __int64 v228; // rdx
  __int64 v229; // r13
  void *v230; // rdi
  __int64 v231; // rax
  __int64 v232; // r15
  __int64 v233; // rdx
  __int64 v234; // r15
  void *v235; // rdi
  __int64 v236; // [rsp+0h] [rbp-E8h]
  __int64 v237; // [rsp+0h] [rbp-E8h]
  __int64 v238; // [rsp+0h] [rbp-E8h]
  __int64 v239; // [rsp+0h] [rbp-E8h]
  __int64 v240; // [rsp+0h] [rbp-E8h]
  __int64 v241; // [rsp+0h] [rbp-E8h]
  _BOOL8 v242; // [rsp+0h] [rbp-E8h]
  __int64 v243; // [rsp+0h] [rbp-E8h]
  _BOOL8 v244; // [rsp+0h] [rbp-E8h]
  __int64 v245; // [rsp+8h] [rbp-E0h]
  __int64 v246; // [rsp+8h] [rbp-E0h]
  unsigned __int32 v247; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v248; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v249[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v250; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v251[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v252; // [rsp+98h] [rbp-50h]
  unsigned int v253; // [rsp+A0h] [rbp-48h]
  char v254; // [rsp+A4h] [rbp-44h]

  if ( *(char *)(a2 + 28) < 0 )
    return;
  v6 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( !(unsigned __int8)sub_B19970(
                           *(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) + 16LL,
                           **(unsigned int **)(*(_QWORD *)(v6 + 8) + 16LL),
                           (int *)&v247) )
  {
    sub_168B9F0((__int64)v249, a1, a3[1].m128i_u32[2], 0x19C0u, 0);
    v82 = sub_15DD120((__int64)v249, (__int64)a3);
    v83 = *(_QWORD *)(v6 + 8);
    v84 = v82;
    if ( !*(_BYTE *)(v82 + 120) )
    {
      if ( *(_BYTE *)(v82 + 132) )
      {
        v154 = sub_168B9E0((_QWORD *)v82);
        v155 = *(_QWORD *)(v84 + 16);
        if ( v155 )
          v155 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v155 + 32LL))(*(_QWORD *)(v84 + 16));
        v248 = v155;
        v156 = sub_1587BC0(v154, &v248, v150, v151, v152, v153);
        sub_AE9DF0((unsigned __int8 **)(*v156 + 32LL * *(unsigned int *)(v84 + 128) + 8), v83, 5u);
      }
      goto LABEL_67;
    }
    v147 = *(unsigned __int8 **)(v82 + 32);
    if ( !v147 )
    {
      v183 = *(_QWORD *)(v82 + 40);
      v184 = *(_DWORD *)(v183 + 14976);
      if ( v184 )
      {
        v203 = (unsigned int)(v184 - 1);
        *(_DWORD *)(v183 + 14976) = v203;
        v147 = *(unsigned __int8 **)(v183 + 8 * v203 + 14848);
        v204 = *((unsigned int *)v147 + 134);
        v205 = *((_QWORD *)v147 + 66);
        *v147 = 0;
        *((_DWORD *)v147 + 106) = 0;
        v206 = v205 + (v204 << 6);
        while ( v205 != v206 )
        {
          while ( 1 )
          {
            v206 -= 64;
            v207 = *(void **)(v206 + 24);
            if ( v207 == (void *)(v206 + 40) )
              break;
            operator delete(v207);
            if ( v205 == v206 )
              goto LABEL_210;
          }
        }
LABEL_210:
        *((_DWORD *)v147 + 134) = 0;
      }
      else
      {
        v147 = (unsigned __int8 *)operator new(0x3A0u);
        *v147 = 0;
        *((_QWORD *)v147 + 12) = v147 + 112;
        *((_QWORD *)v147 + 16) = v147 + 144;
        *((_QWORD *)v147 + 20) = v147 + 176;
        *((_QWORD *)v147 + 24) = v147 + 208;
        *((_QWORD *)v147 + 28) = v147 + 240;
        *((_QWORD *)v147 + 32) = v147 + 272;
        *((_QWORD *)v147 + 36) = v147 + 304;
        *((_QWORD *)v147 + 40) = v147 + 336;
        *((_QWORD *)v147 + 44) = v147 + 368;
        *((_QWORD *)v147 + 48) = v147 + 400;
        *((_QWORD *)v147 + 52) = v147 + 432;
        *((_QWORD *)v147 + 13) = 0;
        v147[112] = 0;
        *((_QWORD *)v147 + 17) = 0;
        v147[144] = 0;
        *((_QWORD *)v147 + 21) = 0;
        v147[176] = 0;
        *((_QWORD *)v147 + 25) = 0;
        v147[208] = 0;
        *((_QWORD *)v147 + 29) = 0;
        v147[240] = 0;
        *((_QWORD *)v147 + 33) = 0;
        v147[272] = 0;
        *((_QWORD *)v147 + 37) = 0;
        v147[304] = 0;
        *((_QWORD *)v147 + 41) = 0;
        v147[336] = 0;
        *((_QWORD *)v147 + 45) = 0;
        v147[368] = 0;
        *((_QWORD *)v147 + 49) = 0;
        v147[400] = 0;
        *((_QWORD *)v147 + 53) = 0x800000000LL;
        *((_QWORD *)v147 + 66) = v147 + 544;
        *((_QWORD *)v147 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v84 + 32) = v147;
    }
    v147[*v147 + 1] = 5;
    v148 = *(_BYTE **)(v84 + 32);
    v149 = (unsigned __int8)*v148;
    *v148 = v149 + 1;
    *(_QWORD *)&v148[8 * v149 + 16] = v83;
    goto LABEL_67;
  }
  if ( v247 == 2 )
  {
    v7 = *a1;
    v98 = sub_B8DC30(a2, 1);
    if ( v98 )
    {
      v99 = *(unsigned __int16 *)(v98 + 22);
    }
    else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
    {
      v99 = *(_DWORD *)(a2 + 80);
    }
    else
    {
      v99 = *(_DWORD *)(a2 + 104);
    }
    if ( v99 )
    {
      v100 = 0;
      v238 = 8LL * (unsigned int)(v99 - 1) + 8;
      do
      {
        v122 = sub_B8DC30(a2, 1);
        if ( v122 )
        {
          v123 = *(_QWORD *)(v122 + v100 + 48);
        }
        else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
        {
          v123 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + v100) + 48LL);
        }
        else
        {
          v123 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + v100) + 48LL);
        }
        v124 = *(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v124 + 16) == 42
          || (v125 = *(_QWORD *)(*(_QWORD *)(v124 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v125 + 16) == 42)
          && (v124 = sub_F63050(v124, 1, v125, v106)) != 0 )
        {
          v101 = *(_QWORD *)(v124 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v102 = *(_QWORD *)v101;
          v103 = *(unsigned __int8 *)(*(_QWORD *)v101 + 16LL);
          if ( (_BYTE)v103 == 34 )
            goto LABEL_105;
          v106 = *(_QWORD *)(*(_QWORD *)(v102 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v106 + 16) == 34 )
          {
            v102 = sub_F63050(v102, 1, v103, v106);
            if ( !v102 )
              goto LABEL_114;
LABEL_105:
            v104 = *(_QWORD *)(*(_QWORD *)(v102 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v105 = (unsigned int)*(unsigned __int8 *)(v104 + 16) - 35;
            if ( (unsigned int)v105 > 1 )
              v104 = sub_F63050(v104, 1, v105, v106);
            for ( i = *(_QWORD *)(v104 + 24); ; i = *(_QWORD *)(v110 + 24) )
            {
              v110 = *(_QWORD *)(i & 0xFFFFFFFFFFFFFFF0LL);
              v111 = *(unsigned __int8 *)(v110 + 16);
              if ( (unsigned int)(v111 - 35) > 1 )
              {
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v110 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 35 > 1 )
                  goto LABEL_114;
                v127 = sub_F63050(v110, 1, v111, v106);
                v110 = v127;
                if ( !v127 )
                  goto LABEL_114;
                v111 = *(unsigned __int8 *)(v127 + 16);
                if ( (_BYTE)v111 == 36 )
                {
LABEL_110:
                  v112 = sub_F62610(v110, 1, v111, v106, v107, v108);
                  if ( !v112 )
                    goto LABEL_114;
                  v113 = *(_QWORD *)(v112 + 40);
                  v114 = v113 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v113 & 7) != 0 )
                    v114 = 0;
                  if ( sub_1A88B90(*(_QWORD **)(v7 + 736)) != v114 )
                  {
LABEL_114:
                    v102 = *(_QWORD *)v101;
                    v103 = *(unsigned __int8 *)(*(_QWORD *)v101 + 16LL);
                    break;
                  }
LABEL_137:
                  v128 = *a1;
                  v129 = sub_B8DC30(a2, 1);
                  if ( v129 )
                    v130 = *(_QWORD *)(v129 + 24);
                  else
                    v130 = *(_QWORD *)(a2 + 80);
                  v131 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v130 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
                  v132 = *(unsigned __int8 *)(v131 + 16);
                  if ( (_BYTE)v132 == 42 )
                    goto LABEL_61;
                  if ( (unsigned __int8)v132 <= 0x2Cu )
                  {
                    v133 = 0x180400000800LL;
                    if ( _bittest64(&v133, v132) )
                    {
                      if ( (unsigned int)(unsigned __int8)v132 - 43 > 1 )
                        goto LABEL_61;
                    }
                    else if ( (_BYTE)v132 == 13 && ((*(_WORD *)(v131 + 18) >> 3) & 0x1FF) == 0x1E8 )
                    {
                      goto LABEL_61;
                    }
                  }
                  sub_168B9F0((__int64)v249, (__int64 *)(v128 + 8), a3[1].m128i_u32[2], 0xC4Au, 0);
                  v134 = sub_15DD120((__int64)v249, (__int64)a3);
                  v135 = *(unsigned int **)(*(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
                  v136 = *v135;
                  if ( *(_BYTE *)(v134 + 120) )
                  {
                    sub_AEC220((unsigned __int8 **)(v134 + 32), (_BYTE *)v135 + 16, v136);
                  }
                  else
                  {
                    if ( !*(_BYTE *)(v134 + 132) )
                      goto LABEL_145;
                    v165 = sub_168B9E0((_QWORD *)v134);
                    v169 = *(_QWORD *)(v134 + 16);
                    if ( v169 )
                    {
                      v239 = v165;
                      v169 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v169 + 32LL))(v169);
                      v165 = v239;
                    }
                    v248 = v169;
                    v170 = sub_1587BC0(v165, &v248, v165, v166, v167, v168);
                    sub_AEC220(
                      (unsigned __int8 **)(*v170 + 32LL * *(unsigned int *)(v134 + 128) + 8),
                      (_BYTE *)v135 + 16,
                      v136);
                  }
                  v157 = (*(_BYTE *)(a2 + 28) & 0x7F) == 18;
                  if ( *(_BYTE *)(v134 + 120) )
                  {
                    v158 = *(unsigned __int8 **)(v134 + 32);
                    if ( !v158 )
                    {
                      v208 = *(_QWORD *)(v134 + 40);
                      v209 = *(_DWORD *)(v208 + 14976);
                      if ( v209 )
                      {
                        v216 = (unsigned int)(v209 - 1);
                        *(_DWORD *)(v208 + 14976) = v216;
                        v158 = *(unsigned __int8 **)(v208 + 8 * v216 + 14848);
                        v217 = *((unsigned int *)v158 + 134);
                        *v158 = 0;
                        v218 = *((_QWORD *)v158 + 66);
                        *((_DWORD *)v158 + 106) = 0;
                        v219 = v218 + (v217 << 6);
                        while ( v218 != v219 )
                        {
                          while ( 1 )
                          {
                            v219 -= 64;
                            v220 = *(void **)(v219 + 24);
                            if ( v220 == (void *)(v219 + 40) )
                              break;
                            v241 = v218;
                            operator delete(v220);
                            v218 = v241;
                            if ( v241 == v219 )
                              goto LABEL_227;
                          }
                        }
LABEL_227:
                        *((_DWORD *)v158 + 134) = 0;
                      }
                      else
                      {
                        v158 = (unsigned __int8 *)operator new(0x3A0u);
                        *v158 = 0;
                        *((_QWORD *)v158 + 12) = v158 + 112;
                        *((_QWORD *)v158 + 16) = v158 + 144;
                        *((_QWORD *)v158 + 20) = v158 + 176;
                        *((_QWORD *)v158 + 24) = v158 + 208;
                        *((_QWORD *)v158 + 28) = v158 + 240;
                        *((_QWORD *)v158 + 32) = v158 + 272;
                        *((_QWORD *)v158 + 36) = v158 + 304;
                        *((_QWORD *)v158 + 40) = v158 + 336;
                        *((_QWORD *)v158 + 44) = v158 + 368;
                        *((_QWORD *)v158 + 48) = v158 + 400;
                        *((_QWORD *)v158 + 52) = v158 + 432;
                        *((_QWORD *)v158 + 13) = 0;
                        v158[112] = 0;
                        *((_QWORD *)v158 + 17) = 0;
                        v158[144] = 0;
                        *((_QWORD *)v158 + 21) = 0;
                        v158[176] = 0;
                        *((_QWORD *)v158 + 25) = 0;
                        v158[208] = 0;
                        *((_QWORD *)v158 + 29) = 0;
                        v158[240] = 0;
                        *((_QWORD *)v158 + 33) = 0;
                        v158[272] = 0;
                        *((_QWORD *)v158 + 37) = 0;
                        v158[304] = 0;
                        *((_QWORD *)v158 + 41) = 0;
                        v158[336] = 0;
                        *((_QWORD *)v158 + 45) = 0;
                        v158[368] = 0;
                        *((_QWORD *)v158 + 49) = 0;
                        v158[400] = 0;
                        *((_QWORD *)v158 + 53) = 0x800000000LL;
                        *((_QWORD *)v158 + 66) = v158 + 544;
                        *((_QWORD *)v158 + 67) = 0x600000000LL;
                      }
                      *(_QWORD *)(v134 + 32) = v158;
                    }
                    v158[*v158 + 1] = 2;
                    v159 = *(_BYTE **)(v134 + 32);
                    v160 = (unsigned __int8)*v159;
                    *v159 = v160 + 1;
                    *(_QWORD *)&v159[8 * v160 + 16] = v157;
                  }
                  else if ( *(_BYTE *)(v134 + 132) )
                  {
                    v175 = sub_168B9E0((_QWORD *)v134);
                    v176 = *(_QWORD *)(v134 + 16);
                    if ( v176 )
                      v176 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v176 + 32LL))(*(_QWORD *)(v134 + 16));
                    v248 = v176;
                    v177 = sub_1587BC0(v175, &v248, v171, v172, v173, v174);
                    v178 = v157;
                    v179 = *v177 + 32LL * *(unsigned int *)(v134 + 128);
                    v180 = *(unsigned __int8 **)(v179 + 8);
                    if ( !v180 )
                    {
                      v212 = *(_QWORD *)(v179 + 16);
                      v213 = *(_DWORD *)(v212 + 14976);
                      if ( v213 )
                      {
                        v221 = (unsigned int)(v213 - 1);
                        *(_DWORD *)(v212 + 14976) = v221;
                        v180 = *(unsigned __int8 **)(v212 + 8 * v221 + 14848);
                        v222 = *((unsigned int *)v180 + 134);
                        *v180 = 0;
                        v223 = *((_QWORD *)v180 + 66);
                        *((_DWORD *)v180 + 106) = 0;
                        v224 = v223 + (v222 << 6);
                        while ( v223 != v224 )
                        {
                          while ( 1 )
                          {
                            v224 -= 64;
                            v225 = *(void **)(v224 + 24);
                            if ( v225 == (void *)(v224 + 40) )
                              break;
                            v245 = v223;
                            v242 = v178;
                            operator delete(v225);
                            v223 = v245;
                            v178 = v242;
                            if ( v245 == v224 )
                              goto LABEL_232;
                          }
                        }
LABEL_232:
                        *((_DWORD *)v180 + 134) = 0;
                      }
                      else
                      {
                        v180 = (unsigned __int8 *)operator new(0x3A0u);
                        *v180 = 0;
                        *((_QWORD *)v180 + 12) = v180 + 112;
                        *((_QWORD *)v180 + 16) = v180 + 144;
                        *((_QWORD *)v180 + 20) = v180 + 176;
                        *((_QWORD *)v180 + 24) = v180 + 208;
                        *((_QWORD *)v180 + 28) = v180 + 240;
                        *((_QWORD *)v180 + 32) = v180 + 272;
                        *((_QWORD *)v180 + 36) = v180 + 304;
                        *((_QWORD *)v180 + 40) = v180 + 336;
                        *((_QWORD *)v180 + 44) = v180 + 368;
                        *((_QWORD *)v180 + 48) = v180 + 400;
                        *((_QWORD *)v180 + 52) = v180 + 432;
                        v180[112] = 0;
                        *((_QWORD *)v180 + 13) = 0;
                        *((_QWORD *)v180 + 17) = 0;
                        v180[144] = 0;
                        *((_QWORD *)v180 + 21) = 0;
                        v180[176] = 0;
                        *((_QWORD *)v180 + 25) = 0;
                        v180[208] = 0;
                        *((_QWORD *)v180 + 29) = 0;
                        v180[240] = 0;
                        *((_QWORD *)v180 + 33) = 0;
                        v180[272] = 0;
                        *((_QWORD *)v180 + 37) = 0;
                        v180[304] = 0;
                        *((_QWORD *)v180 + 41) = 0;
                        v180[336] = 0;
                        *((_QWORD *)v180 + 45) = 0;
                        v180[368] = 0;
                        *((_QWORD *)v180 + 49) = 0;
                        v180[400] = 0;
                        *((_QWORD *)v180 + 53) = 0x800000000LL;
                        v178 = v157;
                        *((_QWORD *)v180 + 66) = v180 + 544;
                        *((_QWORD *)v180 + 67) = 0x600000000LL;
                      }
                      *(_QWORD *)(v179 + 8) = v180;
                    }
                    v180[*v180 + 1] = 2;
                    v181 = *(_BYTE **)(v179 + 8);
                    v182 = (unsigned __int8)*v181;
                    *v181 = v182 + 1;
                    *(_QWORD *)&v181[8 * v182 + 16] = v178;
                  }
LABEL_145:
                  LODWORD(v248) = 1;
                  goto LABEL_146;
                }
              }
              else if ( (_BYTE)v111 == 36 )
              {
                goto LABEL_110;
              }
            }
          }
          if ( (_BYTE)v103 == 42
            || (v126 = *(_QWORD *)(*(_QWORD *)(v102 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v126 + 16) == 42)
            && (v102 = sub_F63050(v102, 1, v126, v106)) != 0 )
          {
            v115 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v115 + 16) == 48 )
            {
              v116 = *(_QWORD **)(v7 + 736);
              v117 = sub_F60F10(*v115, 1, v103, v106, v107, v108);
              if ( sub_1A88E20(v116, (__int64)v117, v118, v119, v120, v121) )
                goto LABEL_137;
            }
          }
        }
        v100 += 8;
      }
      while ( v238 != v100 );
    }
    goto LABEL_94;
  }
  if ( v247 > 2 )
  {
    if ( v247 > 4 )
      goto LABEL_61;
    v36 = *a1;
    v37 = sub_B8DC30(a2, 1);
    if ( v37 )
    {
      v38 = *(unsigned __int16 *)(v37 + 22);
    }
    else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
    {
      v38 = *(_DWORD *)(a2 + 80);
    }
    else
    {
      v38 = *(_DWORD *)(a2 + 104);
    }
    if ( v38 )
    {
      v39 = 0;
      v237 = 8LL * (unsigned int)(v38 - 1) + 8;
      do
      {
        v61 = sub_B8DC30(a2, 1);
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + v39 + 48);
        }
        else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
        {
          v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + v39) + 48LL);
        }
        else
        {
          v62 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + v39) + 48LL);
        }
        v63 = *(_QWORD *)(v62 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v63 + 16) == 42
          || (v64 = *(_QWORD *)(*(_QWORD *)(v63 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v64 + 16) == 42)
          && (v63 = sub_F63050(v63, 1, v64, v45)) != 0 )
        {
          v40 = *(_QWORD *)(v63 + 32) & 0xFFFFFFFFFFFFFFF0LL;
          v41 = *(_QWORD *)v40;
          v42 = *(unsigned __int8 *)(*(_QWORD *)v40 + 16LL);
          if ( (_BYTE)v42 == 34 )
            goto LABEL_37;
          v45 = *(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v45 + 16) == 34 )
          {
            v41 = sub_F63050(v41, 1, v42, v45);
            if ( !v41 )
              goto LABEL_46;
LABEL_37:
            v43 = *(_QWORD *)(*(_QWORD *)(v41 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            v44 = (unsigned int)*(unsigned __int8 *)(v43 + 16) - 35;
            if ( (unsigned int)v44 > 1 )
              v43 = sub_F63050(v43, 1, v44, v45);
            for ( j = *(_QWORD *)(v43 + 24); ; j = *(_QWORD *)(v49 + 24) )
            {
              v49 = *(_QWORD *)(j & 0xFFFFFFFFFFFFFFF0LL);
              v50 = *(unsigned __int8 *)(v49 + 16);
              if ( (unsigned int)(v50 - 35) > 1 )
              {
                if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v49 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 35 > 1 )
                  goto LABEL_46;
                v87 = sub_F63050(v49, 1, v50, v45);
                v49 = v87;
                if ( !v87 )
                  goto LABEL_46;
                v50 = *(unsigned __int8 *)(v87 + 16);
                if ( (_BYTE)v50 == 36 )
                {
LABEL_42:
                  v51 = sub_F62610(v49, 1, v50, v45, v46, v47);
                  if ( !v51 )
                    goto LABEL_46;
                  v52 = *(_QWORD *)(v51 + 40);
                  v53 = v52 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( (v52 & 7) != 0 )
                    v53 = 0;
                  if ( sub_1A88B90(*(_QWORD **)(v36 + 736)) != v53 )
                  {
LABEL_46:
                    v41 = *(_QWORD *)v40;
                    v42 = *(unsigned __int8 *)(*(_QWORD *)v40 + 16LL);
                    break;
                  }
LABEL_58:
                  v65 = *a1;
                  v66 = sub_B8DC30(a2, 1);
                  if ( v66 )
                    v71 = *(_QWORD *)(v66 + 24);
                  else
                    v71 = *(_QWORD *)(a2 + 80);
                  if ( sub_F60F80(*(_QWORD *)(v71 & 0xFFFFFFFFFFFFFFF0LL), *(_QWORD *)(v65 + 248), v67, v68, v69, v70) )
                    goto LABEL_61;
                  sub_168B9F0((__int64)v249, (__int64 *)(v65 + 8), a3[1].m128i_u32[2], 0xC4Au, 0);
                  v134 = sub_15DD120((__int64)v249, (__int64)a3);
                  v138 = *(unsigned int **)(*(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
                  v139 = *v138;
                  if ( *(_BYTE *)(v134 + 120) )
                  {
                    sub_AEC220((unsigned __int8 **)(v134 + 32), (_BYTE *)v138 + 16, v139);
                  }
                  else
                  {
                    if ( !*(_BYTE *)(v134 + 132) )
                      goto LABEL_159;
                    v197 = sub_168B9E0((_QWORD *)v134);
                    v201 = *(_QWORD *)(v134 + 16);
                    if ( v201 )
                    {
                      v240 = v197;
                      v201 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v201 + 32LL))(v201);
                      v197 = v240;
                    }
                    v248 = v201;
                    v202 = sub_1587BC0(v197, &v248, v197, v198, v199, v200);
                    sub_AEC220(
                      (unsigned __int8 **)(*v202 + 32LL * *(unsigned int *)(v134 + 128) + 8),
                      (_BYTE *)v138 + 16,
                      v139);
                  }
                  v161 = (*(_BYTE *)(a2 + 28) & 0x7F) == 18;
                  if ( *(_BYTE *)(v134 + 120) )
                  {
                    v162 = *(unsigned __int8 **)(v134 + 32);
                    if ( !v162 )
                    {
                      v210 = *(_QWORD *)(v134 + 40);
                      v211 = *(_DWORD *)(v210 + 14976);
                      if ( v211 )
                      {
                        v226 = (unsigned int)(v211 - 1);
                        *(_DWORD *)(v210 + 14976) = v226;
                        v162 = *(unsigned __int8 **)(v210 + 8 * v226 + 14848);
                        v227 = *((unsigned int *)v162 + 134);
                        *v162 = 0;
                        v228 = *((_QWORD *)v162 + 66);
                        *((_DWORD *)v162 + 106) = 0;
                        v229 = v228 + (v227 << 6);
                        while ( v228 != v229 )
                        {
                          while ( 1 )
                          {
                            v229 -= 64;
                            v230 = *(void **)(v229 + 24);
                            if ( v230 == (void *)(v229 + 40) )
                              break;
                            v243 = v228;
                            operator delete(v230);
                            v228 = v243;
                            if ( v243 == v229 )
                              goto LABEL_237;
                          }
                        }
LABEL_237:
                        *((_DWORD *)v162 + 134) = 0;
                      }
                      else
                      {
                        v162 = (unsigned __int8 *)operator new(0x3A0u);
                        *v162 = 0;
                        *((_QWORD *)v162 + 12) = v162 + 112;
                        *((_QWORD *)v162 + 16) = v162 + 144;
                        *((_QWORD *)v162 + 20) = v162 + 176;
                        *((_QWORD *)v162 + 24) = v162 + 208;
                        *((_QWORD *)v162 + 28) = v162 + 240;
                        *((_QWORD *)v162 + 32) = v162 + 272;
                        *((_QWORD *)v162 + 36) = v162 + 304;
                        *((_QWORD *)v162 + 40) = v162 + 336;
                        *((_QWORD *)v162 + 44) = v162 + 368;
                        *((_QWORD *)v162 + 48) = v162 + 400;
                        *((_QWORD *)v162 + 52) = v162 + 432;
                        v162[112] = 0;
                        *((_QWORD *)v162 + 13) = 0;
                        *((_QWORD *)v162 + 17) = 0;
                        v162[144] = 0;
                        *((_QWORD *)v162 + 21) = 0;
                        v162[176] = 0;
                        *((_QWORD *)v162 + 25) = 0;
                        v162[208] = 0;
                        *((_QWORD *)v162 + 29) = 0;
                        v162[240] = 0;
                        *((_QWORD *)v162 + 33) = 0;
                        v162[272] = 0;
                        *((_QWORD *)v162 + 37) = 0;
                        v162[304] = 0;
                        *((_QWORD *)v162 + 41) = 0;
                        v162[336] = 0;
                        *((_QWORD *)v162 + 45) = 0;
                        v162[368] = 0;
                        *((_QWORD *)v162 + 49) = 0;
                        v162[400] = 0;
                        *((_QWORD *)v162 + 53) = 0x800000000LL;
                        *((_QWORD *)v162 + 66) = v162 + 544;
                        *((_QWORD *)v162 + 67) = 0x600000000LL;
                      }
                      *(_QWORD *)(v134 + 32) = v162;
                    }
                    v162[*v162 + 1] = 2;
                    v163 = *(_BYTE **)(v134 + 32);
                    v164 = (unsigned __int8)*v163;
                    *v163 = v164 + 1;
                    *(_QWORD *)&v163[8 * v164 + 16] = v161;
                  }
                  else if ( *(_BYTE *)(v134 + 132) )
                  {
                    v189 = sub_168B9E0((_QWORD *)v134);
                    v190 = *(_QWORD *)(v134 + 16);
                    if ( v190 )
                      v190 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v190 + 32LL))(*(_QWORD *)(v134 + 16));
                    v248 = v190;
                    v191 = sub_1587BC0(v189, &v248, v185, v186, v187, v188);
                    v192 = v161;
                    v193 = *v191 + 32LL * *(unsigned int *)(v134 + 128);
                    v194 = *(unsigned __int8 **)(v193 + 8);
                    if ( !v194 )
                    {
                      v214 = *(_QWORD *)(v193 + 16);
                      v215 = *(_DWORD *)(v214 + 14976);
                      if ( v215 )
                      {
                        v231 = (unsigned int)(v215 - 1);
                        *(_DWORD *)(v214 + 14976) = v231;
                        v194 = *(unsigned __int8 **)(v214 + 8 * v231 + 14848);
                        v232 = *((unsigned int *)v194 + 134);
                        *v194 = 0;
                        v233 = *((_QWORD *)v194 + 66);
                        *((_DWORD *)v194 + 106) = 0;
                        v234 = v233 + (v232 << 6);
                        while ( v233 != v234 )
                        {
                          while ( 1 )
                          {
                            v234 -= 64;
                            v235 = *(void **)(v234 + 24);
                            if ( v235 == (void *)(v234 + 40) )
                              break;
                            v246 = v233;
                            v244 = v192;
                            operator delete(v235);
                            v233 = v246;
                            v192 = v244;
                            if ( v246 == v234 )
                              goto LABEL_242;
                          }
                        }
LABEL_242:
                        *((_DWORD *)v194 + 134) = 0;
                      }
                      else
                      {
                        v194 = (unsigned __int8 *)operator new(0x3A0u);
                        *v194 = 0;
                        *((_QWORD *)v194 + 12) = v194 + 112;
                        *((_QWORD *)v194 + 16) = v194 + 144;
                        *((_QWORD *)v194 + 20) = v194 + 176;
                        *((_QWORD *)v194 + 24) = v194 + 208;
                        *((_QWORD *)v194 + 28) = v194 + 240;
                        *((_QWORD *)v194 + 32) = v194 + 272;
                        *((_QWORD *)v194 + 36) = v194 + 304;
                        *((_QWORD *)v194 + 40) = v194 + 336;
                        *((_QWORD *)v194 + 44) = v194 + 368;
                        *((_QWORD *)v194 + 48) = v194 + 400;
                        *((_QWORD *)v194 + 52) = v194 + 432;
                        v194[112] = 0;
                        *((_QWORD *)v194 + 13) = 0;
                        *((_QWORD *)v194 + 17) = 0;
                        v194[144] = 0;
                        *((_QWORD *)v194 + 21) = 0;
                        v194[176] = 0;
                        *((_QWORD *)v194 + 25) = 0;
                        v194[208] = 0;
                        *((_QWORD *)v194 + 29) = 0;
                        v194[240] = 0;
                        *((_QWORD *)v194 + 33) = 0;
                        v194[272] = 0;
                        *((_QWORD *)v194 + 37) = 0;
                        v194[304] = 0;
                        *((_QWORD *)v194 + 41) = 0;
                        v194[336] = 0;
                        *((_QWORD *)v194 + 45) = 0;
                        v194[368] = 0;
                        *((_QWORD *)v194 + 49) = 0;
                        v194[400] = 0;
                        *((_QWORD *)v194 + 53) = 0x800000000LL;
                        v192 = v161;
                        *((_QWORD *)v194 + 66) = v194 + 544;
                        *((_QWORD *)v194 + 67) = 0x600000000LL;
                      }
                      *(_QWORD *)(v193 + 8) = v194;
                    }
                    v194[*v194 + 1] = 2;
                    v195 = *(_BYTE **)(v193 + 8);
                    v196 = (unsigned __int8)*v195;
                    *v195 = v196 + 1;
                    *(_QWORD *)&v195[8 * v196 + 16] = v192;
                  }
LABEL_159:
                  LODWORD(v248) = 0;
LABEL_146:
                  sub_1587D10(v134, (int *)&v248);
LABEL_67:
                  sub_15F7200(v249);
                  return;
                }
              }
              else if ( (_BYTE)v50 == 36 )
              {
                goto LABEL_42;
              }
            }
          }
          if ( (_BYTE)v42 == 42
            || (v86 = *(_QWORD *)(*(_QWORD *)(v41 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v86 + 16) == 42)
            && (v41 = sub_F63050(v41, 1, v86, v45)) != 0 )
          {
            v54 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*v54 + 16) == 48 )
            {
              v55 = *(_QWORD **)(v36 + 736);
              v56 = sub_F60F10(*v54, 1, v42, v45, v46, v47);
              if ( sub_1A88E20(v55, (__int64)v56, v57, v58, v59, v60) )
                goto LABEL_58;
            }
          }
        }
        v39 += 8;
      }
      while ( v39 != v237 );
    }
    v89 = a3[1].m128i_u32[2];
    v90 = (__int64 *)(v36 + 8);
LABEL_95:
    sub_168B9F0((__int64)v249, v90, v89, 0xC49u, 0);
    if ( v252 )
    {
      sub_AE9DF0(v251, (__int64)a3, 0x10u);
    }
    else
    {
      if ( !v254 )
        goto LABEL_67;
      v95 = sub_168B9E0(v249);
      v96 = v250;
      if ( v250 )
        v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v250 + 32LL))(v250);
      v248 = v96;
      v97 = sub_1587BC0(v95, &v248, v91, v92, v93, v94);
      sub_AE9DF0((unsigned __int8 **)(*v97 + 32LL * v253 + 8), (__int64)a3, 0x10u);
    }
    v137 = (*(_BYTE *)(a2 + 28) & 0x7F) == 18;
    if ( v252 )
    {
      sub_AE9DF0(v251, v137, 2u);
    }
    else if ( v254 )
    {
      v144 = sub_168B9E0(v249);
      v145 = v250;
      if ( v250 )
        v145 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v250 + 32LL))(v250);
      v248 = v145;
      v146 = sub_1587BC0(v144, &v248, v140, v141, v142, v143);
      sub_AE9DF0((unsigned __int8 **)(*v146 + 32LL * v253 + 8), v137, 2u);
    }
    goto LABEL_67;
  }
  if ( v247 != 1 )
    goto LABEL_61;
  v7 = *a1;
  v8 = sub_B8DC30(a2, 1);
  if ( v8 )
  {
    v9 = *(unsigned __int16 *)(v8 + 22);
  }
  else if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 8 )
  {
    v9 = *(_DWORD *)(a2 + 80);
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 104);
  }
  if ( !v9 )
  {
LABEL_94:
    v89 = a3[1].m128i_u32[2];
    v90 = (__int64 *)(v7 + 8);
    goto LABEL_95;
  }
  v10 = 0;
  v236 = 8LL * (unsigned int)(v9 - 1) + 8;
  while ( 1 )
  {
    v32 = sub_B8DC30(a2, 1);
    if ( v32 )
      v33 = *(_QWORD *)(v32 + v10 + 48);
    else
      v33 = (*(_BYTE *)(a2 + 28) & 0x7F) == 8
          ? *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + v10) + 48LL)
          : *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + v10) + 48LL);
    v34 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v34 + 16) == 42 )
      break;
    v35 = *(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v35 + 16) == 42 )
    {
      v34 = sub_F63050(v34, 1, v35, v16);
      if ( v34 )
        break;
    }
LABEL_24:
    v10 += 8;
    if ( v236 == v10 )
      goto LABEL_94;
  }
  v11 = *(_QWORD *)(v34 + 32) & 0xFFFFFFFFFFFFFFF0LL;
  v12 = *(_QWORD *)v11;
  v13 = *(unsigned __int8 *)(*(_QWORD *)v11 + 16LL);
  if ( (_BYTE)v13 == 34 )
    goto LABEL_11;
  v16 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) != 34 )
  {
LABEL_21:
    if ( (_BYTE)v13 == 42
      || (v85 = *(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v85 + 16) == 42)
      && (v12 = sub_F63050(v12, 1, v85, v16)) != 0 )
    {
      v25 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v25 + 16) == 48 )
      {
        v26 = *(_QWORD **)(v7 + 736);
        v27 = sub_F60F10(*v25, 1, v13, v16, v17, v18);
        if ( sub_1A88E20(v26, (__int64)v27, v28, v29, v30, v31) )
          goto LABEL_61;
      }
    }
    goto LABEL_24;
  }
  v12 = sub_F63050(v12, 1, v13, v16);
  if ( !v12 )
    goto LABEL_20;
LABEL_11:
  v14 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v15 = (unsigned int)*(unsigned __int8 *)(v14 + 16) - 35;
  if ( (unsigned int)v15 > 1 )
    v14 = sub_F63050(v14, 1, v15, v16);
  v19 = *(_QWORD *)(v14 + 24);
  while ( 2 )
  {
    v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(unsigned __int8 *)(v20 + 16);
    if ( (unsigned int)(v21 - 35) <= 1 )
    {
      if ( (_BYTE)v21 == 36 )
        break;
      goto LABEL_87;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
      goto LABEL_20;
    v88 = sub_F63050(v20, 1, v21, v16);
    v20 = v88;
    if ( !v88 )
      goto LABEL_20;
    v21 = *(unsigned __int8 *)(v88 + 16);
    if ( (_BYTE)v21 != 36 )
    {
LABEL_87:
      v19 = *(_QWORD *)(v20 + 24);
      continue;
    }
    break;
  }
  v22 = sub_F62610(v20, 1, v21, v16, v17, v18);
  if ( !v22 )
    goto LABEL_20;
  v23 = *(_QWORD *)(v22 + 40);
  v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v23 & 7) != 0 )
    v24 = 0;
  if ( sub_1A88B90(*(_QWORD **)(v7 + 736)) != v24 )
  {
LABEL_20:
    v12 = *(_QWORD *)v11;
    v13 = *(unsigned __int8 *)(*(_QWORD *)v11 + 16LL);
    goto LABEL_21;
  }
LABEL_61:
  v72 = sub_168B6C0((__int64)a1);
  v73 = (_QWORD *)sub_168B6C0((__int64)a1);
  v76 = v73[294];
  v73[304] += 48LL;
  v77 = (__m128i *)((v76 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v73[295] >= (unsigned __int64)&v77[3] && v76 )
    v73[294] = v77 + 3;
  else
    v77 = (__m128i *)sub_986170((__int64)(v73 + 294), 48, 48, 3, v74, v75);
  sub_B19940(v77, v72, a3, v247);
  sub_B8CC60(a2, (__int64)v77, v78, v79, v80, v81);
}
