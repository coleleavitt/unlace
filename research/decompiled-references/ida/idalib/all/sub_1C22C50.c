__int64 __fastcall sub_1C22C50(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _DWORD *a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // r15
  __int16 v18; // ax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  bool v28; // bl
  unsigned __int64 v29; // rax
  unsigned int v30; // r13d
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdi
  __int64 v33; // r14
  char v34; // al
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  char v37; // si
  int v38; // eax
  unsigned __int8 *v39; // rdi
  void *v40; // rdi
  __int64 v41; // rsi
  bool v42; // bp
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r15
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned __int8 *v50; // rbp
  unsigned __int8 *v51; // rdx
  __int64 v52; // rax
  unsigned __int8 *v53; // rbx
  __int64 v54; // r15
  unsigned __int8 *v55; // rdx
  __int64 v56; // rax
  char v57; // bp
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rbx
  unsigned __int8 *v60; // rbp
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // r15
  _QWORD *v69; // rcx
  unsigned __int64 v70; // rax
  unsigned int v71; // esi
  void *v72; // r9
  __int64 v73; // rdi
  unsigned __int64 v74; // rdx
  _QWORD *v75; // r11
  unsigned int v76; // esi
  __int64 v77; // rdi
  unsigned __int8 *v78; // rcx
  unsigned __int8 *v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rbx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rbx
  __int64 v91; // rbp
  __int64 v92; // rax
  unsigned __int64 v93; // rsi
  unsigned __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rbx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 v101; // rax
  _QWORD *v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rbp
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rdx
  int v113; // eax
  __int64 v114; // rdx
  int v115; // eax
  __int64 v116; // rax
  __int64 v117; // rdx
  int v118; // eax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  __int64 v123; // r15
  __int64 v124; // rax
  _QWORD *v125; // rax
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rbp
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rax
  _QWORD *v132; // rax
  __int64 v133; // rdx
  int v134; // eax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // r15
  char *v138; // rdx
  char *v139; // r15
  char *v140; // rdi
  __int64 v141; // rax
  __int64 v142; // r15
  __int64 v143; // rdx
  __int64 v144; // r15
  void *v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // r15
  __int64 v149; // rdx
  void *v150; // rdi
  __int64 v151; // rax
  __int64 v152; // rbp
  __int64 v153; // rdx
  __int64 v154; // rbp
  void *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rax
  char *v158; // rsi
  char *v159; // rax
  char *v160; // rdi
  __int64 v162; // [rsp+0h] [rbp-198h]
  __int64 v163; // [rsp+0h] [rbp-198h]
  unsigned __int8 *v164; // [rsp+0h] [rbp-198h]
  __int64 v165; // [rsp+0h] [rbp-198h]
  __int64 v166; // [rsp+0h] [rbp-198h]
  __int64 v167; // [rsp+0h] [rbp-198h]
  void *src; // [rsp+8h] [rbp-190h] BYREF
  void *v169; // [rsp+10h] [rbp-188h]
  void *v170; // [rsp+18h] [rbp-180h]
  __int64 v171; // [rsp+28h] [rbp-170h] BYREF
  __int64 v172; // [rsp+30h] [rbp-168h] BYREF
  int v173; // [rsp+38h] [rbp-160h]
  _UNKNOWN **v174; // [rsp+40h] [rbp-158h] BYREF
  __int64 v175; // [rsp+48h] [rbp-150h]
  int v176; // [rsp+50h] [rbp-148h]
  int v177; // [rsp+54h] [rbp-144h]
  char v178; // [rsp+58h] [rbp-140h]
  void *ptr; // [rsp+60h] [rbp-138h]
  __int64 v180; // [rsp+68h] [rbp-130h]
  _BYTE v181[32]; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v182; // [rsp+90h] [rbp-108h]
  __int64 v183; // [rsp+98h] [rbp-100h]
  __int64 v184; // [rsp+A0h] [rbp-F8h]
  __int64 v185; // [rsp+A8h] [rbp-F0h]
  __int64 v186; // [rsp+B0h] [rbp-E8h]
  __int64 v187; // [rsp+B8h] [rbp-E0h]
  __int64 v188; // [rsp+C0h] [rbp-D8h]
  __m128 v189; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v190; // [rsp+E0h] [rbp-B8h]
  char v191; // [rsp+E8h] [rbp-B0h]
  unsigned __int8 *v192; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v193; // [rsp+F8h] [rbp-A0h]
  _BYTE v194[32]; // [rsp+100h] [rbp-98h] BYREF
  unsigned __int64 v195; // [rsp+120h] [rbp-78h]
  __int64 v196; // [rsp+128h] [rbp-70h]
  void *v197; // [rsp+130h] [rbp-68h] BYREF
  __int64 v198; // [rsp+138h] [rbp-60h]
  __int64 v199; // [rsp+140h] [rbp-58h] BYREF
  char v200; // [rsp+148h] [rbp-50h]
  unsigned int v201; // [rsp+150h] [rbp-48h]
  char v202; // [rsp+154h] [rbp-44h]

  if ( (*a5 & 0x10000) == 0 )
  {
    v17 = sub_BFB9F0((__int64)a5);
    v18 = *(_WORD *)v17 & 0x1FF;
    if ( v18 == 32 )
    {
      v19 = *(_DWORD *)(v17 + 32);
      v20 = *a1;
      v176 = -1;
      v177 = v19;
      ptr = v181;
      v180 = 0x400000000LL;
      v175 = v20;
      v178 = 0;
      v174 = &off_2BC79B0;
      v182 = v17;
      v183 = 0;
      v184 = 0;
      v185 = 0;
      v186 = 0;
      v187 = 0;
      v188 = 0;
      if ( !(unsigned __int8)sub_1C1A190((__int64)&v174, 1, v20, v14, v15, v16) )
      {
        v25 = v175;
        if ( (*(_BYTE *)(*(_QWORD *)(v175 + 232) + 1LL) & 8) == 0 )
          goto LABEL_12;
        v26 = v185;
        if ( !v185 )
        {
          sub_1C19F70(&v174, v175, v21, v22, v23, v24);
          v26 = v185;
          if ( !v185 )
            goto LABEL_17;
        }
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v26 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) != 43 )
        {
          v25 = v175;
LABEL_12:
          sub_168B9F0((__int64)&v189, (__int64 *)(v25 + 8), a3, 0x10E4u, 0);
          v27 = *(__int64 *)(v182 + 16) >> 2;
          v28 = (a4 & 0xFFFFFFFD) == 1;
          if ( v200 )
          {
            v78 = v192;
            if ( !v192 )
            {
              v110 = v193;
              v111 = *(_DWORD *)(v193 + 14976);
              if ( v111 )
              {
                v136 = (unsigned int)(v111 - 1);
                *(_DWORD *)(v193 + 14976) = v136;
                v78 = *(unsigned __int8 **)(v110 + 8 * v136 + 14848);
                v137 = *((unsigned int *)v78 + 134);
                *v78 = 0;
                v138 = *((char **)v78 + 66);
                *((_DWORD *)v78 + 106) = 0;
                v139 = &v138[64 * v137];
                while ( v138 != v139 )
                {
                  while ( 1 )
                  {
                    v139 -= 64;
                    v140 = *((char **)v139 + 3);
                    if ( v140 == v139 + 40 )
                      break;
                    src = v138;
                    v164 = v78;
                    operator delete(v140);
                    v138 = (char *)src;
                    v78 = v164;
                    if ( src == v139 )
                      goto LABEL_127;
                  }
                }
LABEL_127:
                *((_DWORD *)v78 + 134) = 0;
              }
              else
              {
                v78 = (unsigned __int8 *)operator new(0x3A0u);
                *v78 = 0;
                *((_QWORD *)v78 + 12) = v78 + 112;
                *((_QWORD *)v78 + 16) = v78 + 144;
                *((_QWORD *)v78 + 20) = v78 + 176;
                *((_QWORD *)v78 + 24) = v78 + 208;
                *((_QWORD *)v78 + 28) = v78 + 240;
                *((_QWORD *)v78 + 32) = v78 + 272;
                *((_QWORD *)v78 + 36) = v78 + 304;
                *((_QWORD *)v78 + 40) = v78 + 336;
                *((_QWORD *)v78 + 44) = v78 + 368;
                *((_QWORD *)v78 + 48) = v78 + 400;
                *((_QWORD *)v78 + 52) = v78 + 432;
                *((_QWORD *)v78 + 13) = 0;
                v78[112] = 0;
                *((_QWORD *)v78 + 17) = 0;
                v78[144] = 0;
                *((_QWORD *)v78 + 21) = 0;
                v78[176] = 0;
                *((_QWORD *)v78 + 25) = 0;
                v78[208] = 0;
                *((_QWORD *)v78 + 29) = 0;
                v78[240] = 0;
                *((_QWORD *)v78 + 33) = 0;
                v78[272] = 0;
                *((_QWORD *)v78 + 37) = 0;
                v78[304] = 0;
                *((_QWORD *)v78 + 41) = 0;
                v78[336] = 0;
                *((_QWORD *)v78 + 45) = 0;
                v78[368] = 0;
                *((_QWORD *)v78 + 49) = 0;
                v78[400] = 0;
                *((_QWORD *)v78 + 53) = 0x800000000LL;
                *((_QWORD *)v78 + 66) = v78 + 544;
                *((_QWORD *)v78 + 67) = 0x600000000LL;
              }
              v192 = v78;
            }
            v78[*v78 + 1] = 3;
            v79 = v192;
            v80 = *v192;
            *v192 = v80 + 1;
            *(_QWORD *)&v79[8 * v80 + 16] = v27 & 1;
          }
          else
          {
            if ( !v202 )
            {
LABEL_14:
              v29 = sub_EEC8C0((unsigned __int64)a5, v27, *(double *)a6.m128_u64);
              v30 = v29;
              v31 = HIDWORD(v29);
LABEL_15:
              if ( v202 )
              {
                v84 = sub_168B9E0(&v189);
                v87 = v190;
                if ( v190 )
                  v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v190 + 32LL))(v190);
                v171 = v87;
                v88 = sub_1587BC0(v84, &v171, v82, v83, v85, v86);
                v89 = *v88 + 32LL * v201;
                v90 = *(_QWORD *)(v89 + 8);
                v91 = v89;
                if ( v90 )
                {
                  v92 = *(unsigned int *)(v90 + 424);
                  v93 = *(unsigned int *)(v90 + 428);
                  v94 = v92 + 1;
                }
                else
                {
                  v133 = *(_QWORD *)(v89 + 16);
                  v134 = *(_DWORD *)(v133 + 14976);
                  if ( v134 )
                  {
                    v156 = (unsigned int)(v134 - 1);
                    *(_DWORD *)(v133 + 14976) = v156;
                    v90 = *(_QWORD *)(v133 + 8 * v156 + 14848);
                    v157 = *(unsigned int *)(v90 + 536);
                    *(_BYTE *)v90 = 0;
                    v158 = *(char **)(v90 + 528);
                    *(_DWORD *)(v90 + 424) = 0;
                    v159 = &v158[64 * v157];
                    while ( v158 != v159 )
                    {
                      while ( 1 )
                      {
                        v159 -= 64;
                        v160 = *((char **)v159 + 3);
                        if ( v160 == v159 + 40 )
                          break;
                        src = v159;
                        operator delete(v160);
                        v159 = (char *)src;
                        if ( v158 == src )
                          goto LABEL_146;
                      }
                    }
LABEL_146:
                    v92 = *(unsigned int *)(v90 + 424);
                    v93 = *(unsigned int *)(v90 + 428);
                    *(_DWORD *)(v90 + 536) = 0;
                    v94 = v92 + 1;
                  }
                  else
                  {
                    v135 = operator new(0x3A0u);
                    v93 = 8;
                    v94 = 1;
                    v90 = v135;
                    *(_BYTE *)v135 = 0;
                    *(_QWORD *)(v135 + 96) = v135 + 112;
                    *(_QWORD *)(v135 + 128) = v135 + 144;
                    *(_QWORD *)(v135 + 160) = v135 + 176;
                    *(_QWORD *)(v135 + 192) = v135 + 208;
                    *(_QWORD *)(v135 + 224) = v135 + 240;
                    *(_QWORD *)(v135 + 256) = v135 + 272;
                    *(_QWORD *)(v135 + 288) = v135 + 304;
                    *(_QWORD *)(v135 + 320) = v135 + 336;
                    *(_QWORD *)(v135 + 352) = v135 + 368;
                    *(_QWORD *)(v135 + 384) = v135 + 400;
                    *(_QWORD *)(v135 + 416) = v135 + 432;
                    *(_QWORD *)(v135 + 104) = 0;
                    *(_BYTE *)(v135 + 112) = 0;
                    *(_QWORD *)(v135 + 136) = 0;
                    *(_BYTE *)(v135 + 144) = 0;
                    *(_QWORD *)(v135 + 168) = 0;
                    *(_BYTE *)(v135 + 176) = 0;
                    *(_QWORD *)(v135 + 200) = 0;
                    *(_BYTE *)(v135 + 208) = 0;
                    *(_QWORD *)(v135 + 232) = 0;
                    *(_BYTE *)(v135 + 240) = 0;
                    *(_QWORD *)(v135 + 264) = 0;
                    *(_BYTE *)(v135 + 272) = 0;
                    *(_QWORD *)(v135 + 296) = 0;
                    *(_BYTE *)(v135 + 304) = 0;
                    *(_QWORD *)(v135 + 328) = 0;
                    *(_BYTE *)(v135 + 336) = 0;
                    *(_QWORD *)(v135 + 360) = 0;
                    *(_BYTE *)(v135 + 368) = 0;
                    *(_QWORD *)(v135 + 392) = 0;
                    *(_BYTE *)(v135 + 400) = 0;
                    *(_QWORD *)(v135 + 424) = 0x800000000LL;
                    *(_QWORD *)(v135 + 528) = v135 + 544;
                    *(_QWORD *)(v135 + 536) = 0x600000000LL;
                    v92 = 0;
                  }
                  *(_QWORD *)(v91 + 8) = v90;
                }
                v172 = __PAIR64__(v31, v30);
                LOBYTE(v173) = 1;
                if ( v94 > v93 )
                {
                  sub_2237220(v90 + 416, v90 + 432, v94, 12);
                  v92 = *(unsigned int *)(v90 + 424);
                }
                v95 = *(_QWORD *)(v90 + 416) + 12 * v92;
                *(_QWORD *)v95 = v172;
                *(_DWORD *)(v95 + 8) = v173;
                ++*(_DWORD *)(v90 + 424);
              }
              goto LABEL_16;
            }
            v47 = sub_168B9E0(&v189);
            v48 = v190;
            if ( v190 )
              v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v190 + 32LL))(v190);
            v172 = v48;
            v49 = sub_1587BC0(v47, &v172, v43, v44, v45, v46);
            v27 &= 1u;
            sub_AE9DF0((unsigned __int8 **)(*v49 + 32LL * v201 + 8), v27, 3u);
          }
          if ( v200 )
          {
            v50 = v192;
            if ( !v192 )
            {
              v117 = v193;
              v118 = *(_DWORD *)(v193 + 14976);
              if ( v118 )
              {
                v146 = (unsigned int)(v118 - 1);
                *(_DWORD *)(v193 + 14976) = v146;
                v50 = *(unsigned __int8 **)(v117 + 8 * v146 + 14848);
                v147 = *((unsigned int *)v50 + 134);
                *v50 = 0;
                v148 = *((_QWORD *)v50 + 66);
                *((_DWORD *)v50 + 106) = 0;
                v149 = v148 + (v147 << 6);
                while ( v148 != v149 )
                {
                  while ( 1 )
                  {
                    v149 -= 64;
                    v150 = *(void **)(v149 + 24);
                    if ( v150 == (void *)(v149 + 40) )
                      break;
                    v166 = v149;
                    operator delete(v150);
                    v149 = v166;
                    if ( v148 == v166 )
                      goto LABEL_137;
                  }
                }
LABEL_137:
                *((_DWORD *)v50 + 134) = 0;
              }
              else
              {
                v50 = (unsigned __int8 *)operator new(0x3A0u);
                *v50 = 0;
                *((_QWORD *)v50 + 12) = v50 + 112;
                *((_QWORD *)v50 + 16) = v50 + 144;
                *((_QWORD *)v50 + 20) = v50 + 176;
                *((_QWORD *)v50 + 24) = v50 + 208;
                *((_QWORD *)v50 + 28) = v50 + 240;
                *((_QWORD *)v50 + 32) = v50 + 272;
                *((_QWORD *)v50 + 36) = v50 + 304;
                *((_QWORD *)v50 + 40) = v50 + 336;
                *((_QWORD *)v50 + 44) = v50 + 368;
                *((_QWORD *)v50 + 48) = v50 + 400;
                *((_QWORD *)v50 + 52) = v50 + 432;
                *((_QWORD *)v50 + 13) = 0;
                v50[112] = 0;
                *((_QWORD *)v50 + 17) = 0;
                v50[144] = 0;
                *((_QWORD *)v50 + 21) = 0;
                v50[176] = 0;
                *((_QWORD *)v50 + 25) = 0;
                v50[208] = 0;
                *((_QWORD *)v50 + 29) = 0;
                v50[240] = 0;
                *((_QWORD *)v50 + 33) = 0;
                v50[272] = 0;
                *((_QWORD *)v50 + 37) = 0;
                v50[304] = 0;
                *((_QWORD *)v50 + 41) = 0;
                v50[336] = 0;
                *((_QWORD *)v50 + 45) = 0;
                v50[368] = 0;
                *((_QWORD *)v50 + 49) = 0;
                v50[400] = 0;
                *((_QWORD *)v50 + 53) = 0x800000000LL;
                *((_QWORD *)v50 + 66) = v50 + 544;
                *((_QWORD *)v50 + 67) = 0x600000000LL;
              }
              v192 = v50;
            }
            v50[*v50 + 1] = 3;
            v51 = v192;
            v52 = *v192;
            *v192 = v52 + 1;
            *(_QWORD *)&v51[8 * v52 + 16] = v28;
          }
          else
          {
            if ( !v202 )
              goto LABEL_14;
            v105 = sub_168B9E0(&v189);
            v108 = v190;
            if ( v190 )
              v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v190 + 32LL))(v190);
            v172 = v108;
            v109 = sub_1587BC0(v105, &v172, v103, v104, v106, v107);
            v27 = v28;
            sub_AE9DF0((unsigned __int8 **)(*v109 + 32LL * v201 + 8), v28, 3u);
          }
          if ( v200 )
          {
            v53 = v192;
            v54 = v187;
            if ( !v192 )
            {
              v112 = v193;
              v113 = *(_DWORD *)(v193 + 14976);
              if ( v113 )
              {
                v151 = (unsigned int)(v113 - 1);
                *(_DWORD *)(v193 + 14976) = v151;
                v53 = *(unsigned __int8 **)(v112 + 8 * v151 + 14848);
                v152 = *((unsigned int *)v53 + 134);
                *v53 = 0;
                v153 = *((_QWORD *)v53 + 66);
                *((_DWORD *)v53 + 106) = 0;
                v154 = v153 + (v152 << 6);
                while ( v153 != v154 )
                {
                  while ( 1 )
                  {
                    v154 -= 64;
                    v155 = *(void **)(v154 + 24);
                    if ( v155 == (void *)(v154 + 40) )
                      break;
                    v167 = v153;
                    operator delete(v155);
                    v153 = v167;
                    if ( v167 == v154 )
                      goto LABEL_142;
                  }
                }
LABEL_142:
                *((_DWORD *)v53 + 134) = 0;
              }
              else
              {
                v53 = (unsigned __int8 *)operator new(0x3A0u);
                *v53 = 0;
                *((_QWORD *)v53 + 12) = v53 + 112;
                *((_QWORD *)v53 + 16) = v53 + 144;
                *((_QWORD *)v53 + 20) = v53 + 176;
                *((_QWORD *)v53 + 24) = v53 + 208;
                *((_QWORD *)v53 + 28) = v53 + 240;
                *((_QWORD *)v53 + 32) = v53 + 272;
                *((_QWORD *)v53 + 36) = v53 + 304;
                *((_QWORD *)v53 + 40) = v53 + 336;
                *((_QWORD *)v53 + 44) = v53 + 368;
                *((_QWORD *)v53 + 48) = v53 + 400;
                *((_QWORD *)v53 + 52) = v53 + 432;
                *((_QWORD *)v53 + 13) = 0;
                v53[112] = 0;
                *((_QWORD *)v53 + 17) = 0;
                v53[144] = 0;
                *((_QWORD *)v53 + 21) = 0;
                v53[176] = 0;
                *((_QWORD *)v53 + 25) = 0;
                v53[208] = 0;
                *((_QWORD *)v53 + 29) = 0;
                v53[240] = 0;
                *((_QWORD *)v53 + 33) = 0;
                v53[272] = 0;
                *((_QWORD *)v53 + 37) = 0;
                v53[304] = 0;
                *((_QWORD *)v53 + 41) = 0;
                v53[336] = 0;
                *((_QWORD *)v53 + 45) = 0;
                v53[368] = 0;
                *((_QWORD *)v53 + 49) = 0;
                v53[400] = 0;
                *((_QWORD *)v53 + 53) = 0x800000000LL;
                *((_QWORD *)v53 + 66) = v53 + 544;
                *((_QWORD *)v53 + 67) = 0x600000000LL;
              }
              v192 = v53;
            }
            v53[*v53 + 1] = 9;
            v55 = v192;
            v56 = *v192;
            *v192 = v56 + 1;
            *(_QWORD *)&v55[8 * v56 + 16] = v54;
            v57 = v200;
          }
          else
          {
            if ( !v202 )
              goto LABEL_14;
            v98 = sub_168B9E0(&v189);
            v101 = v190;
            if ( v190 )
              v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v190 + 32LL))(v190);
            v172 = v101;
            v102 = sub_1587BC0(v98, &v172, v96, v97, v99, v100);
            v27 = v187;
            sub_AE9DF0((unsigned __int8 **)(*v102 + 32LL * v201 + 8), v187, 9u);
            v57 = v200;
          }
          v58 = sub_EEC8C0((unsigned __int64)a5, v27, *(double *)a6.m128_u64);
          v30 = v58;
          v59 = HIDWORD(v58);
          LODWORD(v31) = HIDWORD(v58);
          if ( v57 )
          {
            v60 = v192;
            if ( v192 )
            {
              v61 = *((unsigned int *)v192 + 106);
              v62 = *((unsigned int *)v192 + 107);
              v63 = v61 + 1;
            }
            else
            {
              v114 = v193;
              v115 = *(_DWORD *)(v193 + 14976);
              if ( v115 )
              {
                v141 = (unsigned int)(v115 - 1);
                *(_DWORD *)(v193 + 14976) = v141;
                v60 = *(unsigned __int8 **)(v114 + 8 * v141 + 14848);
                v142 = *((unsigned int *)v60 + 134);
                *v60 = 0;
                v143 = *((_QWORD *)v60 + 66);
                *((_DWORD *)v60 + 106) = 0;
                v144 = v143 + (v142 << 6);
                while ( v143 != v144 )
                {
                  while ( 1 )
                  {
                    v144 -= 64;
                    v145 = *(void **)(v144 + 24);
                    if ( v145 == (void *)(v144 + 40) )
                      break;
                    v165 = v143;
                    operator delete(v145);
                    v143 = v165;
                    if ( v165 == v144 )
                      goto LABEL_132;
                  }
                }
LABEL_132:
                v61 = *((unsigned int *)v60 + 106);
                v62 = *((unsigned int *)v60 + 107);
                *((_DWORD *)v60 + 134) = 0;
                v63 = v61 + 1;
              }
              else
              {
                v116 = operator new(0x3A0u);
                v62 = 8;
                v63 = 1;
                v60 = (unsigned __int8 *)v116;
                *(_BYTE *)v116 = 0;
                *(_QWORD *)(v116 + 96) = v116 + 112;
                *(_QWORD *)(v116 + 128) = v116 + 144;
                *(_QWORD *)(v116 + 160) = v116 + 176;
                *(_QWORD *)(v116 + 192) = v116 + 208;
                *(_QWORD *)(v116 + 224) = v116 + 240;
                *(_QWORD *)(v116 + 256) = v116 + 272;
                *(_QWORD *)(v116 + 288) = v116 + 304;
                *(_QWORD *)(v116 + 320) = v116 + 336;
                *(_QWORD *)(v116 + 352) = v116 + 368;
                *(_QWORD *)(v116 + 384) = v116 + 400;
                *(_QWORD *)(v116 + 416) = v116 + 432;
                *(_QWORD *)(v116 + 104) = 0;
                *(_BYTE *)(v116 + 112) = 0;
                *(_QWORD *)(v116 + 136) = 0;
                *(_BYTE *)(v116 + 144) = 0;
                *(_QWORD *)(v116 + 168) = 0;
                *(_BYTE *)(v116 + 176) = 0;
                *(_QWORD *)(v116 + 200) = 0;
                *(_BYTE *)(v116 + 208) = 0;
                *(_QWORD *)(v116 + 232) = 0;
                *(_BYTE *)(v116 + 240) = 0;
                *(_QWORD *)(v116 + 264) = 0;
                *(_BYTE *)(v116 + 272) = 0;
                *(_QWORD *)(v116 + 296) = 0;
                *(_BYTE *)(v116 + 304) = 0;
                *(_QWORD *)(v116 + 328) = 0;
                *(_BYTE *)(v116 + 336) = 0;
                *(_QWORD *)(v116 + 360) = 0;
                *(_BYTE *)(v116 + 368) = 0;
                *(_QWORD *)(v116 + 392) = 0;
                *(_BYTE *)(v116 + 400) = 0;
                *(_QWORD *)(v116 + 424) = 0x800000000LL;
                *(_QWORD *)(v116 + 528) = v116 + 544;
                *(_QWORD *)(v116 + 536) = 0x600000000LL;
                v61 = 0;
              }
              v192 = v60;
            }
            v172 = __PAIR64__(v59, v30);
            LOBYTE(v173) = 1;
            if ( v63 > v62 )
            {
              sub_2237220(v60 + 416, v60 + 432, v63, 12);
              v61 = *((unsigned int *)v60 + 106);
            }
            v64 = *((_QWORD *)v60 + 52) + 12 * v61;
            *(_QWORD *)v64 = v172;
            *(_DWORD *)(v64 + 8) = v173;
            ++*((_DWORD *)v60 + 106);
            goto LABEL_16;
          }
          goto LABEL_15;
        }
        v81 = sub_1C20420((__int64)&v174, (unsigned __int64)a5, a6, a7);
        if ( v81 == 1 )
          goto LABEL_17;
        result = sub_1925670(v175, a2, a3, a4, (_QWORD *)(v81 & 0xFFFFFFFFFFFFFFFELL), 0, a6, a7);
LABEL_33:
        v39 = (unsigned __int8 *)ptr;
        v174 = (_UNKNOWN **)&unk_2C66D98;
        if ( ptr == v181 )
          return result;
        goto LABEL_34;
      }
      if ( v185 || sub_1C19F70(&v174, 1, v21, v22, v23, v24) )
      {
        result = sub_1C164F0((__int64)&v174, a2, a3, a4, (__int64)a5, a6, a7);
        goto LABEL_33;
      }
      v41 = v175 + 8;
      sub_168B9F0((__int64)&v189, (__int64 *)(v175 + 8), a3, 0x10C0u, 0);
      v42 = (a4 & 0xFFFFFFFD) == 1;
      if ( v200 )
      {
        v41 = v42;
        sub_AE9DF0(&v192, v42, 3u);
      }
      else
      {
        if ( !v202 )
        {
LABEL_44:
          v172 = sub_EEC8C0((unsigned __int64)a5, v41, *(double *)a6.m128_u64);
          sub_1587DB0((__int64)&v189, &v172);
LABEL_16:
          sub_15F7200(&v189);
LABEL_17:
          result = 1;
          goto LABEL_33;
        }
        v123 = sub_168B9E0(&v189);
        v124 = v190;
        if ( v190 )
          v124 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v190 + 32LL))(v190);
        v172 = v124;
        v125 = sub_1587BC0(v123, &v172, v119, v120, v121, v122);
        v41 = v42;
        sub_AE9DF0((unsigned __int8 **)(*v125 + 32LL * v201 + 8), v42, 3u);
      }
      if ( v200 )
      {
        v41 = v188;
        sub_AE9DF0(&v192, v188, 9u);
      }
      else if ( v202 )
      {
        v128 = sub_168B9E0(&v189);
        v131 = v190;
        if ( v190 )
          v131 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v190 + 32LL))(v190);
        v172 = v131;
        v132 = sub_1587BC0(v128, &v172, v126, v127, v129, v130);
        v41 = v188;
        sub_AE9DF0((unsigned __int8 **)(*v132 + 32LL * v201 + 8), v188, 9u);
      }
      goto LABEL_44;
    }
    if ( v18 == 28 )
    {
      sub_168B9F0((__int64)&v189, a1, a3, 0xF57u, 0);
      sub_15F7200(&v189);
      return 1;
    }
    if ( v18 != 50 )
    {
      v65 = *a1;
      v191 = 0;
      v189.m128_u64[1] = v65;
      HIDWORD(v190) = sub_EEC8C0(v17, a2, *(double *)a6.m128_u64);
      v192 = v194;
      v198 = 0x400000000LL;
      LODWORD(v190) = -1;
      v193 = 0x400000000LL;
      v189.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
      v196 = 0;
      v197 = &v199;
      v66 = *(_QWORD *)(v17 + 24);
      LODWORD(v198) = 1;
      v199 = v66;
      v67 = *(_QWORD *)(v17 + 16);
      src = &v199;
      v68 = sub_BFB9F0(v67);
      if ( (*(_WORD *)v68 & 0x1FF) == 0x31 )
      {
        v69 = src;
        v70 = 4;
        v71 = 1;
        v170 = src;
        while ( 1 )
        {
          v72 = *(void **)(v68 + 24);
          v73 = 8LL * v71;
          v74 = v71 + 1LL;
          v75 = &v69[(unsigned __int64)v73 / 8];
          if ( v73 )
          {
            if ( v70 < v74 )
            {
              src = *(void **)(v68 + 24);
              sub_2237220(&v197, v170, v74, 8);
              v72 = src;
              v69 = v197;
              v71 = v198;
              v73 = 8LL * (unsigned int)v198;
              v75 = (char *)v197 + v73;
            }
            *v75 = v69[(unsigned __int64)v73 / 8 - 1];
            if ( (char *)v197 + v73 - 8 != (char *)v69 )
            {
              v169 = v72;
              src = v69;
              memmove(v69 + 1, v69, (char *)v197 + v73 - 8 - (char *)v69);
              v72 = v169;
              v69 = src;
              v71 = v198;
            }
            v76 = v71 + 1;
            LODWORD(v198) = v76;
            *v69 = v72;
          }
          else
          {
            if ( v70 < v74 )
            {
              src = *(void **)(v68 + 24);
              sub_2237220(&v197, v170, v74, 8);
              v72 = src;
              v69 = (char *)v197 + 8 * (unsigned int)v198;
            }
            *v69 = v72;
            v76 = v198 + 1;
            LODWORD(v198) = v198 + 1;
          }
          v77 = *(_QWORD *)(v68 + 16);
          LODWORD(src) = v76;
          v68 = sub_BFB9F0(v77);
          if ( (*(_WORD *)v68 & 0x1FF) != 0x31 )
            break;
          v69 = v197;
          v70 = HIDWORD(v198);
          v71 = (unsigned int)src;
        }
      }
      v195 = v68;
      result = sub_1C164F0((__int64)&v189, a2, a3, a4, (__int64)a5, a6, a7);
      v40 = v197;
      v189.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
      if ( v197 == &v199 )
      {
LABEL_39:
        v39 = v192;
        v189.m128_u64[0] = (unsigned __int64)&unk_2C66D98;
        if ( v192 == v194 )
          return result;
LABEL_34:
        v162 = result;
        free(v39);
        return v162;
      }
LABEL_38:
      v163 = result;
      free(v40);
      result = v163;
      goto LABEL_39;
    }
    v32 = *(_QWORD *)(v17 + 16);
    v33 = *a1;
    if ( v32 )
    {
      v34 = sub_BFE300(v32);
      if ( v34 )
      {
        if ( *(_QWORD *)(v17 + 40) )
        {
          v35 = *(_QWORD *)(v17 + 40);
          a7 = (__m128)_mm_loadu_si128((const __m128i *)(v17 + 40));
          v189 = a7;
          if ( v35 )
          {
            v36 = *(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v36 )
            {
              v37 = 0;
              src = (void *)v189.m128_u64[1];
              a6 = _mm_loadh_ps((const double *)&src);
              v189 = a6;
              while ( (*(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
              {
                v37 = v34;
                v36 = *(_QWORD *)(v36 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              }
              if ( v37 )
                v189.m128_u64[0] = v36;
            }
          }
          v38 = sub_E90530((__int64 *)&v189);
        }
        else
        {
          v38 = *(_DWORD *)(v17 + 32);
        }
LABEL_37:
        HIDWORD(v190) = v38;
        v189.m128_u64[1] = v33;
        v192 = v194;
        v189.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
        LODWORD(v190) = -1;
        v191 = 0;
        v193 = 0x400000000LL;
        v195 = v17;
        v196 = 0;
        v197 = &v199;
        v198 = 0x400000000LL;
        result = sub_1C164F0((__int64)&v189, a2, a3, a4, (__int64)a5, a6, a7);
        v40 = v197;
        v189.m128_u64[0] = (unsigned __int64)&off_2BC7A40;
        if ( v197 == &v199 )
          goto LABEL_39;
        goto LABEL_38;
      }
      v32 = *(_QWORD *)(v17 + 16);
    }
    v38 = sub_EEB7E0(v32, a2, *(double *)a6.m128_u64);
    goto LABEL_37;
  }
  v11 = *(unsigned int *)(*a1 + 1952);
  v12 = *(unsigned int *)(*a1 + 1956);
  if ( *(_QWORD *)(*a1 + 1944) == __PAIR64__(v12, v11) )
  {
    v12 = 0;
    v11 = 0;
  }
  return sub_C09D40(
           *(_QWORD **)(*a1 + 248),
           (__int64)a5,
           a4,
           *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 19072LL),
           0,
           0,
           a3,
           0,
           (v12 << 32) | v11);
}
