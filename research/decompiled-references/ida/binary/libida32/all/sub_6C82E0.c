__int64 __fastcall sub_6C82E0(
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
  const char *v22; // rsi
  size_t v23; // rbp
  __m128i v24; // xmm0
  size_t v25; // rbp
  __m128i v26; // xmm0
  char *v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rax
  char *v30; // rax
  const char *v31; // rsi
  __int64 v32; // rdx
  __m128i v33; // xmm0
  void **v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // r9
  size_t v37; // rdx
  char *v38; // rax
  size_t v39; // r12
  size_t v40; // rdx
  char *v41; // rax
  char *v42; // rdi
  char *v43; // rbp
  char *v44; // r12
  void *v45; // rdi
  void *v46; // rdi
  size_t v47; // rax
  size_t v48; // rbp
  size_t v49; // rbx
  void *v50; // rax
  __int64 v51; // rbx
  const char *v52; // rdi
  size_t v53; // rax
  size_t v54; // r12
  const char *v55; // rcx
  const char *v56; // rcx
  const char *v57; // rcx
  unsigned int v58; // r12d
  char *v59; // rdi
  __int64 v60; // r13
  __int64 v61; // rbp
  char *v62; // rbx
  void *v63; // rdi
  void *v64; // rdi
  char *v65; // rdi
  __int64 v66; // r13
  __int64 v67; // rbp
  char *v68; // rbx
  void *v69; // rdi
  void *v70; // rdi
  char *v72; // r8
  unsigned __int8 v73; // al
  const char *v74; // rsi
  size_t v75; // rbp
  __m128i v76; // xmm0
  size_t v77; // rbp
  __m128i v78; // xmm0
  char *v79; // rsi
  __m128i v80; // xmm0
  __int64 v81; // rax
  char *v82; // r12
  __int64 v83; // rax
  __m128i v84; // xmm0
  void *v85; // rax
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  size_t v88; // rax
  size_t v89; // r15
  size_t v90; // r12
  _QWORD *v91; // rax
  char *v92; // r8
  __m128i v93; // xmm0
  size_t v94; // rax
  void **v95; // r10
  void *v96; // r9
  void **v97; // r8
  const char *v98; // rsi
  size_t v99; // rbp
  __m128i v100; // xmm0
  size_t v101; // rbp
  __m128i v102; // xmm0
  char *v103; // rsi
  __m128i v104; // xmm0
  __int64 v105; // rax
  char *v106; // rax
  __int64 v107; // rdx
  __m128i v108; // xmm0
  char *v109; // rax
  __m128i v110; // xmm0
  unsigned __int64 v111; // rcx
  char *v112; // rax
  char *v113; // r8
  unsigned int v114; // eax
  unsigned int v115; // eax
  unsigned int v116; // edx
  __int64 v117; // rsi
  void *v118; // rax
  void *v119; // rax
  void *v120; // rax
  void *v121; // rax
  __m128i v122; // xmm0
  size_t v123; // r12
  size_t v124; // r12
  __m128i v125; // xmm0
  char *v126; // rsi
  __m128i v127; // xmm0
  __int64 v128; // rax
  char *v129; // r12
  __int64 v130; // rax
  __m128i v131; // xmm0
  void *v132; // rax
  __m128i v133; // xmm0
  __m128i v134; // xmm0
  void *v135; // rax
  void *v136; // rax
  void *v137; // rdi
  size_t v138; // rdx
  void **p_dest; // r8
  _BYTE *v140; // rsi
  size_t v141; // r15
  size_t v142; // rdx
  void *v143; // rsi
  size_t v144; // r9
  size_t v145; // rdx
  size_t v146; // r15
  size_t v147; // rdx
  size_t v148; // r9
  void *v149; // rax
  void *v150; // rax
  size_t v151; // r15
  size_t v152; // rdx
  size_t v153; // r9
  size_t v154; // r15
  size_t v155; // rdx
  size_t v156; // r9
  void *v157; // rax
  void *v158; // rax
  char *v159; // rdi
  void *v160; // r13
  void *v161; // rbp
  char *v162; // rbx
  void *v163; // rdi
  void *v164; // rdi
  void *v165; // rax
  void *v166; // rax
  void *v167; // rax
  void *v168; // rax
  __int64 v169; // rdx
  __int64 v170; // rsi
  __int64 *v171; // rax
  __int64 v172; // r8
  __int64 v173; // rsi
  __int64 v174; // rax
  void *v175; // rax
  __int64 *v176; // rax
  __int64 v177; // rax
  void *v178; // rax
  __int64 v180; // [rsp+8h] [rbp-580h]
  __int64 v181; // [rsp+8h] [rbp-580h]
  _QWORD *v182; // [rsp+18h] [rbp-570h]
  void *v183[2]; // [rsp+20h] [rbp-568h] BYREF
  void *src; // [rsp+30h] [rbp-558h]
  void **v185; // [rsp+38h] [rbp-550h]
  __int64 v186; // [rsp+40h] [rbp-548h]
  void **v187; // [rsp+48h] [rbp-540h]
  void **v188; // [rsp+50h] [rbp-538h]
  __int64 v189; // [rsp+58h] [rbp-530h]
  __int64 *v190; // [rsp+60h] [rbp-528h]
  char *s; // [rsp+68h] [rbp-520h]
  char *v192; // [rsp+70h] [rbp-518h]
  __int128 *v193; // [rsp+78h] [rbp-510h]
  __int64 v194; // [rsp+88h] [rbp-500h] BYREF
  __int64 v195; // [rsp+90h] [rbp-4F8h] BYREF
  __int64 v196; // [rsp+98h] [rbp-4F0h] BYREF
  void *v197; // [rsp+A0h] [rbp-4E8h] BYREF
  __int128 v198; // [rsp+A8h] [rbp-4E0h]
  void *v199; // [rsp+C0h] [rbp-4C8h] BYREF
  __int128 v200; // [rsp+C8h] [rbp-4C0h]
  void *v201[4]; // [rsp+E0h] [rbp-4A8h] BYREF
  char v202[8]; // [rsp+100h] [rbp-488h] BYREF
  int v203; // [rsp+108h] [rbp-480h] BYREF
  _QWORD *v204; // [rsp+110h] [rbp-478h]
  int *v205; // [rsp+118h] [rbp-470h]
  int *v206; // [rsp+120h] [rbp-468h]
  __int64 v207; // [rsp+128h] [rbp-460h]
  void *v208; // [rsp+130h] [rbp-458h] BYREF
  __int128 v209; // [rsp+138h] [rbp-450h]
  __int128 v210; // [rsp+148h] [rbp-440h]
  __int64 v211; // [rsp+158h] [rbp-430h]
  int v212; // [rsp+160h] [rbp-428h]
  void *v213; // [rsp+170h] [rbp-418h] BYREF
  __int128 v214; // [rsp+178h] [rbp-410h]
  __int128 v215; // [rsp+188h] [rbp-400h]
  __int64 v216; // [rsp+198h] [rbp-3F0h]
  int v217; // [rsp+1A0h] [rbp-3E8h]
  void *v218[4]; // [rsp+1B0h] [rbp-3D8h] BYREF
  __int64 v219; // [rsp+1D0h] [rbp-3B8h] BYREF
  __int64 v220; // [rsp+1D8h] [rbp-3B0h] BYREF
  char **v221; // [rsp+1E0h] [rbp-3A8h]
  int v222; // [rsp+1E8h] [rbp-3A0h]
  void *v223; // [rsp+1F0h] [rbp-398h]
  __int128 v224; // [rsp+1F8h] [rbp-390h]
  char v225; // [rsp+208h] [rbp-380h]
  __m128i v226; // [rsp+210h] [rbp-378h] BYREF
  size_t v227[3]; // [rsp+220h] [rbp-368h] BYREF
  void *dest; // [rsp+238h] [rbp-350h] BYREF
  size_t n[2]; // [rsp+240h] [rbp-348h]
  __int128 v230; // [rsp+250h] [rbp-338h] BYREF
  __m128i v231; // [rsp+268h] [rbp-320h] BYREF
  void *v232; // [rsp+278h] [rbp-310h]
  void *v233; // [rsp+280h] [rbp-308h]
  char v234; // [rsp+288h] [rbp-300h]
  _BYTE ptr[40]; // [rsp+290h] [rbp-2F8h] BYREF
  void *v236; // [rsp+2B8h] [rbp-2D0h]
  __m128i v237; // [rsp+2C0h] [rbp-2C8h] BYREF
  __int64 v238; // [rsp+2D0h] [rbp-2B8h] BYREF
  __m128i v239; // [rsp+2D8h] [rbp-2B0h] BYREF
  __m128i v240; // [rsp+2E8h] [rbp-2A0h] BYREF
  void *v241; // [rsp+2F8h] [rbp-290h]
  void *v242; // [rsp+300h] [rbp-288h]
  char v243; // [rsp+308h] [rbp-280h]
  void *v244[2]; // [rsp+310h] [rbp-278h] BYREF
  _QWORD v245[2]; // [rsp+320h] [rbp-268h] BYREF
  char *v246[2]; // [rsp+330h] [rbp-258h] BYREF
  _QWORD v247[2]; // [rsp+340h] [rbp-248h] BYREF
  char *v248[2]; // [rsp+350h] [rbp-238h] BYREF
  _QWORD v249[69]; // [rsp+360h] [rbp-228h] BYREF

  v14 = a4;
  v190 = a2;
  v186 = a3;
  v249[61] = __readfsqword(0x28u);
  v15 = a6;
  v205 = &v203;
  v208 = nullptr;
  v211 = 0;
  v212 = 1;
  v213 = nullptr;
  v216 = 0;
  v217 = 1;
  v203 = 0;
  v204 = nullptr;
  v209 = 0;
  v210 = 0;
  v214 = 0;
  v215 = 0;
  v206 = &v203;
  v16 = *(_QWORD **)(a5 + 16);
  v207 = 0;
  v182 = &v16[*(_QWORD *)(a5 + 24)];
  if ( v16 == v182 )
  {
LABEL_59:
    v197 = nullptr;
    v198 = 0;
    if ( v14 )
    {
      v47 = strlen(v14);
      v48 = v47 + 1;
      v49 = v47;
      v50 = (void *)qvector_reserve(&v197, 0, v47 + 1, 1);
      *(_QWORD *)&v198 = v48;
      v197 = v50;
      memmove(v50, v14, v49);
      *((_BYTE *)v197 + v49) = 0;
    }
    if ( v15 )
      sub_357520((__int64 *)&v197);
    v244[0] = v245;
    dest = (void *)0x100000000LL;
    v226.m128i_i64[0] = (__int64)&off_2BC1EC8;
    memset(v227, 0, sizeof(v227));
    n[0] = (size_t)v244;
    v244[1] = nullptr;
    LOBYTE(v245[0]) = 0;
    v226.m128i_i64[1] = 0;
    sub_2257B70(&v226, 0, 0, 0);
    v51 = sub_A40BF0(*(_QWORD *)(a1 + 48), 0);
    (*(void (__fastcall **)(__int64, __int64, __m128i *))(*(_QWORD *)v51 + 104LL))(v51, v186, &v226);
    v52 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 17448LL) + 288LL);
    v53 = 0;
    if ( v52 )
      v53 = strlen(v52);
    sub_20440E0(v248, v52, v53);
    *(_QWORD *)ptr = &off_2BC1EC8;
    v236 = (void *)0x100000000LL;
    v237.m128i_i64[0] = (__int64)v246;
    v246[0] = (char *)v247;
    v246[1] = nullptr;
    LOBYTE(v247[0]) = 0;
    memset(&ptr[8], 0, 32);
    sub_2257B70(ptr, 0, 0, 0);
    LOWORD(v219) = 260;
    v218[0] = (void *)n[0];
    sub_207A8A0(ptr, v218, v248);
    v199 = nullptr;
    v200 = 0;
    if ( v246[0] )
    {
      src = v246[0];
      v54 = strlen(v246[0]);
      v183[0] = (void *)(v54 + 1);
      v199 = (void *)qvector_reserve(&v199, 0, v54 + 1, 1);
      *(void **)&v200 = v183[0];
      memmove(v199, src, v54);
      *((_BYTE *)v199 + v54) = 0;
      if ( (unsigned __int64)v200 > 1 )
      {
        memset(v218, 0, 24);
        sub_3573A0((char **)v218);
        v201[0] = nullptr;
        create_tinfo(v201, 13, 13, &v208);
        v55 = haystack;
        if ( v218[1] )
          v55 = (const char *)v218[0];
        sub_6BED00(a1, v201, 1, v55, nullptr, v186, 0);
        v56 = haystack;
        if ( (_QWORD)v200 )
          v56 = (const char *)v199;
        sub_6BED00(a1, v201, 0, v56, nullptr, v186, 0);
        clear_tinfo_t(v201);
        if ( v218[0] )
        {
          v218[1] = nullptr;
          qfree(v218[0]);
        }
      }
    }
    HIDWORD(v216) |= 0x100u;
    memset(v201, 0, 24);
    sub_3573A0((char **)v201);
    v194 = 0;
    create_tinfo(&v194, 13, 13, &v213);
    v57 = haystack;
    if ( v201[1] )
      v57 = (const char *)v201[0];
    sub_6BED00(a1, &v194, 1, v57, nullptr, v186, 0);
    if ( (*(_BYTE *)(*(_QWORD *)(sub_EBA840(*(_QWORD *)(a1 + 48), v186) + 72) + 40LL) & 1) != 0 )
    {
      v169 = v190[1];
      v170 = *v190;
      if ( v190[2] < (unsigned __int64)(v169 + 1) )
      {
        v170 = qvector_reserve(v190, v170, v169 + 1, 128);
        v176 = v190;
        *v190 = v170;
        v169 = v176[1];
      }
      v171 = v190;
      v172 = v170 + (v169 << 7);
      *(_QWORD *)(v172 + 16) = 0;
      *(_OWORD *)(v172 + 24) = 0;
      *(_QWORD *)(v172 + 40) = 0;
      *(_QWORD *)(v172 + 96) = 1;
      *(_DWORD *)(v172 + 104) = -1;
      *(_QWORD *)(v172 + 112) = 0;
      *(_BYTE *)(v172 + 120) = 0;
      *(_OWORD *)v172 = 0;
      *(_OWORD *)(v172 + 48) = 0;
      *(_OWORD *)(v172 + 64) = 0;
      ++v171[1];
      v173 = *(_QWORD *)(v172 + 16);
      if ( *(_QWORD *)(v172 + 32) <= 9u )
      {
        v181 = v172;
        v177 = qvector_reserve(v172 + 16, v173, 10, 1);
        v172 = v181;
        v173 = v177;
        *(_QWORD *)(v181 + 16) = v177;
      }
      *(_QWORD *)(v172 + 24) = 10;
      *(_QWORD *)v173 = 0x6C62617466765F5FLL;
      *(_BYTE *)(v173 + 8) = 101;
      v174 = *(_QWORD *)(v172 + 16);
      src = &v218[1];
      *(_BYTE *)(v174 + 9) = 0;
      *(_DWORD *)(v172 + 116) |= 0x100u;
      v186 = v172;
      *(_OWORD *)v218 = 0;
      v185 = (void **)&v196;
      v195 = 0;
      v196 = 0;
      copy_tinfo_t(&v218[1]);
      v218[2] = nullptr;
      v183[0] = &v218[2];
      copy_tinfo_t(&v218[2]);
      LODWORD(v218[3]) = 0;
      WORD2(v218[3]) = 0;
      clear_tinfo_t(v185);
      clear_tinfo_t(&v195);
      copy_tinfo_t(v218);
      v180 = v186;
      create_tinfo(v186 + 64, 10, 10, v218);
      clear_tinfo_t(v183[0]);
      clear_tinfo_t(src);
      clear_tinfo_t(v218);
      *(_QWORD *)(v180 + 8) = 8 * get_tinfo_size(0, *(_QWORD *)(v180 + 64), 0);
    }
    clear_tinfo_t(&v194);
    if ( v201[0] )
    {
      v201[1] = nullptr;
      qfree(v201[0]);
    }
    if ( v199 )
    {
      *(_QWORD *)&v200 = 0;
      qfree(v199);
    }
    *(_QWORD *)ptr = &off_2BC1EC8;
    sub_2257A60(ptr);
    if ( (_QWORD *)v246[0] != v247 )
      operator delete(v246[0], v247[0] + 1LL);
    sub_2047290(v248);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    v226.m128i_i64[0] = (__int64)&off_2BC1EC8;
    sub_2257A60(&v226);
    if ( v244[0] != v245 )
      operator delete(v244[0], v245[0] + 1LL);
    if ( v197 )
    {
      *(_QWORD *)&v198 = 0;
      qfree(v197);
    }
    v58 = 1;
    goto LABEL_89;
  }
  s = a4;
  src = nullptr;
  v193 = &v230;
  v189 = a5;
  v192 = a6;
  while ( 2 )
  {
    switch ( *v16 & 7LL )
    {
      case 0LL:
        v72 = "func";
        goto LABEL_4;
      case 1LL:
        v72 = (char *)"dtor";
        goto LABEL_4;
      case 2LL:
        v72 = "delete";
        goto LABEL_4;
      case 3LL:
        v72 = "unused";
LABEL_4:
        memset(v227, 0, sizeof(v227));
        dest = nullptr;
        v231.m128i_i64[1] = 1;
        LODWORD(v232) = -1;
        v233 = nullptr;
        v234 = 0;
        v226 = 0;
        *(_OWORD *)n = 0;
        v230 = 0;
        v15 = (char *)(*v16 & 7LL);
        if ( (_DWORD)v15 == 3 )
        {
          v183[0] = v72;
          v88 = strlen(v72);
          v89 = v88 + 1;
          v90 = v88;
          v91 = (_QWORD *)qvector_reserve(v227, 0, v88 + 1, 1);
          v92 = (char *)v183[0];
          v227[1] = v89;
          v227[0] = (size_t)v91;
          if ( (unsigned int)v90 >= 8 )
          {
            *v91 = *(_QWORD *)v183[0];
            *(_QWORD *)((char *)v91 + (unsigned int)v90 - 8) = *(_QWORD *)&v92[(unsigned int)v90 - 8];
            v111 = (unsigned __int64)(v91 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v112 = (char *)v91 - v111;
            v113 = (char *)(v92 - v112);
            v114 = (v90 + (_DWORD)v112) & 0xFFFFFFF8;
            if ( v114 >= 8 )
            {
              v115 = v114 & 0xFFFFFFF8;
              v116 = 0;
              do
              {
                v117 = v116;
                v116 += 8;
                *(_QWORD *)(v111 + v117) = *(_QWORD *)&v113[v117];
              }
              while ( v116 < v115 );
            }
          }
          else if ( (v90 & 4) != 0 )
          {
            *(_DWORD *)v91 = *(_DWORD *)v183[0];
            *(_DWORD *)((char *)v91 + (unsigned int)v90 - 4) = *(_DWORD *)&v92[(unsigned int)v90 - 4];
          }
          else if ( (_DWORD)v90 )
          {
            *(_BYTE *)v91 = *(_BYTE *)v183[0];
            if ( (v90 & 2) != 0 )
              *(_WORD *)((char *)v91 + (unsigned int)v90 - 2) = *(_WORD *)&v92[(unsigned int)v90 - 2];
          }
          *(_BYTE *)(v227[0] + v90) = 0;
          get_stock_tinfo(&v230, 7);
          v15 = (char *)&unk_2BC1EB8;
          v93 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 48) + 17464LL));
          v220 = 0x100000000LL;
          v218[0] = &off_2BC1EC8;
          *(__m128i *)v201 = v93;
          v248[0] = (char *)v249;
          LODWORD(v201[0]) = _mm_cvtsi128_si32(v93) & 0xFDBF8FFF | 0x2001000;
          v221 = v248;
          v248[1] = nullptr;
          LOBYTE(v249[0]) = 0;
          memset(&v218[1], 0, 24);
          v219 = 0;
          sub_2257B70(v218, 0, 0, 0);
          sub_B53090(*v16 & 0xFFFFFFFFFFFFFFF8LL, v218, v201);
          if ( v248[0]
            && (v183[0] = v248[0], v94 = strlen(v248[0]), v95 = (void **)v183[0], (v96 = (void *)v94) != nullptr) )
          {
            v137 = dest;
            v138 = v94 + 1;
            p_dest = &dest;
            if ( n[1] < v94 + 1 )
            {
              v187 = (void **)v183[0];
              v185 = (void **)(v94 + 1);
              v183[0] = &dest;
              v188 = (void **)v94;
              v165 = (void *)qvector_reserve(&dest, dest, v138, 1);
              v96 = v188;
              v95 = v187;
              dest = v165;
              v138 = (size_t)v185;
              v137 = v165;
              p_dest = (void **)v183[0];
            }
            n[0] = v138;
            v185 = p_dest;
            v183[0] = v96;
            memmove(v137, v95, (size_t)v96);
            v97 = v185;
            *((_BYTE *)dest + (unsigned __int64)v183[0]) = 0;
          }
          else
          {
            n[0] = 0;
            v97 = &dest;
          }
          sub_6B9AB0(a1, (__int64)v97);
          v98 = v202;
          sub_6C1990((__int64 *)v227, v202);
          v99 = v227[1];
          v100 = _mm_load_si128(&v226);
          memset(&ptr[16], 0, 24);
          *(__m128i *)ptr = v100;
          if ( v227[1] )
          {
            v119 = (void *)qalloc_or_throw(v227[1], v202);
            v98 = (const char *)v227[0];
            *(_QWORD *)&ptr[32] = v99;
            *(_QWORD *)&ptr[16] = v119;
            memcpy(v119, (const void *)v227[0], v99);
            *(_QWORD *)&ptr[24] = v99;
          }
          v101 = n[0];
          v236 = nullptr;
          v237 = 0;
          if ( n[0] )
          {
            v118 = (void *)qalloc_or_throw(n[0], v98);
            v237.m128i_i64[1] = v101;
            v236 = v118;
            memcpy(v118, dest, v101);
            v237.m128i_i64[0] = v101;
          }
          v238 = 0;
          copy_tinfo_t(&v238);
          v102 = _mm_loadu_si128((const __m128i *)((char *)&v230 + 8));
          v103 = (char *)v208;
          v241 = v232;
          v239 = v102;
          v104 = _mm_loadu_si128(&v231);
          v242 = v233;
          v240 = v104;
          v243 = v234;
          v105 = v209;
          if ( *((_QWORD *)&v209 + 1) < (unsigned __int64)(v209 + 1) )
          {
            v208 = (void *)qvector_reserve(&v208, v208, v209 + 1, 128);
            v103 = (char *)v208;
            v105 = v209;
          }
          v106 = &v103[128 * v105];
          *(__m128i *)v106 = _mm_load_si128((const __m128i *)ptr);
          v107 = *(_QWORD *)&ptr[16];
          v108 = _mm_loadu_si128((const __m128i *)&ptr[24]);
          *(_QWORD *)&ptr[16] = 0;
          *(__m128i *)(v106 + 24) = v108;
          *((_QWORD *)v106 + 2) = v107;
          a8 = _mm_load_si128(&v237);
          *(_OWORD *)&ptr[24] = 0;
          v237 = 0;
          *((_QWORD *)v106 + 5) = v236;
          v236 = nullptr;
          *((_QWORD *)v106 + 8) = 0;
          *((__m128i *)v106 + 3) = a8;
          v183[0] = v106;
          copy_tinfo_t(v106 + 64);
          v109 = (char *)v183[0];
          v110 = _mm_loadu_si128(&v239);
          *(_QWORD *)&v209 = v209 + 1;
          *((_QWORD *)v183[0] + 13) = v241;
          *(__m128i *)(v109 + 72) = v110;
          *(__m128i *)(v109 + 88) = _mm_loadu_si128(&v240);
          *((_QWORD *)v109 + 14) = v242;
          v109[120] = v243;
          clear_tinfo_t(&v238);
          if ( v236 )
          {
            v237.m128i_i64[0] = 0;
            qfree(v236);
          }
          if ( *(_QWORD *)&ptr[16] )
          {
            *(_QWORD *)&ptr[24] = 0;
            qfree(*(void **)&ptr[16]);
          }
          v218[0] = &off_2BC1EC8;
          sub_2257A60(v218);
          if ( (_QWORD *)v248[0] != v249 )
            operator delete(v248[0], v249[0] + 1LL);
          goto LABEL_53;
        }
        if ( (unsigned int)((_DWORD)v15 - 4) > 3 )
        {
LABEL_112:
          sub_3573A0((char **)v227);
          v73 = getinf_flag(3, 4);
          create_tinfo(&v230, (unsigned int)v73 + 4, 7, 0);
          if ( (unsigned int)v15 >= 2 )
          {
            src = *(void **)(v189 + 8);
            if ( src )
              src = **(void ***)v189;
          }
          sub_3573A0((char **)&dest);
          v74 = v202;
          sub_6C1990((__int64 *)v227, v202);
          v75 = v227[1];
          v76 = _mm_load_si128(&v226);
          memset(&ptr[16], 0, 24);
          *(__m128i *)ptr = v76;
          if ( v227[1] )
          {
            v121 = (void *)qalloc_or_throw(v227[1], v202);
            v74 = (const char *)v227[0];
            *(_QWORD *)&ptr[32] = v75;
            *(_QWORD *)&ptr[16] = v121;
            memcpy(v121, (const void *)v227[0], v75);
            *(_QWORD *)&ptr[24] = v75;
          }
          v77 = n[0];
          v236 = nullptr;
          v237 = 0;
          if ( n[0] )
          {
            v120 = (void *)qalloc_or_throw(n[0], v74);
            v237.m128i_i64[1] = v77;
            v236 = v120;
            memcpy(v120, dest, v77);
            v237.m128i_i64[0] = v77;
          }
          v238 = 0;
          copy_tinfo_t(&v238);
          v78 = _mm_loadu_si128((const __m128i *)((char *)&v230 + 8));
          v79 = (char *)v208;
          v241 = v232;
          v239 = v78;
          v80 = _mm_loadu_si128(&v231);
          v242 = v233;
          v240 = v80;
          v243 = v234;
          v81 = v209;
          if ( *((_QWORD *)&v209 + 1) < (unsigned __int64)(v209 + 1) )
          {
            v208 = (void *)qvector_reserve(&v208, v208, v209 + 1, 128);
            v79 = (char *)v208;
            v81 = v209;
          }
          v82 = &v79[128 * v81];
          *(__m128i *)v82 = _mm_load_si128((const __m128i *)ptr);
          v83 = *(_QWORD *)&ptr[16];
          v84 = _mm_loadu_si128((const __m128i *)&ptr[24]);
          *(_QWORD *)&ptr[16] = 0;
          *(__m128i *)(v82 + 24) = v84;
          *((_QWORD *)v82 + 2) = v83;
          a8 = _mm_load_si128(&v237);
          *(_OWORD *)&ptr[24] = 0;
          v237 = 0;
          *((_QWORD *)v82 + 5) = v236;
          v236 = nullptr;
          *((_QWORD *)v82 + 8) = 0;
          *((__m128i *)v82 + 3) = a8;
          copy_tinfo_t(v82 + 64);
          v85 = v241;
          v86 = _mm_loadu_si128(&v239);
          *(_QWORD *)&v209 = v209 + 1;
          *(__m128i *)(v82 + 72) = v86;
          v87 = _mm_loadu_si128(&v240);
          *((_QWORD *)v82 + 13) = v85;
          *(__m128i *)(v82 + 88) = v87;
          *((_QWORD *)v82 + 14) = v242;
          v82[120] = v243;
          clear_tinfo_t(&v238);
          if ( v236 )
          {
            v237.m128i_i64[0] = 0;
            qfree(v236);
          }
          if ( *(_QWORD *)&ptr[16] )
          {
            *(_QWORD *)&ptr[24] = 0;
            qfree(*(void **)&ptr[16]);
          }
          goto LABEL_53;
        }
        v17 = (_BYTE *)(*v16 & 0xFFFFFFFFFFFFFFF8LL);
        LOBYTE(v196) = 12;
        memset(v218, 0, sizeof(v218));
        v219 = 0;
        v220 = 0;
        v221 = nullptr;
        v222 = 0;
        v223 = nullptr;
        v225 = 16;
        *(_QWORD *)ptr = 0;
        v224 = 0;
        v18 = sub_6C7B20(
                (_QWORD *)a1,
                (__int64)v218,
                &v196,
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
          sub_6B7750((__int64)ptr, a1, (__int64)v17, 0);
          v19 = *(_QWORD *)ptr;
          v20 = _mm_loadu_si128((const __m128i *)&ptr[8]);
          memset(ptr, 0, 24);
          if ( v227[0] )
          {
            *(__m128i *)v183 = v20;
            v227[1] = 0;
            qfree((void *)v227[0]);
            si128 = _mm_load_si128((const __m128i *)v183);
            v227[0] = v19;
            *(__m128i *)&v227[1] = si128;
            if ( *(_QWORD *)ptr )
            {
              *(_QWORD *)&ptr[8] = 0;
              qfree(*(void **)ptr);
            }
          }
          else
          {
            v227[0] = v19;
            *(__m128i *)&v227[1] = v20;
          }
          v183[0] = &v197;
          v197 = nullptr;
          if ( (unsigned __int8)create_tinfo(&v197, (unsigned __int8)v196, 12, v218) )
          {
            if ( (*(_BYTE *)(a1 + 122) & 1) != 0 )
              lower_type(*(_QWORD *)(a1 + 16), v183[0], 0, 0);
            v199 = nullptr;
            v188 = v201;
            *(_OWORD *)ptr = 0;
            v201[0] = nullptr;
            copy_tinfo_t(&ptr[8]);
            *(_QWORD *)&ptr[16] = 0;
            v185 = (void **)&ptr[16];
            v187 = &v199;
            copy_tinfo_t(&ptr[16]);
            *(_DWORD *)&ptr[24] = 0;
            *(_WORD *)&ptr[28] = 0;
            clear_tinfo_t(v188);
            clear_tinfo_t(v187);
            copy_tinfo_t(ptr);
            create_tinfo(&v230, 10, 10, ptr);
            clear_tinfo_t(v185);
            clear_tinfo_t(&ptr[8]);
            clear_tinfo_t(ptr);
          }
          v22 = v202;
          sub_6C1990((__int64 *)v227, v202);
          v23 = v227[1];
          v24 = _mm_load_si128(&v226);
          memset(&ptr[16], 0, 24);
          *(__m128i *)ptr = v24;
          if ( v227[1] )
          {
            v136 = (void *)qalloc_or_throw(v227[1], v202);
            v22 = (const char *)v227[0];
            *(_QWORD *)&ptr[32] = v23;
            *(_QWORD *)&ptr[16] = v136;
            memcpy(v136, (const void *)v227[0], v23);
            *(_QWORD *)&ptr[24] = v23;
          }
          v25 = n[0];
          v236 = nullptr;
          v237 = 0;
          if ( n[0] )
          {
            v135 = (void *)qalloc_or_throw(n[0], v22);
            v237.m128i_i64[1] = v25;
            v236 = v135;
            memcpy(v135, dest, v25);
            v237.m128i_i64[0] = v25;
          }
          v238 = 0;
          copy_tinfo_t(&v238);
          v26 = _mm_loadu_si128((const __m128i *)((char *)&v230 + 8));
          v27 = (char *)v208;
          v241 = v232;
          v239 = v26;
          v28 = _mm_loadu_si128(&v231);
          v242 = v233;
          v240 = v28;
          v243 = v234;
          v29 = v209;
          if ( *((_QWORD *)&v209 + 1) < (unsigned __int64)(v209 + 1) )
          {
            v208 = (void *)qvector_reserve(&v208, v208, v209 + 1, 128);
            v27 = (char *)v208;
            v29 = v209;
          }
          v30 = &v27[128 * v29];
          v31 = (const char *)&v238;
          *(__m128i *)v30 = _mm_load_si128((const __m128i *)ptr);
          v32 = *(_QWORD *)&ptr[16];
          v33 = _mm_loadu_si128((const __m128i *)&ptr[24]);
          *(_QWORD *)&ptr[16] = 0;
          *(__m128i *)(v30 + 24) = v33;
          *((_QWORD *)v30 + 2) = v32;
          a8 = _mm_load_si128(&v237);
          *(_OWORD *)&ptr[24] = 0;
          v237 = 0;
          *((_QWORD *)v30 + 5) = v236;
          v236 = nullptr;
          *((_QWORD *)v30 + 8) = 0;
          *((__m128i *)v30 + 3) = a8;
          v185 = (void **)v30;
          copy_tinfo_t(v30 + 64);
          v34 = v185;
          v35 = _mm_loadu_si128(&v239);
          *(_QWORD *)&v209 = v209 + 1;
          v185[13] = v241;
          *(__m128i *)(v34 + 9) = v35;
          *(__m128i *)(v34 + 11) = _mm_loadu_si128(&v240);
          v34[14] = v242;
          *((_BYTE *)v34 + 120) = v243;
          clear_tinfo_t(&v238);
          if ( v236 )
          {
            v237.m128i_i64[0] = 0;
            qfree(v236);
          }
          if ( *(_QWORD *)&ptr[16] )
          {
            *(_QWORD *)&ptr[24] = 0;
            qfree(*(void **)&ptr[16]);
          }
          switch ( (_DWORD)v15 )
          {
            case 7:
              v146 = n[0];
              if ( n[0] )
              {
                v148 = n[0] + 7;
                v147 = n[0] + 8;
                v146 = n[0] - 1;
              }
              else
              {
                v147 = 9;
                v148 = 8;
              }
              v31 = (const char *)dest;
              if ( n[1] < v147 )
              {
                v187 = (void **)v148;
                v185 = (void **)v147;
                v168 = (void *)qvector_reserve(&dest, dest, v147, 1);
                v148 = (size_t)v187;
                v147 = (size_t)v185;
                dest = v168;
                v31 = (const char *)v168;
              }
              n[0] = v147;
              v31[v148] = 0;
              v15 = (char *)dest + v146;
              *(_QWORD *)v15 = 0x5D646573756E755BLL;
              break;
            case 5:
              v151 = n[0];
              if ( n[0] )
              {
                v153 = n[0] + 9;
                v152 = n[0] + 10;
                v151 = n[0] - 1;
              }
              else
              {
                v152 = 11;
                v153 = 10;
              }
              v31 = (const char *)dest;
              if ( n[1] < v152 )
              {
                v187 = (void **)v153;
                v185 = (void **)v152;
                v175 = (void *)qvector_reserve(&dest, dest, v152, 1);
                v153 = (size_t)v187;
                v152 = (size_t)v185;
                dest = v175;
                v31 = (const char *)v175;
              }
              n[0] = v152;
              v31[v153] = 0;
              v15 = (char *)dest + v151;
              qmemcpy(v15, "[complete]", 10);
              break;
            case 6:
              v154 = n[0];
              if ( n[0] )
              {
                v156 = n[0] + 9;
                v155 = n[0] + 10;
                v154 = n[0] - 1;
              }
              else
              {
                v155 = 11;
                v156 = 10;
              }
              v31 = (const char *)dest;
              if ( n[1] < v155 )
              {
                v187 = (void **)v156;
                v185 = (void **)v155;
                v178 = (void *)qvector_reserve(&dest, dest, v155, 1);
                v156 = (size_t)v187;
                v155 = (size_t)v185;
                dest = v178;
                v31 = (const char *)v178;
              }
              n[0] = v155;
              v31[v156] = 0;
              v15 = (char *)dest + v154;
              qmemcpy(v15, "[deleting]", 10);
              break;
          }
          if ( (v17[82] & 8) != 0 )
          {
            v15 = (char *)n[0];
            if ( n[0] > 1 )
            {
              v143 = dest;
              v144 = n[0] - 1;
              v145 = n[0] + 1;
              if ( n[1] < n[0] + 1 )
              {
                v187 = (void **)(n[0] - 1);
                v185 = (void **)(n[0] + 1);
                v167 = (void *)qvector_reserve(&dest, dest, v145, 1);
                v144 = (size_t)v187;
                v145 = (size_t)v185;
                dest = v167;
                v143 = v167;
              }
              n[0] = v145;
              v15[(_QWORD)v143] = 0;
              *((_BYTE *)dest + v144) = 32;
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
            v31 = (const char *)dest;
            if ( n[1] < v37 )
            {
              v187 = (void **)v36;
              v185 = (void **)v37;
              v149 = (void *)qvector_reserve(&dest, dest, v37, 1);
              v36 = (__int64)v187;
              v37 = (size_t)v185;
              dest = v149;
              v31 = (const char *)v149;
            }
            n[0] = v37;
            v31[v36] = 0;
            v38 = (char *)dest + (_QWORD)v15;
            LODWORD(v15) = 23909;
            *(_DWORD *)v38 = 1920299099;
            *((_WORD *)v38 + 2) = 23909;
          }
          if ( (*(_BYTE *)((*(__int64 (__fastcall **)(_BYTE *, const char *))(*(_QWORD *)v17 + 32LL))(v17, v31) + 82)
              & 0x40) != 0 )
          {
            v39 = n[0];
            if ( n[0] > 1 )
            {
              v140 = dest;
              v141 = n[0] - 1;
              v142 = n[0] + 1;
              if ( n[1] < n[0] + 1 )
              {
                v185 = (void **)(n[0] + 1);
                v166 = (void *)qvector_reserve(&dest, dest, v142, 1);
                v142 = (size_t)v185;
                dest = v166;
                v140 = v166;
              }
              n[0] = v142;
              v140[v39] = 0;
              *((_BYTE *)dest + v141) = 32;
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
            v31 = (const char *)dest;
            if ( n[1] < v40 )
            {
              v185 = (void **)v40;
              v150 = (void *)qvector_reserve(&dest, dest, v40, 1);
              v40 = (size_t)v185;
              dest = v150;
              v31 = (const char *)v150;
            }
            n[0] = v40;
            v15[(_QWORD)v31] = 0;
            v41 = (char *)dest + v39;
            *(_QWORD *)v41 = 0x646574656C65645BLL;
            v41[8] = 93;
          }
          if ( !src )
          {
            v122 = _mm_load_si128(&v226);
            v123 = v227[1];
            memset(&ptr[16], 0, 24);
            *(__m128i *)ptr = v122;
            if ( v227[1] )
            {
              v158 = (void *)qalloc_or_throw(v227[1], v31);
              v31 = (const char *)v227[0];
              *(_QWORD *)&ptr[32] = v123;
              *(_QWORD *)&ptr[16] = v158;
              memcpy(v158, (const void *)v227[0], v123);
              *(_QWORD *)&ptr[24] = v123;
            }
            v124 = n[0];
            v236 = nullptr;
            v237 = 0;
            if ( n[0] )
            {
              v157 = (void *)qalloc_or_throw(n[0], v31);
              v237.m128i_i64[1] = v124;
              v236 = v157;
              memcpy(v157, dest, v124);
              v237.m128i_i64[0] = v124;
            }
            v238 = 0;
            copy_tinfo_t(&v238);
            v125 = _mm_loadu_si128((const __m128i *)((char *)&v230 + 8));
            v126 = (char *)v213;
            v241 = v232;
            v239 = v125;
            v127 = _mm_loadu_si128(&v231);
            v242 = v233;
            v240 = v127;
            v243 = v234;
            v128 = v214;
            if ( *((_QWORD *)&v214 + 1) < (unsigned __int64)(v214 + 1) )
            {
              v213 = (void *)qvector_reserve(&v213, v213, v214 + 1, 128);
              v126 = (char *)v213;
              v128 = v214;
            }
            v129 = &v126[128 * v128];
            *(__m128i *)v129 = _mm_load_si128((const __m128i *)ptr);
            v130 = *(_QWORD *)&ptr[16];
            v131 = _mm_loadu_si128((const __m128i *)&ptr[24]);
            *(_QWORD *)&ptr[16] = 0;
            *(__m128i *)(v129 + 24) = v131;
            *((_QWORD *)v129 + 2) = v130;
            a8 = _mm_load_si128(&v237);
            *(_OWORD *)&ptr[24] = 0;
            v237 = 0;
            *((_QWORD *)v129 + 5) = v236;
            v236 = nullptr;
            *((_QWORD *)v129 + 8) = 0;
            *((__m128i *)v129 + 3) = a8;
            copy_tinfo_t(v129 + 64);
            v132 = v241;
            v133 = _mm_loadu_si128(&v239);
            *(_QWORD *)&v214 = v214 + 1;
            *(__m128i *)(v129 + 72) = v133;
            v134 = _mm_loadu_si128(&v240);
            *((_QWORD *)v129 + 13) = v132;
            *(__m128i *)(v129 + 88) = v134;
            *((_QWORD *)v129 + 14) = v242;
            v129[120] = v243;
            clear_tinfo_t(&v238);
            if ( v236 )
            {
              v237.m128i_i64[0] = 0;
              qfree(v236);
            }
            if ( *(_QWORD *)&ptr[16] )
            {
              *(_QWORD *)&ptr[24] = 0;
              qfree(*(void **)&ptr[16]);
            }
          }
          clear_tinfo_t(v183[0]);
          if ( v223 )
          {
            *(_QWORD *)&v224 = 0;
            qfree(v223);
          }
          cleanup_argloc(&v220);
          clear_tinfo_t(&v219);
          v42 = (char *)v218[0];
          if ( v218[0] )
          {
            v15 = (char *)v218[1];
            if ( v218[1] )
            {
              v43 = nullptr;
              do
              {
                v44 = &v42[80 * (_QWORD)v43];
                clear_tinfo_t(v44 + 64);
                v45 = *((void **)v44 + 5);
                if ( v45 )
                {
                  *((_QWORD *)v44 + 6) = 0;
                  qfree(v45);
                }
                v46 = *((void **)v44 + 2);
                if ( v46 )
                {
                  *((_QWORD *)v44 + 3) = 0;
                  qfree(v46);
                }
                ++v43;
                cleanup_argloc(v44);
                v42 = (char *)v218[0];
              }
              while ( v15 != v43 );
            }
            v218[1] = nullptr;
            qfree(v42);
          }
LABEL_53:
          clear_tinfo_t(&v230);
          if ( dest )
          {
            n[0] = 0;
            qfree(dest);
          }
          if ( v227[0] )
          {
            v227[1] = 0;
            qfree((void *)v227[0]);
          }
          if ( v182 == ++v16 )
          {
            v14 = s;
            v15 = v192;
            goto LABEL_59;
          }
          continue;
        }
        v58 = v18;
        if ( v223 )
        {
          *(_QWORD *)&v224 = 0;
          qfree(v223);
        }
        cleanup_argloc(&v220);
        clear_tinfo_t(&v219);
        v159 = (char *)v218[0];
        if ( v218[0] )
        {
          v160 = v218[1];
          if ( v218[1] )
          {
            v161 = nullptr;
            do
            {
              v162 = &v159[80 * (_QWORD)v161];
              clear_tinfo_t(v162 + 64);
              v163 = *((void **)v162 + 5);
              if ( v163 )
              {
                *((_QWORD *)v162 + 6) = 0;
                qfree(v163);
              }
              v164 = *((void **)v162 + 2);
              if ( v164 )
              {
                *((_QWORD *)v162 + 3) = 0;
                qfree(v164);
              }
              v161 = (char *)v161 + 1;
              cleanup_argloc(v162);
              v159 = (char *)v218[0];
            }
            while ( v160 != v161 );
          }
          v218[1] = nullptr;
          qfree(v159);
        }
        clear_tinfo_t(v193);
        if ( dest )
        {
          n[0] = 0;
          qfree(dest);
        }
        if ( v227[0] )
        {
          v227[1] = 0;
          qfree((void *)v227[0]);
        }
LABEL_89:
        sub_6B4210(v204);
        v59 = (char *)v213;
        if ( v213 )
        {
          v60 = v214;
          if ( (_QWORD)v214 )
          {
            v61 = 0;
            do
            {
              v62 = &v59[128 * v61];
              clear_tinfo_t(v62 + 64);
              v63 = *((void **)v62 + 5);
              if ( v63 )
              {
                *((_QWORD *)v62 + 6) = 0;
                qfree(v63);
              }
              v64 = *((void **)v62 + 2);
              if ( v64 )
              {
                *((_QWORD *)v62 + 3) = 0;
                qfree(v64);
              }
              ++v61;
              v59 = (char *)v213;
            }
            while ( v60 != v61 );
          }
          *(_QWORD *)&v214 = 0;
          qfree(v59);
        }
        v65 = (char *)v208;
        if ( v208 )
        {
          v66 = v209;
          if ( (_QWORD)v209 )
          {
            v67 = 0;
            do
            {
              v68 = &v65[128 * v67];
              clear_tinfo_t(v68 + 64);
              v69 = *((void **)v68 + 5);
              if ( v69 )
              {
                *((_QWORD *)v68 + 6) = 0;
                qfree(v69);
              }
              v70 = *((void **)v68 + 2);
              if ( v70 )
              {
                *((_QWORD *)v68 + 3) = 0;
                qfree(v70);
              }
              ++v67;
              v65 = (char *)v208;
            }
            while ( v66 != v67 );
          }
          *(_QWORD *)&v209 = 0;
          qfree(v65);
        }
        return v58;
      default:
        goto LABEL_112;
    }
  }
}

