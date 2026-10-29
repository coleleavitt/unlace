__int64 __fastcall sub_1CC2B70(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        unsigned __int8 a5,
        double a6,
        __m128 a7)
{
  int v7; // eax
  _BYTE *v8; // rax
  _QWORD *v9; // rdi
  __int64 *v10; // rbp
  void **v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int8 v13; // al
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // r12d
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned __int8 *v26; // r9
  _QWORD *v27; // r8
  int v28; // esi
  __int64 v29; // rax
  unsigned __int8 **v30; // rdi
  unsigned __int8 **v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  unsigned __int8 *v35; // rbx
  unsigned __int8 *v36; // r14
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rax
  _QWORD *v39; // rbp
  _QWORD *v40; // r12
  _QWORD *v41; // rdi
  void *v42; // rdi
  void **v43; // r12
  void **v44; // rbp
  __int64 *v45; // rbx
  _QWORD *v46; // r12
  __int64 v47; // rsi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r12
  unsigned __int64 *v54; // rax
  unsigned __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // rbx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  unsigned __int8 *v65; // rsi
  bool v66; // zf
  __int64 v67; // rax
  _BYTE *v68; // rax
  unsigned int *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  int v73; // r12d
  __int64 v74; // r8
  unsigned int v75; // esi
  _QWORD *v76; // r9
  int v77; // edx
  unsigned __int8 *v78; // rdi
  __int64 v79; // rcx
  _QWORD *v80; // rax
  unsigned __int8 *v81; // rsi
  __int64 v82; // rdx
  int v83; // r12d
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __m128 *v87; // rbx
  unsigned __int64 v88; // rax
  unsigned __int64 v89; // rdx
  unsigned int v90; // esi
  _BYTE *v91; // rbx
  __m128i *v92; // rcx
  int v93; // esi
  __int64 v94; // rdx
  __m128i *v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rdx
  __m128i v98; // xmm2
  __m128i v99; // xmm3
  unsigned __int8 *v100; // r15
  unsigned __int64 v101; // r12
  unsigned __int64 v102; // rax
  _QWORD *v103; // rbp
  _QWORD *v104; // r14
  _QWORD *v105; // rdi
  void *v106; // rdi
  void **v107; // rbp
  void **v108; // r14
  __int64 v109; // rdx
  unsigned int v110; // eax
  __int64 v111; // rcx
  unsigned int v112; // edi
  unsigned __int64 v113; // rdx
  __int64 v114; // rbx
  void *v115; // rdi
  __int64 v116; // rax
  unsigned __int8 *v117; // rdi
  __int64 v118; // rsi
  unsigned __int64 v119; // rsi
  __int64 v120; // rdx
  __int64 v121; // r15
  __int64 v122; // rdx
  __int64 v123; // rbx
  unsigned int v124; // ebp
  _QWORD *v125; // rbx
  __int64 v126; // rsi
  _BYTE *v127; // r12
  _QWORD *v128; // rdi
  unsigned int v130; // eax
  unsigned __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  void *v134; // rdi
  __int64 v135; // rbx
  unsigned __int64 v136; // rbp
  int v137; // eax
  char *v138; // rdi
  unsigned __int64 v139; // rsi
  unsigned int v140; // r12d
  __int64 v141; // r15
  unsigned __int64 v142; // rax
  __int64 v143; // rsi
  __int64 v144; // r15
  __int64 *v145; // rax
  signed __int64 v146; // r14
  __int64 v147; // rax
  __int64 v148; // r12
  __int64 *v149; // rbx
  unsigned __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rax
  _QWORD *v155; // rbp
  _QWORD *i; // rbx
  char *v157; // r14
  unsigned __int8 v158; // al
  int v159; // ecx
  char v160; // si
  __int64 v161; // rax
  int v162; // r10d
  unsigned __int8 **v163; // r12
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
  __int64 v175; // rax
  _QWORD *v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // rbx
  __int64 v180; // r8
  __int64 v181; // r9
  __int64 v182; // rax
  _QWORD *v183; // rax
  unsigned __int64 v184; // rdx
  __m128i *v185; // rdi
  int v186; // esi
  __m128i v187; // xmm6
  int v188; // r10d
  _QWORD *v189; // r14
  __int64 *v192; // [rsp+10h] [rbp-1208h]
  _BYTE *v193; // [rsp+10h] [rbp-1208h]
  __int64 v195; // [rsp+20h] [rbp-11F8h]
  __int64 v196; // [rsp+20h] [rbp-11F8h]
  int v197; // [rsp+28h] [rbp-11F0h]
  __int64 *v198; // [rsp+30h] [rbp-11E8h]
  int v199; // [rsp+30h] [rbp-11E8h]
  bool v202; // [rsp+77h] [rbp-11A1h] BYREF
  unsigned __int64 v203; // [rsp+78h] [rbp-11A0h] BYREF
  unsigned __int8 *v204; // [rsp+80h] [rbp-1198h] BYREF
  unsigned __int64 v205; // [rsp+88h] [rbp-1190h]
  __m128i v206; // [rsp+A0h] [rbp-1178h] BYREF
  __m128i v207; // [rsp+B0h] [rbp-1168h] BYREF
  __m128i v208; // [rsp+C0h] [rbp-1158h] BYREF
  __m128i v209; // [rsp+D0h] [rbp-1148h] BYREF
  __m128i v210; // [rsp+E0h] [rbp-1138h] BYREF
  __m128i v211; // [rsp+F0h] [rbp-1128h] BYREF
  __m128i v212; // [rsp+100h] [rbp-1118h] BYREF
  __m128i v213; // [rsp+110h] [rbp-1108h] BYREF
  __m128i v214[2]; // [rsp+120h] [rbp-10F8h] BYREF
  void *v215; // [rsp+140h] [rbp-10D8h] BYREF
  __int64 v216; // [rsp+148h] [rbp-10D0h]
  _BYTE v217[64]; // [rsp+150h] [rbp-10C8h] BYREF
  void *v218[2]; // [rsp+190h] [rbp-1088h] BYREF
  _BYTE v219[256]; // [rsp+1A0h] [rbp-1078h] BYREF
  __int64 v220; // [rsp+2A0h] [rbp-F78h]
  __m128 v221; // [rsp+2B0h] [rbp-F68h] BYREF
  __int64 v222; // [rsp+2C0h] [rbp-F58h]
  __int64 v223; // [rsp+2C8h] [rbp-F50h]
  unsigned __int8 *v224; // [rsp+2D0h] [rbp-F48h] BYREF
  __int64 v225; // [rsp+2D8h] [rbp-F40h]
  _BYTE v226[72]; // [rsp+2E0h] [rbp-F38h] BYREF
  char v227; // [rsp+328h] [rbp-EF0h]
  unsigned int v228; // [rsp+330h] [rbp-EE8h]
  char v229; // [rsp+334h] [rbp-EE4h]
  __int64 v230; // [rsp+360h] [rbp-EB8h]
  __int64 v231; // [rsp+368h] [rbp-EB0h]
  __int64 v232; // [rsp+370h] [rbp-EA8h]
  __int64 v233; // [rsp+380h] [rbp-E98h]
  __int64 v234; // [rsp+388h] [rbp-E90h]
  int v235; // [rsp+398h] [rbp-E80h]
  char v236; // [rsp+39Ch] [rbp-E7Ch]
  void *v237; // [rsp+3A0h] [rbp-E78h]
  __int64 v238; // [rsp+3A8h] [rbp-E70h]
  _QWORD v239[10]; // [rsp+3B0h] [rbp-E68h] BYREF
  void *v240; // [rsp+400h] [rbp-E18h]
  __int64 v241; // [rsp+408h] [rbp-E10h]
  _WORD v242[52]; // [rsp+410h] [rbp-E08h] BYREF
  void *ptr; // [rsp+478h] [rbp-DA0h]
  __int64 v244; // [rsp+480h] [rbp-D98h]
  _BYTE v245[40]; // [rsp+488h] [rbp-D90h] BYREF
  void *v246; // [rsp+4B0h] [rbp-D68h] BYREF
  __int64 v247; // [rsp+4B8h] [rbp-D60h]
  _BYTE v248[1024]; // [rsp+4C0h] [rbp-D58h] BYREF
  int v249; // [rsp+8C0h] [rbp-958h]
  char v250; // [rsp+8C4h] [rbp-954h]
  __int64 v251; // [rsp+8D0h] [rbp-948h] BYREF
  _QWORD *v252; // [rsp+8D8h] [rbp-940h] BYREF
  unsigned int v253; // [rsp+8E0h] [rbp-938h]
  _BYTE v254[64]; // [rsp+11D8h] [rbp-40h] BYREF

  v215 = v217;
  v216 = 0x800000000LL;
  v7 = *(_DWORD *)(a2 + 24);
  v247 = 0x1000000000LL;
  v250 = 0;
  v251 = 1;
  v246 = v248;
  v249 = v7;
  v8 = &v252;
  do
  {
    *(_QWORD *)v8 = -4096;
    v8 += 288;
  }
  while ( v8 != v254 );
  v9 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v9 = (_QWORD *)*v9;
  v203 = sub_B8EAA0((__int64)v9);
  v10 = *(__int64 **)(a4 + 8);
  v192 = &v10[*(unsigned int *)(a4 + 16)];
  if ( v10 != v192 )
  {
    LODWORD(v11) = 0;
    if ( a3 )
      v11 = v218;
    v197 = (int)v11;
    while ( 1 )
    {
      v12 = *v10 & 0xFFFFFFFFFFFFFFF8LL;
      v13 = *(_BYTE *)(v12 + 28) & 0x7F;
      if ( (unsigned int)v13 - 53 <= 1 || ((v13 + 52) & 0x7Fu) <= 1 )
      {
        v12 = sub_B72ED0(*v10 & 0xFFFFFFFFFFFFFFF8LL);
        v13 = *(_BYTE *)(v12 + 28) & 0x7F;
      }
      if ( v13 != 71 )
        goto LABEL_61;
      v14 = (_QWORD *)(*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v12 + 16) & 4) != 0 )
        v14 = (_QWORD *)*v14;
      v15 = sub_B8EAA0((__int64)v14);
      if ( !(unsigned __int8)sub_B92160(v203, v15, v16, v17, v18, v19) )
        goto LABEL_61;
      v20 = a2;
      v21 = *(_QWORD *)(a2 + 48);
      v22 = v21;
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 <= 3
        && (*(_BYTE *)(a1[29] + 1) & 0x20) == 0
        && (*(_BYTE *)(a2 + 84) & 3) != 0
        && (*(_BYTE *)(a2 + 28) & 0x7D) != 0x24 )
      {
        v120 = *(_QWORD *)(v12 + 48);
        if ( (*(_BYTE *)(v120 + 28) & 0x7Fu) - 35 <= 3 )
          break;
      }
LABEL_20:
      v220 = 0;
      v218[0] = v219;
      v218[1] = (void *)0x800000000LL;
      if ( a3 )
      {
        sub_AEA9C0((__int64 *)v218, a3);
        v220 = a3[34];
      }
      a6 = 0.0;
      v221 = 0;
      LODWORD(v222) = v249;
      v224 = v226;
      v231 &= 0xFFFFFFFE00000000LL;
      v233 &= 0xFFFFFFFE00000000LL;
      v237 = v239;
      v238 = 0x800000000LL;
      v240 = v242;
      WORD2(v222) = 0;
      v225 = 0x400000000LL;
      v241 = 0x400000000LL;
      v244 = 0x400000000LL;
      v223 = 0;
      v230 = 0;
      v232 = 0;
      v234 = 0;
      v235 = 0;
      v236 = 0;
      v239[8] = 0;
      v239[9] = 0;
      v242[48] = 0;
      ptr = v245;
      v204 = nullptr;
      v23 = sub_1D75BD0((_DWORD)a1, *(_QWORD *)(v12 + 72), v197, v22, (unsigned int)&v204, (unsigned int)&v221, 0);
      if ( v23 )
      {
        v91 = v246;
        a6 = 0.0;
        v92 = (__m128i *)((char *)v246 + 64 * (unsigned __int64)(unsigned int)v247);
        if ( (unsigned int)v247 >= (unsigned __int64)HIDWORD(v247) )
        {
          v184 = (unsigned int)v247 + 1LL;
          v212 = 0;
          v185 = &v212;
          v213 = 0;
          memset(v214, 0, sizeof(v214));
          if ( HIDWORD(v247) < v184 )
          {
            v199 = v23;
            if ( v246 > &v212 || v92 <= &v212 )
            {
              sub_2237220(&v246, v248, v184, 64);
              v185 = &v212;
              v23 = v199;
              v92 = (__m128i *)((char *)v246 + 64 * (unsigned __int64)(unsigned int)v247);
            }
            else
            {
              sub_2237220(&v246, v248, v184, 64);
              v23 = v199;
              v185 = (__m128i *)((char *)v246 + (char *)&v212 - v91);
              v92 = (__m128i *)((char *)v246 + 64 * (unsigned __int64)(unsigned int)v247);
            }
          }
          *v92 = _mm_loadu_si128(v185);
          v186 = v247;
          v92[1] = _mm_loadu_si128(v185 + 1);
          v187 = _mm_loadu_si128(v185 + 2);
          v94 = (unsigned int)(v186 + 1);
          LODWORD(v247) = v186 + 1;
          v92[2] = v187;
          v92[3] = _mm_loadu_si128(v185 + 3);
        }
        else
        {
          *v92 = 0;
          v93 = v247;
          v92[1] = 0;
          v94 = (unsigned int)(v93 + 1);
          v92[2] = 0;
          LODWORD(v247) = v93 + 1;
          v92[3] = 0;
        }
        v95 = (__m128i *)((char *)v246 + 64 * v94 - 64);
        sub_1BD97A0((__int64)&v206, a1[31], v23, (__int64 *)&v221);
        v96 = *(_QWORD *)(v12 + 48);
        v97 = *v10;
        a7 = (__m128)_mm_load_si128(&v206);
        v98 = _mm_load_si128(&v207);
        v99 = _mm_load_si128(&v208);
        v212 = (__m128i)a7;
        v213 = v98;
        v214[0] = v99;
        v95->m128i_i64[0] = v97;
        v95->m128i_i64[1] = v96;
        v95[1] = _mm_load_si128(&v212);
        v95[2] = _mm_load_si128(&v213);
        v95[3] = _mm_load_si128(v214);
      }
      else
      {
        if ( (*(_BYTE *)(a1[29] + 60) & 0x10) == 0
          || (v83 = sub_178EA20(a1[83], (__int64)v204, (__int64 *)((char *)&dword_0 + 1), v24, v25, (__int64)v26),
              v83 == (unsigned int)sub_178EA20(a1[83], a2, (__int64 *)((char *)&dword_0 + 1), v84, v85, v86)) )
        {
          if ( !a3 )
            goto LABEL_30;
          if ( (v251 & 1) != 0 )
          {
            v27 = &v252;
            v28 = 7;
            goto LABEL_27;
          }
          v90 = v253;
          v27 = v252;
          if ( !v253 )
          {
            v110 = v251;
            v212.m128i_i64[0] = 0;
            v111 = ((unsigned int)v251 >> 1) + 1;
            goto LABEL_144;
          }
          v28 = v253 - 1;
LABEL_27:
          LODWORD(v29) = v28 & (((unsigned int)v204 >> 9) ^ ((unsigned int)v204 >> 4));
          v30 = (unsigned __int8 **)&v27[36 * (unsigned int)v29];
          v26 = *v30;
          if ( *v30 == v204 )
          {
LABEL_28:
            v31 = v30 + 1;
            goto LABEL_29;
          }
          v162 = 1;
          v163 = nullptr;
          if ( v26 != (unsigned __int8 *)-4096LL )
          {
            while ( 1 )
            {
              if ( !v163 && v26 == (unsigned __int8 *)-8192LL )
                v163 = v30;
              v29 = v28 & (unsigned int)(v29 + v162);
              v30 = (unsigned __int8 **)&v27[36 * v29];
              v26 = *v30;
              if ( v204 == *v30 )
                goto LABEL_28;
              if ( v26 == (unsigned __int8 *)-4096LL )
              {
                if ( v163 )
                  v30 = v163;
                break;
              }
              ++v162;
            }
          }
          v110 = v251;
          v212.m128i_i64[0] = (__int64)v30;
          v90 = 8;
          v112 = 24;
          v111 = ((unsigned int)v251 >> 1) + 1;
          if ( (v251 & 1) == 0 )
          {
            v90 = v253;
LABEL_144:
            v112 = 3 * v90;
          }
          v113 = (unsigned int)(4 * v111);
          if ( (unsigned int)v113 >= v112 )
          {
            v90 *= 2;
          }
          else
          {
            v113 = v90 - HIDWORD(v251) - (unsigned int)v111;
            v111 = v90 >> 3;
            if ( (unsigned int)v113 > (unsigned int)v111 )
            {
LABEL_147:
              v114 = v212.m128i_i64[0];
              LODWORD(v251) = (2 * (v110 >> 1) + 2) | v110 & 1;
              if ( *(_QWORD *)v212.m128i_i64[0] != -4096 )
                --HIDWORD(v251);
              v115 = (void *)(v212.m128i_i64[0] + 8);
              *(_QWORD *)v212.m128i_i64[0] = v204;
              memset(v115, 0, 0x118u);
              v116 = v114 + 24;
              v31 = (unsigned __int8 **)(v114 + 8);
              *v31 = (unsigned __int8 *)v116;
              v31[1] = (unsigned __int8 *)0x800000000LL;
LABEL_29:
              sub_1CB6C40((char ***)v31, (char ***)v218);
              v31[34] = (unsigned __int8 *)v220;
LABEL_30:
              v32 = (unsigned int)v216;
              v33 = (unsigned int)v216 + 1LL;
              v34 = (unsigned __int64)v204 | *v10 & 3;
              v212.m128i_i64[0] = v34;
              if ( v33 > HIDWORD(v216) )
              {
                sub_2237220(&v215, v217, v33, 8);
                v32 = (unsigned int)v216;
              }
              *((_QWORD *)v215 + v32) = v34;
              LODWORD(v216) = v216 + 1;
              if ( ptr != v245 )
                free(ptr);
              if ( v240 != v242 )
                free(v240);
              if ( v237 != v239 )
                free(v237);
              v35 = &v224[32 * (unsigned int)v225];
              if ( v224 == v35 )
                goto LABEL_57;
              v198 = v10;
              v36 = v224;
              do
              {
                v35 -= 32;
                v37 = *((_QWORD *)v35 + 1);
                if ( v37 )
                {
                  v38 = *((_QWORD *)v35 + 2);
                  if ( v38 )
                  {
                    if ( v37 < v38 || v37 > v38 + 14848 )
                    {
                      v39 = *(_QWORD **)(v37 + 528);
                      v40 = &v39[8 * (unsigned __int64)*(unsigned int *)(v37 + 536)];
                      if ( v39 != v40 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v40 -= 8;
                            v41 = (_QWORD *)v40[3];
                            if ( v41 == v40 + 5 )
                              break;
                            operator delete(v41);
                            if ( v39 == v40 )
                              goto LABEL_46;
                          }
                        }
                        while ( v39 != v40 );
LABEL_46:
                        v40 = *(_QWORD **)(v37 + 528);
                      }
                      if ( v40 != (_QWORD *)(v37 + 544) )
                        free(v40);
                      v42 = *(void **)(v37 + 416);
                      v43 = (void **)(v37 + 416);
                      if ( v42 != (void *)(v37 + 432) )
                        free(v42);
                      v44 = (void **)(v37 + 96);
                      do
                      {
                        while ( 1 )
                        {
                          v43 -= 4;
                          if ( *v43 == v43 + 2 )
                            break;
                          operator delete(*v43);
                          if ( v43 == v44 )
                            goto LABEL_54;
                        }
                      }
                      while ( v43 != v44 );
LABEL_54:
                      operator delete((void *)v37, 0x3A0u);
                    }
                    else
                    {
                      v82 = *(unsigned int *)(v38 + 14976);
                      *(_DWORD *)(v38 + 14976) = v82 + 1;
                      *(_QWORD *)(v38 + 8 * v82 + 14848) = v37;
                    }
                  }
                }
              }
              while ( v36 != v35 );
              goto LABEL_56;
            }
          }
          sub_1CB8690((__int64)&v251, v90, v113, v111, (__int64)v27, (__int64)v26);
          sub_1CB6DA0((__int64)&v251, (__int64 *)&v204, &v212);
          v110 = v251;
          goto LABEL_147;
        }
        sub_1CB6690((__int64)&v246);
        v87 = (__m128 *)((char *)v246 + 64 * (unsigned __int64)(unsigned int)v247 - 64);
        sub_1BD97A0((__int64)&v209, a1[31], 17, (__int64 *)&v221);
        v88 = *(_QWORD *)(v12 + 48);
        v89 = *v10;
        v212 = _mm_load_si128(&v209);
        v213 = _mm_load_si128(&v210);
        v214[0] = _mm_load_si128(&v211);
        v87->m128_u64[0] = v89;
        v87->m128_u64[1] = v88;
        a7 = (__m128)_mm_load_si128(&v212);
        v87[1] = a7;
        v87[2] = (__m128)_mm_load_si128(&v213);
        v87[3] = (__m128)_mm_load_si128(v214);
      }
      if ( ptr != v245 )
        free(ptr);
      if ( v240 != v242 )
        free(v240);
      if ( v237 != v239 )
        free(v237);
      v35 = &v224[32 * (unsigned int)v225];
      if ( v224 == v35 )
        goto LABEL_57;
      v198 = v10;
      v100 = v224;
      do
      {
        v35 -= 32;
        v101 = *((_QWORD *)v35 + 1);
        if ( v101 )
        {
          v102 = *((_QWORD *)v35 + 2);
          if ( v102 )
          {
            if ( v101 < v102 || v101 > v102 + 14848 )
            {
              v103 = *(_QWORD **)(v101 + 528);
              v104 = &v103[8 * (unsigned __int64)*(unsigned int *)(v101 + 536)];
              if ( v103 != v104 )
              {
                do
                {
                  while ( 1 )
                  {
                    v104 -= 8;
                    v105 = (_QWORD *)v104[3];
                    if ( v105 == v104 + 5 )
                      break;
                    operator delete(v105);
                    if ( v103 == v104 )
                      goto LABEL_126;
                  }
                }
                while ( v103 != v104 );
LABEL_126:
                v104 = *(_QWORD **)(v101 + 528);
              }
              if ( v104 != (_QWORD *)(v101 + 544) )
                free(v104);
              v106 = *(void **)(v101 + 416);
              if ( v106 != (void *)(v101 + 432) )
                free(v106);
              v107 = (void **)(v101 + 384);
              v108 = (void **)(v101 + 64);
              do
              {
                while ( *v107 != v107 + 2 )
                {
                  operator delete(*v107);
                  v107 -= 4;
                  if ( v107 == v108 )
                    goto LABEL_134;
                }
                v107 -= 4;
              }
              while ( v108 != v107 );
LABEL_134:
              operator delete((void *)v101, 0x3A0u);
            }
            else
            {
              v109 = *(unsigned int *)(v102 + 14976);
              *(_DWORD *)(v102 + 14976) = v109 + 1;
              *(_QWORD *)(v102 + 8 * v109 + 14848) = v101;
            }
          }
        }
      }
      while ( v100 != v35 );
LABEL_56:
      v10 = v198;
      v35 = v224;
LABEL_57:
      if ( v35 != v226 )
        free(v35);
      if ( v218[0] != v219 )
        free(v218[0]);
LABEL_61:
      if ( v192 == ++v10 )
        goto LABEL_62;
    }
    v121 = *(_QWORD *)(*(_QWORD *)(v120 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v122 = *(unsigned __int8 *)(v121 + 16);
    if ( (unsigned int)(v122 - 25) > 1 )
    {
      v164 = sub_F63050(v121, v15, v122, a2);
      v121 = v164;
      if ( *(_BYTE *)(v164 + 16) == 26 )
        goto LABEL_234;
    }
    else if ( (_BYTE)v122 == 26 )
    {
LABEL_157:
      if ( (*(_BYTE *)(v121 + 18) & 0x20) != 0 )
      {
        v123 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v123 + 16) != 26 )
          v123 = sub_F63050(v123, v15, v122, v20);
        sub_A5E110(&v221, v123);
        v221.m128_u64[1] |= 1u;
        v22 = sub_A73610(
                a1[31],
                *(_QWORD *)(v123 + 24),
                (__int64 *)(v123 + 48),
                *(unsigned __int16 *)(v123 + 22),
                (const __m128i *)&v221,
                0);
      }
      goto LABEL_20;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v121 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26 )
      goto LABEL_20;
    v164 = sub_F63050(v121, v15, v122, v20);
LABEL_234:
    if ( !v164 )
      goto LABEL_20;
    goto LABEL_157;
  }
LABEL_62:
  v45 = a1 + 1;
  if ( !a5 || (_DWORD)v216 )
  {
    sub_168B9B0((__int64)&v221, (__int64)(a1 + 1), 6010);
    sub_168B9B0((__int64)&v212, (__int64)v45, 3869);
    sub_AE9DF0((unsigned __int8 **)&v212, *(_QWORD *)(a2 + 40), 9u);
    sub_AE9DF0((unsigned __int8 **)&v212, a3 != nullptr, 2u);
    sub_168B9B0((__int64)&v204, (__int64)v45, 3870);
    sub_AE9DF0(&v204, *(_QWORD *)(a2 + 40), 9u);
    v46 = (_QWORD *)sub_1D7EDC0(
                      (_DWORD)a1,
                      (_DWORD)v215,
                      (int)v215 + 8 * (int)v216,
                      (unsigned int)&v246,
                      *(_DWORD *)(a2 + 24),
                      (unsigned int)&v204,
                      (__int64)&v212,
                      (__int64)&v221,
                      1,
                      0);
    if ( v204 && v205 )
      sub_1580C40(v205, (unsigned __int64)v204);
    if ( v212.m128i_i64[0] && v212.m128i_i64[1] )
      sub_1580C40(v212.m128i_u64[1], v212.m128i_u64[0]);
    v47 = v221.m128_u64[0];
    if ( v221.m128_u64[0] && v221.m128_u64[1] )
      sub_1580C40(v221.m128_u64[1], v221.m128_u64[0]);
    if ( v46 == (_QWORD *)((char *)v215 + 8 * (unsigned int)v216) )
      goto LABEL_162;
    v204 = (unsigned __int8 *)(*v46 & 0xFFFFFFFFFFFFFFF8LL);
    v48 = sub_B77AF0((__int64)v204);
    v53 = v48;
    if ( (*(_BYTE *)(v48 + 29) & 1) != 0 )
    {
      v54 = sub_B8C3D0(v48, v47, v49, v50, v51, v52);
      v49 = *v54;
      v55 = *v54 + 8LL * *((unsigned int *)v54 + 2);
      if ( v49 >= v55 )
      {
        if ( v49 == v55 )
          goto LABEL_79;
        while ( 1 )
        {
          v50 = *(_QWORD *)v55;
          if ( *(_WORD *)(*(_QWORD *)v55 + 36LL) == 281 )
            break;
          v55 += 8LL;
          if ( v49 == v55 )
            goto LABEL_79;
        }
      }
      else
      {
        v50 = v49;
        while ( 1 )
        {
          v47 = *(_QWORD *)v50;
          if ( *(_WORD *)(*(_QWORD *)v50 + 36LL) == 281 )
            break;
          v50 += 8;
          if ( v55 == v50 )
            goto LABEL_79;
        }
        if ( v55 == v50 )
          goto LABEL_79;
      }
      v144 = *(_QWORD *)v49;
      if ( *(_WORD *)(*(_QWORD *)v49 + 36LL) != 281 )
      {
        v145 = (__int64 *)(v49 + 8);
        do
          v144 = *v145++;
        while ( *(_WORD *)(v144 + 36) != 281 );
      }
      v146 = *(unsigned int *)(v144 + 40);
      v193 = *(_BYTE **)(v144 + 48);
      sub_168B9F0((__int64)&v221, v45, *(_DWORD *)(a2 + 24), 0x1B99u, 0);
      if ( v227 )
      {
        sub_AE9DF0(&v224, v53, 0xAu);
      }
      else if ( v229 )
      {
        v171 = sub_168B9E0(&v221);
        v175 = v222;
        if ( v222 )
        {
          v196 = v171;
          v175 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v222 + 32LL))(v222);
          v171 = v196;
        }
        v212.m128i_i64[0] = v175;
        v176 = sub_1587BC0(v171, v212.m128i_i64, v171, v172, v173, v174);
        sub_AE9DF0((unsigned __int8 **)(*v176 + 32LL * v228 + 8), v53, 0xAu);
      }
      v202 = v146 != 0;
      v147 = sub_1588420((__int64)&v221, (unsigned __int8 *)&v202);
      v148 = v147;
      if ( *(_BYTE *)(v147 + 120) )
      {
        sub_AEC220((unsigned __int8 **)(v147 + 32), v193, v146);
      }
      else if ( *(_BYTE *)(v147 + 132) )
      {
        v165 = sub_168B9E0((_QWORD *)v147);
        v169 = *(_QWORD *)(v148 + 16);
        if ( v169 )
        {
          v195 = v165;
          v169 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v169 + 32LL))(v169);
          v165 = v195;
        }
        v212.m128i_i64[0] = v169;
        v170 = sub_1587BC0(v165, v212.m128i_i64, v165, v166, v167, v168);
        sub_AEC220((unsigned __int8 **)(*v170 + 32LL * *(unsigned int *)(v148 + 128) + 8), v193, v146);
      }
      sub_15F7200(&v221);
      v47 = (__int64)(a1 + 1);
      sub_168B9F0((__int64)&v221, v45, *(_DWORD *)(v144 + 24), 0x17BFu, 0);
      if ( v227 )
      {
        v47 = v144;
        sub_AE9DF0(&v224, v144, 0xEu);
      }
      else if ( v229 )
      {
        v179 = sub_168B9E0(&v221);
        v182 = v222;
        if ( v222 )
          v182 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v222 + 32LL))(v222);
        v212.m128i_i64[0] = v182;
        v183 = sub_1587BC0(v179, v212.m128i_i64, v177, v178, v180, v181);
        v47 = v144;
        sub_AE9DF0((unsigned __int8 **)(*v183 + 32LL * v228 + 8), v144, 0xEu);
      }
      sub_15F7200(&v221);
    }
LABEL_79:
    v56 = *(_QWORD *)(*((_QWORD *)v204 + 6) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v56 + 16) != 26 )
      v56 = sub_F63050(*(_QWORD *)(*((_QWORD *)v204 + 6) & 0xFFFFFFFFFFFFFFF0LL), v47, v49, v50);
    if ( (*(_BYTE *)(a1[29] + 1) & 0x40) != 0
      && ((*(_BYTE *)(v56 + 19) >> 1) & 0xFu) - 9 <= 1
      && !sub_18B0530((__int64)a1, *(_DWORD *)(a2 + 24), v56, a6, a7) )
    {
      goto LABEL_162;
    }
    v59 = sub_B77B20((__int64)v204);
    if ( (*(_BYTE *)(v59 + 16) & 6) != 0 )
    {
      v62 = a2;
      if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 )
        goto LABEL_85;
    }
    else
    {
      v117 = v204;
      *((_DWORD *)v204 + 6) = *(_DWORD *)(a2 + 24);
      v118 = *(_QWORD *)(a2 + 16);
      if ( (v118 & 4) != 0 )
        v119 = *(_QWORD *)((v118 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      else
        v119 = v118 & 0xFFFFFFFFFFFFFFF8LL;
      sub_B90130((__int64)v117, v119, v57, v58, v60, v61);
      v204[84] = *(_BYTE *)(a2 + 84) & 3 | v204[84] & 0xFC;
      v62 = a2;
      if ( (*(_WORD *)(a2 + 30) & 0x180) != 0 )
      {
LABEL_85:
        v212.m128i_i8[0] = 0;
        v63 = sub_B77970(v62);
        if ( !v63 || !sub_B77C50((__int64)v63) )
          goto LABEL_93;
        goto LABEL_87;
      }
    }
    v140 = *(_DWORD *)(v62 + 24);
    v141 = v62;
    v142 = sub_B77AF0((__int64)v204);
    if ( sub_1CC0680(a1, v142, v140, 0)
      || (v143 = *(unsigned int *)(v141 + 24),
          v212.m128i_i8[0] = 0,
          (unsigned __int8)sub_1CBF140(
                             (__int64)a1,
                             v143,
                             2,
                             (__int64)v204,
                             ((unsigned int)(*(__int64 *)(v59 + 16) >> 1) & 3) + 1,
                             *(unsigned int *)(v59 + 40),
                             &v212)) )
    {
LABEL_162:
      v124 = 1;
      goto LABEL_163;
    }
    sub_B77970(a2);
LABEL_87:
    v64 = (*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v204 + 32LL))(v204);
    v65 = v204;
    v66 = (*(_BYTE *)(v64 + 82) & 0x40) == 0;
    v67 = *(_QWORD *)(v59 + 16);
    if ( !v66 && ((v67 >> 1) & 3) != 1 )
    {
      v68 = (_BYTE *)(*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v204 + 32LL))(v204);
      if ( !sub_B8C090(v68) )
        sub_B7C8B0((__int64)v204, 0, 0);
      v67 = *(_QWORD *)(v59 + 16);
      v65 = v204;
    }
    *(_QWORD *)(v59 + 16) = v67 & 0xFFFFFFFFFFFFFFF9LL | 2;
    sub_17A3BD0((__int64)a1, (__int64)v65);
LABEL_93:
    v69 = (unsigned int *)sub_B77B50((__int64)v204);
    v73 = (unsigned int)sub_BC1D90((_QWORD *)a1[31], (const __m128i *)(v69 + 2), *v69, v70, v71, v72);
    if ( !a3 )
    {
LABEL_187:
      v78 = v204;
      goto LABEL_188;
    }
    v74 = v251 & 1;
    if ( (v251 & 1) != 0 )
    {
      v77 = 7;
      v76 = &v252;
    }
    else
    {
      v75 = v253;
      v76 = v252;
      if ( !v253 )
      {
        v221.m128_u64[0] = 0;
        v130 = ((unsigned int)v251 >> 1) + 1;
        goto LABEL_181;
      }
      v77 = v253 - 1;
    }
    v78 = v204;
    LODWORD(v79) = v77 & (((unsigned int)v204 >> 9) ^ ((unsigned int)v204 >> 4));
    v80 = &v76[36 * (unsigned int)v79];
    v81 = (unsigned __int8 *)*v80;
    if ( (unsigned __int8 *)*v80 == v204 )
    {
LABEL_98:
      a3 = v80 + 1;
LABEL_188:
      v135 = *(_QWORD *)(v59 + 16);
      v136 = sub_B77AF0((__int64)v78);
      v137 = sub_B8C330(a2);
      sub_B77BD0(a2, v137, v136, v73, 0, ((v135 >> 1) & 3) + 1, (__int64)a3, 0);
      if ( (*(_BYTE *)(a1[29] + 60) & 0x10) != 0 )
      {
        v149 = (__int64 *)a1[83];
        v150 = sub_B77AF0((__int64)v204);
        sub_178F910(v149, a2, v150, v151, v152, v153);
      }
      v138 = *(char **)(a4 + 88);
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 16) = 0;
      if ( v138 )
        sub_1A39780(v138);
      v139 = (unsigned __int64)v204;
      v124 = 0;
      *(_OWORD *)(a4 + 88) = 0;
      *(_BYTE *)(a4 + 166) = 0;
      v221.m128_u64[0] = (*(_BYTE *)(v139 + 29) >> 5) & 3 | v139;
      sub_1743080(a4 + 8, v221.m128_i64[0]);
      *(_DWORD *)a4 = 2;
      goto LABEL_163;
    }
    v188 = 1;
    v189 = nullptr;
    if ( v81 != (unsigned __int8 *)-4096LL )
    {
      while ( 1 )
      {
        if ( !v189 && v81 == (unsigned __int8 *)-8192LL )
          v189 = v80;
        v79 = v77 & (unsigned int)(v79 + v188);
        v80 = &v76[36 * v79];
        v81 = (unsigned __int8 *)*v80;
        if ( v204 == (unsigned __int8 *)*v80 )
          goto LABEL_98;
        if ( v81 == (unsigned __int8 *)-4096LL )
        {
          if ( v189 )
            v80 = v189;
          break;
        }
        ++v188;
      }
    }
    v221.m128_u64[0] = (unsigned __int64)v80;
    v131 = 24;
    v75 = 8;
    v130 = ((unsigned int)v251 >> 1) + 1;
    if ( (_BYTE)v74 )
    {
LABEL_182:
      v132 = 4 * v130;
      if ( (unsigned int)v132 >= (unsigned int)v131 )
      {
        v75 *= 2;
      }
      else
      {
        v131 = v75 - HIDWORD(v251) - v130;
        v132 = v75 >> 3;
        if ( (unsigned int)v131 > (unsigned int)v132 )
        {
LABEL_184:
          v133 = v221.m128_u64[0];
          LODWORD(v251) = v251 & 1 | (2 * v130);
          if ( *(_QWORD *)v221.m128_u64[0] != -4096 )
            --HIDWORD(v251);
          v134 = (void *)(v221.m128_u64[0] + 8);
          *(_QWORD *)v221.m128_u64[0] = v204;
          memset(v134, 0, 0x118u);
          *(_QWORD *)(v133 + 8) = v133 + 24;
          *(_QWORD *)(v133 + 16) = 0x800000000LL;
          a3 = (__int64 *)(v133 + 8);
          goto LABEL_187;
        }
      }
      sub_1CB8690((__int64)&v251, v75, v131, v132, v74, (__int64)v76);
      sub_1CB6DA0((__int64)&v251, (__int64 *)&v204, &v221);
      v130 = ((unsigned int)v251 >> 1) + 1;
      goto LABEL_184;
    }
    v75 = v253;
LABEL_181:
    v131 = 3 * v75;
    goto LABEL_182;
  }
  sub_168B9F0((__int64)&v221, a1 + 1, *(_DWORD *)(a2 + 24), 0x1315u, 0);
  v212.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v154 = sub_15894B0((__int64)&v221, v212.m128i_i64);
  sub_17BABD0(v154, (__int64 *)&v203);
  sub_15F7200(&v221);
  v155 = *(_QWORD **)(a4 + 8);
  for ( i = &v155[*(unsigned int *)(a4 + 16)]; i != v155; ++v155 )
  {
    v157 = (char *)(*v155 & 0xFFFFFFFFFFFFFFF8LL);
    v158 = v157[28] & 0x7F;
    v159 = v158;
    if ( (unsigned int)v158 - 53 <= 1 || (v160 = v158 + 52, v161 = *v155 & 0xFFFFFFFFFFFFFFF8LL, (v160 & 0x7Fu) <= 1) )
    {
      v161 = sub_B72ED0(*v155 & 0xFFFFFFFFFFFFFFF8LL);
      v159 = *(_BYTE *)(v161 + 28) & 0x7F;
    }
    if ( (unsigned int)(v159 - 34) <= 5 )
      sub_1BE6900((__int64)a1, v157, v161, 0, *(_QWORD *)(a2 + 48), 0);
  }
  sub_1BE16D0((__int64 *)&v246, a1, *(_DWORD *)(a2 + 24));
  v124 = a5;
LABEL_163:
  if ( (v251 & 1) != 0 )
  {
    v127 = v254;
    v125 = &v252;
  }
  else
  {
    v125 = v252;
    v126 = 36LL * v253;
    if ( !v253 )
      goto LABEL_178;
    v127 = &v252[v126];
    if ( &v252[v126] == v252 )
      goto LABEL_178;
  }
  do
  {
    if ( *v125 != -4096 && *v125 != -8192 )
    {
      v128 = (_QWORD *)v125[1];
      if ( v128 != v125 + 3 )
        free(v128);
    }
    v125 += 36;
  }
  while ( v127 != (_BYTE *)v125 );
  if ( (v251 & 1) == 0 )
  {
    v125 = v252;
    v126 = 36LL * v253;
LABEL_178:
    operator delete(v125, v126 * 8, 8);
  }
  sub_1BD6E90((__int64 *)&v246);
  if ( v246 != v248 )
    free(v246);
  if ( v215 != v217 )
    free(v215);
  return v124;
}
