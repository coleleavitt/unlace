__int64 __fastcall sub_39CA20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  __int64 v7; // rdi
  __int64 v9; // rbx
  __int64 result; // rax
  unsigned int v11; // eax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 *v16; // rsi
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbp
  __int64 *v23; // rsi
  __int64 v24; // rdx
  unsigned __int64 *v25; // rax
  __int64 v26; // r14
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  _QWORD **v31; // rdx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rdx
  __int64 v45; // rcx
  int **v46; // rsi
  __int64 v47; // rcx
  __int64 *v48; // rax
  __int64 *v49; // rcx
  __int64 v50; // rbx
  unsigned int v51; // eax
  __int64 *v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 *v56; // rax
  __int64 *v57; // rdx
  __int64 v58; // rbx
  unsigned int v59; // eax
  unsigned __int64 *v60; // rdx
  __int64 v61; // rdx
  __int64 *v62; // rax
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rax
  __int64 *v69; // rbx
  __int64 *jj; // rbp
  unsigned int v71; // eax
  const char **v72; // rdx
  const char *v73; // rbx
  __int64 v74; // rax
  __int64 v75; // rbp
  __int64 v76; // r9
  unsigned int v77; // r14d
  __int64 v78; // rbp
  unsigned int v79; // r15d
  __int64 **v80; // rbp
  __int64 *v81; // rbp
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // rdx
  _BYTE *v85; // rcx
  __int64 v86; // r15
  void *func; // rax
  __int64 v88; // rax
  const char *v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r14
  __int64 v97; // r12
  __int64 v98; // rbp
  __int64 v99; // rdi
  unsigned int v100; // edx
  __int64 v101; // rax
  __int64 v102; // rsi
  __int64 *v103; // r15
  __int64 v104; // rcx
  _QWORD *v105; // rax
  __int64 *v106; // rax
  __int64 v107; // rsi
  __int64 v108; // rdi
  __int64 v109; // r8
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 *v112; // rax
  __int64 *v113; // rcx
  __int64 v114; // rbx
  __int64 v115; // rdx
  __int64 *v116; // rax
  __int64 *v117; // rdx
  __int64 v118; // rdi
  _QWORD **v119; // rax
  _QWORD *v120; // rdx
  const char **v121; // rax
  __int64 *v122; // rdx
  __int64 *v123; // rax
  _QWORD *v124; // rsi
  _QWORD *v125; // rax
  __int64 *v126; // rax
  _QWORD **v127; // r14
  _DWORD **v128; // r12
  __int64 *v129; // rax
  __int64 *v130; // r9
  __int64 v131; // rax
  __int64 v132; // rsi
  unsigned int v133; // eax
  __int64 **v134; // rcx
  __int64 *v135; // rbp
  __int64 v136; // rsi
  __int64 v137; // r12
  __int64 v138; // rdi
  _QWORD *v139; // rax
  __int64 v140; // rdx
  _BYTE *v141; // rcx
  _QWORD *v142; // rbx
  int *v143; // r12
  char v144; // dl
  size_t v145; // r14
  int v146; // r15d
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  unsigned __int64 v151; // rbx
  __int64 v152; // rsi
  unsigned __int64 v153; // rbx
  size_t v154; // r15
  __int64 v155; // r14
  __int64 *v156; // r8
  __int64 v157; // rsi
  __int64 v158; // r14
  const char *v159; // rsi
  unsigned __int64 v160; // rbx
  __int64 v161; // r15
  unsigned __int64 v162; // rbx
  char *v163; // rdi
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdi
  __int64 v168; // rax
  bool v169; // zf
  _QWORD *v170; // rbp
  __int64 v171; // r13
  __int64 v172; // rdi
  __int64 n; // r12
  __int64 *v174; // rdx
  __int64 v175; // rax
  __int64 v176; // rdi
  __int64 v177; // r13
  __int64 v178; // rdi
  __int64 ii; // r12
  __int64 *v180; // rax
  __int64 v181; // rdx
  int *v182; // r14
  __int64 v183; // rax
  __m128i v184; // xmm2
  char *v185; // rbx
  __int64 *v186; // rbp
  __int64 v187; // r12
  int v188; // eax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rsi
  __int64 v192; // r12
  int v193; // eax
  __int64 v194; // rax
  __int64 v195; // rsi
  __int64 v196; // rax
  __int64 v197; // rax
  __int64 v198; // rdx
  unsigned __int64 v199; // r12
  __int64 v200; // rbp
  char *v201; // rcx
  __int64 v202; // rax
  char *v203; // rcx
  char *v204; // r8
  __int64 v205; // rdi
  char v206; // bp
  __int64 v207; // rdx
  __int64 v208; // rcx
  char merge_state; // al
  char *v210; // r12
  __int64 v211; // rbp
  _DWORD *v212; // rdi
  __int64 v213; // rax
  __int64 v214; // rax
  _QWORD *v215; // rax
  __int64 v216; // r9
  unsigned __int64 v217; // rbp
  bool v218; // r12
  char *v219; // r14
  unsigned int v220; // eax
  char *v222; // r14
  unsigned int v223; // eax
  unsigned int v224; // eax
  unsigned __int64 v225; // rbp
  void *v226; // r12
  char *v227; // rax
  const char *v228; // rsi
  const char *v229; // rsi
  const char *v230; // rdi
  __int64 v231; // rbx
  _WORD *v232; // rsi
  __int64 v233; // rax
  __int64 v234; // rax
  int v235; // eax
  int v236; // ebp
  __int64 v237; // rax
  __int64 *v238; // r14
  __int64 v239; // r12
  __int64 v240; // rax
  __int64 *v241; // r8
  __int64 v242; // rax
  _QWORD *v243; // rbx
  __int64 v244; // rax
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // r8
  __int64 v248; // r9
  __int64 v249; // rbp
  __int64 v250; // rdi
  __int64 i; // rbx
  __int64 *v252; // rdx
  __int64 v253; // rax
  __int64 v254; // rdi
  __int64 v255; // rbp
  __int64 v256; // rdi
  __int64 j; // rbx
  __int64 *v258; // rax
  __int64 v259; // rdx
  __int64 *v260; // rbx
  char *v261; // rax
  __int64 v262; // r12
  __int64 v263; // rdi
  __int64 v264; // rbp
  char *v265; // r13
  __int64 *v266; // rcx
  __int64 v267; // rdx
  __int64 v268; // rdi
  __int64 v269; // r12
  __int64 v270; // rdi
  __int64 v271; // rbp
  char *v272; // r13
  __int64 *v273; // rdx
  __int64 v274; // rcx
  __int64 v275; // rax
  __int64 v276; // rax
  __int64 v277; // rax
  __int64 *v278; // rbx
  __int64 v279; // r12
  __int64 v280; // rdi
  __int64 k; // rbp
  __int64 *v282; // rdx
  __int64 v283; // rdi
  __int64 v284; // rdi
  __int64 v285; // rax
  __int64 v286; // rax
  __int64 v287; // rsi
  __int64 v288; // rdi
  __int64 v289; // r12
  __int64 m; // rbp
  __int64 *v291; // rax
  __int64 v292; // rdi
  char *s1[2]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v294; // [rsp+10h] [rbp-128h]
  __int64 *p_src; // [rsp+18h] [rbp-120h]
  __int64 v296; // [rsp+20h] [rbp-118h]
  __m128i *v297; // [rsp+28h] [rbp-110h]
  char *v298; // [rsp+30h] [rbp-108h]
  __int64 *v299; // [rsp+38h] [rbp-100h]
  __m128i *v300; // [rsp+40h] [rbp-F8h]
  _QWORD *v301; // [rsp+48h] [rbp-F0h]
  __int64 *v302; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v303; // [rsp+58h] [rbp-E0h]
  void *src; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v305[24]; // [rsp+68h] [rbp-D0h] BYREF
  int v306; // [rsp+80h] [rbp-B8h]
  int v307; // [rsp+88h] [rbp-B0h]
  __m128i v308; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v309; // [rsp+A0h] [rbp-98h]
  _OWORD v310[3]; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v311; // [rsp+D8h] [rbp-60h]
  __int128 v312; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v313; // [rsp+F8h] [rbp-40h]

  v296 = a1;
  v7 = *(_QWORD *)(a1 + 16);
  v313 = __readfsqword(0x28u);
  if ( a2 > 81 )
  {
    if ( a2 != 171 )
    {
      if ( a2 > 171 )
      {
        if ( a2 != 175 )
        {
          if ( a2 == 177 )
          {
            v11 = *(_DWORD *)a3;
            if ( *(_DWORD *)a3 > 0x2Fu )
            {
              v12 = *(__int64 **)(a3 + 8);
              *(_QWORD *)(a3 + 8) = v12 + 1;
            }
            else
            {
              v12 = (__int64 *)(*(_QWORD *)(a3 + 16) + v11);
              *(_DWORD *)a3 = v11 + 8;
            }
            v13 = *v12;
            v14 = *(_QWORD *)(*(_QWORD *)(v296 + 16) + 1008LL);
            v15 = *(__int64 **)(v14 + 40);
            v16 = &v15[*(_QWORD *)(v14 + 48)];
            if ( v15 != v16 )
            {
              while ( 1 )
              {
                v17 = *v15;
                if ( *v15 )
                {
                  if ( v13 == *(_QWORD *)(v17 + 8) || v13 == *(_QWORD *)(v17 + 16) )
                    break;
                }
                if ( v16 == ++v15 )
                  return 0;
              }
              if ( *(_QWORD *)(v17 + 32) )
              {
                v133 = *(_DWORD *)a3;
                if ( *(_DWORD *)a3 > 0x2Fu )
                {
                  v134 = *(__int64 ***)(a3 + 8);
                  *(_QWORD *)(a3 + 8) = v134 + 1;
                }
                else
                {
                  v134 = (__int64 **)(*(_QWORD *)(a3 + 16) + v133);
                  *(_DWORD *)a3 = v133 + 8;
                }
                v135 = *v134;
                v136 = (*v134)[1];
                v137 = **(_QWORD **)(v17 + 32);
                v138 = **v134;
                if ( v136 )
                {
                  v139 = (_QWORD *)**v134;
                  v140 = 0;
                  while ( 1 )
                  {
                    if ( v139[1] )
                    {
                      v141 = (_BYTE *)*v139;
                      if ( *(_BYTE *)*v139 == 101 && v141[1] == 97 && !v141[2] )
                        break;
                    }
                    ++v140;
                    v139 += 5;
                    if ( v136 == v140 )
                      goto LABEL_317;
                  }
                  v142 = v139 + 3;
                }
                else
                {
LABEL_317:
                  if ( v135[2] < (unsigned __int64)(v136 + 1) )
                  {
                    v276 = qvector_reserve(v135, v138, v136 + 1, 40);
                    *v135 = v276;
                    v136 = v135[1];
                    v138 = v276;
                  }
                  v231 = v138 + 40 * v136;
                  *(_QWORD *)v231 = 0;
                  *(_OWORD *)(v231 + 8) = 0;
                  *(_DWORD *)(v231 + 24) = 0;
                  *(_QWORD *)(v231 + 32) = 0;
                  ++v135[1];
                  v232 = *(_WORD **)v231;
                  if ( *(_QWORD *)(v231 + 16) <= 2u )
                  {
                    v275 = qvector_reserve(v231, v232, 3, 1);
                    *(_QWORD *)v231 = v275;
                    v232 = (_WORD *)v275;
                  }
                  *(_QWORD *)(v231 + 8) = 3;
                  v142 = (_QWORD *)(v231 + 24);
                  *v232 = 24933;
                  *(_BYTE *)(*(v142 - 3) + 2LL) = 0;
                }
                if ( *(_DWORD *)v142 )
                  jvalue_t_clear(v142);
                *(_DWORD *)v142 = 1;
                v142[1] = v137;
              }
            }
          }
          return 0;
        }
        v100 = *(_DWORD *)a3;
        if ( v100 > 0x2F )
        {
          v119 = *(_QWORD ***)(a3 + 8);
          v120 = v119 + 1;
          *(_QWORD *)(a3 + 8) = v119 + 1;
          v103 = *v119;
        }
        else
        {
          v101 = *(_QWORD *)(a3 + 16);
          v102 = v100 + 8;
          *(_DWORD *)a3 = v102;
          v103 = *(__int64 **)(v101 + v100);
          if ( (unsigned int)v102 <= 0x2F )
          {
            v104 = v100 + 16;
            *(_DWORD *)a3 = v104;
            v300 = *(__m128i **)(v101 + v102);
            if ( (unsigned int)v104 <= 0x2F )
            {
              v105 = (_QWORD *)(v104 + v101);
              *(_DWORD *)a3 = v100 + 24;
              goto LABEL_117;
            }
            v105 = *(_QWORD **)(a3 + 8);
LABEL_135:
            *(_QWORD *)(a3 + 8) = v105 + 1;
LABEL_117:
            v301 = (_QWORD *)*v105;
            v106 = (__int64 *)v301[4];
            if ( !v106 )
            {
LABEL_161:
              v109 = *(_QWORD *)(v296 + 16);
              goto LABEL_126;
            }
            v107 = *v106;
            v108 = *v106 + 16 * v106[1];
            v109 = *(_QWORD *)(v296 + 16);
            if ( v108 == *v106 )
            {
LABEL_126:
              if ( !v300 )
                return 0;
              v115 = *(_QWORD *)(v109 + 1008);
              v116 = *(__int64 **)(v115 + 40);
              v117 = &v116[*(_QWORD *)(v115 + 48)];
              if ( v116 == v117 )
                return 0;
              while ( 1 )
              {
                v118 = *v116;
                if ( *v116 )
                {
                  if ( *(__m128i **)(v118 + 8) == v300 || *(__m128i **)(v118 + 16) == v300 )
                    break;
                }
                if ( v117 == ++v116 )
                  return 0;
              }
              s1[0] = *(char **)(v118 + 44);
              v308.m128i_i64[0] = _mm_shuffle_epi32((__m128i)(unsigned __int64)s1[0], 225).m128i_u64[0];
              v182 = sub_38B0E0((_QWORD *)v118, &v308);
              if ( !v182 )
                return 0;
              v183 = v301[1];
              v300 = (__m128i *)(v183 + 24LL * v301[2]);
              if ( v300 == (__m128i *)v183 )
                return 0;
              v184 = _mm_loadl_epi64((const __m128i *)s1);
              v297 = (__m128i *)v183;
              LODWORD(p_src) = _mm_cvtsi128_si32(v184);
              LODWORD(v299) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v184, 229));
              while ( 1 )
              {
                v185 = (char *)v297->m128i_i64[0];
                s1[0] = (char *)(v297->m128i_i64[0] + 8 * v297->m128i_i64[1]);
                if ( s1[0] != v185 )
                  break;
LABEL_257:
                v297 = (__m128i *)((char *)v297 + 24);
                if ( v300 == v297 )
                  return 0;
              }
              while ( 1 )
              {
                v186 = *(__int64 **)v185;
                v187 = **(_QWORD **)v185;
                v188 = *(_DWORD *)(v187 + 12);
                if ( v188 == (_DWORD)p_src )
                {
                  v189 = operator new(0x18u);
                  *(_QWORD *)v189 = v186;
                  *(_DWORD *)(v189 + 20) = 1;
                  *(_QWORD *)(v189 + 8) = 0x5400000001LL;
                  v298 = (char *)v189;
                  *(_DWORD *)(v189 + 16) = (_DWORD)v299;
                  v190 = v103[1];
                  v191 = *v103;
                  if ( v103[2] < (unsigned __int64)(v190 + 1) )
                  {
                    v197 = qvector_reserve(v103, v191, v190 + 1, 8);
                    *v103 = v197;
                    v191 = v197;
                    v190 = v103[1];
                  }
                  *(_QWORD *)(v191 + 8 * v190) = v298;
                  ++v103[1];
                  if ( v182[1] == *(_DWORD *)(v187 + 12) )
                    goto LABEL_254;
LABEL_249:
                  v185 += 8;
                  if ( s1[0] == v185 )
                    goto LABEL_257;
                }
                else
                {
                  if ( v182[1] != v188 )
                    goto LABEL_249;
LABEL_254:
                  v192 = operator new(0x18u);
                  v193 = *v182;
                  *(_QWORD *)v192 = v186;
                  *(_QWORD *)(v192 + 8) = 0x5400000001LL;
                  *(_DWORD *)(v192 + 16) = v193;
                  *(_DWORD *)(v192 + 20) = 1;
                  v194 = v103[1];
                  v195 = *v103;
                  if ( v103[2] < (unsigned __int64)(v194 + 1) )
                  {
                    v196 = qvector_reserve(v103, v195, v194 + 1, 8);
                    *v103 = v196;
                    v195 = v196;
                    v194 = v103[1];
                  }
                  *(_QWORD *)(v195 + 8 * v194) = v192;
                  v185 += 8;
                  ++v103[1];
                  if ( s1[0] == v185 )
                    goto LABEL_257;
                }
              }
            }
            while ( 1 )
            {
              if ( !*(_BYTE *)v107 )
              {
                v110 = *(_QWORD *)(v109 + 1008);
                v111 = *(_QWORD *)(v107 + 8);
                v112 = *(__int64 **)(v110 + 40);
                v113 = &v112[*(_QWORD *)(v110 + 48)];
                if ( v112 != v113 )
                  break;
              }
LABEL_125:
              v107 += 16;
              if ( v108 == v107 )
                goto LABEL_126;
            }
            while ( 1 )
            {
              v114 = *v112;
              if ( *v112 )
              {
                if ( v111 == *(_QWORD *)(v114 + 8) || v111 == *(_QWORD *)(v114 + 16) )
                  break;
              }
              if ( v113 == ++v112 )
                goto LABEL_125;
            }
            LODWORD(p_src) = callui(144, v300, &callui, v113, v109, a6, s1[0], s1[1], v294, p_src);
            src = nullptr;
            v306 = -1;
            memset(v305, 0, sizeof(v305));
            if ( (_DWORD)p_src == 46 )
            {
              v210 = (char *)v301[1];
              v298 = &v210[24 * v301[2]];
              if ( v210 != v298 )
              {
LABEL_269:
                s1[0] = v210;
                v297 = &v308;
                while ( 1 )
                {
                  v211 = *(_QWORD *)s1[0] + 8LL * *((_QWORD *)s1[0] + 1);
                  v127 = *(_QWORD ***)s1[0];
                  if ( v211 == *(_QWORD *)s1[0] )
                    goto LABEL_158;
                  while ( 1 )
                  {
                    v128 = (_DWORD **)*v127;
                    v212 = (_DWORD *)**v127;
                    if ( (_DWORD)p_src != 46 )
                    {
                      v213 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v212 + 128LL))(v212);
                      if ( *(_QWORD *)v305 )
                        goto LABEL_275;
                      while ( 1 )
                      {
                        do
                        {
                          if ( (_QWORD **)v211 == ++v127 )
                            goto LABEL_158;
                          v128 = (_DWORD **)*v127;
                          v213 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v127 + 128LL))(**v127);
                        }
                        while ( !*(_QWORD *)v305 );
LABEL_275:
                        if ( rangeset_t_find_range(&src, v213) )
                          goto LABEL_155;
                      }
                    }
                    if ( v212[3] != *(_DWORD *)(v114 + 44) )
                      break;
LABEL_155:
                    v129 = (__int64 *)operator new(0x18u);
                    *v129 = (__int64)v128;
                    v130 = v129;
                    v308.m128i_i64[0] = (__int64)v129;
                    v129[1] = 0x5200000000LL;
                    v129[2] = -1;
                    v131 = v103[1];
                    v132 = *v103;
                    if ( v103[2] < (unsigned __int64)(v131 + 1) )
                    {
                      v299 = v130;
                      v214 = qvector_reserve(v103, v132, v131 + 1, 8);
                      *v103 = v214;
                      v132 = v214;
                      v130 = v299;
                      v131 = v103[1];
                    }
                    ++v127;
                    *(_QWORD *)(v132 + 8 * v131) = v130;
                    ++v103[1];
                    if ( (_QWORD **)v211 == v127 )
                      goto LABEL_158;
                  }
                  while ( (_QWORD **)v211 != ++v127 )
                  {
                    v128 = (_DWORD **)*v127;
                    if ( *(_DWORD *)(**v127 + 12LL) == *(_DWORD *)(v114 + 44) )
                      goto LABEL_155;
                  }
LABEL_158:
                  s1[0] += 24;
                  if ( v298 == s1[0] )
                    goto LABEL_159;
                }
              }
              goto LABEL_161;
            }
            v199 = *(int *)(v114 + 44);
            v200 = *(_QWORD *)(v114 + 32);
            v201 = (char *)sub_388540(v200, *(unsigned int *)(v114 + 44), v198, 0.0);
            if ( !v201 )
            {
              if ( v199 >= *(_QWORD *)(v200 + 136)
                || (v308.m128i_i64[0] = (__int64)off_4D3BF0,
                    v308.m128i_i64[1] = 0,
                    sub_386370(v200, *(_QWORD *)(32 * v199 + *(_QWORD *)(v200 + 128)), 0, (__int64)&v308, 0.0),
                    (v201 = (char *)v308.m128i_i64[1]) == nullptr) )
              {
                *(_QWORD *)&v305[16] = 0;
                v204 = (char *)sub_2543A0(v200);
                v203 = nullptr;
LABEL_281:
                v215 = *(_QWORD **)v204;
                if ( *(_QWORD *)v204 )
                {
                  v216 = 24;
                  v217 = *v215 & 0xFFFFFFFFFFFFFFFCLL;
                  if ( !v217 )
                    goto LABEL_307;
                  if ( (*(_BYTE *)(*v215 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
                  {
                    v218 = v203 == &byte_1;
                    LOBYTE(s1[0]) = v203 == nullptr;
                    while ( 1 )
                    {
                      v219 = *(char **)(v217 + 24);
                      v216 = v217 + 24;
                      if ( v219 == v203 )
                      {
LABEL_306:
                        if ( *(_QWORD *)v204 != v217 )
                        {
LABEL_307:
                          v225 = *(_QWORD *)(v216 + 16);
                          v226 = nullptr;
                          if ( v225 )
                          {
                            s1[0] = (char *)v216;
                            v226 = (void *)qalloc_or_throw(16 * v225);
                            memcpy(v226, *((const void **)s1[0] + 1), 16 * v225);
                          }
                          src = v226;
                          *(_QWORD *)&v305[16] = 0;
                          *(__m128i *)v305 = _mm_unpacklo_epi64((__m128i)v225, (__m128i)v225);
                        }
                        goto LABEL_268;
                      }
                      if ( !v219 || v218 )
                        break;
                      v299 = (__int64 *)(v217 + 24);
                      if ( v219 != &byte_1 && !LOBYTE(s1[0]) )
                      {
                        v298 = v204;
                        v297 = (__m128i *)v203;
                        v220 = sub_255A20((__int64)v203, (__int64)v219);
                        v203 = (char *)v297;
                        v204 = v298;
                        v216 = (__int64)v299;
                        if ( !(v220 ? v220 >> 31 : v297->m128i_i64[0] < *(_QWORD *)v219) )
                        {
                          v222 = (char *)*v299;
                          if ( (__m128i *)*v299 == v297 || v222 == &byte_1 )
                            goto LABEL_306;
                          if ( v222 )
                          {
                            v223 = sub_255A20(*v299, (__int64)v297);
                            v203 = (char *)v297;
                            v204 = v298;
                            v216 = (__int64)v299;
                            if ( v223 )
                              v224 = v223 >> 31;
                            else
                              LOBYTE(v224) = *(_QWORD *)v222 < v297->m128i_i64[0];
                            if ( !(_BYTE)v224 )
                              goto LABEL_306;
                          }
                          goto LABEL_374;
                        }
                      }
                      v217 = *(_QWORD *)(v217 + 8);
LABEL_294:
                      if ( (*(_BYTE *)v217 & 2) != 0 )
                        goto LABEL_268;
                    }
                    if ( v219 == &byte_1 || LOBYTE(s1[0]) )
                      goto LABEL_306;
LABEL_374:
                    v217 = *(_QWORD *)(v217 + 16);
                    goto LABEL_294;
                  }
                }
LABEL_268:
                v210 = (char *)v301[1];
                v298 = &v210[24 * v301[2]];
                if ( v298 != v210 )
                  goto LABEL_269;
LABEL_159:
                if ( src )
                {
                  *(_QWORD *)v305 = 0;
                  qfree(src);
                }
                goto LABEL_161;
              }
              if ( *(int *)(v308.m128i_i64[1] + 8) <= 69 )
                v201 = (char *)sub_253770(v200, v308.m128i_i64[1]);
            }
            s1[0] = v201;
            *(_QWORD *)&v305[16] = 0;
            v202 = sub_2543A0(v200);
            v203 = s1[0];
            v204 = (char *)v202;
            if ( s1[0] > &byte_1 )
            {
              v297 = (__m128i *)v202;
              v205 = v200;
              v308.m128i_i64[0] = *(_QWORD *)s1[0];
              v308.m128i_i32[2] = *((_DWORD *)s1[0] + 2);
              v206 = sub_254220(v200, (unsigned __int64 *)&v308);
              merge_state = get_merge_state(v205, &v308, v207, v208);
              v203 = s1[0];
              v204 = (char *)v297;
              if ( (merge_state & 3) == 0 && (v206 & 1) != 0 )
              {
                v308.m128i_i32[2] = 0;
                v309 = 0;
                v308.m128i_i64[0] = (__int64)&off_4D3C10;
                *((_QWORD *)&v310[2] + 1) = &src;
                v311 = (__int64)v297;
                memset(v310, 0, 40);
                sub_251E00(v308.m128i_i64, (__int64)s1[0], 0);
                v308.m128i_i64[0] = (__int64)off_4C8E58;
                if ( *(_QWORD *)&v310[1] )
                {
                  *((_QWORD *)&v310[1] + 1) = 0;
                  qfree(*(_QWORD *)&v310[1]);
                }
                if ( v309 )
                {
                  *(_QWORD *)&v310[0] = 0;
                  qfree(v309);
                }
                goto LABEL_268;
              }
            }
            goto LABEL_281;
          }
          v120 = *(_QWORD **)(a3 + 8);
        }
        v105 = v120 + 1;
        *(_QWORD *)(a3 + 8) = v120 + 1;
        v300 = (__m128i *)*v120;
        goto LABEL_135;
      }
      if ( a2 == 136 )
      {
        sub_3BE120(v7, 0);
        return 0;
      }
      if ( a2 != 138 )
        return 0;
      v18 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v20 = *(_QWORD *)(a3 + 8);
        v126 = (__int64 *)(v20 + 8);
        *(_QWORD *)(a3 + 8) = v20 + 8;
        v21 = *(_QWORD *)v20;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16);
        a4 = v18 + 8;
        v20 = v18;
        *(_DWORD *)a3 = a4;
        v21 = *(_QWORD *)(v19 + v18);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v20 = v18 + 16;
          *(_DWORD *)a3 = v20;
          v22 = *(_QWORD *)(v19 + a4);
          if ( (unsigned int)v20 <= 0x2F )
          {
            v23 = (__int64 *)(v20 + v19);
            *(_DWORD *)a3 = v18 + 24;
LABEL_25:
            if ( !v21
              || (v24 = *(_QWORD *)(*(_QWORD *)(v296 + 16) + 1008LL),
                  v25 = *(unsigned __int64 **)(v24 + 40),
                  v20 = *(_QWORD *)(v24 + 48),
                  a4 = (__int64)&v25[v20],
                  v25 == (unsigned __int64 *)a4) )
            {
LABEL_31:
              v26 = *v23;
              v27 = callui(144, v21, v20, a4, a5, a6, s1[0], s1[1], v294, p_src);
              if ( v27 == 10 || v27 == 58 && *(_BYTE *)(*(_QWORD *)(v26 + 208) + 31LL) != 12 )
                callui(131, v21, v22, "hx:JumpGlobalXref", "Compact types...", 0, s1[0], s1[1], v294, p_src);
            }
            else
            {
              while ( 1 )
              {
                v20 = *v25;
                if ( *v25 )
                {
                  if ( *(_QWORD *)(v20 + 8) == v21 || *(_QWORD *)(v20 + 16) == v21 )
                    break;
                }
                if ( (unsigned __int64 *)a4 == ++v25 )
                  goto LABEL_31;
              }
              if ( *(_QWORD *)(v20 + 8) == v21 )
                sub_3BCE50(
                  v21,
                  v22,
                  v20,
                  a4,
                  a5,
                  a6,
                  (__int64)s1[0],
                  (__int64)s1[1],
                  v294,
                  (_DWORD)p_src,
                  v296,
                  (_DWORD)v297,
                  (_DWORD)v298,
                  (_DWORD)v299,
                  (_DWORD)v300,
                  (char)v301,
                  (_DWORD)v302,
                  (_DWORD)v303,
                  (_DWORD)src,
                  *(_DWORD *)v305,
                  *(_DWORD *)&v305[8],
                  *(_DWORD *)&v305[16],
                  v306,
                  v307,
                  v308.m128i_i32[0],
                  v308.m128i_i32[2],
                  v309,
                  v310[0],
                  DWORD2(v310[0]),
                  v310[1],
                  DWORD2(v310[1]),
                  v310[2],
                  DWORD2(v310[2]),
                  v311,
                  v312);
            }
            return 0;
          }
          v23 = *(__int64 **)(a3 + 8);
LABEL_150:
          *(_QWORD *)(a3 + 8) = v23 + 1;
          goto LABEL_25;
        }
        v126 = *(__int64 **)(a3 + 8);
      }
      v23 = v126 + 1;
      *(_QWORD *)(a3 + 8) = v126 + 1;
      v22 = *v126;
      goto LABEL_150;
    }
    v77 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v121 = *(const char ***)(a3 + 8);
      v80 = (__int64 **)(v121 + 1);
      *(_QWORD *)(a3 + 8) = v121 + 1;
      if ( strncmp(*v121, "Pseudocode-", 0xBu) )
        return 0;
    }
    else
    {
      v78 = *(_QWORD *)(a3 + 16);
      v79 = v77 + 8;
      *(_DWORD *)a3 = v77 + 8;
      if ( strncmp(*(const char **)(v78 + v77), "Pseudocode-", 0xBu) )
        return 0;
      if ( v79 <= 0x2F )
      {
        v80 = (__int64 **)(v79 + v78);
        *(_DWORD *)a3 = v77 + 16;
LABEL_91:
        v81 = *v80;
        v82 = v81[1];
        if ( !v82 )
          return 0;
        v83 = *v81;
        v84 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v83 + 8) )
          {
            v85 = *(_BYTE **)v83;
            if ( **(_BYTE **)v83 == 101 && v85[1] == 97 && !v85[2] )
              break;
          }
          ++v84;
          v83 += 40;
          if ( v82 == v84 )
            return 0;
        }
        if ( *(_DWORD *)(v83 + 24) != 1 )
          return 0;
        v86 = *(_QWORD *)(v83 + 32);
        func = (void *)get_func(v86);
        if ( !func )
          return 0;
        src = func;
        v308.m128i_i64[0] = 0;
        v88 = *(_QWORD *)(v296 + 16);
        v308.m128i_i64[1] = -1;
        v309 = 0;
        memset(v305, 0, sizeof(v305));
        v310[0] = 0;
        v89 = *(const char **)(v88 + 112);
        s1[0] = (char *)&v302;
        p_src = (__int64 *)&src;
        sub_149380(&v302, (__int64)v89, &src, &v308, 8);
        v92 = *(_QWORD *)v305;
        if ( *(_QWORD *)v305 )
        {
          *(_QWORD *)&v305[8] = 0;
          qfree(*(_QWORD *)v305);
        }
        if ( v302 )
        {
          if ( (get_merge_state(v92, v89, v90, v91) & 3) == 0 )
            goto LABEL_322;
          v96 = v81[1];
          if ( !v96 )
            goto LABEL_322;
          v97 = *v81;
          v98 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v97 + 8) )
            {
              v89 = "merge_kind";
              if ( !strcmp(*(const char **)v97, "merge_kind") )
                break;
            }
            ++v98;
            v97 += 40;
            if ( v96 == v98 )
              goto LABEL_322;
          }
          if ( *(_DWORD *)(v97 + 24) != 1 || (unsigned __int8)sub_2B7460(*(unsigned int *)(v97 + 32)) )
          {
LABEL_322:
            v235 = sub_3831E0(*(_QWORD *)(*(_QWORD *)(v296 + 16) + 1008LL), (__int64)v89, v93, v94, v95);
            src = nullptr;
            v236 = v235;
            *(_OWORD *)v305 = 0;
            sub_38C5C0(p_src, v235, "Pseudocode-");
            v237 = operator new(0xA8u);
            v238 = v302;
            v239 = v237;
            v240 = *(_QWORD *)v305;
            v303 = v302;
            if ( v302 )
            {
              ++*((_DWORD *)v302 + 26);
              if ( v240 )
                v241 = (__int64 *)src;
              else
                v241 = (__int64 *)::s1;
              v242 = *(_QWORD *)(v296 + 16);
              *(_DWORD *)(v239 + 4) = v236;
              *(_DWORD *)v239 = 0;
              *(_OWORD *)(v239 + 8) = 0;
              *(__m128i *)(v239 + 24) = _mm_unpacklo_epi64(
                                          _mm_loadl_epi64((const __m128i *)(v238 + 1)),
                                          (__m128i)(unsigned __int64)v238);
              ++*((_DWORD *)v238 + 26);
            }
            else
            {
              v286 = v296;
              if ( *(_QWORD *)v305 )
              {
                *(_DWORD *)(v239 + 4) = v236;
                *(_DWORD *)v239 = 0;
                v241 = (__int64 *)src;
              }
              else
              {
                *(_DWORD *)(v239 + 4) = v236;
                *(_DWORD *)v239 = 0;
                v241 = (__int64 *)::s1;
              }
              v242 = *(_QWORD *)(v286 + 16);
              *(_OWORD *)(v239 + 8) = 0;
              *(_OWORD *)(v239 + 24) = 0;
            }
            *(_DWORD *)v239 &= ~2u;
            *(_QWORD *)(v239 + 52) = 0;
            *(_QWORD *)(v239 + 44) = 0xFFFFFFFFLL;
            *(_DWORD *)(v239 + 80) = 0;
            *(_DWORD *)(v239 + 104) = 0;
            *(_QWORD *)(v239 + 128) = v242;
            *(_QWORD *)(v239 + 136) = 0;
            *(_QWORD *)(v239 + 160) = 0;
            *(_OWORD *)(v239 + 144) = 0;
            v243 = *(_QWORD **)(v242 + 1008);
            v244 = v243[6];
            if ( v243[7] < (unsigned __int64)(v244 + 1) )
            {
              v287 = v243[5];
              p_src = v241;
              v243[5] = qvector_reserve(v243 + 5, v287, v244 + 1, 8);
              v241 = p_src;
              v244 = v243[6];
            }
            *(_QWORD *)(v243[5] + 8 * v244) = v239;
            ++v243[6];
            sub_3903D0((_QWORD *)v239, (__int64)v241, 202, v86);
            if ( v238 )
            {
              v169 = (*((_DWORD *)v238 + 26))-- == 1;
              if ( v169 )
              {
                sub_254CF0(v238);
                if ( v238[23] )
                {
                  v249 = v238[24];
                  if ( v249 )
                  {
                    v250 = v238[23];
                    for ( i = 0; i != v249; ++i )
                    {
                      v252 = (__int64 *)(v250 + 24 * i);
                      v253 = *v252;
                      if ( *v252 )
                      {
                        v252[1] = 0;
                        qfree(v253);
                        v250 = v238[23];
                      }
                    }
                  }
                  else
                  {
                    v250 = v238[23];
                  }
                  v238[24] = 0;
                  qfree(v250);
                }
                v254 = v238[20];
                if ( v254 )
                {
                  v238[21] = 0;
                  qfree(v254);
                }
                if ( v238[16] )
                {
                  v255 = v238[17];
                  if ( v255 )
                  {
                    v256 = v238[16];
                    for ( j = 0; j != v255; ++j )
                    {
                      v258 = (__int64 *)(v256 + 32 * j);
                      v259 = *v258;
                      if ( *v258 )
                      {
                        v258[1] = 0;
                        qfree(v259);
                        v256 = v238[16];
                      }
                    }
                  }
                  else
                  {
                    v256 = v238[16];
                  }
                  v238[17] = 0;
                  qfree(v256);
                }
                sub_2513D0((__int64)(v238 + 2));
                j__qfree(v238);
              }
            }
            *(_DWORD *)v239 |= 1u;
            sub_37FEF0(v239, v302, v245, v246, v247, v248);
            sub_339EC0(*(_QWORD *)(v296 + 16), 0x64u, v239);
            result = *(_QWORD *)(v239 + 16);
            if ( src )
            {
              s1[0] = *(char **)(v239 + 16);
              *(_QWORD *)v305 = 0;
              qfree(src);
              result = (__int64)s1[0];
            }
            v260 = v302;
            if ( v302 )
            {
              v169 = (*((_DWORD *)v302 + 26))-- == 1;
              if ( v169 )
              {
                s1[0] = (char *)result;
                sub_254CF0(v260);
                v261 = s1[0];
                if ( v260[23] )
                {
                  v262 = v260[24];
                  if ( v262 )
                  {
                    v263 = v260[23];
                    v264 = 0;
                    v265 = s1[0];
                    do
                    {
                      v266 = (__int64 *)(v263 + 24 * v264);
                      v267 = *v266;
                      if ( *v266 )
                      {
                        v266[1] = 0;
                        qfree(v267);
                        v263 = v260[23];
                      }
                      ++v264;
                    }
                    while ( v262 != v264 );
                    v261 = v265;
                  }
                  else
                  {
                    v263 = v260[23];
                  }
                  s1[0] = v261;
                  v260[24] = 0;
                  qfree(v263);
                  v261 = s1[0];
                }
                v268 = v260[20];
                if ( v268 )
                {
                  s1[0] = v261;
                  v260[21] = 0;
                  qfree(v268);
                  v261 = s1[0];
                }
                if ( v260[16] )
                {
                  v269 = v260[17];
                  if ( v269 )
                  {
                    v270 = v260[16];
                    v271 = 0;
                    v272 = v261;
                    do
                    {
                      v273 = (__int64 *)(v270 + 32 * v271);
                      v274 = *v273;
                      if ( *v273 )
                      {
                        v273[1] = 0;
                        qfree(v274);
                        v270 = v260[16];
                      }
                      ++v271;
                    }
                    while ( v269 != v271 );
                    v261 = v272;
                  }
                  else
                  {
                    v270 = v260[16];
                  }
                  s1[0] = v261;
                  v260[17] = 0;
                  qfree(v270);
                  v261 = s1[0];
                }
                s1[0] = v261;
                sub_2513D0((__int64)(v260 + 2));
                j__qfree(v260);
                result = (__int64)s1[0];
              }
            }
            if ( v309 )
            {
              s1[0] = (char *)result;
              *(_QWORD *)&v310[0] = 0;
              qfree(v309);
              return (__int64)s1[0];
            }
            return result;
          }
          sub_13C700((_QWORD *)s1[0], (__int64)"merge_kind");
          v99 = v309;
          if ( !v309 )
            return 0;
        }
        else
        {
          sub_32CC90((__int64)p_src, (__int64)&v308, v90);
          sub_69660((__int64)"%a: %s\n", 0.0, (const char *)v308.m128i_i64[1]);
          if ( src )
          {
            *(_QWORD *)v305 = 0;
            qfree(src);
          }
          v278 = v302;
          if ( v302 )
          {
            v169 = (*((_DWORD *)v302 + 26))-- == 1;
            if ( v169 )
            {
              sub_254CF0(v278);
              if ( v278[23] )
              {
                v279 = v278[24];
                if ( v279 )
                {
                  v280 = v278[23];
                  for ( k = 0; k != v279; ++k )
                  {
                    v282 = (__int64 *)(v280 + 24 * k);
                    if ( *v282 )
                    {
                      v283 = *v282;
                      v282[1] = 0;
                      qfree(v283);
                      v280 = v278[23];
                    }
                  }
                }
                else
                {
                  v280 = v278[23];
                }
                v278[24] = 0;
                qfree(v280);
              }
              v288 = v278[20];
              if ( v288 )
              {
                v278[21] = 0;
                qfree(v288);
              }
              if ( v278[16] )
              {
                v289 = v278[17];
                if ( v289 )
                {
                  v284 = v278[16];
                  for ( m = 0; m != v289; ++m )
                  {
                    v291 = (__int64 *)(v284 + 32 * m);
                    if ( *v291 )
                    {
                      v292 = *v291;
                      v291[1] = 0;
                      qfree(v292);
                      v284 = v278[16];
                    }
                  }
                }
                else
                {
                  v284 = v278[16];
                }
                v278[17] = 0;
                qfree(v284);
              }
              sub_2513D0((__int64)(v278 + 2));
              j__qfree(v278);
            }
          }
          v99 = v309;
          if ( !v309 )
            return 0;
        }
        *(_QWORD *)&v310[0] = 0;
        qfree(v99);
        return 0;
      }
      v80 = *(__int64 ***)(a3 + 8);
    }
    *(_QWORD *)(a3 + 8) = v80 + 1;
    goto LABEL_91;
  }
  if ( a2 <= 61 )
  {
    if ( a2 == 7 )
    {
      v28 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v125 = *(_QWORD **)(a3 + 8);
        v31 = (_QWORD **)(v125 + 1);
        *(_QWORD *)(a3 + 8) = v125 + 1;
        if ( *v125 == 0xDEC0DE00000004LL )
          goto LABEL_146;
      }
      else
      {
        v29 = *(_QWORD *)(a3 + 16);
        v30 = v28 + 8;
        *(_DWORD *)a3 = v30;
        if ( *(_QWORD *)(v29 + v28) == 0xDEC0DE00000004LL )
        {
          if ( (unsigned int)v30 <= 0x2F )
          {
            v31 = (_QWORD **)(v30 + v29);
            *(_DWORD *)a3 = v28 + 16;
LABEL_40:
            if ( *v31 )
              **v31 = sub_3467A0;
            return 14598366;
          }
          v31 = *(_QWORD ***)(a3 + 8);
LABEL_146:
          *(_QWORD *)(a3 + 8) = v31 + 1;
          goto LABEL_40;
        }
      }
    }
    return 0;
  }
  v9 = *(_QWORD *)(v7 + 1008);
  switch ( a2 )
  {
    case '>':
      v59 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v60 = *(unsigned __int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v60 + 1;
      }
      else
      {
        v60 = (unsigned __int64 *)(*(_QWORD *)(a3 + 16) + v59);
        *(_DWORD *)a3 = v59 + 8;
      }
      v39 = *v60;
      v61 = *(_QWORD *)(*(_QWORD *)(v296 + 16) + 1008LL);
      v62 = *(__int64 **)(v61 + 40);
      v37 = *(_QWORD *)(v61 + 48);
      v38 = (__int64)&v62[v37];
      if ( v62 == (__int64 *)v38 )
        goto LABEL_46;
      while ( 1 )
      {
        v37 = *v62;
        if ( *v62 )
        {
          if ( v39 == *(_QWORD *)(v37 + 8) || v39 == *(_QWORD *)(v37 + 16) )
            break;
        }
        if ( (__int64 *)v38 == ++v62 )
        {
LABEL_46:
          sub_39C750(v9, v39, v37, v38, a5, a6);
          return 0;
        }
      }
      *(_DWORD *)v37 |= 1u;
      return 0;
    case '@':
      v51 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 <= 0x2Fu )
      {
        v52 = (__int64 *)(*(_QWORD *)(a3 + 16) + v51);
        *(_DWORD *)a3 = v51 + 8;
      }
      else
      {
        v52 = *(__int64 **)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v52 + 1;
      }
      v53 = *v52;
      v54 = *(_QWORD *)(v296 + 16);
      v55 = *(_QWORD *)(v54 + 1008);
      v56 = *(__int64 **)(v55 + 40);
      v57 = &v56[*(_QWORD *)(v55 + 48)];
      if ( v56 == v57 )
        return 0;
      while ( 1 )
      {
        v58 = *v56;
        if ( *v56 )
        {
          if ( v53 == *(_QWORD *)(v58 + 8) || v53 == *(_QWORD *)(v58 + 16) )
            break;
        }
        if ( v57 == ++v56 )
          return 0;
      }
      sub_339EC0(v54, 0x67u, *v56);
      v166 = *(_QWORD *)(v58 + 8);
      if ( v166 == v53 )
      {
        *(_OWORD *)(v58 + 8) = 0;
      }
      else if ( v166 )
      {
        return 0;
      }
      sub_38B1A0(v58, 103, v164, v165);
      sub_385B80(v58);
      clear_tinfo_t(v58 + 160);
      v167 = *(_QWORD *)(v58 + 136);
      if ( v167 )
      {
        *(_QWORD *)(v58 + 144) = 0;
        qfree(v167);
      }
      v168 = *(_QWORD *)(v58 + 32);
      if ( v168 )
      {
        v169 = (*(_DWORD *)(v168 + 104))-- == 1;
        if ( v169 )
        {
          v170 = *(_QWORD **)(v58 + 32);
          if ( v170 )
          {
            sub_254CF0(*(__int64 **)(v58 + 32));
            if ( v170[23] )
            {
              v171 = v170[24];
              if ( v171 )
              {
                v172 = v170[23];
                for ( n = 0; n != v171; ++n )
                {
                  v174 = (__int64 *)(v172 + 24 * n);
                  v175 = *v174;
                  if ( *v174 )
                  {
                    v174[1] = 0;
                    qfree(v175);
                    v172 = v170[23];
                  }
                }
              }
              else
              {
                v172 = v170[23];
              }
              v170[24] = 0;
              qfree(v172);
            }
            v176 = v170[20];
            if ( v176 )
            {
              v170[21] = 0;
              qfree(v176);
            }
            if ( v170[16] )
            {
              v177 = v170[17];
              if ( v177 )
              {
                v178 = v170[16];
                for ( ii = 0; ii != v177; ++ii )
                {
                  v180 = (__int64 *)(v178 + 32 * ii);
                  v181 = *v180;
                  if ( *v180 )
                  {
                    v180[1] = 0;
                    qfree(v181);
                    v178 = v170[16];
                  }
                }
              }
              else
              {
                v178 = v170[16];
              }
              v170[17] = 0;
              qfree(v178);
            }
            sub_2513D0((__int64)(v170 + 2));
            j__qfree(v170);
          }
        }
      }
      operator delete((void *)v58, 0xA8u);
      return 0;
    case 'I':
      v40 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v122 = *(__int64 **)(a3 + 8);
        v123 = v122 + 1;
        *(_QWORD *)(a3 + 8) = v122 + 1;
        v43 = *v122;
LABEL_140:
        v124 = v123 + 1;
        *(_QWORD *)(a3 + 8) = v123 + 1;
        v44 = *v123;
LABEL_141:
        v46 = (int **)(v124 + 1);
        goto LABEL_142;
      }
      v41 = *(_QWORD *)(a3 + 16);
      v42 = v40 + 8;
      *(_DWORD *)a3 = v42;
      v43 = *(_QWORD *)(v41 + v40);
      if ( (unsigned int)v42 > 0x2F )
      {
        v123 = *(__int64 **)(a3 + 8);
        goto LABEL_140;
      }
      *(_DWORD *)a3 = v40 + 16;
      v44 = *(_QWORD *)(v41 + v42);
      if ( v40 + 16 > 0x2F )
      {
        v124 = *(_QWORD **)(a3 + 8);
        goto LABEL_141;
      }
      v45 = v40 + 24;
      *(_DWORD *)a3 = v45;
      if ( (unsigned int)v45 <= 0x2F )
      {
        v46 = (int **)(v45 + v41);
        *(_DWORD *)a3 = v40 + 32;
        goto LABEL_52;
      }
      v46 = *(int ***)(a3 + 8);
LABEL_142:
      *(_QWORD *)(a3 + 8) = v46 + 1;
LABEL_52:
      v47 = *(_QWORD *)(*(_QWORD *)(v296 + 16) + 1008LL);
      v48 = *(__int64 **)(v47 + 40);
      v49 = &v48[*(_QWORD *)(v47 + 48)];
      if ( v48 == v49 )
        return 0;
      while ( 1 )
      {
        v50 = *v48;
        if ( *v48 )
        {
          if ( *(_QWORD *)(v50 + 8) == v44 || *(_QWORD *)(v50 + 16) == v44 )
            break;
        }
        if ( v49 == ++v48 )
          return 0;
      }
      v143 = *v46;
      v144 = sub_387310(*v48, 1);
      result = 0;
      if ( v144 )
      {
        v145 = *(_QWORD *)(v43 + 8);
        v146 = *v143;
        s1[0] = nullptr;
        if ( v145 )
        {
          v227 = (char *)qalloc_or_throw(v145);
          v228 = *(const char **)v43;
          s1[0] = v227;
          memcpy(v227, v228, v145);
        }
        result = sub_339EC0(*(_QWORD *)(v296 + 16), 0x6Cu, v50, v43, v143);
        if ( result == 1 )
          goto LABEL_216;
        LOBYTE(p_src) = 0;
        if ( *v143 == v146 )
        {
          v229 = ::s1;
          if ( *(_QWORD *)(v43 + 8) )
            v229 = *(const char **)v43;
          v230 = ::s1;
          if ( v145 )
            v230 = s1[0];
          LOBYTE(p_src) = strcmp(v230, v229) == 0;
        }
        v308.m128i_i64[0] = v50;
        *(_OWORD *)v305 = 0;
        src = nullptr;
        v308.m128i_i64[1] = v50 + 80;
        LODWORD(v309) = 0;
        memset(v310, 0, sizeof(v310));
        v311 = 0;
        v312 = 0;
        if ( (unsigned __int8)sub_38DAD0(&v308, (__int64 *)&src, (__m128)0LL, v147, v148, v149, v150) != 1
          && (_BYTE)p_src )
        {
LABEL_207:
          v308.m128i_i64[0] = 0;
          if ( v311 )
          {
            *(_QWORD *)&v312 = 0;
            qfree(v311);
          }
          if ( *((_QWORD *)&v310[1] + 1) )
          {
            *(_QWORD *)&v310[2] = 0;
            qfree(*((_QWORD *)&v310[1] + 1));
          }
          if ( *(_QWORD *)&v310[0] )
          {
            *((_QWORD *)&v310[0] + 1) = 0;
            qfree(*(_QWORD *)&v310[0]);
          }
          if ( src )
          {
            *(_QWORD *)v305 = 0;
            qfree(src);
          }
          result = 0;
LABEL_216:
          v163 = s1[0];
          if ( s1[0] )
          {
            s1[0] = (char *)result;
            qfree(v163);
            return (__int64)s1[0];
          }
          return result;
        }
        v151 = *(_QWORD *)(v43 + 8);
        if ( v151 > 1 )
        {
          v152 = *(_QWORD *)v43;
          if ( *(_BYTE *)(*(_QWORD *)v43 + v151 - 2) != 10 )
          {
            if ( *(_QWORD *)(v43 + 16) < v151 + 1 )
            {
              v277 = qvector_reserve(v43, v152, v151 + 1, 1);
              *(_QWORD *)v43 = v277;
              v152 = v277;
            }
            *(_QWORD *)(v43 + 8) = v151 + 1;
            *(_BYTE *)(v152 + v151 - 1) = 10;
            *(_BYTE *)(*(_QWORD *)v43 + v151) = 0;
          }
        }
        v153 = *(_QWORD *)v305;
        if ( *(_QWORD *)v305 )
        {
          v154 = *(_QWORD *)v305 - 1LL;
          if ( *(_QWORD *)v305 != 1 )
          {
            v155 = *(_QWORD *)(v43 + 8);
            v156 = (__int64 *)(*(_QWORD *)v305 - 1LL);
            if ( v155 )
            {
              --v155;
              v156 = (__int64 *)(v154 + v155);
              v153 = *(_QWORD *)v305 + v155;
            }
            v157 = *(_QWORD *)v43;
            if ( *(_QWORD *)(v43 + 16) < v153 )
            {
              p_src = v156;
              v285 = qvector_reserve(v43, v157, v153, 1);
              *(_QWORD *)v43 = v285;
              v156 = p_src;
              v157 = v285;
            }
            *(_QWORD *)(v43 + 8) = v153;
            *((_BYTE *)v156 + v157) = 0;
            memcpy((void *)(v155 + *(_QWORD *)v43), src, v154);
          }
        }
        *v143 += v309;
        v158 = *(_QWORD *)(v43 + 8);
        v159 = *(const char **)v43;
        if ( v158 )
        {
          if ( v158 != 1 && v159[v158 - 2] == 10 )
          {
LABEL_311:
            v161 = v158 + 1;
            v162 = v158 + 2;
            --v158;
LABEL_204:
            if ( *(_QWORD *)(v43 + 16) < v162 )
            {
              v233 = qvector_reserve(v43, v159, v162, 1);
              *(_QWORD *)v43 = v233;
              v159 = (const char *)v233;
            }
            *(_QWORD *)(v43 + 8) = v162;
            v159[v161] = 0;
            *(_WORD *)(v158 + *(_QWORD *)v43) = 32257;
            ++*v143;
            goto LABEL_207;
          }
          v160 = v158-- + 1;
        }
        else
        {
          v160 = 2;
        }
        if ( *(_QWORD *)(v43 + 16) < v160 )
        {
          v234 = qvector_reserve(v43, v159, v160, 1);
          *(_QWORD *)v43 = v234;
          v159 = (const char *)v234;
        }
        *(_QWORD *)(v43 + 8) = v160;
        v161 = 2;
        v162 = 3;
        v159[v158] = 10;
        *(_BYTE *)(*(_QWORD *)v43 + v158 + 1) = 0;
        v158 = *(_QWORD *)(v43 + 8);
        v159 = *(const char **)v43;
        if ( !v158 )
          goto LABEL_204;
        goto LABEL_311;
      }
      return result;
    case 'L':
      v32 = *(_DWORD *)(v7 + 1416);
      if ( (v32 & 0x200) != 0 )
        return 0;
      BYTE1(v32) |= 2u;
      *(_DWORD *)(v7 + 1416) = v32;
      sub_33CF70();
      v36 = callui(61, a2, &callui, v33, v34, v35, s1[0], s1[1], v294, p_src);
      if ( !v36 )
        return 0;
      v39 = v36;
      goto LABEL_46;
    case 'P':
      v71 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v72 = *(const char ***)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v72 + 1;
      }
      else
      {
        v72 = (const char **)(*(_QWORD *)(a3 + 16) + v71);
        *(_DWORD *)a3 = v71 + 8;
      }
      v73 = *v72;
      if ( !*v72 )
        return 0;
      v74 = sub_385AC0(*(_QWORD *)(v296 + 16));
      v75 = v74;
      if ( !v74 )
        return 0;
      sub_387310(v74, 0);
      if ( !strcmp(v73, "JumpExplored") )
        return (unsigned __int8)callui(100, "SelectAll", 0, 0, &callui, v76, s1[0], s1[1], v294, p_src);
      if ( strcmp(v73, "JumpEnter") )
        return 0;
      sub_396640(v75, 0, 0);
      return 1;
    case 'Q':
      v63 = *(_DWORD *)(v7 + 1416);
      if ( (v63 & 0x10) != 0 )
      {
        v64 = v296;
        *(_DWORD *)(v7 + 1416) = v63 & 0xFFFFFFEF;
        sub_326EE0(*(_QWORD *)(v64 + 16), a2, a3, a4);
        sub_325B90(*(_QWORD *)(v64 + 16), 0);
        sub_13D250(*(_QWORD *)(v64 + 16), 1);
        sub_3DEFB0(*(_QWORD *)(v64 + 16));
        if ( sub_385AC0(*(_QWORD *)(v64 + 16)) )
        {
          v68 = *(_QWORD *)(*(_QWORD *)(v64 + 16) + 1008LL);
          v69 = *(__int64 **)(v68 + 40);
          for ( jj = &v69[*(_QWORD *)(v68 + 48)]; jj != v69; ++v69 )
          {
            if ( *v69 )
              sub_391910(*v69, 0, a7, v65, v66, v67);
          }
        }
      }
      return 0;
    default:
      return 0;
  }
}
