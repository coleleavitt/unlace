void (*__fastcall sub_1361E30(
        _QWORD *a1,
        char *a2,
        __int64 (__fastcall **a3)(),
        unsigned int a4,
        char *a5,
        __int64 a6,
        void *src,
        __int64 a8,
        int *a9,
        __int64 a10,
        __int64 a11))()
{
  _QWORD *v11; // rbx
  __int64 v12; // r14
  void (*v13)(); // rax
  int *v14; // r15
  void (__fastcall *v15)(_QWORD *, _QWORD, __int64 (__fastcall **)(), _QWORD, char *, __int64, _QWORD, _QWORD, _QWORD, void *, __int64, __int64); // rax
  void (*result)(); // rax
  const void *v17; // r8
  char *v18; // rdi
  size_t v19; // r13
  int v20; // eax
  void **p_ptr; // rbp
  __int64 v22; // rax
  __int64 (__fastcall **v23)(); // rdx
  __int64 (__fastcall **v24)(); // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  char v27; // di
  __int64 v28; // rax
  _QWORD *v29; // r14
  _QWORD *v30; // r13
  char v31; // dl
  _QWORD *v32; // rbp
  unsigned int *v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // r12
  void (__fastcall *v36)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD); // r15
  __int64 v37; // r9
  __int64 v38; // r12
  __int64 v39; // r13
  int *v40; // r13
  void **v41; // r14
  __int64 (__fastcall **v42)(); // r15
  int v43; // r14d
  __int64 v44; // r13
  void *v45; // r15
  void *v46; // rax
  __int64 v47; // rcx
  int v48; // edx
  unsigned __int64 v49; // rdx
  __int64 (__fastcall **v50)(); // rsi
  __int64 v51; // rdx
  void **v52; // r9
  int v53; // r14d
  void **v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rcx
  char *v57; // rax
  __int64 v58; // rdx
  void **v59; // rsi
  int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rcx
  unsigned int v63; // esi
  char *v64; // r14
  __int64 v65; // rdx
  int v66; // eax
  char *v67; // r12
  char *v68; // rbp
  unsigned __int64 v69; // r14
  __int64 v70; // rdx
  __m128i *v71; // r12
  _QWORD *v72; // rdx
  __m128i *v73; // rdi
  __int64 v74; // rax
  __m128i *v75; // rcx
  _QWORD *v76; // r9
  void *v77; // r8
  char *v78; // r14
  unsigned __int64 v79; // r12
  char *v80; // rbp
  __int64 v81; // rdx
  int *v82; // r12
  int *v83; // rbp
  int *v84; // rdi
  __int64 v85; // rax
  unsigned __int64 v86; // rdx
  __int64 (__fastcall **v87)(); // r13
  int *v88; // r12
  __m128 v89; // xmm0
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // r9
  char *v94; // r15
  char *v95; // r13
  _BYTE *i; // rax
  __int64 v97; // rsi
  unsigned int v98; // ecx
  __int64 v99; // rdi
  __m128i *v100; // r14
  __m128i *v101; // r13
  __int64 v102; // rsi
  __int64 v103; // rdi
  char *v104; // r15
  char *v105; // r13
  _BYTE *j; // rax
  __int64 v107; // rdi
  unsigned int v108; // ecx
  __int64 v109; // rdi
  __int64 *v110; // r14
  __int64 *v111; // r13
  __int64 v112; // rsi
  __int64 v113; // rdi
  __int64 v114; // r13
  __int64 v115; // rsi
  __int64 v116; // r14
  void *v117; // rdi
  _QWORD **v118; // r14
  _QWORD **v119; // r13
  char *v120; // r14
  char *v121; // r12
  _BYTE *k; // rax
  __int64 v123; // rdi
  unsigned int v124; // ecx
  __int64 v125; // rdi
  __int64 *v126; // r13
  __int64 *v127; // r12
  __int64 v128; // rsi
  __int64 v129; // rdi
  int *v130; // r13
  int *v131; // r12
  void **v132; // r14
  __int64 v133; // rax
  unsigned __int64 v134; // rdx
  char *v135; // rax
  __int64 v136; // r9
  __int64 v137; // r14
  char v138; // dl
  __int64 v139; // r9
  __m128i v140; // xmm5
  char v141; // dl
  __int64 v142; // r9
  __m128i v143; // xmm6
  char v144; // dl
  __int64 v145; // r9
  __m128i v146; // xmm7
  char v147; // dl
  __int64 v148; // r9
  __m128i v149; // xmm7
  char v150; // dl
  __int64 v151; // r9
  __m128i v152; // xmm6
  __int64 v153; // rdx
  __int64 v154; // r10
  int v155; // edx
  __int64 v156; // rdx
  __int64 v157; // r14
  __int64 v158; // r13
  _QWORD *v159; // rbp
  unsigned int *v160; // rsi
  __int64 v161; // rbx
  __int64 v162; // r12
  void (__fastcall *v163)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, void **); // r15
  __int64 v164; // r9
  int v165; // edx
  char *v166; // r12
  char *v167; // r14
  unsigned __int64 v168; // r13
  __int64 v169; // rdx
  __m128i v170; // xmm0
  __int64 (__fastcall **v172)(); // [rsp+8h] [rbp-A60h] BYREF
  char *v173; // [rsp+10h] [rbp-A58h]
  __int64 v174; // [rsp+18h] [rbp-A50h]
  void **v175; // [rsp+20h] [rbp-A48h]
  void **v176; // [rsp+28h] [rbp-A40h]
  __m128i *v177; // [rsp+30h] [rbp-A38h]
  __m128i *v178; // [rsp+38h] [rbp-A30h]
  int **v179; // [rsp+40h] [rbp-A28h] BYREF
  void **v180; // [rsp+48h] [rbp-A20h]
  void **v181; // [rsp+50h] [rbp-A18h]
  unsigned __int64 v182; // [rsp+58h] [rbp-A10h]
  __m128i *v183; // [rsp+60h] [rbp-A08h]
  void **v184; // [rsp+68h] [rbp-A00h]
  unsigned __int64 v185; // [rsp+70h] [rbp-9F8h]
  unsigned __int64 v186; // [rsp+78h] [rbp-9F0h]
  unsigned __int64 v187; // [rsp+80h] [rbp-9E8h]
  __m128i *v188; // [rsp+88h] [rbp-9E0h]
  __int64 v189; // [rsp+90h] [rbp-9D8h]
  __int64 v190; // [rsp+98h] [rbp-9D0h]
  __int64 v191; // [rsp+A0h] [rbp-9C8h]
  __m128i *v192; // [rsp+A8h] [rbp-9C0h]
  __m128i *v193; // [rsp+B0h] [rbp-9B8h]
  __int64 v194; // [rsp+B8h] [rbp-9B0h]
  char *v195; // [rsp+C0h] [rbp-9A8h] BYREF
  __int64 (__fastcall **v196)(); // [rsp+C8h] [rbp-9A0h]
  int v197; // [rsp+D0h] [rbp-998h] BYREF
  int *v198; // [rsp+D8h] [rbp-990h]
  __m128i v199; // [rsp+E0h] [rbp-988h] BYREF
  __m128i v200; // [rsp+F0h] [rbp-978h] BYREF
  __m128i v201; // [rsp+100h] [rbp-968h] BYREF
  __m128i v202; // [rsp+110h] [rbp-958h] BYREF
  __m128i v203; // [rsp+120h] [rbp-948h] BYREF
  __m128i v204; // [rsp+130h] [rbp-938h] BYREF
  __m128i v205; // [rsp+140h] [rbp-928h] BYREF
  _QWORD v206[2]; // [rsp+150h] [rbp-918h] BYREF
  __int64 v207; // [rsp+160h] [rbp-908h]
  _QWORD v208[4]; // [rsp+170h] [rbp-8F8h] BYREF
  _QWORD v209[4]; // [rsp+190h] [rbp-8D8h] BYREF
  _QWORD v210[4]; // [rsp+1B0h] [rbp-8B8h] BYREF
  _QWORD v211[4]; // [rsp+1D0h] [rbp-898h] BYREF
  _QWORD v212[4]; // [rsp+1F0h] [rbp-878h] BYREF
  _QWORD v213[4]; // [rsp+210h] [rbp-858h] BYREF
  _QWORD v214[4]; // [rsp+230h] [rbp-838h] BYREF
  _QWORD v215[4]; // [rsp+250h] [rbp-818h] BYREF
  __m128i v216; // [rsp+270h] [rbp-7F8h] BYREF
  __int64 v217; // [rsp+280h] [rbp-7E8h]
  __int64 v218; // [rsp+288h] [rbp-7E0h]
  __m128i v219; // [rsp+290h] [rbp-7D8h] BYREF
  __m128i *v220; // [rsp+2A0h] [rbp-7C8h]
  __int64 v221; // [rsp+2A8h] [rbp-7C0h]
  __m128i v222; // [rsp+2B0h] [rbp-7B8h] BYREF
  void **v223; // [rsp+2C0h] [rbp-7A8h]
  int *v224; // [rsp+2C8h] [rbp-7A0h]
  __m128i v225; // [rsp+2D0h] [rbp-798h] BYREF
  void **v226; // [rsp+2E0h] [rbp-788h]
  int *v227; // [rsp+2E8h] [rbp-780h]
  __m128i v228; // [rsp+2F0h] [rbp-778h] BYREF
  __int64 v229; // [rsp+300h] [rbp-768h]
  __int64 v230; // [rsp+308h] [rbp-760h]
  void *v231[2]; // [rsp+310h] [rbp-758h] BYREF
  __int64 v232; // [rsp+320h] [rbp-748h] BYREF
  int *v233; // [rsp+328h] [rbp-740h]
  void *v234; // [rsp+340h] [rbp-728h] BYREF
  __int64 v235; // [rsp+348h] [rbp-720h]
  _BYTE dest[240]; // [rsp+350h] [rbp-718h] BYREF
  __m128i v237; // [rsp+440h] [rbp-628h] BYREF
  __int128 v238; // [rsp+450h] [rbp-618h] BYREF
  _QWORD *v239; // [rsp+460h] [rbp-608h] BYREF
  void *v240; // [rsp+468h] [rbp-600h]
  void **v241; // [rsp+470h] [rbp-5F8h]
  _QWORD **v242; // [rsp+478h] [rbp-5F0h]
  __int64 v243; // [rsp+480h] [rbp-5E8h]
  __int64 v244; // [rsp+488h] [rbp-5E0h]
  __int64 v245; // [rsp+490h] [rbp-5D8h]
  unsigned int v246; // [rsp+498h] [rbp-5D0h]
  void *v247; // [rsp+4A0h] [rbp-5C8h]
  __int64 v248; // [rsp+4A8h] [rbp-5C0h]
  _BYTE v249[48]; // [rsp+4B0h] [rbp-5B8h] BYREF
  void *v250; // [rsp+4E0h] [rbp-588h] BYREF
  void *v251; // [rsp+508h] [rbp-560h]
  unsigned int v252; // [rsp+510h] [rbp-558h]
  __int64 v253; // [rsp+518h] [rbp-550h] BYREF
  __int64 *v254; // [rsp+538h] [rbp-530h]
  unsigned int v255; // [rsp+540h] [rbp-528h]
  _BYTE v256[40]; // [rsp+548h] [rbp-520h] BYREF
  void *v257; // [rsp+570h] [rbp-4F8h]
  __int64 v258; // [rsp+578h] [rbp-4F0h]
  _BYTE v259[32]; // [rsp+580h] [rbp-4E8h] BYREF
  __m128i *v260; // [rsp+5A0h] [rbp-4C8h]
  __int64 v261; // [rsp+5A8h] [rbp-4C0h]
  __m128i si128; // [rsp+5B0h] [rbp-4B8h] BYREF
  int *v263; // [rsp+5C0h] [rbp-4A8h] BYREF
  __int64 v264; // [rsp+5C8h] [rbp-4A0h]
  char v265; // [rsp+5D0h] [rbp-498h] BYREF
  void *ptr; // [rsp+7D0h] [rbp-298h] BYREF
  _BYTE v267[24]; // [rsp+7D8h] [rbp-290h]
  char v268; // [rsp+7F0h] [rbp-278h]
  void *v269; // [rsp+7F8h] [rbp-270h]
  __int64 v270; // [rsp+800h] [rbp-268h]
  _OWORD v271[29]; // [rsp+808h] [rbp-260h] BYREF
  void *v272; // [rsp+9D8h] [rbp-90h]
  __int64 v273; // [rsp+9E0h] [rbp-88h]
  _BYTE v274[32]; // [rsp+9E8h] [rbp-80h] BYREF
  __int64 *v275; // [rsp+A08h] [rbp-60h]
  __int64 v276; // [rsp+A10h] [rbp-58h]
  _OWORD v277[5]; // [rsp+A18h] [rbp-50h] BYREF

  v11 = a1;
  v12 = (__int64)a9;
  v13 = *(void (**)())(*a1 + 64LL);
  v196 = a3;
  v195 = a2;
  v14 = a9;
  v173 = a5;
  v174 = a6;
  v175 = (void **)a10;
  if ( v13 != nullsub_643 )
    ((void (__fastcall *)(_QWORD *, __int64, _QWORD))v13)(a1, a11, a4);
  if ( !(_DWORD)v195 )
  {
    v15 = *(void (__fastcall **)(_QWORD *, _QWORD, __int64 (__fastcall **)(), _QWORD, char *, __int64, _QWORD, _QWORD, _QWORD, void *, __int64, __int64))(*a1 + 16LL);
    ptr = nullptr;
    *(_OWORD *)v267 = 0u;
    v15(a1, 0, v196, a4, v173, v174, 0, 0, 0, src, a8, a11);
    goto LABEL_5;
  }
  v17 = src;
  v176 = &v234;
  v18 = dest;
  v234 = dest;
  v19 = 12 * a8;
  v235 = 0x1400000000LL;
  v20 = 0;
  if ( 0xAAAAAAAAAAAAAAABLL * ((12 * a8) >> 2) > 0x14 )
  {
    sub_2237220(v176, dest, 0xAAAAAAAAAAAAAAABLL * ((12 * a8) >> 2), 12);
    v20 = v235;
    v17 = src;
    v18 = (char *)v234 + 12 * (unsigned int)v235;
  }
  if ( v19 )
  {
    memcpy(v18, v17, v19);
    v20 = v235;
  }
  v179 = &v263;
  v263 = (int *)&v265;
  LODWORD(v235) = v20 - 1431655765 * ((12 * a8) >> 2);
  p_ptr = &ptr;
  v264 = 0x800000000LL;
  v172 = v196;
  if ( a10 )
  {
    v87 = (__int64 (__fastcall **)())v11[1];
    v270 = 0x800000000LL;
    v88 = &a9[16 * a10];
    v272 = v274;
    v273 = 0x400000000LL;
    ptr = v196;
    *(_QWORD *)v267 = v87;
    *(_OWORD *)&v267[8] = 0;
    v268 = 1;
    v269 = v271;
    v271[28] = 0;
    v275 = (__int64 *)v277;
    v276 = 0;
    v277[0] = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    if ( v88 != a9 )
    {
      do
      {
        if ( *(_QWORD *)(v12 + 32) )
        {
          if ( !*(_BYTE *)(v12 + 8) && *(_DWORD *)(v12 + 4) == *(_DWORD *)v12 )
            sub_12D6B10(
              (__int64)&ptr,
              *(_DWORD *)v12,
              *(const void **)(v12 + 24),
              *(_QWORD *)(v12 + 32),
              0,
              *(_BYTE *)(v12 + 56));
          else
            sub_12D7490(
              (__int64)&ptr,
              *(_QWORD *)v12,
              *(_DWORD *)(v12 + 8),
              *(const void **)(v12 + 24),
              *(_QWORD *)(v12 + 32));
        }
        else if ( *(_DWORD *)(v12 + 12) && *(_DWORD *)(v12 + 16) )
        {
          sub_12D7290(
            (__int64)&ptr,
            *(_DWORD *)v12,
            *(_QWORD *)(v12 + 12),
            *(_DWORD *)(v12 + 20),
            0,
            *(_BYTE *)(v12 + 56));
        }
        else
        {
          sub_12D75B0((__int64 *)&ptr, *(_QWORD *)v12, *(_DWORD *)(v12 + 8));
        }
        v12 += 64;
      }
      while ( v88 != (int *)v12 );
    }
    v172 = v87;
    v241 = (void **)&v239;
    v242 = &v239;
    v89 = _mm_loadh_ps((const double *)&v172);
    v247 = v249;
    v237 = (__m128i)v89;
    v248 = 0x200000000LL;
    *(_QWORD *)&v238 = 0;
    LODWORD(v239) = 0;
    v240 = nullptr;
    v243 = 0;
    v244 = 0;
    v245 = 0;
    v246 = 0;
    sub_FE8750((__int64)&v250, (__int64)v87, 0);
    *(_OWORD *)&v256[24] = 0;
    v257 = v259;
    v258 = 0x400000000LL;
    v260 = &si128;
    v261 = 0;
    si128 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
    if ( (unsigned __int8)sub_12DA4E0(&v237, (__int64)&ptr, v90, v91, v92, v93) )
    {
      v172 = off_2C43530;
      *(__m128 *)v231 = _mm_loadh_ps((const double *)&v179);
      sub_12D8F30((__int64)&v237, (__int64 *)v231, 1u);
    }
    v94 = (char *)v257;
    v95 = (char *)v257 + 8 * (unsigned int)v258;
    if ( v257 != v95 )
    {
      for ( i = v257; ; i = v257 )
      {
        v97 = 0x40000000000LL;
        v98 = (unsigned int)((v94 - i) >> 3) >> 7;
        if ( v98 <= 0x1D )
          v97 = 4096LL << v98;
        v99 = *(_QWORD *)v94;
        v94 += 8;
        operator delete(v99, v97, 16);
        if ( v95 == v94 )
          break;
      }
    }
    v100 = v260;
    v101 = &v260[(unsigned int)v261];
    if ( v260 != v101 )
    {
      do
      {
        v102 = v100->m128i_i64[1];
        v103 = v100->m128i_i64[0];
        ++v100;
        operator delete(v103, v102, 16);
      }
      while ( v101 != v100 );
      v101 = v260;
    }
    if ( v101 != &si128 )
      free(v101);
    if ( v257 != v259 )
      free(v257);
    v104 = (char *)v251;
    v105 = (char *)v251 + 8 * v252;
    if ( v251 != v105 )
    {
      for ( j = v251; ; j = v251 )
      {
        v108 = (unsigned int)((v104 - j) >> 3) >> 7;
        if ( v108 > 0x1D )
        {
          v107 = *(_QWORD *)v104;
          v104 += 8;
          operator delete(v107, 0x40000000000LL, 16);
          if ( v105 == v104 )
            break;
        }
        else
        {
          v109 = *(_QWORD *)v104;
          v104 += 8;
          operator delete(v109, 4096LL << v108, 16);
          if ( v104 == v105 )
            break;
        }
      }
    }
    v110 = v254;
    v111 = &v254[2 * v255];
    if ( v254 != v111 )
    {
      do
      {
        v112 = v110[1];
        v113 = *v110;
        v110 += 2;
        operator delete(v113, v112, 16);
      }
      while ( v111 != v110 );
      v111 = v254;
    }
    if ( v111 != (__int64 *)v256 )
      free(v111);
    if ( v251 != &v253 )
      free(v251);
    free(v250);
    if ( v247 != v249 )
      free(v247);
    v114 = v244;
    v115 = 56LL * v246;
    if ( v246 )
    {
      v116 = v244 + 56LL * v246;
      do
      {
        if ( (unsigned int)(*(_DWORD *)v114 + 2) > 1 )
        {
          v117 = *(void **)(v114 + 8);
          if ( v117 != (void *)(v114 + 24) )
            free(v117);
        }
        v114 += 56;
      }
      while ( v116 != v114 );
      v114 = v244;
      v115 = 56LL * v246;
    }
    operator delete(v114, v115, 8);
    v118 = (_QWORD **)v240;
    if ( v240 )
    {
      do
      {
        sub_12D8710((__int64)&v238 + 8, v118[3]);
        v119 = (_QWORD **)v118[2];
        operator delete(v118);
        v118 = v119;
      }
      while ( v119 );
    }
    v120 = (char *)v272;
    v121 = (char *)v272 + 8 * (unsigned int)v273;
    if ( v272 != v121 )
    {
      for ( k = v272; ; k = v272 )
      {
        v124 = (unsigned int)((v120 - k) >> 3) >> 7;
        if ( v124 > 0x1D )
        {
          v123 = *(_QWORD *)v120;
          v120 += 8;
          operator delete(v123, 0x40000000000LL, 16);
          if ( v121 == v120 )
            break;
        }
        else
        {
          v125 = *(_QWORD *)v120;
          v120 += 8;
          operator delete(v125, 4096LL << v124, 16);
          if ( v120 == v121 )
            break;
        }
      }
    }
    v126 = v275;
    v127 = &v275[2 * (unsigned int)v276];
    if ( v275 != v127 )
    {
      do
      {
        v128 = v126[1];
        v129 = *v126;
        v126 += 2;
        operator delete(v129, v128, 16);
      }
      while ( v127 != v126 );
      v127 = v275;
    }
    if ( v127 != (__int64 *)v277 )
      free(v127);
    if ( v272 != v274 )
      free(v272);
    if ( v269 != v271 )
      free(v269);
    v14 = v263;
    v175 = (void **)(unsigned int)v264;
    v130 = &v263[16 * (unsigned __int64)(unsigned int)v264];
    if ( v263 != v130 )
    {
      v131 = v263;
      v132 = v176 + 2;
      do
      {
        if ( *v131 && v131[1] )
        {
          ptr = *(void **)v131;
          *(_DWORD *)v267 = v131[2];
          v133 = (unsigned int)v235;
          v134 = (unsigned int)v235 + 1LL;
          if ( v134 > HIDWORD(v235) )
          {
            sub_2237220(v176, v132, v134, 12);
            v133 = (unsigned int)v235;
          }
          v135 = (char *)v234 + 12 * v133;
          *(_QWORD *)v135 = ptr;
          *((_DWORD *)v135 + 2) = *(_DWORD *)v267;
          LODWORD(v235) = v235 + 1;
        }
        v131 += 16;
      }
      while ( v130 != v131 );
    }
    v172 = v196;
  }
  LODWORD(v180) = (_DWORD)v195;
  LODWORD(v195) = sub_101B310((__int64)&v195);
  v22 = v11[2];
  v196 = v23;
  sub_101B340(v206, (unsigned int *)&v195, (*(_BYTE *)(v22 + 1) & 0x20) != 0);
  v24 = nullptr;
  v25 = 0;
  LODWORD(v181) = (_DWORD)v195;
  v178 = (__m128i *)v196;
  if ( v206[0] )
  {
    v25 = HIDWORD(v207);
    v24 = v196;
  }
  if ( *((_DWORD *)v11 + 7) != (_DWORD)v25 )
  {
    v26 = v11[2];
    *((_DWORD *)v11 + 7) = v25;
    v27 = *(_BYTE *)(v26 + 1);
    if ( v27 < 0 || a4 != 1 )
    {
      if ( (_DWORD)v25 )
      {
        sub_1361790(v11, v25, (__int64)v24);
      }
      else
      {
        v28 = v178[41].m128i_i64[0];
        v29 = (_QWORD *)(v28 + 48LL * v178[41].m128i_u32[2]);
        if ( (_QWORD *)v28 != v29 )
        {
          v30 = (_QWORD *)v178[41].m128i_i64[0];
          v184 = &ptr;
          v31 = v27;
          v177 = (__m128i *)v208;
          v32 = v11;
          v183 = (__m128i *)v14;
          while ( 1 )
          {
            v33 = (unsigned int *)(v30 + 4);
            v34 = *v30;
            v35 = v30[1];
            v30 += 6;
            v36 = *(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*v32 + 56LL);
            sub_101B340(v177, v33, (v31 & 0x20) != 0);
            v36(v32, *((unsigned int *)v30 - 4), *(v30 - 1), v34, v35, v37, v208[0], v208[1], v208[2]);
            if ( v29 == v30 )
              break;
            v31 = *(_BYTE *)(v32[2] + 1LL);
          }
          v11 = v32;
          v14 = (int *)v183;
          p_ptr = v184;
        }
        v197 = (int)v181;
        v198 = (int *)v178;
        if ( (_DWORD)v181 )
        {
          sub_101B390((__int64)&v216, &v197);
          v38 = v218;
          v39 = v217;
          v199 = _mm_load_si128(&v216);
          if ( v218 )
          {
            sub_101B340(v209, (unsigned int *)&v199, (*(_BYTE *)(v11[2] + 1LL) & 0x20) != 0);
            sub_101B390((__int64)&v219, v199.m128i_i32);
            v137 = v221;
            v200 = _mm_load_si128(&v219);
            v177 = v220;
            if ( v221 )
            {
              v138 = *(_BYTE *)(v11[2] + 1LL);
              v178 = &v200;
              sub_101B340(v210, (unsigned int *)&v200, (v138 & 0x20) != 0);
              sub_101B390((__int64)&v222, v178->m128i_i32);
              v140 = _mm_load_si128(&v222);
              v181 = v223;
              v201 = v140;
              v178 = (__m128i *)v224;
              if ( v224 )
              {
                v141 = *(_BYTE *)(v11[2] + 1LL);
                v183 = &v201;
                sub_101B340(v211, (unsigned int *)&v201, (v141 & 0x20) != 0);
                sub_101B390((__int64)&v225, v183->m128i_i32);
                v143 = _mm_load_si128(&v225);
                v184 = v226;
                v202 = v143;
                v183 = (__m128i *)v227;
                if ( v227 )
                {
                  v144 = *(_BYTE *)(v11[2] + 1LL);
                  v188 = &v202;
                  sub_101B340(v212, (unsigned int *)&v202, (v144 & 0x20) != 0);
                  sub_101B390((__int64)&v228, v188->m128i_i32);
                  v146 = _mm_load_si128(&v228);
                  v190 = v229;
                  v203 = v146;
                  v189 = v230;
                  if ( v230 )
                  {
                    v147 = *(_BYTE *)(v11[2] + 1LL);
                    v188 = &v203;
                    sub_101B340(v213, (unsigned int *)&v203, (v147 & 0x20) != 0);
                    sub_101B390((__int64)v231, v188->m128i_i32);
                    v149 = _mm_load_si128((const __m128i *)v231);
                    v191 = v232;
                    v204 = v149;
                    v188 = (__m128i *)v233;
                    if ( v233 )
                    {
                      v150 = *(_BYTE *)(v11[2] + 1LL);
                      v192 = &v204;
                      sub_101B340(v214, (unsigned int *)&v204, (v150 & 0x20) != 0);
                      sub_101B390((__int64)&v237, v192->m128i_i32);
                      v152 = _mm_load_si128(&v237);
                      v192 = (__m128i *)v238;
                      v205 = v152;
                      v194 = *((_QWORD *)&v238 + 1);
                      if ( *((_QWORD *)&v238 + 1) )
                      {
                        v153 = v11[2];
                        v193 = &v205;
                        sub_101B340(v215, (unsigned int *)&v205, (*(_BYTE *)(v153 + 1) & 0x20) != 0);
                        sub_101B390((__int64)p_ptr, v193->m128i_i32);
                        sub_13616F0(
                          v11,
                          (unsigned int)ptr,
                          *(__int64 *)v267,
                          *(__int64 *)&v267[8],
                          *(__int64 *)&v267[16]);
                        (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __m128i *, __int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64))(*v11 + 48LL))(
                          v11,
                          v205.m128i_u32[0],
                          v205.m128i_i64[1],
                          v192,
                          v194,
                          *(_QWORD *)(*v11 + 48LL),
                          v215[0],
                          v215[1],
                          v215[2],
                          v154);
                      }
                      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __m128i *, __int64, _QWORD, _QWORD, _QWORD))(*v11 + 48LL))(
                        v11,
                        v204.m128i_u32[0],
                        v204.m128i_i64[1],
                        v191,
                        v188,
                        v151,
                        v214[0],
                        v214[1],
                        v214[2]);
                    }
                    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*v11 + 48LL))(
                      v11,
                      v203.m128i_u32[0],
                      v203.m128i_i64[1],
                      v190,
                      v189,
                      v148,
                      v213[0],
                      v213[1],
                      v213[2]);
                  }
                  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, void **, __m128i *, __int64, _QWORD, _QWORD, _QWORD))(*v11 + 48LL))(
                    v11,
                    v202.m128i_u32[0],
                    v202.m128i_i64[1],
                    v184,
                    v183,
                    v145,
                    v212[0],
                    v212[1],
                    v212[2]);
                }
                (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, void **, __m128i *, __int64, _QWORD, _QWORD, _QWORD))(*v11 + 48LL))(
                  v11,
                  v201.m128i_u32[0],
                  v201.m128i_i64[1],
                  v181,
                  v178,
                  v142,
                  v211[0],
                  v211[1],
                  v211[2]);
              }
              (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __m128i *, __int64, __int64, _QWORD, _QWORD, _QWORD))(*v11 + 48LL))(
                v11,
                v200.m128i_u32[0],
                v200.m128i_i64[1],
                v177,
                v137,
                v139,
                v210[0],
                v210[1],
                v210[2]);
            }
            (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*v11 + 48LL))(
              v11,
              v199.m128i_u32[0],
              v199.m128i_i64[1],
              v39,
              v38,
              v136,
              v209[0],
              v209[1],
              v209[2]);
          }
        }
        else
        {
          v156 = v178[41].m128i_u32[2];
          v157 = v178[41].m128i_i64[0];
          v177 = &v225;
          if ( v157 != v157 + 48 * v156 )
          {
            v178 = (__m128i *)v14;
            v158 = v157 + 48 * v156;
            v181 = p_ptr;
            v159 = v11;
            do
            {
              v160 = (unsigned int *)(v157 + 32);
              v157 += 48;
              v161 = *(_QWORD *)(v157 - 48);
              v162 = *(_QWORD *)(v157 - 40);
              v163 = *(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, void **))(*v159 + 56LL);
              sub_101B340(v177, v160, (*(_BYTE *)(v159[2] + 1LL) & 0x20) != 0);
              v163(
                v159,
                *(unsigned int *)(v157 - 16),
                *(_QWORD *)(v157 - 8),
                v161,
                v162,
                v164,
                v225.m128i_i64[0],
                v225.m128i_i64[1],
                v226);
            }
            while ( v158 != v157 );
            v11 = v159;
            v14 = (int *)v178;
            p_ptr = v181;
          }
        }
      }
    }
  }
  v40 = v14;
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64 (__fastcall **)(), _QWORD, char *, __int64, _QWORD, _QWORD, __int64, void *, __int64, __int64))(*v11 + 16LL))(
    v11,
    (unsigned int)v195,
    v196,
    a4,
    v173,
    v174,
    v206[0],
    v206[1],
    v207,
    src,
    a8,
    a11);
  v41 = v175;
  ptr = p_ptr + 2;
  *(_QWORD *)v267 = 0x400000000LL;
  v42 = v196;
  v173 = v195;
  sub_135F720((unsigned int)v195, v196, (__int64)v234, (unsigned int)v235, (__int64)p_ptr);
  (*(void (__fastcall **)(_QWORD *, _QWORD, __int64 (__fastcall **)(), _QWORD, void **, _QWORD, int *, void **))(*v11 + 32LL))(
    v11,
    (unsigned int)v173,
    v42,
    a4,
    p_ptr,
    *v11,
    v40,
    v41);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  v43 = (int)v180;
  if ( (int)v180 < 0 )
  {
    LODWORD(v173) = 0;
    v44 = (unsigned int)v235;
    v175 = v231;
    v45 = v234;
    v231[0] = &v232;
    v231[1] = (void *)0x800000000LL;
    while ( 1 )
    {
      do
      {
        if ( (unsigned __int8)sub_1020490((__int64)v172, v43, nullptr) )
        {
          v46 = (void *)sub_101FC50((__int64)v172, v43);
          v47 = LODWORD(v231[1]);
          *(_DWORD *)v267 = v48;
          v49 = LODWORD(v231[1]) + 1LL;
          ptr = v46;
          if ( v49 > HIDWORD(v231[1]) )
          {
            LODWORD(v177) = (_DWORD)v46;
            sub_2237220(v175, v175 + 2, v49, 4);
            v47 = LODWORD(v231[1]);
            LODWORD(v46) = (_DWORD)v177;
          }
          v50 = v172;
          *((_DWORD *)v231[0] + v47) = (_DWORD)v46;
          ++LODWORD(v231[1]);
          v182 = (unsigned int)v43 | v182 & 0xFFFFFFFF00000000LL;
          if ( (unsigned __int8)sub_1361590((unsigned int)v182, v50, (__int64)v45, v44) )
            LODWORD(v173) = v231[1];
        }
        else
        {
          v85 = LODWORD(v231[1]);
          v86 = LODWORD(v231[1]) + 1LL;
          if ( v86 > HIDWORD(v231[1]) )
          {
            sub_2237220(v175, v175 + 2, v86, 4);
            v85 = LODWORD(v231[1]);
          }
          *((_DWORD *)v231[0] + v85) = v43;
          ++LODWORD(v231[1]);
        }
        if ( (unsigned __int8)sub_1020490((__int64)v172, v43, nullptr) )
        {
          v43 = sub_10205A0((__int64)v172, v43);
        }
        else
        {
          ptr = (void *)sub_101FC50((__int64)v172, v43);
          v43 = (int)ptr;
          *(_DWORD *)v267 = v155;
        }
      }
      while ( v43 < 0 );
      v51 = LODWORD(v231[1]);
      v52 = (void **)v231[0];
      v53 = *((_DWORD *)v231[0] + LODWORD(v231[1]) - 1);
      if ( v53 >= 0 )
        break;
      if ( (unsigned __int8)sub_1020490((__int64)v172, v53, nullptr) )
      {
        v43 = sub_10205A0((__int64)v172, v53);
      }
      else
      {
        ptr = (void *)sub_101FC50((__int64)v172, v53);
        v43 = (int)ptr;
        *(_DWORD *)v267 = v165;
      }
      if ( v43 >= 0 )
      {
        v51 = LODWORD(v231[1]);
        v52 = (void **)v231[0];
        break;
      }
    }
    v54 = v52;
    v55 = 4LL * (unsigned int)v173;
    v56 = 4 * v51 - v55;
    v57 = (char *)v52 + v55;
    v58 = v56 >> 2;
    if ( v56 <= 0 )
    {
      LODWORD(v231[1]) = 0;
    }
    else
    {
      v59 = v52;
      do
      {
        v60 = *(_DWORD *)v57;
        v59 = (void **)((char *)v59 + 4);
        v57 += 4;
        *((_DWORD *)v59 - 1) = v60;
        --v58;
      }
      while ( v58 );
      v61 = v11[2];
      v62 = ((char *)v59 - (char *)v52) >> 2;
      v177 = (__m128i *)v62;
      LODWORD(v231[1]) = v62;
      v63 = *(_DWORD *)(v61 + 8);
      v64 = (char *)v52 + 4 * (unsigned int)v62;
      LODWORD(v173) = v63;
      if ( v63 < (unsigned int)v62 && v63 )
      {
        v65 = v63 >> 1;
        v66 = (v63 & 1) + v65;
        v65 *= 4;
        v67 = &v64[-v65];
        LODWORD(v178) = v66;
        if ( &v64[-v65] != v64 )
        {
          v180 = p_ptr;
          v68 = (char *)v52 + 4 * (unsigned int)v62;
          v69 = v186;
          do
          {
            v70 = *((unsigned int *)v68 - 1);
            v68 -= 4;
            v69 = v70 | v69 & 0xFFFFFFFF00000000LL;
            sub_1363730((int)v11);
          }
          while ( v67 != v68 );
          p_ptr = v180;
        }
        ptr = p_ptr + 3;
        v71 = &v237;
        *(__m128i *)v267 = _mm_load_si128((const __m128i *)&xmmword_23AA020);
        v237.m128i_i32[2] = 2;
        v237.m128i_i64[0] = (__int64)&off_2BEBEE0;
        LOBYTE(v240) = 0;
        HIDWORD(v240) = 1;
        v239 = nullptr;
        v238 = 0;
        v241 = p_ptr;
        sub_227B8B0(&v237, 0, 0, 0);
        v72 = v239;
        if ( *((_QWORD *)&v238 + 1) - (_QWORD)v239 > 9u )
        {
          v73 = &v237;
          *v239 = 0x6E697070696B7328LL;
          *((_WORD *)v72 + 4) = 8295;
          v239 = (_QWORD *)((char *)v239 + 10);
        }
        else
        {
          v73 = (__m128i *)sub_227BF10(&v237, "(skipping ", 10);
        }
        v74 = sub_227B910(v73, (unsigned int)((_DWORD)v177 - (_DWORD)v173));
        v75 = *(__m128i **)(v74 + 32);
        if ( *(_QWORD *)(v74 + 24) - (_QWORD)v75 > 0x42u )
        {
          v170 = _mm_load_si128((const __m128i *)&xmmword_23AA060);
          v75[4].m128i_i8[2] = 41;
          v75[4].m128i_i16[0] = 27756;
          *v75 = v170;
          v75[1] = _mm_load_si128((const __m128i *)&xmmword_23AA070);
          v75[2] = _mm_load_si128((const __m128i *)&xmmword_23AA080);
          v75[3] = _mm_load_si128((const __m128i *)&xmmword_23AA090);
          *(_QWORD *)(v74 + 32) += 67LL;
        }
        else
        {
          sub_227BF10(v74, " expansions in backtrace; use -fmacro-backtrace-limit=0 to see all)", 67);
        }
        v228 = 0u;
        v76 = v241[1];
        v77 = *v241;
        v229 = 0;
        (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, void *, _QWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*v11 + 16LL))(
          v11,
          0,
          0,
          1,
          v77,
          v76,
          0,
          0,
          0,
          0,
          0,
          0);
        v78 = (char *)v231[0] + 4 * (unsigned int)v178;
        v173 = (char *)v231[0];
        if ( v231[0] != v78 )
        {
          v178 = &v237;
          v79 = v185;
          v177 = (__m128i *)p_ptr;
          v80 = v78;
          do
          {
            v81 = *((unsigned int *)v80 - 1);
            v80 -= 4;
            v79 = v81 | v79 & 0xFFFFFFFF00000000LL;
            sub_1363730((int)v11);
          }
          while ( v173 != v80 );
          p_ptr = (void **)v177;
          v71 = v178;
        }
        v237.m128i_i64[0] = (__int64)&unk_2C76288;
        sub_227B7A0(v71);
        if ( ptr != p_ptr + 3 )
          free(ptr);
        goto LABEL_57;
      }
      if ( v52 != (void **)v64 )
      {
        v173 = (char *)v44;
        v166 = (char *)v52 + 4 * (unsigned int)v62;
        v167 = (char *)v52;
        v168 = v187;
        do
        {
          v169 = *((unsigned int *)v166 - 1);
          v166 -= 4;
          v168 = v169 | v168 & 0xFFFFFFFF00000000LL;
          sub_1363730((int)v11);
        }
        while ( v167 != v166 );
LABEL_57:
        v54 = (void **)v231[0];
      }
    }
    if ( v54 != v175 + 2 )
      free(v54);
  }
  v82 = v263;
  v83 = &v263[16 * (unsigned __int64)(unsigned int)v264];
  if ( v263 != v83 )
  {
    do
    {
      while ( 1 )
      {
        v83 -= 16;
        v84 = *((int **)v83 + 3);
        if ( v84 == v83 + 10 )
          break;
        operator delete(v84);
        if ( v82 == v83 )
          goto LABEL_63;
      }
    }
    while ( v82 != v83 );
LABEL_63:
    v83 = v263;
  }
  if ( v83 != (int *)(v179 + 2) )
    free(v83);
  if ( v234 != v176 + 2 )
    free(v234);
LABEL_5:
  *((_DWORD *)v11 + 6) = (_DWORD)v195;
  *((_DWORD *)v11 + 8) = a4;
  result = *(void (**)())(*v11 + 72LL);
  if ( result != nullsub_644 )
    return (void (*)())((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))result)(v11, a11, a4);
  return result;
}
