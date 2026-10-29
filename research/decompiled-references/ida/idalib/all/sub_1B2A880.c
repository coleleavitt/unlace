unsigned __int64 __fastcall sub_1B2A880(
        __int64 *a1,
        __int64 *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        double a7,
        double a8,
        char a9,
        __int64 a10)
{
  int v10; // ebp
  __int64 v11; // rax
  __m128i si128; // xmm0
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  char *v22; // rax
  __int64 v23; // rsi
  char *v24; // r15
  unsigned __int64 v25; // rax
  unsigned int v26; // esi
  __int64 *v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // r8
  unsigned int v30; // r14d
  int v31; // r12d
  unsigned __int64 *v32; // r13
  __int64 v33; // rdx
  unsigned __int64 v34; // rbx
  unsigned __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // r14
  unsigned __int64 *v39; // rsi
  _QWORD *n; // rdx
  unsigned __int64 *ii; // rax
  unsigned __int64 v42; // rdx
  unsigned int v43; // edi
  unsigned __int64 *v44; // rcx
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rdx
  unsigned int v47; // edi
  int v48; // esi
  unsigned int v49; // ecx
  unsigned int v50; // edi
  unsigned __int64 v51; // rsi
  __int64 v52; // r10
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  int v56; // esi
  __int64 v57; // rdi
  unsigned __int64 v58; // rdi
  __int64 v59; // rbp
  unsigned __int64 v60; // rax
  unsigned int v61; // edi
  __int64 *v62; // rsi
  __int64 v63; // r9
  unsigned __int64 v64; // rbx
  char v65; // r12
  __int64 v66; // rcx
  unsigned __int64 *v67; // r8
  __int64 v68; // r9
  unsigned int v69; // r15d
  unsigned __int64 *v70; // r13
  unsigned __int64 v71; // rbx
  unsigned __int64 v72; // rax
  __int64 v73; // rsi
  unsigned __int64 *v74; // rdx
  unsigned __int64 v75; // rcx
  _QWORD *v76; // rax
  unsigned __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  unsigned __int64 v83; // rdx
  unsigned int v84; // ebp
  unsigned __int64 v85; // rbx
  unsigned __int64 *v86; // r12
  _QWORD *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  int v92; // esi
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r12
  __int64 v98; // rax
  _QWORD *v99; // rax
  int v100; // edi
  __int64 v101; // rbp
  unsigned int v102; // r14d
  unsigned __int64 *v103; // r15
  unsigned __int64 v104; // rax
  unsigned int v105; // esi
  unsigned __int64 *v106; // rdx
  unsigned __int64 v107; // rcx
  int v108; // r13d
  __int64 v109; // rdx
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rax
  _QWORD *v113; // rax
  __int64 v114; // r14
  unsigned __int64 *v115; // rsi
  _QWORD *j; // rdx
  unsigned __int64 *k; // rax
  unsigned __int64 v118; // rdx
  unsigned int v119; // edi
  unsigned __int64 *v120; // rcx
  unsigned __int64 v121; // r9
  unsigned __int64 v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // rax
  __int64 v125; // r15
  unsigned __int64 *v126; // r11
  _QWORD *jj; // rdx
  unsigned __int64 *kk; // rax
  unsigned __int64 v129; // rdx
  unsigned int v130; // esi
  unsigned __int64 *v131; // rcx
  unsigned __int64 v132; // r8
  unsigned __int64 v133; // rdx
  unsigned int v134; // esi
  unsigned int v135; // esi
  unsigned int v136; // edi
  unsigned __int64 v137; // r8
  int v138; // r10d
  unsigned __int64 *v139; // r9
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // rax
  __int64 v142; // rax
  _QWORD *v143; // rax
  unsigned int v144; // r11d
  __int64 v145; // r10
  unsigned __int64 *v146; // r9
  _QWORD *mm; // rdx
  unsigned __int64 *v148; // rax
  unsigned __int64 v149; // r15
  unsigned int v150; // ecx
  unsigned __int64 *v151; // rdx
  unsigned __int64 v152; // rsi
  unsigned __int64 v153; // rcx
  unsigned int v154; // edi
  unsigned int v155; // edi
  unsigned int v156; // esi
  unsigned __int64 v157; // r8
  int v158; // r10d
  int v159; // edi
  int v160; // r10d
  _QWORD *v161; // rcx
  _QWORD *v162; // rdx
  unsigned int v163; // edi
  __int64 v164; // r8
  int v165; // r10d
  unsigned __int64 *v166; // rdi
  unsigned __int64 v167; // rax
  unsigned __int64 v168; // rax
  __int64 v169; // rax
  _QWORD *v170; // rax
  __int64 v171; // r11
  unsigned __int64 *v172; // r10
  _QWORD *m; // rdx
  unsigned __int64 *v174; // rax
  unsigned __int64 v175; // r14
  unsigned int v176; // ecx
  unsigned __int64 *v177; // rdx
  unsigned __int64 v178; // rdi
  unsigned __int64 v179; // rcx
  unsigned int v180; // edi
  unsigned int v181; // edi
  unsigned int v182; // ebp
  __int64 *v183; // r8
  _QWORD *v184; // rsi
  unsigned __int64 v185; // rbx
  unsigned __int64 v186; // rbp
  __int64 v187; // rax
  __int64 *v188; // rax
  __int64 v189; // rdx
  unsigned __int64 v190; // rax
  unsigned __int64 v191; // rax
  unsigned __int64 v192; // rdx
  __int64 v193; // rax
  _QWORD *v194; // rax
  __int64 v195; // r14
  _QWORD *i; // rdx
  unsigned __int64 *v197; // rax
  unsigned __int64 v198; // rdx
  unsigned int v199; // esi
  unsigned __int64 *v200; // rcx
  unsigned __int64 v201; // r8
  _QWORD *v202; // rcx
  _QWORD *v203; // rdx
  _QWORD *v204; // rcx
  _QWORD *v205; // rdx
  unsigned int v206; // esi
  unsigned int v207; // edi
  unsigned int v208; // esi
  unsigned __int64 v209; // r8
  unsigned __int64 *v210; // r9
  int v211; // r10d
  int v212; // ebx
  unsigned __int64 v213; // r11
  __int32 v214; // eax
  bool v215; // zf
  unsigned int v216; // esi
  unsigned int v217; // esi
  unsigned int v218; // r12d
  unsigned __int64 v219; // rdi
  unsigned __int64 *v220; // r8
  int v221; // r9d
  int v222; // esi
  _QWORD *v223; // rcx
  _QWORD *v224; // rdx
  int v225; // r11d
  __int64 v226; // r10
  _QWORD *v227; // rcx
  _QWORD *v228; // rdx
  _QWORD *v229; // rcx
  _QWORD *v230; // rdx
  unsigned __int64 *v231; // r10
  int v232; // r11d
  unsigned __int64 *v233; // rbp
  unsigned __int64 *v234; // r9
  unsigned __int64 *v235; // r12
  int v236; // r11d
  unsigned __int64 *v237; // r10
  bool v239; // [rsp+10h] [rbp-268h]
  int v240; // [rsp+10h] [rbp-268h]
  __int64 v244; // [rsp+28h] [rbp-250h]
  int v246; // [rsp+50h] [rbp-228h]
  unsigned __int64 *v247; // [rsp+50h] [rbp-228h]
  int v248; // [rsp+58h] [rbp-220h]
  int v249; // [rsp+68h] [rbp-210h]
  unsigned __int64 v250; // [rsp+70h] [rbp-208h] BYREF
  __int64 v251; // [rsp+78h] [rbp-200h] BYREF
  __m128 v252; // [rsp+80h] [rbp-1F8h] BYREF
  _QWORD *v253; // [rsp+90h] [rbp-1E8h] BYREF
  __int64 v254; // [rsp+98h] [rbp-1E0h]
  unsigned int v255; // [rsp+A0h] [rbp-1D8h]
  void *ptr; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v257; // [rsp+B8h] [rbp-1C0h]
  _BYTE v258[64]; // [rsp+C0h] [rbp-1B8h] BYREF
  __m128 v259; // [rsp+100h] [rbp-178h] BYREF
  __int64 v260; // [rsp+110h] [rbp-168h]
  unsigned __int8 *v261; // [rsp+120h] [rbp-158h] BYREF
  char v262; // [rsp+178h] [rbp-100h]
  unsigned int v263; // [rsp+180h] [rbp-F8h]
  char v264; // [rsp+184h] [rbp-F4h]
  __int64 v265; // [rsp+190h] [rbp-E8h] BYREF
  char *v266; // [rsp+198h] [rbp-E0h]
  __int64 v267; // [rsp+1A0h] [rbp-D8h]
  char v268; // [rsp+1A8h] [rbp-D0h] BYREF
  __int128 v269; // [rsp+1E8h] [rbp-90h]
  __int64 v270; // [rsp+1F8h] [rbp-80h]
  __int64 v271; // [rsp+200h] [rbp-78h]
  __int64 v272; // [rsp+208h] [rbp-70h]
  int v273; // [rsp+210h] [rbp-68h]
  __int64 v274; // [rsp+218h] [rbp-60h] BYREF
  __m128i v275; // [rsp+220h] [rbp-58h]
  bool v276; // [rsp+230h] [rbp-48h]
  bool v277; // [rsp+231h] [rbp-47h]
  char v278; // [rsp+232h] [rbp-46h]
  bool v279; // [rsp+233h] [rbp-45h]
  bool v280; // [rsp+234h] [rbp-44h]
  char v281; // [rsp+235h] [rbp-43h]
  __int16 v282; // [rsp+236h] [rbp-42h]

  ptr = v258;
  v257 = 0x800000000LL;
  if ( a6 > 8 )
    sub_2237220(&ptr, v258, a6, 8);
  v10 = sub_1A3A250(*a1);
  v11 = *a1;
  v267 = 0x800000000LL;
  v266 = &v268;
  v269 = 0;
  v271 = v11;
  v272 = a4;
  v265 = 0;
  v270 = 0;
  v273 = 0;
  sub_B85890(&v274, a4);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AAB30);
  v276 = v10 != 0;
  v277 = v10 == 2;
  v275 = si128;
  v278 = 1;
  v279 = v10 == 0;
  v280 = v10 == 0;
  v281 = 0;
  v282 = 0;
  sub_1A395A0((__int64)&v265);
  v253 = nullptr;
  v254 = 0;
  v255 = 0;
  if ( !a2 )
  {
    if ( !a10 )
      goto LABEL_33;
    v101 = a10;
    v102 = 0;
    v103 = nullptr;
    while ( 1 )
    {
      v108 = *(_DWORD *)(v101 + 24);
      v109 = *(_QWORD *)&byte_8[*(_QWORD *)(v101 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      v110 = v109 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v109 | *(_BYTE *)(v101 + 48)) & 7;
      if ( !v102 )
        goto LABEL_74;
      v104 = v102 - 1;
      v105 = v104 & (v110 ^ (v110 >> 9));
      v106 = &v103[2 * v105];
      v107 = *v106;
      if ( v110 == *v106 )
        goto LABEL_71;
      v166 = nullptr;
      v14 = 1;
      if ( v107 )
      {
        while ( 1 )
        {
          if ( v107 == -1 && !v166 )
            v166 = v106;
          v15 = (unsigned int)(v14 + 1);
          v105 = v104 & (v14 + v105);
          v106 = &v103[2 * v105];
          v107 = *v106;
          if ( v110 == *v106 )
            goto LABEL_71;
          if ( !v107 )
            break;
          v14 = (unsigned int)v15;
        }
        if ( v166 )
          v106 = v166;
      }
      v13 = (unsigned int)(v254 + 1);
      if ( 4 * (int)v13 < 3 * v102 )
      {
        if ( v102 - ((_DWORD)v13 + HIDWORD(v254)) <= v102 >> 3 )
        {
          v190 = (((v104 >> 1) | v104) >> 2) | (v104 >> 1) | v104;
          v191 = (((v190 >> 4) | v190) >> 8) | (v190 >> 4) | v190;
          v192 = v191 >> 16;
          v193 = ((v191 >> 16) | v191) + 1;
          if ( (unsigned int)v193 < 0x40 )
            LODWORD(v193) = 64;
          v255 = v193;
          v194 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v193, 8, v192, v13, v14, v15);
          v253 = v194;
          if ( v103 )
          {
            v254 = 0;
            v195 = 2LL * v102;
            for ( i = &v194[2 * v255]; i != v194; v194 += 2 )
              *v194 = 0;
            v197 = v103;
            do
            {
              v198 = *v197;
              if ( *v197 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
              {
                if ( !v255 )
                {
                  *(_QWORD *)&dword_0 = *v197;
                  BUG();
                }
                v199 = (v255 - 1) & (v198 ^ (v198 >> 9));
                v200 = &v253[2 * v199];
                v201 = *v200;
                if ( v198 != *v200 && v201 )
                {
                  v240 = 1;
                  v237 = nullptr;
                  while ( 1 )
                  {
                    if ( v201 == -1 && !v237 )
                      v237 = v200;
                    v199 = (v255 - 1) & (v240 + v199);
                    v200 = &v253[2 * v199];
                    v201 = *v200;
                    if ( v198 == *v200 )
                      goto LABEL_214;
                    if ( !v201 )
                      break;
                    ++v240;
                  }
                  if ( v237 )
                    v200 = v237;
                }
LABEL_214:
                *v200 = *v197;
                *((_DWORD *)v200 + 2) = *((_DWORD *)v197 + 2);
                LODWORD(v254) = v254 + 1;
              }
              v197 += 2;
            }
            while ( &v103[v195] != v197 );
            operator delete(v103, v195 * 8, 8);
            v194 = v253;
            v216 = v255;
            LODWORD(v13) = v254 + 1;
          }
          else
          {
            v254 = 0;
            v216 = v255;
            v229 = &v194[2 * v255];
            if ( v194 != v229 )
            {
              v230 = v194;
              do
              {
                *v230 = 0;
                v230 += 2;
              }
              while ( v229 != v230 );
            }
            LODWORD(v13) = 1;
          }
          if ( !v216 )
          {
LABEL_399:
            LODWORD(v254) = v254 + 1;
            BUG();
          }
          v217 = v216 - 1;
          v218 = v217 & (v110 ^ (v110 >> 9));
          v106 = &v194[2 * v218];
          v219 = *v106;
          if ( v110 != *v106 )
          {
            v220 = nullptr;
            v221 = 1;
            if ( v219 )
            {
              while ( 1 )
              {
                if ( v219 == -1 && !v220 )
                  v220 = v106;
                v218 = v217 & (v221 + v218);
                v106 = &v194[2 * v218];
                v219 = *v106;
                if ( v110 == *v106 )
                  goto LABEL_162;
                if ( !v219 )
                  break;
                ++v221;
              }
              if ( v220 )
                v106 = v220;
            }
          }
        }
      }
      else
      {
LABEL_74:
        v111 = ((((((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
                  | (2 * v102 - 1)
                  | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
                | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
                | (2 * v102 - 1)
                | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 8)
              | (((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
                | (2 * v102 - 1)
                | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
              | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
              | (2 * v102 - 1)
              | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 16;
        v112 = (v111
              | (((((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
                  | (2 * v102 - 1)
                  | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
                | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
                | (2 * v102 - 1)
                | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 8)
              | (((((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
                | (2 * v102 - 1)
                | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 4)
              | (((2 * v102 - 1) | ((unsigned __int64)(2 * v102 - 1) >> 1)) >> 2)
              | (2 * v102 - 1)
              | ((unsigned __int64)(2 * v102 - 1) >> 1))
             + 1;
        if ( (unsigned int)v112 < 0x40 )
          LODWORD(v112) = 64;
        v255 = v112;
        v113 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v112, 8, v111, v13, v14, v15);
        v253 = v113;
        if ( v103 )
        {
          v254 = 0;
          v114 = 2LL * v102;
          v115 = &v103[v114];
          for ( j = &v113[2 * v255]; j != v113; v113 += 2 )
            *v113 = 0;
          for ( k = v103; v115 != k; k += 2 )
          {
            v118 = *k;
            if ( *k - 1 <= 0xFFFFFFFFFFFFFFFDLL )
            {
              if ( !v255 )
              {
                *(_QWORD *)&dword_0 = *k;
                BUG();
              }
              v119 = (v255 - 1) & (v118 ^ (v118 >> 9));
              v120 = &v253[2 * v119];
              v121 = *v120;
              if ( v118 != *v120 )
              {
                v235 = nullptr;
                v236 = 1;
                if ( v121 )
                {
                  while ( 1 )
                  {
                    if ( !v235 && v121 == -1 )
                      v235 = v120;
                    v119 = (v255 - 1) & (v236 + v119);
                    v120 = &v253[2 * v119];
                    v121 = *v120;
                    if ( v118 == *v120 )
                      goto LABEL_85;
                    if ( !v121 )
                      break;
                    ++v236;
                  }
                  if ( v235 )
                    v120 = v235;
                }
              }
LABEL_85:
              *v120 = *k;
              *((_DWORD *)v120 + 2) = *((_DWORD *)k + 2);
              LODWORD(v254) = v254 + 1;
            }
          }
          operator delete(v103, v114 * 8, 8);
          v113 = v253;
          v206 = v255;
          LODWORD(v13) = v254 + 1;
        }
        else
        {
          v254 = 0;
          v206 = v255;
          v227 = &v113[2 * v255];
          if ( v113 != v227 )
          {
            v228 = v113;
            do
            {
              *v228 = 0;
              v228 += 2;
            }
            while ( v227 != v228 );
          }
          LODWORD(v13) = 1;
        }
        if ( !v206 )
          goto LABEL_399;
        v207 = v206 - 1;
        v208 = (v206 - 1) & (v110 ^ (v110 >> 9));
        v106 = &v113[2 * v208];
        v209 = *v106;
        if ( v110 != *v106 )
        {
          v210 = nullptr;
          v211 = 1;
          if ( v209 )
          {
            while ( 1 )
            {
              if ( !v210 && v209 == -1 )
                v210 = v106;
              v208 = v207 & (v211 + v208);
              v106 = &v113[2 * v208];
              v209 = *v106;
              if ( v110 == *v106 )
                goto LABEL_162;
              if ( !v209 )
                break;
              ++v211;
            }
            if ( v210 )
              v106 = v210;
          }
        }
      }
LABEL_162:
      LODWORD(v254) = v13;
      if ( *v106 )
        --HIDWORD(v254);
      *v106 = v110;
      *((_DWORD *)v106 + 2) = 0;
LABEL_71:
      *((_DWORD *)v106 + 2) = v108;
      v101 = sub_BB2270(v101);
      if ( !v101 )
        goto LABEL_33;
      v103 = v253;
      v102 = v255;
    }
  }
  v16 = sub_15F2530(*a1);
  a10 = v16;
  if ( v16 )
  {
    v18 = *(_DWORD *)(v16 + 368);
    v239 = v18 != 0;
    sub_1A49A10(*a1, (__int64)&v265, a2, 0, 0, v17, *(double *)si128.m128i_i64, a8);
    sub_17A32D0(*a1, (int *)&v265, (__int64)a3, a2, 0, 0);
    v259 = 0u;
    v22 = v266;
    LODWORD(v260) = 0;
    v23 = 8LL * (unsigned int)v267;
    if ( !v23 )
    {
      if ( !v18 )
      {
        a10 = 0;
        v58 = 0;
        goto LABEL_32;
      }
      v184 = nullptr;
      goto LABEL_254;
    }
  }
  else
  {
    sub_1A49A10(*a1, (__int64)&v265, a2, 0, 0, v17, *(double *)si128.m128i_i64, a8);
    sub_17A32D0(*a1, (int *)&v265, (__int64)a3, a2, 0, 0);
    v239 = 0;
    v259 = 0u;
    v22 = v266;
    v23 = 8LL * (unsigned int)v267;
    LODWORD(v260) = 0;
    if ( !v23 )
    {
      v58 = 0;
      goto LABEL_32;
    }
  }
  v24 = v22;
  do
  {
    v28 = *(_QWORD *)v24 & 0xFFFFFFFFFFFFFFF8LL;
    v29 = v28;
    v250 = v28;
    if ( v239 )
    {
      v49 = v260;
      if ( (_DWORD)v260 )
      {
        v21 = v259.m128_u64[0];
        v50 = (v260 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
        v51 = v259.m128_u64[0] + 16LL * v50;
        v52 = *(_QWORD *)v51;
        if ( v28 == *(_QWORD *)v51 )
          goto LABEL_26;
        v212 = 1;
        v213 = 0;
        if ( v52 != -4096 )
        {
          while ( 1 )
          {
            if ( !v213 && v52 == -8192 )
              v213 = v51;
            v50 = (v260 - 1) & (v212 + v50);
            v51 = v259.m128_u64[0] + 16LL * v50;
            v52 = *(_QWORD *)v51;
            if ( v28 == *(_QWORD *)v51 )
              break;
            if ( v52 == -4096 )
            {
              if ( v213 )
                v51 = v213;
              goto LABEL_236;
            }
            ++v212;
          }
LABEL_26:
          sub_1AFDA20(&v252, (_QWORD *)v51, (_QWORD *)(v21 + 16LL * v49), (__int64)&v259, 1);
          v53 = sub_BB2270(v250);
          v251 = v53;
          if ( !v53 )
          {
LABEL_30:
            v29 = v250;
            goto LABEL_10;
          }
          v56 = v260;
          if ( (_DWORD)v260 )
          {
            v21 = (unsigned int)(v260 - 1);
            v20 = (unsigned int)v21 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
            v54 = v259.m128_u64[0] + 16 * v20;
            v57 = *(_QWORD *)v54;
            if ( v53 == *(_QWORD *)v54 )
            {
LABEL_29:
              *(_BYTE *)(v54 + 8) = 1;
              goto LABEL_30;
            }
            v225 = 1;
            v226 = 0;
            if ( v57 != -4096 )
            {
              while ( 1 )
              {
                if ( !v226 && v57 == -8192 )
                  v226 = v54;
                v20 = (unsigned int)v21 & (v225 + (_DWORD)v20);
                v54 = v259.m128_u64[0] + 16LL * (unsigned int)v20;
                v57 = *(_QWORD *)v54;
                if ( v53 == *(_QWORD *)v54 )
                  goto LABEL_29;
                if ( v57 == -4096 )
                {
                  if ( v226 )
                    v54 = v226;
                  break;
                }
                ++v225;
              }
            }
            v252.m128_u64[0] = v54;
            v20 = (unsigned int)(v259.m128_i32[2] + 1);
            v55 = (unsigned int)(4 * v20);
            if ( (unsigned int)v55 < 3 * (int)v260 )
            {
              v55 = (unsigned int)v260 >> 3;
              if ( (int)v260 - v259.m128_i32[3] - (int)v20 > (unsigned int)v55 )
              {
LABEL_277:
                v215 = *(_QWORD *)v54 == -4096;
                v259.m128_i32[2] = v20;
                if ( !v215 )
                  --v259.m128_i32[3];
                *(_QWORD *)v54 = v53;
                *(_BYTE *)(v54 + 8) = 0;
                goto LABEL_29;
              }
LABEL_282:
              sub_1B04D20((__int64 *)&v259, v56, v54, v20, v55, v21);
              sub_1AF8060((__int64 *)&v259, &v251, &v252);
              v53 = v251;
              v54 = v252.m128_u64[0];
              v20 = (unsigned int)(v259.m128_i32[2] + 1);
              goto LABEL_277;
            }
          }
          else
          {
            v252.m128_u64[0] = 0;
          }
          v56 = 2 * v260;
          goto LABEL_282;
        }
LABEL_236:
        v19 = (unsigned int)(3 * v260);
        v252.m128_u64[0] = v51;
        v214 = v259.m128_i32[2] + 1;
        if ( 4 * (v259.m128_i32[2] + 1) < (unsigned int)v19 )
        {
          v19 = (unsigned int)(v260 - v259.m128_i32[3] - v214);
          if ( (unsigned int)v19 > (unsigned int)v260 >> 3 )
          {
LABEL_238:
            v215 = *(_QWORD *)v51 == -4096;
            v259.m128_i32[2] = v214;
            if ( !v215 )
              --v259.m128_i32[3];
            *(_QWORD *)v51 = v29;
            *(_BYTE *)(v51 + 8) = 0;
            goto LABEL_26;
          }
          v222 = v260;
LABEL_258:
          sub_1B04D20((__int64 *)&v259, v222, v19, (unsigned int)v260, v29, v21);
          sub_1AF8060((__int64 *)&v259, (__int64 *)&v250, &v252);
          v29 = v250;
          v21 = v259.m128_u64[0];
          v49 = v260;
          v214 = v259.m128_i32[2] + 1;
          v51 = v252.m128_u64[0];
          goto LABEL_238;
        }
      }
      else
      {
        v252.m128_u64[0] = 0;
      }
      v222 = 2 * v260;
      goto LABEL_258;
    }
LABEL_10:
    v30 = v255;
    v31 = *(_DWORD *)(v29 + 24);
    v32 = v253;
    v33 = *(_QWORD *)&byte_8[*(_QWORD *)(v29 + 48) & 0xFFFFFFFFFFFFFFF0LL];
    v34 = v33 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v33 | *(_BYTE *)(v29 + 48)) & 7;
    if ( !v255 )
      goto LABEL_11;
    v25 = v255 - 1;
    v26 = v25 & (v34 ^ (v34 >> 9));
    v27 = &v253[2 * v26];
    v20 = *v27;
    if ( v34 == *v27 )
      goto LABEL_8;
    v159 = 1;
    v21 = 0;
    if ( v20 )
    {
      while ( 1 )
      {
        if ( v20 == -1 && !v21 )
          v21 = (__int64)v27;
        v29 = (unsigned int)(v159 + 1);
        v26 = v25 & (v159 + v26);
        v27 = &v253[2 * v26];
        v20 = *v27;
        if ( v34 == *v27 )
          goto LABEL_8;
        if ( !v20 )
          break;
        ++v159;
      }
      if ( v21 )
        v27 = (__int64 *)v21;
    }
    v20 = 3 * v255;
    v48 = v254 + 1;
    if ( 4 * ((int)v254 + 1) < (unsigned int)v20 )
    {
      v20 = v255 - HIDWORD(v254) - v48;
      if ( (unsigned int)v20 <= v255 >> 3 )
      {
        v167 = (((v25 >> 1) | v25) >> 2) | (v25 >> 1) | v25;
        v168 = (((v167 >> 4) | v167) >> 8) | (v167 >> 4) | v167;
        v169 = ((v168 >> 16) | v168) + 1;
        if ( (unsigned int)v169 < 0x40 )
          LODWORD(v169) = 64;
        v255 = v169;
        v170 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v169, 8, 64, v20, v29, v21);
        v253 = v170;
        if ( v32 )
        {
          v254 = 0;
          v171 = 2LL * v30;
          v172 = &v32[v171];
          for ( m = &v170[2 * v255]; m != v170; v170 += 2 )
            *v170 = 0;
          v174 = v32;
          do
          {
            while ( 1 )
            {
              v175 = *v174;
              if ( *v174 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                break;
              v174 += 2;
              if ( v172 == v174 )
                goto LABEL_176;
            }
            if ( !v255 )
            {
              *(_QWORD *)&dword_0 = *v174;
              BUG();
            }
            v176 = (v255 - 1) & (v175 ^ (v175 >> 9));
            v177 = &v253[2 * v176];
            v178 = *v177;
            if ( *v177 != v175 && v178 )
            {
              v249 = 1;
              v234 = nullptr;
              while ( 1 )
              {
                if ( !v234 && v178 == -1 )
                  v234 = v177;
                v176 = (v255 - 1) & (v249 + v176);
                v177 = &v253[2 * v176];
                v178 = *v177;
                if ( v175 == *v177 )
                  break;
                if ( !v178 )
                {
                  if ( v234 )
                    v177 = v234;
                  break;
                }
                ++v249;
              }
            }
            v179 = *v174;
            v174 += 2;
            *v177 = v179;
            *((_DWORD *)v177 + 2) = *((_DWORD *)v174 - 2);
            LODWORD(v254) = v254 + 1;
          }
          while ( v172 != v174 );
LABEL_176:
          operator delete(v32, v171 * 8, 8);
          v170 = v253;
          v180 = v255;
          v48 = v254 + 1;
        }
        else
        {
          v254 = 0;
          v180 = v255;
          v223 = &v170[2 * v255];
          if ( v170 != v223 )
          {
            v224 = v170;
            do
            {
              *v224 = 0;
              v224 += 2;
            }
            while ( v223 != v224 );
          }
          v48 = 1;
        }
        if ( !v180 )
        {
LABEL_407:
          LODWORD(v254) = v254 + 1;
          BUG();
        }
        v181 = v180 - 1;
        v182 = v181 & (v34 ^ (v34 >> 9));
        v27 = &v170[2 * v182];
        v20 = *v27;
        if ( v34 != *v27 )
        {
          v21 = 1;
          v183 = nullptr;
          if ( v20 )
          {
            while ( 1 )
            {
              if ( !v183 && v20 == -1 )
                v183 = v27;
              v182 = v181 & (v21 + v182);
              v27 = &v170[2 * v182];
              v20 = *v27;
              if ( v34 == *v27 )
                break;
              if ( !v20 )
              {
                if ( v183 )
                  v27 = v183;
                break;
              }
              v21 = (unsigned int)(v21 + 1);
            }
          }
        }
      }
    }
    else
    {
LABEL_11:
      v35 = (((((((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
              | (2 * v255 - 1)
              | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 4)
            | (((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
            | (2 * v255 - 1)
            | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 8)
          | (((((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
            | (2 * v255 - 1)
            | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 4)
          | (((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
          | (2 * v255 - 1)
          | ((unsigned __int64)(2 * v255 - 1) >> 1);
      v36 = ((v35 >> 16) | v35) + 1;
      if ( (unsigned int)v36 < 0x40 )
        LODWORD(v36) = 64;
      v255 = v36;
      v37 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v36, 8, 64, v20, v29, v21);
      v253 = v37;
      if ( v32 )
      {
        v254 = 0;
        v38 = 2LL * v30;
        v39 = &v32[v38];
        for ( n = &v37[2 * v255]; n != v37; v37 += 2 )
          *v37 = 0;
        for ( ii = v32; v39 != ii; LODWORD(v254) = v254 + 1 )
        {
          while ( 1 )
          {
            v42 = *ii;
            if ( *ii - 1 <= 0xFFFFFFFFFFFFFFFDLL )
              break;
            ii += 2;
            if ( v39 == ii )
              goto LABEL_23;
          }
          if ( !v255 )
          {
            *(_QWORD *)&dword_0 = *ii;
            BUG();
          }
          v43 = (v255 - 1) & (v42 ^ (v42 >> 9));
          v44 = &v253[2 * v43];
          v45 = *v44;
          if ( *v44 != v42 )
          {
            v232 = 1;
            v233 = nullptr;
            if ( v45 )
            {
              while ( 1 )
              {
                if ( !v233 && v45 == -1 )
                  v233 = v44;
                v43 = (v255 - 1) & (v232 + v43);
                v44 = &v253[2 * v43];
                v45 = *v44;
                if ( v42 == *v44 )
                  break;
                if ( !v45 )
                {
                  if ( v233 )
                    v44 = v233;
                  break;
                }
                ++v232;
              }
            }
          }
          v46 = *ii;
          ii += 2;
          *v44 = v46;
          *((_DWORD *)v44 + 2) = *((_DWORD *)ii - 2);
        }
LABEL_23:
        operator delete(v32, v38 * 8, 8);
        v37 = v253;
        v47 = v255;
        v48 = v254 + 1;
      }
      else
      {
        v254 = 0;
        v47 = v255;
        v161 = &v37[2 * v255];
        if ( v37 != v161 )
        {
          v162 = v37;
          do
          {
            *v162 = 0;
            v162 += 2;
          }
          while ( v161 != v162 );
        }
        v48 = 1;
      }
      if ( !v47 )
        goto LABEL_407;
      v163 = v47 - 1;
      v20 = v163 & ((unsigned int)v34 ^ (unsigned int)(v34 >> 9));
      v27 = &v37[2 * v20];
      v164 = *v27;
      if ( v34 != *v27 )
      {
        v165 = 1;
        v21 = 0;
        if ( v164 )
        {
          while ( 1 )
          {
            if ( !v21 && v164 == -1 )
              v21 = (__int64)v27;
            v20 = v163 & (v165 + (_DWORD)v20);
            v27 = &v37[2 * (unsigned int)v20];
            v164 = *v27;
            if ( v34 == *v27 )
              break;
            if ( !v164 )
            {
              if ( v21 )
                v27 = (__int64 *)v21;
              break;
            }
            ++v165;
          }
        }
      }
    }
    LODWORD(v254) = v48;
    if ( *v27 )
      --HIDWORD(v254);
    *v27 = v34;
    *((_DWORD *)v27 + 2) = 0;
LABEL_8:
    *((_DWORD *)v27 + 2) = v31;
    v24 += 8;
    v19 = (unsigned int)v267;
  }
  while ( &v266[8 * (unsigned int)v267] != v24 );
  v58 = v259.m128_u64[0];
  a10 = 0;
  v23 = 16LL * (unsigned int)v260;
  if ( !v239 )
    goto LABEL_32;
  v184 = (_QWORD *)(v259.m128_u64[0] + v23);
  if ( !v259.m128_i32[2] )
  {
LABEL_254:
    sub_1AFDA20(&v252, v184, v184, (__int64)&v259, 1);
    v186 = v252.m128_u64[1];
    v185 = v252.m128_u64[0];
    goto LABEL_190;
  }
  sub_1AFDA20(&v252, v259.m128_u64[0], v184, (__int64)&v259, 0);
  v186 = v252.m128_u64[1];
  v185 = v252.m128_u64[0];
LABEL_190:
  sub_1AFDA20(
    &v252,
    (_QWORD *)(v259.m128_u64[0] + 16LL * (unsigned int)v260),
    (_QWORD *)(v259.m128_u64[0] + 16LL * (unsigned int)v260),
    (__int64)&v259,
    1);
  if ( v252.m128_u64[0] == v185 )
  {
LABEL_200:
    a10 = 0;
    goto LABEL_201;
  }
  while ( *(_BYTE *)(v185 + 8) )
  {
    if ( v185 + 16 == v186 )
      goto LABEL_202;
    v187 = *(_QWORD *)(v185 + 16);
    if ( v187 == -8192 || v187 == -4096 )
    {
      v188 = (__int64 *)(v185 + 32);
      while ( 1 )
      {
        v185 = (unsigned __int64)v188;
        if ( v188 == (__int64 *)v186 )
          break;
        v189 = *v188;
        v188 += 2;
        if ( v189 != -8192 && v189 != -4096 )
          goto LABEL_199;
      }
LABEL_202:
      v185 = v186;
      if ( v252.m128_u64[0] == v186 )
        goto LABEL_200;
      continue;
    }
    v185 += 16LL;
LABEL_199:
    if ( v252.m128_u64[0] == v185 )
      goto LABEL_200;
  }
  a10 = *(_QWORD *)v185;
LABEL_201:
  v58 = v259.m128_u64[0];
  v23 = 16LL * (unsigned int)v260;
LABEL_32:
  operator delete(v58, v23, 8);
LABEL_33:
  v244 = a5 + 16 * a6;
  if ( v244 != a5 )
  {
    v59 = a5;
    while ( 1 )
    {
      v60 = *(_QWORD *)&byte_8[*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*(_QWORD *)v59)
          & 7;
      if ( v255 )
      {
        v61 = (v255 - 1) & (v60 ^ (v60 >> 9));
        v62 = &v253[2 * v61];
        v63 = *v62;
        if ( v60 == *v62 )
          goto LABEL_37;
        v92 = 1;
        if ( v63 )
          break;
      }
LABEL_57:
      sub_1AFDA90(&v259, &v253[2 * v255], &v253[2 * v255], (__int64)&v253, 1);
      v64 = v259.m128_u64[0];
LABEL_38:
      v65 = 0;
      sub_1AFDA90(&v259, &v253[2 * v255], &v253[2 * v255], (__int64)&v253, 1);
      if ( v259.m128_u64[0] != v64 )
      {
        sub_168B9F0((__int64)&v259, a1, *(_DWORD *)(v59 + 8), 0x1168u, 0);
        if ( v262 )
        {
          sub_AE9DF0(&v261, *(_QWORD *)v59, 8u);
        }
        else if ( v264 )
        {
          v97 = sub_168B9E0(&v259);
          v98 = v260;
          if ( v260 )
            v98 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v260 + 32LL))(v260);
          v252.m128_u64[0] = v98;
          v99 = sub_1587BC0(v97, (__int64 *)&v252, v93, v94, v95, v96);
          sub_AE9DF0((unsigned __int8 **)(*v99 + 32LL * v263 + 8), *(_QWORD *)v59, 8u);
        }
        v65 = 1;
        sub_15F7200(&v259);
        sub_168B9F0((__int64)&v259, a1, *(_DWORD *)(v64 + 8), 0x71u, 0);
        sub_15F7200(&v259);
      }
      v69 = v255;
      v70 = v253;
      v71 = *(_QWORD *)&byte_8[*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)v59 & 0xFFFFFFFFFFFFFFF0LL] | *(_BYTE *)v59) & 7;
      if ( !v255 )
        goto LABEL_86;
      v72 = v255 - 1;
      LODWORD(v73) = v72 & (v71 ^ (v71 >> 9));
      v74 = &v253[2 * (unsigned int)v73];
      v75 = *v74;
      if ( v71 != *v74 )
      {
        v100 = 1;
        v67 = nullptr;
        if ( v75 )
        {
          while ( 1 )
          {
            if ( !v67 && v75 == -1 )
              v67 = v74;
            v68 = (unsigned int)(v100 + 1);
            v73 = (unsigned int)v72 & ((_DWORD)v73 + v100);
            v74 = &v253[2 * v73];
            v75 = *v74;
            if ( v71 == *v74 )
              goto LABEL_44;
            if ( !v75 )
              break;
            ++v100;
          }
          if ( v67 )
            v74 = v67;
        }
        v66 = (unsigned int)(v254 + 1);
        if ( 4 * (int)v66 >= 3 * v255 )
        {
LABEL_86:
          v122 = (((((((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
                   | (2 * v255 - 1)
                   | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 4)
                 | (((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
                 | (2 * v255 - 1)
                 | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 8)
               | (((((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
                 | (2 * v255 - 1)
                 | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 4)
               | (((2 * v255 - 1) | ((unsigned __int64)(2 * v255 - 1) >> 1)) >> 2)
               | (2 * v255 - 1)
               | ((unsigned __int64)(2 * v255 - 1) >> 1);
          v123 = ((v122 >> 16) | v122) + 1;
          if ( (unsigned int)v123 < 0x40 )
            LODWORD(v123) = 64;
          v255 = v123;
          v124 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v123, 8, 64, v66, v67, v68);
          v253 = v124;
          if ( v70 )
          {
            v254 = 0;
            v125 = 2LL * v69;
            v126 = &v70[v125];
            for ( jj = &v124[2 * v255]; jj != v124; v124 += 2 )
              *v124 = 0;
            for ( kk = v70; v126 != kk; LODWORD(v254) = v254 + 1 )
            {
              while ( 1 )
              {
                v129 = *kk;
                if ( *kk - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                  break;
                kk += 2;
                if ( v126 == kk )
                  goto LABEL_98;
              }
              if ( !v255 )
              {
                *(_QWORD *)&dword_0 = *kk;
                BUG();
              }
              v130 = (v255 - 1) & (v129 ^ (v129 >> 9));
              v131 = &v253[2 * v130];
              v132 = *v131;
              if ( v129 != *v131 && v132 )
              {
                v246 = 1;
                v231 = nullptr;
                while ( 1 )
                {
                  if ( v132 == -1 && !v231 )
                    v231 = v131;
                  v130 = (v255 - 1) & (v246 + v130);
                  v131 = &v253[2 * v130];
                  v132 = *v131;
                  if ( v129 == *v131 )
                    break;
                  if ( !v132 )
                  {
                    if ( v231 )
                      v131 = v231;
                    break;
                  }
                  ++v246;
                }
              }
              v133 = *kk;
              kk += 2;
              *v131 = v133;
              *((_DWORD *)v131 + 2) = *((_DWORD *)kk - 2);
            }
LABEL_98:
            operator delete(v70, v125 * 8, 8);
            v124 = v253;
            v134 = v255;
            LODWORD(v66) = v254 + 1;
          }
          else
          {
            v254 = 0;
            v134 = v255;
            v202 = &v124[2 * v255];
            if ( v124 != v202 )
            {
              v203 = v124;
              do
              {
                *v203 = 0;
                v203 += 2;
              }
              while ( v202 != v203 );
            }
            LODWORD(v66) = 1;
          }
          if ( !v134 )
          {
LABEL_403:
            LODWORD(v254) = v254 + 1;
            BUG();
          }
          v135 = v134 - 1;
          v136 = v135 & (v71 ^ (v71 >> 9));
          v74 = &v124[2 * v136];
          v137 = *v74;
          if ( v71 != *v74 )
          {
            v138 = 1;
            v139 = nullptr;
            if ( v137 )
            {
              while ( 1 )
              {
                if ( !v139 && v137 == -1 )
                  v139 = v74;
                v136 = v135 & (v138 + v136);
                v74 = &v124[2 * v136];
                v137 = *v74;
                if ( v71 == *v74 )
                  break;
                if ( !v137 )
                {
LABEL_107:
                  if ( v139 )
                    v74 = v139;
                  break;
                }
                ++v138;
              }
            }
          }
        }
        else if ( v255 - HIDWORD(v254) - (unsigned int)v66 <= v255 >> 3 )
        {
          v140 = (((v72 >> 1) | v72) >> 2) | (v72 >> 1) | v72;
          v141 = (((v140 >> 4) | v140) >> 8) | (v140 >> 4) | v140;
          v142 = ((v141 >> 16) | v141) + 1;
          if ( (unsigned int)v142 < 0x40 )
            LODWORD(v142) = 64;
          v255 = v142;
          v143 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v142, 8, 64, v66, v67, v68);
          v144 = v71 ^ (v71 >> 9);
          v253 = v143;
          if ( v70 )
          {
            v254 = 0;
            v145 = 2LL * v69;
            v146 = &v70[v145];
            for ( mm = &v143[2 * v255]; mm != v143; v143 += 2 )
              *v143 = 0;
            v148 = v70;
            do
            {
              while ( 1 )
              {
                v149 = *v148;
                if ( *v148 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
                  break;
                v148 += 2;
                if ( v146 == v148 )
                  goto LABEL_121;
              }
              if ( !v255 )
              {
                *(_QWORD *)&dword_0 = *v148;
                BUG();
              }
              v150 = (v255 - 1) & (v149 ^ (v149 >> 9));
              v151 = &v253[2 * v150];
              v152 = *v151;
              if ( v149 != *v151 && v152 )
              {
                v248 = 1;
                v247 = nullptr;
                while ( 1 )
                {
                  if ( !v247 )
                  {
                    if ( v152 != -1 )
                      v151 = nullptr;
                    v247 = v151;
                  }
                  v150 = (v255 - 1) & (v248 + v150);
                  v151 = &v253[2 * v150];
                  v152 = *v151;
                  if ( v149 == *v151 )
                    break;
                  if ( !v152 )
                  {
                    if ( v247 )
                      v151 = v247;
                    break;
                  }
                  ++v248;
                }
              }
              v153 = *v148;
              v148 += 2;
              *v151 = v153;
              *((_DWORD *)v151 + 2) = *((_DWORD *)v148 - 2);
              LODWORD(v254) = v254 + 1;
            }
            while ( v146 != v148 );
LABEL_121:
            operator delete(v70, v145 * 8, 8);
            v144 = v71 ^ (v71 >> 9);
            v143 = v253;
            v154 = v255;
            LODWORD(v66) = v254 + 1;
          }
          else
          {
            v254 = 0;
            v154 = v255;
            v204 = &v143[2 * v255];
            if ( v143 != v204 )
            {
              v205 = v143;
              do
              {
                *v205 = 0;
                v205 += 2;
              }
              while ( v204 != v205 );
            }
            LODWORD(v66) = 1;
          }
          if ( !v154 )
            goto LABEL_403;
          v155 = v154 - 1;
          v156 = v155 & v144;
          v74 = &v143[2 * (v155 & v144)];
          v157 = *v74;
          if ( v71 != *v74 )
          {
            v158 = 1;
            v139 = nullptr;
            if ( v157 )
            {
              while ( 1 )
              {
                if ( !v139 && v157 == -1 )
                  v139 = v74;
                v156 = v155 & (v158 + v156);
                v74 = &v143[2 * v156];
                v157 = *v74;
                if ( v71 == *v74 )
                  break;
                if ( !v157 )
                  goto LABEL_107;
                ++v158;
              }
            }
          }
        }
        LODWORD(v254) = v66;
        if ( *v74 )
          --HIDWORD(v254);
        *v74 = v71;
        *((_DWORD *)v74 + 2) = 0;
      }
LABEL_44:
      *((_DWORD *)v74 + 2) = *(_DWORD *)(v59 + 8);
      v76 = (_QWORD *)sub_168B6C0((__int64)a1);
      v77 = sub_BB2020(v76, (__int64)a3, *(_DWORD *)(v59 + 8), a4, *(_QWORD *)v59, a10);
      sub_B94AD0(a3, v77, v78, v79, v80, v81);
      *(_BYTE *)(v77 + 29) = (32 * (a9 & 3)) | *(_BYTE *)(v77 + 29) & 0x9F;
      v82 = (unsigned int)v257;
      v83 = (unsigned int)v257 + 1LL;
      if ( v83 > HIDWORD(v257) )
      {
        sub_2237220(&ptr, v258, v83, 8);
        v82 = (unsigned int)v257;
      }
      *((_QWORD *)ptr + v82) = v77;
      LODWORD(v257) = v257 + 1;
      if ( v65 )
      {
        v59 += 16;
        sub_B88650(v77, 1);
        if ( v244 == v59 )
          goto LABEL_50;
      }
      else
      {
        v59 += 16;
        if ( v244 == v59 )
          goto LABEL_50;
        a10 = v77;
      }
    }
    while ( 1 )
    {
      v160 = v92 + 1;
      v61 = (v255 - 1) & (v92 + v61);
      v62 = &v253[2 * v61];
      if ( v60 == *v62 )
        break;
      if ( !*v62 )
        goto LABEL_57;
      v92 = v160;
    }
LABEL_37:
    sub_1AFDA90(&v259, v62, &v253[2 * v255], (__int64)&v253, 1);
    v64 = v259.m128_u64[0];
    goto LABEL_38;
  }
LABEL_50:
  v84 = v257;
  v85 = 0;
  v86 = (unsigned __int64 *)ptr;
  v87 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( v84 )
  {
    if ( v84 == 1 )
      v85 = *v86;
    else
      v85 = (unsigned __int64)sub_BA6010(v87, v86, v84, v88, v89, v90) | 1;
  }
  operator delete(v253, 16LL * v255, 8);
  sub_169D230((__int64)&v265);
  if ( ptr != v258 )
    free(ptr);
  return v85;
}
