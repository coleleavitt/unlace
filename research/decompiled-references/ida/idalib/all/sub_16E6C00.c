__int64 __fastcall sub_16E6C00(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        double a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        unsigned __int8 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        bool a16)
{
  unsigned __int8 v16; // r13
  unsigned __int8 v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rax
  _WORD *v29; // rax
  unsigned int v30; // ebp
  unsigned int v32; // eax
  __int64 *v33; // rbx
  unsigned int v34; // eax
  unsigned int *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  unsigned __int64 v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rsi
  bool v44; // al
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  char v49; // al
  __int64 v50; // rax
  char v51; // al
  __int64 v52; // r15
  __int64 *v53; // rax
  __int64 v54; // rax
  __int64 *v55; // r10
  __int64 **v56; // rax
  __int64 *v57; // r15
  __int64 v58; // r13
  __int64 *v59; // rbx
  __int64 *v60; // rax
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rax
  char v65; // al
  __int64 v66; // r8
  char v67; // bp
  unsigned __int8 v68; // al
  unsigned int v69; // edx
  unsigned __int8 v70; // bp
  __int64 v71; // rbp
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rdi
  char v78; // cl
  char v79; // r15
  __int64 v80; // rdx
  int v81; // ebx
  __int64 v82; // r12
  unsigned __int64 *v83; // rax
  unsigned __int64 v84; // rdx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rcx
  __int64 *v87; // r15
  __int64 v88; // rsi
  unsigned __int64 v89; // rbp
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // rax
  __int64 v92; // rsi
  __int64 v93; // rax
  unsigned __int64 v94; // r8
  _QWORD *v95; // rbp
  unsigned int v96; // r9d
  unsigned __int64 v97; // rax
  unsigned int v98; // r12d
  __int64 v99; // rdx
  __int64 *v100; // rax
  _BOOL4 v101; // ecx
  __int64 v102; // rdx
  unsigned int v103; // eax
  bool v104; // zf
  __int64 *v105; // rax
  __int64 v106; // rdx
  unsigned __int64 v107; // rsi
  __int64 v108; // rcx
  _QWORD *v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rdi
  char v116; // al
  __int64 *v117; // rax
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 *v120; // r10
  __int64 *v121; // rax
  __int64 *v122; // r14
  __int64 *v123; // rbp
  __int64 *v124; // rax
  __int64 *v125; // rax
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 *v131; // r10
  __int64 **v132; // rax
  __int64 *v133; // r8
  __int64 *v134; // r12
  __int64 v135; // r14
  __int64 *v136; // r13
  __int64 *v137; // rax
  __int64 v138; // rbp
  __int64 *v139; // rax
  int v140; // eax
  __int64 v141; // rbx
  __int64 *v142; // rax
  int v143; // eax
  __int64 *v144; // rax
  __int64 v145; // rdx
  __int64 *v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rdx
  unsigned __int8 v149; // bp
  unsigned int *v150; // rax
  __int64 v151; // rsi
  __int16 v152; // ax
  __int64 v153; // rax
  __int64 v154; // rbp
  __int64 v155; // r12
  unsigned __int64 v156; // rax
  unsigned __int64 v157; // r8
  unsigned __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  bool v161; // al
  bool v162; // cl
  unsigned int *v163; // rax
  __int64 v164; // rsi
  int v165; // eax
  __int64 v166; // r9
  int v167; // eax
  __int64 v168; // rax
  __int64 v169; // rsi
  int v170; // edx
  __int64 v171; // r12
  unsigned int v172; // ebp
  __int64 v173; // rax
  _BYTE *v174; // rax
  __int64 v175; // rax
  unsigned int v176; // eax
  unsigned int *v177; // rax
  __int64 v178; // rdx
  __int64 v179; // rbp
  char *v180; // rax
  __int64 v181; // rdi
  unsigned __int64 v182; // rdx
  __int64 v183; // rax
  __m128 v184; // xmm0
  __int64 v185; // rcx
  __m128 v186; // xmm0
  char *v187; // rdx
  char *v188; // rax
  int v189; // [rsp-30h] [rbp-1D8h]
  __int64 v190; // [rsp-28h] [rbp-1D0h]
  __int64 v191; // [rsp-20h] [rbp-1C8h]
  int v192; // [rsp-10h] [rbp-1B8h]
  __int64 *v196; // [rsp+18h] [rbp-190h]
  unsigned int v197; // [rsp+18h] [rbp-190h]
  unsigned __int64 v199; // [rsp+20h] [rbp-188h]
  bool s; // [rsp+28h] [rbp-180h]
  __int64 sa; // [rsp+28h] [rbp-180h]
  _QWORD **sb; // [rsp+28h] [rbp-180h]
  int sc; // [rsp+28h] [rbp-180h]
  char *sd; // [rsp+28h] [rbp-180h]
  void *se; // [rsp+28h] [rbp-180h]
  _QWORD *sf; // [rsp+28h] [rbp-180h]
  _BYTE *sg; // [rsp+28h] [rbp-180h]
  __int64 *sh; // [rsp+28h] [rbp-180h]
  unsigned __int64 v209; // [rsp+30h] [rbp-178h]
  unsigned __int64 v210; // [rsp+30h] [rbp-178h]
  __int64 *v211; // [rsp+30h] [rbp-178h]
  __int64 v212; // [rsp+30h] [rbp-178h]
  int v213; // [rsp+30h] [rbp-178h]
  __int64 v214; // [rsp+30h] [rbp-178h]
  int v215; // [rsp+30h] [rbp-178h]
  int v216; // [rsp+30h] [rbp-178h]
  __int64 *v217; // [rsp+38h] [rbp-170h]
  char v218; // [rsp+38h] [rbp-170h]
  unsigned __int64 v219; // [rsp+38h] [rbp-170h]
  unsigned __int64 v220; // [rsp+38h] [rbp-170h]
  unsigned int v221; // [rsp+38h] [rbp-170h]
  unsigned int v222; // [rsp+40h] [rbp-168h]
  unsigned int v223; // [rsp+50h] [rbp-158h]
  unsigned int v224; // [rsp+50h] [rbp-158h]
  unsigned int v225; // [rsp+5Ch] [rbp-14Ch]
  unsigned int v226; // [rsp+5Ch] [rbp-14Ch]
  int v227; // [rsp+60h] [rbp-148h]
  __int64 v228; // [rsp+68h] [rbp-140h]
  int v229; // [rsp+74h] [rbp-134h] BYREF
  int v230; // [rsp+7Ch] [rbp-12Ch]
  void *v231; // [rsp+80h] [rbp-128h] BYREF
  __int64 v232; // [rsp+88h] [rbp-120h]
  void *v233; // [rsp+90h] [rbp-118h] BYREF
  unsigned __int64 v234; // [rsp+98h] [rbp-110h]
  unsigned int v235; // [rsp+A0h] [rbp-108h] BYREF
  char v236; // [rsp+A4h] [rbp-104h]
  void *v237; // [rsp+A8h] [rbp-100h]
  unsigned int v238; // [rsp+B0h] [rbp-F8h]
  char v239; // [rsp+B4h] [rbp-F4h]
  void *v240; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned __int64 v241; // [rsp+E8h] [rbp-C0h]
  void **v242; // [rsp+F0h] [rbp-B8h] BYREF
  void *v243; // [rsp+F8h] [rbp-B0h]
  char *v244; // [rsp+100h] [rbp-A8h]
  __int64 v245; // [rsp+108h] [rbp-A0h]
  char *v246; // [rsp+110h] [rbp-98h]
  unsigned int v247; // [rsp+118h] [rbp-90h]
  __int64 v248; // [rsp+120h] [rbp-88h]
  __int64 v249; // [rsp+128h] [rbp-80h]
  unsigned int v250; // [rsp+130h] [rbp-78h]
  unsigned __int64 v251; // [rsp+138h] [rbp-70h] BYREF
  __int16 v252; // [rsp+140h] [rbp-68h]
  unsigned __int8 v253; // [rsp+142h] [rbp-66h]
  int v254; // [rsp+144h] [rbp-64h]
  __m128 v255; // [rsp+148h] [rbp-60h]

  v16 = a12;
  v17 = a16;
  s = a16;
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) > 1 )
  {
    v18 = a1;
    if ( !*(_BYTE *)(a1 + 2440) )
    {
      while ( 2 )
      {
        if ( ((*a3 >> 14) & 0xC) == 0 )
        {
          v20 = sub_BFD550((unsigned __int64)a3);
          v21 = *(_QWORD *)(a1 + 248);
          v22 = v20;
          v23 = sub_BFE6E0(v20, v21, 2, a7);
          v26 = v23;
          if ( v23 )
            return 1;
          v27 = *(_WORD *)v22 & 0x1FF;
          v28 = (unsigned int)(v27 + 508);
          LOWORD(v28) = (v27 + 508) & 0x1FF;
          switch ( v28 )
          {
            case 0LL:
              v71 = *(_QWORD *)(v22 + 16);
              if ( (*(_WORD *)v71 & 0x1FF) != 0x7B || *(_BYTE *)(v22 + 2) >> 3 != 4 )
                return 0;
              BYTE4(v242) &= ~1u;
              v72 = 1;
              LOWORD(v240) = 0;
              v73 = *(unsigned int *)(a1 + 4624);
              v241 = 0;
              LODWORD(v242) = 0;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640 * v73 - 640) - 4) > 1 )
                v72 = *(unsigned __int8 *)(a1 + 2440);
              v224 = v26;
              if ( !(unsigned __int8)sub_C3F220(
                                       *(_QWORD *)(v71 + 24),
                                       (__int64)&v240,
                                       *(_QWORD *)(a1 + 248),
                                       0,
                                       v72,
                                       v26) )
              {
                v30 = v224;
                if ( (unsigned int)v242 > 1 )
                  sub_A4F8E0((int *)&v242);
                return v30;
              }
              LODWORD(v234) = (_DWORD)v244;
              if ( (unsigned int)v244 > 0x40 )
                sub_2205510(&v233);
              else
                v233 = v243;
              BYTE4(v234) = BYTE4(v244);
              sub_16B8DF0(a15, (__int64)&v233, 5u, 1u);
              if ( (unsigned int)v234 > 0x40 && v233 )
                operator delete[](v233);
              if ( sub_9ECBA0(v71, (__int64)&v233, v74, v75, v76) )
                a3 = *(_DWORD **)(v71 + 16);
              else
                a3 = *(_DWORD **)(v71 + 24);
              if ( (unsigned int)v242 > 1 )
                sub_A4F8E0((int *)&v242);
              continue;
            case 5LL:
            case 25LL:
              v30 = v26;
              if ( (_WORD)v27 == 29 )
              {
                v87 = *(__int64 **)(v22 + 16);
                if ( !v87 )
                  return 0;
              }
              else
              {
                v87 = (__int64 *)v22;
              }
              if ( !*(_BYTE *)(a15 + 12) && sub_16B6690((__int64 *)a15)
                || (unsigned __int8)sub_16BE0B0((__int64 *)a15, (void *)*((unsigned int *)v87 + 4)) )
              {
                return v30;
              }
              v88 = a15;
              sub_2206DE0(&v240, a15, 64);
              if ( (unsigned int)v241 > 0x40 )
              {
                v156 = *(_QWORD *)v240;
                v233 = v87;
                v234 = v156;
                operator delete[](v240);
                v87 = (__int64 *)v233;
                v89 = v234;
              }
              else
              {
                v89 = 0;
                if ( (_DWORD)v241 )
                  v89 = (__int64)((_QWORD)v240 << (64 - (unsigned __int8)v241)) >> (64 - (unsigned __int8)v241);
                v233 = v87;
                v234 = v89;
              }
              if ( ((*((_BYTE *)v87 + 2) >> 3) & 5) != 0 )
              {
                v173 = sub_EEC8C0(v22, v88, a7);
                v172 = *((_DWORD *)v87 + 5) + v89;
                v169 = a1 + 8;
                v170 = 6932;
                v171 = v173;
                goto LABEL_278;
              }
              v90 = 0;
              v91 = *((_DWORD *)v87 + 4) * ((*((_WORD *)v87 + 1) >> 6) & 7u);
              if ( v91 >= v89 )
              {
                v90 = v91 - v89;
                v91 = v89;
              }
              v92 = v87[1];
              v209 = v90;
              sd = (char *)v87 + 4 * *((unsigned int *)v87 + 1) + v91 + 20;
              v93 = sub_A72040(*(_QWORD **)(a1 + 248), v92);
              v94 = v209;
              if ( !v93 || (unsigned int)*(unsigned __int8 *)(v93 + 16) - 2 > 1 )
                BUG();
              v95 = *(_QWORD **)(v93 + 40);
              if ( (*(_BYTE *)(v93 + 19) & 2) != 0 )
              {
                if ( *((_DWORD *)v95 + 2) <= 0x40u )
                  v95 = (_QWORD *)*v95;
                else
                  v95 = *(_QWORD **)*v95;
              }
              v96 = a5 - a9;
              if ( v95 )
              {
                v97 = (unsigned __int64)v95 - 1;
                if ( (unsigned __int64)v95 - 1 > v209 )
                  v97 = v209;
                v210 = v97;
                if ( v17 )
                {
                  v220 = v94;
                  v92 = (__int64)&sd[v97];
                  if ( !(unsigned __int8)sub_ECC820(
                                           sd,
                                           &sd[v97],
                                           *(_QWORD *)(a1 + 232),
                                           *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL)) )
                    return 2;
                  v96 = a5 - a9;
                  if ( (unsigned __int64)v95 > v220 )
                    goto LABEL_130;
                }
                else if ( (unsigned __int64)v95 > v94 )
                {
LABEL_130:
                  if ( v210 || !v96 )
                  {
                    v98 = a10 - 5;
                    if ( a10 - 1 > 1 && v98 > 4 )
                    {
                      if ( a10 )
                        return 2;
                      v242 = &v233;
                      v186 = _mm_loadh_ps((const double *)&a14);
                      v240 = &off_2BC6708;
                      HIDWORD(v244) = a9;
                      v241 = a1;
                      v246 = sd;
                      v243 = (void *)v22;
                      v247 = a6;
                      v248 = a4;
                      LODWORD(v244) = 0;
                      v249 = a5;
                      LODWORD(v245) = v96;
                      v250 = a8;
                      v251 = 1;
                      v254 = a11;
                      v252 = 256;
                      v253 = a12;
                      v255 = v186;
                      sub_16B98E0(&v251, v96);
                      if ( (v251 & 1) != 0 )
                      {
                        v251 = v251 & 0xFC00000000000000LL | 1;
                      }
                      else
                      {
                        v187 = *(char **)v251;
                        v188 = (char *)(*(_QWORD *)v251 + 8LL * *(unsigned int *)(v251 + 8));
                        while ( v188 != v187 )
                        {
                          *(_QWORD *)v187 = 0;
                          v187 += 8;
                        }
                      }
                      v240 = &off_2BC68B8;
                      if ( (unsigned __int8)sub_EE6B00(
                                              (__int64)&v240,
                                              sd,
                                              &sd[v210],
                                              *(_QWORD *)(a1 + 232),
                                              *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL)) )
                        goto LABEL_303;
LABEL_301:
                      if ( v247 <= 1 )
                        sub_16BAAD0(&v240);
LABEL_303:
                      v240 = &off_2BC6708;
                      sub_1505150((void ***)&v251);
                      nullsub_479();
                      return 2;
                    }
                    if ( !a2 )
                    {
                      v242 = &v233;
                      v184 = _mm_loadh_ps((const double *)&a14);
                      v240 = &off_2BC6708;
                      v244 = (char *)__PAIR64__(a9, a10);
                      v241 = a1;
                      v243 = (void *)v22;
                      v246 = sd;
                      LODWORD(v245) = v96;
                      v247 = a6;
                      v248 = a4;
                      v251 = 1;
                      v249 = a5;
                      v252 = 256;
                      v250 = a8;
                      v253 = a12;
                      v254 = a11;
                      v255 = v184;
                      sub_16B98E0(&v251, v96);
                      if ( (v251 & 1) != 0 )
                      {
                        v251 = v251 & 0xFC00000000000000LL | 1;
                      }
                      else if ( *(_QWORD *)v251 != *(_QWORD *)v251 + 8LL * *(unsigned int *)(v251 + 8) )
                      {
                        memset(
                          *(void **)v251,
                          0,
                          8 * ((8 * (unsigned __int64)*(unsigned int *)(v251 + 8) - 8) >> 3) + 8);
                      }
                      v185 = *(_QWORD *)(a1 + 232);
                      v240 = &off_2BC6798;
                      if ( (unsigned __int8)sub_ECB4A0(
                                              (__int64 *)&v240,
                                              sd,
                                              &sd[v210],
                                              v185,
                                              *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
                                              v98 <= 1) )
                        goto LABEL_303;
                      goto LABEL_301;
                    }
                    v157 = 0;
                    if ( !a12 )
                      v157 = *(_QWORD *)(a4 + 8LL * a8);
                    sub_16E64C0(a1, a10, a2, (unsigned __int64)v233, v157, a7);
                    return 2;
                  }
                  v175 = sub_EEC8C0(v22, v92, a7);
                  v169 = a1 + 8;
                  v170 = 6867;
                  v171 = v175;
                  v172 = v234 + *((_DWORD *)v233 + 5);
LABEL_278:
                  sub_168B9B0((__int64)&v240, v169, v170);
                  sub_16DCAE0(a1, a12, *(_QWORD *)(a4 + 8LL * a8), (__int64)&v240, v172, 1, a7, v171, nullptr, 0);
                  if ( v240 && v241 )
                    sub_1580C40(v241, (unsigned __int64)v240);
                  return 2;
                }
                v92 = 0;
                v221 = v96;
                v174 = memchr(sd, 0, (size_t)v95);
                if ( v174 )
                {
                  v96 = v221;
                  if ( v174 - sd != -1 )
                    goto LABEL_130;
                }
              }
              else if ( v17 )
              {
                v92 = (__int64)sd;
                if ( !(unsigned __int8)sub_ECC820(
                                         sd,
                                         sd,
                                         *(_QWORD *)(a1 + 232),
                                         *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL)) )
                  return 2;
              }
              v168 = sub_EEC8C0(v22, v92, a7);
              v169 = a1 + 8;
              v170 = 7282;
              v171 = v168;
              v172 = v234 + *((_DWORD *)v233 + 5);
              goto LABEL_278;
            case 14LL:
              return 1;
            case 22LL:
              a3 = *(_DWORD **)(v22 + 16);
              if ( !a3 )
                return 0;
              continue;
            case 29LL:
              if ( (*(_BYTE *)(v22 + 27) & 1) == 0 )
                return 0;
              v82 = *(_QWORD *)(v22 + 16);
              if ( !v82 || (*(_BYTE *)(v82 + 29) & 1) == 0 )
                return 0;
              v83 = sub_B8C3D0(*(_QWORD *)(v22 + 16), v21, v27, v24, v25, v26);
              v84 = *v83;
              v85 = *v83 + 8LL * *((unsigned int *)v83 + 2);
              if ( v84 >= v85 )
              {
                if ( v84 == v85 )
                  return 0;
                while ( *(_WORD *)(*(_QWORD *)v85 + 36LL) != 218 )
                {
                  v85 += 8LL;
                  if ( v84 == v85 )
                    return 0;
                }
              }
              else
              {
                v86 = v84;
                while ( *(_WORD *)(*(_QWORD *)v86 + 36LL) != 218 )
                {
                  v86 += 8LL;
                  if ( v85 == v86 )
                    return 0;
                }
                if ( v85 == v86 )
                  return 0;
              }
              while ( 1 )
              {
                v154 = *(_QWORD *)v84;
                if ( *(_WORD *)(*(_QWORD *)v84 + 36LL) == 218 )
                  break;
                v84 += 8LL;
              }
              if ( (*(_BYTE *)(v82 + 58) & 2) != 0 )
              {
                v158 = sub_BA85D0(v82);
                if ( v158 )
                {
                  v159 = *(_QWORD *)(v158 + 40);
                  if ( (v159 & 7) != 0 )
                    BUG();
                  v160 = *(_QWORD *)((v159 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                  if ( *(_DWORD *)v160 == 8 && *(_QWORD *)(v160 + 16) == 0x656C646E7542534ELL )
                  {
                    v233 = *(void **)(v82 + 40);
                    v240 = "localizedStringForKey";
                    v242 = (void **)"value";
                    v241 = 21;
                    v243 = &byte_5;
                    v244 = "table";
                    v245 = 5;
                    v161 = sub_FDE790((__int64 *)&v233, (__int64)&v240, 3);
                    v162 = s;
                    if ( v161 )
                      v162 = v161;
                    s = v162;
                  }
                }
              }
              v155 = *(_QWORD *)(v22
                               + 8LL
                               * ((*(_DWORD *)(v154 + 40) & 0x3FFFFFFF) - 1 - ((*(_DWORD *)(v154 + 40) >> 30) & 1u))
                               + 48);
              LODWORD(v241) = *(_DWORD *)(a15 + 8);
              if ( (unsigned int)v241 > 0x40 )
                sub_2205510(&v240);
              else
                v240 = *(void **)a15;
              BYTE4(v241) = *(_BYTE *)(a15 + 12);
              v32 = sub_16E6C00(a1, a2, v155, a4, a5, a6, a8, a9, a10, a11, a12, a13, a14, (__int64)&v240, s);
              goto LABEL_12;
            case 49LL:
              goto LABEL_6;
            case 67LL:
              v40 = *(_QWORD *)(v22 + 16);
              v30 = v26;
              if ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 40 > 6 )
                return 0;
              sa = *(_QWORD *)(v22 + 8);
              v41 = sub_A72040(*(_QWORD **)(a1 + 248), sa);
              v42 = sa;
              if ( v41 )
              {
                v43 = *(_QWORD *)(a1 + 248);
                v44 = sub_F56AE0(*(_QWORD *)(v41 + 32), (_QWORD *)v43);
LABEL_21:
                if ( !v44 )
                  goto LABEL_158;
                goto LABEL_22;
              }
              v107 = sa & 0xFFFFFFFFFFFFFFF0LL;
              v108 = *(_QWORD *)(sa & 0xFFFFFFFFFFFFFFF0LL);
              se = (void *)(sa & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v108 + 16) != 42 )
              {
                v214 = v42;
                v153 = sub_16B68B0(v108, v107, v42, v108);
                v42 = v214;
                v43 = (__int64)se;
                v108 = v153;
                if ( !v153 )
                {
                  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)se + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
                    goto LABEL_158;
                  v43 = *(_QWORD *)(a1 + 248);
                  v44 = sub_F56AE0(v214, (_QWORD *)v43);
                  goto LABEL_21;
                }
              }
              v43 = *(_QWORD *)(a1 + 248);
              sf = (_QWORD *)v108;
              if ( !sub_F56AE0(v42, (_QWORD *)v43) )
                goto LABEL_158;
              v43 = *(_QWORD *)(a1 + 248);
              if ( !sub_F56AE0(sf[4], (_QWORD *)v43) )
                goto LABEL_158;
LABEL_22:
              v43 = (__int64)&v240;
              v45 = (_QWORD *)sub_B7D120(v40, (__int64 *)&v240);
              LODWORD(v48) = (_DWORD)v45;
              if ( v45 )
              {
                if ( (*(_WORD *)v45 & 0x1FF) == 0x35 )
                {
                  sb = (_QWORD **)v45;
                  v49 = sub_BFD4B0(v45, (__int64)&v240, (__int64)v45, v46, v47);
                  LODWORD(v48) = (_DWORD)sb;
                  if ( v49 )
                    LODWORD(v48) = sub_BFBAE0(*sb[2]);
                }
                LODWORD(v241) = *(_DWORD *)(a15 + 8);
                if ( (unsigned int)v241 > 0x40 )
                {
                  v215 = v48;
                  sub_2205510(&v240);
                  LODWORD(v48) = v215;
                }
                else
                {
                  v240 = *(void **)a15;
                }
                BYTE4(v241) = *(_BYTE *)(a15 + 12);
                v192 = 0;
                v191 = a14;
                v190 = a13;
                v189 = 0;
                goto LABEL_29;
              }
LABEL_158:
              if ( (*(_BYTE *)(v40 + 28) & 0x7F) != 0x2B )
                return 0;
              v109 = (_QWORD *)(*(_QWORD *)(v40 + 16) & 0xFFFFFFFFFFFFFFF8LL);
              if ( (*(_QWORD *)(v40 + 16) & 4) != 0 )
                v109 = (_QWORD *)*v109;
              v110 = sub_B8C1B0((__int64)v109);
              v115 = v110;
              sg = (_BYTE *)v110;
              if ( !v110 )
                return 0;
              v116 = *(_BYTE *)(v110 + 29);
              if ( (v116 & 1) == 0 )
                goto LABEL_171;
              v117 = sub_B8C3D0(v115, v43, v111, v112, v113, v114);
              v111 = *((unsigned int *)v117 + 2);
              v119 = *v117;
              v120 = (__int64 *)(v119 + 8 * v111);
              if ( (sg[29] & 1) != 0 )
              {
                v211 = (__int64 *)(v119 + 8 * v111);
                v121 = sub_B8C3D0((__int64)sg, v43, v111, v112, v118, v114);
                v120 = v211;
                v113 = *v121;
              }
              else
              {
                v113 = 0;
              }
              v212 = v18;
              v219 = v22;
              v122 = v120;
              v222 = v30;
              v123 = (__int64 *)v113;
              while ( 2 )
              {
                if ( v123 < v122 )
                {
                  v124 = v123;
                  while ( 1 )
                  {
                    v111 = *v124;
                    if ( *(_WORD *)(*v124 + 36) == 219 )
                      break;
                    if ( v122 == ++v124 )
                      goto LABEL_170;
                  }
LABEL_188:
                  v141 = *v123;
                  if ( *(_WORD *)(*v123 + 36) != 219 )
                  {
                    v142 = v123 + 1;
                    do
                    {
                      v141 = *v142;
                      v123 = v142++;
                    }
                    while ( *(_WORD *)(v141 + 36) != 219 );
                  }
                  v43 = *(unsigned int *)(v141 + 48);
                  if ( (unsigned __int8)sub_16C55E0((__int64)sg, v43, 0, (__int64)&v229) )
                  {
                    v143 = (unsigned __int8)(*(_WORD *)(v40 + 98) >> 4);
                    if ( v143 == 255 )
                      v143 = sub_B74880(v40);
                    if ( v229 == v143 )
                    {
                      v163 = *(unsigned int **)(*(_QWORD *)(v141 + 40) + 16LL);
                      v164 = *v163;
                      v165 = sub_16CA550((__int64)(v163 + 4), v164);
                      v166 = v141;
                      if ( a10 == v165 )
                      {
                        LODWORD(v241) = *(_DWORD *)(a15 + 8);
                        if ( (unsigned int)v241 > 0x40 )
                        {
                          sub_2205510(&v240);
                          v166 = v141;
                        }
                        else
                        {
                          v240 = *(void **)a15;
                        }
                        BYTE4(v241) = *(_BYTE *)(a15 + 12);
                        v167 = sub_B06750(v166);
                        v32 = sub_16E6C00(
                                v212,
                                a2,
                                v167,
                                a4,
                                a5,
                                a6,
                                a8,
                                a9,
                                a10,
                                a11,
                                0,
                                a13,
                                a14,
                                (__int64)&v240,
                                v17);
                        goto LABEL_12;
                      }
                      v176 = sub_EEB7E0(*(_QWORD *)(a4 + 8LL * a8), v164, a7);
                      sub_168B9F0((__int64)&v240, (__int64 *)(v212 + 8), v176, 0x1B15u, 0);
                      v177 = *(unsigned int **)(*(_QWORD *)(v141 + 40) + 16LL);
                      v178 = *v177;
                      v231 = v177 + 4;
                      v232 = v178;
                      v179 = sub_166BAF0((__int64)&v240, (__int64)&v231);
                      v180 = sub_16C5820(a10);
                      v181 = v179;
                      v30 = 1;
                      v234 = v182;
                      v233 = v180;
                      sub_166BAF0(v181, (__int64)&v233);
                      sub_15F7200(&v240);
                      if ( !a12 )
                      {
                        v183 = sub_B06750(v141);
                        sub_168B9F0((__int64)&v240, (__int64 *)(v212 + 8), *(_DWORD *)(v183 + 20), 0x1768u, 0);
                        sub_15F7200(&v240);
                      }
                      return v30;
                    }
                  }
                  ++v123;
                  continue;
                }
                break;
              }
              if ( v123 == v122 )
                goto LABEL_170;
              if ( *(_WORD *)(*v122 + 36) == 219 )
                goto LABEL_188;
              v146 = v122 + 1;
              while ( 1 )
              {
                v111 = (__int64)v146;
                if ( v123 == v146 )
                  break;
                v147 = *v146++;
                if ( *(_WORD *)(v147 + 36) == 219 )
                  goto LABEL_188;
              }
LABEL_170:
              v22 = v219;
              v30 = v222;
              v18 = v212;
              v116 = sg[29];
LABEL_171:
              if ( (v116 & 1) == 0 )
                return v30;
              v125 = sub_B8C3D0((__int64)sg, v43, v111, v112, v113, v114);
              v129 = *((unsigned int *)v125 + 2);
              v130 = *v125;
              v131 = (__int64 *)(v130 + 8 * v129);
              if ( (sg[29] & 1) != 0 )
              {
                v196 = (__int64 *)(v130 + 8 * v129);
                v132 = (__int64 **)sub_B8C3D0((__int64)sg, v43, v129, v126, v127, v128);
                v131 = v196;
                v133 = *v132;
              }
              else
              {
                v133 = nullptr;
              }
              v197 = v30;
              v134 = v133;
              v199 = v22;
              v135 = (__int64)sg;
              v136 = v131;
              sh = (__int64 *)v18;
              while ( 2 )
              {
                if ( v134 >= v136 )
                {
                  if ( v134 == v136 )
                    return v197;
                  if ( *(_WORD *)(*v136 + 36) != 217 )
                  {
                    v144 = v136 + 1;
                    while ( v134 != v144 )
                    {
                      v145 = *v144++;
                      if ( *(_WORD *)(v145 + 36) == 217 )
                        goto LABEL_180;
                    }
                    return v197;
                  }
                }
                else
                {
                  v137 = v134;
                  while ( *(_WORD *)(*v137 + 36) != 217 )
                  {
                    if ( v136 == ++v137 )
                      return v197;
                  }
                }
LABEL_180:
                v138 = *v134;
                if ( *(_WORD *)(*v134 + 36) != 217 )
                {
                  v139 = v134 + 1;
                  do
                  {
                    v138 = *v139;
                    v134 = v139++;
                  }
                  while ( *(_WORD *)(v138 + 36) != 217 );
                }
                if ( !(unsigned __int8)sub_16C55E0(v135, *(_DWORD *)(v138 + 48), *(_DWORD *)(v138 + 52), (__int64)&v229) )
                  goto LABEL_187;
                v140 = (unsigned __int8)(*(_WORD *)(v40 + 98) >> 4);
                if ( v140 == 255 )
                  v140 = sub_B74880(v40);
                if ( v229 != v140 )
                {
LABEL_187:
                  ++v134;
                  continue;
                }
                break;
              }
              v150 = *(unsigned int **)(*(_QWORD *)(v138 + 40) + 16LL);
              v151 = *v150;
              if ( a10 == (unsigned int)sub_16CA550((__int64)(v150 + 4), v151) )
              {
                v152 = a6 | ((_WORD)v230 << 8);
                if ( v152 == 258 )
                  return 1;
                if ( v152 > 258 )
                {
                  if ( v152 == 514 )
                    return 1;
                }
                else if ( (unsigned __int16)v152 <= 1u )
                {
                  return 1;
                }
                goto LABEL_187;
              }
              v33 = (__int64 *)(v18 + 8);
              v34 = sub_EEB7E0(*(_QWORD *)(a4 + 8LL * a8), v151, a7);
              sub_168B9F0((__int64)&v240, sh + 1, v34, 0x1B15u, 0);
              v35 = *(unsigned int **)(*(_QWORD *)(v138 + 40) + 16LL);
              v36 = *v35;
              v231 = v35 + 4;
              v232 = v36;
              v37 = sub_166BAF0((__int64)&v240, (__int64)&v231);
              v233 = sub_16C5820(a10);
              v234 = v38;
              sub_166BAF0(v37, (__int64)&v233);
              sub_15F7200(&v240);
              if ( !a12 )
              {
                v39 = sub_EEB7E0(v199, (__int64)&v233, a7);
                sub_168B9F0((__int64)&v240, v33, v39, 0x1768u, 0);
                sub_15F7200(&v240);
              }
              return 1;
            case 75LL:
              a3 = *(_DWORD **)(v22 + 16);
              continue;
            case 85LL:
            case 88LL:
              v30 = v26;
              v50 = sub_BFBC70(*(_QWORD *)(v22 + 32));
              v24 = v50;
              v228 = v50;
              if ( !v50 )
                goto LABEL_6;
              v51 = *(_BYTE *)(v50 + 28);
              v27 = (v51 & 0x7Fu) - 18;
              if ( (unsigned int)v27 > 0x3F )
                goto LABEL_6;
              v52 = v24;
              if ( (*(_BYTE *)(v24 + 29) & 1) == 0 )
                goto LABEL_43;
              v53 = sub_B8C3D0(v24, v21, v27, v24, v25, v26);
              v27 = *((unsigned int *)v53 + 2);
              v54 = *v53;
              v55 = (__int64 *)(v54 + 8 * v27);
              if ( (*(_BYTE *)(v52 + 29) & 1) != 0 )
              {
                v217 = (__int64 *)(v54 + 8 * v27);
                v56 = (__int64 **)sub_B8C3D0(v52, v21, v27, v24, v25, v26);
                v55 = v217;
                v57 = *v56;
              }
              else
              {
                v57 = nullptr;
              }
              v218 = 1;
              v58 = a15;
              v59 = v55;
              while ( 2 )
              {
                if ( v57 < v59 )
                {
                  v60 = v57;
                  while ( 1 )
                  {
                    v27 = *v60;
                    if ( *(_WORD *)(*v60 + 36) == 218 )
                      break;
                    if ( v59 == ++v60 )
                      goto LABEL_41;
                  }
LABEL_137:
                  v99 = *v57;
                  if ( *(_WORD *)(*v57 + 36) != 218 )
                  {
                    v100 = v57 + 1;
                    do
                    {
                      v99 = *v100;
                      v57 = v100++;
                    }
                    while ( *(_WORD *)(v99 + 36) != 218 );
                  }
                  v101 = s;
                  v102 = *(_QWORD *)(v22
                                   + 8
                                   * ((*(_DWORD *)(v99 + 40) & 0x3FFFFFFF)
                                    - 1
                                    - ((*(_DWORD *)(v99 + 40) >> 30) & 1u)
                                    + (unsigned __int64)((*(_BYTE *)(v22 + 2) & 8) != 0))
                                   + 40);
                  LODWORD(v241) = *(_DWORD *)(v58 + 8);
                  if ( (unsigned int)v241 > 0x40 )
                  {
                    v227 = v102;
                    sub_2205510(&v240);
                    LODWORD(v102) = v227;
                    v101 = s;
                  }
                  else
                  {
                    v240 = *(void **)v58;
                  }
                  BYTE4(v241) = *(_BYTE *)(v58 + 12);
                  v103 = sub_16E6C00(a1, a2, v102, a4, a5, a6, a8, a9, a10, a11, a12, a13, a14, (__int64)&v240, v101);
                  if ( (unsigned int)v241 > 0x40 && v240 )
                  {
                    v225 = v103;
                    operator delete[](v240);
                    v103 = v225;
                  }
                  v104 = v218 == 0;
                  v218 = 0;
                  if ( !v104 )
                    v30 = v103;
                  ++v57;
                  continue;
                }
                break;
              }
              if ( v57 != v59 )
              {
                if ( *(_WORD *)(*v59 + 36) == 218 )
                  goto LABEL_137;
                v105 = v59 + 1;
                while ( 1 )
                {
                  v27 = (__int64)v105;
                  if ( v57 == v105 )
                    break;
                  v106 = *v105++;
                  if ( *(_WORD *)(v106 + 36) == 218 )
                    goto LABEL_137;
                }
              }
LABEL_41:
              v18 = a1;
              v16 = a12;
              if ( !v218 )
                return v30;
              v51 = *(_BYTE *)(v228 + 28);
LABEL_43:
              if ( (v51 & 0x7Fu) - 34 <= 5 )
              {
                v61 = sub_B75A50(v228, 0);
                if ( v61 == 206 || v61 == 225 )
                {
                  v48 = *(_QWORD *)(v22 + 8 * (((*(_BYTE *)(v22 + 2) & 8) != 0) + 1LL) + 32);
                  LODWORD(v241) = *(_DWORD *)(a15 + 8);
                  if ( (unsigned int)v241 > 0x40 )
                  {
                    v216 = v48;
                    sub_2205510(&v240);
                    LODWORD(v48) = v216;
                  }
                  else
                  {
                    v240 = *(void **)a15;
                  }
                  BYTE4(v241) = *(_BYTE *)(a15 + 12);
                  v192 = v17;
                  v191 = a14;
                  v190 = a13;
                  v189 = v16;
LABEL_29:
                  v32 = sub_16E6C00(v18, a2, v48, a4, a5, a6, a8, a9, a10, a11, v189, v190, v191, (__int64)&v240, v192);
                  goto LABEL_12;
                }
              }
LABEL_6:
              v29 = sub_16B6070(*(_QWORD *)(v18 + 248), v22, v27, v24, v25, v26);
              if ( v29 )
              {
                LODWORD(v241) = *(_DWORD *)(a15 + 8);
                if ( (unsigned int)v241 > 0x40 )
                {
                  v213 = (int)v29;
                  sub_2205510(&v240);
                  LODWORD(v29) = v213;
                }
                else
                {
                  v240 = *(void **)a15;
                }
                BYTE4(v241) = *(_BYTE *)(a15 + 12);
                v32 = sub_16E6C00(v18, a2, (_DWORD)v29, a4, a5, a6, a8, a9, a10, a11, 0, a13, a14, (__int64)&v240, v17);
LABEL_12:
                v30 = v32;
                if ( (unsigned int)v241 > 0x40 && v240 )
                  operator delete[](v240);
                return v30;
              }
              break;
            case 114LL:
              if ( ((*(_WORD *)(v22 + 2) >> 3) & 0x3Fu) - 5 > 1 )
                return 0;
              v62 = *(unsigned int *)(a1 + 4624);
              v63 = 1;
              LOWORD(v233) = 0;
              v236 &= ~1u;
              v64 = *(_QWORD *)(a1 + 4616) + 640 * v62;
              v234 = 0;
              v235 = 0;
              LOWORD(v240) = 0;
              v241 = 0;
              LODWORD(v242) = 0;
              BYTE4(v242) &= ~1u;
              if ( (unsigned int)(*(_DWORD *)(v64 - 640) - 4) > 1 )
                v63 = *(unsigned __int8 *)(a1 + 2440);
              v223 = v26;
              v65 = sub_C3F220(*(_QWORD *)(v22 + 16), (__int64)&v233, *(_QWORD *)(a1 + 248), 0, v63, v26);
              v66 = 1;
              v67 = v65;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640) - 4) > 1 )
                v66 = *(unsigned __int8 *)(a1 + 2440);
              v68 = sub_C3F220(*(_QWORD *)(v22 + 24), (__int64)&v240, *(_QWORD *)(a1 + 248), 0, v66, v223);
              if ( v67 == v68 )
                goto LABEL_288;
              v69 = (*(_WORD *)(v22 + 2) >> 3) & 0x3F;
              if ( v67 )
              {
                if ( v69 != 5 )
                {
LABEL_288:
                  v30 = v223;
                  if ( (unsigned int)v242 > 1 )
                    sub_A4F8E0((int *)&v242);
                  if ( v235 > 1 )
                    sub_A4F8E0((int *)&v235);
                  return v30;
                }
                v70 = v68;
                LODWORD(v232) = v238;
                if ( v238 > 0x40 )
                  sub_2205510(&v231);
                else
                  v231 = v237;
                BYTE4(v232) = v239;
                sub_16B8DF0(a15, (__int64)&v231, 5u, v70);
                if ( (unsigned int)v232 > 0x40 && v231 )
                  operator delete[](v231);
                a3 = *(_DWORD **)(v22 + 24);
              }
              else
              {
                v149 = v68;
                LODWORD(v232) = (_DWORD)v244;
                if ( (unsigned int)v244 > 0x40 )
                {
                  v226 = v69;
                  sub_2205510(&v231);
                  v69 = v226;
                }
                else
                {
                  v231 = v243;
                }
                BYTE4(v232) = BYTE4(v244);
                sub_16B8DF0(a15, (__int64)&v231, v69, v149);
                if ( (unsigned int)v232 > 0x40 && v231 )
                  operator delete[](v231);
                a3 = *(_DWORD **)(v22 + 16);
              }
              if ( (unsigned int)v242 > 1 )
                sub_A4F8E0((int *)&v242);
              if ( v235 > 1 )
                sub_A4F8E0((int *)&v235);
              continue;
            case 124LL:
            case 125LL:
              if ( (_WORD)v27 == 128 )
                v77 = *(_QWORD *)(v22 + 24);
              else
                v77 = *(_QWORD *)(v22 + 32);
              v78 = 1;
              if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v18 + 4616) + 640LL * *(unsigned int *)(v18 + 4624) - 640) - 4) > 1 )
                v78 = *(_BYTE *)(v18 + 2440);
              v79 = sub_C3D850(v77, &v233, *(_QWORD *)(v18 + 248), v78, v25, v26);
              if ( !v79 || (v79 = (char)v233) != 0 )
              {
                LODWORD(v241) = *(_DWORD *)(a15 + 8);
                if ( (unsigned int)v241 > 0x40 )
                  sub_2205510(&v240);
                else
                  v240 = *(void **)a15;
                BYTE4(v241) = *(_BYTE *)(a15 + 12);
                if ( (*(_WORD *)v22 & 0x1FF) == 0x80 )
                  v148 = *(_QWORD *)(v22 + 32);
                else
                  v148 = *(_QWORD *)(v22 + 40);
                v30 = sub_16E6C00(v18, a2, v148, a4, a5, a6, a8, a9, a10, a11, a12, a13, a14, (__int64)&v240, v17);
                if ( (unsigned int)v241 > 0x40 && v240 )
                  operator delete[](v240);
                if ( !v30 || v79 )
                  return v30;
                sc = v30;
                v79 = 1;
              }
              else
              {
                sc = 1;
                v30 = 1;
              }
              LODWORD(v241) = *(_DWORD *)(a15 + 8);
              if ( (unsigned int)v241 > 0x40 )
                sub_2205510(&v240);
              else
                v240 = *(void **)a15;
              BYTE4(v241) = *(_BYTE *)(a15 + 12);
              if ( (*(_WORD *)v22 & 0x1FF) == 0x80 )
                v80 = *(_QWORD *)(v22 + 40);
              else
                v80 = *(_QWORD *)(v22 + 48);
              v81 = sub_16E6C00(v18, a2, v80, a4, a5, a6, a8, a9, a10, a11, a12, a13, a14, (__int64)&v240, v17);
              if ( (unsigned int)v241 > 0x40 && v240 )
                operator delete[](v240);
              if ( v81 <= sc || !v79 )
                return (unsigned int)v81;
              return v30;
            default:
              return (unsigned int)v26;
          }
        }
        break;
      }
    }
  }
  return 0;
}
