__int64 __fastcall sub_3A0BA0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6,
        double a7)
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
  const char **v43; // rbp
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
  __int64 v89; // rsi
  __int64 v90; // rdx
  __int64 v91; // r14
  __int64 v92; // r12
  __int64 v93; // rbp
  __int64 v94; // rdi
  unsigned int v95; // edx
  __int64 v96; // rax
  __int64 v97; // rsi
  __int64 *v98; // r15
  __int64 v99; // rcx
  _QWORD *v100; // rax
  __int64 *v101; // rax
  __int64 v102; // rsi
  __int64 v103; // rdi
  __int64 v104; // r8
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 *v107; // rax
  __int64 *v108; // rcx
  __int64 v109; // rbx
  __int64 v110; // rdx
  __int64 *v111; // rax
  __int64 *v112; // rdx
  __int64 v113; // rdi
  __int64 **v114; // rax
  _QWORD *v115; // rdx
  const char **v116; // rax
  _QWORD **v117; // rdx
  __int64 *v118; // rax
  _QWORD *v119; // rsi
  _QWORD *v120; // rax
  __int64 *v121; // rax
  _QWORD **v122; // r14
  _DWORD **v123; // r12
  __int64 *v124; // rax
  __int64 *v125; // r9
  __int64 v126; // rax
  __int64 v127; // rsi
  unsigned int v128; // eax
  __int64 **v129; // rcx
  __int64 *v130; // rbp
  __int64 v131; // rsi
  __int64 v132; // r12
  __int64 v133; // rdi
  _QWORD *v134; // rax
  __int64 v135; // rdx
  _BYTE *v136; // rcx
  _QWORD *v137; // rbx
  int *v138; // r12
  __int64 v139; // rdx
  __int64 v140; // rcx
  size_t v141; // r14
  int v142; // r15d
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  unsigned __int64 v147; // rbx
  __int64 v148; // rsi
  unsigned __int64 v149; // rbx
  size_t v150; // r15
  const char *v151; // r14
  __int64 *v152; // r8
  __int64 v153; // rsi
  const char *v154; // r14
  __int64 v155; // rsi
  unsigned __int64 v156; // rbx
  __int64 v157; // r15
  unsigned __int64 v158; // rbx
  char *v159; // rdi
  __int64 v160; // rax
  __int64 v161; // rdi
  __int64 v162; // rax
  bool v163; // zf
  _QWORD *v164; // rbp
  __int64 v165; // r13
  __int64 v166; // rdi
  __int64 n; // r12
  __int64 *v168; // rdx
  __int64 v169; // rax
  __int64 v170; // rdi
  __int64 v171; // r13
  __int64 v172; // rdi
  __int64 ii; // r12
  __int64 *v174; // rax
  __int64 v175; // rdx
  int *v176; // r14
  __int64 v177; // rax
  __m128i v178; // xmm2
  char *v179; // rbx
  __int64 *v180; // rbp
  __int64 v181; // r12
  int v182; // eax
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // rsi
  __int64 v186; // r12
  int v187; // eax
  __int64 v188; // rax
  __int64 v189; // rsi
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rdx
  unsigned __int64 v193; // r12
  __int64 v194; // rbp
  __int64 v195; // rsi
  char *v196; // rcx
  __int64 v197; // rax
  char *v198; // rcx
  char *v199; // r8
  char v200; // bp
  char merge_state; // al
  char *v202; // r12
  __int64 v203; // rbp
  _DWORD *v204; // rdi
  __int64 v205; // rax
  __int64 v206; // r9
  _BYTE *v207; // rdx
  _QWORD *v208; // rbp
  bool v209; // r12
  char *v210; // r14
  unsigned int v211; // eax
  char *v213; // r14
  unsigned int v214; // eax
  unsigned int v215; // eax
  unsigned __int64 v216; // rbp
  void *v217; // r12
  char *v218; // rax
  const char *v219; // rsi
  const char *v220; // rsi
  const char *v221; // rdi
  __int64 v222; // rbx
  _WORD *v223; // rsi
  __int64 v224; // rax
  __int64 v225; // rax
  int v226; // eax
  int v227; // ebp
  __int64 v228; // rax
  __int64 *v229; // r14
  __int64 v230; // r12
  __int64 v231; // rax
  __int64 *v232; // r8
  __int64 v233; // rax
  _QWORD *v234; // rbx
  __int64 v235; // rax
  __int64 v236; // rdx
  __int64 v237; // rcx
  __int64 v238; // r8
  __int64 v239; // r9
  __int64 v240; // rbp
  __int64 v241; // rdi
  __int64 i; // rbx
  __int64 *v243; // rdx
  __int64 v244; // rax
  __int64 v245; // rdi
  __int64 v246; // rbp
  __int64 v247; // rdi
  __int64 j; // rbx
  __int64 *v249; // rax
  __int64 v250; // rdx
  __int64 *v251; // rbx
  char *v252; // rax
  __int64 v253; // r12
  __int64 v254; // rdi
  __int64 v255; // rbp
  char *v256; // r13
  __int64 *v257; // rcx
  __int64 v258; // rdx
  __int64 v259; // rdi
  __int64 v260; // r12
  __int64 v261; // rdi
  __int64 v262; // rbp
  char *v263; // r13
  __int64 *v264; // rdx
  __int64 v265; // rcx
  __int64 v266; // rax
  __int64 v267; // rax
  __int64 v268; // rax
  __int64 *v269; // rbx
  __int64 v270; // r12
  __int64 v271; // rdi
  __int64 k; // rbp
  __int64 *v273; // rdx
  __int64 v274; // rdi
  __int64 v275; // rdi
  __int64 v276; // rax
  __int64 v277; // rax
  __int64 v278; // rsi
  __int64 v279; // rdi
  __int64 v280; // r12
  __int64 m; // rbp
  __int64 *v282; // rax
  __int64 v283; // rdi
  char *s1[2]; // [rsp+0h] [rbp-138h] BYREF
  __int64 v285; // [rsp+10h] [rbp-128h]
  __int64 *p_src; // [rsp+18h] [rbp-120h]
  __int64 v287; // [rsp+20h] [rbp-118h]
  __m128i *v288; // [rsp+28h] [rbp-110h]
  char *v289; // [rsp+30h] [rbp-108h]
  __int64 *v290; // [rsp+38h] [rbp-100h]
  __m128i *v291; // [rsp+40h] [rbp-F8h]
  _QWORD *v292; // [rsp+48h] [rbp-F0h]
  __int64 *v293; // [rsp+50h] [rbp-E8h] BYREF
  __int64 *v294; // [rsp+58h] [rbp-E0h]
  void *src; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v296[24]; // [rsp+68h] [rbp-D0h] BYREF
  int v297; // [rsp+80h] [rbp-B8h]
  int v298; // [rsp+88h] [rbp-B0h]
  __m128i v299; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v300; // [rsp+A0h] [rbp-98h]
  _OWORD v301[3]; // [rsp+A8h] [rbp-90h] BYREF
  __m128i *v302; // [rsp+D8h] [rbp-60h]
  __int128 v303; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v304; // [rsp+F8h] [rbp-40h]

  v287 = a1;
  v7 = *(_QWORD *)(a1 + 16);
  v304 = __readfsqword(0x28u);
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
            v14 = *(_QWORD *)(*(_QWORD *)(v287 + 16) + 1008LL);
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
                v128 = *(_DWORD *)a3;
                if ( *(_DWORD *)a3 > 0x2Fu )
                {
                  v129 = *(__int64 ***)(a3 + 8);
                  *(_QWORD *)(a3 + 8) = v129 + 1;
                }
                else
                {
                  v129 = (__int64 **)(*(_QWORD *)(a3 + 16) + v128);
                  *(_DWORD *)a3 = v128 + 8;
                }
                v130 = *v129;
                v131 = (*v129)[1];
                v132 = **(_QWORD **)(v17 + 32);
                v133 = **v129;
                if ( v131 )
                {
                  v134 = (_QWORD *)**v129;
                  v135 = 0;
                  while ( 1 )
                  {
                    if ( v134[1] )
                    {
                      v136 = (_BYTE *)*v134;
                      if ( *(_BYTE *)*v134 == 101 && v136[1] == 97 && !v136[2] )
                        break;
                    }
                    ++v135;
                    v134 += 5;
                    if ( v131 == v135 )
                      goto LABEL_317;
                  }
                  v137 = v134 + 3;
                }
                else
                {
LABEL_317:
                  if ( v130[2] < (unsigned __int64)(v131 + 1) )
                  {
                    v267 = qvector_reserve((__int64)v130, v133, v131 + 1, 40);
                    *v130 = v267;
                    v131 = v130[1];
                    v133 = v267;
                  }
                  v222 = v133 + 40 * v131;
                  *(_QWORD *)v222 = 0;
                  *(_OWORD *)(v222 + 8) = 0;
                  *(_DWORD *)(v222 + 24) = 0;
                  *(_QWORD *)(v222 + 32) = 0;
                  ++v130[1];
                  v223 = *(_WORD **)v222;
                  if ( *(_QWORD *)(v222 + 16) <= 2u )
                  {
                    v266 = qvector_reserve(v222, (__int64)v223, 3, 1);
                    *(_QWORD *)v222 = v266;
                    v223 = (_WORD *)v266;
                  }
                  *(_QWORD *)(v222 + 8) = 3;
                  v137 = (_QWORD *)(v222 + 24);
                  *v223 = 24933;
                  *(_BYTE *)(*(v137 - 3) + 2LL) = 0;
                }
                if ( *(_DWORD *)v137 )
                  jvalue_t_clear();
                *(_DWORD *)v137 = 1;
                v137[1] = v132;
              }
            }
          }
          return 0;
        }
        v95 = *(_DWORD *)a3;
        if ( v95 > 0x2F )
        {
          v114 = *(__int64 ***)(a3 + 8);
          v115 = v114 + 1;
          *(_QWORD *)(a3 + 8) = v114 + 1;
          v98 = *v114;
        }
        else
        {
          v96 = *(_QWORD *)(a3 + 16);
          v97 = v95 + 8;
          *(_DWORD *)a3 = v97;
          v98 = *(__int64 **)(v96 + v95);
          if ( (unsigned int)v97 <= 0x2F )
          {
            v99 = v95 + 16;
            *(_DWORD *)a3 = v99;
            v291 = *(__m128i **)(v96 + v97);
            if ( (unsigned int)v99 <= 0x2F )
            {
              v100 = (_QWORD *)(v99 + v96);
              *(_DWORD *)a3 = v95 + 24;
              goto LABEL_117;
            }
            v100 = *(_QWORD **)(a3 + 8);
LABEL_135:
            *(_QWORD *)(a3 + 8) = v100 + 1;
LABEL_117:
            v292 = (_QWORD *)*v100;
            v101 = (__int64 *)v292[4];
            if ( !v101 )
            {
LABEL_161:
              v104 = *(_QWORD *)(v287 + 16);
              goto LABEL_126;
            }
            v102 = *v101;
            v103 = *v101 + 16 * v101[1];
            v104 = *(_QWORD *)(v287 + 16);
            if ( v103 == *v101 )
            {
LABEL_126:
              if ( !v291 )
                return 0;
              v110 = *(_QWORD *)(v104 + 1008);
              v111 = *(__int64 **)(v110 + 40);
              v112 = &v111[*(_QWORD *)(v110 + 48)];
              if ( v111 == v112 )
                return 0;
              while ( 1 )
              {
                v113 = *v111;
                if ( *v111 )
                {
                  if ( *(__m128i **)(v113 + 8) == v291 || *(__m128i **)(v113 + 16) == v291 )
                    break;
                }
                if ( v112 == ++v111 )
                  return 0;
              }
              s1[0] = *(char **)(v113 + 44);
              v299.m128i_i64[0] = _mm_shuffle_epi32((__m128i)(unsigned __int64)s1[0], 225).m128i_u64[0];
              v176 = sub_38F260((_QWORD *)v113, &v299);
              if ( !v176 )
                return 0;
              v177 = v292[1];
              v291 = (__m128i *)(v177 + 24LL * v292[2]);
              if ( v291 == (__m128i *)v177 )
                return 0;
              v178 = _mm_loadl_epi64((const __m128i *)s1);
              v288 = (__m128i *)v177;
              LODWORD(p_src) = _mm_cvtsi128_si32(v178);
              LODWORD(v290) = _mm_cvtsi128_si32(_mm_shuffle_epi32(v178, 229));
              while ( 1 )
              {
                v179 = (char *)v288->m128i_i64[0];
                s1[0] = (char *)(v288->m128i_i64[0] + 8 * v288->m128i_i64[1]);
                if ( s1[0] != v179 )
                  break;
LABEL_257:
                v288 = (__m128i *)((char *)v288 + 24);
                if ( v291 == v288 )
                  return 0;
              }
              while ( 1 )
              {
                v180 = *(__int64 **)v179;
                v181 = **(_QWORD **)v179;
                v182 = *(_DWORD *)(v181 + 12);
                if ( v182 == (_DWORD)p_src )
                {
                  v183 = operator new(0x18u);
                  *(_QWORD *)v183 = v180;
                  *(_DWORD *)(v183 + 20) = 1;
                  *(_QWORD *)(v183 + 8) = 0x5400000001LL;
                  v289 = (char *)v183;
                  *(_DWORD *)(v183 + 16) = (_DWORD)v290;
                  v184 = v98[1];
                  v185 = *v98;
                  if ( v98[2] < (unsigned __int64)(v184 + 1) )
                  {
                    v191 = qvector_reserve((__int64)v98, v185, v184 + 1, 8);
                    *v98 = v191;
                    v185 = v191;
                    v184 = v98[1];
                  }
                  *(_QWORD *)(v185 + 8 * v184) = v289;
                  ++v98[1];
                  if ( v176[1] == *(_DWORD *)(v181 + 12) )
                    goto LABEL_254;
LABEL_249:
                  v179 += 8;
                  if ( s1[0] == v179 )
                    goto LABEL_257;
                }
                else
                {
                  if ( v176[1] != v182 )
                    goto LABEL_249;
LABEL_254:
                  v186 = operator new(0x18u);
                  v187 = *v176;
                  *(_QWORD *)v186 = v180;
                  *(_QWORD *)(v186 + 8) = 0x5400000001LL;
                  *(_DWORD *)(v186 + 16) = v187;
                  *(_DWORD *)(v186 + 20) = 1;
                  v188 = v98[1];
                  v189 = *v98;
                  if ( v98[2] < (unsigned __int64)(v188 + 1) )
                  {
                    v190 = qvector_reserve((__int64)v98, v189, v188 + 1, 8);
                    *v98 = v190;
                    v189 = v190;
                    v188 = v98[1];
                  }
                  *(_QWORD *)(v189 + 8 * v188) = v186;
                  v179 += 8;
                  ++v98[1];
                  if ( s1[0] == v179 )
                    goto LABEL_257;
                }
              }
            }
            while ( 1 )
            {
              if ( !*(_BYTE *)v102 )
              {
                v105 = *(_QWORD *)(v104 + 1008);
                v106 = *(_QWORD *)(v102 + 8);
                v107 = *(__int64 **)(v105 + 40);
                v108 = &v107[*(_QWORD *)(v105 + 48)];
                if ( v107 != v108 )
                  break;
              }
LABEL_125:
              v102 += 16;
              if ( v103 == v102 )
                goto LABEL_126;
            }
            while ( 1 )
            {
              v109 = *v107;
              if ( *v107 )
              {
                if ( v106 == *(_QWORD *)(v109 + 8) || v106 == *(_QWORD *)(v109 + 16) )
                  break;
              }
              if ( v108 == ++v107 )
                goto LABEL_125;
            }
            LODWORD(p_src) = callui(144, v291, &callui, v108, v104, a6, s1[0], s1[1], v285, p_src);
            src = nullptr;
            v297 = -1;
            memset(v296, 0, sizeof(v296));
            if ( (_DWORD)p_src == 46 )
            {
              v202 = (char *)v292[1];
              v289 = &v202[24 * v292[2]];
              if ( v202 != v289 )
              {
LABEL_269:
                s1[0] = v202;
                v288 = &v299;
                while ( 1 )
                {
                  v203 = *(_QWORD *)s1[0] + 8LL * *((_QWORD *)s1[0] + 1);
                  v122 = *(_QWORD ***)s1[0];
                  if ( v203 == *(_QWORD *)s1[0] )
                    goto LABEL_158;
                  while ( 1 )
                  {
                    v123 = (_DWORD **)*v122;
                    v204 = (_DWORD *)**v122;
                    if ( (_DWORD)p_src != 46 )
                    {
                      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v204 + 128LL))(v204);
                      if ( *(_QWORD *)v296 )
                        goto LABEL_275;
                      while ( 1 )
                      {
                        do
                        {
                          if ( (_QWORD **)v203 == ++v122 )
                            goto LABEL_158;
                          v123 = (_DWORD **)*v122;
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)**v122 + 128LL))(**v122);
                        }
                        while ( !*(_QWORD *)v296 );
LABEL_275:
                        if ( rangeset_t_find_range() )
                          goto LABEL_155;
                      }
                    }
                    if ( v204[3] != *(_DWORD *)(v109 + 44) )
                      break;
LABEL_155:
                    v124 = (__int64 *)operator new(0x18u);
                    *v124 = (__int64)v123;
                    v125 = v124;
                    v299.m128i_i64[0] = (__int64)v124;
                    v124[1] = 0x5200000000LL;
                    v124[2] = -1;
                    v126 = v98[1];
                    v127 = *v98;
                    if ( v98[2] < (unsigned __int64)(v126 + 1) )
                    {
                      v290 = v125;
                      v205 = qvector_reserve((__int64)v98, v127, v126 + 1, 8);
                      *v98 = v205;
                      v127 = v205;
                      v125 = v290;
                      v126 = v98[1];
                    }
                    ++v122;
                    *(_QWORD *)(v127 + 8 * v126) = v125;
                    ++v98[1];
                    if ( (_QWORD **)v203 == v122 )
                      goto LABEL_158;
                  }
                  while ( (_QWORD **)v203 != ++v122 )
                  {
                    v123 = (_DWORD **)*v122;
                    if ( *(_DWORD *)(**v122 + 12LL) == *(_DWORD *)(v109 + 44) )
                      goto LABEL_155;
                  }
LABEL_158:
                  s1[0] += 24;
                  if ( v289 == s1[0] )
                    goto LABEL_159;
                }
              }
              goto LABEL_161;
            }
            v193 = *(int *)(v109 + 44);
            v194 = *(_QWORD *)(v109 + 32);
            v195 = *(unsigned int *)(v109 + 44);
            v196 = (char *)sub_38C6C0(v194, v195, v192);
            if ( !v196 )
            {
              if ( v193 >= *(_QWORD *)(v194 + 136)
                || (v299.m128i_i64[0] = (__int64)off_4E6AF0,
                    v299.m128i_i64[1] = 0,
                    v195 = *(_QWORD *)(32 * v193 + *(_QWORD *)(v194 + 128)),
                    sub_38A4F0(v194, (char *)v195, 0, (__int64)&v299, 0.0),
                    (v196 = (char *)v299.m128i_i64[1]) == nullptr) )
              {
                *(_QWORD *)&v296[16] = 0;
                v199 = (char *)sub_258020(v194);
                v198 = nullptr;
LABEL_281:
                if ( *(_QWORD *)v199 )
                {
                  v206 = 24;
                  v207 = (_BYTE *)(**(_QWORD **)v199 & 0xFFFFFFFFFFFFFFFCLL);
                  v208 = v207;
                  if ( !v207 )
                    goto LABEL_307;
                  if ( (*v207 & 2) == 0 )
                  {
                    v209 = v198 == &byte_1;
                    LOBYTE(s1[0]) = v198 == nullptr;
                    while ( 1 )
                    {
                      v210 = (char *)v208[3];
                      v206 = (__int64)(v208 + 3);
                      if ( v210 == v198 )
                      {
LABEL_306:
                        if ( *(_QWORD **)v199 != v208 )
                        {
LABEL_307:
                          v216 = *(_QWORD *)(v206 + 16);
                          v217 = nullptr;
                          if ( v216 )
                          {
                            s1[0] = (char *)v206;
                            v217 = (void *)qalloc_or_throw(16 * v216, v195, (__int64)v207, (__int64)v198);
                            memcpy(v217, *((const void **)s1[0] + 1), 16 * v216);
                          }
                          src = v217;
                          *(_QWORD *)&v296[16] = 0;
                          *(__m128i *)v296 = _mm_unpacklo_epi64((__m128i)v216, (__m128i)v216);
                        }
                        goto LABEL_268;
                      }
                      if ( !v210 || v209 )
                        break;
                      v290 = v208 + 3;
                      if ( v210 != &byte_1 && !LOBYTE(s1[0]) )
                      {
                        v195 = (__int64)v210;
                        v289 = v199;
                        v288 = (__m128i *)v198;
                        v211 = sub_2596A0((__int64)v198, (__int64)v210);
                        v198 = (char *)v288;
                        v199 = v289;
                        v206 = (__int64)v290;
                        if ( !(v211 ? v211 >> 31 : v288->m128i_i64[0] < *(_QWORD *)v210) )
                        {
                          v213 = (char *)*v290;
                          if ( (__m128i *)*v290 == v288 || v213 == &byte_1 )
                            goto LABEL_306;
                          if ( v213 )
                          {
                            v195 = (__int64)v288;
                            v214 = sub_2596A0(*v290, (__int64)v288);
                            v198 = (char *)v288;
                            v199 = v289;
                            v206 = (__int64)v290;
                            if ( v214 )
                              v215 = v214 >> 31;
                            else
                              LOBYTE(v215) = *(_QWORD *)v213 < v288->m128i_i64[0];
                            if ( !(_BYTE)v215 )
                              goto LABEL_306;
                          }
                          goto LABEL_374;
                        }
                      }
                      v208 = (_QWORD *)v208[1];
LABEL_294:
                      if ( (*(_BYTE *)v208 & 2) != 0 )
                        goto LABEL_268;
                    }
                    if ( v210 == &byte_1 || LOBYTE(s1[0]) )
                      goto LABEL_306;
LABEL_374:
                    v208 = (_QWORD *)v208[2];
                    goto LABEL_294;
                  }
                }
LABEL_268:
                v202 = (char *)v292[1];
                v289 = &v202[24 * v292[2]];
                if ( v289 != v202 )
                  goto LABEL_269;
LABEL_159:
                if ( src )
                {
                  *(_QWORD *)v296 = 0;
                  qfree((__int64)src);
                }
                goto LABEL_161;
              }
              if ( *(int *)(v299.m128i_i64[1] + 8) <= 69 )
              {
                v195 = v299.m128i_i64[1];
                v196 = (char *)sub_2573F0(v194, v299.m128i_i64[1]);
              }
            }
            s1[0] = v196;
            *(_QWORD *)&v296[16] = 0;
            v197 = sub_258020(v194);
            v198 = s1[0];
            v199 = (char *)v197;
            if ( s1[0] > &byte_1 )
            {
              v288 = (__m128i *)v197;
              v195 = (__int64)&v299;
              v299.m128i_i64[0] = *(_QWORD *)s1[0];
              v299.m128i_i32[2] = *((_DWORD *)s1[0] + 2);
              v200 = sub_257EA0(v194, (unsigned __int64 *)&v299);
              merge_state = get_merge_state();
              v198 = s1[0];
              v199 = (char *)v288;
              if ( (merge_state & 3) == 0 && (v200 & 1) != 0 )
              {
                v299.m128i_i32[2] = 0;
                v300 = 0;
                v299.m128i_i64[0] = (__int64)&off_4E6B10;
                *((_QWORD *)&v301[2] + 1) = &src;
                v302 = v288;
                memset(v301, 0, 40);
                sub_255A80(v299.m128i_i64, (__int64)s1[0], 0);
                v299.m128i_i64[0] = (__int64)off_4DBCF8;
                if ( *(_QWORD *)&v301[1] )
                {
                  *((_QWORD *)&v301[1] + 1) = 0;
                  qfree(*(__int64 *)&v301[1]);
                }
                if ( v300 )
                {
                  *(_QWORD *)&v301[0] = 0;
                  qfree(v300);
                }
                goto LABEL_268;
              }
            }
            goto LABEL_281;
          }
          v115 = *(_QWORD **)(a3 + 8);
        }
        v100 = v115 + 1;
        *(_QWORD *)(a3 + 8) = v115 + 1;
        v291 = (__m128i *)*v115;
        goto LABEL_135;
      }
      if ( a2 == 136 )
      {
        sub_3C22A0(v7, 0);
        return 0;
      }
      if ( a2 != 138 )
        return 0;
      v18 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v20 = *(_QWORD *)(a3 + 8);
        v121 = (__int64 *)(v20 + 8);
        *(_QWORD *)(a3 + 8) = v20 + 8;
        v21 = *(_QWORD *)v20;
      }
      else
      {
        v19 = *(_QWORD *)(a3 + 16);
        a4 = (unsigned __int64 *)(v18 + 8);
        v20 = v18;
        *(_DWORD *)a3 = (_DWORD)a4;
        v21 = *(_QWORD *)(v19 + v18);
        if ( (unsigned int)a4 <= 0x2F )
        {
          v20 = v18 + 16;
          *(_DWORD *)a3 = v20;
          v22 = *(unsigned __int64 *)((char *)a4 + v19);
          if ( (unsigned int)v20 <= 0x2F )
          {
            v23 = (__int64 *)(v20 + v19);
            *(_DWORD *)a3 = v18 + 24;
LABEL_25:
            if ( !v21
              || (v24 = *(_QWORD *)(*(_QWORD *)(v287 + 16) + 1008LL),
                  v25 = *(unsigned __int64 **)(v24 + 40),
                  v20 = *(_QWORD *)(v24 + 48),
                  a4 = &v25[v20],
                  v25 == a4) )
            {
LABEL_31:
              v26 = *v23;
              v27 = callui(144, v21, v20, a4, a5, a6, s1[0], s1[1], v285, p_src);
              if ( v27 == 10 || v27 == 58 && *(_BYTE *)(*(_QWORD *)(v26 + 208) + 31LL) != 12 )
                callui(131, v21, v22, "hx:JumpGlobalXref", "Compact types...", 0, s1[0], s1[1], v285, p_src);
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
                if ( a4 == ++v25 )
                  goto LABEL_31;
              }
              if ( *(_QWORD *)(v20 + 8) == v21 )
                sub_3C0FD0(
                  v21,
                  v22,
                  v20,
                  (_DWORD)a4,
                  a5,
                  a6,
                  (__int64)s1[0],
                  (__int64)s1[1],
                  v285,
                  (_DWORD)p_src,
                  v287,
                  (_DWORD)v288,
                  (_DWORD)v289,
                  (_DWORD)v290,
                  (_DWORD)v291,
                  (char)v292,
                  (_DWORD)v293,
                  (_DWORD)v294,
                  (_DWORD)src,
                  *(_DWORD *)v296,
                  *(_DWORD *)&v296[8],
                  *(_DWORD *)&v296[16],
                  v297,
                  v298,
                  v299.m128i_i32[0],
                  v299.m128i_i32[2],
                  v300,
                  v301[0],
                  DWORD2(v301[0]),
                  v301[1],
                  DWORD2(v301[1]),
                  v301[2],
                  DWORD2(v301[2]),
                  (_DWORD)v302,
                  v303);
            }
            return 0;
          }
          v23 = *(__int64 **)(a3 + 8);
LABEL_150:
          *(_QWORD *)(a3 + 8) = v23 + 1;
          goto LABEL_25;
        }
        v121 = *(__int64 **)(a3 + 8);
      }
      v23 = v121 + 1;
      *(_QWORD *)(a3 + 8) = v121 + 1;
      v22 = *v121;
      goto LABEL_150;
    }
    v77 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 > 0x2Fu )
    {
      v116 = *(const char ***)(a3 + 8);
      v80 = (__int64 **)(v116 + 1);
      *(_QWORD *)(a3 + 8) = v116 + 1;
      if ( strncmp(*v116, "Pseudocode-", 0xBu) )
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
        func = (void *)get_func();
        if ( !func )
          return 0;
        src = func;
        v299.m128i_i64[0] = 0;
        v88 = *(_QWORD *)(v287 + 16);
        v299.m128i_i64[1] = -1;
        v300 = 0;
        memset(v296, 0, sizeof(v296));
        v301[0] = 0;
        v89 = *(_QWORD *)(v88 + 112);
        s1[0] = (char *)&v293;
        p_src = (__int64 *)&src;
        sub_14CDC0((__int64 *)&v293, v89, &src, &v299, 8);
        if ( *(_QWORD *)v296 )
        {
          *(_QWORD *)&v296[8] = 0;
          qfree(*(__int64 *)v296);
        }
        if ( v293 )
        {
          if ( (get_merge_state() & 3) == 0 )
            goto LABEL_322;
          v91 = v81[1];
          if ( !v91 )
            goto LABEL_322;
          v92 = *v81;
          v93 = 0;
          while ( !*(_QWORD *)(v92 + 8) || strcmp(*(const char **)v92, "merge_kind") )
          {
            ++v93;
            v92 += 40;
            if ( v91 == v93 )
              goto LABEL_322;
          }
          if ( *(_DWORD *)(v92 + 24) != 1 || (unsigned __int8)sub_2BB0E0(*(unsigned int *)(v92 + 32)) )
          {
LABEL_322:
            v226 = sub_387360(*(_QWORD *)(*(_QWORD *)(v287 + 16) + 1008LL));
            src = nullptr;
            v227 = v226;
            *(_OWORD *)v296 = 0;
            sub_390740(p_src, v226, "Pseudocode-");
            v228 = operator new(0xA8u);
            v229 = v293;
            v230 = v228;
            v231 = *(_QWORD *)v296;
            v294 = v293;
            if ( v293 )
            {
              ++*((_DWORD *)v293 + 26);
              if ( v231 )
                v232 = (__int64 *)src;
              else
                v232 = (__int64 *)::s1;
              v233 = *(_QWORD *)(v287 + 16);
              *(_DWORD *)(v230 + 4) = v227;
              *(_DWORD *)v230 = 0;
              *(_OWORD *)(v230 + 8) = 0;
              *(__m128i *)(v230 + 24) = _mm_unpacklo_epi64(
                                          _mm_loadl_epi64((const __m128i *)(v229 + 1)),
                                          (__m128i)(unsigned __int64)v229);
              ++*((_DWORD *)v229 + 26);
            }
            else
            {
              v277 = v287;
              if ( *(_QWORD *)v296 )
              {
                *(_DWORD *)(v230 + 4) = v227;
                *(_DWORD *)v230 = 0;
                v232 = (__int64 *)src;
              }
              else
              {
                *(_DWORD *)(v230 + 4) = v227;
                *(_DWORD *)v230 = 0;
                v232 = (__int64 *)::s1;
              }
              v233 = *(_QWORD *)(v277 + 16);
              *(_OWORD *)(v230 + 8) = 0;
              *(_OWORD *)(v230 + 24) = 0;
            }
            *(_DWORD *)v230 &= ~2u;
            *(_QWORD *)(v230 + 52) = 0;
            *(_QWORD *)(v230 + 44) = 0xFFFFFFFFLL;
            *(_DWORD *)(v230 + 80) = 0;
            *(_DWORD *)(v230 + 104) = 0;
            *(_QWORD *)(v230 + 128) = v233;
            *(_QWORD *)(v230 + 136) = 0;
            *(_QWORD *)(v230 + 160) = 0;
            *(_OWORD *)(v230 + 144) = 0;
            v234 = *(_QWORD **)(v233 + 1008);
            v235 = v234[6];
            if ( v234[7] < (unsigned __int64)(v235 + 1) )
            {
              v278 = v234[5];
              p_src = v232;
              v234[5] = qvector_reserve((__int64)(v234 + 5), v278, v235 + 1, 8);
              v232 = p_src;
              v235 = v234[6];
            }
            *(_QWORD *)(v234[5] + 8 * v235) = v230;
            ++v234[6];
            sub_394550((_QWORD *)v230, (__int64)v232, 202, v86);
            if ( v229 )
            {
              v163 = (*((_DWORD *)v229 + 26))-- == 1;
              if ( v163 )
              {
                sub_258970(v229);
                if ( v229[23] )
                {
                  v240 = v229[24];
                  if ( v240 )
                  {
                    v241 = v229[23];
                    for ( i = 0; i != v240; ++i )
                    {
                      v243 = (__int64 *)(v241 + 24 * i);
                      v244 = *v243;
                      if ( *v243 )
                      {
                        v243[1] = 0;
                        qfree(v244);
                        v241 = v229[23];
                      }
                    }
                  }
                  else
                  {
                    v241 = v229[23];
                  }
                  v229[24] = 0;
                  qfree(v241);
                }
                v245 = v229[20];
                if ( v245 )
                {
                  v229[21] = 0;
                  qfree(v245);
                }
                if ( v229[16] )
                {
                  v246 = v229[17];
                  if ( v246 )
                  {
                    v247 = v229[16];
                    for ( j = 0; j != v246; ++j )
                    {
                      v249 = (__int64 *)(v247 + 32 * j);
                      v250 = *v249;
                      if ( *v249 )
                      {
                        v249[1] = 0;
                        qfree(v250);
                        v247 = v229[16];
                      }
                    }
                  }
                  else
                  {
                    v247 = v229[16];
                  }
                  v229[17] = 0;
                  qfree(v247);
                }
                sub_255050((__int64)(v229 + 2));
                j__qfree((__int64)v229);
              }
            }
            *(_DWORD *)v230 |= 1u;
            sub_384070(v230, v293, v236, v237, v238, v239);
            sub_33E140(*(_QWORD *)(v287 + 16), 0x64u, v230);
            result = *(_QWORD *)(v230 + 16);
            if ( src )
            {
              s1[0] = *(char **)(v230 + 16);
              *(_QWORD *)v296 = 0;
              qfree((__int64)src);
              result = (__int64)s1[0];
            }
            v251 = v293;
            if ( v293 )
            {
              v163 = (*((_DWORD *)v293 + 26))-- == 1;
              if ( v163 )
              {
                s1[0] = (char *)result;
                sub_258970(v251);
                v252 = s1[0];
                if ( v251[23] )
                {
                  v253 = v251[24];
                  if ( v253 )
                  {
                    v254 = v251[23];
                    v255 = 0;
                    v256 = s1[0];
                    do
                    {
                      v257 = (__int64 *)(v254 + 24 * v255);
                      v258 = *v257;
                      if ( *v257 )
                      {
                        v257[1] = 0;
                        qfree(v258);
                        v254 = v251[23];
                      }
                      ++v255;
                    }
                    while ( v253 != v255 );
                    v252 = v256;
                  }
                  else
                  {
                    v254 = v251[23];
                  }
                  s1[0] = v252;
                  v251[24] = 0;
                  qfree(v254);
                  v252 = s1[0];
                }
                v259 = v251[20];
                if ( v259 )
                {
                  s1[0] = v252;
                  v251[21] = 0;
                  qfree(v259);
                  v252 = s1[0];
                }
                if ( v251[16] )
                {
                  v260 = v251[17];
                  if ( v260 )
                  {
                    v261 = v251[16];
                    v262 = 0;
                    v263 = v252;
                    do
                    {
                      v264 = (__int64 *)(v261 + 32 * v262);
                      v265 = *v264;
                      if ( *v264 )
                      {
                        v264[1] = 0;
                        qfree(v265);
                        v261 = v251[16];
                      }
                      ++v262;
                    }
                    while ( v260 != v262 );
                    v252 = v263;
                  }
                  else
                  {
                    v261 = v251[16];
                  }
                  s1[0] = v252;
                  v251[17] = 0;
                  qfree(v261);
                  v252 = s1[0];
                }
                s1[0] = v252;
                sub_255050((__int64)(v251 + 2));
                j__qfree((__int64)v251);
                result = (__int64)s1[0];
              }
            }
            if ( v300 )
            {
              s1[0] = (char *)result;
              *(_QWORD *)&v301[0] = 0;
              qfree(v300);
              return (__int64)s1[0];
            }
            return result;
          }
          sub_140140((_QWORD *)s1[0], (__int64)"merge_kind");
          v94 = v300;
          if ( !v300 )
            return 0;
        }
        else
        {
          sub_3310F0((__int64)p_src, (__int64)&v299, v90);
          sub_6D0A0((__int64)"%a: %s\n", 0.0, (const char *)v299.m128i_i64[1]);
          if ( src )
          {
            *(_QWORD *)v296 = 0;
            qfree((__int64)src);
          }
          v269 = v293;
          if ( v293 )
          {
            v163 = (*((_DWORD *)v293 + 26))-- == 1;
            if ( v163 )
            {
              sub_258970(v269);
              if ( v269[23] )
              {
                v270 = v269[24];
                if ( v270 )
                {
                  v271 = v269[23];
                  for ( k = 0; k != v270; ++k )
                  {
                    v273 = (__int64 *)(v271 + 24 * k);
                    if ( *v273 )
                    {
                      v274 = *v273;
                      v273[1] = 0;
                      qfree(v274);
                      v271 = v269[23];
                    }
                  }
                }
                else
                {
                  v271 = v269[23];
                }
                v269[24] = 0;
                qfree(v271);
              }
              v279 = v269[20];
              if ( v279 )
              {
                v269[21] = 0;
                qfree(v279);
              }
              if ( v269[16] )
              {
                v280 = v269[17];
                if ( v280 )
                {
                  v275 = v269[16];
                  for ( m = 0; m != v280; ++m )
                  {
                    v282 = (__int64 *)(v275 + 32 * m);
                    if ( *v282 )
                    {
                      v283 = *v282;
                      v282[1] = 0;
                      qfree(v283);
                      v275 = v269[16];
                    }
                  }
                }
                else
                {
                  v275 = v269[16];
                }
                v269[17] = 0;
                qfree(v275);
              }
              sub_255050((__int64)(v269 + 2));
              j__qfree((__int64)v269);
            }
          }
          v94 = v300;
          if ( !v300 )
            return 0;
        }
        *(_QWORD *)&v301[0] = 0;
        qfree(v94);
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
        v120 = *(_QWORD **)(a3 + 8);
        v31 = (_QWORD **)(v120 + 1);
        *(_QWORD *)(a3 + 8) = v120 + 1;
        if ( *v120 == 0xDEC0DE00000004LL )
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
              **v31 = sub_34A920;
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
      v61 = *(_QWORD *)(*(_QWORD *)(v287 + 16) + 1008LL);
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
          sub_3A08D0(v9, v39, v37, v38, a5, a6);
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
      v54 = *(_QWORD *)(v287 + 16);
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
      sub_33E140(v54, 0x67u, *v56);
      v160 = *(_QWORD *)(v58 + 8);
      if ( v160 == v53 )
      {
        *(_OWORD *)(v58 + 8) = 0;
      }
      else if ( v160 )
      {
        return 0;
      }
      sub_38F320(v58);
      sub_389D00(v58);
      clear_tinfo_t();
      v161 = *(_QWORD *)(v58 + 136);
      if ( v161 )
      {
        *(_QWORD *)(v58 + 144) = 0;
        qfree(v161);
      }
      v162 = *(_QWORD *)(v58 + 32);
      if ( v162 )
      {
        v163 = (*(_DWORD *)(v162 + 104))-- == 1;
        if ( v163 )
        {
          v164 = *(_QWORD **)(v58 + 32);
          if ( v164 )
          {
            sub_258970(*(__int64 **)(v58 + 32));
            if ( v164[23] )
            {
              v165 = v164[24];
              if ( v165 )
              {
                v166 = v164[23];
                for ( n = 0; n != v165; ++n )
                {
                  v168 = (__int64 *)(v166 + 24 * n);
                  v169 = *v168;
                  if ( *v168 )
                  {
                    v168[1] = 0;
                    qfree(v169);
                    v166 = v164[23];
                  }
                }
              }
              else
              {
                v166 = v164[23];
              }
              v164[24] = 0;
              qfree(v166);
            }
            v170 = v164[20];
            if ( v170 )
            {
              v164[21] = 0;
              qfree(v170);
            }
            if ( v164[16] )
            {
              v171 = v164[17];
              if ( v171 )
              {
                v172 = v164[16];
                for ( ii = 0; ii != v171; ++ii )
                {
                  v174 = (__int64 *)(v172 + 32 * ii);
                  v175 = *v174;
                  if ( *v174 )
                  {
                    v174[1] = 0;
                    qfree(v175);
                    v172 = v164[16];
                  }
                }
              }
              else
              {
                v172 = v164[16];
              }
              v164[17] = 0;
              qfree(v172);
            }
            sub_255050((__int64)(v164 + 2));
            j__qfree((__int64)v164);
          }
        }
      }
      operator delete((void *)v58, 0xA8u);
      return 0;
    case 'I':
      v40 = *(_DWORD *)a3;
      if ( *(_DWORD *)a3 > 0x2Fu )
      {
        v117 = *(_QWORD ***)(a3 + 8);
        v118 = (__int64 *)(v117 + 1);
        *(_QWORD *)(a3 + 8) = v117 + 1;
        v43 = (const char **)*v117;
LABEL_140:
        v119 = v118 + 1;
        *(_QWORD *)(a3 + 8) = v118 + 1;
        v44 = *v118;
LABEL_141:
        v46 = (int **)(v119 + 1);
        goto LABEL_142;
      }
      v41 = *(_QWORD *)(a3 + 16);
      v42 = v40 + 8;
      *(_DWORD *)a3 = v42;
      v43 = *(const char ***)(v41 + v40);
      if ( (unsigned int)v42 > 0x2F )
      {
        v118 = *(__int64 **)(a3 + 8);
        goto LABEL_140;
      }
      *(_DWORD *)a3 = v40 + 16;
      v44 = *(_QWORD *)(v41 + v42);
      if ( v40 + 16 > 0x2F )
      {
        v119 = *(_QWORD **)(a3 + 8);
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
      v47 = *(_QWORD *)(*(_QWORD *)(v287 + 16) + 1008LL);
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
      v138 = *v46;
      v139 = (unsigned int)sub_38B490(*v48, 1);
      result = 0;
      if ( (_BYTE)v139 )
      {
        v141 = (size_t)v43[1];
        v142 = *v138;
        s1[0] = nullptr;
        if ( v141 )
        {
          v218 = (char *)qalloc_or_throw(v141, 1, v139, v140);
          v219 = *v43;
          s1[0] = v218;
          memcpy(v218, v219, v141);
        }
        result = sub_33E140(*(_QWORD *)(v287 + 16), 0x6Cu, v50, v43, v138);
        if ( result == 1 )
          goto LABEL_216;
        LOBYTE(p_src) = 0;
        if ( *v138 == v142 )
        {
          v220 = ::s1;
          if ( v43[1] )
            v220 = *v43;
          v221 = ::s1;
          if ( v141 )
            v221 = s1[0];
          LOBYTE(p_src) = strcmp(v221, v220) == 0;
        }
        v299.m128i_i64[0] = v50;
        *(_OWORD *)v296 = 0;
        src = nullptr;
        v299.m128i_i64[1] = v50 + 80;
        LODWORD(v300) = 0;
        memset(v301, 0, sizeof(v301));
        v302 = nullptr;
        v303 = 0;
        if ( (unsigned __int8)sub_391C50(&v299, (__int64 *)&src, (__m128)0LL, v143, v144, v145, v146) != 1
          && (_BYTE)p_src )
        {
LABEL_207:
          v299.m128i_i64[0] = 0;
          if ( v302 )
          {
            *(_QWORD *)&v303 = 0;
            qfree((__int64)v302);
          }
          if ( *((_QWORD *)&v301[1] + 1) )
          {
            *(_QWORD *)&v301[2] = 0;
            qfree(*((__int64 *)&v301[1] + 1));
          }
          if ( *(_QWORD *)&v301[0] )
          {
            *((_QWORD *)&v301[0] + 1) = 0;
            qfree(*(__int64 *)&v301[0]);
          }
          if ( src )
          {
            *(_QWORD *)v296 = 0;
            qfree((__int64)src);
          }
          result = 0;
LABEL_216:
          v159 = s1[0];
          if ( s1[0] )
          {
            s1[0] = (char *)result;
            qfree((__int64)v159);
            return (__int64)s1[0];
          }
          return result;
        }
        v147 = (unsigned __int64)v43[1];
        if ( v147 > 1 )
        {
          v148 = (__int64)*v43;
          if ( (*v43)[v147 - 2] != 10 )
          {
            if ( (unsigned __int64)v43[2] < v147 + 1 )
            {
              v268 = qvector_reserve((__int64)v43, v148, v147 + 1, 1);
              *v43 = (const char *)v268;
              v148 = v268;
            }
            v43[1] = (const char *)(v147 + 1);
            *(_BYTE *)(v148 + v147 - 1) = 10;
            (*v43)[v147] = 0;
          }
        }
        v149 = *(_QWORD *)v296;
        if ( *(_QWORD *)v296 )
        {
          v150 = *(_QWORD *)v296 - 1LL;
          if ( *(_QWORD *)v296 != 1 )
          {
            v151 = v43[1];
            v152 = (__int64 *)(*(_QWORD *)v296 - 1LL);
            if ( v151 )
            {
              --v151;
              v152 = (__int64 *)&v151[v150];
              v149 = (unsigned __int64)&v151[*(_QWORD *)v296];
            }
            v153 = (__int64)*v43;
            if ( (unsigned __int64)v43[2] < v149 )
            {
              p_src = v152;
              v276 = qvector_reserve((__int64)v43, v153, v149, 1);
              *v43 = (const char *)v276;
              v152 = p_src;
              v153 = v276;
            }
            v43[1] = (const char *)v149;
            *((_BYTE *)v152 + v153) = 0;
            memcpy((void *)&(*v43)[(_QWORD)v151], src, v150);
          }
        }
        *v138 += v300;
        v154 = v43[1];
        v155 = (__int64)*v43;
        if ( v154 )
        {
          if ( v154 != &byte_1 && v154[v155 - 2] == 10 )
          {
LABEL_311:
            v157 = (__int64)(v154 + 1);
            v158 = (unsigned __int64)(v154 + 2);
            --v154;
LABEL_204:
            if ( (unsigned __int64)v43[2] < v158 )
            {
              v224 = qvector_reserve((__int64)v43, v155, v158, 1);
              *v43 = (const char *)v224;
              v155 = v224;
            }
            v43[1] = (const char *)v158;
            *(_BYTE *)(v155 + v157) = 0;
            *(_WORD *)&(*v43)[(_QWORD)v154] = 32257;
            ++*v138;
            goto LABEL_207;
          }
          v156 = (unsigned __int64)(v154-- + 1);
        }
        else
        {
          v156 = 2;
        }
        if ( (unsigned __int64)v43[2] < v156 )
        {
          v225 = qvector_reserve((__int64)v43, v155, v156, 1);
          *v43 = (const char *)v225;
          v155 = v225;
        }
        v43[1] = (const char *)v156;
        v157 = 2;
        v158 = 3;
        v154[v155] = 10;
        v154[(_QWORD)*v43 + 1] = 0;
        v154 = v43[1];
        v155 = (__int64)*v43;
        if ( !v154 )
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
      sub_3410F0();
      v36 = callui(61, a2, &callui, v33, v34, v35, s1[0], s1[1], v285, p_src);
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
      v74 = sub_389C40(*(_QWORD *)(v287 + 16), a2);
      v75 = v74;
      if ( !v74 )
        return 0;
      sub_38B490(v74, 0);
      if ( !strcmp(v73, "JumpExplored") )
        return (unsigned __int8)callui(100, "SelectAll", 0, 0, &callui, v76, s1[0], s1[1], v285, p_src);
      if ( strcmp(v73, "JumpEnter") )
        return 0;
      sub_39A7C0(v75, 0, 0);
      return 1;
    case 'Q':
      v63 = *(_DWORD *)(v7 + 1416);
      if ( (v63 & 0x10) != 0 )
      {
        v64 = v287;
        *(_DWORD *)(v7 + 1416) = v63 & 0xFFFFFFEF;
        sub_32B210(*(_QWORD *)(v64 + 16));
        sub_329DA0(*(_QWORD *)(v64 + 16), 0);
        sub_140C90(*(_QWORD *)(v64 + 16), 1);
        sub_3E3130(*(_QWORD *)(v64 + 16));
        if ( sub_389C40(*(_QWORD *)(v64 + 16), 1) )
        {
          v68 = *(_QWORD *)(*(_QWORD *)(v64 + 16) + 1008LL);
          v69 = *(__int64 **)(v68 + 40);
          for ( jj = &v69[*(_QWORD *)(v68 + 48)]; jj != v69; ++v69 )
          {
            if ( *v69 )
              sub_395A90(*v69, 0, a7, v65, v66, v67);
          }
        }
      }
      return 0;
    default:
      return 0;
  }
}
