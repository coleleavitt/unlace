void __fastcall sub_FA4360(_QWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3, _QWORD *a4)
{
  unsigned __int8 *v4; // r11
  unsigned __int8 *v7; // rbp
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 *v17; // rbx
  __int64 v18; // rdx
  __int16 v19; // ax
  unsigned __int8 v20; // bp
  int v21; // r10d
  __int64 v22; // r8
  int v23; // ebp
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rbp
  _BYTE *v27; // r11
  __int64 v28; // r12
  unsigned int v29; // r13d
  __int64 v30; // r10
  signed __int64 v31; // rcx
  __int64 v32; // rax
  unsigned __int8 *v33; // rbp
  size_t v34; // r12
  unsigned __int8 *v35; // rdx
  unsigned __int8 *v36; // rax
  signed __int64 v37; // rdx
  __int64 v38; // rdi
  unsigned __int64 v39; // rdx
  size_t v40; // rbx
  __int64 v41; // rdi
  void *v42; // rbp
  size_t v43; // rbx
  _BYTE *v44; // rdi
  _BYTE *v45; // rsi
  __int64 v46; // r10
  char v47; // bp
  unsigned __int8 *v48; // rax
  __int64 v49; // r10
  __int64 v50; // r12
  _BYTE *v51; // r11
  unsigned __int8 *v52; // rbp
  __int64 v53; // r11
  __int64 v54; // r10
  _BYTE *v55; // r11
  __int64 v56; // rax
  __int64 v57; // rbx
  _BYTE *v58; // rax
  unsigned int *v59; // rax
  char *v60; // rdi
  size_t v61; // rbx
  const void *v62; // rsi
  unsigned __int64 v63; // rax
  __int64 v64; // rcx
  unsigned __int64 v65; // rsi
  __int64 v66; // rax
  unsigned __int64 v67; // r10
  unsigned __int64 *v68; // rcx
  __int64 v69; // rax
  __int64 v70; // r10
  const char *v71; // r13
  _BYTE *v72; // rax
  __m128 *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // r10
  _BYTE *v76; // rdx
  __int64 v77; // rbx
  __int64 v78; // rbp
  char *v79; // rbx
  size_t v80; // rax
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rbp
  unsigned __int64 v84; // r12
  unsigned __int64 *v85; // rax
  unsigned __int8 *v86; // r12
  unsigned __int8 *v87; // r11
  unsigned __int8 *v88; // r13
  unsigned __int8 *v89; // rbp
  char v90; // r10
  __int64 v91; // r11
  __int64 v92; // rax
  size_t v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rbp
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rbp
  __int64 v99; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // r8
  unsigned __int8 v102; // al
  __int64 v103; // rax
  __int64 v104; // rax
  const char *v105; // rax
  __int64 v106; // rbx
  __int64 v107; // rax
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  __int64 v110; // rbp
  unsigned __int64 v111; // rdx
  __int64 v112; // rbp
  __int64 v113; // rax
  unsigned __int64 v114; // rdx
  unsigned __int8 *v115; // rax
  unsigned __int8 *v116; // r11
  __int64 v117; // rbp
  __int64 v118; // rax
  unsigned __int64 v119; // rdx
  __int64 v120; // rbp
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  __int64 v123; // rbp
  __int64 v124; // rax
  unsigned __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  __int64 v128; // rbp
  __int64 v129; // rax
  unsigned __int64 v130; // rdx
  __int64 v131; // rax
  unsigned __int64 v132; // r12
  unsigned __int64 v133; // rbp
  unsigned __int64 v134; // rdx
  unsigned __int64 *v135; // rax
  __int64 v136; // rax
  unsigned __int64 v137; // r9
  unsigned __int64 v138; // r8
  unsigned __int64 v139; // rdx
  unsigned __int64 *v140; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // r10
  const char *v144; // rbx
  _BYTE *v145; // rax
  __m128 *v146; // rax
  __int64 v147; // rax
  _BYTE *v148; // rdx
  unsigned __int8 *v150; // [rsp+10h] [rbp-298h]
  __int64 v151; // [rsp+10h] [rbp-298h]
  __int64 v152; // [rsp+10h] [rbp-298h]
  __int64 v153; // [rsp+10h] [rbp-298h]
  __int64 v154; // [rsp+10h] [rbp-298h]
  __int64 v155; // [rsp+10h] [rbp-298h]
  _BYTE *v156; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v157; // [rsp+10h] [rbp-298h]
  __int64 v158; // [rsp+10h] [rbp-298h]
  __int64 v159; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v160; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v161; // [rsp+10h] [rbp-298h]
  __int64 v162; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v163; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v164; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v165; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v166; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v167; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v168; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v169; // [rsp+10h] [rbp-298h]
  size_t v170; // [rsp+10h] [rbp-298h]
  unsigned __int8 *v171; // [rsp+18h] [rbp-290h]
  _BYTE *v172; // [rsp+18h] [rbp-290h]
  unsigned __int8 *v173; // [rsp+18h] [rbp-290h]
  char v174; // [rsp+18h] [rbp-290h]
  unsigned __int64 v175; // [rsp+18h] [rbp-290h]
  unsigned __int64 v176; // [rsp+38h] [rbp-270h]
  unsigned __int64 v177; // [rsp+40h] [rbp-268h]
  unsigned __int8 *v178; // [rsp+48h] [rbp-260h]
  _BYTE *v179; // [rsp+48h] [rbp-260h]
  _BYTE *v180; // [rsp+48h] [rbp-260h]
  __int64 v181; // [rsp+48h] [rbp-260h]
  int v182; // [rsp+48h] [rbp-260h]
  __int64 v183; // [rsp+48h] [rbp-260h]
  __int64 v184; // [rsp+48h] [rbp-260h]
  __int64 v185; // [rsp+C0h] [rbp-1E8h]
  unsigned int v186; // [rsp+C0h] [rbp-1E8h]
  unsigned __int8 *v187; // [rsp+C8h] [rbp-1E0h]
  __int64 v188; // [rsp+C8h] [rbp-1E0h]
  unsigned int v189; // [rsp+F0h] [rbp-1B8h]
  _BYTE *v190; // [rsp+F0h] [rbp-1B8h]
  unsigned __int64 v191; // [rsp+F0h] [rbp-1B8h]
  unsigned __int64 v192; // [rsp+F8h] [rbp-1B0h]
  unsigned __int64 v193; // [rsp+100h] [rbp-1A8h]
  unsigned __int64 v194; // [rsp+108h] [rbp-1A0h]
  _BYTE v195[2]; // [rsp+11Eh] [rbp-18Ah] BYREF
  void *ptr; // [rsp+120h] [rbp-188h] BYREF
  __int64 v197; // [rsp+128h] [rbp-180h]
  _QWORD v198[2]; // [rsp+130h] [rbp-178h] BYREF
  __m128 v199; // [rsp+140h] [rbp-168h] BYREF
  __int128 v200; // [rsp+150h] [rbp-158h]
  void *dest; // [rsp+160h] [rbp-148h]
  char v202; // [rsp+168h] [rbp-140h]
  int v203; // [rsp+16Ch] [rbp-13Ch]
  _QWORD *v204; // [rsp+170h] [rbp-138h]
  void *src; // [rsp+180h] [rbp-128h] BYREF
  size_t n[2]; // [rsp+188h] [rbp-120h]
  _BYTE v207[72]; // [rsp+198h] [rbp-110h] BYREF
  void *v208; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v209; // [rsp+1E8h] [rbp-C0h]
  _BYTE v210[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v4 = a2;
  v7 = (unsigned __int8 *)a1[6];
  if ( a3 - a2 == 2 )
  {
    v93 = j__strlen("%0");
    v4 = a2;
    if ( v93 == 2 && *(_WORD *)a2 == 12325 && !v7[1] )
    {
      sub_FA3B00(*((unsigned __int8 **)v7 + 12), *((_QWORD *)v7 + 13), a4);
      return;
    }
  }
  v208 = v210;
  v209 = 0x800000000LL;
  ptr = v198;
  v197 = 0x200000000LL;
  src = v207;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  v8 = *v7;
  if ( *v7 )
  {
    if ( v7[1] == 8 )
    {
      v198[0] = *((_QWORD *)v7 + 2);
      LODWORD(v197) = v197 + 1;
    }
    if ( v8 != 1 )
    {
      if ( v7[2] == 8 )
      {
        v109 = (unsigned int)v197;
        v110 = *((_QWORD *)v7 + 3);
        v111 = (unsigned int)v197 + 1LL;
        if ( HIDWORD(v197) < v111 )
        {
          v160 = v4;
          sub_22134E0(&ptr, v198, v111, 8);
          v109 = (unsigned int)v197;
          v4 = v160;
        }
        *((_QWORD *)ptr + v109) = v110;
        LODWORD(v197) = v197 + 1;
      }
      if ( v8 != 2 )
      {
        v9 = a1[6];
        if ( *(_BYTE *)(v9 + 3) == 8 )
        {
          v112 = *(_QWORD *)(v9 + 32);
          v113 = (unsigned int)v197;
          v114 = (unsigned int)v197 + 1LL;
          if ( HIDWORD(v197) < v114 )
          {
            v161 = v4;
            sub_22134E0(&ptr, v198, v114, 8);
            v113 = (unsigned int)v197;
            v4 = v161;
          }
          *((_QWORD *)ptr + v113) = v112;
          LODWORD(v197) = v197 + 1;
        }
        if ( v8 != 3 )
        {
          v10 = a1[6];
          if ( *(_BYTE *)(v10 + 4) == 8 )
          {
            v95 = *(_QWORD *)(v10 + 40);
            v96 = (unsigned int)v197;
            v97 = (unsigned int)v197 + 1LL;
            if ( HIDWORD(v197) < v97 )
            {
              v163 = v4;
              sub_22134E0(&ptr, v198, v97, 8);
              v96 = (unsigned int)v197;
              v4 = v163;
            }
            *((_QWORD *)ptr + v96) = v95;
            LODWORD(v197) = v197 + 1;
          }
          if ( v8 != 4 )
          {
            v11 = a1[6];
            if ( *(_BYTE *)(v11 + 5) != 8 )
            {
              if ( v8 == 5 )
                goto LABEL_23;
              goto LABEL_14;
            }
            v98 = *(_QWORD *)(v11 + 48);
            v99 = (unsigned int)v197;
            v100 = (unsigned int)v197 + 1LL;
            if ( HIDWORD(v197) < v100 )
            {
              v164 = v4;
              sub_22134E0(&ptr, v198, v100, 8);
              v99 = (unsigned int)v197;
              v4 = v164;
            }
            *((_QWORD *)ptr + v99) = v98;
            LODWORD(v197) = v197 + 1;
            if ( v8 != 5 )
            {
LABEL_14:
              v12 = a1[6];
              if ( *(_BYTE *)(v12 + 6) == 8 )
              {
                v117 = *(_QWORD *)(v12 + 56);
                v118 = (unsigned int)v197;
                v119 = (unsigned int)v197 + 1LL;
                if ( HIDWORD(v197) < v119 )
                {
                  v165 = v4;
                  sub_22134E0(&ptr, v198, v119, 8);
                  v118 = (unsigned int)v197;
                  v4 = v165;
                }
                *((_QWORD *)ptr + v118) = v117;
                LODWORD(v197) = v197 + 1;
              }
              if ( v8 != 6 )
              {
                v13 = a1[6];
                if ( *(_BYTE *)(v13 + 7) == 8 )
                {
                  v120 = *(_QWORD *)(v13 + 64);
                  v121 = (unsigned int)v197;
                  v122 = (unsigned int)v197 + 1LL;
                  if ( HIDWORD(v197) < v122 )
                  {
                    v166 = v4;
                    sub_22134E0(&ptr, v198, v122, 8);
                    v121 = (unsigned int)v197;
                    v4 = v166;
                  }
                  *((_QWORD *)ptr + v121) = v120;
                  LODWORD(v197) = v197 + 1;
                }
                if ( v8 != 7 )
                {
                  v14 = a1[6];
                  if ( *(_BYTE *)(v14 + 8) == 8 )
                  {
                    v123 = *(_QWORD *)(v14 + 72);
                    v124 = (unsigned int)v197;
                    v125 = (unsigned int)v197 + 1LL;
                    if ( HIDWORD(v197) < v125 )
                    {
                      v167 = v4;
                      sub_22134E0(&ptr, v198, v125, 8);
                      v124 = (unsigned int)v197;
                      v4 = v167;
                    }
                    *((_QWORD *)ptr + v124) = v123;
                    LODWORD(v197) = v197 + 1;
                  }
                  if ( v8 != 8 )
                  {
                    v15 = a1[6];
                    if ( *(_BYTE *)(v15 + 9) == 8 )
                    {
                      v128 = *(_QWORD *)(v15 + 80);
                      v129 = (unsigned int)v197;
                      v130 = (unsigned int)v197 + 1LL;
                      if ( HIDWORD(v197) < v130 )
                      {
                        v168 = v4;
                        sub_22134E0(&ptr, v198, v130, 8);
                        v129 = (unsigned int)v197;
                        v4 = v168;
                      }
                      *((_QWORD *)ptr + v129) = v128;
                      LODWORD(v197) = v197 + 1;
                    }
                    if ( v8 != 9 )
                    {
                      v16 = a1[6];
                      if ( *(_BYTE *)(v16 + 10) == 8 )
                      {
                        v106 = *(_QWORD *)(v16 + 88);
                        v107 = (unsigned int)v197;
                        v108 = (unsigned int)v197 + 1LL;
                        if ( v108 > HIDWORD(v197) )
                        {
                          v169 = v4;
                          sub_22134E0(&ptr, v198, v108, 8);
                          v107 = (unsigned int)v197;
                          v4 = v169;
                        }
                        *((_QWORD *)ptr + v107) = v106;
                        LODWORD(v197) = v197 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_23:
  if ( a3 != v4 )
  {
    v17 = v4;
    while ( *v17 == 37 )
    {
      v18 = v17[1];
      v19 = *(_WORD *)&byte_23ED5E0[2 * v18];
      v20 = v17[1];
      v21 = (char)v18;
      if ( (v19 & 0x380) != 0 )
      {
        v92 = a4[1];
        if ( (unsigned __int64)(v92 + 1) > a4[2] )
        {
          sub_22130D0(a4, a4 + 3, v92 + 1, 1);
          v92 = a4[1];
        }
        v17 += 2;
        *(_BYTE *)(*a4 + v92) = v20;
        ++a4[1];
        goto LABEL_49;
      }
      v22 = a1[6];
      if ( (v19 & 8) != 0 )
      {
        v23 = (char)v18;
        v24 = 0;
        v25 = 0;
        v26 = (unsigned int)(v23 - 48);
        v171 = v17 + 2;
        v27 = nullptr;
        v150 = nullptr;
        v28 = (unsigned int)v26;
        v29 = *(unsigned __int8 *)(v22 + (unsigned int)v26 + 1);
LABEL_29:
        v30 = v29;
        switch ( v29 )
        {
          case 0u:
          case 1u:
            goto LABEL_113;
          case 2u:
            v94 = *(_QWORD *)(v22 + 8 * v28 + 16);
            v66 = v94;
            goto LABEL_138;
          case 3u:
            goto LABEL_104;
          case 4u:
            goto LABEL_96;
          case 5u:
            goto LABEL_82;
          case 6u:
          case 7u:
          case 8u:
          case 9u:
          case 0xAu:
          case 0xBu:
          case 0xCu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            goto LABEL_79;
          case 0xDu:
            goto LABEL_152;
          default:
            goto LABEL_131;
        }
      }
      v27 = v17 + 1;
      v45 = v17 + 1;
      if ( (unsigned __int8)(v18 - 97) <= 0x19u || (_BYTE)v18 == 45 )
      {
        do
        {
          do
            v21 = (char)*++v45;
          while ( (unsigned __int8)(*v45 - 97) <= 0x19u );
        }
        while ( (_BYTE)v21 == 45 );
        v25 = (unsigned int)((_DWORD)v45 - (_DWORD)v27);
      }
      else
      {
        v25 = 0;
      }
      v150 = nullptr;
      v24 = 0;
      v171 = v45 + 1;
      if ( (_BYTE)v21 == 123 )
      {
        v188 = a1[6];
        v186 = v25;
        v115 = sub_FA1DC0(v45 + 1, a3, 125);
        v22 = v188;
        v25 = v186;
        v21 = (char)v115[1];
        v45 = v115 + 1;
        v24 = (_DWORD)v115 - (_DWORD)v116;
        v150 = v116;
        v27 = v17 + 1;
        v171 = v115 + 2;
      }
      v28 = (unsigned int)(v21 - 48);
      v26 = (unsigned int)v28;
      v29 = *(unsigned __int8 *)(v22 + v28 + 1);
      if ( (_DWORD)v25 != 4 )
      {
        switch ( *(_BYTE *)(v22 + v28 + 1) )
        {
          case 0:
          case 1:
            v28 = (unsigned int)v28;
LABEL_113:
            if ( v29 )
            {
              v79 = *(char **)(v22 + 8 * v28 + 16);
              v182 = v25;
              v156 = v27;
              if ( !v79 )
                v79 = "(null)";
              v80 = j__strlen(v79);
              LODWORD(v25) = v182;
              v27 = v156;
            }
            else
            {
              v101 = 32 * (v28 + 3) + v22;
              v79 = *(char **)v101;
              v80 = *(_QWORD *)(v101 + 8);
            }
            if ( (_DWORD)v25 == 6 && *(_DWORD *)v27 == 1953461617 && *((_WORD *)v27 + 2) == 25701 )
            {
              v126 = a4[1];
              if ( (unsigned __int64)(v126 + 1) > a4[2] )
              {
                v170 = v80;
                sub_22130D0(a4, a4 + 3, v126 + 1, 1);
                v126 = a4[1];
                v80 = v170;
              }
              *(_BYTE *)(*a4 + v126) = 39;
              ++a4[1];
              sub_FA3B00((unsigned __int8 *)v79, v80, a4);
              v127 = a4[1];
              if ( (unsigned __int64)(v127 + 1) > a4[2] )
              {
                sub_22130D0(a4, a4 + 3, v127 + 1, 1);
                v127 = a4[1];
              }
              *(_BYTE *)(*a4 + v127) = 39;
              ++a4[1];
            }
            else
            {
              sub_FA3B00((unsigned __int8 *)v79, v80, a4);
            }
            v22 = a1[6];
            v17 = v171;
            goto LABEL_120;
          case 2:
            v66 = *(_QWORD *)(v22 + 8 * (v28 + 2));
            v94 = v66;
            if ( (_DWORD)v25 == 6 )
            {
              if ( *(_DWORD *)v27 == 1701602675 && *((_WORD *)v27 + 2) == 29795 )
              {
                sub_FA6470(a1, (unsigned int)v66, v150, v24, a4);
                v30 = v29;
                v17 = v171;
                v64 = (unsigned int)v209;
                v66 = *(_QWORD *)(a1[6] + 8 * (v28 + 2));
                v65 = HIDWORD(v209);
              }
              else
              {
                if ( *(_DWORD *)v27 != 1920298096 || *((_WORD *)v27 + 2) != 27745 )
                {
                  v30 = *(unsigned __int8 *)(v22 + v28 + 1);
                  goto LABEL_209;
                }
                sub_FA5F10(a1, (unsigned int)v66, v150, v24, a4);
LABEL_91:
                v17 = v171;
                v30 = v29;
                v64 = (unsigned int)v209;
                v65 = HIDWORD(v209);
                v66 = *(_QWORD *)(a1[6] + 8 * v28 + 16);
              }
            }
            else
            {
              v30 = *(unsigned __int8 *)(v22 + v28 + 1);
LABEL_138:
              if ( (_DWORD)v25 != 1 )
              {
                if ( (_DWORD)v25 == 7 )
                {
                  if ( *(_DWORD *)v27 == 1768190575 && *((_WORD *)v27 + 2) == 24942 && v27[6] == 108 )
                  {
                    v158 = v30;
                    sub_FA25D0(v94, (__int64)a4);
LABEL_210:
                    v17 = v171;
                    v64 = (unsigned int)v209;
                    v65 = HIDWORD(v209);
                    v66 = *(_QWORD *)(a1[6] + 8 * v26 + 16);
                    v30 = v158;
                    goto LABEL_92;
                  }
                }
                else if ( (_DWORD)v25 == 5 && *(_DWORD *)v27 == 1634563432 && v27[4] == 110 )
                {
                  v158 = v30;
                  sub_FA26E0(v94, (__int64)a4);
                  goto LABEL_210;
                }
LABEL_209:
                v158 = v30;
                v200 = 0;
                v199.m128_u64[0] = (unsigned __int64)&off_2BC1F40;
                v199.m128_i32[2] = 2;
                v202 = 0;
                v203 = 1;
                dest = nullptr;
                v204 = a4;
                sub_2257B70(&v199, 0, 0, 0);
                sub_2257BF0(&v199, v94);
                v199.m128_u64[0] = (unsigned __int64)&unk_2C4C288;
                sub_2257A60(&v199);
                goto LABEL_210;
              }
              if ( *v27 != 115 )
                goto LABEL_209;
              if ( (_DWORD)v94 != 1 )
              {
                v158 = v30;
                sub_FA4310(a4, 115);
                goto LABEL_210;
              }
              v17 = v171;
              v64 = (unsigned int)v209;
              v65 = HIDWORD(v209);
            }
            goto LABEL_92;
          case 3:
            v28 = (unsigned int)v28;
            v30 = v29;
LABEL_104:
            v77 = v28 + 2;
            v78 = *(_QWORD *)(v22 + 8 * (v28 + 2));
            if ( (_DWORD)v25 != 6 )
            {
              if ( (_DWORD)v25 == 1 )
              {
                if ( *v27 == 115 )
                {
                  if ( (_DWORD)v78 != 1 )
                  {
                    v155 = v30;
                    sub_FA4310(a4, 115);
                    goto LABEL_111;
                  }
                  v66 = *(_QWORD *)(v22 + 8 * (v28 + 2));
                  v17 = v171;
                  v64 = (unsigned int)v209;
                  v65 = HIDWORD(v209);
                  goto LABEL_92;
                }
              }
              else if ( (_DWORD)v25 == 7 )
              {
                if ( *(_DWORD *)v27 == 1768190575 && *((_WORD *)v27 + 2) == 24942 && v27[6] == 108 )
                {
                  v155 = v30;
                  sub_FA25D0(v78, (__int64)a4);
LABEL_111:
                  v64 = (unsigned int)v209;
                  v65 = HIDWORD(v209);
                  v30 = v155;
                  v66 = *(_QWORD *)(a1[6] + 8 * v77);
                  v17 = v171;
                  goto LABEL_92;
                }
              }
              else if ( (_DWORD)v25 == 5 && *(_DWORD *)v27 == 1634563432 && v27[4] == 110 )
              {
                v155 = v30;
                sub_FA26E0(*(_QWORD *)(v22 + 8 * (v28 + 2)), (__int64)a4);
                goto LABEL_111;
              }
              goto LABEL_155;
            }
            if ( *(_DWORD *)v27 == 1701602675 && *((_WORD *)v27 + 2) == 29795 )
            {
              v183 = v30;
              sub_FA6470(a1, (unsigned int)v78, v150, v24, a4);
              v30 = v183;
              v64 = (unsigned int)v209;
              v65 = HIDWORD(v209);
              v66 = *(_QWORD *)(a1[6] + 8 * v77);
              v17 = v171;
            }
            else
            {
              if ( *(_DWORD *)v27 != 1920298096 || *((_WORD *)v27 + 2) != 27745 )
              {
LABEL_155:
                v154 = v30;
                v200 = 0;
                v199.m128_u64[0] = (unsigned __int64)&off_2BC1F40;
                v199.m128_i32[2] = 2;
                v202 = 0;
                v203 = 1;
                dest = nullptr;
                v204 = a4;
                sub_2257B70(&v199, 0, 0, 0);
                sub_2257BD0(&v199, v78);
                v199.m128_u64[0] = (unsigned __int64)&unk_2C4C288;
LABEL_102:
                sub_2257A60(&v199);
                v17 = v171;
                v64 = (unsigned int)v209;
                v65 = HIDWORD(v209);
                v66 = *(_QWORD *)(a1[6] + 8 * v28 + 16);
                v30 = v154;
                goto LABEL_92;
              }
              v184 = v30;
              sub_FA5F10(a1, (unsigned int)v78, v150, v24, a4);
              v17 = v171;
              v64 = (unsigned int)v209;
              v65 = HIDWORD(v209);
              v66 = *(_QWORD *)(a1[6] + 8 * v28 + 16);
              v30 = v184;
            }
LABEL_92:
            v67 = v177 & 0xFFFFFFFF00000000LL | v30;
            v177 = v67;
            if ( v64 + 1 > v65 )
            {
              v175 = v67;
              v159 = v66;
              sub_22134E0(&v208, v210, v64 + 1, 16);
              v67 = v175;
              v66 = v159;
              v64 = (unsigned int)v209;
            }
            v68 = (unsigned __int64 *)((char *)v208 + 16 * v64);
            *v68 = v67;
            v68[1] = v66;
            LODWORD(v209) = v209 + 1;
            goto LABEL_49;
          case 4:
            v28 = (unsigned int)v28;
            v30 = v29;
LABEL_96:
            v152 = v30;
            v181 = *(_QWORD *)(v22 + 8 * v28 + 16);
            v200 = 0;
            v199.m128_u64[0] = (unsigned __int64)&off_2BC1F40;
            v199.m128_i32[2] = 2;
            v202 = 0;
            v203 = 1;
            dest = nullptr;
            v204 = a4;
            sub_2257B70(&v199, 0, 0, 0);
            v69 = sub_10A8220((unsigned __int16)v181);
            v70 = v152;
            v71 = (const char *)v69;
            if ( v69 )
            {
              v72 = dest;
              if ( (unsigned __int64)dest >= *((_QWORD *)&v200 + 1) )
              {
                v141 = sub_2257CD0(&v199, 39);
                v70 = v152;
                v73 = (__m128 *)v141;
              }
              else
              {
                v73 = &v199;
                dest = (char *)dest + 1;
                *v72 = 39;
              }
              v153 = v70;
              v74 = sub_971800((__int64)v73, v71);
              v75 = v153;
              v76 = *(_BYTE **)(v74 + 32);
              if ( (unsigned __int64)v76 >= *(_QWORD *)(v74 + 24) )
              {
                sub_2257CD0(v74, 39);
                v75 = v153;
              }
              else
              {
                *(_QWORD *)(v74 + 32) = v76 + 1;
                *v76 = 39;
              }
            }
            else
            {
              v105 = (const char *)sub_10A85D0((unsigned __int16)v181);
              if ( v105 )
              {
                sub_971800((__int64)&v199, v105);
                v75 = v152;
              }
              else if ( (_WORD)v181 == 5 )
              {
                sub_971800((__int64)&v199, "identifier");
                v75 = v152;
              }
              else
              {
                v142 = sub_10A8210((unsigned __int16)v181);
                v143 = v152;
                v144 = (const char *)v142;
                if ( v142 )
                {
                  v145 = dest;
                  if ( (unsigned __int64)dest >= *((_QWORD *)&v200 + 1) )
                  {
                    v146 = (__m128 *)sub_2257CD0(&v199, 60);
                    v143 = v152;
                  }
                  else
                  {
                    dest = (char *)dest + 1;
                    *v145 = 60;
                    v146 = &v199;
                  }
                  v162 = v143;
                  v147 = sub_971800((__int64)v146, v144);
                  v75 = v162;
                  v148 = *(_BYTE **)(v147 + 32);
                  if ( (unsigned __int64)v148 >= *(_QWORD *)(v147 + 24) )
                  {
                    sub_2257CD0(v147, 62);
                    v75 = v162;
                  }
                  else
                  {
                    *(_QWORD *)(v147 + 32) = v148 + 1;
                    *v148 = 62;
                  }
                }
                else
                {
                  sub_971800((__int64)&v199, "(null)");
                  v75 = v152;
                }
              }
            }
            v154 = v75;
            v199.m128_u64[0] = (unsigned __int64)&unk_2C4C288;
            goto LABEL_102;
          case 5:
            v28 = (unsigned int)v28;
LABEL_82:
            v57 = *(_QWORD *)(v22 + 8 * v28 + 16);
            if ( v57 )
            {
              v199.m128_i32[2] = 2;
              v202 = 0;
              v199.m128_u64[0] = (unsigned __int64)&off_2BC1F40;
              v203 = 1;
              dest = nullptr;
              v200 = 0;
              v204 = a4;
              sub_2257B70(&v199, 0, 0, 0);
              v58 = dest;
              if ( (unsigned __int64)dest >= *((_QWORD *)&v200 + 1) )
              {
                sub_2257CD0(&v199, 39);
              }
              else
              {
                dest = (char *)dest + 1;
                *v58 = 39;
              }
              v59 = *(unsigned int **)(v57 + 16);
              v60 = (char *)dest;
              v61 = *v59;
              v62 = v59 + 4;
              v63 = *((_QWORD *)&v200 + 1);
              if ( v61 > *((_QWORD *)&v200 + 1) - (_QWORD)dest )
              {
                sub_22581D0(&v199, v62, v61);
                v60 = (char *)dest;
                v63 = *((_QWORD *)&v200 + 1);
              }
              else if ( v61 )
              {
                memcpy(dest, v62, v61);
                v63 = *((_QWORD *)&v200 + 1);
                v60 = (char *)dest + v61;
                dest = (char *)dest + v61;
              }
              if ( (unsigned __int64)v60 >= v63 )
              {
                sub_2257CD0(&v199, 39);
              }
              else
              {
                dest = v60 + 1;
                *v60 = 39;
              }
              v199.m128_u64[0] = (unsigned __int64)&unk_2C4C288;
              sub_2257A60(&v199);
              goto LABEL_91;
            }
            v103 = a4[1];
            if ( (unsigned __int64)(v103 + 6) > a4[2] )
            {
              sub_22130D0(a4, a4 + 3, v103 + 6, 1);
              v103 = a4[1];
            }
            v104 = *a4 + v103;
            v17 = v171;
            *(_DWORD *)v104 = 1819635240;
            *(_WORD *)(v104 + 4) = 10604;
            a4[1] += 6LL;
            goto LABEL_49;
          case 6:
          case 7:
          case 8:
          case 9:
          case 0xA:
          case 0xB:
          case 0xC:
          case 0xE:
          case 0xF:
          case 0x10:
            v28 = (unsigned int)v28;
LABEL_79:
            (*(void (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64, unsigned __int8 *, _QWORD, void *, _QWORD, _QWORD *, _QWORD, void *, _QWORD))(*a1 + 224LL))(
              v29,
              *(_QWORD *)(v22 + 8 * v28 + 16),
              v27,
              v25,
              v150,
              v24,
              v208,
              (unsigned int)v209,
              a4,
              *(_QWORD *)(*a1 + 216LL),
              ptr,
              (unsigned int)v197);
            v17 = v171;
            if ( v29 == 13 )
              goto LABEL_49;
            v22 = a1[6];
LABEL_120:
            v81 = (unsigned int)v209;
            v65 = HIDWORD(v209);
            v64 = (unsigned int)v209;
            v82 = (unsigned int)v209 + 1LL;
            if ( v29 )
            {
LABEL_132:
              v66 = *(_QWORD *)(v22 + 8 * v28 + 16);
              v17 = v171;
              v30 = v29;
              goto LABEL_92;
            }
            v83 = v176 & 0xFFFFFFFF00000000LL | 1;
            v84 = *(_QWORD *)(v22 + 32 * (v28 + 3));
            v176 = v83;
            if ( v82 > HIDWORD(v209) )
            {
              sub_22134E0(&v208, v210, v82, 16);
              v81 = (unsigned int)v209;
            }
            v85 = (unsigned __int64 *)((char *)v208 + 16 * v81);
            *v85 = v83;
            v85[1] = v84;
            LODWORD(v209) = v209 + 1;
            goto LABEL_49;
          case 0xD:
LABEL_152:
            v17 = v171;
            v185 = v24;
            v178 = &v150[v24];
            goto LABEL_72;
          default:
LABEL_131:
            v64 = (unsigned int)v209;
            v65 = HIDWORD(v209);
            goto LABEL_132;
        }
      }
      if ( *(_DWORD *)(v17 + 1) != 1717987684 )
        goto LABEL_29;
      v17 = v45 + 3;
      v185 = v24;
      v26 = (unsigned int)((char)v45[2] - 48);
      v178 = &v150[v24];
      if ( *(_BYTE *)(v22 + v26 + 1) == 8 && v29 == 8 )
      {
LABEL_72:
        v46 = *a1;
        v172 = v27;
        v189 = v25;
        v199 = _mm_loadh_ps((const double *)(v22 + 8 * v26 + 16));
        LOBYTE(v200) = (4 * (*(_BYTE *)(v46 + 7) & 1)) | v200 & 0xFB;
        v47 = v200 & 0xF7 | (8 * (*(_BYTE *)(v46 + 9) & 1));
        LOBYTE(v200) = v200 & 0xE7 | (8 * (*(_BYTE *)(v46 + 9) & 1)) & 0xEF;
        v48 = sub_FA1DC0(v150, v178, 124);
        v50 = v189;
        v51 = v172;
        v187 = v48;
        if ( *(_BYTE *)(v49 + 8)
          && !n[0]
          && (LOBYTE(v200) = v47 & 0xEC | 3,
              (*(void (__fastcall **)(__int64, __m128 *, _BYTE *, _QWORD, unsigned __int8 *, __int64, void *, _QWORD, void **, _QWORD, void *, _QWORD))(v49 + 224))(
                13,
                &v199,
                v172,
                v189,
                v150,
                v185,
                v208,
                (unsigned int)v209,
                &src,
                *(_QWORD *)(v49 + 216),
                ptr,
                (unsigned int)v197),
              v51 = v172,
              n[0]) )
        {
          sub_FA4360(a1, v187 + 1, v178, a4);
        }
        else
        {
          v190 = v51;
          v52 = sub_FA1DC0(v150, v178, 36) + 1;
          v173 = sub_FA1DC0(v52, v178, 36);
          v151 = v53;
          sub_FA4360(a1, v53, v54, a4);
          LOBYTE(v200) = v200 & 0xFC | 2;
          v179 = v190;
          (*(void (__fastcall **)(__int64, __m128 *, _BYTE *, __int64, __int64, __int64, void *, _QWORD, _QWORD *, _QWORD, void *, _QWORD))(*a1 + 224LL))(
            13,
            &v199,
            v190,
            v50,
            v151,
            v185,
            v208,
            (unsigned int)v209,
            a4,
            *(_QWORD *)(*a1 + 216LL),
            ptr,
            (unsigned int)v197);
          v55 = v190;
          if ( (v200 & 0x10) == 0 )
          {
            v136 = (unsigned int)v209;
            v137 = v199.m128_u64[0];
            v138 = v193 & 0xFFFFFFFF00000000LL | 8;
            v139 = (unsigned int)v209 + 1LL;
            v193 = v138;
            if ( v139 > HIDWORD(v209) )
            {
              v194 = v138;
              v191 = v199.m128_u64[0];
              sub_22134E0(&v208, v210, v139, 16);
              v136 = (unsigned int)v209;
              v55 = v179;
              v138 = v194;
              v137 = v191;
            }
            v140 = (unsigned __int64 *)((char *)v208 + 16 * v136);
            *v140 = v138;
            v140[1] = v137;
            LODWORD(v209) = v209 + 1;
          }
          v180 = v55;
          sub_FA4360(a1, v52, v173, a4);
          v56 = *a1;
          LOBYTE(v200) = v200 & 0xFD;
          (*(void (__fastcall **)(__int64, __m128 *, _BYTE *, __int64, __int64, __int64, void *, _QWORD, _QWORD *, _QWORD, void *, _QWORD))(v56 + 224))(
            13,
            &v199,
            v180,
            v50,
            v151,
            v185,
            v208,
            (unsigned int)v209,
            a4,
            *(_QWORD *)(v56 + 216),
            ptr,
            (unsigned int)v197);
          if ( (v200 & 0x10) == 0 )
          {
            v131 = (unsigned int)v209;
            v132 = v199.m128_u64[1];
            v133 = v192 & 0xFFFFFFFF00000000LL | 8;
            v134 = (unsigned int)v209 + 1LL;
            v192 = v133;
            if ( v134 > HIDWORD(v209) )
            {
              sub_22134E0(&v208, v210, v134, 16);
              v131 = (unsigned int)v209;
            }
            v135 = (unsigned __int64 *)((char *)v208 + 16 * v131);
            *v135 = v133;
            v135[1] = v132;
            LODWORD(v209) = v209 + 1;
          }
          sub_FA4360(a1, v173 + 1, v187, a4);
        }
      }
      else
      {
        v174 = v45[2] - 48;
        v86 = sub_FA1DC0(v150, v178, 124);
        v157 = v87;
        v88 = sub_FA1DC0(v87, v86, 36) + 1;
        v89 = sub_FA1DC0(v88, v86, 36);
        v195[1] = v90 + 48;
        v199.m128_i8[1] = v174 + 48;
        v195[0] = 37;
        v199.m128_i8[0] = 37;
        sub_FA4360(a1, v157, v91, a4);
        sub_FA4360(a1, v195, &ptr, a4);
        sub_FA4360(a1, v88, v89, a4);
        sub_FA4360(a1, &v199, (char *)v199.m128_u64 + 2, a4);
        sub_FA4360(a1, v89 + 1, v86, a4);
      }
LABEL_49:
      if ( a3 == v17 )
        goto LABEL_50;
    }
    v31 = a3 - v17;
    v32 = (a3 - v17) >> 2;
    if ( v32 <= 0 )
    {
      if ( v31 == 2 )
      {
        v33 = v17;
LABEL_158:
        ++v33;
LABEL_159:
        v34 = v33 - v17;
        if ( *v33 != 37 )
        {
          v34 = a3 - v17;
          v33 = a3;
        }
LABEL_45:
        v38 = a4[1];
        v39 = v38 + v34;
        if ( v38 + v34 <= a4[2] )
        {
LABEL_46:
          if ( v33 != v17 )
          {
            memcpy((void *)(*a4 + v38), v17, v34);
            v38 = a4[1];
          }
          v17 = v33;
          a4[1] = v34 + v38;
          goto LABEL_49;
        }
LABEL_130:
        sub_22130D0(a4, a4 + 3, v39, 1);
        v38 = a4[1];
        goto LABEL_46;
      }
      if ( v31 != 3 )
      {
LABEL_44:
        v33 = a3;
        v34 = a3 - v17;
        goto LABEL_45;
      }
      v33 = v17;
    }
    else
    {
      v33 = v17 + 1;
      v34 = 1;
      if ( v17[1] == 37 )
        goto LABEL_45;
      v33 = v17 + 2;
      v34 = 2;
      if ( v17[2] == 37 )
        goto LABEL_45;
      v35 = &v17[4 * v32];
      v33 = v17 + 3;
      v36 = v17;
      v34 = 3;
      if ( v17[3] == 37 )
        goto LABEL_45;
      while ( 1 )
      {
        v33 = v36 + 4;
        if ( v35 == v36 + 4 )
          break;
        if ( v36[4] == 37 )
          goto LABEL_129;
        if ( v36[5] == 37 )
        {
          v33 = v36 + 5;
          goto LABEL_129;
        }
        if ( v36[6] == 37 )
        {
          v33 = v36 + 6;
          v34 = v36 + 6 - v17;
          goto LABEL_45;
        }
        if ( v36[7] == 37 )
        {
          v33 = v36 + 7;
          v34 = v36 + 7 - v17;
          goto LABEL_45;
        }
        v36 += 4;
      }
      v37 = a3 - v33;
      if ( a3 - v33 == 2 )
      {
        v102 = v36[4];
        goto LABEL_157;
      }
      if ( v37 != 3 )
      {
        if ( v37 == 1 )
          goto LABEL_159;
        goto LABEL_44;
      }
      if ( v36[4] == 37 )
        goto LABEL_129;
    }
    v102 = *++v33;
LABEL_157:
    if ( v102 == 37 )
    {
LABEL_129:
      v38 = a4[1];
      v34 = v33 - v17;
      v39 = v38 + v33 - v17;
      if ( v39 <= a4[2] )
        goto LABEL_46;
      goto LABEL_130;
    }
    goto LABEL_158;
  }
LABEL_50:
  v40 = n[0];
  v41 = a4[1];
  v42 = src;
  if ( n[0] + v41 > a4[2] )
  {
    sub_22130D0(a4, a4 + 3, n[0] + v41, 1);
    v41 = a4[1];
  }
  if ( v40 )
  {
    memcpy((void *)(*a4 + v41), v42, v40);
    v41 = a4[1];
  }
  v43 = v41 + v40;
  v44 = src;
  a4[1] = v43;
  if ( v44 != v207 )
    free(v44);
  if ( ptr != v198 )
    free(ptr);
  if ( v208 != v210 )
    free(v208);
}

