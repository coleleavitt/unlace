__int64 __fastcall sub_6E8900(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        char *a6,
        double a7,
        __m128i a8,
        double a9,
        __m128 a10,
        double a11,
        double a12,
        double a13,
        __m128 a14)
{
  char *v14; // r13
  char *v15; // r15
  _QWORD *v16; // rbx
  _BYTE *v17; // r12
  unsigned int v18; // ebp
  size_t v19; // rbp
  __m128i v20; // xmm1
  __m128i si128; // xmm1
  size_t v22; // rbp
  __m128i v23; // xmm0
  size_t v24; // rbp
  __m128i v25; // xmm0
  char *v26; // rsi
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rax
  char *v30; // rax
  __int64 *v31; // rsi
  __int64 v32; // rdx
  __m128i v33; // xmm0
  void **v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // r9
  size_t v37; // rdx
  char *v38; // rax
  size_t v39; // r12
  size_t v40; // rdx
  void *v41; // rsi
  char *v42; // rax
  char *v43; // rdi
  char *v44; // rbp
  char *v45; // r12
  void *v46; // rdi
  void *v47; // rdi
  size_t v48; // rax
  size_t v49; // rbp
  size_t v50; // rbx
  void *v51; // rax
  __int64 v52; // rbx
  const char *v53; // rdi
  size_t v54; // rax
  size_t v55; // r12
  const char *v56; // rcx
  const char *v57; // rcx
  const char *v58; // rcx
  unsigned int v59; // r12d
  char *v60; // rdi
  __int64 v61; // r13
  __int64 v62; // rbp
  char *v63; // rbx
  void *v64; // rdi
  void *v65; // rdi
  char *v66; // rdi
  __int64 v67; // r13
  __int64 v68; // rbp
  char *v69; // rbx
  void *v70; // rdi
  void *v71; // rdi
  char *v73; // r8
  unsigned __int8 v74; // al
  size_t v75; // rbp
  __m128i v76; // xmm0
  size_t v77; // rbp
  __m128i v78; // xmm0
  char *v79; // rsi
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  __int64 v82; // rax
  char *v83; // r12
  __int64 v84; // rax
  __m128i v85; // xmm0
  void *v86; // rax
  __m128i v87; // xmm0
  __m128i v88; // xmm0
  size_t v89; // rax
  size_t v90; // r15
  size_t v91; // r12
  _QWORD *v92; // rax
  char *v93; // r8
  __m128i v94; // xmm0
  size_t v95; // rax
  void **v96; // r10
  void *v97; // r9
  void **v98; // r8
  size_t v99; // rbp
  __m128i v100; // xmm0
  size_t v101; // rbp
  __m128i v102; // xmm0
  char *v103; // rsi
  __m128i v104; // xmm0
  __m128i v105; // xmm0
  __int64 v106; // rax
  char *v107; // rax
  __int64 v108; // rdx
  __m128i v109; // xmm0
  char *v110; // rax
  __m128i v111; // xmm0
  unsigned __int64 v112; // rcx
  char *v113; // rax
  char *v114; // r8
  unsigned int v115; // eax
  unsigned int v116; // eax
  unsigned int v117; // edx
  __int64 v118; // rsi
  void *v119; // rax
  void *v120; // rax
  void *v121; // rax
  void *v122; // rax
  __m128i v123; // xmm0
  size_t v124; // r12
  size_t v125; // r12
  __m128i v126; // xmm0
  char *v127; // rsi
  __m128i v128; // xmm0
  __m128i v129; // xmm0
  __int64 v130; // rax
  char *v131; // r12
  __int64 v132; // rax
  __m128i v133; // xmm0
  void *v134; // rax
  __m128i v135; // xmm0
  __m128i v136; // xmm0
  void *v137; // rax
  void *v138; // rax
  void *v139; // rdi
  size_t v140; // rdx
  void **p_dest; // r8
  _BYTE *v142; // rsi
  size_t v143; // r15
  size_t v144; // rdx
  void *v145; // rsi
  size_t v146; // r9
  size_t v147; // rdx
  size_t v148; // r15
  size_t v149; // rdx
  size_t v150; // r9
  void *v151; // rax
  void *v152; // rax
  size_t v153; // r15
  size_t v154; // rdx
  size_t v155; // r9
  size_t v156; // r15
  size_t v157; // rdx
  size_t v158; // r9
  void *v159; // rax
  void *v160; // rax
  char *v161; // rdi
  void *v162; // r13
  void *v163; // rbp
  char *v164; // rbx
  void *v165; // rdi
  void *v166; // rdi
  void *v167; // rax
  void *v168; // rax
  void *v169; // rax
  void *v170; // rax
  __int64 v171; // rdx
  __int64 v172; // rsi
  __int64 *v173; // rax
  __int64 v174; // r8
  __int64 v175; // rsi
  __int64 v176; // rax
  void *v177; // rax
  __int64 *v178; // rax
  __int64 v179; // rax
  void *v180; // rax
  __int64 v182; // [rsp+8h] [rbp-5A0h]
  __int64 v183; // [rsp+8h] [rbp-5A0h]
  _QWORD *v184; // [rsp+18h] [rbp-590h]
  void *v185[2]; // [rsp+20h] [rbp-588h] BYREF
  void *src; // [rsp+30h] [rbp-578h]
  void **v187; // [rsp+38h] [rbp-570h]
  __int64 v188; // [rsp+40h] [rbp-568h]
  void **v189; // [rsp+48h] [rbp-560h]
  void **v190; // [rsp+50h] [rbp-558h]
  __int64 v191; // [rsp+58h] [rbp-550h]
  __int64 *v192; // [rsp+60h] [rbp-548h]
  char *s; // [rsp+68h] [rbp-540h]
  char *v194; // [rsp+70h] [rbp-538h]
  __int128 *v195; // [rsp+78h] [rbp-530h]
  __int64 v196; // [rsp+88h] [rbp-520h] BYREF
  __int64 v197; // [rsp+90h] [rbp-518h] BYREF
  __int64 v198; // [rsp+98h] [rbp-510h] BYREF
  void *v199; // [rsp+A0h] [rbp-508h] BYREF
  __int128 v200; // [rsp+A8h] [rbp-500h]
  void *v201; // [rsp+C0h] [rbp-4E8h] BYREF
  __int128 v202; // [rsp+C8h] [rbp-4E0h]
  void *v203[4]; // [rsp+E0h] [rbp-4C8h] BYREF
  __int64 v204; // [rsp+100h] [rbp-4A8h] BYREF
  int v205; // [rsp+108h] [rbp-4A0h] BYREF
  _QWORD *v206; // [rsp+110h] [rbp-498h]
  int *v207; // [rsp+118h] [rbp-490h]
  int *v208; // [rsp+120h] [rbp-488h]
  __int64 v209; // [rsp+128h] [rbp-480h]
  void *v210; // [rsp+130h] [rbp-478h] BYREF
  __int128 v211; // [rsp+138h] [rbp-470h]
  __int128 v212; // [rsp+148h] [rbp-460h]
  __int64 v213; // [rsp+158h] [rbp-450h]
  int v214; // [rsp+160h] [rbp-448h]
  void *v215; // [rsp+170h] [rbp-438h] BYREF
  __int128 v216; // [rsp+178h] [rbp-430h]
  __int128 v217; // [rsp+188h] [rbp-420h]
  __int64 v218; // [rsp+198h] [rbp-410h]
  int v219; // [rsp+1A0h] [rbp-408h]
  void *v220[4]; // [rsp+1B0h] [rbp-3F8h] BYREF
  __int64 v221; // [rsp+1D0h] [rbp-3D8h] BYREF
  __int64 v222; // [rsp+1D8h] [rbp-3D0h] BYREF
  __int128 v223; // [rsp+1E0h] [rbp-3C8h]
  void *v224; // [rsp+1F0h] [rbp-3B8h]
  __int128 v225; // [rsp+1F8h] [rbp-3B0h]
  char v226; // [rsp+208h] [rbp-3A0h]
  __m128i v227; // [rsp+210h] [rbp-398h] BYREF
  size_t v228[3]; // [rsp+220h] [rbp-388h] BYREF
  void *dest; // [rsp+238h] [rbp-370h] BYREF
  size_t n[2]; // [rsp+240h] [rbp-368h]
  __int128 v231; // [rsp+250h] [rbp-358h] BYREF
  __m128i v232; // [rsp+268h] [rbp-340h] BYREF
  __m128i v233; // [rsp+278h] [rbp-330h] BYREF
  void *v234; // [rsp+288h] [rbp-320h]
  void *v235; // [rsp+290h] [rbp-318h]
  char v236; // [rsp+298h] [rbp-310h]
  _BYTE ptr[40]; // [rsp+2A0h] [rbp-308h] BYREF
  void *v238; // [rsp+2C8h] [rbp-2E0h]
  __m128i v239; // [rsp+2D0h] [rbp-2D8h] BYREF
  __int64 v240; // [rsp+2E0h] [rbp-2C8h] BYREF
  __m128i v241; // [rsp+2E8h] [rbp-2C0h] BYREF
  __m128i v242; // [rsp+2F8h] [rbp-2B0h] BYREF
  __m128i v243; // [rsp+308h] [rbp-2A0h] BYREF
  void *v244; // [rsp+318h] [rbp-290h]
  void *v245; // [rsp+320h] [rbp-288h]
  char v246; // [rsp+328h] [rbp-280h]
  void *v247[2]; // [rsp+330h] [rbp-278h] BYREF
  _QWORD v248[2]; // [rsp+340h] [rbp-268h] BYREF
  char *v249[2]; // [rsp+350h] [rbp-258h] BYREF
  _QWORD v250[2]; // [rsp+360h] [rbp-248h] BYREF
  char *v251[2]; // [rsp+370h] [rbp-238h] BYREF
  _QWORD v252[69]; // [rsp+380h] [rbp-228h] BYREF

  v14 = a4;
  v192 = a2;
  v188 = a3;
  v252[61] = __readfsqword(0x28u);
  v15 = a6;
  v207 = &v205;
  v210 = nullptr;
  v213 = 0;
  v214 = 1;
  v215 = nullptr;
  v218 = 0;
  v219 = 1;
  v205 = 0;
  v206 = nullptr;
  v211 = 0;
  v212 = 0;
  v216 = 0;
  v217 = 0;
  v208 = &v205;
  v16 = *(_QWORD **)(a5 + 16);
  v209 = 0;
  v184 = &v16[*(_QWORD *)(a5 + 24)];
  if ( v16 == v184 )
  {
LABEL_59:
    v199 = nullptr;
    v200 = 0;
    if ( v14 )
    {
      v48 = strlen(v14);
      v49 = v48 + 1;
      v50 = v48;
      v51 = (void *)qvector_reserve(&v199, 0, v48 + 1, 1);
      *(_QWORD *)&v200 = v49;
      v199 = v51;
      memmove(v51, v14, v50);
      *((_BYTE *)v199 + v50) = 0;
    }
    if ( v15 )
      sub_35A910((__int64 *)&v199);
    v247[0] = v248;
    dest = (void *)0x100000000LL;
    v227.m128i_i64[0] = (__int64)&off_2BEBE68;
    memset(v228, 0, sizeof(v228));
    n[0] = (size_t)v247;
    v247[1] = nullptr;
    LOBYTE(v248[0]) = 0;
    v227.m128i_i64[1] = 0;
    sub_227B8B0(&v227, 0, 0, 0);
    v52 = sub_A64930(*(_QWORD *)(a1 + 48), 0);
    (*(void (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)v52 + 104LL))(v52, v188, &v227);
    v53 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 17448LL) + 288LL);
    v54 = 0;
    if ( v53 )
      v54 = strlen(v53);
    sub_2067E20(v251, v53, v54);
    *(_QWORD *)ptr = &off_2BEBE68;
    v238 = (void *)0x100000000LL;
    v239.m128i_i64[0] = (__int64)v249;
    v249[0] = (char *)v250;
    v249[1] = nullptr;
    LOBYTE(v250[0]) = 0;
    memset(&ptr[8], 0, 32);
    sub_227B8B0(ptr, 0, 0, 0);
    LOWORD(v221) = 260;
    v220[0] = (void *)n[0];
    sub_209E5E0(ptr, v220, v251);
    v201 = nullptr;
    v202 = 0;
    if ( v249[0] )
    {
      src = v249[0];
      v55 = strlen(v249[0]);
      v185[0] = (void *)(v55 + 1);
      v201 = (void *)qvector_reserve(&v201, 0, v55 + 1, 1);
      *(void **)&v202 = v185[0];
      memmove(v201, src, v55);
      *((_BYTE *)v201 + v55) = 0;
      if ( (unsigned __int64)v202 > 1 )
      {
        memset(v220, 0, 24);
        sub_35A790((char **)v220);
        v203[0] = nullptr;
        create_tinfo(v203, 13, 13, &v210);
        v56 = haystack;
        if ( v220[1] )
          v56 = (const char *)v220[0];
        sub_6DF2F0(a1, v203, 1, v56, nullptr, v188, 0);
        v57 = haystack;
        if ( (_QWORD)v202 )
          v57 = (const char *)v201;
        sub_6DF2F0(a1, v203, 0, v57, nullptr, v188, 0);
        clear_tinfo_t(v203);
        if ( v220[0] )
        {
          v220[1] = nullptr;
          qfree(v220[0]);
        }
      }
    }
    HIDWORD(v218) |= 0x100u;
    memset(v203, 0, 24);
    sub_35A790((char **)v203);
    v196 = 0;
    create_tinfo(&v196, 13, 13, &v215);
    v58 = haystack;
    if ( v203[1] )
      v58 = (const char *)v203[0];
    sub_6DF2F0(a1, &v196, 1, v58, nullptr, v188, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(sub_EDE580(*(_QWORD *)(a1 + 48), v188) + 72) + 40LL) & 1) != 0 )
    {
      v171 = v192[1];
      v172 = *v192;
      if ( v192[2] < (unsigned __int64)(v171 + 1) )
      {
        v172 = qvector_reserve(v192, v172, v171 + 1, 144);
        v178 = v192;
        *v192 = v172;
        v171 = v178[1];
      }
      v173 = v192;
      v174 = v172 + 144 * v171;
      *(_QWORD *)(v174 + 16) = 0;
      *(_OWORD *)(v174 + 24) = 0;
      *(_QWORD *)(v174 + 40) = 0;
      *(_QWORD *)(v174 + 112) = 1;
      *(_DWORD *)(v174 + 120) = -1;
      *(_QWORD *)(v174 + 128) = 0;
      *(_BYTE *)(v174 + 136) = 0;
      *(_OWORD *)v174 = 0;
      *(_OWORD *)(v174 + 48) = 0;
      *(_OWORD *)(v174 + 64) = 0;
      ++v173[1];
      v175 = *(_QWORD *)(v174 + 16);
      if ( *(_QWORD *)(v174 + 32) <= 9u )
      {
        v183 = v174;
        v179 = qvector_reserve(v174 + 16, v175, 10, 1);
        v174 = v183;
        v175 = v179;
        *(_QWORD *)(v183 + 16) = v179;
      }
      *(_QWORD *)(v174 + 24) = 10;
      *(_QWORD *)v175 = 0x6C62617466765F5FLL;
      *(_BYTE *)(v175 + 8) = 101;
      v176 = *(_QWORD *)(v174 + 16);
      src = &v220[1];
      *(_BYTE *)(v176 + 9) = 0;
      *(_DWORD *)(v174 + 132) |= 0x100u;
      v188 = v174;
      *(_OWORD *)v220 = 0;
      v187 = (void **)&v198;
      v197 = 0;
      v198 = 0;
      copy_tinfo_t(&v220[1]);
      v220[2] = nullptr;
      v185[0] = &v220[2];
      copy_tinfo_t(&v220[2]);
      LODWORD(v220[3]) = 0;
      WORD2(v220[3]) = 0;
      clear_tinfo_t(v187);
      clear_tinfo_t(&v197);
      copy_tinfo_t(v220);
      v182 = v188;
      create_tinfo(v188 + 64, 10, 10, v220);
      clear_tinfo_t(v185[0]);
      clear_tinfo_t(src);
      clear_tinfo_t(v220);
      *(_QWORD *)(v182 + 8) = 8 * get_tinfo_size(0, *(_QWORD *)(v182 + 64), 0);
    }
    clear_tinfo_t(&v196);
    if ( v203[0] )
    {
      v203[1] = nullptr;
      qfree(v203[0]);
    }
    if ( v201 )
    {
      *(_QWORD *)&v202 = 0;
      qfree(v201);
    }
    *(_QWORD *)ptr = &off_2BEBE68;
    sub_227B7A0(ptr);
    if ( (_QWORD *)v249[0] != v250 )
      operator delete(v249[0], v250[0] + 1LL);
    sub_206AFD0(v251);
    if ( v52 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
    v227.m128i_i64[0] = (__int64)&off_2BEBE68;
    sub_227B7A0(&v227);
    if ( v247[0] != v248 )
      operator delete(v247[0], v248[0] + 1LL);
    if ( v199 )
    {
      *(_QWORD *)&v200 = 0;
      qfree(v199);
    }
    v59 = 1;
    goto LABEL_89;
  }
  s = a4;
  src = nullptr;
  v195 = &v231;
  v191 = a5;
  v194 = a6;
  while ( 2 )
  {
    switch ( *v16 & 7LL )
    {
      case 0LL:
        v73 = "func";
        goto LABEL_4;
      case 1LL:
        v73 = (char *)"dtor";
        goto LABEL_4;
      case 2LL:
        v73 = "delete";
        goto LABEL_4;
      case 3LL:
        v73 = "unused";
LABEL_4:
        memset(v228, 0, sizeof(v228));
        dest = nullptr;
        v233.m128i_i64[1] = (__int64)&dword_0 + 1;
        LODWORD(v234) = -1;
        v235 = nullptr;
        v236 = 0;
        v227 = 0;
        *(_OWORD *)n = 0;
        v231 = 0;
        v15 = (char *)(*v16 & 7LL);
        if ( (_DWORD)v15 == 3 )
        {
          v185[0] = v73;
          v89 = strlen(v73);
          v90 = v89 + 1;
          v91 = v89;
          v92 = (_QWORD *)qvector_reserve(v228, 0, v89 + 1, 1);
          v93 = (char *)v185[0];
          v228[1] = v90;
          v228[0] = (size_t)v92;
          if ( (unsigned int)v91 >= 8 )
          {
            *v92 = *(_QWORD *)v185[0];
            *(_QWORD *)((char *)v92 + (unsigned int)v91 - 8) = *(_QWORD *)&v93[(unsigned int)v91 - 8];
            v112 = (unsigned __int64)(v92 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v113 = (char *)v92 - v112;
            v114 = (char *)(v93 - v113);
            v115 = (v91 + (_DWORD)v113) & 0xFFFFFFF8;
            if ( v115 >= 8 )
            {
              v116 = v115 & 0xFFFFFFF8;
              v117 = 0;
              do
              {
                v118 = v117;
                v117 += 8;
                *(_QWORD *)(v112 + v118) = *(_QWORD *)&v114[v118];
              }
              while ( v117 < v116 );
            }
          }
          else if ( (v91 & 4) != 0 )
          {
            *(_DWORD *)v92 = *(_DWORD *)v185[0];
            *(_DWORD *)((char *)v92 + (unsigned int)v91 - 4) = *(_DWORD *)&v93[(unsigned int)v91 - 4];
          }
          else if ( (_DWORD)v91 )
          {
            *(_BYTE *)v92 = *(_BYTE *)v185[0];
            if ( (v91 & 2) != 0 )
              *(_WORD *)((char *)v92 + (unsigned int)v91 - 2) = *(_WORD *)&v93[(unsigned int)v91 - 2];
          }
          *(_BYTE *)(v228[0] + v91) = 0;
          get_stock_tinfo(&v231, 7);
          v15 = (char *)&unk_2BEBE58;
          v94 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 48) + 17464LL));
          v222 = 0x100000000LL;
          v220[0] = &off_2BEBE68;
          *(__m128i *)v203 = v94;
          v251[0] = (char *)v252;
          LODWORD(v203[0]) = _mm_cvtsi128_si32(v94) & 0xFDBF8FFF | 0x2001000;
          *(_QWORD *)&v223 = v251;
          v251[1] = nullptr;
          LOBYTE(v252[0]) = 0;
          memset(&v220[1], 0, 24);
          v221 = 0;
          sub_227B8B0(v220, 0, 0, 0);
          sub_B76DD0(*v16 & 0xFFFFFFFFFFFFFFF8LL, v220, v203);
          if ( v251[0]
            && (v185[0] = v251[0], v95 = strlen(v251[0]), v96 = (void **)v185[0], (v97 = (void *)v95) != nullptr) )
          {
            v139 = dest;
            v140 = v95 + 1;
            p_dest = &dest;
            if ( n[1] < v95 + 1 )
            {
              v189 = (void **)v185[0];
              v187 = (void **)(v95 + 1);
              v185[0] = &dest;
              v190 = (void **)v95;
              v167 = (void *)qvector_reserve(&dest, dest, v140, 1);
              v97 = v190;
              v96 = v189;
              dest = v167;
              v140 = (size_t)v187;
              v139 = v167;
              p_dest = (void **)v185[0];
            }
            n[0] = v140;
            v187 = p_dest;
            v185[0] = v97;
            memmove(v139, v96, (size_t)v97);
            v98 = v187;
            *((_BYTE *)dest + (unsigned __int64)v185[0]) = 0;
          }
          else
          {
            n[0] = 0;
            v98 = &dest;
          }
          sub_6DA080(a1, (__int64)v98);
          sub_6E1FD0((__int64 *)v228, &v204);
          v99 = v228[1];
          v100 = _mm_load_si128(&v227);
          memset(&ptr[16], 0, 24);
          *(__m128i *)ptr = v100;
          if ( v228[1] )
          {
            v120 = (void *)qalloc_or_throw(v228[1]);
            *(_QWORD *)&ptr[32] = v99;
            *(_QWORD *)&ptr[16] = v120;
            memcpy(v120, (const void *)v228[0], v99);
            *(_QWORD *)&ptr[24] = v99;
          }
          v101 = n[0];
          v238 = nullptr;
          v239 = 0;
          if ( n[0] )
          {
            v119 = (void *)qalloc_or_throw(n[0]);
            v239.m128i_i64[1] = v101;
            v238 = v119;
            memcpy(v119, dest, v101);
            v239.m128i_i64[0] = v101;
          }
          v240 = 0;
          copy_tinfo_t(&v240);
          v102 = _mm_loadu_si128((const __m128i *)((char *)&v231 + 8));
          v103 = (char *)v210;
          v244 = v234;
          v241 = v102;
          v104 = _mm_loadu_si128(&v232);
          v245 = v235;
          v242 = v104;
          v105 = _mm_loadu_si128(&v233);
          v246 = v236;
          v106 = v211;
          v243 = v105;
          if ( *((_QWORD *)&v211 + 1) < (unsigned __int64)(v211 + 1) )
          {
            v210 = (void *)qvector_reserve(&v210, v210, v211 + 1, 144);
            v103 = (char *)v210;
            v106 = v211;
          }
          v107 = &v103[144 * v106];
          *(__m128i *)v107 = _mm_load_si128((const __m128i *)ptr);
          v108 = *(_QWORD *)&ptr[16];
          v109 = _mm_loadu_si128((const __m128i *)&ptr[24]);
          *(_QWORD *)&ptr[16] = 0;
          *(__m128i *)(v107 + 24) = v109;
          *((_QWORD *)v107 + 2) = v108;
          a8 = _mm_load_si128(&v239);
          *(_OWORD *)&ptr[24] = 0;
          v239 = 0;
          *((_QWORD *)v107 + 5) = v238;
          v238 = nullptr;
          *((_QWORD *)v107 + 8) = 0;
          *((__m128i *)v107 + 3) = a8;
          v185[0] = v107;
          copy_tinfo_t(v107 + 64);
          v110 = (char *)v185[0];
          v111 = _mm_loadu_si128(&v241);
          *(_QWORD *)&v211 = v211 + 1;
          *((_QWORD *)v185[0] + 15) = v244;
          *(__m128i *)(v110 + 72) = v111;
          *(__m128i *)(v110 + 88) = _mm_loadu_si128(&v242);
          *(__m128i *)(v110 + 104) = _mm_loadu_si128(&v243);
          *((_QWORD *)v110 + 16) = v245;
          v110[136] = v246;
          clear_tinfo_t(&v240);
          if ( v238 )
          {
            v239.m128i_i64[0] = 0;
            qfree(v238);
          }
          if ( *(_QWORD *)&ptr[16] )
          {
            *(_QWORD *)&ptr[24] = 0;
            qfree(*(void **)&ptr[16]);
          }
          v220[0] = &off_2BEBE68;
          sub_227B7A0(v220);
          if ( (_QWORD *)v251[0] != v252 )
            operator delete(v251[0], v252[0] + 1LL);
          goto LABEL_53;
        }
        if ( (unsigned int)((_DWORD)v15 - 4) > 3 )
        {
LABEL_112:
          sub_35A790((char **)v228);
          v74 = getinf_flag(3, 4);
          create_tinfo(&v231, (unsigned int)v74 + 4, 7, 0);
          if ( (unsigned int)v15 >= 2 )
          {
            src = *(void **)(v191 + 8);
            if ( src )
              src = **(void ***)v191;
          }
          sub_35A790((char **)&dest);
          sub_6E1FD0((__int64 *)v228, &v204);
          v75 = v228[1];
          v76 = _mm_load_si128(&v227);
          memset(&ptr[16], 0, 24);
          *(__m128i *)ptr = v76;
          if ( v228[1] )
          {
            v122 = (void *)qalloc_or_throw(v228[1]);
            *(_QWORD *)&ptr[32] = v75;
            *(_QWORD *)&ptr[16] = v122;
            memcpy(v122, (const void *)v228[0], v75);
            *(_QWORD *)&ptr[24] = v75;
          }
          v77 = n[0];
          v238 = nullptr;
          v239 = 0;
          if ( n[0] )
          {
            v121 = (void *)qalloc_or_throw(n[0]);
            v239.m128i_i64[1] = v77;
            v238 = v121;
            memcpy(v121, dest, v77);
            v239.m128i_i64[0] = v77;
          }
          v240 = 0;
          copy_tinfo_t(&v240);
          v78 = _mm_loadu_si128((const __m128i *)((char *)&v231 + 8));
          v79 = (char *)v210;
          v244 = v234;
          v241 = v78;
          v80 = _mm_loadu_si128(&v232);
          v245 = v235;
          v242 = v80;
          v81 = _mm_loadu_si128(&v233);
          v246 = v236;
          v82 = v211;
          v243 = v81;
          if ( *((_QWORD *)&v211 + 1) < (unsigned __int64)(v211 + 1) )
          {
            v210 = (void *)qvector_reserve(&v210, v210, v211 + 1, 144);
            v79 = (char *)v210;
            v82 = v211;
          }
          v83 = &v79[144 * v82];
          *(__m128i *)v83 = _mm_load_si128((const __m128i *)ptr);
          v84 = *(_QWORD *)&ptr[16];
          v85 = _mm_loadu_si128((const __m128i *)&ptr[24]);
          *(_QWORD *)&ptr[16] = 0;
          *(__m128i *)(v83 + 24) = v85;
          *((_QWORD *)v83 + 2) = v84;
          a8 = _mm_load_si128(&v239);
          *(_OWORD *)&ptr[24] = 0;
          v239 = 0;
          *((_QWORD *)v83 + 5) = v238;
          v238 = nullptr;
          *((_QWORD *)v83 + 8) = 0;
          *((__m128i *)v83 + 3) = a8;
          copy_tinfo_t(v83 + 64);
          v86 = v244;
          v87 = _mm_loadu_si128(&v241);
          *(_QWORD *)&v211 = v211 + 1;
          *(__m128i *)(v83 + 72) = v87;
          v88 = _mm_loadu_si128(&v242);
          *((_QWORD *)v83 + 15) = v86;
          *(__m128i *)(v83 + 88) = v88;
          *(__m128i *)(v83 + 104) = _mm_loadu_si128(&v243);
          *((_QWORD *)v83 + 16) = v245;
          v83[136] = v246;
          clear_tinfo_t(&v240);
          if ( v238 )
          {
            v239.m128i_i64[0] = 0;
            qfree(v238);
          }
          if ( *(_QWORD *)&ptr[16] )
          {
            *(_QWORD *)&ptr[24] = 0;
            qfree(*(void **)&ptr[16]);
          }
          goto LABEL_53;
        }
        v17 = (_BYTE *)(*v16 & 0xFFFFFFFFFFFFFFF8LL);
        LOBYTE(v198) = 12;
        memset(v220, 0, sizeof(v220));
        v221 = 0;
        v222 = 0;
        v224 = nullptr;
        v226 = 16;
        *(_QWORD *)ptr = 0;
        v223 = 0;
        v225 = 0;
        v18 = sub_6E8150(
                (_QWORD *)a1,
                (__int64)v220,
                &v198,
                (__int64)v17,
                ptr,
                (__m128)0LL,
                a8,
                a9,
                a10,
                a11,
                a12,
                a13,
                a14);
        clear_tinfo_t(ptr);
        if ( (_BYTE)v18 )
        {
          sub_6D7D30((__int64)ptr, a1, (__int64)v17, 0);
          v19 = *(_QWORD *)ptr;
          v20 = _mm_loadu_si128((const __m128i *)&ptr[8]);
          memset(ptr, 0, 24);
          if ( v228[0] )
          {
            *(__m128i *)v185 = v20;
            v228[1] = 0;
            qfree((void *)v228[0]);
            si128 = _mm_load_si128((const __m128i *)v185);
            v228[0] = v19;
            *(__m128i *)&v228[1] = si128;
            if ( *(_QWORD *)ptr )
            {
              *(_QWORD *)&ptr[8] = 0;
              qfree(*(void **)ptr);
            }
          }
          else
          {
            v228[0] = v19;
            *(__m128i *)&v228[1] = v20;
          }
          v185[0] = &v199;
          v199 = nullptr;
          if ( (unsigned __int8)create_tinfo(&v199, (unsigned __int8)v198, 12, v220) )
          {
            if ( (*(_BYTE *)(a1 + 122) & 1) != 0 )
              lower_type(*(_QWORD *)(a1 + 16), v185[0], 0, 0);
            v201 = nullptr;
            v190 = v203;
            *(_OWORD *)ptr = 0;
            v203[0] = nullptr;
            copy_tinfo_t(&ptr[8]);
            *(_QWORD *)&ptr[16] = 0;
            v187 = (void **)&ptr[16];
            v189 = &v201;
            copy_tinfo_t(&ptr[16]);
            *(_DWORD *)&ptr[24] = 0;
            *(_WORD *)&ptr[28] = 0;
            clear_tinfo_t(v190);
            clear_tinfo_t(v189);
            copy_tinfo_t(ptr);
            create_tinfo(&v231, 10, 10, ptr);
            clear_tinfo_t(v187);
            clear_tinfo_t(&ptr[8]);
            clear_tinfo_t(ptr);
          }
          sub_6E1FD0((__int64 *)v228, &v204);
          v22 = v228[1];
          v23 = _mm_load_si128(&v227);
          memset(&ptr[16], 0, 24);
          *(__m128i *)ptr = v23;
          if ( v228[1] )
          {
            v138 = (void *)qalloc_or_throw(v228[1]);
            *(_QWORD *)&ptr[32] = v22;
            *(_QWORD *)&ptr[16] = v138;
            memcpy(v138, (const void *)v228[0], v22);
            *(_QWORD *)&ptr[24] = v22;
          }
          v24 = n[0];
          v238 = nullptr;
          v239 = 0;
          if ( n[0] )
          {
            v137 = (void *)qalloc_or_throw(n[0]);
            v239.m128i_i64[1] = v24;
            v238 = v137;
            memcpy(v137, dest, v24);
            v239.m128i_i64[0] = v24;
          }
          v240 = 0;
          copy_tinfo_t(&v240);
          v25 = _mm_loadu_si128((const __m128i *)((char *)&v231 + 8));
          v26 = (char *)v210;
          v244 = v234;
          v241 = v25;
          v27 = _mm_loadu_si128(&v232);
          v245 = v235;
          v242 = v27;
          v28 = _mm_loadu_si128(&v233);
          v246 = v236;
          v29 = v211;
          v243 = v28;
          if ( *((_QWORD *)&v211 + 1) < (unsigned __int64)(v211 + 1) )
          {
            v210 = (void *)qvector_reserve(&v210, v210, v211 + 1, 144);
            v26 = (char *)v210;
            v29 = v211;
          }
          v30 = &v26[144 * v29];
          v31 = &v240;
          *(__m128i *)v30 = _mm_load_si128((const __m128i *)ptr);
          v32 = *(_QWORD *)&ptr[16];
          v33 = _mm_loadu_si128((const __m128i *)&ptr[24]);
          *(_QWORD *)&ptr[16] = 0;
          *(__m128i *)(v30 + 24) = v33;
          *((_QWORD *)v30 + 2) = v32;
          a8 = _mm_load_si128(&v239);
          *(_OWORD *)&ptr[24] = 0;
          v239 = 0;
          *((_QWORD *)v30 + 5) = v238;
          v238 = nullptr;
          *((_QWORD *)v30 + 8) = 0;
          *((__m128i *)v30 + 3) = a8;
          v187 = (void **)v30;
          copy_tinfo_t(v30 + 64);
          v34 = v187;
          v35 = _mm_loadu_si128(&v241);
          *(_QWORD *)&v211 = v211 + 1;
          v187[15] = v244;
          *(__m128i *)(v34 + 9) = v35;
          *(__m128i *)(v34 + 11) = _mm_loadu_si128(&v242);
          *(__m128i *)(v34 + 13) = _mm_loadu_si128(&v243);
          v34[16] = v245;
          *((_BYTE *)v34 + 136) = v246;
          clear_tinfo_t(&v240);
          if ( v238 )
          {
            v239.m128i_i64[0] = 0;
            qfree(v238);
          }
          if ( *(_QWORD *)&ptr[16] )
          {
            *(_QWORD *)&ptr[24] = 0;
            qfree(*(void **)&ptr[16]);
          }
          switch ( (_DWORD)v15 )
          {
            case 7:
              v148 = n[0];
              if ( n[0] )
              {
                v150 = n[0] + 7;
                v149 = n[0] + 8;
                v148 = n[0] - 1;
              }
              else
              {
                v149 = 9;
                v150 = 8;
              }
              v31 = (__int64 *)dest;
              if ( n[1] < v149 )
              {
                v189 = (void **)v150;
                v187 = (void **)v149;
                v170 = (void *)qvector_reserve(&dest, dest, v149, 1);
                v150 = (size_t)v189;
                v149 = (size_t)v187;
                dest = v170;
                v31 = (__int64 *)v170;
              }
              n[0] = v149;
              *((_BYTE *)v31 + v150) = 0;
              v15 = (char *)dest + v148;
              *(_QWORD *)v15 = 0x5D646573756E755BLL;
              break;
            case 5:
              v153 = n[0];
              if ( n[0] )
              {
                v155 = n[0] + 9;
                v154 = n[0] + 10;
                v153 = n[0] - 1;
              }
              else
              {
                v154 = 11;
                v155 = 10;
              }
              v31 = (__int64 *)dest;
              if ( n[1] < v154 )
              {
                v189 = (void **)v155;
                v187 = (void **)v154;
                v177 = (void *)qvector_reserve(&dest, dest, v154, 1);
                v155 = (size_t)v189;
                v154 = (size_t)v187;
                dest = v177;
                v31 = (__int64 *)v177;
              }
              n[0] = v154;
              *((_BYTE *)v31 + v155) = 0;
              v15 = (char *)dest + v153;
              qmemcpy(v15, "[complete]", 10);
              break;
            case 6:
              v156 = n[0];
              if ( n[0] )
              {
                v158 = n[0] + 9;
                v157 = n[0] + 10;
                v156 = n[0] - 1;
              }
              else
              {
                v157 = 11;
                v158 = 10;
              }
              v31 = (__int64 *)dest;
              if ( n[1] < v157 )
              {
                v189 = (void **)v158;
                v187 = (void **)v157;
                v180 = (void *)qvector_reserve(&dest, dest, v157, 1);
                v158 = (size_t)v189;
                v157 = (size_t)v187;
                dest = v180;
                v31 = (__int64 *)v180;
              }
              n[0] = v157;
              *((_BYTE *)v31 + v158) = 0;
              v15 = (char *)dest + v156;
              qmemcpy(v15, "[deleting]", 10);
              break;
          }
          if ( (v17[82] & 8) != 0 )
          {
            v15 = (char *)n[0];
            if ( n[0] > 1 )
            {
              v145 = dest;
              v146 = n[0] - 1;
              v147 = n[0] + 1;
              if ( n[1] < n[0] + 1 )
              {
                v189 = (void **)(n[0] - 1);
                v187 = (void **)(n[0] + 1);
                v169 = (void *)qvector_reserve(&dest, dest, v147, 1);
                v146 = (size_t)v189;
                v147 = (size_t)v187;
                dest = v169;
                v145 = v169;
              }
              n[0] = v147;
              v15[(_QWORD)v145] = 0;
              *((_BYTE *)dest + v146) = 32;
              v15 = (char *)n[0];
            }
            if ( v15 )
            {
              v36 = (__int64)(v15 + 5);
              v37 = (size_t)(v15 + 6);
              --v15;
            }
            else
            {
              v37 = 7;
              v36 = 6;
            }
            v31 = (__int64 *)dest;
            if ( n[1] < v37 )
            {
              v189 = (void **)v36;
              v187 = (void **)v37;
              v151 = (void *)qvector_reserve(&dest, dest, v37, 1);
              v36 = (__int64)v189;
              v37 = (size_t)v187;
              dest = v151;
              v31 = (__int64 *)v151;
            }
            n[0] = v37;
            *((_BYTE *)v31 + v36) = 0;
            v38 = (char *)dest + (_QWORD)v15;
            LODWORD(v15) = 23909;
            *(_DWORD *)v38 = 1920299099;
            *((_WORD *)v38 + 2) = 23909;
          }
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *, __int64 *))(*(_QWORD *)v17 + 32LL))(v17, v31) + 82) & 0x40) != 0 )
          {
            v39 = n[0];
            if ( n[0] > 1 )
            {
              v142 = dest;
              v143 = n[0] - 1;
              v144 = n[0] + 1;
              if ( n[1] < n[0] + 1 )
              {
                v187 = (void **)(n[0] + 1);
                v168 = (void *)qvector_reserve(&dest, dest, v144, 1);
                v144 = (size_t)v187;
                dest = v168;
                v142 = v168;
              }
              n[0] = v144;
              v142[v39] = 0;
              *((_BYTE *)dest + v143) = 32;
              v39 = n[0];
            }
            if ( v39 )
            {
              v15 = (char *)(v39 + 8);
              v40 = v39 + 9;
              --v39;
            }
            else
            {
              v40 = 10;
              v15 = byte_9;
            }
            v41 = dest;
            if ( n[1] < v40 )
            {
              v187 = (void **)v40;
              v152 = (void *)qvector_reserve(&dest, dest, v40, 1);
              v40 = (size_t)v187;
              dest = v152;
              v41 = v152;
            }
            n[0] = v40;
            v15[(_QWORD)v41] = 0;
            v42 = (char *)dest + v39;
            *(_QWORD *)v42 = 0x646574656C65645BLL;
            v42[8] = 93;
          }
          if ( !src )
          {
            v123 = _mm_load_si128(&v227);
            v124 = v228[1];
            memset(&ptr[16], 0, 24);
            *(__m128i *)ptr = v123;
            if ( v228[1] )
            {
              v160 = (void *)qalloc_or_throw(v228[1]);
              *(_QWORD *)&ptr[32] = v124;
              *(_QWORD *)&ptr[16] = v160;
              memcpy(v160, (const void *)v228[0], v124);
              *(_QWORD *)&ptr[24] = v124;
            }
            v125 = n[0];
            v238 = nullptr;
            v239 = 0;
            if ( n[0] )
            {
              v159 = (void *)qalloc_or_throw(n[0]);
              v239.m128i_i64[1] = v125;
              v238 = v159;
              memcpy(v159, dest, v125);
              v239.m128i_i64[0] = v125;
            }
            v240 = 0;
            copy_tinfo_t(&v240);
            v126 = _mm_loadu_si128((const __m128i *)((char *)&v231 + 8));
            v127 = (char *)v215;
            v244 = v234;
            v241 = v126;
            v128 = _mm_loadu_si128(&v232);
            v245 = v235;
            v242 = v128;
            v129 = _mm_loadu_si128(&v233);
            v246 = v236;
            v130 = v216;
            v243 = v129;
            if ( *((_QWORD *)&v216 + 1) < (unsigned __int64)(v216 + 1) )
            {
              v215 = (void *)qvector_reserve(&v215, v215, v216 + 1, 144);
              v127 = (char *)v215;
              v130 = v216;
            }
            v131 = &v127[144 * v130];
            *(__m128i *)v131 = _mm_load_si128((const __m128i *)ptr);
            v132 = *(_QWORD *)&ptr[16];
            v133 = _mm_loadu_si128((const __m128i *)&ptr[24]);
            *(_QWORD *)&ptr[16] = 0;
            *(__m128i *)(v131 + 24) = v133;
            *((_QWORD *)v131 + 2) = v132;
            a8 = _mm_load_si128(&v239);
            *(_OWORD *)&ptr[24] = 0;
            v239 = 0;
            *((_QWORD *)v131 + 5) = v238;
            v238 = nullptr;
            *((_QWORD *)v131 + 8) = 0;
            *((__m128i *)v131 + 3) = a8;
            copy_tinfo_t(v131 + 64);
            v134 = v244;
            v135 = _mm_loadu_si128(&v241);
            *(_QWORD *)&v216 = v216 + 1;
            *(__m128i *)(v131 + 72) = v135;
            v136 = _mm_loadu_si128(&v242);
            *((_QWORD *)v131 + 15) = v134;
            *(__m128i *)(v131 + 88) = v136;
            *(__m128i *)(v131 + 104) = _mm_loadu_si128(&v243);
            *((_QWORD *)v131 + 16) = v245;
            v131[136] = v246;
            clear_tinfo_t(&v240);
            if ( v238 )
            {
              v239.m128i_i64[0] = 0;
              qfree(v238);
            }
            if ( *(_QWORD *)&ptr[16] )
            {
              *(_QWORD *)&ptr[24] = 0;
              qfree(*(void **)&ptr[16]);
            }
          }
          clear_tinfo_t(v185[0]);
          if ( v224 )
          {
            *(_QWORD *)&v225 = 0;
            qfree(v224);
          }
          cleanup_argloc(&v222);
          clear_tinfo_t(&v221);
          v43 = (char *)v220[0];
          if ( v220[0] )
          {
            v15 = (char *)v220[1];
            if ( v220[1] )
            {
              v44 = nullptr;
              do
              {
                v45 = &v43[80 * (_QWORD)v44];
                clear_tinfo_t(v45 + 64);
                v46 = *((void **)v45 + 5);
                if ( v46 )
                {
                  *((_QWORD *)v45 + 6) = 0;
                  qfree(v46);
                }
                v47 = *((void **)v45 + 2);
                if ( v47 )
                {
                  *((_QWORD *)v45 + 3) = 0;
                  qfree(v47);
                }
                ++v44;
                cleanup_argloc(v45);
                v43 = (char *)v220[0];
              }
              while ( v15 != v44 );
            }
            v220[1] = nullptr;
            qfree(v43);
          }
LABEL_53:
          clear_tinfo_t(&v231);
          if ( dest )
          {
            n[0] = 0;
            qfree(dest);
          }
          if ( v228[0] )
          {
            v228[1] = 0;
            qfree((void *)v228[0]);
          }
          if ( v184 == ++v16 )
          {
            v14 = s;
            v15 = v194;
            goto LABEL_59;
          }
          continue;
        }
        v59 = v18;
        if ( v224 )
        {
          *(_QWORD *)&v225 = 0;
          qfree(v224);
        }
        cleanup_argloc(&v222);
        clear_tinfo_t(&v221);
        v161 = (char *)v220[0];
        if ( v220[0] )
        {
          v162 = v220[1];
          if ( v220[1] )
          {
            v163 = nullptr;
            do
            {
              v164 = &v161[80 * (_QWORD)v163];
              clear_tinfo_t(v164 + 64);
              v165 = *((void **)v164 + 5);
              if ( v165 )
              {
                *((_QWORD *)v164 + 6) = 0;
                qfree(v165);
              }
              v166 = *((void **)v164 + 2);
              if ( v166 )
              {
                *((_QWORD *)v164 + 3) = 0;
                qfree(v166);
              }
              v163 = (char *)v163 + 1;
              cleanup_argloc(v164);
              v161 = (char *)v220[0];
            }
            while ( v162 != v163 );
          }
          v220[1] = nullptr;
          qfree(v161);
        }
        clear_tinfo_t(v195);
        if ( dest )
        {
          n[0] = 0;
          qfree(dest);
        }
        if ( v228[0] )
        {
          v228[1] = 0;
          qfree((void *)v228[0]);
        }
LABEL_89:
        sub_6D47B0(v206);
        v60 = (char *)v215;
        if ( v215 )
        {
          v61 = v216;
          if ( (_QWORD)v216 )
          {
            v62 = 0;
            do
            {
              v63 = &v60[144 * v62];
              clear_tinfo_t(v63 + 64);
              v64 = *((void **)v63 + 5);
              if ( v64 )
              {
                *((_QWORD *)v63 + 6) = 0;
                qfree(v64);
              }
              v65 = *((void **)v63 + 2);
              if ( v65 )
              {
                *((_QWORD *)v63 + 3) = 0;
                qfree(v65);
              }
              ++v62;
              v60 = (char *)v215;
            }
            while ( v61 != v62 );
          }
          *(_QWORD *)&v216 = 0;
          qfree(v60);
        }
        v66 = (char *)v210;
        if ( v210 )
        {
          v67 = v211;
          if ( (_QWORD)v211 )
          {
            v68 = 0;
            do
            {
              v69 = &v66[144 * v68];
              clear_tinfo_t(v69 + 64);
              v70 = *((void **)v69 + 5);
              if ( v70 )
              {
                *((_QWORD *)v69 + 6) = 0;
                qfree(v70);
              }
              v71 = *((void **)v69 + 2);
              if ( v71 )
              {
                *((_QWORD *)v69 + 3) = 0;
                qfree(v71);
              }
              ++v68;
              v66 = (char *)v210;
            }
            while ( v67 != v68 );
          }
          *(_QWORD *)&v211 = 0;
          qfree(v66);
        }
        return v59;
      default:
        goto LABEL_112;
    }
  }
}
