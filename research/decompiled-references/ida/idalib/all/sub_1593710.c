__int64 __fastcall sub_1593710(__int64 a1, __m128 a2)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax
  unsigned int *v5; // r12
  _BYTE *v6; // rbp
  signed __int64 v7; // r13
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  _BYTE *v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  bool v16; // bp
  unsigned __int64 v17; // rax
  _BYTE *v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  void **v23; // rbp
  __int64 v24; // r15
  unsigned int v25; // eax
  unsigned __int64 *v26; // rsi
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  unsigned int v29; // r13d
  unsigned __int64 v30; // r14
  int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rsi
  _QWORD *v34; // rdi
  __int64 v35; // rsi
  _QWORD *v36; // rsi
  __int64 result; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  void *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // r14
  void *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rdx
  unsigned __int8 *v58; // r14
  _BYTE *v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  unsigned __int8 *v63; // r14
  __int64 v64; // rax
  unsigned __int64 v65; // rsi
  unsigned __int64 v66; // rdx
  __int64 v67; // rax
  unsigned __int8 *v68; // r14
  __int64 v69; // r14
  unsigned int v70; // eax
  __int64 v71; // r13
  unsigned __int64 v72; // rax
  unsigned int v73; // r13d
  unsigned __int64 v74; // r15
  unsigned __int8 *v75; // r15
  _BYTE *v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rcx
  unsigned __int8 *v80; // r15
  __int64 v81; // rax
  unsigned __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // r15
  void *v89; // rax
  _QWORD *v90; // rax
  __int64 v91; // rdx
  unsigned __int8 *v92; // r15
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  void *v97; // rax
  _QWORD *v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rax
  unsigned __int64 v101; // rdi
  unsigned __int64 v102; // rdx
  __int64 v103; // rdx
  unsigned __int64 v104; // rbp
  void *v105; // rdi
  __int64 v106; // rdx
  int v107; // eax
  unsigned __int8 *v108; // rax
  __int64 v109; // rdx
  int v110; // eax
  __int64 v111; // rcx
  int v112; // eax
  __int64 v113; // rdx
  int v114; // eax
  unsigned __int8 *v115; // rax
  __int64 v116; // rdx
  int v117; // eax
  __int64 v118; // rdx
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rsi
  __int64 v123; // rax
  unsigned __int64 v124; // r12
  __int64 v125; // rbx
  void *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rax
  unsigned __int64 v131; // r12
  __int64 v132; // rbx
  __int64 v133; // rbp
  void *v134; // rdi
  __int64 v135; // rdx
  int v136; // eax
  __int64 v137; // rcx
  int v138; // eax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rax
  unsigned __int64 v143; // r12
  __int64 v144; // rbx
  __int64 v145; // rbp
  void *v146; // rdi
  __int64 v147; // rax
  __int64 v148; // rax
  unsigned __int64 *v149; // rax
  __int64 v150; // r12
  unsigned __int64 *v151; // rbx
  unsigned __int64 *v152; // rdi
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rsi
  __int64 v156; // rax
  unsigned __int64 v157; // r12
  __int64 v158; // rbx
  void *v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rdx
  __int64 v162; // r8
  __int64 v163; // rdx
  __int64 v164; // r13
  __int64 v165; // rbx
  __int64 v166; // rbp
  void *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rax
  unsigned __int64 v170; // rax
  __int64 v171; // r12
  unsigned __int64 v172; // rbx
  void *v173; // rdi
  __int64 v174; // rax
  __int64 v175; // rdx
  __int64 v176; // r8
  __int64 v177; // rdx
  __int64 v178; // r12
  __int64 v179; // rbx
  __int64 v180; // rbp
  void *v181; // rdi
  __int64 v182; // rax
  unsigned int v183; // eax
  __int64 v184; // rax
  __int64 v185; // rbx
  int v186; // ebp
  __int64 v187; // rdx
  __int64 v188; // rcx
  __int64 v189; // r8
  __int64 v190; // r9
  __int64 v191; // rdx
  __int64 i; // rdx
  unsigned int v193; // edx
  unsigned __int64 v194; // rax
  __int64 v195; // [rsp+8h] [rbp-140h]
  __int64 *v196; // [rsp+10h] [rbp-138h]
  unsigned __int64 v198; // [rsp+28h] [rbp-120h]
  __int64 v199; // [rsp+30h] [rbp-118h]
  char v200; // [rsp+30h] [rbp-118h]
  char v201; // [rsp+30h] [rbp-118h]
  __int64 v202; // [rsp+30h] [rbp-118h]
  int v203; // [rsp+30h] [rbp-118h]
  __int64 v204; // [rsp+30h] [rbp-118h]
  int v205; // [rsp+30h] [rbp-118h]
  unsigned __int64 v206; // [rsp+30h] [rbp-118h]
  void **v207; // [rsp+30h] [rbp-118h]
  __int64 v208; // [rsp+30h] [rbp-118h]
  __int64 v209; // [rsp+30h] [rbp-118h]
  __int64 v210; // [rsp+30h] [rbp-118h]
  void **v211; // [rsp+30h] [rbp-118h]
  unsigned __int64 v212; // [rsp+30h] [rbp-118h]
  unsigned __int64 v213; // [rsp+30h] [rbp-118h]
  unsigned int v214; // [rsp+30h] [rbp-118h]
  __int64 v215; // [rsp+30h] [rbp-118h]
  unsigned __int64 v216; // [rsp+30h] [rbp-118h]
  __int64 v217; // [rsp+30h] [rbp-118h]
  __int64 v218; // [rsp+38h] [rbp-110h]
  unsigned int *v219; // [rsp+40h] [rbp-108h]
  __int64 *v220; // [rsp+48h] [rbp-100h]
  unsigned __int64 v221; // [rsp+50h] [rbp-F8h]
  unsigned __int64 v222; // [rsp+50h] [rbp-F8h]
  void **v223; // [rsp+58h] [rbp-F0h]
  void **v224; // [rsp+58h] [rbp-F0h]
  void *v225; // [rsp+68h] [rbp-E0h] BYREF
  unsigned __int64 v226; // [rsp+70h] [rbp-D8h] BYREF
  int v227; // [rsp+78h] [rbp-D0h]
  _WORD *v228; // [rsp+80h] [rbp-C8h] BYREF
  int v229; // [rsp+88h] [rbp-C0h]
  char v230; // [rsp+8Ch] [rbp-BCh]
  void *ptr; // [rsp+90h] [rbp-B8h]
  __int64 v232; // [rsp+98h] [rbp-B0h]
  unsigned __int8 *v233; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v234; // [rsp+A8h] [rbp-A0h]
  char v235; // [rsp+F8h] [rbp-50h]
  unsigned int v236; // [rsp+100h] [rbp-48h]
  char v237; // [rsp+104h] [rbp-44h]

  v2 = a1;
  v196 = *(__int64 **)(a1 + 40);
  v220 = &v196[2 * *(unsigned int *)(a1 + 48)];
  if ( v220 != v196 )
  {
    while ( 1 )
    {
      v3 = v196[1];
      v4 = v3 >> 2;
      v195 = *v196;
      v5 = (unsigned int *)(v3 & 0xFFFFFFFFFFFFFFF8LL);
      v6 = *(_BYTE **)v5;
      v7 = (unsigned __int64)v5[2] << 6;
      LODWORD(v4) = v4 & 1;
      v8 = *(_QWORD *)v5 + v7;
      v218 = (unsigned int)v4;
      if ( !(_DWORD)v4 )
        goto LABEL_28;
      v9 = v7 >> 6;
      if ( !(unsigned __int8)((__int64)v5[2] >> 2) )
      {
        v10 = *(_BYTE **)v5;
        goto LABEL_160;
      }
      if ( v6[10] || v6[8] || v6[9] )
      {
        v10 = *(_BYTE **)v5;
        goto LABEL_23;
      }
      v10 = v6 + 64;
      if ( !v6[74] && !v6[72] )
        break;
LABEL_23:
      if ( v10 == (_BYTE *)v8 )
        goto LABEL_28;
      v12 = sub_B73640(v195);
      v228 = (_WORD *)sub_BFD550(v12);
      v232 = 0x200000000LL;
      v229 = (int)&stru_10000;
      v13 = *(_QWORD *)(a1 + 8);
      v230 = 0;
      ptr = &v233;
      v16 = sub_158DB20(v13, (void **)v195, &v228, 1, v14, v15, a2);
      if ( ptr != &v233 )
        free(ptr);
      if ( !v16 )
      {
        v6 = *(_BYTE **)v5;
        v7 = (unsigned __int64)v5[2] << 6;
        v8 = *(_QWORD *)v5 + v7;
LABEL_28:
        if ( v6 != (_BYTE *)v8 )
        {
LABEL_29:
          _BitScanReverse64(&v17, v7 >> 6);
          sub_1592DE0((__int64)v6, v8, 2LL * (int)(63 - (v17 ^ 0x3F)), *(double *)a2.m128_u64);
          if ( (unsigned __int64)v7 <= 0x400 )
          {
            v19 = v8;
            sub_1592B50((__int64)v6, v8, *(double *)a2.m128_u64);
          }
          else
          {
            v18 = v6 + 1024;
            v19 = (unsigned __int64)(v6 + 1024);
            sub_1592B50((__int64)v6, (__int64)(v6 + 1024), *(double *)a2.m128_u64);
            if ( v6 + 1024 != (_BYTE *)v8 )
            {
              do
              {
                v22 = (__int64)v18;
                v18 += 64;
                sub_15928D0(v22, v19, *(double *)a2.m128_u64);
              }
              while ( v18 != (_BYTE *)v8 );
            }
          }
          v8 = *(_QWORD *)v5;
          v198 = *(_QWORD *)v5 + ((unsigned __int64)v5[2] << 6);
          if ( v198 == *(_QWORD *)v5 )
            goto LABEL_167;
          v23 = (void **)&v228;
          v219 = v5;
          while ( 2 )
          {
            if ( *(_BYTE *)(v8 + 11) )
            {
              v24 = *(_QWORD *)(a1 + 8);
              v25 = sub_EEB7E0(*(_QWORD *)v8, v19, *(double *)a2.m128_u64);
              v26 = (unsigned __int64 *)(v24 + 8);
              sub_168B9F0(v23, v24 + 8, v25, 7482, 0);
              v27 = *(_QWORD *)(v195 + 40);
              if ( v235 )
              {
                v68 = v233;
                if ( !v233 )
                {
                  v109 = v234;
                  v110 = *(_DWORD *)(v234 + 14976);
                  if ( v110 )
                  {
                    v127 = (unsigned int)(v110 - 1);
                    *(_DWORD *)(v234 + 14976) = v127;
                    v68 = *(unsigned __int8 **)(v109 + 8 * v127 + 14848);
                    v128 = *((unsigned int *)v68 + 134);
                    *v68 = 0;
                    v129 = *((_QWORD *)v68 + 66);
                    *((_DWORD *)v68 + 106) = 0;
                    v130 = v129 + (v128 << 6);
                    if ( v129 != v130 )
                    {
                      v131 = v8;
                      v207 = v23;
                      v132 = v130;
                      v133 = v129;
                      do
                      {
                        while ( 1 )
                        {
                          v132 -= 64;
                          v134 = *(void **)(v132 + 24);
                          if ( v134 == (void *)(v132 + 40) )
                            break;
                          operator delete(v134);
                          if ( v133 == v132 )
                            goto LABEL_149;
                        }
                      }
                      while ( v133 != v132 );
LABEL_149:
                      v23 = v207;
                      v8 = v131;
                    }
                    *((_DWORD *)v68 + 134) = 0;
                  }
                  else
                  {
                    v68 = (unsigned __int8 *)operator new(0x3A0u);
                    *v68 = 0;
                    *((_QWORD *)v68 + 12) = v68 + 112;
                    *((_QWORD *)v68 + 16) = v68 + 144;
                    *((_QWORD *)v68 + 20) = v68 + 176;
                    *((_QWORD *)v68 + 24) = v68 + 208;
                    *((_QWORD *)v68 + 28) = v68 + 240;
                    *((_QWORD *)v68 + 32) = v68 + 272;
                    *((_QWORD *)v68 + 36) = v68 + 304;
                    *((_QWORD *)v68 + 40) = v68 + 336;
                    *((_QWORD *)v68 + 44) = v68 + 368;
                    *((_QWORD *)v68 + 48) = v68 + 400;
                    *((_QWORD *)v68 + 52) = v68 + 432;
                    *((_QWORD *)v68 + 13) = 0;
                    v68[112] = 0;
                    *((_QWORD *)v68 + 17) = 0;
                    v68[144] = 0;
                    *((_QWORD *)v68 + 21) = 0;
                    v68[176] = 0;
                    *((_QWORD *)v68 + 25) = 0;
                    v68[208] = 0;
                    *((_QWORD *)v68 + 29) = 0;
                    v68[240] = 0;
                    *((_QWORD *)v68 + 33) = 0;
                    v68[272] = 0;
                    *((_QWORD *)v68 + 37) = 0;
                    v68[304] = 0;
                    *((_QWORD *)v68 + 41) = 0;
                    v68[336] = 0;
                    *((_QWORD *)v68 + 45) = 0;
                    v68[368] = 0;
                    *((_QWORD *)v68 + 49) = 0;
                    v68[400] = 0;
                    *((_QWORD *)v68 + 53) = 0x800000000LL;
                    *((_QWORD *)v68 + 66) = v68 + 544;
                    *((_QWORD *)v68 + 67) = 0x600000000LL;
                  }
                  v233 = v68;
                }
                v68[*v68 + 1] = 9;
                v59 = v233;
              }
              else
              {
                if ( !v237 )
                {
                  v28 = sub_EEC8C0(*(_QWORD *)v8, (__int64)v26, *(double *)a2.m128_u64);
                  v29 = v28;
                  v30 = HIDWORD(v28);
LABEL_45:
                  if ( v237 )
                  {
                    v38 = sub_168B9E0(v23);
                    v42 = ptr;
                    if ( ptr )
                    {
                      v199 = v38;
                      v42 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
                      v38 = v199;
                    }
                    v225 = v42;
                    v43 = sub_1587BC0(v38, (__int64 *)&v225, v38, v39, v40, v41);
                    v44 = 32LL * v236 + *v43;
                    v45 = *(_QWORD *)(v44 + 8);
                    if ( v45 )
                    {
                      v46 = *(unsigned int *)(v45 + 424);
                      v47 = *(unsigned int *)(v45 + 428);
                      v48 = v46 + 1;
                    }
                    else
                    {
                      v118 = *(_QWORD *)(v44 + 16);
                      v119 = *(_DWORD *)(v118 + 14976);
                      if ( v119 )
                      {
                        v160 = (unsigned int)(v119 - 1);
                        *(_DWORD *)(v118 + 14976) = v160;
                        v45 = *(_QWORD *)(v118 + 8 * v160 + 14848);
                        v161 = *(unsigned int *)(v45 + 536);
                        *(_BYTE *)v45 = 0;
                        v162 = *(_QWORD *)(v45 + 528);
                        *(_DWORD *)(v45 + 424) = 0;
                        v163 = v162 + (v161 << 6);
                        if ( v162 == v163 )
                        {
                          v48 = 1;
                          v46 = 0;
                        }
                        else
                        {
                          v214 = v29;
                          v164 = v45;
                          v221 = v8;
                          v165 = v163;
                          v223 = v23;
                          v166 = v162;
                          do
                          {
                            while ( 1 )
                            {
                              v165 -= 64;
                              v167 = *(void **)(v165 + 24);
                              if ( v167 == (void *)(v165 + 40) )
                                break;
                              operator delete(v167);
                              if ( v166 == v165 )
                                goto LABEL_197;
                            }
                          }
                          while ( v166 != v165 );
LABEL_197:
                          v45 = v164;
                          v8 = v221;
                          v29 = v214;
                          v46 = *(unsigned int *)(v45 + 424);
                          v23 = v223;
                          v48 = v46 + 1;
                        }
                        *(_DWORD *)(v45 + 536) = 0;
                        v47 = *(unsigned int *)(v45 + 428);
                      }
                      else
                      {
                        v45 = operator new(0x3A0u);
                        v47 = 8;
                        v46 = 0;
                        *(_BYTE *)v45 = 0;
                        *(_QWORD *)(v45 + 96) = v45 + 112;
                        *(_QWORD *)(v45 + 128) = v45 + 144;
                        *(_QWORD *)(v45 + 160) = v45 + 176;
                        *(_QWORD *)(v45 + 192) = v45 + 208;
                        *(_QWORD *)(v45 + 224) = v45 + 240;
                        *(_QWORD *)(v45 + 256) = v45 + 272;
                        *(_QWORD *)(v45 + 288) = v45 + 304;
                        *(_QWORD *)(v45 + 320) = v45 + 336;
                        *(_QWORD *)(v45 + 352) = v45 + 368;
                        *(_QWORD *)(v45 + 384) = v45 + 400;
                        *(_QWORD *)(v45 + 416) = v45 + 432;
                        *(_QWORD *)(v45 + 104) = 0;
                        *(_BYTE *)(v45 + 112) = 0;
                        *(_QWORD *)(v45 + 136) = 0;
                        *(_BYTE *)(v45 + 144) = 0;
                        *(_QWORD *)(v45 + 168) = 0;
                        *(_BYTE *)(v45 + 176) = 0;
                        *(_QWORD *)(v45 + 200) = 0;
                        *(_BYTE *)(v45 + 208) = 0;
                        *(_QWORD *)(v45 + 232) = 0;
                        *(_BYTE *)(v45 + 240) = 0;
                        *(_QWORD *)(v45 + 264) = 0;
                        *(_BYTE *)(v45 + 272) = 0;
                        *(_QWORD *)(v45 + 296) = 0;
                        *(_BYTE *)(v45 + 304) = 0;
                        *(_QWORD *)(v45 + 328) = 0;
                        *(_BYTE *)(v45 + 336) = 0;
                        *(_QWORD *)(v45 + 360) = 0;
                        *(_BYTE *)(v45 + 368) = 0;
                        *(_QWORD *)(v45 + 392) = 0;
                        *(_BYTE *)(v45 + 400) = 0;
                        *(_QWORD *)(v45 + 424) = 0x800000000LL;
                        *(_QWORD *)(v45 + 536) = 0x600000000LL;
                        *(_QWORD *)(v45 + 528) = v45 + 544;
                        v48 = 1;
                      }
                      *(_QWORD *)(v44 + 8) = v45;
                    }
                    v226 = __PAIR64__(v30, v29);
                    LOBYTE(v227) = 1;
                    if ( v47 < v48 )
                    {
                      v210 = v45;
                      sub_2237220(v45 + 416, v45 + 432, v48, 12);
                      v45 = v210;
                      v46 = *(unsigned int *)(v210 + 424);
                    }
                    v49 = *(_QWORD *)(v45 + 416) + 12 * v46;
                    *(_QWORD *)v49 = v226;
                    *(_DWORD *)(v49 + 8) = v227;
                    ++*(_DWORD *)(v45 + 424);
                  }
                  goto LABEL_46;
                }
                v54 = sub_168B9E0(v23);
                v55 = ptr;
                if ( ptr )
                  v55 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
                v26 = &v226;
                v226 = (unsigned __int64)v55;
                v56 = sub_1587BC0(v54, (__int64 *)&v226, v50, v51, v52, v53);
                v57 = *v56 + 32LL * v236;
                v58 = *(unsigned __int8 **)(v57 + 8);
                if ( !v58 )
                {
                  v111 = *(_QWORD *)(v57 + 16);
                  v112 = *(_DWORD *)(v111 + 14976);
                  if ( v112 )
                  {
                    v147 = (unsigned int)(v112 - 1);
                    *(_DWORD *)(v111 + 14976) = v147;
                    v58 = *(unsigned __int8 **)(v111 + 8 * v147 + 14848);
                    v148 = *((unsigned int *)v58 + 134);
                    *v58 = 0;
                    v26 = *((unsigned __int64 **)v58 + 66);
                    *((_DWORD *)v58 + 106) = 0;
                    v149 = &v26[8 * v148];
                    if ( v26 != v149 )
                    {
                      v212 = v8;
                      v150 = v57;
                      v151 = v149;
                      do
                      {
                        while ( 1 )
                        {
                          v151 -= 8;
                          v152 = (unsigned __int64 *)v151[3];
                          if ( v152 == v151 + 5 )
                            break;
                          operator delete(v152);
                          if ( v26 == v151 )
                            goto LABEL_181;
                        }
                      }
                      while ( v26 != v151 );
LABEL_181:
                      v8 = v212;
                      v57 = v150;
                    }
                    *((_DWORD *)v58 + 134) = 0;
                  }
                  else
                  {
                    v204 = v57;
                    v58 = (unsigned __int8 *)operator new(0x3A0u);
                    *v58 = 0;
                    *((_QWORD *)v58 + 12) = v58 + 112;
                    *((_QWORD *)v58 + 16) = v58 + 144;
                    *((_QWORD *)v58 + 20) = v58 + 176;
                    *((_QWORD *)v58 + 24) = v58 + 208;
                    *((_QWORD *)v58 + 28) = v58 + 240;
                    *((_QWORD *)v58 + 32) = v58 + 272;
                    *((_QWORD *)v58 + 36) = v58 + 304;
                    *((_QWORD *)v58 + 40) = v58 + 336;
                    *((_QWORD *)v58 + 44) = v58 + 368;
                    *((_QWORD *)v58 + 48) = v58 + 400;
                    *((_QWORD *)v58 + 52) = v58 + 432;
                    *((_QWORD *)v58 + 13) = 0;
                    v58[112] = 0;
                    *((_QWORD *)v58 + 17) = 0;
                    v58[144] = 0;
                    *((_QWORD *)v58 + 21) = 0;
                    v58[176] = 0;
                    *((_QWORD *)v58 + 25) = 0;
                    v58[208] = 0;
                    *((_QWORD *)v58 + 29) = 0;
                    v58[240] = 0;
                    *((_QWORD *)v58 + 33) = 0;
                    v58[272] = 0;
                    *((_QWORD *)v58 + 37) = 0;
                    v58[304] = 0;
                    *((_QWORD *)v58 + 41) = 0;
                    v58[336] = 0;
                    *((_QWORD *)v58 + 45) = 0;
                    v58[368] = 0;
                    *((_QWORD *)v58 + 49) = 0;
                    v58[400] = 0;
                    *((_QWORD *)v58 + 53) = 0x800000000LL;
                    v57 = v204;
                    *((_QWORD *)v58 + 66) = v58 + 544;
                    *((_QWORD *)v58 + 67) = 0x600000000LL;
                  }
                  *(_QWORD *)(v57 + 8) = v58;
                }
                v58[*v58 + 1] = 9;
                v59 = *(_BYTE **)(v57 + 8);
              }
              v60 = (unsigned __int8)*v59;
              *v59 = v60 + 1;
              *(_QWORD *)&v59[8 * v60 + 16] = v27;
              v200 = v235;
              v61 = sub_EEC8C0(*(_QWORD *)v8, (__int64)v26, *(double *)a2.m128_u64);
              v29 = v61;
              v62 = HIDWORD(v61);
              LODWORD(v30) = HIDWORD(v61);
              if ( !v200 )
                goto LABEL_45;
              v63 = v233;
              if ( v233 )
              {
                v64 = *((unsigned int *)v233 + 106);
                v65 = *((unsigned int *)v233 + 107);
                v66 = v64 + 1;
              }
              else
              {
                v106 = v234;
                v107 = *(_DWORD *)(v234 + 14976);
                if ( v107 )
                {
                  v120 = (unsigned int)(v107 - 1);
                  *(_DWORD *)(v234 + 14976) = v120;
                  v63 = *(unsigned __int8 **)(v106 + 8 * v120 + 14848);
                  v121 = *((unsigned int *)v63 + 134);
                  *v63 = 0;
                  v122 = *((_QWORD *)v63 + 66);
                  *((_DWORD *)v63 + 106) = 0;
                  v123 = v122 + (v121 << 6);
                  if ( v122 == v123 )
                  {
                    v66 = 1;
                    v64 = 0;
                  }
                  else
                  {
                    v124 = v8;
                    v125 = v123;
                    do
                    {
                      while ( 1 )
                      {
                        v125 -= 64;
                        v126 = *(void **)(v125 + 24);
                        if ( v126 == (void *)(v125 + 40) )
                          break;
                        v206 = v62;
                        operator delete(v126);
                        v62 = v206;
                        if ( v122 == v125 )
                          goto LABEL_141;
                      }
                    }
                    while ( v122 != v125 );
LABEL_141:
                    v64 = *((unsigned int *)v63 + 106);
                    v8 = v124;
                    v66 = v64 + 1;
                  }
                  *((_DWORD *)v63 + 134) = 0;
                  v65 = *((unsigned int *)v63 + 107);
                }
                else
                {
                  v203 = v62;
                  v108 = (unsigned __int8 *)operator new(0x3A0u);
                  v65 = 8;
                  v66 = 1;
                  v63 = v108;
                  *v108 = 0;
                  *((_QWORD *)v108 + 12) = v108 + 112;
                  *((_QWORD *)v108 + 16) = v108 + 144;
                  *((_QWORD *)v108 + 20) = v108 + 176;
                  *((_QWORD *)v108 + 24) = v108 + 208;
                  *((_QWORD *)v108 + 28) = v108 + 240;
                  *((_QWORD *)v108 + 32) = v108 + 272;
                  *((_QWORD *)v108 + 36) = v108 + 304;
                  *((_QWORD *)v108 + 40) = v108 + 336;
                  *((_QWORD *)v108 + 44) = v108 + 368;
                  *((_QWORD *)v108 + 48) = v108 + 400;
                  *((_QWORD *)v108 + 52) = v108 + 432;
                  *((_QWORD *)v108 + 13) = 0;
                  v108[112] = 0;
                  *((_QWORD *)v108 + 17) = 0;
                  v108[144] = 0;
                  *((_QWORD *)v108 + 21) = 0;
                  v108[176] = 0;
                  *((_QWORD *)v108 + 25) = 0;
                  v108[208] = 0;
                  *((_QWORD *)v108 + 29) = 0;
                  v108[240] = 0;
                  *((_QWORD *)v108 + 33) = 0;
                  v108[272] = 0;
                  *((_QWORD *)v108 + 37) = 0;
                  v108[304] = 0;
                  *((_QWORD *)v108 + 41) = 0;
                  v108[336] = 0;
                  *((_QWORD *)v108 + 45) = 0;
                  v108[368] = 0;
                  *((_QWORD *)v108 + 49) = 0;
                  v108[400] = 0;
                  *((_QWORD *)v108 + 53) = 0x800000000LL;
                  LODWORD(v62) = v203;
                  *((_QWORD *)v108 + 66) = v108 + 544;
                  *((_QWORD *)v108 + 67) = 0x600000000LL;
                  v64 = 0;
                }
                v233 = v63;
              }
              v226 = __PAIR64__(v62, v29);
              LOBYTE(v227) = 1;
              if ( v65 < v66 )
              {
                sub_2237220(v63 + 416, v63 + 432, v66, 12);
                v64 = *((unsigned int *)v63 + 106);
              }
              v67 = *((_QWORD *)v63 + 52) + 12 * v64;
              *(_QWORD *)v67 = v226;
              *(_DWORD *)(v67 + 8) = v227;
              ++*((_DWORD *)v63 + 106);
LABEL_46:
              sub_15F7200(v23);
              v19 = *(unsigned int *)(*(_QWORD *)(v24 + 264) + 204LL);
              if ( (_DWORD)v19 )
                goto LABEL_47;
LABEL_40:
              v8 += 64LL;
              if ( v198 == v8 )
                goto LABEL_47;
              continue;
            }
            break;
          }
          if ( !*(_BYTE *)(v8 + 12) )
          {
            v228 = *(_WORD **)v8;
            if ( v218 )
            {
              v230 = 0;
              ptr = v23 + 4;
              v229 = 0;
              v232 = 0x200000000LL;
            }
            else
            {
              v229 = *(_DWORD *)(v8 + 8);
              v230 = *(_BYTE *)(v8 + 12);
              ptr = v23 + 4;
              v232 = 0x200000000LL;
              if ( *(_DWORD *)(v8 + 24) )
                sub_1581860(v23 + 2, (char **)(v8 + 16));
            }
            v19 = v195;
            if ( sub_158DB20(*(_QWORD *)(a1 + 8), (void **)v195, (_WORD **)v23, 0, v20, v21, a2) )
            {
              v5 = v219;
              if ( ptr != v23 + 4 )
                free(ptr);
              goto LABEL_48;
            }
            if ( ptr != v23 + 4 )
              free(ptr);
            goto LABEL_40;
          }
          v69 = *(_QWORD *)(a1 + 8);
          v70 = sub_EEB7E0(*(_QWORD *)v8, v19, *(double *)a2.m128_u64);
          v19 = v69 + 8;
          sub_168B9F0(v23, v69 + 8, v70, 7481, 0);
          v71 = *(_QWORD *)(v195 + 40);
          if ( v235 )
          {
            v75 = v233;
            if ( !v233 )
            {
              v116 = v234;
              v117 = *(_DWORD *)(v234 + 14976);
              if ( v117 )
              {
                v139 = (unsigned int)(v117 - 1);
                *(_DWORD *)(v234 + 14976) = v139;
                v75 = *(unsigned __int8 **)(v116 + 8 * v139 + 14848);
                v140 = *((unsigned int *)v75 + 134);
                *v75 = 0;
                v141 = *((_QWORD *)v75 + 66);
                *((_DWORD *)v75 + 106) = 0;
                v142 = v141 + (v140 << 6);
                if ( v141 != v142 )
                {
                  v143 = v8;
                  v211 = v23;
                  v144 = v142;
                  v145 = v141;
                  do
                  {
                    while ( 1 )
                    {
                      v144 -= 64;
                      v146 = *(void **)(v144 + 24);
                      if ( v146 == (void *)(v144 + 40) )
                        break;
                      operator delete(v146);
                      if ( v145 == v144 )
                        goto LABEL_173;
                    }
                  }
                  while ( v145 != v144 );
LABEL_173:
                  v23 = v211;
                  v8 = v143;
                }
                *((_DWORD *)v75 + 134) = 0;
              }
              else
              {
                v75 = (unsigned __int8 *)operator new(0x3A0u);
                *v75 = 0;
                *((_QWORD *)v75 + 12) = v75 + 112;
                *((_QWORD *)v75 + 16) = v75 + 144;
                *((_QWORD *)v75 + 20) = v75 + 176;
                *((_QWORD *)v75 + 24) = v75 + 208;
                *((_QWORD *)v75 + 28) = v75 + 240;
                *((_QWORD *)v75 + 32) = v75 + 272;
                *((_QWORD *)v75 + 36) = v75 + 304;
                *((_QWORD *)v75 + 40) = v75 + 336;
                *((_QWORD *)v75 + 44) = v75 + 368;
                *((_QWORD *)v75 + 48) = v75 + 400;
                *((_QWORD *)v75 + 52) = v75 + 432;
                *((_QWORD *)v75 + 13) = 0;
                v75[112] = 0;
                *((_QWORD *)v75 + 17) = 0;
                v75[144] = 0;
                *((_QWORD *)v75 + 21) = 0;
                v75[176] = 0;
                *((_QWORD *)v75 + 25) = 0;
                v75[208] = 0;
                *((_QWORD *)v75 + 29) = 0;
                v75[240] = 0;
                *((_QWORD *)v75 + 33) = 0;
                v75[272] = 0;
                *((_QWORD *)v75 + 37) = 0;
                v75[304] = 0;
                *((_QWORD *)v75 + 41) = 0;
                v75[336] = 0;
                *((_QWORD *)v75 + 45) = 0;
                v75[368] = 0;
                *((_QWORD *)v75 + 49) = 0;
                v75[400] = 0;
                *((_QWORD *)v75 + 53) = 0x800000000LL;
                *((_QWORD *)v75 + 66) = v75 + 544;
                *((_QWORD *)v75 + 67) = 0x600000000LL;
              }
              v233 = v75;
            }
            v75[*v75 + 1] = 9;
            v76 = v233;
          }
          else
          {
            if ( !v237 )
            {
              v72 = sub_EEC8C0(*(_QWORD *)v8, v19, *(double *)a2.m128_u64);
              v73 = v72;
              v74 = HIDWORD(v72);
LABEL_82:
              if ( v237 )
              {
                v93 = sub_168B9E0(v23);
                v97 = ptr;
                if ( ptr )
                {
                  v202 = v93;
                  v97 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
                  v93 = v202;
                }
                v225 = v97;
                v98 = sub_1587BC0(v93, (__int64 *)&v225, v93, v94, v95, v96);
                v99 = 32LL * v236 + *v98;
                v100 = *(_QWORD *)(v99 + 8);
                if ( v100 )
                {
                  v19 = *(unsigned int *)(v100 + 424);
                  v101 = *(unsigned int *)(v100 + 428);
                  v102 = v19 + 1;
                }
                else
                {
                  v135 = *(_QWORD *)(v99 + 16);
                  v136 = *(_DWORD *)(v135 + 14976);
                  if ( v136 )
                  {
                    v174 = (unsigned int)(v136 - 1);
                    *(_DWORD *)(v135 + 14976) = v174;
                    v100 = *(_QWORD *)(v135 + 8 * v174 + 14848);
                    v175 = *(unsigned int *)(v100 + 536);
                    *(_BYTE *)v100 = 0;
                    v176 = *(_QWORD *)(v100 + 528);
                    *(_DWORD *)(v100 + 424) = 0;
                    v177 = v176 + (v175 << 6);
                    if ( v176 == v177 )
                    {
                      v102 = 1;
                      v19 = 0;
                    }
                    else
                    {
                      v222 = v8;
                      v178 = v100;
                      v179 = v177;
                      v224 = v23;
                      v180 = v176;
                      do
                      {
                        while ( 1 )
                        {
                          v179 -= 64;
                          v181 = *(void **)(v179 + 24);
                          if ( v181 == (void *)(v179 + 40) )
                            break;
                          v217 = v99;
                          operator delete(v181);
                          v99 = v217;
                          if ( v180 == v179 )
                            goto LABEL_211;
                        }
                      }
                      while ( v180 != v179 );
LABEL_211:
                      v19 = *(unsigned int *)(v178 + 424);
                      v8 = v222;
                      v100 = v178;
                      v23 = v224;
                      v102 = v19 + 1;
                    }
                    *(_DWORD *)(v100 + 536) = 0;
                    v101 = *(unsigned int *)(v100 + 428);
                  }
                  else
                  {
                    v208 = v99;
                    v100 = operator new(0x3A0u);
                    v101 = 8;
                    *(_BYTE *)v100 = 0;
                    *(_QWORD *)(v100 + 96) = v100 + 112;
                    *(_QWORD *)(v100 + 128) = v100 + 144;
                    *(_QWORD *)(v100 + 160) = v100 + 176;
                    *(_QWORD *)(v100 + 192) = v100 + 208;
                    *(_QWORD *)(v100 + 224) = v100 + 240;
                    *(_QWORD *)(v100 + 256) = v100 + 272;
                    *(_QWORD *)(v100 + 288) = v100 + 304;
                    *(_QWORD *)(v100 + 320) = v100 + 336;
                    *(_QWORD *)(v100 + 352) = v100 + 368;
                    *(_QWORD *)(v100 + 384) = v100 + 400;
                    *(_QWORD *)(v100 + 416) = v100 + 432;
                    *(_QWORD *)(v100 + 104) = 0;
                    *(_BYTE *)(v100 + 112) = 0;
                    *(_QWORD *)(v100 + 136) = 0;
                    *(_BYTE *)(v100 + 144) = 0;
                    *(_QWORD *)(v100 + 168) = 0;
                    *(_BYTE *)(v100 + 176) = 0;
                    *(_QWORD *)(v100 + 200) = 0;
                    *(_BYTE *)(v100 + 208) = 0;
                    *(_QWORD *)(v100 + 232) = 0;
                    *(_BYTE *)(v100 + 240) = 0;
                    *(_QWORD *)(v100 + 264) = 0;
                    *(_BYTE *)(v100 + 272) = 0;
                    *(_QWORD *)(v100 + 296) = 0;
                    *(_BYTE *)(v100 + 304) = 0;
                    *(_QWORD *)(v100 + 328) = 0;
                    *(_BYTE *)(v100 + 336) = 0;
                    *(_QWORD *)(v100 + 360) = 0;
                    *(_BYTE *)(v100 + 368) = 0;
                    *(_QWORD *)(v100 + 392) = 0;
                    *(_BYTE *)(v100 + 400) = 0;
                    *(_QWORD *)(v100 + 424) = 0x800000000LL;
                    v99 = v208;
                    *(_QWORD *)(v100 + 528) = v100 + 544;
                    v102 = 1;
                    *(_QWORD *)(v100 + 536) = 0x600000000LL;
                    v19 = 0;
                  }
                  *(_QWORD *)(v99 + 8) = v100;
                }
                v226 = __PAIR64__(v74, v73);
                LOBYTE(v227) = 1;
                if ( v101 < v102 )
                {
                  v215 = v100;
                  sub_2237220(v100 + 416, v100 + 432, v102, 12);
                  v100 = v215;
                  v19 = *(unsigned int *)(v215 + 424);
                }
                v103 = *(_QWORD *)(v100 + 416) + 12 * v19;
                *(_QWORD *)v103 = v226;
                *(_DWORD *)(v103 + 8) = v227;
                ++*(_DWORD *)(v100 + 424);
              }
              goto LABEL_83;
            }
            v88 = sub_168B9E0(v23);
            v89 = ptr;
            if ( ptr )
              v89 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)ptr + 32LL))(ptr);
            v19 = (unsigned __int64)&v226;
            v226 = (unsigned __int64)v89;
            v90 = sub_1587BC0(v88, (__int64 *)&v226, v84, v85, v86, v87);
            v91 = *v90 + 32LL * v236;
            v92 = *(unsigned __int8 **)(v91 + 8);
            if ( !v92 )
            {
              v137 = *(_QWORD *)(v91 + 16);
              v138 = *(_DWORD *)(v137 + 14976);
              if ( v138 )
              {
                v168 = (unsigned int)(v138 - 1);
                *(_DWORD *)(v137 + 14976) = v168;
                v92 = *(unsigned __int8 **)(v137 + 8 * v168 + 14848);
                v169 = *((unsigned int *)v92 + 134);
                *v92 = 0;
                v19 = *((_QWORD *)v92 + 66);
                *((_DWORD *)v92 + 106) = 0;
                v170 = v19 + (v169 << 6);
                if ( v19 != v170 )
                {
                  v216 = v8;
                  v171 = v91;
                  v172 = v170;
                  do
                  {
                    while ( 1 )
                    {
                      v172 -= 64LL;
                      v173 = *(void **)(v172 + 24);
                      if ( v173 == (void *)(v172 + 40) )
                        break;
                      operator delete(v173);
                      if ( v19 == v172 )
                      {
                        v8 = v216;
                        v91 = v171;
                        goto LABEL_206;
                      }
                    }
                  }
                  while ( v19 != v172 );
                  v91 = v171;
                  v8 = v216;
                }
LABEL_206:
                *((_DWORD *)v92 + 134) = 0;
              }
              else
              {
                v209 = v91;
                v92 = (unsigned __int8 *)operator new(0x3A0u);
                *v92 = 0;
                *((_QWORD *)v92 + 12) = v92 + 112;
                *((_QWORD *)v92 + 16) = v92 + 144;
                *((_QWORD *)v92 + 20) = v92 + 176;
                *((_QWORD *)v92 + 24) = v92 + 208;
                *((_QWORD *)v92 + 28) = v92 + 240;
                *((_QWORD *)v92 + 32) = v92 + 272;
                *((_QWORD *)v92 + 36) = v92 + 304;
                *((_QWORD *)v92 + 40) = v92 + 336;
                *((_QWORD *)v92 + 44) = v92 + 368;
                *((_QWORD *)v92 + 48) = v92 + 400;
                *((_QWORD *)v92 + 52) = v92 + 432;
                *((_QWORD *)v92 + 13) = 0;
                v92[112] = 0;
                *((_QWORD *)v92 + 17) = 0;
                v92[144] = 0;
                *((_QWORD *)v92 + 21) = 0;
                v92[176] = 0;
                *((_QWORD *)v92 + 25) = 0;
                v92[208] = 0;
                *((_QWORD *)v92 + 29) = 0;
                v92[240] = 0;
                *((_QWORD *)v92 + 33) = 0;
                v92[272] = 0;
                *((_QWORD *)v92 + 37) = 0;
                v92[304] = 0;
                *((_QWORD *)v92 + 41) = 0;
                v92[336] = 0;
                *((_QWORD *)v92 + 45) = 0;
                v92[368] = 0;
                *((_QWORD *)v92 + 49) = 0;
                v92[400] = 0;
                *((_QWORD *)v92 + 53) = 0x800000000LL;
                v91 = v209;
                *((_QWORD *)v92 + 66) = v92 + 544;
                *((_QWORD *)v92 + 67) = 0x600000000LL;
              }
              *(_QWORD *)(v91 + 8) = v92;
            }
            v92[*v92 + 1] = 9;
            v76 = *(_BYTE **)(v91 + 8);
          }
          v77 = (unsigned __int8)*v76;
          *v76 = v77 + 1;
          *(_QWORD *)&v76[8 * v77 + 16] = v71;
          v201 = v235;
          v78 = sub_EEC8C0(*(_QWORD *)v8, v19, *(double *)a2.m128_u64);
          v73 = v78;
          v79 = HIDWORD(v78);
          LODWORD(v74) = HIDWORD(v78);
          if ( !v201 )
            goto LABEL_82;
          v80 = v233;
          if ( v233 )
          {
            v81 = *((unsigned int *)v233 + 106);
            v19 = *((unsigned int *)v233 + 107);
            v82 = v81 + 1;
          }
          else
          {
            v113 = v234;
            v114 = *(_DWORD *)(v234 + 14976);
            if ( v114 )
            {
              v153 = (unsigned int)(v114 - 1);
              *(_DWORD *)(v234 + 14976) = v153;
              v80 = *(unsigned __int8 **)(v113 + 8 * v153 + 14848);
              v154 = *((unsigned int *)v80 + 134);
              *v80 = 0;
              v155 = *((_QWORD *)v80 + 66);
              *((_DWORD *)v80 + 106) = 0;
              v156 = v155 + (v154 << 6);
              if ( v155 == v156 )
              {
                v82 = 1;
                v81 = 0;
              }
              else
              {
                v157 = v8;
                v158 = v156;
                do
                {
                  while ( 1 )
                  {
                    v158 -= 64;
                    v159 = *(void **)(v158 + 24);
                    if ( v159 == (void *)(v158 + 40) )
                      break;
                    v213 = v79;
                    operator delete(v159);
                    v79 = v213;
                    if ( v155 == v158 )
                      goto LABEL_189;
                  }
                }
                while ( v155 != v158 );
LABEL_189:
                v81 = *((unsigned int *)v80 + 106);
                v8 = v157;
                v82 = v81 + 1;
              }
              *((_DWORD *)v80 + 134) = 0;
              v19 = *((unsigned int *)v80 + 107);
            }
            else
            {
              v205 = v79;
              v115 = (unsigned __int8 *)operator new(0x3A0u);
              v19 = 8;
              v82 = 1;
              v80 = v115;
              *v115 = 0;
              *((_QWORD *)v115 + 12) = v115 + 112;
              *((_QWORD *)v115 + 16) = v115 + 144;
              *((_QWORD *)v115 + 20) = v115 + 176;
              *((_QWORD *)v115 + 24) = v115 + 208;
              *((_QWORD *)v115 + 28) = v115 + 240;
              *((_QWORD *)v115 + 32) = v115 + 272;
              *((_QWORD *)v115 + 36) = v115 + 304;
              *((_QWORD *)v115 + 40) = v115 + 336;
              *((_QWORD *)v115 + 44) = v115 + 368;
              *((_QWORD *)v115 + 48) = v115 + 400;
              *((_QWORD *)v115 + 52) = v115 + 432;
              *((_QWORD *)v115 + 13) = 0;
              v115[112] = 0;
              *((_QWORD *)v115 + 17) = 0;
              v115[144] = 0;
              *((_QWORD *)v115 + 21) = 0;
              v115[176] = 0;
              *((_QWORD *)v115 + 25) = 0;
              v115[208] = 0;
              *((_QWORD *)v115 + 29) = 0;
              v115[240] = 0;
              *((_QWORD *)v115 + 33) = 0;
              v115[272] = 0;
              *((_QWORD *)v115 + 37) = 0;
              v115[304] = 0;
              *((_QWORD *)v115 + 41) = 0;
              v115[336] = 0;
              *((_QWORD *)v115 + 45) = 0;
              v115[368] = 0;
              *((_QWORD *)v115 + 49) = 0;
              v115[400] = 0;
              *((_QWORD *)v115 + 53) = 0x800000000LL;
              LODWORD(v79) = v205;
              *((_QWORD *)v115 + 66) = v115 + 544;
              *((_QWORD *)v115 + 67) = 0x600000000LL;
              v81 = 0;
            }
            v233 = v80;
          }
          v226 = __PAIR64__(v79, v73);
          LOBYTE(v227) = 1;
          if ( v19 < v82 )
          {
            v19 = (unsigned __int64)(v80 + 432);
            sub_2237220(v80 + 416, v80 + 432, v82, 12);
            v81 = *((unsigned int *)v80 + 106);
          }
          v83 = *((_QWORD *)v80 + 52) + 12 * v81;
          *(_QWORD *)v83 = v226;
          *(_DWORD *)(v83 + 8) = v227;
          ++*((_DWORD *)v80 + 106);
LABEL_83:
          sub_15F7200(v23);
          if ( *(_DWORD *)(*(_QWORD *)(v69 + 264) + 204LL) )
          {
LABEL_47:
            v5 = v219;
            goto LABEL_48;
          }
          goto LABEL_40;
        }
LABEL_167:
        if ( v5 )
          goto LABEL_111;
        goto LABEL_49;
      }
LABEL_48:
      if ( v5 )
      {
        v104 = *(_QWORD *)v5;
        v8 = *(_QWORD *)v5 + ((unsigned __int64)v5[2] << 6);
        if ( *(_QWORD *)v5 != v8 )
        {
          do
          {
            while ( 1 )
            {
              v8 -= 64LL;
              v105 = *(void **)(v8 + 16);
              if ( v105 == (void *)(v8 + 32) )
                break;
              free(v105);
              if ( v104 == v8 )
                goto LABEL_110;
            }
          }
          while ( v104 != v8 );
LABEL_110:
          v8 = *(_QWORD *)v5;
        }
LABEL_111:
        if ( (unsigned int *)v8 != v5 + 4 )
          free((void *)v8);
        operator delete(v5, 0x90u);
      }
LABEL_49:
      v196 += 2;
      if ( v220 == v196 )
      {
        v2 = a1;
        goto LABEL_51;
      }
    }
    v11 = v6 + 64;
    while ( 1 )
    {
      if ( v10[9] )
        goto LABEL_23;
      v10 += 64;
      if ( v11[74] )
        goto LABEL_23;
      if ( v11[72] )
        goto LABEL_23;
      if ( v11[73] )
        goto LABEL_23;
      v10 = v11 + 128;
      if ( v11[138] || v11[136] || v11[137] )
        goto LABEL_23;
      v10 = v11 + 192;
      if ( &v6[256 * (__int64)(char)((__int64)v5[2] >> 2) - 192] == v11 )
        break;
      if ( !v11[202] && !v11[200] && !v11[201] )
      {
        v10 = v11 + 256;
        if ( !v11[266] )
        {
          v11 += 256;
          if ( !v10[8] )
            continue;
        }
      }
      goto LABEL_23;
    }
    v9 = (__int64)(v8 - (_QWORD)v10) >> 6;
LABEL_160:
    if ( v9 != 2 )
    {
      if ( v9 != 3 )
      {
        if ( v9 != 1 )
          goto LABEL_28;
        if ( v10[10] )
          goto LABEL_23;
        goto LABEL_164;
      }
      if ( v10[10] || v10[8] || v10[9] )
        goto LABEL_23;
      v10 += 64;
    }
    if ( v10[10] )
      goto LABEL_23;
    if ( v10[8] )
      goto LABEL_23;
    if ( v10[9] )
      goto LABEL_23;
    v10 += 64;
    if ( v10[10] )
      goto LABEL_23;
LABEL_164:
    if ( !v10[8] && !v10[9] )
    {
      if ( v6 != (_BYTE *)v8 )
        goto LABEL_29;
      goto LABEL_167;
    }
    goto LABEL_23;
  }
LABEL_51:
  v31 = *(_DWORD *)(v2 + 24);
  if ( !v31 )
  {
    result = *(unsigned int *)(v2 + 28);
    if ( !(_DWORD)result )
      goto LABEL_59;
    v34 = *(_QWORD **)(v2 + 16);
    v182 = *(unsigned int *)(v2 + 32);
    v35 = 2 * v182;
    if ( (unsigned int)v182 > 0x40 )
    {
      result = operator delete(v34, v35 * 8, 8);
      *(_QWORD *)(v2 + 16) = 0;
      *(_QWORD *)(v2 + 24) = 0;
      *(_DWORD *)(v2 + 32) = 0;
      goto LABEL_59;
    }
    goto LABEL_56;
  }
  v32 = 4 * v31;
  v33 = *(unsigned int *)(v2 + 32);
  v34 = *(_QWORD **)(v2 + 16);
  if ( (unsigned int)(4 * v31) < 0x40 )
    v32 = 64;
  if ( (unsigned int)v33 <= v32 )
  {
    v35 = 2 * v33;
LABEL_56:
    v36 = &v34[v35];
    for ( result = -4096; v36 != v34; v34 += 2 )
      *v34 = -4096;
    *(_QWORD *)(v2 + 24) = 0;
    goto LABEL_59;
  }
  v183 = v31 - 1;
  if ( v183 )
  {
    _BitScanReverse(&v183, v183);
    v184 = (unsigned int)(1 << (33 - (v183 ^ 0x1F)));
    if ( (int)v184 < 64 )
      v184 = 64;
    if ( (_DWORD)v184 == (_DWORD)v33 )
    {
      *(_QWORD *)(v2 + 24) = 0;
      result = (__int64)&v34[2 * v184];
      do
      {
        *v34 = -4096;
        v34 += 2;
      }
      while ( (_QWORD *)result != v34 );
      goto LABEL_59;
    }
    v193 = 4 * (int)v184 / 3u;
    v194 = (((v193 + 1) | ((unsigned __int64)(v193 + 1) >> 1) | (((v193 + 1) | ((unsigned __int64)(v193 + 1) >> 1)) >> 2)) >> 4)
         | (v193 + 1)
         | ((unsigned __int64)(v193 + 1) >> 1)
         | (((v193 + 1) | ((unsigned __int64)(v193 + 1) >> 1)) >> 2)
         | (((((v193 + 1)
             | ((unsigned __int64)(v193 + 1) >> 1)
             | (((v193 + 1) | ((unsigned __int64)(v193 + 1) >> 1)) >> 2)) >> 4)
           | (v193 + 1)
           | ((unsigned __int64)(v193 + 1) >> 1)
           | (((v193 + 1) | ((unsigned __int64)(v193 + 1) >> 1)) >> 2)) >> 8);
    v186 = (v194 | (v194 >> 16)) + 1;
    v185 = 16 * ((v194 | (v194 >> 16)) + 1);
  }
  else
  {
    v185 = 2048;
    v186 = 128;
  }
  operator delete(v34, 16 * v33, 8);
  *(_DWORD *)(v2 + 32) = v186;
  result = sub_22300B0(v185, 8, v187, v188, v189, v190);
  v191 = *(unsigned int *)(v2 + 32);
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 16) = result;
  for ( i = result + 16 * v191; i != result; result += 16 )
    *(_QWORD *)result = -4096;
LABEL_59:
  *(_DWORD *)(v2 + 48) = 0;
  return result;
}
