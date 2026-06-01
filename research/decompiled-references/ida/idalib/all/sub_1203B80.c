void __fastcall sub_1203B80(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 *a5,
        __int64 *a6,
        __m128 a7,
        __m128 si128)
{
  __int64 *v8; // rbp
  _QWORD *v9; // rcx
  size_t *v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rsi
  size_t v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // ebx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // r9
  int v26; // eax
  __int64 v27; // rbx
  __int64 *v28; // rax
  unsigned __int8 *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rax
  _DWORD *v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdi
  const char *v40; // rbx
  int v41; // eax
  __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  _QWORD *v46; // r13
  _QWORD *i; // rbx
  __int64 v48; // rdi
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // r13
  _QWORD *j; // rbx
  __int64 v54; // rdi
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  _QWORD *v59; // rax
  _QWORD *v60; // rbx
  _QWORD *v61; // r14
  _QWORD *v62; // r13
  unsigned __int8 *v63; // r13
  _QWORD *v64; // r15
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 *v67; // rcx
  _DWORD *v68; // r15
  size_t v69; // r12
  const char *v70; // r15
  size_t v71; // rax
  signed __int64 v72; // rbp
  unsigned __int8 *v73; // r12
  const char *v74; // r15
  void *v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // r15
  _BYTE *v81; // rdi
  size_t v82; // rax
  void **v83; // rbp
  __int64 v84; // rax
  void **v85; // r12
  void **v86; // r15
  void **v87; // rdi
  void **v88; // rdi
  void **v89; // r12
  void **v90; // r15
  __int64 v91; // rbp
  char *v92; // r12
  __int64 v93; // rax
  __int64 v94; // rbx
  __int64 v95; // rax
  unsigned __int64 v96; // rdx
  int v97; // ecx
  __int64 v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  __int64 v105; // rdi
  int v106; // eax
  __int64 v107; // rbx
  const __m128i *v108; // r13
  __int64 v109; // r14
  __int64 v110; // rbp
  __int64 v111; // rdx
  __int64 v112; // rsi
  int v113; // eax
  __int64 v114; // rsi
  _BYTE *v115; // rcx
  __int64 v116; // rdi
  __int64 v117; // rcx
  _QWORD *v118; // rbp
  void (__fastcall *v119)(_QWORD *); // rax
  __int64 v120; // r13
  __int64 v121; // rbx
  void *v122; // rdi
  _QWORD *v123; // rdi
  _QWORD *v124; // rdi
  void **v125; // r13
  void **v126; // rbx
  void *v127; // rdi
  _QWORD *v128; // rdi
  const char *v129; // rbx
  __int64 v130; // rax
  unsigned __int64 v131; // rdx
  __int64 v132; // rbp
  const char *v133; // rdi
  size_t v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rdx
  int v137; // eax
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rsi
  __int64 v141; // rdx
  unsigned __int8 *v142; // r13
  _QWORD *v143; // r12
  __int64 v144; // rbx
  void *v145; // rdi
  const char *v146; // r13
  size_t v147; // rsi
  __int64 v148; // r14
  size_t v149; // rdx
  size_t v150; // r13
  void *v151; // rax
  size_t v152; // rax
  unsigned __int64 v153; // rax
  __int64 v154; // rdx
  _QWORD *v155; // r13
  _QWORD *v156; // rbx
  __int64 v157; // r14
  __int64 v158; // rax
  const char **v159; // rax
  size_t v160; // rbx
  char *v161; // r13
  __int64 v162; // rax
  unsigned __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // r14
  __int64 v166; // rax
  unsigned __int64 v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rcx
  unsigned __int64 v170; // rdx
  __int64 v171; // r14
  __int64 v172; // rax
  __int64 v173; // rax
  unsigned __int64 v174; // rdx
  __int64 v175; // rbx
  __int64 (*v176)(); // rax
  __int64 v177; // rax
  unsigned __int64 v178; // rdx
  __int64 v179; // rax
  __int64 v180; // rax
  _QWORD *v181; // r13
  __int64 v182; // r14
  __int64 v183; // rax
  unsigned __int64 v184; // rdx
  __int64 v185; // rax
  unsigned __int64 v186; // rdx
  __int64 v187; // rax
  unsigned __int64 v188; // rdx
  __int64 v189; // rbx
  __int64 v190; // rax
  __int64 v191; // rax
  unsigned __int64 v192; // rdx
  __int64 v193; // rbx
  __int16 v194; // ax
  int v195; // ebx
  __int64 v196; // rax
  unsigned __int64 v197; // rdx
  __int64 v198; // rax
  unsigned __int64 v199; // rdx
  __int64 v200; // r14
  unsigned __int64 v201; // rbx
  __int64 v202; // rdi
  __int64 v203; // rax
  const char **v204; // rax
  const char *v205; // r14
  size_t v206; // rax
  size_t v207; // r8
  size_t v208; // rax
  void *v209; // rdi
  unsigned __int8 *v210; // rsi
  size_t v211; // rax
  unsigned __int8 *v212; // rdx
  __int64 v213; // rax
  size_t v214; // rsi
  const char *v215; // r14
  const void *v216; // rax
  size_t v217; // rdx
  size_t v218; // r14
  __int64 v219; // rdx
  size_t v220; // rdi
  __int64 v221; // rdx
  int v222; // eax
  __int64 v223; // rax
  __int64 v224; // r13
  __int64 v225; // rdx
  __int64 v226; // r13
  __int64 *v227; // r12
  unsigned __int8 *v228; // rbp
  __int64 v229; // rbx
  void *v230; // rdi
  __int64 v231; // [rsp+10h] [rbp-258h]
  __int64 v232; // [rsp+10h] [rbp-258h]
  const char **v233; // [rsp+20h] [rbp-248h]
  size_t v234; // [rsp+28h] [rbp-240h]
  size_t v235; // [rsp+28h] [rbp-240h]
  size_t v236; // [rsp+28h] [rbp-240h]
  size_t v237; // [rsp+28h] [rbp-240h]
  size_t v238; // [rsp+28h] [rbp-240h]
  size_t v239; // [rsp+28h] [rbp-240h]
  size_t v240; // [rsp+28h] [rbp-240h]
  void *s2; // [rsp+30h] [rbp-238h] BYREF
  _DWORD *v242; // [rsp+38h] [rbp-230h]
  __int64 v243; // [rsp+40h] [rbp-228h]
  _QWORD *v244; // [rsp+48h] [rbp-220h]
  __int64 v245; // [rsp+50h] [rbp-218h]
  __int64 *v246; // [rsp+58h] [rbp-210h]
  unsigned __int8 *v247; // [rsp+60h] [rbp-208h]
  __int64 v248; // [rsp+68h] [rbp-200h]
  const char *v249; // [rsp+70h] [rbp-1F8h]
  unsigned __int8 *v250; // [rsp+78h] [rbp-1F0h]
  int v251; // [rsp+8Ch] [rbp-1DCh] BYREF
  unsigned __int8 *v252; // [rsp+90h] [rbp-1D8h] BYREF
  size_t v253; // [rsp+98h] [rbp-1D0h]
  __int16 v254; // [rsp+B0h] [rbp-1B8h]
  void *v255; // [rsp+C0h] [rbp-1A8h] BYREF
  size_t n[2]; // [rsp+C8h] [rbp-1A0h] BYREF
  int v257; // [rsp+D8h] [rbp-190h]
  void *ptr; // [rsp+100h] [rbp-168h] BYREF
  __int64 v259; // [rsp+108h] [rbp-160h]
  _QWORD v260[16]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v261[24]; // [rsp+190h] [rbp-D8h] BYREF
  void *v262[2]; // [rsp+1A8h] [rbp-C0h] BYREF
  int v263; // [rsp+1B8h] [rbp-B0h]
  int v264; // [rsp+1BCh] [rbp-ACh]
  _DWORD v265[4]; // [rsp+1C0h] [rbp-A8h] BYREF
  int v266; // [rsp+1D0h] [rbp-98h]
  int v267; // [rsp+1D4h] [rbp-94h]
  int v268; // [rsp+1D8h] [rbp-90h]
  int v269; // [rsp+1DCh] [rbp-8Ch]
  int v270; // [rsp+1E0h] [rbp-88h]
  int v271; // [rsp+1E4h] [rbp-84h]
  int v272; // [rsp+1E8h] [rbp-80h]
  int v273; // [rsp+1ECh] [rbp-7Ch]
  int v274; // [rsp+1F0h] [rbp-78h]
  int v275; // [rsp+1F4h] [rbp-74h]
  int v276; // [rsp+1F8h] [rbp-70h]

  v8 = a6;
  v248 = a4;
  v9 = *(_QWORD **)(a1 + 24);
  v245 = a1;
  v10 = (size_t *)v9[1];
  ptr = v260;
  v11 = v9 + 220;
  v243 = a2;
  v12 = v9[220];
  v231 = (__int64)v10;
  v13 = *v10;
  v242 = a3;
  v14 = v9[221];
  v234 = v13;
  v260[0] = "-fc1";
  v260[1] = "-triple";
  v259 = 0x1000000002LL;
  v15 = *a6;
  v244 = v9;
  v246 = a5;
  v260[2] = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v15 + 16))(a6, v12, v14);
  v16 = v242[2];
  v17 = 3;
  LODWORD(v259) = 3;
  if ( v16 == 3 )
  {
    if ( HIDWORD(v259) < 4uLL )
      sub_2237220(&ptr, v260, 4, 8);
    *((_QWORD *)ptr + (unsigned int)v259) = "-E";
    LODWORD(v259) = v259 + 1;
    if ( sub_10DCD30((__int64)v8, 0x129u) )
      sub_10DC5D0((__int64)&ptr, (__int64)"-dM");
  }
  else if ( (unsigned int)(v16 - 7) > 1 )
  {
    if ( v16 == 9 )
      sub_10DC5D0((__int64)&ptr, (__int64)"-emit-obj");
  }
  else
  {
    v18 = v242[3];
    if ( v18 == 67 )
    {
      sub_10DC5D0((__int64)&ptr, (__int64)"-fsyntax-only");
    }
    else if ( v18 == 48 )
    {
      sub_10DC5D0((__int64)&ptr, (__int64)"-emit-ast");
    }
    else if ( ((v18 - 43) & 0xFFFFFFFD) != 0 )
    {
      if ( (v18 & 0xFFFFFFFD) == 0x2C )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-emit-llvm-bc");
      }
      else if ( v18 == 38 )
      {
        sub_10DC5D0((__int64)&ptr, (__int64)"-S");
      }
    }
    else
    {
      if ( HIDWORD(v259) < 4uLL )
      {
        sub_2237220(&ptr, v260, 4, 8);
        v17 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v17) = "-emit-llvm";
      LODWORD(v259) = v259 + 1;
    }
  }
  v19 = *(_DWORD *)(*v246 + 24);
  v233 = (const char **)*v246;
  if ( (unsigned int)sub_12CC8E0(v19) )
  {
    *(_QWORD *)v261 = 0x14400000C6CLL;
    *(_QWORD *)&v261[8] = 0x87F00000D23LL;
    *(_QWORD *)&v261[16] = 0xBDA000000E9LL;
    sub_21B6650(v8, &ptr, v261, 6);
  }
  *(_QWORD *)v261 = 0x31D000002CFLL;
  *(_QWORD *)&v261[8] = 0x5FF000002E6LL;
  *(_QWORD *)&v261[16] = 0x35200000365LL;
  v262[0] = (void *)0x49B00000351LL;
  v262[1] = (void *)0x40E000001C9LL;
  v263 = 902;
  v264 = 1203;
  v265[0] = 1959;
  v265[1] = 1487;
  v265[2] = 419;
  v265[3] = 588;
  v266 = 587;
  v267 = 585;
  v268 = 896;
  v269 = 1037;
  v270 = 829;
  v271 = 1685;
  v272 = 1327;
  v273 = 1782;
  v274 = 551;
  v275 = 552;
  v276 = 1385;
  sub_21B6650(v8, &ptr, v261, 27);
  if ( *((_DWORD *)v233 + 2) == 1 )
  {
    v146 = *v233;
    v147 = 0;
    if ( *v233 )
      v147 = strlen(*v233);
    v148 = sub_228AB90(v146, v147, 0);
    v150 = v149;
    v151 = (void *)sub_12CC940(v19, 0);
    if ( !v151
      || (s2 = v151, v152 = strlen((const char *)v151), v152 <= v150)
      && (!v152 || !memcmp((const void *)(v148 + v150 - v152), s2, v152)) )
    {
      if ( v19 == 41 )
      {
        *(_QWORD *)v261 = 0x31D000002CFLL;
        v153 = sub_21B6DA0(v8, v261, 2);
        v154 = v8[1];
        *(_QWORD *)&v261[16] = 0x31D000002CFLL;
        v155 = (_QWORD *)(v154 + 8LL * (unsigned int)v153);
        v156 = (_QWORD *)(v154 + 8 * HIDWORD(v153));
        s2 = v156;
        a7 = _mm_loadh_ps((const double *)&s2);
        *(__m128 *)v261 = a7;
        if ( v155 == v156 )
          goto LABEL_216;
        while ( 1 )
        {
          v157 = *v155;
          if ( *v155 )
          {
            if ( (unsigned __int8)sub_21B9810(*v155, 719) || (unsigned __int8)sub_21B9810(v157, 797) )
              break;
          }
          *(_QWORD *)v261 = ++v155;
          if ( v156 == v155 )
            goto LABEL_216;
        }
        s2 = v156;
        *(_QWORD *)&v261[16] = 0x31D000002CFLL;
        a7 = _mm_loadh_ps((const double *)&s2);
        *(__m128 *)v261 = a7;
        if ( v156 == v155 )
        {
LABEL_216:
          sub_10DC5D0((__int64)&ptr, (__int64)"-ffixed-form");
        }
        else
        {
          do
          {
            v180 = *(_QWORD *)(*v155 + 16LL);
            if ( !v180 )
              v180 = *v155;
            v181 = v155 + 1;
            *(_BYTE *)(v180 + 44) |= 1u;
            *(_QWORD *)v261 = v181;
            if ( v181 == v156 )
              break;
            while ( 1 )
            {
              v182 = *v181;
              if ( *v181 )
              {
                if ( (unsigned __int8)sub_21B9810(*v181, 719) || (unsigned __int8)sub_21B9810(v182, 797) )
                  break;
              }
              *(_QWORD *)v261 = ++v181;
              if ( v156 == v181 )
                goto LABEL_14;
            }
            v155 = *(_QWORD **)v261;
          }
          while ( v156 != *(_QWORD **)v261 );
        }
      }
    }
  }
LABEL_14:
  sub_11BFC40((__int64 *)v231, (__int64)v8, (__int64)&ptr);
  v20 = *(_DWORD *)(v231 + 40);
  if ( v20 == 1 )
  {
    v185 = (unsigned int)v259;
    v186 = (unsigned int)v259 + 1LL;
    if ( v186 > HIDWORD(v259) )
    {
      sub_2237220(&ptr, v260, v186, 8);
      v185 = (unsigned int)v259;
    }
    *((_QWORD *)ptr + v185) = "-flto=full";
    LODWORD(v259) = v259 + 1;
    v247 = (unsigned __int8 *)&v255;
  }
  else
  {
    v247 = (unsigned __int8 *)&v255;
    if ( v20 == 2 )
    {
      v193 = *(_QWORD *)(v234 + 32);
      v255 = &n[1];
      sub_11FCC80(&v255, "the option '-flto=thin' is a work in progress", (__int64)"");
      *(_DWORD *)&v261[4] = 0;
      HIBYTE(v194) = v261[1] & 0xFE;
      LOBYTE(v194) = -37;
      *(_WORD *)v261 = v194;
      *(_QWORD *)&v261[8] = v262;
      if ( v255 == &n[1] )
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&n[1]);
        *(__m128 *)v262 = si128;
      }
      else
      {
        *(_QWORD *)&v261[8] = v255;
        v262[0] = (void *)n[1];
      }
      *(_QWORD *)&v261[16] = n[0];
      v195 = sub_FD5980(v193, (__int64)v261);
      if ( *(void ***)&v261[8] != v262 )
        operator delete(*(void **)&v261[8]);
      sub_FC70B0((__int64)v261, v234, 0, v195);
      sub_AEA040((__int64)v261);
      v196 = (unsigned int)v259;
      v197 = (unsigned int)v259 + 1LL;
      if ( v197 > HIDWORD(v259) )
      {
        sub_2237220(&ptr, v260, v197, 8);
        v196 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v196) = "-flto=thin";
      LODWORD(v259) = v259 + 1;
    }
  }
  v21 = v245;
  sub_11FCD40(v245, (__int64)v8, (__int64)&ptr);
  sub_1201600((__int64 *)v231, (__int64)v8, (__int64)&ptr);
  sub_1202C40(v21, v8, (__int64)&ptr);
  sub_11C59A0((__int64)v261, *(_DWORD **)(v21 + 24), (__int64)v8);
  v251 = *(_DWORD *)&v261[8];
  sub_11BDEA0((__int64 *)v231, (__int64)v8, (__int64)v11, (char *)&v251, (__int64)&ptr);
  sub_12006F0(v21, (__int64)v8, (__int64)&ptr);
  sub_21B7F70(v8, &ptr, 12);
  if ( !(unsigned __int8)sub_10DBA30((__int64)v8) )
    goto LABEL_17;
  v158 = sub_10DCD30((__int64)v8, 0x6F7u);
  if ( v158 )
  {
    v159 = *(const char ***)(v158 + 48);
    v160 = 0;
    v161 = (char *)*v159;
    if ( *v159 )
      v160 = strlen(*v159);
  }
  else
  {
    v160 = 4;
    v161 = "yaml";
  }
  v162 = (unsigned int)v259;
  v163 = (unsigned int)v259 + 1LL;
  if ( v163 > HIDWORD(v259) )
  {
    sub_2237220(&ptr, v260, v163, 8);
    v162 = (unsigned int)v259;
  }
  *((_QWORD *)ptr + v162) = "-opt-record-file";
  LODWORD(v259) = v259 + 1;
  v164 = sub_10DCD30((__int64)v8, 0x61Eu);
  if ( !v164 )
  {
    *(__m128i *)&v261[8] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    *(_QWORD *)v261 = v262;
    if ( !sub_10DCD30((__int64)v8, 0xF9u) && !sub_10DCD30((__int64)v8, 0xCF8u)
      || (v203 = sub_10DCD30((__int64)v8, 0xC2Cu)) == 0 )
    {
      v208 = *(_QWORD *)&v261[8];
LABEL_303:
      if ( v208 )
        goto LABEL_304;
      goto LABEL_316;
    }
    v204 = *(const char ***)(v203 + 48);
    v205 = *v204;
    if ( *v204 )
    {
      v206 = j__strlen(*v204);
      *(_QWORD *)&v261[8] = 0;
      v207 = v206;
      if ( v206 > *(_QWORD *)&v261[16] )
      {
        v237 = v206;
        sub_2236E10(v261, v262, v206, 1);
        v208 = *(_QWORD *)&v261[8];
        v207 = v237;
        v209 = (void *)(*(_QWORD *)&v261[8] + *(_QWORD *)v261);
        if ( !v237 )
        {
LABEL_302:
          *(_QWORD *)&v261[8] = v208;
          goto LABEL_303;
        }
LABEL_301:
        v238 = v207;
        memcpy(v209, v205, v207);
        v208 = v238 + *(_QWORD *)&v261[8];
        goto LABEL_302;
      }
      v209 = *(void **)v261;
      if ( v206 )
        goto LABEL_301;
    }
    else
    {
      *(_QWORD *)&v261[8] = 0;
    }
LABEL_316:
    v214 = 0;
    v215 = v233[4];
    if ( v215 )
      v214 = j__strlen(v233[4]);
    v216 = (const void *)sub_228AAA0(v215, v214, 0);
    *(_QWORD *)&v261[8] = 0;
    v218 = v217;
    v219 = 0;
    if ( v218 > *(_QWORD *)&v261[16] )
    {
      v240 = (size_t)v216;
      sub_2236E10(v261, v262, v218, 1);
      v219 = *(_QWORD *)&v261[8];
      v216 = (const void *)v240;
    }
    if ( v218 )
    {
      memcpy((void *)(*(_QWORD *)v261 + v219), v216, v218);
      v219 = *(_QWORD *)&v261[8];
    }
    *(_QWORD *)&v261[8] = v219 + v218;
LABEL_304:
    a7 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8D20);
    v257 = 779382895;
    v210 = v247 + 24;
    n[1] = a7.m128_u64[1];
    v255 = v247 + 24;
    n[0] = 4;
    if ( v160 + 4 > 0x20 )
    {
      sub_2236E10(v247, v210, v160 + 4, 1);
      v210 = (unsigned __int8 *)v255;
      v220 = n[0];
    }
    else
    {
      v211 = 4;
      v212 = v247 + 24;
      if ( !v160 )
      {
LABEL_306:
        v252 = v212;
        v254 = 261;
        n[0] = v160 + v211;
        v253 = v160 + v211;
        sub_228A730(v261, &v252, 0);
        v254 = 261;
        v252 = *(unsigned __int8 **)v261;
        v253 = *(_QWORD *)&v261[8];
        v213 = sub_10DA6C0((__int64)v8, (__int64)&v252);
        sub_10DC5D0((__int64)&ptr, v213);
        if ( v255 != v247 + 24 )
          free(v255);
        if ( *(void ***)v261 != v262 )
          free(*(void **)v261);
        goto LABEL_226;
      }
      v220 = 4;
    }
    memcpy(&v210[v220], v161, v160);
    v212 = (unsigned __int8 *)v255;
    v211 = n[0];
    goto LABEL_306;
  }
  v165 = **(_QWORD **)(v164 + 48);
  v166 = (unsigned int)v259;
  v167 = (unsigned int)v259 + 1LL;
  if ( v167 > HIDWORD(v259) )
  {
    sub_2237220(&ptr, v260, v167, 8);
    v166 = (unsigned int)v259;
  }
  *((_QWORD *)ptr + v166) = v165;
  LODWORD(v259) = v259 + 1;
LABEL_226:
  v168 = sub_10DCD30((__int64)v8, 0x61Fu);
  if ( v168 )
  {
    v169 = (unsigned int)v259;
    v170 = (unsigned int)v259 + 1LL;
    if ( v170 > HIDWORD(v259) )
    {
      v239 = v168;
      sub_2237220(&ptr, v260, v170, 8);
      v169 = (unsigned int)v259;
      v168 = v239;
    }
    *((_QWORD *)ptr + v169) = "-opt-record-passes";
    v171 = **(_QWORD **)(v168 + 48);
    LODWORD(v259) = v259 + 1;
    v172 = (unsigned int)v259;
    if ( (unsigned __int64)(unsigned int)v259 + 1 > HIDWORD(v259) )
    {
      sub_2237220(&ptr, v260, (unsigned int)v259 + 1LL, 8);
      v172 = (unsigned int)v259;
    }
    *((_QWORD *)ptr + v172) = v171;
    LODWORD(v259) = v259 + 1;
  }
  if ( v160 )
  {
    sub_10DC5D0((__int64)&ptr, (__int64)"-opt-record-format");
    v173 = (unsigned int)v259;
    v174 = (unsigned int)v259 + 1LL;
    if ( v174 > HIDWORD(v259) )
    {
      sub_2237220(&ptr, v260, v174, 8);
      v173 = (unsigned int)v259;
    }
    *((_QWORD *)ptr + v173) = v161;
    LODWORD(v259) = v259 + 1;
  }
LABEL_17:
  *(_QWORD *)v261 = 0x23700000AE1LL;
  *(_QWORD *)&v261[8] = 0xC360000036DLL;
  *(_QWORD *)&v261[16] = 0xD9700000CE8LL;
  v262[0] = (void *)0x63B0000020BLL;
  v262[1] = (void *)0x5A600000765LL;
  v263 = 1908;
  v264 = 1458;
  v265[0] = 872;
  sub_21B6650(v8, &ptr, v261, 13);
  if ( sub_10DCD30((__int64)v8, 0x22u) )
  {
    v22 = sub_10DCD30((__int64)v8, 0x22u);
    v23 = (unsigned int)sub_11BB6B0(v22);
  }
  else
  {
    v23 = sub_10DCD30((__int64)v8, 0x831u) != 0 ? 6 : 0;
  }
  sub_11BBD10((__int64)&ptr, v23);
  v24 = sub_10DCD30((__int64)v8, 0xD98u);
  if ( v24 )
    sub_21B5A40(v24, v8, &ptr);
  *(_QWORD *)v261 = 0x67200000663LL;
  sub_21B6650(v8, &ptr, v261, 2);
  if ( (unsigned __int8)sub_21B79D0(v8, 1563, 1562, 1265, 0, v25) && (v242[16] & 0xFFFFFFFB) == 0 )
  {
    v26 = sub_10DD170((__int64 *)v231, (__int64)v8);
    if ( v26 == 1 || v26 == 3 )
    {
      v191 = (unsigned int)v259;
      v192 = (unsigned int)v259 + 1LL;
      if ( v192 > HIDWORD(v259) )
      {
        sub_2237220(&ptr, v260, v192, 8);
        v191 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v191) = "-fopenmp";
      LODWORD(v259) = v259 + 1;
      sub_21B7F70(v8, &ptr, 1561);
      if ( sub_10DCD30((__int64)v8, 0x60Au) )
        sub_10DC5D0((__int64)&ptr, (__int64)"-fopenmp-force-usm");
    }
    else
    {
      v27 = sub_10DCD30((__int64)v8, 0x61Au);
      sub_FC70B0((__int64)v261, *(_QWORD *)v231, 0, 604);
      sub_AEC220((unsigned __int8 **)v261, *(_BYTE **)(v27 + 24), *(_QWORD *)(v27 + 32));
      v28 = *(__int64 **)(v27 + 48);
      v29 = *(unsigned __int8 **)v261;
      v30 = *v28;
      if ( !*(_QWORD *)v261 )
      {
        v221 = *(_QWORD *)&v261[8];
        v222 = *(_DWORD *)(*(_QWORD *)&v261[8] + 14976LL);
        if ( v222 )
        {
          v223 = (unsigned int)(v222 - 1);
          *(_DWORD *)(*(_QWORD *)&v261[8] + 14976LL) = v223;
          v29 = *(unsigned __int8 **)(v221 + 8 * v223 + 14848);
          v224 = *((unsigned int *)v29 + 134);
          *v29 = 0;
          v225 = *((_QWORD *)v29 + 66);
          *((_DWORD *)v29 + 106) = 0;
          v226 = v225 + (v224 << 6);
          if ( v225 != v226 )
          {
            v227 = v8;
            v228 = v29;
            v229 = v225;
            do
            {
              while ( 1 )
              {
                v226 -= 64;
                v230 = *(void **)(v226 + 24);
                if ( v230 == (void *)(v226 + 40) )
                  break;
                operator delete(v230);
                if ( v229 == v226 )
                  goto LABEL_337;
              }
            }
            while ( v229 != v226 );
LABEL_337:
            v29 = v228;
            v8 = v227;
          }
          *((_DWORD *)v29 + 134) = 0;
        }
        else
        {
          v29 = (unsigned __int8 *)operator new(0x3A0u);
          *v29 = 0;
          *((_QWORD *)v29 + 12) = v29 + 112;
          *((_QWORD *)v29 + 16) = v29 + 144;
          *((_QWORD *)v29 + 20) = v29 + 176;
          *((_QWORD *)v29 + 24) = v29 + 208;
          *((_QWORD *)v29 + 28) = v29 + 240;
          *((_QWORD *)v29 + 32) = v29 + 272;
          *((_QWORD *)v29 + 36) = v29 + 304;
          *((_QWORD *)v29 + 40) = v29 + 336;
          *((_QWORD *)v29 + 44) = v29 + 368;
          *((_QWORD *)v29 + 48) = v29 + 400;
          *((_QWORD *)v29 + 52) = v29 + 432;
          *((_QWORD *)v29 + 13) = 0;
          v29[112] = 0;
          *((_QWORD *)v29 + 17) = 0;
          v29[144] = 0;
          *((_QWORD *)v29 + 21) = 0;
          v29[176] = 0;
          *((_QWORD *)v29 + 25) = 0;
          v29[208] = 0;
          *((_QWORD *)v29 + 29) = 0;
          v29[240] = 0;
          *((_QWORD *)v29 + 33) = 0;
          v29[272] = 0;
          *((_QWORD *)v29 + 37) = 0;
          v29[304] = 0;
          *((_QWORD *)v29 + 41) = 0;
          v29[336] = 0;
          *((_QWORD *)v29 + 45) = 0;
          v29[368] = 0;
          *((_QWORD *)v29 + 49) = 0;
          v29[400] = 0;
          *((_QWORD *)v29 + 53) = 0x800000000LL;
          *((_QWORD *)v29 + 66) = v29 + 544;
          *((_QWORD *)v29 + 67) = 0x600000000LL;
        }
        *(_QWORD *)v261 = v29;
      }
      v29[*v29 + 1] = 1;
      v31 = *(_QWORD *)v261;
      v32 = (unsigned __int8)**(_BYTE **)v261;
      **(_BYTE **)v261 = v32 + 1;
      *(_QWORD *)(v31 + 8 * v32 + 16) = v30;
      sub_AEA040((__int64)v261);
    }
  }
  v33 = (unsigned int)v259;
  v34 = (unsigned int)v259 + 1LL;
  if ( v34 > HIDWORD(v259) )
  {
    sub_2237220(&ptr, v260, v34, 8);
    v33 = (unsigned int)v259;
  }
  *((_QWORD *)ptr + v33) = "-resource-dir";
  v35 = *(_QWORD *)(v231 + 248);
  LODWORD(v259) = v259 + 1;
  v36 = (unsigned int)v259;
  if ( (unsigned __int64)(unsigned int)v259 + 1 > HIDWORD(v259) )
  {
    sub_2237220(&ptr, v260, (unsigned int)v259 + 1LL, 8);
    v36 = (unsigned int)v259;
  }
  v37 = v242;
  v38 = v243;
  v39 = v245;
  *((_QWORD *)ptr + v36) = v35;
  v40 = "-mframe-pointer=reserved";
  LODWORD(v259) = v259 + 1;
  sub_1202690(v39, v38, v246, (__int64)v37, (size_t)v8, (__int64)&ptr);
  sub_21B6F20(v8, &ptr, 3495, 0, 0);
  v41 = sub_11BF230((__int64)v8, v11);
  if ( v41 != 1 )
  {
    if ( v41 <= 1 )
    {
      v40 = "-mframe-pointer=none";
      if ( v41 )
        v40 = nullptr;
    }
    else
    {
      v40 = "-mframe-pointer=non-leaf";
      if ( v41 != 2 )
      {
        v40 = "-mframe-pointer=all";
        if ( v41 != 3 )
          v40 = nullptr;
      }
    }
  }
  v42 = (unsigned int)v259;
  v43 = (unsigned int)v259 + 1LL;
  if ( v43 > HIDWORD(v259) )
  {
    sub_2237220(&ptr, v260, v43, 8);
    v42 = (unsigned int)v259;
  }
  *((_QWORD *)ptr + v42) = v40;
  LODWORD(v259) = v259 + 1;
  *(_DWORD *)v261 = 2465;
  v44 = sub_21B6DA0(v8, v261, 1);
  v45 = v8[1];
  v46 = (_QWORD *)(v45 + 8LL * (unsigned int)v44);
  for ( i = (_QWORD *)(v45 + 8 * HIDWORD(v44)); i != v46; ++v46 )
  {
    if ( *v46 && (unsigned __int8)sub_21B9810(*v46, 2465) )
      break;
  }
  while ( v46 != i )
  {
    v48 = *v46;
    v49 = *(_QWORD *)(*v46 + 16LL);
    if ( !v49 )
      v49 = *v46;
    ++v46;
    *(_BYTE *)(v49 + 44) |= 1u;
    sub_21B5A40(v48, v8, &ptr);
    if ( v46 == i )
      break;
    while ( !*v46 || !(unsigned __int8)sub_21B9810(*v46, 2465) )
    {
      if ( i == ++v46 )
        goto LABEL_49;
    }
  }
LABEL_49:
  *(_DWORD *)v261 = 2489;
  v50 = sub_21B6DA0(v8, v261, 1);
  v51 = v8[1];
  v52 = (_QWORD *)(v51 + 8LL * (unsigned int)v50);
  for ( j = (_QWORD *)(v51 + 8 * HIDWORD(v50)); j != v52; ++v52 )
  {
    if ( *v52 && (unsigned __int8)sub_21B9810(*v52, 2489) )
      break;
  }
  while ( j != v52 )
  {
    v54 = *v52;
    v55 = *(_QWORD *)(*v52 + 16LL);
    if ( !v55 )
      v55 = *v52;
    ++v52;
    *(_BYTE *)(v55 + 44) |= 1u;
    sub_21B5A40(v54, v8, &ptr);
    if ( v52 == j )
      break;
    while ( !*v52 || !(unsigned __int8)sub_21B9810(*v52, 2489) )
    {
      if ( j == ++v52 )
        goto LABEL_60;
    }
  }
LABEL_60:
  *(_DWORD *)v261 = 33;
  v56 = sub_21B6DA0(v8, v261, 1);
  v57 = v8[1];
  v58 = (unsigned int)v56;
  v59 = (_QWORD *)(v57 + 8 * HIDWORD(v56));
  v60 = (_QWORD *)(v57 + 8 * v58);
  v61 = v59;
  if ( v60 != v59 )
  {
    v62 = v59;
    do
    {
      if ( *v60 && (unsigned __int8)sub_21B9810(*v60, 33) )
        break;
      ++v60;
    }
    while ( v62 != v60 );
  }
  v235 = (size_t)v8;
  s2 = &ptr;
  v63 = v247 + 16;
  while ( v61 != v60 )
  {
    v64 = (_QWORD *)*v60;
    v65 = *(_QWORD *)(*v60 + 16LL);
    if ( !v65 )
      v65 = *v60;
    *(_BYTE *)(v65 + 44) |= 1u;
    sub_FC70B0((__int64)v261, *(_QWORD *)v231, 0, 600);
    v66 = (_QWORD *)v64[1];
    v67 = (__int64 *)v66[1];
    v68 = (_DWORD *)(v66[4] + 80LL * (unsigned int)(*(_DWORD *)(*v64 + 40LL) - 1));
    if ( *v68 )
    {
      v132 = *v67;
      v69 = 0;
      v133 = (const char *)(*v67 + *(unsigned int *)(v66[2] + 4LL * (unsigned int)(*v68 + 1)));
      if ( v133 )
        v69 = (unsigned int)strlen(v133);
      v71 = 0;
      v70 = (const char *)(v132 + (unsigned int)v68[1]);
      if ( v70 )
LABEL_71:
        v71 = strlen(v70);
      v72 = 0;
      if ( v71 < v69 )
        goto LABEL_74;
      goto LABEL_73;
    }
    v69 = 0;
    v70 = (const char *)(*v67 + (unsigned int)v68[1]);
    if ( v70 )
      goto LABEL_71;
    v69 = 0;
    v71 = 0;
LABEL_73:
    v72 = v71 - v69;
    v71 = v69;
LABEL_74:
    v73 = *(unsigned __int8 **)v261;
    v74 = &v70[v71];
    if ( !*(_QWORD *)v261 )
    {
      v136 = *(_QWORD *)&v261[8];
      v137 = *(_DWORD *)(*(_QWORD *)&v261[8] + 14976LL);
      if ( v137 )
      {
        v138 = (unsigned int)(v137 - 1);
        *(_DWORD *)(*(_QWORD *)&v261[8] + 14976LL) = v138;
        v73 = *(unsigned __int8 **)(v136 + 8 * v138 + 14848);
        v139 = *((unsigned int *)v73 + 134);
        v140 = *((_QWORD *)v73 + 66);
        *v73 = 0;
        *((_DWORD *)v73 + 106) = 0;
        v141 = v140 + (v139 << 6);
        if ( v140 != v141 )
        {
          v249 = v74;
          v250 = v63;
          v142 = v73;
          v143 = v60;
          v144 = v141;
          do
          {
            while ( 1 )
            {
              v144 -= 64;
              v145 = *(void **)(v144 + 24);
              if ( v145 == (void *)(v144 + 40) )
                break;
              operator delete(v145);
              if ( v140 == v144 )
                goto LABEL_199;
            }
          }
          while ( v140 != v144 );
LABEL_199:
          v60 = v143;
          v73 = v142;
          v74 = v249;
          v63 = v250;
        }
        *((_DWORD *)v73 + 134) = 0;
      }
      else
      {
        v73 = (unsigned __int8 *)operator new(0x3A0u);
        *v73 = 0;
        *((_QWORD *)v73 + 12) = v73 + 112;
        *((_QWORD *)v73 + 16) = v73 + 144;
        *((_QWORD *)v73 + 20) = v73 + 176;
        *((_QWORD *)v73 + 24) = v73 + 208;
        *((_QWORD *)v73 + 28) = v73 + 240;
        *((_QWORD *)v73 + 32) = v73 + 272;
        *((_QWORD *)v73 + 36) = v73 + 304;
        *((_QWORD *)v73 + 40) = v73 + 336;
        *((_QWORD *)v73 + 44) = v73 + 368;
        *((_QWORD *)v73 + 48) = v73 + 400;
        *((_QWORD *)v73 + 52) = v73 + 432;
        *((_QWORD *)v73 + 13) = 0;
        v73[112] = 0;
        *((_QWORD *)v73 + 17) = 0;
        v73[144] = 0;
        *((_QWORD *)v73 + 21) = 0;
        v73[176] = 0;
        *((_QWORD *)v73 + 25) = 0;
        v73[208] = 0;
        *((_QWORD *)v73 + 29) = 0;
        v73[240] = 0;
        *((_QWORD *)v73 + 33) = 0;
        v73[272] = 0;
        *((_QWORD *)v73 + 37) = 0;
        v73[304] = 0;
        *((_QWORD *)v73 + 41) = 0;
        v73[336] = 0;
        *((_QWORD *)v73 + 45) = 0;
        v73[368] = 0;
        *((_QWORD *)v73 + 49) = 0;
        v73[400] = 0;
        *((_QWORD *)v73 + 53) = 0x800000000LL;
        *((_QWORD *)v73 + 66) = v73 + 544;
        *((_QWORD *)v73 + 67) = 0x600000000LL;
      }
      *(_QWORD *)v261 = v73;
    }
    v73[*v73 + 1] = 0;
    v255 = v63;
    if ( &v74[v72] && !v74 )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( (unsigned __int64)v72 > 0xF )
    {
      if ( v72 < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v75 = (void *)operator new(v72 + 1);
      n[1] = v72;
      v255 = v75;
LABEL_176:
      memcpy(v75, v74, v72);
      v75 = v255;
      goto LABEL_80;
    }
    if ( v72 == 1 )
    {
      LOBYTE(n[1]) = *v74;
      v75 = v63;
      goto LABEL_80;
    }
    v75 = v63;
    if ( v72 )
      goto LABEL_176;
LABEL_80:
    n[0] = v72;
    *((_BYTE *)v75 + v72) = 0;
    v76 = *(_QWORD *)v261;
    v77 = (unsigned __int8)**(_BYTE **)v261;
    **(_BYTE **)v261 = v77 + 1;
    v78 = (unsigned __int8)v77;
    v79 = 32 * (v77 + 3);
    v80 = v76 + v79;
    v81 = *(_BYTE **)(v76 + v79);
    if ( v255 == v63 )
    {
      v134 = n[0];
      if ( n[0] )
      {
        if ( n[0] == 1 )
          *v81 = n[1];
        else
          memcpy(v81, v63, n[0]);
        v134 = n[0];
        v81 = *(_BYTE **)v80;
      }
      *(_QWORD *)(v80 + 8) = v134;
      v81[v134] = 0;
      v81 = v255;
    }
    else
    {
      if ( v81 == (_BYTE *)(v76 + v79 + 16) )
      {
        *(_QWORD *)v80 = v255;
        *(_QWORD *)(v80 + 8) = n[0];
        *(_QWORD *)(v80 + 16) = n[1];
      }
      else
      {
        v82 = *(_QWORD *)(v76 + 32 * v78 + 112);
        *(_QWORD *)v80 = v255;
        *(_QWORD *)(v80 + 8) = n[0];
        *(_QWORD *)(v80 + 16) = n[1];
        if ( v81 )
        {
          v255 = v81;
          n[1] = v82;
          goto LABEL_84;
        }
      }
      v255 = v63;
      v81 = v63;
    }
LABEL_84:
    n[0] = 0;
    *v81 = 0;
    if ( v255 != v63 )
      operator delete(v255);
    if ( (_BYTE)v266 )
    {
      sub_FC7790(*(__int64 *)&v261[16], (__int64 *)v261, SBYTE1(v266));
      *(_QWORD *)&v261[16] = 0;
      LOWORD(v266) = 0;
    }
    if ( v262[1] != v265 )
      operator delete(v262[1]);
    v83 = *(void ***)v261;
    if ( *(_QWORD *)v261 )
    {
      v84 = *(_QWORD *)&v261[8];
      if ( *(_QWORD *)&v261[8] )
      {
        if ( *(_QWORD *)v261 < *(_QWORD *)&v261[8]
          || *(_QWORD *)v261 > (unsigned __int64)(*(_QWORD *)&v261[8] + 14848LL) )
        {
          v85 = *(void ***)(*(_QWORD *)v261 + 528LL);
          v86 = &v85[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v261 + 536LL)];
          if ( v85 != v86 )
          {
            do
            {
              while ( 1 )
              {
                v86 -= 8;
                v87 = (void **)v86[3];
                if ( v87 == v86 + 5 )
                  break;
                operator delete(v87);
                if ( v85 == v86 )
                  goto LABEL_96;
              }
            }
            while ( v85 != v86 );
LABEL_96:
            v86 = (void **)v83[66];
          }
          if ( v86 != v83 + 68 )
            free(v86);
          v88 = (void **)v83[52];
          v89 = v83 + 52;
          if ( v88 != v83 + 54 )
            free(v88);
          v90 = v83 + 12;
          do
          {
            while ( 1 )
            {
              v89 -= 4;
              if ( *v89 == v89 + 2 )
                break;
              operator delete(*v89);
              if ( v90 == v89 )
                goto LABEL_104;
            }
          }
          while ( v90 != v89 );
LABEL_104:
          operator delete(v83, 0x3A0u);
        }
        else
        {
          v135 = *(unsigned int *)(*(_QWORD *)&v261[8] + 14976LL);
          *(_DWORD *)(*(_QWORD *)&v261[8] + 14976LL) = v135 + 1;
          *(_QWORD *)(v84 + 8 * v135 + 14848) = v83;
        }
      }
    }
    if ( ++v60 == v61 )
      break;
    while ( !*v60 || !(unsigned __int8)sub_21B9810(*v60, 33) )
    {
      if ( v61 == ++v60 )
        goto LABEL_109;
    }
  }
LABEL_109:
  v91 = v235;
  v92 = (char *)s2;
  v93 = sub_10DCD30(v235, 0xAu);
  v94 = v93;
  if ( v93 )
  {
    if ( (unsigned __int8)sub_21B9810(v93, 3063) )
    {
      v95 = (unsigned int)v259;
      v96 = (unsigned int)v259 + 1LL;
      if ( v96 > HIDWORD(v259) )
      {
        sub_2237220(v92, v92 + 16, v96, 8);
        v95 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v95) = "-O3";
      v97 = 530;
      LODWORD(v259) = v259 + 1;
      v98 = *(_QWORD *)v231;
      goto LABEL_114;
    }
    if ( (unsigned __int8)sub_21B9810(v94, 3076) )
    {
      v183 = (unsigned int)v259;
      v184 = (unsigned int)v259 + 1LL;
      if ( v184 > HIDWORD(v259) )
      {
        sub_2237220(v92, v92 + 16, v184, 8);
        v183 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v183) = "-O3";
      v97 = 545;
      LODWORD(v259) = v259 + 1;
      v98 = *(_QWORD *)v231;
LABEL_114:
      sub_FC70B0((__int64)v261, v98, 0, v97);
      sub_AEA040((__int64)v261);
    }
    else
    {
      sub_21B5A40(v94, v235, v92);
    }
  }
  sub_11BBDA0(v235, (__int64)v92);
  if ( *(_DWORD *)(v248 + 8) == 1 )
  {
    v187 = (unsigned int)v259;
    v188 = (unsigned int)v259 + 1LL;
    if ( v188 > HIDWORD(v259) )
    {
      sub_2237220(v92, v92 + 16, v188, 8);
      v187 = (unsigned int)v259;
    }
    *((_QWORD *)ptr + v187) = "-o";
    v189 = *(_QWORD *)v248;
    LODWORD(v259) = v259 + 1;
    v190 = (unsigned int)v259;
    if ( (unsigned __int64)(unsigned int)v259 + 1 > HIDWORD(v259) )
    {
      sub_2237220(v92, v92 + 16, (unsigned int)v259 + 1LL, 8);
      v190 = (unsigned int)v259;
    }
    *((_QWORD *)ptr + v190) = v189;
    LODWORD(v259) = v259 + 1;
  }
  if ( sub_10DCD30(v235, 0xCA7u) )
  {
    v99 = sub_10DCD30(v235, 0xCA7u);
    if ( v99 )
      sub_21B5A40(v99, v235, v92);
  }
  v100 = (unsigned int)v259;
  v101 = (unsigned int)v259 + 1LL;
  if ( v101 > HIDWORD(v259) )
  {
    sub_2237220(v92, v92 + 16, v101, 8);
    v100 = (unsigned int)v259;
  }
  *((_QWORD *)ptr + v100) = "-x";
  LODWORD(v259) = v259 + 1;
  v102 = sub_12CC8C0(*((unsigned int *)v233 + 6));
  v103 = (unsigned int)v259;
  v104 = (unsigned int)v259 + 1LL;
  if ( v104 > HIDWORD(v259) )
  {
    v236 = v102;
    sub_2237220(v92, v92 + 16, v104, 8);
    v103 = (unsigned int)v259;
    v102 = v236;
  }
  v105 = (__int64)v244;
  *((_QWORD *)ptr + v103) = v102;
  LODWORD(v259) = v259 + 1;
  LOBYTE(v252) = 0;
  LOBYTE(v255) = 0;
  if ( (unsigned __int8)sub_11BD280(v105, v91, &v252, v247) )
  {
    v175 = sub_11BB8D0((__int64)v244, v91);
    if ( (_BYTE)v252 )
    {
      v198 = (unsigned int)v259;
      v199 = (unsigned int)v259 + 1LL;
      if ( v199 > HIDWORD(v259) )
      {
        sub_2237220(v92, v92 + 16, v199, 8);
        v198 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v198) = "-record-command-line";
      LODWORD(v259) = v259 + 1;
      sub_10DC5D0((__int64)v92, v175);
    }
    v176 = *(__int64 (**)())(*v244 + 408LL);
    if ( v176 != sub_10D8230 && ((unsigned __int8 (__fastcall *)(_QWORD *))v176)(v244) || (_BYTE)v255 )
    {
      v177 = (unsigned int)v259;
      v178 = (unsigned int)v259 + 1LL;
      if ( v178 > HIDWORD(v259) )
      {
        sub_2237220(v92, v92 + 16, v178, 8);
        v177 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v177) = "-dwarf-debug-flags";
      LODWORD(v259) = v259 + 1;
      v179 = (unsigned int)v259;
      if ( (unsigned __int64)(unsigned int)v259 + 1 > HIDWORD(v259) )
      {
        sub_2237220(v92, v92 + 16, (unsigned int)v259 + 1LL, 8);
        v179 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v179) = v175;
      LODWORD(v259) = v259 + 1;
    }
  }
  v106 = *((_DWORD *)v233 + 2);
  if ( v106 )
  {
    v129 = *v233;
    if ( v106 == 1 )
    {
      v130 = (unsigned int)v259;
      v131 = (unsigned int)v259 + 1LL;
      if ( v131 > HIDWORD(v259) )
      {
        sub_2237220(v92, v92 + 16, v131, 8);
        v130 = (unsigned int)v259;
      }
      *((_QWORD *)ptr + v130) = v129;
      LODWORD(v259) = v259 + 1;
    }
    else
    {
      sub_21B5F60(*v233, v91, v92);
    }
  }
  sub_10E9650(v261, v231, "flang", 5, (__int64)v244);
  v107 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v91 + 16LL))(
           v91,
           *(_QWORD *)v261,
           *(_QWORD *)&v261[8]);
  if ( *(_BYTE **)v261 != &v261[16] )
    operator delete(*(void **)v261);
  v108 = (const __m128i *)*v246;
  v109 = *((unsigned int *)v246 + 2);
  v232 = v248;
  v110 = operator new(0x208u);
  sub_1106AE0(v110, (__int64)v242, v245, 0, (__int64)"@", v107, (__int64)v92, v108, v109, v232, 1, 0);
  *(_QWORD *)v261 = v110;
  v111 = *(unsigned int *)(v243 + 160);
  v112 = v111 + 1;
  v113 = *(_DWORD *)(v243 + 160);
  if ( v111 + 1 > (unsigned __int64)*(unsigned int *)(v243 + 164) )
  {
    v200 = v243;
    v201 = *(_QWORD *)(v243 + 152);
    v202 = v243 + 152;
    if ( v201 > (unsigned __int64)v261 || (unsigned __int64)v261 >= v201 + 8 * v111 )
    {
      sub_11673D0(v202, v112, a7, *(double *)si128.m128_u64);
      v115 = v261;
      v111 = *(unsigned int *)(v243 + 160);
      v114 = *(_QWORD *)(v243 + 152);
      v113 = *(_DWORD *)(v243 + 160);
    }
    else
    {
      sub_11673D0(v202, v112, a7, *(double *)si128.m128_u64);
      v114 = *(_QWORD *)(v200 + 152);
      v111 = *(unsigned int *)(v200 + 160);
      v115 = &v261[v114 - v201];
      v113 = *(_DWORD *)(v200 + 160);
    }
  }
  else
  {
    v114 = *(_QWORD *)(v243 + 152);
    v115 = v261;
  }
  v116 = *(_QWORD *)v115;
  *(_QWORD *)v115 = 0;
  v117 = v243;
  *(_QWORD *)(v114 + 8 * v111) = v116;
  v118 = *(_QWORD **)v261;
  *(_DWORD *)(v117 + 160) = v113 + 1;
  if ( v118 )
  {
    v119 = *(void (__fastcall **)(_QWORD *))(*v118 + 8LL);
    if ( v119 == sub_10D4290 )
    {
      v120 = v118[58];
      v121 = v118[57];
      *v118 = &off_2BA8F30;
      if ( v120 != v121 )
      {
        do
        {
          if ( *(_BYTE *)(v121 + 32) && *(_QWORD *)v121 != v121 + 16 )
            operator delete(*(void **)v121);
          v121 += 40;
        }
        while ( v120 != v121 );
        v121 = v118[57];
      }
      if ( v121 )
        operator delete((void *)v121);
      v122 = (void *)v118[54];
      if ( v122 )
        operator delete(v122);
      v123 = (_QWORD *)v118[50];
      if ( v123 != v118 + 52 )
        operator delete(v123);
      v124 = (_QWORD *)v118[32];
      if ( v124 != v118 + 34 )
        free(v124);
      v125 = (void **)v118[29];
      v126 = (void **)v118[28];
      if ( v125 != v126 )
      {
        do
        {
          while ( *v126 != v126 + 2 )
          {
            operator delete(*v126);
            v126 += 4;
            if ( v125 == v126 )
              goto LABEL_148;
          }
          v126 += 4;
        }
        while ( v125 != v126 );
LABEL_148:
        v126 = (void **)v118[28];
      }
      if ( v126 )
        operator delete(v126);
      v127 = (void *)v118[25];
      if ( v127 )
        operator delete(v127);
      v128 = (_QWORD *)v118[7];
      if ( v128 != v118 + 9 )
        free(v128);
      operator delete(v118, 0x208u);
    }
    else
    {
      v119(v118);
    }
  }
  if ( ptr != v92 + 16 )
    free(ptr);
}
