void __fastcall sub_1CABEE0(__int64 a1, __int64 a2, const __m128i *a3, int a4)
{
  __int64 *v6; // r12
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __m128i *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r15
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int16 v28; // ax
  __int64 v29; // rax
  __m128i *v30; // r12
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __m128i *v38; // r12
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // r10
  __int64 *v46; // rax
  int v47; // eax
  char *v48; // rax
  __int64 v49; // r10
  char *v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rbx
  bool v53; // bl
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r10
  __int64 v60; // rbp
  void *v61; // rax
  _QWORD *v62; // rax
  unsigned __int8 v63; // al
  bool v64; // zf
  unsigned __int64 v65; // r15
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdi
  __int64 v69; // rdx
  __int64 v70; // rax
  __int16 v71; // ax
  __int64 v72; // rax
  __m128i *v73; // r12
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  unsigned __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  char *v83; // rax
  signed __int64 v84; // rdx
  signed __int64 v85; // r12
  __int64 v86; // rax
  __int64 v87; // r12
  char *v88; // rax
  signed __int64 v89; // rdx
  signed __int64 v90; // r12
  __int64 v91; // rax
  __int64 v92; // r12
  char *v93; // rax
  signed __int64 v94; // rdx
  signed __int64 v95; // r12
  __int64 v96; // rax
  __int64 v97; // r12
  char *v98; // rax
  signed __int64 v99; // rdx
  signed __int64 v100; // r12
  __int64 v101; // rax
  __int64 v102; // r12
  unsigned __int8 *v103; // rbp
  _QWORD *v104; // rax
  unsigned __int8 *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  void **v109; // rbx
  unsigned __int8 *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rdx
  __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // rcx
  __int64 v117; // rdx
  void *v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rdx
  int v121; // eax
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  __int64 v126; // r10
  __int64 v127; // rdx
  void *v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 v135; // r10
  __int64 v136; // rbx
  void *v137; // rax
  _QWORD *v138; // rax
  int v139; // eax
  int v140; // eax
  size_t v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // r9
  __int64 v145; // r8
  __int64 v146; // rdx
  void *v147; // rax
  _QWORD *v148; // rax
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // r9
  __int64 v152; // r8
  __int64 v153; // rdx
  void *v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  void *v160; // rax
  _QWORD *v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rcx
  __int64 v164; // r8
  __int64 v165; // r9
  void *v166; // rax
  _QWORD *v167; // rax
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  void *v172; // rax
  _QWORD *v173; // rax
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // r9
  __int64 v177; // r8
  __int64 v178; // rdx
  void *v179; // rax
  _QWORD *v180; // rax
  __int64 v181; // rdx
  __int64 v182; // rcx
  __int64 v183; // r8
  __int64 v184; // r9
  void *v185; // rax
  _QWORD *v186; // rax
  __int64 v187; // rax
  __int64 v188; // rax
  __int64 v189; // rcx
  __int64 v190; // rax
  void *v191; // rdi
  __int64 v192; // [rsp+8h] [rbp-110h]
  __int64 v193; // [rsp+8h] [rbp-110h]
  __int64 v194; // [rsp+8h] [rbp-110h]
  __int64 v195; // [rsp+8h] [rbp-110h]
  __int64 v196; // [rsp+8h] [rbp-110h]
  __int64 v197; // [rsp+8h] [rbp-110h]
  __int64 v198; // [rsp+8h] [rbp-110h]
  __int64 v199; // [rsp+8h] [rbp-110h]
  __int64 v200; // [rsp+8h] [rbp-110h]
  __int64 v201; // [rsp+8h] [rbp-110h]
  __int64 v202; // [rsp+8h] [rbp-110h]
  __int64 v203; // [rsp+8h] [rbp-110h]
  __int64 v204; // [rsp+8h] [rbp-110h]
  __int64 v205; // [rsp+8h] [rbp-110h]
  __int64 v206; // [rsp+8h] [rbp-110h]
  char *v207; // [rsp+10h] [rbp-108h]
  __int64 v208; // [rsp+10h] [rbp-108h]
  _BYTE *v209; // [rsp+10h] [rbp-108h]
  __int64 v210; // [rsp+10h] [rbp-108h]
  __int64 v211; // [rsp+10h] [rbp-108h]
  char *v212; // [rsp+10h] [rbp-108h]
  __int64 v213; // [rsp+10h] [rbp-108h]
  _BYTE *v214; // [rsp+10h] [rbp-108h]
  char *v215; // [rsp+10h] [rbp-108h]
  __int64 v216; // [rsp+10h] [rbp-108h]
  _BYTE *v217; // [rsp+10h] [rbp-108h]
  __int64 v218; // [rsp+10h] [rbp-108h]
  __int64 v219; // [rsp+10h] [rbp-108h]
  __int64 v220; // [rsp+10h] [rbp-108h]
  char *v221; // [rsp+10h] [rbp-108h]
  __int64 v222; // [rsp+10h] [rbp-108h]
  _BYTE *v223; // [rsp+10h] [rbp-108h]
  __int64 v224; // [rsp+10h] [rbp-108h]
  __int64 v225; // [rsp+10h] [rbp-108h]
  __int64 v226; // [rsp+18h] [rbp-100h]
  __int64 v227; // [rsp+18h] [rbp-100h]
  __int64 v228; // [rsp+18h] [rbp-100h]
  __int64 v229; // [rsp+18h] [rbp-100h]
  __int64 v230; // [rsp+18h] [rbp-100h]
  int v231; // [rsp+2Ch] [rbp-ECh] BYREF
  void *src; // [rsp+30h] [rbp-E8h] BYREF
  size_t n; // [rsp+38h] [rbp-E0h]
  _QWORD v234[2]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v235[2]; // [rsp+50h] [rbp-C8h] BYREF
  void *v236; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v237; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v238; // [rsp+78h] [rbp-A0h]
  char v239; // [rsp+C8h] [rbp-50h]
  unsigned int v240; // [rsp+D0h] [rbp-48h]
  char v241; // [rsp+D4h] [rbp-44h]

  v6 = (__int64 *)a1;
  v7 = a2;
  v10 = (_QWORD *)sub_168B6C0(a1);
  v192 = *(_QWORD *)(a2 + 48);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_6;
  a1 = a2;
  v13 = sub_B8C3D0(a2, a2, v8, v9, v11, v12);
  v8 = *v13;
  v14 = (__int64 *)(*v13 + 8LL * *((unsigned int *)v13 + 2));
  if ( v8 < (unsigned __int64)v14 )
  {
    a2 = v8;
    while ( 1 )
    {
      v9 = (unsigned int)*(unsigned __int16 *)(*(_QWORD *)a2 + 36LL) - 92;
      if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)a2 + 36LL) - 92) <= 4u )
        break;
      a2 += 8;
      if ( v14 == (__int64 *)a2 )
        goto LABEL_6;
    }
    if ( (__int64 *)a2 == v14 )
      goto LABEL_6;
LABEL_35:
    v45 = *(_QWORD *)v8;
    v9 = *(unsigned __int16 *)(*(_QWORD *)v8 + 36LL);
    if ( (unsigned __int16)(v9 - 92) > 4u )
    {
      v46 = (__int64 *)(v8 + 8);
      do
      {
        v45 = *v46++;
        v9 = *(unsigned __int16 *)(v45 + 36);
        v8 = (unsigned int)(v9 - 92);
      }
      while ( (unsigned __int16)(v9 - 92) > 4u );
    }
    if ( (_WORD)v9 == 94 )
    {
      v47 = 3;
      goto LABEL_42;
    }
    if ( (unsigned __int16)v9 > 0x5Eu )
    {
      v47 = 2;
      if ( (_WORD)v9 != 95 )
        v47 = 1;
      goto LABEL_42;
    }
    v47 = 4;
    if ( (_WORD)v9 == 93 )
      goto LABEL_42;
    if ( (*(_BYTE *)(v45 + 34) & 0xF0) == 0xF0 )
    {
      a1 = v45;
      v211 = v45;
      v139 = sub_FA77D0(v45);
      v45 = v211;
      if ( v139 != 2 )
      {
        if ( (*(_BYTE *)(v211 + 34) & 0xF0) == 0xF0 )
        {
          a1 = v211;
          v140 = sub_FA77D0(v211);
          v45 = v211;
          LODWORD(v8) = v140;
        }
        else
        {
          LODWORD(v8) = *(_BYTE *)(v211 + 34) >> 4;
        }
LABEL_55:
        v64 = (_DWORD)v8 == 1;
        v47 = 0;
        v8 = 6;
        if ( v64 )
          v47 = 6;
LABEL_42:
        if ( a4 == v47 )
          goto LABEL_6;
        v193 = v45;
        sub_168B9F0((__int64)v235, v6, a3[1].m128i_u32[2], 0xCADu, 0);
        v48 = sub_F70F40(a4);
        v49 = v193;
        v50 = v48;
        v52 = v51;
        if ( !v239 )
        {
          if ( !v241 )
            goto LABEL_45;
          v122 = sub_168B9E0(v235);
          v126 = v193;
          v127 = v122;
          v128 = v236;
          if ( v236 )
          {
            v210 = v127;
            v128 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
            v127 = v210;
            v126 = v193;
          }
          v202 = v126;
          src = v128;
          v129 = sub_1587BC0(v127, (__int64 *)&src, v127, v123, v124, v125);
          sub_AEC220((unsigned __int8 **)(*v129 + 32LL * v240 + 8), v50, v52);
          v49 = v202;
LABEL_119:
          if ( v239 )
          {
            v198 = v49;
            sub_AE9DF0(&v237, v49, 0xEu);
            v49 = v198;
          }
          else
          {
            if ( !v241 )
            {
LABEL_45:
              if ( (a3[2].m128i_i8[3] & 2) == 0 )
              {
                v53 = (*(_BYTE *)(v49 + 35) & 2) != 0;
LABEL_47:
                if ( v241 )
                {
                  v194 = v49;
                  v54 = sub_168B9E0(v235);
                  v59 = v194;
                  v60 = v54;
                  v61 = v236;
                  if ( v236 )
                  {
                    v61 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
                    v59 = v194;
                  }
                  v195 = v59;
                  src = v61;
                  v62 = sub_1587BC0(v60, (__int64 *)&src, v55, v56, v57, v58);
                  sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v240 + 8), v53, 2u);
                  v49 = v195;
                }
              }
LABEL_51:
              v196 = v49;
              sub_15F7200(v235);
              sub_168B9F0((__int64)v235, v6, *(_DWORD *)(v196 + 24), 0x16CFu, 0);
              sub_15F7200(v235);
              return;
            }
            v203 = v49;
            v130 = sub_168B9E0(v235);
            v135 = v203;
            v136 = v130;
            v137 = v236;
            if ( v236 )
            {
              v137 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
              v135 = v203;
            }
            v204 = v135;
            src = v137;
            v138 = sub_1587BC0(v136, (__int64 *)&src, v131, v132, v133, v134);
            sub_AE9DF0((unsigned __int8 **)(*v138 + 32LL * v240 + 8), v204, 0xEu);
            v49 = v204;
          }
          v53 = 1;
          if ( (a3[2].m128i_i8[3] & 2) == 0 )
            v53 = (*(_BYTE *)(v49 + 35) & 2) != 0;
          if ( !v239 )
            goto LABEL_47;
          v199 = v49;
          sub_AE9DF0(&v237, v53, 2u);
          v49 = v199;
          goto LABEL_51;
        }
        v103 = v237;
        if ( !v237 )
        {
          v120 = v238;
          v121 = *(_DWORD *)(v238 + 14976);
          if ( v121 )
          {
            v187 = (unsigned int)(v121 - 1);
            *(_DWORD *)(v238 + 14976) = v187;
            v103 = *(unsigned __int8 **)(v120 + 8 * v187 + 14848);
            v188 = *((unsigned int *)v103 + 134);
            *v103 = 0;
            v189 = *((_QWORD *)v103 + 66);
            *((_DWORD *)v103 + 106) = 0;
            v190 = v189 + (v188 << 6);
            while ( v189 != v190 )
            {
              while ( 1 )
              {
                v190 -= 64;
                v191 = *(void **)(v190 + 24);
                if ( v191 == (void *)(v190 + 40) )
                  break;
                v230 = v190;
                v225 = v189;
                v206 = v49;
                operator delete(v191);
                v189 = v225;
                v190 = v230;
                v49 = v206;
                if ( v225 == v230 )
                  goto LABEL_198;
              }
            }
LABEL_198:
            *((_DWORD *)v103 + 134) = 0;
          }
          else
          {
            v103 = (unsigned __int8 *)operator new(0x3A0u);
            *v103 = 0;
            *((_QWORD *)v103 + 12) = v103 + 112;
            *((_QWORD *)v103 + 16) = v103 + 144;
            *((_QWORD *)v103 + 20) = v103 + 176;
            *((_QWORD *)v103 + 24) = v103 + 208;
            *((_QWORD *)v103 + 28) = v103 + 240;
            *((_QWORD *)v103 + 32) = v103 + 272;
            *((_QWORD *)v103 + 36) = v103 + 304;
            *((_QWORD *)v103 + 40) = v103 + 336;
            *((_QWORD *)v103 + 44) = v103 + 368;
            *((_QWORD *)v103 + 48) = v103 + 400;
            *((_QWORD *)v103 + 52) = v103 + 432;
            *((_QWORD *)v103 + 13) = 0;
            v103[112] = 0;
            *((_QWORD *)v103 + 17) = 0;
            v103[144] = 0;
            *((_QWORD *)v103 + 21) = 0;
            v103[176] = 0;
            *((_QWORD *)v103 + 25) = 0;
            v103[208] = 0;
            *((_QWORD *)v103 + 29) = 0;
            v103[240] = 0;
            *((_QWORD *)v103 + 33) = 0;
            v103[272] = 0;
            *((_QWORD *)v103 + 37) = 0;
            v103[304] = 0;
            *((_QWORD *)v103 + 41) = 0;
            v103[336] = 0;
            *((_QWORD *)v103 + 45) = 0;
            v103[368] = 0;
            *((_QWORD *)v103 + 49) = 0;
            v103[400] = 0;
            *((_QWORD *)v103 + 53) = 0x800000000LL;
            v49 = v193;
            *((_QWORD *)v103 + 66) = v103 + 544;
            *((_QWORD *)v103 + 67) = 0x600000000LL;
          }
          v237 = v103;
        }
        v103[*v103 + 1] = 0;
        src = v234;
        if ( &v50[v52] && !v50 )
          std::__throw_logic_error("basic_string::_M_construct null not valid");
        if ( (unsigned __int64)v52 > 0xF )
        {
          if ( v52 < 0 )
            std::__throw_length_error("basic_string::_M_create");
          v200 = v49;
          v104 = (_QWORD *)operator new(v52 + 1);
          v234[0] = v52;
          v49 = v200;
          src = v104;
        }
        else
        {
          if ( v52 == 1 )
          {
            LOBYTE(v234[0]) = *v50;
            v104 = v234;
            goto LABEL_113;
          }
          v104 = v234;
          if ( !v52 )
          {
LABEL_113:
            n = v52;
            *((_BYTE *)v104 + v52) = 0;
            v105 = v237;
            v106 = *v237;
            *v237 = v106 + 1;
            v107 = (unsigned __int8)v106;
            v108 = 32 * (v106 + 3);
            v109 = (void **)&v105[v108];
            v110 = *(unsigned __int8 **)&v105[v108];
            if ( src == v234 )
            {
              v141 = n;
              if ( n )
              {
                if ( n == 1 )
                {
                  *v110 = v234[0];
                  v141 = n;
                  v110 = (unsigned __int8 *)*v109;
                }
                else
                {
                  v205 = v49;
                  memcpy(v110, src, n);
                  v141 = n;
                  v110 = (unsigned __int8 *)*v109;
                  v49 = v205;
                }
              }
              v109[1] = (void *)v141;
              v110[v141] = 0;
              v110 = (unsigned __int8 *)src;
              goto LABEL_117;
            }
            if ( v110 == &v105[v108 + 16] )
            {
              *v109 = src;
              v109[1] = (void *)n;
              v109[2] = (void *)v234[0];
            }
            else
            {
              v111 = *(_QWORD *)&v105[32 * v107 + 112];
              *v109 = src;
              v109[1] = (void *)n;
              v109[2] = (void *)v234[0];
              if ( v110 )
              {
                src = v110;
                v234[0] = v111;
                goto LABEL_117;
              }
            }
            v110 = (unsigned __int8 *)v234;
            src = v234;
LABEL_117:
            n = 0;
            *v110 = 0;
            if ( src != v234 )
            {
              v197 = v49;
              operator delete(src);
              v49 = v197;
            }
            goto LABEL_119;
          }
        }
        v201 = v49;
        memcpy(v104, v50, v52);
        v104 = src;
        v49 = v201;
        goto LABEL_113;
      }
    }
    else
    {
      v63 = *(_BYTE *)(v45 + 34) >> 4;
      v8 = v63;
      if ( v63 != 2 )
        goto LABEL_55;
    }
    v47 = 5;
    goto LABEL_42;
  }
  if ( (__int64 *)v8 == v14 )
    goto LABEL_6;
  v43 = *v14;
  v44 = v14 + 1;
  if ( (unsigned __int16)(*(_WORD *)(v43 + 36) - 92) <= 4u )
    goto LABEL_35;
  while ( 1 )
  {
    v9 = (__int64)v44;
    if ( (_QWORD *)v8 == v44 )
      break;
    ++v44;
    if ( (unsigned __int16)(*(_WORD *)(*(_QWORD *)v9 + 36LL) - 92) <= 4u )
      goto LABEL_35;
  }
LABEL_6:
  if ( a4 == 2 )
  {
    v65 = v192 & 0xFFFFFFFFFFFFFFF0LL;
    v66 = *(_QWORD *)(v192 & 0xFFFFFFFFFFFFFFF0LL);
    v67 = *(unsigned __int8 *)(v66 + 16);
    if ( (_BYTE)v67 == 42 )
    {
LABEL_61:
      v68 = *(_QWORD *)(v66 + 32);
LABEL_62:
      v69 = 0;
      v70 = *(_QWORD *)&byte_8[v68 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v70 & 8) != 0 )
        v69 = *(__int64 *)((char *)&qword_18 + (v70 & 0xFFFFFFFFFFFFFFF0LL));
      if ( v69 | ((unsigned __int8)v68 | (unsigned __int8)v70) & 7 )
        goto LABEL_96;
      LOBYTE(v71) = sub_1CA20C0(v68, a2, v69, v9, v11);
LABEL_66:
      if ( (_BYTE)v71 )
      {
LABEL_67:
        v72 = v10[294];
        v10[304] += 40LL;
        v73 = (__m128i *)((v72 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v10[295] >= (unsigned __int64)&v73[2].m128i_u64[1] && v72 )
          v10[294] = (char *)v73 + 40;
        else
          v73 = (__m128i *)sub_986170((__int64)(v10 + 294), 40, 40, 3, v11, v12);
        sub_B19A50(v73, (__int64)v10, a3);
        sub_B8CC60(v7, (__int64)v73, v74, v75, v76, v77);
        return;
      }
LABEL_96:
      sub_168B9F0((__int64)v235, v6, a3[1].m128i_u32[2], 0x13B7u, 0);
      v93 = sub_F70F40(2);
      v95 = v94;
      if ( v239 )
      {
        sub_AEC220(&v237, v93, v94);
      }
      else if ( v241 )
      {
        v207 = v93;
        v113 = sub_168B9E0(v235);
        v116 = (__int64)v207;
        v117 = v113;
        v118 = v236;
        if ( v236 )
        {
          v226 = (__int64)v207;
          v208 = v117;
          v118 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
          v116 = v226;
          v117 = v208;
        }
        v209 = (_BYTE *)v116;
        src = v118;
        v119 = sub_1587BC0(v117, (__int64 *)&src, v117, v116, v114, v115);
        sub_AEC220((unsigned __int8 **)(*v119 + 32LL * v240 + 8), v209, v95);
      }
      v231 = 1;
      v96 = sub_1587D10((__int64)v235, &v231);
      v97 = v96;
      if ( *(_BYTE *)(v96 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v96 + 32), v192, 8u);
      }
      else if ( *(_BYTE *)(v96 + 132) )
      {
        v168 = sub_168B9E0((_QWORD *)v96);
        v172 = *(void **)(v97 + 16);
        if ( v172 )
        {
          v220 = v168;
          v172 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v172 + 32LL))(v172);
          v168 = v220;
        }
        src = v172;
        v173 = sub_1587BC0(v168, (__int64 *)&src, v168, v169, v170, v171);
        sub_AE9DF0((unsigned __int8 **)(*v173 + 32LL * *(unsigned int *)(v97 + 128) + 8), v192, 8u);
      }
      sub_15F7200(v235);
      goto LABEL_67;
    }
    v9 = *(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) == 42 )
    {
      v66 = sub_F63050(v66, a2, v67, v9);
      if ( v66 )
        goto LABEL_61;
      v66 = *(_QWORD *)v65;
      LODWORD(v67) = *(unsigned __int8 *)(*(_QWORD *)v65 + 16LL);
    }
    if ( (unsigned int)(v67 - 43) <= 1 )
    {
LABEL_75:
      while ( 1 )
      {
        v68 = *(_QWORD *)(v66 + 32);
        if ( (*(_BYTE *)(v66 + 18) & 0x10) == 0 )
          break;
        v78 = v68 & 0xFFFFFFFFFFFFFFF0LL;
        v66 = *(_QWORD *)v78;
        v79 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v78 + 16LL) - 43;
        if ( (unsigned int)v79 > 1 )
          v66 = sub_F63050(v66, a2, v79, v9);
      }
      goto LABEL_62;
    }
    v112 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v66 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v112 <= 1 )
    {
      v66 = sub_F63050(v66, a2, v112, v9);
      if ( v66 )
        goto LABEL_75;
      v66 = *(_QWORD *)v65;
    }
    v71 = (*(unsigned __int8 *)(v66 + 17) >> 2) & 1;
    goto LABEL_66;
  }
  if ( a4 <= 2 )
  {
    if ( a4 != 1 )
      goto LABEL_202;
    v23 = (__int64 *)(v192 & 0xFFFFFFFFFFFFFFF0LL);
    v24 = *(_QWORD *)(v192 & 0xFFFFFFFFFFFFFFF0LL);
    v25 = v24;
    if ( *(_BYTE *)(v24 + 16) == 42 )
      goto LABEL_17;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    {
      v25 = sub_F63050(v24, a2, v8, v9);
      if ( v25 )
      {
LABEL_17:
        v26 = *(_QWORD *)(v25 + 32);
LABEL_18:
        v27 = *(_QWORD *)&byte_8[v26 & 0xFFFFFFFFFFFFFFF0LL];
        LODWORD(v26) = 0;
        if ( (v27 & 8) != 0 )
          v26 = *(__int64 *)((char *)&qword_18 + (v27 & 0xFFFFFFFFFFFFFFF0LL));
        LOBYTE(v28) = (unsigned int)v26 >> 9 == 0;
        goto LABEL_21;
      }
      v24 = *v23;
    }
    v80 = v24;
    v81 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 43;
    if ( (unsigned int)v81 <= 1 )
    {
LABEL_82:
      while ( 1 )
      {
        v26 = *(_QWORD *)(v80 + 32);
        if ( (*(_BYTE *)(v80 + 18) & 0x10) == 0 )
          break;
        v80 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
        v82 = (unsigned int)*(unsigned __int8 *)(v80 + 16) - 43;
        if ( (unsigned int)v82 > 1 )
          v80 = sub_F63050(v80, a2, v82, v9);
      }
      goto LABEL_18;
    }
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1 )
    {
      v80 = sub_F63050(v24, a2, v81, v9);
      if ( v80 )
        goto LABEL_82;
      v24 = *v23;
    }
    v28 = (*(unsigned __int8 *)(v24 + 17) >> 2) & 1;
LABEL_21:
    if ( !(_BYTE)v28 )
    {
      sub_168B9F0((__int64)v235, v6, a3[1].m128i_u32[2], 0x13B7u, 0);
      v98 = sub_F70F40(1);
      v100 = v99;
      if ( v239 )
      {
        sub_AEC220(&v237, v98, v99);
      }
      else if ( v241 )
      {
        v221 = v98;
        v174 = sub_168B9E0(v235);
        v177 = (__int64)v221;
        v178 = v174;
        v179 = v236;
        if ( v236 )
        {
          v229 = (__int64)v221;
          v222 = v178;
          v179 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
          v177 = v229;
          v178 = v222;
        }
        v223 = (_BYTE *)v177;
        src = v179;
        v180 = sub_1587BC0(v178, (__int64 *)&src, v178, v175, v177, v176);
        sub_AEC220((unsigned __int8 **)(*v180 + 32LL * v240 + 8), v223, v100);
      }
      v231 = 0;
      v101 = sub_1587D10((__int64)v235, &v231);
      v102 = v101;
      if ( *(_BYTE *)(v101 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v101 + 32), v192, 8u);
      }
      else if ( *(_BYTE *)(v101 + 132) )
      {
        v181 = sub_168B9E0((_QWORD *)v101);
        v185 = *(void **)(v102 + 16);
        if ( v185 )
        {
          v224 = v181;
          v185 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v185 + 32LL))(v185);
          v181 = v224;
        }
        src = v185;
        v186 = sub_1587BC0(v181, (__int64 *)&src, v181, v182, v183, v184);
        sub_AE9DF0((unsigned __int8 **)(*v186 + 32LL * *(unsigned int *)(v102 + 128) + 8), v192, 8u);
      }
      sub_15F7200(v235);
    }
    v29 = v10[294];
    v10[304] += 40LL;
    v30 = (__m128i *)((v29 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v10[295] >= (unsigned __int64)&v30[2].m128i_u64[1] && v29 )
      v10[294] = (char *)v30 + 40;
    else
      v30 = (__m128i *)sub_986170((__int64)(v10 + 294), 40, 40, 3, v11, v12);
    sub_B19AE0(v30, (__int64)v10, a3);
    sub_B8CC60(v7, (__int64)v30, v31, v32, v33, v34);
    return;
  }
  if ( a4 != 3 )
  {
    if ( a4 == 4 )
    {
      if ( !sub_1CA20C0(v192, a2, v8, v9, v11) )
      {
        sub_168B9F0((__int64)v235, v6, a3[1].m128i_u32[2], 0x13B7u, 0);
        v88 = sub_F70F40(4);
        v90 = v89;
        if ( v239 )
        {
          sub_AEC220(&v237, v88, v89);
        }
        else if ( v241 )
        {
          v212 = v88;
          v142 = sub_168B9E0(v235);
          v145 = (__int64)v212;
          v146 = v142;
          v147 = v236;
          if ( v236 )
          {
            v227 = (__int64)v212;
            v213 = v146;
            v147 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
            v145 = v227;
            v146 = v213;
          }
          v214 = (_BYTE *)v145;
          src = v147;
          v148 = sub_1587BC0(v146, (__int64 *)&src, v146, v143, v145, v144);
          sub_AEC220((unsigned __int8 **)(*v148 + 32LL * v240 + 8), v214, v90);
        }
        v231 = 0;
        v91 = sub_1587D10((__int64)v235, &v231);
        v92 = v91;
        if ( *(_BYTE *)(v91 + 120) )
        {
          sub_AE9DF0((unsigned __int8 **)(v91 + 32), v192, 8u);
        }
        else if ( *(_BYTE *)(v91 + 132) )
        {
          v156 = sub_168B9E0((_QWORD *)v91);
          v160 = *(void **)(v92 + 16);
          if ( v160 )
          {
            v218 = v156;
            v160 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v160 + 32LL))(v160);
            v156 = v218;
          }
          src = v160;
          v161 = sub_1587BC0(v156, (__int64 *)&src, v156, v157, v158, v159);
          sub_AE9DF0((unsigned __int8 **)(*v161 + 32LL * *(unsigned int *)(v92 + 128) + 8), v192, 8u);
        }
        sub_15F7200(v235);
      }
      v17 = v10[294];
      v10[304] += 40LL;
      v18 = (__m128i *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v10[295] >= (unsigned __int64)&v18[2].m128i_u64[1] && v17 )
        v10[294] = (char *)v18 + 40;
      else
        v18 = (__m128i *)sub_986170((__int64)(v10 + 294), 40, 40, 3, v15, v16);
      sub_B197A0(v18, (__int64)v10, a3);
      sub_B8CC60(v7, (__int64)v18, v19, v20, v21, v22);
      return;
    }
LABEL_202:
    sub_1CAD230(a1, a2, v8);
    return;
  }
  if ( !sub_1CA20C0(v192, a2, v8, v9, v11) )
  {
    sub_168B9F0((__int64)v235, v6, a3[1].m128i_u32[2], 0x13B7u, 0);
    v83 = sub_F70F40(3);
    v85 = v84;
    if ( v239 )
    {
      sub_AEC220(&v237, v83, v84);
    }
    else if ( v241 )
    {
      v215 = v83;
      v149 = sub_168B9E0(v235);
      v152 = (__int64)v215;
      v153 = v149;
      v154 = v236;
      if ( v236 )
      {
        v228 = (__int64)v215;
        v216 = v153;
        v154 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v236 + 32LL))(v236);
        v152 = v228;
        v153 = v216;
      }
      v217 = (_BYTE *)v152;
      src = v154;
      v155 = sub_1587BC0(v153, (__int64 *)&src, v153, v150, v152, v151);
      sub_AEC220((unsigned __int8 **)(*v155 + 32LL * v240 + 8), v217, v85);
    }
    v231 = 0;
    v86 = sub_1587D10((__int64)v235, &v231);
    v87 = v86;
    if ( *(_BYTE *)(v86 + 120) )
    {
      sub_AE9DF0((unsigned __int8 **)(v86 + 32), v192, 8u);
    }
    else if ( *(_BYTE *)(v86 + 132) )
    {
      v162 = sub_168B9E0((_QWORD *)v86);
      v166 = *(void **)(v87 + 16);
      if ( v166 )
      {
        v219 = v162;
        v166 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v166 + 32LL))(v166);
        v162 = v219;
      }
      src = v166;
      v167 = sub_1587BC0(v162, (__int64 *)&src, v162, v163, v164, v165);
      sub_AE9DF0((unsigned __int8 **)(*v167 + 32LL * *(unsigned int *)(v87 + 128) + 8), v192, 8u);
    }
    sub_15F7200(v235);
  }
  v37 = v10[294];
  v10[304] += 40LL;
  v38 = (__m128i *)((v37 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v10[295] >= (unsigned __int64)&v38[2].m128i_u64[1] && v37 )
    v10[294] = (char *)v38 + 40;
  else
    v38 = (__m128i *)sub_986170((__int64)(v10 + 294), 40, 40, 3, v35, v36);
  sub_B19910(v38, (__int64)v10, a3);
  sub_B8CC60(v7, (__int64)v38, v39, v40, v41, v42);
}
