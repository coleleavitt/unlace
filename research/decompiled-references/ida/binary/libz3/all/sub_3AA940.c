__int64 __fastcall sub_3AA940(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 *v8; // rbx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rbx
  unsigned int v14; // r13d
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rbp
  int v18; // edx
  __int64 v19; // rax
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned int v23; // edx
  unsigned int v24; // r14d
  size_t v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // r13
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v34; // eax
  __int64 v35; // rsi
  int v36; // r8d
  int v37; // r9d
  __int64 v38; // rax
  int v39; // edx
  _QWORD *v40; // rbx
  _QWORD *v41; // rbp
  unsigned int v42; // r13d
  unsigned int v43; // r14d
  __int64 v44; // r15
  int v45; // eax
  __int64 *v46; // rdi
  __int64 v47; // r9
  char *v48; // rcx
  __int64 v49; // rsi
  __int64 *v50; // rdx
  __int64 *v51; // rdi
  __int64 v52; // r8
  unsigned int v53; // r11d
  char *v54; // rsi
  char *v55; // r9
  __int64 v56; // rdi
  __int64 *v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rax
  char *v62; // rcx
  unsigned int v63; // eax
  __int64 v64; // rdx
  int v65; // eax
  char **v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r15
  unsigned int v70; // eax
  __int64 v71; // rcx
  int v72; // eax
  __int64 *v73; // rcx
  __int64 v74; // rdi
  __int64 v75; // rax
  int v76; // r8d
  int v77; // r9d
  unsigned int v78; // r13d
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // r13
  _QWORD *v81; // rax
  unsigned int v82; // r14d
  int v83; // eax
  unsigned __int64 *v84; // rdx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  unsigned int v87; // eax
  __int64 v88; // rdx
  unsigned int v89; // r15d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // ecx
  size_t v94; // rsi
  __int64 v95; // rax
  unsigned int v96; // edx
  size_t v97; // rsi
  __int64 v98; // rax
  __int64 v99; // r8
  __int64 v100; // r13
  void *v101; // rax
  __int64 v102; // r13
  int v103; // r13d
  int v104; // r9d
  int v105; // ecx
  int v106; // edx
  __int64 *v107; // r13
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // r13
  __int64 v112; // rdi
  int v113; // ebx
  int v114; // r8d
  int v115; // r9d
  int v116; // eax
  __int64 v117; // r13
  unsigned int *v118; // rbx
  int v119; // edx
  unsigned int v120; // r14d
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // r13
  unsigned int v124; // edx
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // r13
  _QWORD *v130; // rax
  unsigned int v131; // r11d
  char *v132; // r9
  _QWORD *v133; // r10
  __int64 *v134; // rcx
  size_t v135; // rdx
  _QWORD *v136; // rax
  unsigned int v137; // r8d
  char *v138; // r11
  __int64 *i; // rax
  __int64 v140; // rdx
  _QWORD *v141; // rsi
  _QWORD *v142; // rdx
  __int64 v143; // rsi
  __int64 v144; // rsi
  __int64 v145; // rax
  __int64 v146; // rbp
  __int64 v147; // rax
  __int64 v148; // rbx
  __int64 v149; // rdi
  __int64 *v150; // rax
  __int64 v152; // rax
  __int64 v153; // rbx
  char **v154; // r12
  char **v155; // r12
  char **exception; // rbp
  char **v157; // r12
  int v158; // [rsp+0h] [rbp-4D8h]
  int v159; // [rsp+0h] [rbp-4D8h]
  __int64 v160; // [rsp+0h] [rbp-4D8h]
  int v161; // [rsp+0h] [rbp-4D8h]
  __int64 v162; // [rsp+8h] [rbp-4D0h]
  __int64 v163; // [rsp+8h] [rbp-4D0h]
  __int64 v164; // [rsp+8h] [rbp-4D0h]
  __int64 v165; // [rsp+8h] [rbp-4D0h]
  int v166; // [rsp+8h] [rbp-4D0h]
  __int64 v167; // [rsp+10h] [rbp-4C8h]
  int v168[2]; // [rsp+10h] [rbp-4C8h]
  int v169; // [rsp+10h] [rbp-4C8h]
  int v170; // [rsp+10h] [rbp-4C8h]
  int v171; // [rsp+10h] [rbp-4C8h]
  void *ptr; // [rsp+18h] [rbp-4C0h]
  __int64 *ptra; // [rsp+18h] [rbp-4C0h]
  void *ptrb; // [rsp+18h] [rbp-4C0h]
  int ptrc; // [rsp+18h] [rbp-4C0h]
  __m128 *v176; // [rsp+20h] [rbp-4B8h]
  __int64 *v177; // [rsp+20h] [rbp-4B8h]
  __int64 *v178; // [rsp+20h] [rbp-4B8h]
  int v179; // [rsp+20h] [rbp-4B8h]
  _QWORD *v180; // [rsp+28h] [rbp-4B0h]
  unsigned int v181; // [rsp+28h] [rbp-4B0h]
  void *v182; // [rsp+28h] [rbp-4B0h]
  char v183; // [rsp+28h] [rbp-4B0h]
  _DWORD *v184; // [rsp+30h] [rbp-4A8h]
  int v185; // [rsp+30h] [rbp-4A8h]
  void *v186; // [rsp+30h] [rbp-4A8h]
  void *v187; // [rsp+30h] [rbp-4A8h]
  void *v188; // [rsp+38h] [rbp-4A0h]
  char *v189; // [rsp+38h] [rbp-4A0h]
  int v190; // [rsp+38h] [rbp-4A0h]
  void *v191; // [rsp+38h] [rbp-4A0h]
  int *v192; // [rsp+40h] [rbp-498h]
  int v193[2]; // [rsp+40h] [rbp-498h]
  int v194; // [rsp+40h] [rbp-498h]
  unsigned int **v195; // [rsp+48h] [rbp-490h]
  __int64 *v196; // [rsp+48h] [rbp-490h]
  unsigned int *v197; // [rsp+50h] [rbp-488h]
  _QWORD *v198; // [rsp+58h] [rbp-480h]
  int v199; // [rsp+60h] [rbp-478h]
  unsigned int v200; // [rsp+64h] [rbp-474h]
  int *v201; // [rsp+68h] [rbp-470h]
  int v202; // [rsp+70h] [rbp-468h]
  int *v203; // [rsp+70h] [rbp-468h]
  unsigned int v204; // [rsp+70h] [rbp-468h]
  unsigned int v205; // [rsp+70h] [rbp-468h]
  int v206; // [rsp+78h] [rbp-460h]
  int v207; // [rsp+7Ch] [rbp-45Ch]
  __int64 v208; // [rsp+80h] [rbp-458h]
  int *v209; // [rsp+88h] [rbp-450h]
  __int64 v210; // [rsp+90h] [rbp-448h]
  __int64 v211; // [rsp+98h] [rbp-440h]
  int *v212; // [rsp+A0h] [rbp-438h]
  __int64 v213; // [rsp+A8h] [rbp-430h]
  __int64 *v214; // [rsp+B0h] [rbp-428h]
  char v215[8]; // [rsp+B8h] [rbp-420h]
  char v216[8]; // [rsp+B8h] [rbp-420h]
  __int64 *v217; // [rsp+C0h] [rbp-418h]
  __int64 v218; // [rsp+C8h] [rbp-410h]
  char *v219; // [rsp+D0h] [rbp-408h]
  void **v220; // [rsp+D8h] [rbp-400h]
  int v221; // [rsp+E0h] [rbp-3F8h]
  int v222; // [rsp+E8h] [rbp-3F0h]
  int v223; // [rsp+F0h] [rbp-3E8h]
  int v224[2]; // [rsp+F8h] [rbp-3E0h] BYREF
  void *v225; // [rsp+100h] [rbp-3D8h] BYREF
  char v226[8]; // [rsp+108h] [rbp-3D0h]
  int v227[2]; // [rsp+110h] [rbp-3C8h] BYREF
  unsigned int *v228; // [rsp+118h] [rbp-3C0h] BYREF
  int v229[2]; // [rsp+120h] [rbp-3B8h] BYREF
  int v230[2]; // [rsp+128h] [rbp-3B0h]
  int v231[2]; // [rsp+130h] [rbp-3A8h] BYREF
  int v232[2]; // [rsp+138h] [rbp-3A0h] BYREF
  int v233[2]; // [rsp+140h] [rbp-398h] BYREF
  int v234[2]; // [rsp+148h] [rbp-390h]
  int v235[2]; // [rsp+150h] [rbp-388h] BYREF
  __int64 v236; // [rsp+158h] [rbp-380h]
  __int64 v237; // [rsp+160h] [rbp-378h] BYREF
  void *v238; // [rsp+168h] [rbp-370h]
  int v239[2]; // [rsp+170h] [rbp-368h] BYREF
  int v240[6]; // [rsp+178h] [rbp-360h]
  int v241[2]; // [rsp+190h] [rbp-348h] BYREF
  char v242; // [rsp+198h] [rbp-340h]
  char v243; // [rsp+19Bh] [rbp-33Dh]
  int v244[2]; // [rsp+270h] [rbp-268h] BYREF
  unsigned int *v245; // [rsp+278h] [rbp-260h] BYREF
  char v246[8]; // [rsp+280h] [rbp-258h] BYREF
  char v247[120]; // [rsp+288h] [rbp-250h] BYREF
  __int64 *v248; // [rsp+300h] [rbp-1D8h]
  int v249; // [rsp+308h] [rbp-1D0h]
  __int64 v250; // [rsp+310h] [rbp-1C8h]
  int v251[2]; // [rsp+318h] [rbp-1C0h] BYREF
  __int64 v252; // [rsp+3A8h] [rbp-130h]
  int v253; // [rsp+3B0h] [rbp-128h]
  _QWORD v254[18]; // [rsp+3B8h] [rbp-120h] BYREF
  int v255; // [rsp+448h] [rbp-90h]
  __int64 v256; // [rsp+450h] [rbp-88h]
  __int64 v257; // [rsp+458h] [rbp-80h]
  __int64 v258; // [rsp+460h] [rbp-78h] BYREF
  __int64 v259; // [rsp+468h] [rbp-70h]
  __int64 v260; // [rsp+470h] [rbp-68h]
  __int64 v261; // [rsp+478h] [rbp-60h]
  __int64 v262; // [rsp+480h] [rbp-58h]
  __int64 v263; // [rsp+488h] [rbp-50h] BYREF
  int v264; // [rsp+490h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 8);
  v213 = a3;
  v206 = a4;
  *(_QWORD *)v244 = 0;
  v176 = (__m128 *)v244;
  v212 = v241;
  sub_39A6C0((__int64)v241, v6, (__int64)v244);
  sub_18572D0(v244);
  *(_QWORD *)v215 = *(_QWORD *)(a2 + 32);
  v217 = (__int64 *)(*(_QWORD *)v215 + 16LL * *(unsigned int *)(a2 + 40));
  if ( v217 == *(__int64 **)v215 )
    return sub_39A7A0((__int64)v212);
  v7 = *(__int64 **)(a2 + 32);
  while ( (unsigned __int64)*v7 <= 1 )
  {
    v7 += 2;
    if ( (__int64 *)(*(_QWORD *)v215 + 16LL * *(unsigned int *)(a2 + 40)) == v7 )
      return sub_39A7A0((__int64)v212);
  }
  *(_QWORD *)v216 = v7;
  if ( v217 == v7 )
    return sub_39A7A0((__int64)v212);
  v211 = *v7;
  v220 = &v225;
  do
  {
    v8 = *(__int64 **)(*(_QWORD *)v216 + 8LL);
    v214 = v8;
    sub_39B7E0((__m128i *)v220, a1, v211);
    *(_QWORD *)v229 = 0;
    v184 = v225;
    v218 = *(_QWORD *)v226;
    v210 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v227 = v210;
    *(_QWORD *)v230 = v210;
    v11 = *v8;
    if ( !*v8 )
    {
      v113 = 0;
      v180 = nullptr;
      v197 = nullptr;
      v203 = v229;
      goto LABEL_128;
    }
    v200 = 0;
    v198 = nullptr;
    v197 = nullptr;
    if ( !*(_DWORD *)(v11 - 4) )
      goto LABEL_125;
    do
    {
      v163 = *(_QWORD *)(v11 + 8LL * v200);
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v176);
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_39A600((__int64)v246, *(const char **)(v211 + 16));
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<unsigned long>();
      std::stringbuf::str(v239, v247);
      v201 = v235;
      sub_180C5A0(v235, *(_QWORD *)v239);
      sub_233E40((__int64)v239);
      v208 = *(_QWORD *)(a1 + 8);
      v12 = sub_15E3510(v208, v235, *(unsigned int *)(v211 + 32), v211 + 48, *(_QWORD *)(v208 + 840), 0);
      *(_QWORD *)v168 = v12;
      if ( v12 )
        ++*(_DWORD *)(v12 + 8);
      v13 = nullptr;
      v14 = 0;
      std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream();
      v17 = *(_QWORD *)(a1 + 8);
      v18 = *(_DWORD *)(*(_QWORD *)v168 + 32LL);
      *(_QWORD *)v239 = v17;
      if ( v18 )
      {
        do
        {
          v21 = sub_15DB5C0(v17, v14, *(_QWORD *)(*(_QWORD *)v168 + 8LL * v14 + 48));
          v22 = v21;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          if ( v13 )
          {
            v23 = *((_DWORD *)v13 - 1);
            if ( v23 == *((_DWORD *)v13 - 2) )
            {
              v24 = (3 * v23 + 1) >> 1;
              v25 = 8 * v24 + 8;
              if ( 8 * v23 + 8 >= (unsigned int)v25 || v23 >= v24 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_399470((__int64 *)v176, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v176);
                sub_233E40((__int64)v176);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v26 = (unsigned int *)sub_186B300(v13 - 1, v25);
              v13 = v26 + 2;
              *v26 = v24;
              v27 = v26[1];
              v28 = v27;
              v20 = &v13[v27];
              v18 = v28 + 1;
            }
            else
            {
              v19 = v23;
              v18 = v23 + 1;
              v20 = &v13[v19];
            }
          }
          else
          {
            v125 = (_QWORD *)sub_186B270(0x18u);
            v18 = 1;
            *v125 = 2;
            v13 = v125 + 1;
            v20 = v125 + 1;
          }
          *v20 = v22;
          ++v14;
          *((_DWORD *)v13 - 1) = v18;
          v17 = *(_QWORD *)(a1 + 8);
        }
        while ( v14 < *(_DWORD *)(*(_QWORD *)v168 + 32LL) );
      }
      v29 = sub_15DC610(
              v17,
              v168[0],
              v18,
              (int)v13,
              v15,
              v16,
              v158,
              v163,
              v168[0],
              (int)ptr,
              (int)v176,
              (char)v180,
              (int)v184,
              (int)v188,
              (int)v192,
              v239);
      v30 = v29;
      if ( v29 )
        ++*(_DWORD *)(v29 + 8);
      *(_QWORD *)v240 = v13;
      sub_2334C0(v196);
      if ( !v197 || (v34 = *(v197 - 1), v34 == *(v197 - 2)) )
      {
        v228 = v197;
        sub_23A6F0(&v228);
        v197 = v228;
        v34 = *(v228 - 1);
      }
      v35 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)&v197[2 * v34] = v30;
      *(v197 - 1) = v34 + 1;
      *(_QWORD *)v231 = v35;
      *(_QWORD *)v224 = 0;
      *(_QWORD *)v233 = v35;
      v209 = v224;
      sub_62B3F0(v164, v35, (unsigned int)v224, v31, v32, v33);
      ptra = (__int64 *)sub_186B270(0x40u);
      *((_OWORD *)ptra + 1) = 0;
      *((_OWORD *)ptra + 2) = 0;
      *(_OWORD *)ptra = 0;
      *((_OWORD *)ptra + 3) = 0;
      v38 = *(_QWORD *)(v164 + 40);
      v39 = *(_DWORD *)(*(_QWORD *)(v38 + 16) + 32LL);
      if ( !v39 )
      {
        v74 = *(_QWORD *)(a1 + 8);
        v40 = nullptr;
        v41 = nullptr;
        goto LABEL_71;
      }
      v202 = 0;
      v40 = nullptr;
      v41 = nullptr;
      v42 = 0;
      v207 = 0;
      v43 = 0;
      v181 = 8;
      do
      {
        v44 = *(_QWORD *)(v38 + 8LL * v42 + 32);
        if ( *(_WORD *)(v44 + 4) != 1 )
        {
LABEL_55:
          v59 = sub_15D1F10(v44);
          if ( *(_QWORD *)v224 )
            v60 = v43 + *(_DWORD *)(*(_QWORD *)v224 - 4LL);
          else
            v60 = v43;
          v61 = sub_15DB5C0(*(_QWORD *)(a1 + 8), v60, v59);
          v62 = (char *)v61;
          if ( v61 )
            ++*(_DWORD *)(v61 + 8);
          if ( v41 )
          {
            v63 = *((_DWORD *)v41 - 1);
            if ( v63 == *((_DWORD *)v41 - 2) )
            {
              v96 = (3 * v63 + 1) >> 1;
              v97 = 8 * v96 + 8;
              if ( 8 * v63 + 8 >= (unsigned int)v97 || v63 >= v96 )
              {
                v157 = (char **)__cxa_allocate_exception(0x28u);
                sub_399470(v177, "Overflow encountered when expanding vector");
                *v157 = (char *)off_1C63128;
                sub_2333C0(v157 + 1, v177);
                sub_233E40((__int64)v177);
                __cxa_throw(v157, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v193[0] = (3 * v63 + 1) >> 1;
              v189 = v62;
              v98 = sub_186B300(v41 - 1, v97);
              v41 = (_QWORD *)(v98 + 8);
              v62 = v189;
              *(_DWORD *)v98 = v193[0];
              LODWORD(v98) = *(_DWORD *)(v98 + 4);
              v66 = (char **)&v41[(unsigned int)v98];
              v65 = v98 + 1;
            }
            else
            {
              v64 = v63;
              v65 = v63 + 1;
              v66 = (char **)&v41[v64];
            }
          }
          else
          {
            v189 = (char *)v61;
            v127 = (_QWORD *)sub_186B270(0x18u);
            v41 = v127 + 1;
            v62 = v189;
            v66 = (char **)(v127 + 1);
            *v127 = 2;
            v65 = 1;
          }
          *v66 = v62;
          v67 = *(_QWORD *)(a1 + 8);
          *((_DWORD *)v41 - 1) = v65;
          v68 = sub_15E1B70(v67);
          v69 = v68;
          if ( v68 )
            ++*(_DWORD *)(v68 + 8);
          if ( v40 )
          {
            v70 = *((_DWORD *)v40 - 1);
            if ( v70 == *((_DWORD *)v40 - 2) )
            {
              v93 = (3 * v70 + 1) >> 1;
              v94 = 8 * v93 + 8;
              if ( 8 * v70 + 8 >= (unsigned int)v94 || v70 >= v93 )
              {
                v154 = (char **)__cxa_allocate_exception(0x28u);
                sub_399470(v177, "Overflow encountered when expanding vector");
                *v154 = (char *)off_1C63128;
                sub_2333C0(v154 + 1, v177);
                sub_233E40((__int64)v177);
                __cxa_throw(v154, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              LODWORD(v189) = (3 * v70 + 1) >> 1;
              v95 = sub_186B300(v40 - 1, v94);
              v40 = (_QWORD *)(v95 + 8);
              *(_DWORD *)v95 = (_DWORD)v189;
              LODWORD(v95) = *(_DWORD *)(v95 + 4);
              v73 = &v40[(unsigned int)v95];
              v72 = v95 + 1;
            }
            else
            {
              v71 = v70;
              v72 = v70 + 1;
              v73 = &v40[v71];
            }
          }
          else
          {
            v126 = (_QWORD *)sub_186B270(0x18u);
            *v126 = 2;
            v40 = v126 + 1;
            v72 = 1;
            v73 = v40;
          }
          *v73 = v69;
          ++v43;
          *((_DWORD *)v40 - 1) = v72;
          goto LABEL_68;
        }
        v45 = *(_DWORD *)(v44 + 12);
        v46 = ptra;
        v47 = 8LL * v181;
        v48 = (char *)&ptra[(unsigned __int64)v47 / 8];
        v49 = 8LL * (v45 & (v181 - 1));
        v50 = &ptra[(unsigned __int64)v49 / 8];
        if ( v49 != v47 )
        {
          v51 = &ptra[(unsigned __int64)v49 / 8];
          do
          {
            v52 = *v51;
            if ( (unsigned __int64)*v51 > 1 )
            {
              if ( *(_DWORD *)(v52 + 12) == v45 && v44 == v52 )
                goto LABEL_55;
            }
            else if ( !v52 )
            {
              goto LABEL_36;
            }
            ++v51;
          }
          while ( v48 != (char *)v51 );
          v46 = ptra;
          if ( v50 != ptra )
            goto LABEL_97;
          v53 = 2 * v181;
          if ( 3 * v181 >= 4 * (v202 + v207) )
          {
            if ( v47 )
              goto LABEL_38;
            goto LABEL_53;
          }
          goto LABEL_149;
        }
        if ( v50 == ptra )
        {
          v53 = 2 * v181;
          if ( 3 * v181 >= 4 * (v202 + v207) )
            goto LABEL_163;
          goto LABEL_149;
        }
LABEL_97:
        while ( 1 )
        {
          v99 = *v46;
          if ( (unsigned __int64)*v46 <= 1 )
            break;
          if ( *(_DWORD *)(v99 + 12) == v45 && v44 == v99 )
            goto LABEL_55;
LABEL_96:
          if ( v50 == ++v46 )
            goto LABEL_36;
        }
        if ( v99 )
          goto LABEL_96;
LABEL_36:
        v53 = 2 * v181;
        if ( 3 * v181 >= 4 * (v202 + v207) )
        {
          if ( v49 != v47 )
            goto LABEL_38;
LABEL_163:
          v55 = nullptr;
LABEL_45:
          if ( v50 != ptra )
          {
            v57 = ptra;
            while ( 1 )
            {
              while ( 1 )
              {
                v58 = *v57;
                if ( (unsigned __int64)*v57 <= 1 )
                  break;
                if ( *(_DWORD *)(v58 + 12) == v45 && v44 == v58 )
                {
                  *v57 = v44;
                  goto LABEL_54;
                }
                if ( ++v57 == v50 )
                  goto LABEL_53;
              }
              if ( !v58 )
                break;
              v55 = (char *)v57++;
              if ( v57 == v50 )
                goto LABEL_53;
            }
            if ( v55 )
              goto LABEL_182;
            v55 = (char *)v57;
            goto LABEL_183;
          }
LABEL_53:
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
LABEL_149:
        v219 = (char *)&ptra[(unsigned __int64)v47 / 8];
        v181 = v53;
        v204 = v53;
        *(_QWORD *)v193 = v53;
        v189 = (char *)(8LL * v53);
        v130 = (_QWORD *)sub_186B270((size_t)v189);
        v131 = v204;
        v132 = v189;
        v133 = v130;
        v134 = (__int64 *)v219;
        if ( v204 )
        {
          v135 = 8LL * *(_QWORD *)v193;
          v193[0] = (int)v219;
          v136 = memset(v130, 0, v135);
          v132 = v189;
          v134 = (__int64 *)v219;
          v131 = v204;
          v133 = v136;
        }
        v137 = v131 - 1;
        v138 = &v132[(_QWORD)v133];
        for ( i = ptra; v134 != i; *v142 = v143 )
        {
          while ( (unsigned __int64)*i <= 1 )
          {
            if ( v134 == ++i )
              goto LABEL_160;
          }
          v140 = 8LL * (*(_DWORD *)(*i + 12) & v137);
          v141 = &v133[(unsigned __int64)v140 / 8];
          if ( v132 == (char *)v140 )
          {
LABEL_164:
            if ( v133 == v141 )
            {
LABEL_189:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v142 = v133;
            while ( *v142 )
            {
              if ( v141 == ++v142 )
                goto LABEL_189;
            }
          }
          else
          {
            v142 = &v133[(unsigned __int64)v140 / 8];
            while ( *v142 )
            {
              if ( v138 == (char *)++v142 )
                goto LABEL_164;
            }
          }
          v143 = *i++;
        }
LABEL_160:
        if ( ptra )
        {
          v219 = &v132[(_QWORD)v133];
          v205 = v137;
          *(_QWORD *)v193 = v133;
          v189 = v132;
          sub_186B220(ptra);
          v132 = v189;
          v133 = *(_QWORD **)v193;
          v137 = v205;
          v138 = v219;
        }
        v45 = *(_DWORD *)(v44 + 12);
        ptra = v133;
        v48 = v138;
        v202 = 0;
        v144 = 8LL * (v45 & v137);
        v50 = &v133[(unsigned __int64)v144 / 8];
        if ( (char *)v144 == v132 )
          goto LABEL_163;
LABEL_38:
        v54 = (char *)v50;
        v55 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v56 = *(_QWORD *)v54;
            if ( *(_QWORD *)v54 <= 1u )
              break;
            if ( *(_DWORD *)(v56 + 12) == v45 && v44 == v56 )
            {
              *(_QWORD *)v54 = v44;
              goto LABEL_54;
            }
            v54 += 8;
            if ( v54 == v48 )
              goto LABEL_45;
          }
          if ( !v56 )
            break;
          v55 = v54;
          v54 += 8;
          if ( v54 == v48 )
            goto LABEL_45;
        }
        if ( v55 )
LABEL_182:
          --v202;
        else
          v55 = v54;
LABEL_183:
        *(_QWORD *)v55 = v44;
        ++v207;
LABEL_54:
        *(_QWORD *)v235 = v44;
        ++*(_DWORD *)(v44 + 8);
        *(_QWORD *)v232 = v41;
        sub_399930((unsigned int **)v232, v235);
        v41 = *(_QWORD **)v232;
        *(_QWORD *)(*(_QWORD *)v224 + 8LL * *(unsigned int *)(v44 + 16)) = 0;
LABEL_68:
        ++v42;
        v38 = *(_QWORD *)(v164 + 40);
      }
      while ( v42 < *(_DWORD *)(*(_QWORD *)(v38 + 16) + 32LL) );
      v74 = *(_QWORD *)(a1 + 8);
      if ( v41 )
        v39 = *((_DWORD *)v41 - 1);
      else
        v39 = 0;
LABEL_71:
      v75 = sub_15DC610(
              v74,
              v169,
              v39,
              (int)v41,
              v36,
              v37,
              v159,
              v164,
              v169,
              (int)ptra,
              (int)v177,
              v181,
              v185,
              (int)v189,
              v193[0],
              v196);
      v182 = (void *)v75;
      if ( v75 )
        ++*(_DWORD *)(v75 + 8);
      sub_399450((__int64)v198, v210);
      v78 = *(_DWORD *)(v165 + 56);
      if ( v78 )
      {
        v79 = *(_QWORD *)(v165 + 80);
        v80 = v79 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v79 > 7 )
          ++*(_DWORD *)(v80 + 8);
        if ( !v40 )
        {
          v81 = (_QWORD *)sub_186B270(0x18u);
          v82 = 0;
          *v81 = 2;
          v40 = v81 + 1;
          v83 = 1;
          v84 = v40;
          goto LABEL_78;
        }
        v82 = 0;
        while ( 1 )
        {
          v87 = *((_DWORD *)v40 - 1);
          if ( v87 == *((_DWORD *)v40 - 2) )
          {
            v89 = (3 * v87 + 1) >> 1;
            v90 = 8 * v89 + 8;
            if ( 8 * v87 + 8 >= (unsigned int)v90 || v87 >= v89 )
            {
              v155 = (char **)__cxa_allocate_exception(0x28u);
              sub_399470(v178, "Overflow encountered when expanding vector");
              *v155 = (char *)off_1C63128;
              sub_2333C0(v155 + 1, v178);
              sub_233E40((__int64)v178);
              __cxa_throw(v155, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v91 = (unsigned int *)sub_186B300(v40 - 1, v90);
            v92 = v91[1];
            v40 = v91 + 2;
            *v91 = v89;
            LODWORD(v91) = v92;
            v84 = &v40[v92];
            v83 = (_DWORD)v91 + 1;
          }
          else
          {
            v88 = v87;
            v83 = v87 + 1;
            v84 = &v40[v88];
          }
LABEL_78:
          *v84 = v80;
          ++v82;
          *((_DWORD *)v40 - 1) = v83;
          if ( v82 >= *(_DWORD *)(v165 + 56) )
            break;
          v80 = 0;
          v85 = *(_QWORD *)(v165 + 8LL * v82 + 80);
          if ( v85 > 7 )
          {
            v86 = v85 & 0xFFFFFFFFFFFFFFF8LL;
            ++*(_DWORD *)(v86 + 8);
            v80 = v86;
          }
        }
LABEL_102:
        v78 = *((_DWORD *)v40 - 1);
      }
      else if ( v40 )
      {
        goto LABEL_102;
      }
      if ( v243 )
      {
        v203 = v229;
        sub_14E1930((int)v212, v160, v165, v170, (__int64)ptrb, (__int64)v178, (__int64)v182, v186, v190);
        goto LABEL_106;
      }
      v203 = v229;
      if ( v242 )
      {
        if ( (unsigned int)sub_14DD000(v212, v78, v40, v229) != 5 )
          goto LABEL_106;
      }
      else if ( (unsigned int)sub_14DC740(
                                (int)v212,
                                v78,
                                (int)v40,
                                (int)v229,
                                v76,
                                v77,
                                v160,
                                v165,
                                v170,
                                (int)ptrb,
                                (int)v178,
                                v182,
                                (int)v186,
                                v190,
                                v194,
                                (int)v195,
                                (int)v197,
                                (int)v198,
                                v199,
                                (int)v235,
                                (int)v229,
                                v206,
                                v208,
                                (int)v224,
                                v210,
                                v211,
                                (int)v212,
                                v213,
                                (int)v214,
                                v216[0],
                                (int)v217,
                                v218,
                                (int)v219,
                                (int)v220,
                                v221,
                                v222,
                                v223,
                                v224[0],
                                (int)v225,
                                *(int *)v226,
                                v227[0],
                                (int)v228,
                                v229[0],
                                v230[0],
                                v231[0],
                                v232[0],
                                v233[0],
                                v234[0]) != 5 )
      {
        goto LABEL_106;
      }
      v128 = sub_15E1AF0(v241[0]);
      v129 = v128;
      if ( v128 )
        ++*(_DWORD *)(v128 + 8);
      sub_399450(*(__int64 *)v229, *(__int64 *)v230);
      *(_QWORD *)v229 = v129;
LABEL_106:
      v100 = *(_QWORD *)(a1 + 8);
      sub_1584DD0(v178, v100, 0);
      *(_QWORD *)v244 = &off_1C4E2A0;
      v248 = &v263;
      v249 = 0;
      v250 = 0;
      v192 = v251;
      sub_1584DD0(v251, v100, 0);
      v252 = 0;
      v253 = 0;
      *(_QWORD *)v251 = &off_1C61DB8;
      v198 = v254;
      sub_1584DD0(v254, v100, 0);
      v257 = v100;
      v255 = 0;
      v254[0] = &off_1C61DE0;
      *(_QWORD *)v244 = &off_1C4E2C0;
      v256 = 0;
      v264 = v206;
      v101 = *(void **)(a1 + 8);
      v258 = 0;
      v259 = v100;
      v260 = 0;
      v261 = v100;
      v262 = 0;
      v263 = a1;
      v237 = 0;
      v238 = v101;
      sub_3AA7A0((__int64)v178, *(__int64 *)v229, &v237, &v258);
      v102 = v237;
      v191 = v238;
      if ( v237 != *(_QWORD *)v229 )
      {
        sub_399450(*(__int64 *)v229, *(__int64 *)v230);
        *(_QWORD *)v229 = v102;
        if ( v102 )
          ++*(_DWORD *)(v102 + 8);
      }
      sub_399450(v102, (__int64)v191);
      *(_QWORD *)v244 = &off_1C4E2A0;
      if ( v262 )
        sub_186B220((void *)(v262 - 8));
      sub_399410(v260, v261);
      sub_399410(v258, v259);
      sub_399450(v256, v257);
      v254[0] = &qword_1C637E8;
      sub_15841B0(v254);
      *(_QWORD *)v251 = &qword_1C637E8;
      sub_15841B0(v251);
      if ( v250 )
        sub_186B220((void *)(v250 - 8));
      sub_15841B0(v178);
      *(_QWORD *)v232 = v41;
      v103 = v229[0];
      sub_39CDA0(v195, a1, v165, (__int64 *)v209, (__int64)v231);
      sub_399270((__int64)v178, *(_QWORD *)(a1 + 8), (__int64)&v263);
      LOBYTE(v264) = 0;
      *(_QWORD *)v244 = &off_1C4CA80;
      if ( *(_QWORD *)v240 )
        v105 = *(_DWORD *)(*(_QWORD *)v240 - 4LL);
      else
        v105 = 0;
      v106 = v103;
      v107 = v178;
      sub_157BE40(
        (int)v201,
        (int)v178,
        v106,
        v105,
        v240[0],
        v104,
        v160,
        v165,
        v170,
        (int)ptrb,
        (int)v178,
        (int)v182,
        (__int64)v186,
        v191);
      *(_QWORD *)v244 = &off_1C4CA80;
      sub_267D20(v107);
      sub_2334C0((__int64 *)v195);
      v108 = *(_QWORD *)v229;
      v109 = *(_QWORD *)v235;
      *(_QWORD *)v235 = *(_QWORD *)v229;
      *(_QWORD *)v229 = v109;
      sub_399450(v108, v236);
      v110 = sub_15E1B70(*(_QWORD *)(a1 + 8));
      v111 = v110;
      if ( v110 )
        ++*(_DWORD *)(v110 + 8);
      sub_399450(*(__int64 *)v229, *(__int64 *)v230);
      *(_QWORD *)v229 = v111;
      sub_39C540(v176, a1, v111, (int)v180);
      v112 = *(_QWORD *)v229;
      *(_QWORD *)v229 = *(_QWORD *)v244;
      sub_399450(v112, (__int64)v245);
      *(_QWORD *)v239 = *(_QWORD *)v229;
      if ( *(_QWORD *)v229 )
        ++*(_DWORD *)(*(_QWORD *)v229 + 8LL);
      sub_399930((unsigned int **)(v213 + 8), v195);
      if ( ptr )
        sub_186B220(ptr);
      *(_QWORD *)v234 = v40;
      sub_2334C0((__int64 *)v233);
      sub_2334C0((__int64 *)v231);
      if ( *(_QWORD *)v224 )
        sub_186B220((void *)(*(_QWORD *)v224 - 8LL));
      sub_3993F0(v167, v208);
      ++v200;
      v11 = *v214;
      if ( !*v214 )
      {
LABEL_127:
        v113 = *(v197 - 1);
        goto LABEL_128;
      }
      v198 = v180;
    }
    while ( v200 < *(_DWORD *)(v11 - 4) );
LABEL_125:
    v180 = v198;
    if ( v197 )
    {
      v203 = v229;
      goto LABEL_127;
    }
    v113 = 0;
    v203 = v229;
LABEL_128:
    if ( !v242 )
    {
      if ( (unsigned int)sub_14E03D0(
                           (int)v212,
                           v158,
                           v162,
                           v167,
                           (int)ptr,
                           (int)v176,
                           (int)v180,
                           (int)v184,
                           v188,
                           (int)v192,
                           (int)v195,
                           (int)v197,
                           (int)v198,
                           v199,
                           (int)v201,
                           (int)v203,
                           v206,
                           v208,
                           (int)v209,
                           v210,
                           v211,
                           (int)v212,
                           v213,
                           (int)v214,
                           *(int *)v216,
                           (int)v217,
                           v218,
                           (int)v219,
                           (int)v220,
                           v221,
                           v222,
                           v223,
                           v224[0],
                           (int)v225,
                           *(int *)v226,
                           v227[0],
                           (int)v228,
                           v229[0],
                           v230[0],
                           v231[0],
                           v232[0],
                           v233[0],
                           v234[0],
                           v235[0],
                           v236) != 5 )
        goto LABEL_130;
LABEL_186:
      v152 = sub_15E1AF0(v241[0]);
      v153 = v152;
      if ( v152 )
        ++*(_DWORD *)(v152 + 8);
      sub_399450(*(__int64 *)v229, *(__int64 *)v230);
      *(_QWORD *)v229 = v153;
      goto LABEL_130;
    }
    if ( (unsigned int)sub_14E0E20(
                         (int)v212,
                         v113,
                         (int)v197,
                         (int)v203,
                         v9,
                         v10,
                         v158,
                         v162,
                         v167,
                         (int)ptr,
                         (int)v176,
                         v180) == 5 )
      goto LABEL_186;
LABEL_130:
    v116 = (int)v184;
    v117 = *(_QWORD *)(a1 + 8);
    v118 = nullptr;
    v119 = v184[8];
    *(_QWORD *)v244 = v117;
    if ( v119 )
    {
      v120 = 0;
      do
      {
        v122 = sub_15DB5C0(v117, v120, *(_QWORD *)&v184[2 * v120 + 12]);
        v123 = v122;
        if ( v122 )
          ++*(_DWORD *)(v122 + 8);
        if ( !v118 || (v124 = *(v118 - 1), v124 == *(v118 - 2)) )
        {
          v245 = v118;
          sub_23A6F0(&v245);
          v118 = v245;
          v124 = *(v245 - 1);
        }
        v121 = v124;
        v119 = v124 + 1;
        ++v120;
        *(_QWORD *)&v118[2 * v121] = v123;
        v116 = (int)v184;
        *(v118 - 1) = v119;
        v117 = *(_QWORD *)(a1 + 8);
      }
      while ( v120 < v184[8] );
    }
    v145 = sub_15DC610(
             v117,
             v116,
             v119,
             (int)v118,
             v114,
             v115,
             v161,
             v166,
             v171,
             ptrc,
             v179,
             v183,
             (int)v184,
             (int)v188,
             (int)v192,
             v195);
    v146 = v145;
    if ( v145 )
      ++*(_DWORD *)(v145 + 8);
    v245 = v118;
    sub_2334C0((__int64 *)v176);
    sub_399450((__int64)v180, v117);
    v147 = sub_15E1B70(*(_QWORD *)(a1 + 8));
    v148 = v147;
    if ( v147 )
      ++*(_DWORD *)(v147 + 8);
    sub_399450(*(__int64 *)v229, *(__int64 *)v230);
    *(_QWORD *)v229 = v148;
    sub_39C540(v176, a1, v148, v146);
    v149 = *(_QWORD *)v229;
    *(_QWORD *)v229 = *(_QWORD *)v244;
    sub_399450(v149, (__int64)v245);
    *(_QWORD *)v244 = *(_QWORD *)v229;
    if ( *(_QWORD *)v229 )
      ++*(_DWORD *)(*(_QWORD *)v229 + 8LL);
    sub_399930((unsigned int **)(v213 + 8), v176);
    sub_399450(v146, v210);
    sub_399450(*(__int64 *)v229, *(__int64 *)v230);
    v228 = v197;
    sub_2334C0((__int64 *)v227);
    sub_3993F0((__int64)v187, v218);
    v150 = (__int64 *)(*(_QWORD *)v216 + 16LL);
    if ( v217 == (__int64 *)(*(_QWORD *)v216 + 16LL) )
      break;
    while ( (unsigned __int64)*v150 <= 1 )
    {
      v150 += 2;
      if ( v217 == v150 )
        return sub_39A7A0((__int64)v212);
    }
    *(_QWORD *)v216 = v150;
    v211 = *v150;
  }
  while ( v217 != v150 );
  return sub_39A7A0((__int64)v212);
}

