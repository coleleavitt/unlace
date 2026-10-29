void __fastcall sub_11CD890(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        double a7,
        __m128i a8,
        __int64 a9,
        __m128i a10,
        __m128i a11,
        char a12)
{
  size_t v12; // rax
  __int64 v13; // rbp
  __int64 i; // r13
  _QWORD *v15; // rdi
  _BYTE *v16; // rax
  __m128 si128; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rax
  char *v20; // rbp
  void ***v21; // r15
  _BYTE **v22; // r13
  _BYTE **v23; // r14
  _QWORD *v24; // rbx
  _QWORD *v25; // rdi
  __m128i *v26; // rax
  bool v27; // zf
  __m128i *v28; // r12
  __m256i *v29; // r13
  __m128i *v30; // rbx
  size_t v31; // rbp
  __m128i *v32; // rbp
  __m128i *v33; // r8
  unsigned __int64 v34; // r10
  __m128i *v35; // rbx
  __int64 v36; // rax
  __int64 *v37; // rdx
  __int64 *v38; // r15
  unsigned int v39; // r14d
  __m128i *v40; // rax
  __int64 v41; // rbx
  __m128 *v42; // r14
  __m128i v43; // kr10_16
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdi
  unsigned __int64 v47; // r9
  __m128i *v48; // r8
  __m128i *v49; // rbp
  __int64 v50; // rax
  __m128i *v51; // r12
  __m128i *v52; // rbx
  __int64 v53; // rbp
  __m128i v54; // kr20_16
  __int64 v55; // rax
  __m128i *v56; // r14
  __int64 v57; // rax
  __int64 *v58; // rdx
  __int64 *v59; // r15
  unsigned int v60; // ebx
  __m128i *v61; // rax
  __int64 v62; // rax
  __m128 *v63; // r13
  char *v64; // rax
  char *v65; // rax
  __int64 v66; // r12
  __int64 v67; // r8
  __int64 v68; // r9
  __m128i *v69; // rbp
  char *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // r8
  __int64 v78; // r9
  __m128i *v79; // rbx
  _BYTE *v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  void **v96; // rbx
  void *v97; // rdi
  char *v98; // rbp
  __int64 v99; // rbx
  __int64 v100; // r12
  void *v101; // rdi
  __int64 v102; // rbp
  void **v103; // rbx
  char *v104; // rbx
  char *v105; // rdi
  char *v106; // r12
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // r8
  __int64 v112; // r9
  __m128i *v113; // rbx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  _BYTE *v117; // rsi
  __int64 v118; // rdx
  __m128i *v119; // rax
  unsigned __int64 v120; // rax
  __m128i *v121; // rax
  unsigned __int64 v122; // rax
  __m128i *v123; // rax
  size_t v124; // r12
  size_t v125; // rax
  _BYTE *v126; // rsi
  __int64 v127; // rdx
  size_t v128; // rax
  size_t v129; // rax
  size_t v130; // rbx
  char *v131; // rbp
  size_t v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r9
  _BOOL8 v136; // rax
  char **v137; // rbx
  unsigned __int64 v138; // rax
  __m128i *v139; // rax
  size_t v140; // rax
  _DWORD *v141; // rax
  __int64 v142; // rdx
  __m256i *v143; // r9
  char *v144; // rcx
  size_t v145; // rbp
  unsigned __int64 v146; // rbx
  size_t v147; // rbp
  size_t v148; // rbx
  __int64 v149; // rdx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // r9
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rcx
  __int64 v159; // r8
  __int64 v160; // r9
  __int64 v161; // rcx
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rdi
  __int64 v165; // rax
  char *v166; // rax
  __int64 v167; // rdx
  __int64 v168; // rax
  size_t v169; // rax
  __m128i *v170; // rax
  __int64 v171; // rbx
  __int64 v172; // rdi
  __int64 v173; // rax
  __int64 v174; // rdi
  __int64 v175; // rax
  __int64 v176; // rdi
  __int64 v177; // rax
  __int64 v178; // rdi
  __int64 v179; // rax
  __int64 v180; // rdi
  __int64 v181; // rax
  __int64 v182; // rdi
  __int64 v183; // rax
  __int64 v184; // rdi
  __int64 v185; // rax
  __int64 v186; // rdi
  __int64 v187; // rax
  __int32 v188; // edx
  const __m128i *v189; // rcx
  __int64 v190; // rax
  void *v191; // rbp
  __int64 v192; // rax
  void **v193; // rbp
  void **v194; // rbx
  void **v195; // rbp
  void **v196; // rbx
  __m128i *v197; // r12
  __m128i *v198; // rdi
  int v199; // r15d
  char *v200; // rax
  void **v201; // r12
  void **v202; // rbp
  unsigned __int64 v203; // rdx
  __m128i *p_ptr; // rcx
  __int64 v205; // rbx
  unsigned __int64 v206; // rdi
  char *v207; // rax
  size_t v208; // rax
  __m128i *v209; // rbx
  char *v210; // r12
  __int64 v211; // rax
  __int64 v212; // r9
  unsigned __int64 v213; // rax
  _QWORD *v214; // rdi
  __int64 v215; // rdx
  _BYTE *v216; // rsi
  __int64 v217; // r15
  size_t v218; // r14
  unsigned __int64 v219; // rax
  unsigned __int64 v220; // rdx
  __m128i *v221; // r15
  __m128i *v222; // rdi
  __int32 v223; // eax
  __int64 v224; // rax
  void **v225; // r12
  void **v226; // rbp
  __m128i *v227; // rbx
  int v228; // ebp
  __m128i *v229; // rbp
  __int32 v230; // r12d
  __m128i *v231; // rbp
  __int32 v232; // r13d
  __int32 v233; // [rsp+18h] [rbp-B00h]
  _BYTE **s2; // [rsp+20h] [rbp-AF8h]
  void *s2a; // [rsp+20h] [rbp-AF8h]
  _BYTE *s2c; // [rsp+20h] [rbp-AF8h]
  char *s2b; // [rsp+20h] [rbp-AF8h]
  __m128i *v238; // [rsp+28h] [rbp-AF0h]
  _BYTE **v239; // [rsp+28h] [rbp-AF0h]
  __int64 v240; // [rsp+28h] [rbp-AF0h]
  __int64 v241; // [rsp+28h] [rbp-AF0h]
  unsigned __int64 v242; // [rsp+30h] [rbp-AE8h]
  _QWORD *v243; // [rsp+30h] [rbp-AE8h]
  __m128i *v244; // [rsp+30h] [rbp-AE8h]
  __m128 *v245; // [rsp+30h] [rbp-AE8h]
  _QWORD *s1; // [rsp+38h] [rbp-AE0h]
  void ***s1a; // [rsp+38h] [rbp-AE0h]
  unsigned __int64 s1b; // [rsp+38h] [rbp-AE0h]
  void ***s1c; // [rsp+38h] [rbp-AE0h]
  void *s1d; // [rsp+38h] [rbp-AE0h]
  char *s1e; // [rsp+38h] [rbp-AE0h]
  char *s; // [rsp+40h] [rbp-AD8h]
  char *sa; // [rsp+40h] [rbp-AD8h]
  bool v254; // [rsp+48h] [rbp-AD0h]
  char *v255; // [rsp+50h] [rbp-AC8h]
  char *v256; // [rsp+50h] [rbp-AC8h]
  char *v257; // [rsp+68h] [rbp-AB0h]
  char *v258; // [rsp+68h] [rbp-AB0h]
  char *v259; // [rsp+88h] [rbp-A90h]
  char v261; // [rsp+FDh] [rbp-A1Bh]
  char v262; // [rsp+FEh] [rbp-A1Ah]
  char *v263; // [rsp+100h] [rbp-A18h]
  char *v267; // [rsp+130h] [rbp-9E8h]
  const __m128i *v270; // [rsp+150h] [rbp-9C8h]
  __int64 v271; // [rsp+158h] [rbp-9C0h]
  int v272; // [rsp+17Ch] [rbp-99Ch] BYREF
  __m128i v273; // [rsp+180h] [rbp-998h] BYREF
  _BYTE *v274; // [rsp+190h] [rbp-988h] BYREF
  size_t v275; // [rsp+198h] [rbp-980h]
  _BYTE v276[16]; // [rsp+1A0h] [rbp-978h] BYREF
  void *v277[2]; // [rsp+1B0h] [rbp-968h] BYREF
  __int64 v278; // [rsp+1C0h] [rbp-958h] BYREF
  __m128i dest; // [rsp+1D0h] [rbp-948h] BYREF
  _QWORD v280[2]; // [rsp+1E0h] [rbp-938h] BYREF
  void *v281; // [rsp+1F0h] [rbp-928h] BYREF
  __int64 v282; // [rsp+1F8h] [rbp-920h]
  _BYTE v283[16]; // [rsp+200h] [rbp-918h] BYREF
  void *v284; // [rsp+210h] [rbp-908h] BYREF
  unsigned __int8 *v285; // [rsp+218h] [rbp-900h]
  _BYTE v286[16]; // [rsp+220h] [rbp-8F8h] BYREF
  void *v287[2]; // [rsp+230h] [rbp-8E8h] BYREF
  __int64 v288; // [rsp+240h] [rbp-8D8h] BYREF
  char v289; // [rsp+250h] [rbp-8C8h]
  __m128i v290; // [rsp+260h] [rbp-8B8h] BYREF
  _BYTE v291[16]; // [rsp+270h] [rbp-8A8h] BYREF
  __int16 v292; // [rsp+280h] [rbp-898h]
  __m128i v293; // [rsp+290h] [rbp-888h] BYREF
  _WORD v294[16]; // [rsp+2A0h] [rbp-878h] BYREF
  __m128i v295; // [rsp+2C0h] [rbp-858h] BYREF
  _BYTE v296[32]; // [rsp+2D0h] [rbp-848h] BYREF
  __m128i v297; // [rsp+2F0h] [rbp-828h] BYREF
  __m128i v298; // [rsp+300h] [rbp-818h] BYREF
  __int16 v299; // [rsp+310h] [rbp-808h]
  __m128i v300; // [rsp+320h] [rbp-7F8h] BYREF
  _WORD v301[16]; // [rsp+330h] [rbp-7E8h] BYREF
  __m128i v302; // [rsp+350h] [rbp-7C8h] BYREF
  _BYTE v303[16]; // [rsp+360h] [rbp-7B8h] BYREF
  __int16 v304; // [rsp+370h] [rbp-7A8h]
  __m128i v305; // [rsp+380h] [rbp-798h] BYREF
  _WORD v306[16]; // [rsp+390h] [rbp-788h] BYREF
  __m128i src; // [rsp+3B0h] [rbp-768h] BYREF
  _BYTE v308[16]; // [rsp+3C0h] [rbp-758h] BYREF
  __int16 v309; // [rsp+3D0h] [rbp-748h]
  __m128i v310; // [rsp+3E0h] [rbp-738h] BYREF
  __m128i v311; // [rsp+3F0h] [rbp-728h]
  __int64 v312; // [rsp+400h] [rbp-718h]
  __m128i v313; // [rsp+410h] [rbp-708h] BYREF
  _QWORD v314[2]; // [rsp+420h] [rbp-6F8h] BYREF
  void *v315; // [rsp+430h] [rbp-6E8h] BYREF
  int v316; // [rsp+43Ch] [rbp-6DCh]
  _DWORD v317[4]; // [rsp+440h] [rbp-6D8h] BYREF
  __m128i ptr; // [rsp+450h] [rbp-6C8h] BYREF
  __m128 v319; // [rsp+460h] [rbp-6B8h] BYREF
  void *v320[2]; // [rsp+470h] [rbp-6A8h] BYREF
  __int64 v321; // [rsp+480h] [rbp-698h] BYREF
  _BYTE v322[32]; // [rsp+490h] [rbp-688h] BYREF
  _BYTE v323[48]; // [rsp+4B0h] [rbp-668h] BYREF
  void *v324; // [rsp+4E0h] [rbp-638h] BYREF
  __int64 v325; // [rsp+4E8h] [rbp-630h]
  _BYTE v326[256]; // [rsp+4F0h] [rbp-628h] BYREF
  _BYTE v327[24]; // [rsp+5F0h] [rbp-528h] BYREF
  _BYTE v328[264]; // [rsp+608h] [rbp-510h] BYREF
  __m256i v329; // [rsp+710h] [rbp-408h] BYREF
  __int16 v330; // [rsp+730h] [rbp-3E8h]
  void *v331; // [rsp+8A0h] [rbp-278h] BYREF
  __int64 v332; // [rsp+8A8h] [rbp-270h]
  _BYTE v333[16]; // [rsp+8B0h] [rbp-268h] BYREF
  __int16 v334; // [rsp+8C0h] [rbp-258h]
  __int64 v335; // [rsp+AB0h] [rbp-68h] BYREF
  __int64 v336; // [rsp+AB8h] [rbp-60h] BYREF
  void *v337; // [rsp+AC0h] [rbp-58h]
  char *v338; // [rsp+AC8h] [rbp-50h]
  __int64 *v339; // [rsp+AD0h] [rbp-48h]
  __int64 v340; // [rsp+AD8h] [rbp-40h]

  v324 = v326;
  v325 = 0x800000000LL;
  v12 = j__strlen("LIBRARY_PATH");
  sub_2290A40(v287, "LIBRARY_PATH", v12);
  if ( v289 )
  {
    v332 = 0x800000000LL;
    v331 = v333;
    ptr.m128i_i16[0] = 58;
    v208 = j__strlen(ptr.m128i_i8);
    sub_2244850(v287[0], v287[1], &v331, &ptr, v208);
    v209 = (__m128i *)v331;
    v210 = (char *)v331 + 16 * (unsigned int)v332;
    if ( v210 != v331 )
    {
      do
      {
        v217 = 0;
        *(__m128i *)v327 = _mm_loadu_si128(v209);
        v218 = j__strlen(asc_22E1692);
        v219 = sub_2246FB0(v327, asc_22E1692, v218, 0);
        v220 = *(_QWORD *)&v327[8];
        if ( v219 < *(_QWORD *)&v327[8] )
        {
          v217 = *(_QWORD *)&v327[8] - v219;
          v220 = v219;
        }
        v329.m256i_i64[0] = *(_QWORD *)v327 + v220;
        v329.m256i_i64[1] = v217;
        v211 = sub_2247130(&v329, asc_22E1692, v218, -1);
        v212 = v329.m256i_i64[1];
        v213 = v211 + 1;
        if ( v213 > v329.m256i_i64[1] )
          v213 = v329.m256i_u64[1];
        if ( v213 + v329.m256i_i64[1] - v217 <= v329.m256i_i64[1] )
          v212 = v213 + v329.m256i_i64[1] - v217;
        if ( HIDWORD(v325) <= (unsigned int)v325 )
        {
          v241 = v212;
          s2c = (_BYTE *)v329.m256i_i64[0];
          v221 = (__m128i *)sub_2237400(&v324, v326, 0, 32, &v329);
          v222 = &v221[2 * (unsigned int)v325];
          v222->m128i_i64[0] = (__int64)v222[1].m128i_i64;
          sub_11BA8E0(v222, s2c, (__int64)&s2c[v241]);
          sub_10E9550((__int64)&v324, v221);
          v223 = v329.m256i_i32[0];
          if ( v324 != v326 )
          {
            v233 = v329.m256i_i32[0];
            free(v324);
            v223 = v233;
          }
          v324 = v221;
          HIDWORD(v325) = v223;
          LODWORD(v325) = v325 + 1;
        }
        else
        {
          v214 = (char *)v324 + 32 * (unsigned int)v325;
          v215 = v329.m256i_i64[0] + v212;
          v216 = (_BYTE *)v329.m256i_i64[0];
          *v214 = v214 + 2;
          sub_11BA8E0(v214, v216, v215);
          LODWORD(v325) = v325 + 1;
        }
        ++v209;
      }
      while ( v210 != (char *)v209 );
      v209 = (__m128i *)v331;
    }
    if ( v209 != (__m128i *)v333 )
      free(v209);
  }
  sub_21B7150(&v329, a6, 2204);
  v13 = v329.m256i_i64[1];
  for ( i = v329.m256i_i64[0]; v13 != i; i += 32 )
  {
    while ( 1 )
    {
      v331 = v333;
      sub_11BA820(&v331, *(_BYTE **)i, *(_QWORD *)i + *(_QWORD *)(i + 8));
      if ( HIDWORD(v325) <= (unsigned int)v325 )
      {
        v197 = (__m128i *)sub_2237400(&v324, v326, 0, 32, v327);
        v198 = &v197[2 * (unsigned int)v325];
        v198->m128i_i64[0] = (__int64)v198[1].m128i_i64;
        sub_11BA820(v198, v331, (__int64)v331 + v332);
        sub_10E9550((__int64)&v324, v197);
        v199 = *(_DWORD *)v327;
        if ( v324 != v326 )
          free(v324);
        v324 = v197;
        HIDWORD(v325) = v199;
        LODWORD(v325) = v325 + 1;
      }
      else
      {
        v15 = (char *)v324 + 32 * (unsigned int)v325;
        *v15 = v15 + 2;
        sub_11BA820(v15, v331, (__int64)v331 + v332);
        LODWORD(v325) = v325 + 1;
      }
      if ( v331 == v333 )
        break;
      operator delete(v331);
      i += 32;
      if ( v13 == i )
        goto LABEL_7;
    }
  }
LABEL_7:
  sub_9B4A30((void ***)&v329);
  v16 = (_BYTE *)sub_228A4B0(a5[13], a5[14], 0);
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8DE0);
  *(__m128 *)&v327[8] = si128;
  *(_QWORD *)v327 = v328;
  sub_A1FE50(v327, v16, &v16[v18]);
  v334 = 257;
  v330 = 257;
  LOWORD(v320[0]) = 257;
  v313.m128i_i64[0] = (__int64)"lib";
  LOWORD(v315) = 259;
  sub_228A3B0(v327, &v313, &ptr, &v329, &v331);
  v19 = *(_QWORD *)&v327[8];
  if ( (unsigned __int64)(*(_QWORD *)&v327[8] + 1LL) > *(_QWORD *)&v327[16] )
  {
    sub_2236E10(v327, v328, *(_QWORD *)&v327[8] + 1LL, 1);
    v19 = *(_QWORD *)&v327[8];
  }
  *(_BYTE *)(*(_QWORD *)v327 + v19) = 0;
  v20 = *(char **)v327;
  if ( HIDWORD(v325) <= (unsigned int)v325 )
  {
    v227 = (__m128i *)sub_2237400(&v324, v326, 0, 32, &v331);
    sub_11BA9A0((__m128i *)v227[2 * (unsigned int)v325].m128i_i64, v20);
    sub_10E9550((__int64)&v324, v227);
    v228 = (int)v331;
    if ( v324 != v326 )
      free(v324);
    v324 = v227;
    HIDWORD(v325) = v228;
    LODWORD(v325) = v325 + 1;
  }
  else
  {
    sub_11BA9A0((_QWORD *)v324 + 4 * (unsigned int)v325, *(char **)v327);
    LODWORD(v325) = v325 + 1;
  }
  v21 = (void ***)&v310;
  LODWORD(v336) = 0;
  v337 = nullptr;
  v331 = v333;
  v332 = 0x1000000000LL;
  v338 = (char *)&v336;
  v339 = &v336;
  v340 = 0;
  sub_21B7150(&v310, a6, 2205);
  v22 = (_BYTE **)v310.m128i_i64[1];
  v23 = (_BYTE **)v310.m128i_i64[0];
  v24 = v314;
  if ( v310.m128i_i64[1] != v310.m128i_i64[0] )
  {
    while ( 1 )
    {
      v313.m128i_i64[0] = (__int64)v24;
      sub_11BA820(&v313, *v23, (__int64)&v23[1][(_QWORD)*v23]);
      v25 = (_QWORD *)v313.m128i_i64[0];
      switch ( v313.m128i_i64[1] )
      {
        case 3LL:
          if ( *(_WORD *)v313.m128i_i64[0] == 28015 )
          {
            if ( *(_BYTE *)(v313.m128i_i64[0] + 2) == 112 )
              break;
            if ( *(_WORD *)v313.m128i_i64[0] != 25447 )
              goto LABEL_15;
          }
          else if ( *(_WORD *)v313.m128i_i64[0] != 25447 )
          {
            goto LABEL_15;
          }
          if ( *(_BYTE *)(v313.m128i_i64[0] + 2) != 99 )
            goto LABEL_15;
          break;
        case 6LL:
          if ( *(_DWORD *)v313.m128i_i64[0] != 1633973603 || *(_WORD *)(v313.m128i_i64[0] + 4) != 29810 )
            goto LABEL_15;
          break;
        case 1LL:
          if ( *(_BYTE *)v313.m128i_i64[0] != 109 )
            goto LABEL_15;
          break;
        case 5LL:
          if ( *(_DWORD *)v313.m128i_i64[0] != 1600349031 || *(_BYTE *)(v313.m128i_i64[0] + 4) != 115 )
            goto LABEL_15;
          break;
        default:
          if ( v313.m128i_i64[1] != 7
            || (*(_DWORD *)v313.m128i_i64[0] != 1919448176
             || *(_WORD *)(v313.m128i_i64[0] + 4) != 24933
             || *(_BYTE *)(v313.m128i_i64[0] + 6) != 100)
            && (*(_DWORD *)v313.m128i_i64[0] != 1601202536
             || *(_WORD *)(v313.m128i_i64[0] + 4) != 25448
             || *(_BYTE *)(v313.m128i_i64[0] + 6) != 99) )
          {
LABEL_15:
            sub_11BA9A0(&ptr, "-l");
            v26 = (__m128i *)sub_9EE560(&ptr, v313.m128i_i64[0], v313.m128i_u64[1]);
            v329.m256i_i64[0] = (__int64)&v329.m256i_i64[2];
            if ( (__m128i *)v26->m128i_i64[0] == &v26[1] )
            {
              *(__m128i *)&v329.m256i_u64[2] = _mm_loadu_si128(v26 + 1);
            }
            else
            {
              v329.m256i_i64[0] = v26->m128i_i64[0];
              v329.m256i_i64[2] = v26[1].m128i_i64[0];
            }
            v329.m256i_i64[1] = v26->m128i_i64[1];
            v26->m128i_i64[1] = 0;
            v26[1].m128i_i8[0] = 0;
            v27 = v340 == 0;
            v26->m128i_i64[0] = (__int64)v26[1].m128i_i64;
            if ( !v27 )
              goto LABEL_332;
            if ( v331 == (char *)v331 + 32 * (unsigned int)v332 )
            {
              if ( (unsigned int)v332 > 0xFuLL )
                goto LABEL_331;
LABEL_409:
              sub_CEFAC0((__int64)&v331, (__m128i *)&v329);
              v143 = (__m256i *)v329.m256i_i64[0];
            }
            else
            {
              v238 = (__m128i *)v331;
              v28 = (__m128i *)v331;
              v242 = (unsigned int)v332;
              s2 = v22;
              v29 = (__m256i *)v329.m256i_i64[0];
              s1 = v24;
              v30 = (__m128i *)((char *)v331 + 32 * (unsigned int)v332);
              v31 = v329.m256i_u64[1];
              while ( v28->m128i_i64[1] != v31 || v31 && memcmp((const void *)v28->m128i_i64[0], v29, v31) )
              {
                v28 += 2;
                if ( v30 == v28 )
                {
                  v32 = v30;
                  v22 = s2;
                  v33 = v238;
                  v34 = v242;
                  v24 = s1;
                  goto LABEL_23;
                }
              }
              v32 = v30;
              v143 = v29;
              v33 = v238;
              v34 = v242;
              v22 = s2;
              v24 = s1;
              if ( v28 != v32 )
                goto LABEL_254;
LABEL_23:
              if ( v34 <= 0xF )
                goto LABEL_409;
              v243 = v24;
              v35 = v33;
              v239 = v23;
              s1a = v21;
              do
              {
                v36 = sub_1110010(&v335, &v336, (__int64)v35);
                v38 = v37;
                if ( v37 )
                {
                  if ( v36 || v37 == &v336 )
                    v39 = 1;
                  else
                    v39 = (unsigned int)sub_9C4B50((__int64)v35, (__int64)(v37 + 4)) >> 31;
                  v40 = (__m128i *)operator new(0x40u);
                  v40[2].m128i_i64[0] = (__int64)v40[3].m128i_i64;
                  if ( (__m128i *)v35->m128i_i64[0] == &v35[1] )
                  {
                    v40[3] = _mm_loadu_si128(v35 + 1);
                  }
                  else
                  {
                    v40[2].m128i_i64[0] = v35->m128i_i64[0];
                    v40[3].m128i_i64[0] = v35[1].m128i_i64[0];
                  }
                  v40[2].m128i_i64[1] = v35->m128i_i64[1];
                  v35->m128i_i64[0] = (__int64)v35[1].m128i_i64;
                  v35->m128i_i64[1] = 0;
                  v35[1].m128i_i8[0] = 0;
                  std::_Rb_tree_insert_and_rebalance(v39, v40, v38, &v336);
                  ++v340;
                }
                v35 += 2;
              }
              while ( v32 != v35 );
              v225 = (void **)v331;
              v23 = v239;
              v24 = v243;
              v21 = s1a;
              v226 = (void **)((char *)v331 + 32 * (unsigned int)v332);
              while ( v225 != v226 )
              {
                while ( 1 )
                {
                  v226 -= 4;
                  if ( *v226 == v226 + 2 )
                    break;
                  operator delete(*v226);
                  if ( v225 == v226 )
                    goto LABEL_331;
                }
              }
LABEL_331:
              LODWORD(v332) = 0;
LABEL_332:
              sub_11A14A0((__int64)&v335, (__m128i *)&v329);
              v143 = (__m256i *)v329.m256i_i64[0];
            }
LABEL_254:
            if ( v143 != (__m256i *)&v329.m256i_u64[2] )
              operator delete(v143);
            if ( (__m128 *)ptr.m128i_i64[0] != &v319 )
              operator delete((void *)ptr.m128i_i64[0]);
            v25 = (_QWORD *)v313.m128i_i64[0];
          }
          break;
      }
      if ( v25 == v24 )
      {
        v23 += 4;
        if ( v22 == v23 )
          break;
      }
      else
      {
        operator delete(v25);
        v23 += 4;
        if ( v22 == v23 )
          break;
      }
    }
  }
  sub_9B4A30(v21);
  sub_21B7150(&v313, a6, 70);
  v240 = v313.m128i_i64[1];
  v41 = v313.m128i_i64[0];
  v42 = &v319;
  while ( v240 != v41 )
  {
    while ( 1 )
    {
      ptr.m128i_i64[0] = (__int64)v42;
      sub_11BA820(&ptr, *(_BYTE **)v41, *(_QWORD *)v41 + *(_QWORD *)(v41 + 8));
      v43 = ptr;
      v330 = 261;
      *(__m128i *)v329.m256i_i8 = ptr;
      if ( !(unsigned __int8)sub_228AF30(&v329, 0) )
        break;
      v44 = sub_228AB90(v43.m128i_i64[0], v43.m128i_i64[1], 0);
      v46 = 0;
      if ( v45 )
      {
        --v45;
        v46 = 1;
      }
      if ( !(unsigned int)sub_12CCD10(v44 + v46, v45) )
        break;
      v141 = (_DWORD *)sub_228AB90(v43.m128i_i64[0], v43.m128i_i64[1], 0);
      if ( v142 == 4 && *v141 == 1651076142 )
        break;
LABEL_150:
      v63 = (__m128 *)ptr.m128i_i64[0];
      if ( (__m128 *)ptr.m128i_i64[0] != v42 )
        goto LABEL_64;
LABEL_151:
      v41 += 32;
      if ( v240 == v41 )
        goto LABEL_65;
    }
    if ( v340 )
      goto LABEL_149;
    v47 = (unsigned int)v332;
    v48 = (__m128i *)v331;
    v49 = (__m128i *)((char *)v331 + 32 * (unsigned int)v332);
    if ( v331 == v49 )
    {
      if ( (unsigned int)v332 > 0xFuLL )
      {
LABEL_148:
        LODWORD(v332) = 0;
LABEL_149:
        sub_110F6E0((__int64)&v335, &ptr);
        goto LABEL_150;
      }
    }
    else
    {
      v244 = (__m128i *)v331;
      v50 = v41;
      v51 = (__m128i *)v331;
      s1b = (unsigned int)v332;
      v52 = (__m128i *)((char *)v331 + 32 * (unsigned int)v332);
      v53 = v50;
      v54 = ptr;
      while ( v51->m128i_i64[1] != v54.m128i_i64[1]
           || v54.m128i_i64[1]
           && memcmp((const void *)v51->m128i_i64[0], (const void *)v54.m128i_i64[0], v54.m128i_u64[1]) )
      {
        v51 += 2;
        if ( v52 == v51 )
        {
          v47 = s1b;
          v55 = v53;
          v48 = v244;
          v49 = v52;
          v41 = v55;
          if ( s1b <= 0xF )
            goto LABEL_349;
LABEL_50:
          v245 = v42;
          v56 = v48;
          s2a = (void *)v41;
          s1c = v21;
          do
          {
            v57 = sub_1110010(&v335, &v336, (__int64)v56);
            v59 = v58;
            if ( v58 )
            {
              if ( v57 || v58 == &v336 )
                v60 = 1;
              else
                v60 = (unsigned int)sub_9C4B50((__int64)v56, (__int64)(v58 + 4)) >> 31;
              v61 = (__m128i *)operator new(0x40u);
              v61[2].m128i_i64[0] = (__int64)v61[3].m128i_i64;
              if ( (__m128i *)v56->m128i_i64[0] == &v56[1] )
              {
                v61[3] = _mm_loadu_si128(v56 + 1);
              }
              else
              {
                v61[2].m128i_i64[0] = v56->m128i_i64[0];
                v61[3].m128i_i64[0] = v56[1].m128i_i64[0];
              }
              v61[2].m128i_i64[1] = v56->m128i_i64[1];
              v56->m128i_i64[0] = (__int64)v56[1].m128i_i64;
              v56->m128i_i64[1] = 0;
              v56[1].m128i_i8[0] = 0;
              std::_Rb_tree_insert_and_rebalance(v60, v61, v59, &v336);
              ++v340;
            }
            v56 += 2;
          }
          while ( v49 != v56 );
          v201 = (void **)v331;
          v41 = (__int64)s2a;
          v42 = v245;
          v21 = s1c;
          v202 = (void **)((char *)v331 + 32 * (unsigned int)v332);
          while ( v201 != v202 )
          {
            while ( 1 )
            {
              v202 -= 4;
              if ( *v202 == v202 + 2 )
                break;
              operator delete(*v202);
              if ( v201 == v202 )
              {
                LODWORD(v332) = 0;
                goto LABEL_149;
              }
            }
          }
          goto LABEL_148;
        }
      }
      v62 = v53;
      v49 = v52;
      v63 = (__m128 *)v54.m128i_i64[0];
      v48 = v244;
      v47 = s1b;
      v41 = v62;
      if ( v49 != v51 )
        goto LABEL_63;
      if ( s1b > 0xF )
        goto LABEL_50;
    }
LABEL_349:
    v203 = v47 + 1;
    p_ptr = &ptr;
    if ( v47 + 1 > HIDWORD(v332) )
    {
      if ( v48 > &ptr || v49 <= &ptr )
      {
        v231 = (__m128i *)sub_2237400(&v331, v333, v203, 32, &v329);
        sub_10E9550((__int64)&v331, v231);
        v232 = v329.m256i_i32[0];
        if ( v331 != v333 )
          free(v331);
        v331 = v231;
        HIDWORD(v332) = v232;
        p_ptr = &ptr;
        v49 = &v231[2 * (unsigned int)v332];
      }
      else
      {
        s2b = (char *)((char *)&ptr - (char *)v48);
        v229 = (__m128i *)sub_2237400(&v331, v333, v203, 32, &v329);
        sub_10E9550((__int64)&v331, v229);
        v230 = v329.m256i_i32[0];
        if ( v331 != v333 )
          free(v331);
        v331 = v229;
        HIDWORD(v332) = v230;
        p_ptr = (__m128i *)&s2b[(_QWORD)v229];
        v49 = &v229[2 * (unsigned int)v332];
      }
    }
    v49->m128i_i64[0] = (__int64)v49[1].m128i_i64;
    sub_11BA820(v49, p_ptr->m128i_i64[0], p_ptr->m128i_i64[0] + p_ptr->m128i_i64[1]);
    LODWORD(v332) = v332 + 1;
    v63 = (__m128 *)ptr.m128i_i64[0];
LABEL_63:
    if ( v63 == v42 )
      goto LABEL_151;
LABEL_64:
    v41 += 32;
    operator delete(v63);
  }
LABEL_65:
  sub_9B4A30((void ***)&v313);
  if ( v340 )
  {
    v262 = 0;
    v259 = v338;
    v263 = (char *)&v336;
  }
  else
  {
    v262 = 1;
    v259 = (char *)v331;
    v263 = (char *)v331 + 32 * (unsigned int)v332;
  }
  v64 = "libbc-";
  if ( !a12 )
    v64 = "lib";
  v267 = v64;
  if ( v262 )
    goto LABEL_124;
LABEL_70:
  if ( v263 != v259 )
  {
    v65 = v259 + 32;
    do
    {
      v274 = v276;
      sub_11BA820(&v274, *(_BYTE **)v65, *(_QWORD *)v65 + *((_QWORD *)v65 + 1));
      v66 = v275;
      s1d = v274;
      v329.m256i_i64[0] = (__int64)&v329.m256i_i64[2];
      v329.m256i_i64[1] = 0xC00000000LL;
      sub_11BA9A0(v277, "/libdevice");
      sub_11BA9A0(&v281, "/libbc-");
      sub_11BA9A0(&v284, "/lib");
      if ( a12 )
      {
        v69 = &v313;
        v313.m128i_i64[0] = (__int64)v314;
        sub_11BA820(&v313, v281, (__int64)v281 + v282);
        v315 = v317;
        sub_11BA820(&v315, v284, (__int64)&v285[(_QWORD)v284]);
        do
        {
          dest = *v69;
          v27 = sub_2246AB0(&dest, v281, v282, 0) == -1;
          v70 = ".bc";
          if ( !v27 )
            v70 = ".a";
          v299 = 261;
          v257 = v70;
          v297 = a11;
          v304 = 259;
          v309 = 261;
          src = a10;
          LOWORD(v312) = 773;
          v310.m128i_i64[0] = (__int64)s1d;
          v310.m128i_i64[1] = v66;
          v302.m128i_i64[0] = (__int64)"-";
          v311.m128i_i64[0] = (__int64)"-";
          sub_A41580(&v305, (const __m128i *)v21, &src, v66, 259, 261);
          sub_A41580(&v300, &v305, &v302, v71, v72, v73);
          sub_A41580(&v295, &v300, &v297, v74, v75, v76);
          sub_2253560(&ptr, &v295);
          v311.m128i_i64[0] = (__int64)"-";
          src = a10;
          LOWORD(v312) = 773;
          v309 = 261;
          v310.m128i_i64[0] = (__int64)s1d;
          v310.m128i_i64[1] = v66;
          sub_A41580(&v305, (const __m128i *)v21, &src, v66, v77, v78);
          sub_2253560(v320, &v305);
          LOWORD(v312) = 261;
          v310.m128i_i64[1] = v66;
          v310.m128i_i64[0] = (__int64)s1d;
          sub_2253560(v322, v21);
          v79 = &ptr;
          do
          {
            while ( 1 )
            {
              v80 = (_BYTE *)v79->m128i_i64[0];
              v81 = v79->m128i_i64[0] + v79->m128i_i64[1];
              v290.m128i_i64[0] = (__int64)v291;
              sub_11BA820(&v290, v80, v81);
              v299 = 257;
              v261 = *v257;
              if ( *v257 )
              {
                v297.m128i_i64[0] = (__int64)v257;
                LOBYTE(v299) = 3;
              }
              v304 = 260;
              v309 = 261;
              v302.m128i_i64[0] = (__int64)&v290;
              LOWORD(v312) = 260;
              src = dest;
              v310.m128i_i64[0] = (__int64)v277;
              sub_A41580(&v305, (const __m128i *)v21, &src, 260, v82, v83);
              sub_A41580(&v300, &v305, &v302, v84, v85, v86);
              sub_A41580(&v295, &v300, &v297, v87, v88, v89);
              sub_2253560(&v293, &v295);
              sub_CEFAC0((__int64)&v329, &v293);
              if ( (_WORD *)v293.m128i_i64[0] != v294 )
                operator delete((void *)v293.m128i_i64[0]);
              v304 = 257;
              if ( v261 )
              {
                LOBYTE(v304) = 3;
                v302.m128i_i64[0] = (__int64)v257;
              }
              v309 = 260;
              src.m128i_i64[0] = (__int64)&v290;
              LOWORD(v312) = 261;
              v310 = dest;
              sub_A41580(&v305, (const __m128i *)v21, &src, v90, v91, v92);
              sub_A41580(&v300, &v305, &v302, v93, v94, v95);
              sub_2253560(&v297, &v300);
              sub_CEFAC0((__int64)&v329, &v297);
              if ( (__m128i *)v297.m128i_i64[0] != &v298 )
                operator delete((void *)v297.m128i_i64[0]);
              if ( (_BYTE *)v290.m128i_i64[0] == v291 )
                break;
              operator delete((void *)v290.m128i_i64[0]);
              v79 += 2;
              if ( v79 == (__m128i *)v323 )
                goto LABEL_87;
            }
            v79 += 2;
          }
          while ( v323 != (_BYTE *)v79 );
LABEL_87:
          v96 = (void **)v323;
          do
          {
            while ( 1 )
            {
              v96 -= 4;
              if ( *v96 == v96 + 2 )
                break;
              operator delete(*v96);
              if ( v96 == (void **)&ptr )
                goto LABEL_90;
            }
          }
          while ( v96 != (void **)&ptr );
LABEL_90:
          v69 += 2;
        }
        while ( &ptr != v69 );
        if ( v315 != v317 )
          operator delete(v315);
        v97 = (void *)v313.m128i_i64[0];
        if ( (_QWORD *)v313.m128i_i64[0] != v314 )
          goto LABEL_94;
      }
      else
      {
        LOWORD(v312) = 261;
        v300 = a11;
        v313.m128i_i64[0] = (__int64)s1d;
        v306[8] = 259;
        LOWORD(v315) = 773;
        v301[8] = 261;
        v310 = a10;
        v305.m128i_i64[0] = (__int64)"-";
        v313.m128i_i64[1] = v66;
        v314[0] = "-";
        sub_A41580(&src, &v313, (const __m128i *)v21, a10.m128i_i64[1], v67, v68);
        sub_A41580(&v302, &src, &v305, v108, v109, v110);
        sub_A41580(&v297, &v302, &v300, (__int64)&v300, v111, v112);
        sub_2253560(&ptr, &v297);
        LOWORD(v312) = 261;
        v313.m128i_i64[1] = v66;
        v310 = a10;
        v314[0] = "-";
        v113 = &ptr;
        LOWORD(v315) = 773;
        v313.m128i_i64[0] = (__int64)s1d;
        sub_A41580(&src, &v313, (const __m128i *)v21, v114, v115, v116);
        sub_2253560(v320, &src);
        do
        {
          while ( 1 )
          {
            v117 = (_BYTE *)v113->m128i_i64[0];
            v118 = v113->m128i_i64[0] + v113->m128i_i64[1];
            v295.m128i_i64[0] = (__int64)v296;
            sub_11BA820(&v295, v117, v118);
            v300.m128i_i64[0] = (__int64)v301;
            sub_11BA820(&v300, (_BYTE *)v277[0], (__int64)v277[0] + (unsigned __int64)v277[1]);
            sub_9EE560(&v300, v284, (size_t)v285);
            v119 = (__m128i *)sub_9EE560(&v300, v295.m128i_i64[0], v295.m128i_u64[1]);
            v297.m128i_i64[0] = (__int64)&v298;
            if ( (__m128i *)v119->m128i_i64[0] == &v119[1] )
            {
              v298 = _mm_loadu_si128(v119 + 1);
            }
            else
            {
              v297.m128i_i64[0] = v119->m128i_i64[0];
              v298.m128i_i64[0] = v119[1].m128i_i64[0];
            }
            v297.m128i_i64[1] = v119->m128i_i64[1];
            v119->m128i_i64[0] = (__int64)v119[1].m128i_i64;
            v119->m128i_i64[1] = 0;
            v119[1].m128i_i8[0] = 0;
            v120 = j__strlen(".a");
            if ( v120 > 0x7FFFFFFFFFFFFFFFLL - v297.m128i_i64[1] )
              goto LABEL_419;
            v121 = (__m128i *)sub_9EE560(&v297, ".a", v120);
            v310.m128i_i64[0] = (__int64)(v21 + 2);
            if ( (__m128i *)v121->m128i_i64[0] == &v121[1] )
            {
              v311 = _mm_loadu_si128(v121 + 1);
            }
            else
            {
              v310.m128i_i64[0] = v121->m128i_i64[0];
              v311.m128i_i64[0] = v121[1].m128i_i64[0];
            }
            v310.m128i_i64[1] = v121->m128i_i64[1];
            v121->m128i_i64[0] = (__int64)v121[1].m128i_i64;
            v121->m128i_i64[1] = 0;
            v121[1].m128i_i8[0] = 0;
            LOWORD(v315) = 260;
            v313.m128i_i64[0] = (__int64)v21;
            sub_2253560(&src, &v313);
            sub_CEFAC0((__int64)&v329, &src);
            if ( (_BYTE *)src.m128i_i64[0] != v308 )
              operator delete((void *)src.m128i_i64[0]);
            if ( (void ***)v310.m128i_i64[0] != v21 + 2 )
              operator delete((void *)v310.m128i_i64[0]);
            if ( (__m128i *)v297.m128i_i64[0] != &v298 )
              operator delete((void *)v297.m128i_i64[0]);
            if ( (_WORD *)v300.m128i_i64[0] != v301 )
              operator delete((void *)v300.m128i_i64[0]);
            src.m128i_i64[0] = (__int64)v308;
            sub_11BA820(&src, v284, (__int64)&v285[(_QWORD)v284]);
            sub_9EE560(&src, v295.m128i_i64[0], v295.m128i_u64[1]);
            v122 = j__strlen(".a");
            if ( v122 > 0x7FFFFFFFFFFFFFFFLL - src.m128i_i64[1] )
LABEL_419:
              std::__throw_length_error("basic_string::append");
            v123 = (__m128i *)sub_9EE560(&src, ".a", v122);
            v310.m128i_i64[0] = (__int64)(v21 + 2);
            if ( (__m128i *)v123->m128i_i64[0] == &v123[1] )
            {
              v311 = _mm_loadu_si128(v123 + 1);
            }
            else
            {
              v310.m128i_i64[0] = v123->m128i_i64[0];
              v311.m128i_i64[0] = v123[1].m128i_i64[0];
            }
            v310.m128i_i64[1] = v123->m128i_i64[1];
            v123->m128i_i64[0] = (__int64)v123[1].m128i_i64;
            v123->m128i_i64[1] = 0;
            v123[1].m128i_i8[0] = 0;
            LOWORD(v315) = 260;
            v313.m128i_i64[0] = (__int64)v21;
            sub_2253560(&v305, &v313);
            sub_CEFAC0((__int64)&v329, &v305);
            if ( (_WORD *)v305.m128i_i64[0] != v306 )
              operator delete((void *)v305.m128i_i64[0]);
            if ( (void ***)v310.m128i_i64[0] != v21 + 2 )
              operator delete((void *)v310.m128i_i64[0]);
            if ( (_BYTE *)src.m128i_i64[0] != v308 )
              operator delete((void *)src.m128i_i64[0]);
            if ( (_BYTE *)v295.m128i_i64[0] == v296 )
              break;
            operator delete((void *)v295.m128i_i64[0]);
            v113 += 2;
            if ( v113 == (__m128i *)v322 )
              goto LABEL_178;
          }
          v113 += 2;
        }
        while ( v322 != (_BYTE *)v113 );
LABEL_178:
        if ( v320[0] != &v321 )
          operator delete(v320[0]);
        v97 = (void *)ptr.m128i_i64[0];
        if ( (__m128 *)ptr.m128i_i64[0] != &v319 )
LABEL_94:
          operator delete(v97);
      }
      v98 = (char *)v324;
      v255 = (char *)v324 + 32 * (unsigned int)v325;
      if ( v324 != v255 )
      {
        while ( 1 )
        {
          v305.m128i_i64[0] = (__int64)v306;
          sub_11BA820(&v305, *(_BYTE **)v98, *(_QWORD *)v98 + *((_QWORD *)v98 + 1));
          v99 = v329.m256i_i64[0];
          v100 = v329.m256i_i64[0] + 32LL * v329.m256i_u32[2];
          if ( v329.m256i_i64[0] != v100 )
            break;
LABEL_104:
          v101 = (void *)v305.m128i_i64[0];
          if ( (_WORD *)v305.m128i_i64[0] == v306 )
          {
LABEL_134:
            v98 += 32;
            if ( v255 == v98 )
              goto LABEL_106;
          }
          else
          {
LABEL_105:
            operator delete(v101);
            v98 += 32;
            if ( v255 == v98 )
              goto LABEL_106;
          }
        }
        do
        {
          while ( 1 )
          {
            src.m128i_i64[0] = (__int64)v308;
            sub_11BA820(&src, *(_BYTE **)v99, *(_QWORD *)v99 + *(_QWORD *)(v99 + 8));
            v313.m128i_i64[0] = (__int64)v314;
            sub_11BA820(&v313, v305.m128i_i64[0], v305.m128i_i64[0] + v305.m128i_i64[1]);
            sub_9EE560(&v313, src.m128i_i64[0], src.m128i_u64[1]);
            LOWORD(v320[0]) = 260;
            ptr.m128i_i64[0] = (__int64)&v313;
            sub_2253560(v21, &ptr);
            if ( (_QWORD *)v313.m128i_i64[0] != v314 )
              operator delete((void *)v313.m128i_i64[0]);
            ptr.m128i_i64[0] = (__int64)v21;
            LOWORD(v320[0]) = 260;
            if ( !(unsigned int)sub_228C1E0(&ptr, 0) )
            {
              ptr.m128i_i64[0] = (__int64)v21;
              LOWORD(v320[0]) = 260;
              v107 = sub_10DA6C0(a6, (__int64)&ptr);
              sub_10DC5D0(a9, v107);
              if ( (void ***)v310.m128i_i64[0] != v21 + 2 )
                operator delete((void *)v310.m128i_i64[0]);
              if ( (_BYTE *)src.m128i_i64[0] != v308 )
                operator delete((void *)src.m128i_i64[0]);
              if ( (_WORD *)v305.m128i_i64[0] != v306 )
                operator delete((void *)v305.m128i_i64[0]);
              v254 = 1;
              goto LABEL_107;
            }
            if ( (void ***)v310.m128i_i64[0] != v21 + 2 )
              operator delete((void *)v310.m128i_i64[0]);
            if ( (_BYTE *)src.m128i_i64[0] == v308 )
              break;
            operator delete((void *)src.m128i_i64[0]);
            v99 += 32;
            if ( v100 == v99 )
              goto LABEL_104;
          }
          v99 += 32;
        }
        while ( v100 != v99 );
        v101 = (void *)v305.m128i_i64[0];
        if ( (_WORD *)v305.m128i_i64[0] != v306 )
          goto LABEL_105;
        goto LABEL_134;
      }
LABEL_106:
      v254 = 0;
LABEL_107:
      if ( v284 != v286 )
        operator delete(v284);
      if ( v281 != v283 )
        operator delete(v281);
      if ( v277[0] != &v278 )
        operator delete(v277[0]);
      v102 = v329.m256i_i64[0];
      v103 = (void **)(v329.m256i_i64[0] + 32LL * v329.m256i_u32[2]);
      if ( (void **)v329.m256i_i64[0] != v103 )
      {
        do
        {
          while ( 1 )
          {
            v103 -= 4;
            if ( *v103 == v103 + 2 )
              break;
            operator delete(*v103);
            if ( (void **)v102 == v103 )
              goto LABEL_116;
          }
        }
        while ( (void **)v102 != v103 );
LABEL_116:
        v103 = (void **)v329.m256i_i64[0];
      }
      if ( v103 != (void **)&v329.m256i_u64[2] )
        free(v103);
      s1e = v274;
      if ( !v254 )
      {
        v124 = v275;
        v273 = a10;
        if ( !a12 || (v125 = j__strlen("nvptx"), sub_2246AB0(&v273, "nvptx", v125, 0) == -1) )
        {
          dest.m128i_i64[1] = 0;
          v126 = (_BYTE *)a5[118];
          v127 = a5[119];
          dest.m128i_i64[0] = (__int64)v280;
          LOBYTE(v280[0]) = 0;
          v329.m256i_i64[0] = (__int64)&v329.m256i_i64[2];
          sub_11BA820(&v329, v126, (__int64)&v126[v127]);
          sub_22B9ED0(&v313, &v329);
          if ( (unsigned __int64 *)v329.m256i_i64[0] != &v329.m256i_u64[2] )
            operator delete((void *)v329.m256i_i64[0]);
          v258 = ".a";
          if ( v316 == 15 )
          {
            if ( v317[0] == 27 )
            {
              v254 = 1;
              v258 = ".lib";
            }
            else
            {
              v200 = ".lib";
              if ( v317[0] )
                v200 = ".a";
              v254 = v317[0] == 0;
              v258 = v200;
            }
          }
          v128 = j__strlen(":");
          if ( v124 >= v128 && (!v128 || !memcmp(s1e, ":", v128))
            || (v140 = j__strlen("-l"), v124 >= v140) && (!v140 || !memcmp(s1e, "-l", v140)) )
          {
            v129 = j__strlen("-l");
            v130 = v129;
            if ( v124 >= v129 && (!v129 || !memcmp(s1e, "-l", v129)) )
            {
              v124 -= v130;
              s1e += v130;
            }
            v131 = (char *)v324;
            v256 = (char *)v324 + 32 * (unsigned int)v325;
            if ( v324 != v256 )
            {
              while ( 2 )
              {
                v302.m128i_i64[0] = (__int64)v303;
                sub_11BA820(&v302, *(_BYTE **)v131, *(_QWORD *)v131 + *((_QWORD *)v131 + 1));
                dest.m128i_i64[1] = 0;
                *(_BYTE *)dest.m128i_i64[0] = 0;
                v132 = j__strlen(":");
                if ( v132 > v124 || v132 && memcmp(s1e, ":", v132) )
                {
                  if ( v254 )
                  {
                    v329.m256i_i64[1] = v124;
                    v330 = 773;
                    v329.m256i_i64[0] = (__int64)s1e;
                    v329.m256i_i64[2] = (__int64)v258;
                  }
                  else
                  {
                    LOWORD(v320[0]) = 257;
                    if ( *v258 )
                    {
                      ptr.m128i_i64[0] = (__int64)v258;
                      LOBYTE(v320[0]) = 3;
                    }
                    v310.m128i_i64[0] = (__int64)"lib";
                    LOWORD(v312) = 1283;
                    v311.m128i_i64[0] = (__int64)s1e;
                    v311.m128i_i64[1] = v124;
                    sub_A41580((__m128i *)&v329, (const __m128i *)v21, &ptr, v133, v134, v135);
                  }
                }
                else
                {
                  v136 = v124 != 0;
                  v330 = 261;
                  v329.m256i_i64[0] = (__int64)&s1e[v136];
                  v329.m256i_i64[1] = v124 - v136;
                }
                v137 = &off_2BAEBF0;
                sub_2253560(&v305, &v329);
                do
                {
                  while ( 1 )
                  {
                    s = *v137;
                    v310.m128i_i64[0] = (__int64)(v21 + 2);
                    sub_11BA820(v21, v302.m128i_i64[0], v302.m128i_i64[0] + v302.m128i_i64[1]);
                    v138 = strlen(s);
                    if ( 0x7FFFFFFFFFFFFFFFLL - v310.m128i_i64[1] < v138 )
                      goto LABEL_419;
                    sub_9EE560(v21, s, v138);
                    v139 = (__m128i *)sub_9EE560(v21, v305.m128i_i64[0], v305.m128i_u64[1]);
                    ptr.m128i_i64[0] = (__int64)&v319;
                    if ( (__m128i *)v139->m128i_i64[0] == &v139[1] )
                    {
                      a8 = _mm_loadu_si128(v139 + 1);
                      v319 = (__m128)a8;
                    }
                    else
                    {
                      ptr.m128i_i64[0] = v139->m128i_i64[0];
                      v319.m128_u64[0] = v139[1].m128i_u64[0];
                    }
                    ptr.m128i_i64[1] = v139->m128i_i64[1];
                    v139->m128i_i64[0] = (__int64)v139[1].m128i_i64;
                    v139->m128i_i64[1] = 0;
                    v139[1].m128i_i8[0] = 0;
                    v330 = 260;
                    v329.m256i_i64[0] = (__int64)&ptr;
                    sub_2253560(&src, &v329);
                    if ( (__m128 *)ptr.m128i_i64[0] != &v319 )
                      operator delete((void *)ptr.m128i_i64[0]);
                    if ( (void ***)v310.m128i_i64[0] != v21 + 2 )
                      operator delete((void *)v310.m128i_i64[0]);
                    v329.m256i_i64[0] = (__int64)&src;
                    v330 = 260;
                    if ( !(unsigned int)sub_228C1E0(&v329, 0) )
                    {
                      v144 = (char *)dest.m128i_i64[0];
                      v145 = src.m128i_u64[1];
                      if ( (_QWORD *)dest.m128i_i64[0] == v280 )
                        v146 = 15;
                      else
                        v146 = v280[0];
                      if ( src.m128i_i64[1] > v146 )
                      {
                        if ( src.m128i_i64[1] < 0 )
                          std::__throw_length_error("basic_string::_M_create");
                        v205 = 2 * v146;
                        if ( src.m128i_i64[1] < (unsigned __int64)v205 )
                        {
                          v206 = v205 + 1;
                          if ( v205 < 0 )
                          {
                            v206 = 0x8000000000000000LL;
                            v205 = 0x7FFFFFFFFFFFFFFFLL;
                          }
                        }
                        else
                        {
                          v206 = src.m128i_i64[1] + 1;
                          v205 = src.m128i_i64[1];
                        }
                        v207 = (char *)operator new(v206);
                        v144 = v207;
                        if ( (_QWORD *)dest.m128i_i64[0] != v280 )
                        {
                          sa = v207;
                          operator delete((void *)dest.m128i_i64[0]);
                          v144 = sa;
                        }
                        dest.m128i_i64[0] = (__int64)v144;
                        v280[0] = v205;
                      }
                      if ( v145 )
                      {
                        if ( v145 == 1 )
                          *v144 = *(_BYTE *)src.m128i_i64[0];
                        else
                          memcpy(v144, (const void *)src.m128i_i64[0], v145);
                        v144 = (char *)dest.m128i_i64[0];
                      }
                      dest.m128i_i64[1] = v145;
                      v144[v145] = 0;
                      if ( (_BYTE *)src.m128i_i64[0] != v308 )
                        operator delete((void *)src.m128i_i64[0]);
                      if ( (_WORD *)v305.m128i_i64[0] != v306 )
                        operator delete((void *)v305.m128i_i64[0]);
                      if ( (_BYTE *)v302.m128i_i64[0] != v303 )
                        operator delete((void *)v302.m128i_i64[0]);
                      goto LABEL_272;
                    }
                    if ( (_BYTE *)src.m128i_i64[0] == v308 )
                      break;
                    operator delete((void *)src.m128i_i64[0]);
                    if ( ++v137 == (char **)&off_2BAEC00 )
                      goto LABEL_216;
                  }
                  ++v137;
                }
                while ( v137 != (char **)&off_2BAEC00 );
LABEL_216:
                if ( (_WORD *)v305.m128i_i64[0] != v306 )
                  operator delete((void *)v305.m128i_i64[0]);
                if ( (_BYTE *)v302.m128i_i64[0] == v303 )
                {
                  v131 += 32;
                  if ( v256 != v131 )
                    continue;
                }
                else
                {
                  operator delete((void *)v302.m128i_i64[0]);
                  v131 += 32;
                  if ( v256 != v131 )
                    continue;
                }
                break;
              }
            }
          }
          else
          {
            v330 = 261;
            v329.m256i_i64[0] = (__int64)s1e;
            v329.m256i_i64[1] = v124;
            if ( !(unsigned int)sub_228C1E0(&v329, 0) )
            {
              sub_99BDC0(&dest, 0, dest.m128i_u64[1], s1e, v124);
LABEL_272:
              v272 = 0;
              v330 = 260;
              v329.m256i_i64[0] = (__int64)&dest;
              if ( !(unsigned int)sub_201FAD0(&v329, &v272) && v272 == 3 )
              {
                v147 = j__strlen(v267);
                v148 = j__strlen("a");
                LOWORD(v320[0]) = 261;
                v309 = 259;
                v304 = 261;
                ptr = a11;
                v302 = v273;
                src.m128i_i64[0] = (__int64)"-";
                v297.m128i_i64[0] = (__int64)"-";
                v299 = 259;
                v293.m128i_i64[0] = sub_228AA60(s1e, v124, 0);
                v293.m128i_i64[1] = v149;
                v290.m128i_i64[0] = (__int64)v267;
                v292 = 261;
                v294[8] = 261;
                v290.m128i_i64[1] = v147;
                sub_A41580(&v295, &v290, &v293, 261, v150, v151);
                sub_A41580(&v300, &v295, &v297, v152, v153, v154);
                sub_A41580(&v305, &v300, &v302, v155, v156, v157);
                sub_A41580((__m128i *)v21, &v305, &src, v158, v159, v160);
                sub_A41580((__m128i *)&v329, (const __m128i *)v21, &ptr, v161, v162, v163);
                sub_2253560(&v284, &v329);
                sub_10DB4E0(&v281, a5, (unsigned __int8 *)v284, v285, (__int64)"a", v148);
                if ( v284 != v286 )
                  operator delete(v284);
                v330 = 260;
                v164 = *(_QWORD *)(a1 + 80);
                v329.m256i_i64[0] = (__int64)&v281;
                v165 = sub_10DA6C0(v164, (__int64)&v329);
                sub_10DC5D0(a1 + 248, v165);
                v329.m256i_i64[0] = (__int64)&v329.m256i_i64[3];
                LODWORD(v164) = *(_DWORD *)(a3 + 64);
                *(__m128i *)&v329.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
                v166 = sub_10D1F80(v164);
                sub_A1FE50(&v329, v166, &v166[v167]);
                v168 = v329.m256i_i64[1];
                if ( (unsigned __int64)(v329.m256i_i64[1] + 1) > v329.m256i_i64[2] )
                {
                  sub_2236E10(&v329, &v329.m256i_u64[3], v329.m256i_i64[1] + 1, 1);
                  v168 = v329.m256i_i64[1];
                }
                *(_BYTE *)(v329.m256i_i64[0] + v168) = 45;
                ++v329.m256i_i64[1];
                sub_22BC1E0(
                  &v284,
                  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL),
                  *(_QWORD *)(*(_QWORD *)(a2 + 24) + 24LL),
                  4);
                sub_A1FE50(&v329, v284, &v285[(_QWORD)v284]);
                if ( a11.m128i_i64[1] )
                {
                  v224 = v329.m256i_i64[1];
                  if ( (unsigned __int64)(v329.m256i_i64[1] + 1) > v329.m256i_i64[2] )
                  {
                    sub_2236E10(&v329, &v329.m256i_u64[3], v329.m256i_i64[1] + 1, 1);
                    v224 = v329.m256i_i64[1];
                  }
                  *(_BYTE *)(v329.m256i_i64[0] + v224) = 45;
                  ++v329.m256i_i64[1];
                  sub_A1FE50(&v329, a11.m128i_i64[0], (_BYTE *)(a11.m128i_i64[0] + a11.m128i_i64[1]));
                }
                sub_11BA9A0(&v290, "-unbundle");
                sub_11BA9A0(&v293, "-type=a");
                sub_C05100((__int64)&v295, "-input=", (__int64)&dest);
                ptr.m128i_i64[0] = (__int64)&v319;
                sub_11BA8E0(&ptr, v329.m256i_i64[0], v329.m256i_i64[0] + v329.m256i_i64[1]);
                v169 = j__strlen("-targets=");
                v170 = (__m128i *)sub_99BDC0(&ptr, 0, 0, "-targets=", v169);
                v297.m128i_i64[0] = (__int64)&v298;
                if ( (__m128i *)v170->m128i_i64[0] == &v170[1] )
                {
                  v298 = _mm_loadu_si128(v170 + 1);
                }
                else
                {
                  v297.m128i_i64[0] = v170->m128i_i64[0];
                  v298.m128i_i64[0] = v170[1].m128i_i64[0];
                }
                v297.m128i_i64[1] = v170->m128i_i64[1];
                v170->m128i_i64[0] = (__int64)v170[1].m128i_i64;
                v170->m128i_i64[1] = 0;
                v170[1].m128i_i8[0] = 0;
                if ( (__m128 *)ptr.m128i_i64[0] != &v319 )
                  operator delete((void *)ptr.m128i_i64[0]);
                sub_C05100((__int64)&v300, "-output=", (__int64)&v281);
                sub_112D530(v21, *(_QWORD *)(a2 + 24), "clang-offload-bundler");
                LOWORD(v320[0]) = 260;
                ptr.m128i_i64[0] = (__int64)v21;
                v171 = sub_10DA6C0(a6, (__int64)&ptr);
                if ( (void ***)v310.m128i_i64[0] != v21 + 2 )
                  operator delete((void *)v310.m128i_i64[0]);
                LOWORD(v312) = 260;
                v172 = *(_QWORD *)(a1 + 80);
                ptr.m128i_i64[0] = (__int64)&v319;
                v310.m128i_i64[0] = (__int64)&v290;
                ptr.m128i_i64[1] = 0x1000000000LL;
                v173 = sub_10DA6C0(v172, (__int64)v21);
                sub_10DC5D0((__int64)&ptr, v173);
                v174 = *(_QWORD *)(a1 + 80);
                LOWORD(v312) = 260;
                v310.m128i_i64[0] = (__int64)&v293;
                v175 = sub_10DA6C0(v174, (__int64)v21);
                sub_10DC5D0((__int64)&ptr, v175);
                v176 = *(_QWORD *)(a1 + 80);
                LOWORD(v312) = 260;
                v310.m128i_i64[0] = (__int64)&v295;
                v177 = sub_10DA6C0(v176, (__int64)v21);
                sub_10DC5D0((__int64)&ptr, v177);
                v178 = *(_QWORD *)(a1 + 80);
                LOWORD(v312) = 260;
                v310.m128i_i64[0] = (__int64)&v297;
                v179 = sub_10DA6C0(v178, (__int64)v21);
                sub_10DC5D0((__int64)&ptr, v179);
                v180 = *(_QWORD *)(a1 + 80);
                LOWORD(v312) = 260;
                v310.m128i_i64[0] = (__int64)&v300;
                v181 = sub_10DA6C0(v180, (__int64)v21);
                sub_10DC5D0((__int64)&ptr, v181);
                sub_11BA9A0(&v302, "-allow-missing-bundles");
                v182 = *(_QWORD *)(a1 + 80);
                LOWORD(v312) = 260;
                v310.m128i_i64[0] = (__int64)&v302;
                v183 = sub_10DA6C0(v182, (__int64)v21);
                sub_10DC5D0((__int64)&ptr, v183);
                sub_11BA9A0(&v305, "-hip-openmp-compatible");
                v184 = *(_QWORD *)(a1 + 80);
                LOWORD(v312) = 260;
                v310.m128i_i64[0] = (__int64)&v305;
                v185 = sub_10DA6C0(v184, (__int64)v21);
                sub_10DC5D0((__int64)&ptr, v185);
                v186 = *(_QWORD *)(a1 + 80);
                v309 = 260;
                src.m128i_i64[0] = (__int64)&v281;
                v187 = sub_10DA6C0(v186, (__int64)&src);
                v310.m128i_i32[2] = 0;
                v312 = v187;
                v188 = *(_DWORD *)(a3 + 12);
                v311.m128i_i64[0] = a3;
                v189 = *(const __m128i **)a4;
                v190 = *(unsigned int *)(a4 + 8);
                v311.m128i_i32[2] = v188;
                v270 = v189;
                v271 = v190;
                v191 = (void *)operator new(0x208u);
                sub_1106AE0(
                  (__int64)v191,
                  a3,
                  a2,
                  0x100000000LL,
                  (__int64)"@",
                  v171,
                  (__int64)&ptr,
                  v270,
                  v271,
                  (__int64)v21,
                  1,
                  0);
                v277[0] = v191;
                sub_118A0F0(a1, (__int64 *)v277, si128, *(double *)a8.m128i_i64);
                if ( v277[0] )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)v277[0] + 8LL))(v277[0]);
                LOWORD(v312) = 260;
                v310.m128i_i64[0] = (__int64)&v281;
                v192 = sub_10DA6C0(a6, (__int64)v21);
                sub_10DC5D0(a9, v192);
                if ( (_WORD *)v305.m128i_i64[0] != v306 )
                  operator delete((void *)v305.m128i_i64[0]);
                if ( (_BYTE *)v302.m128i_i64[0] != v303 )
                  operator delete((void *)v302.m128i_i64[0]);
                if ( (__m128 *)ptr.m128i_i64[0] != &v319 )
                  free((void *)ptr.m128i_i64[0]);
                if ( (_WORD *)v300.m128i_i64[0] != v301 )
                  operator delete((void *)v300.m128i_i64[0]);
                if ( (__m128i *)v297.m128i_i64[0] != &v298 )
                  operator delete((void *)v297.m128i_i64[0]);
                if ( (_BYTE *)v295.m128i_i64[0] != v296 )
                  operator delete((void *)v295.m128i_i64[0]);
                if ( (_WORD *)v293.m128i_i64[0] != v294 )
                  operator delete((void *)v293.m128i_i64[0]);
                if ( (_BYTE *)v290.m128i_i64[0] != v291 )
                  operator delete((void *)v290.m128i_i64[0]);
                if ( v284 != v286 )
                  operator delete(v284);
                if ( (unsigned __int64 *)v329.m256i_i64[0] != &v329.m256i_u64[3] )
                  free((void *)v329.m256i_i64[0]);
                if ( v281 != v283 )
                  operator delete(v281);
              }
            }
          }
          if ( (_QWORD *)v313.m128i_i64[0] != v314 )
            operator delete((void *)v313.m128i_i64[0]);
          if ( (_QWORD *)dest.m128i_i64[0] != v280 )
            operator delete((void *)dest.m128i_i64[0]);
        }
        s1e = v274;
      }
      if ( s1e != v276 )
        operator delete(s1e);
      if ( !v262 )
      {
        v259 = (char *)std::_Rb_tree_increment(v259);
        goto LABEL_70;
      }
      v259 += 32;
LABEL_124:
      v65 = v259;
    }
    while ( v263 != v259 );
  }
  v104 = (char *)v337;
  if ( v337 )
  {
    while ( 1 )
    {
      sub_F7EAE0((__int64)&v335, *((_QWORD **)v104 + 3));
      v105 = *((char **)v104 + 4);
      v106 = *((char **)v104 + 2);
      if ( v105 == v104 + 48 )
      {
        operator delete(v104);
        if ( !v106 )
          break;
      }
      else
      {
        operator delete(v105);
        operator delete(v104);
        if ( !v106 )
          break;
      }
      v104 = v106;
    }
  }
  v193 = (void **)v331;
  v194 = (void **)((char *)v331 + 32 * (unsigned int)v332);
  if ( v331 != v194 )
  {
    do
    {
      while ( 1 )
      {
        v194 -= 4;
        if ( *v194 == v194 + 2 )
          break;
        operator delete(*v194);
        if ( v193 == v194 )
          goto LABEL_313;
      }
    }
    while ( v193 != v194 );
LABEL_313:
    v194 = (void **)v331;
  }
  if ( v194 != (void **)v333 )
    free(v194);
  if ( *(_BYTE **)v327 != v328 )
    free(*(void **)v327);
  if ( v289 && v287[0] != &v288 )
    operator delete(v287[0]);
  v195 = (void **)v324;
  v196 = (void **)((char *)v324 + 32 * (unsigned int)v325);
  if ( v324 != v196 )
  {
    do
    {
      while ( 1 )
      {
        v196 -= 4;
        if ( *v196 == v196 + 2 )
          break;
        operator delete(*v196);
        if ( v195 == v196 )
          goto LABEL_322;
      }
    }
    while ( v195 != v196 );
LABEL_322:
    v196 = (void **)v324;
  }
  if ( v196 != (void **)v326 )
    free(v196);
}
