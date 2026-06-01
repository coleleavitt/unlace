void __fastcall sub_1190050(_QWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r13
  __int64 v5; // rax
  _BOOL8 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rax
  unsigned __int64 v12; // rdx
  void **v13; // rax
  __int64 v14; // rcx
  const char *v15; // rbp
  size_t v16; // rax
  size_t v17; // rbx
  size_t v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r13
  _OWORD *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 *v24; // rax
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rbx
  char *v28; // rbp
  char *v29; // r15
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // rcx
  __int64 v33; // rax
  char *v34; // rbx
  __int64 v35; // rax
  char v36; // r12
  void **v37; // r13
  _BYTE *v38; // rbx
  size_t v39; // rax
  size_t v40; // rax
  size_t v41; // rbp
  size_t v42; // r12
  char *v43; // r9
  _DWORD *v44; // r8
  char *v45; // r12
  size_t v46; // rax
  int v47; // eax
  size_t v48; // rax
  size_t v49; // rax
  int v50; // eax
  __int64 v51; // rax
  size_t v52; // rax
  _WORD *v53; // r8
  int v54; // eax
  __int64 v55; // rax
  __m128i v56; // xmm0
  __m128i v57; // xmm1
  __m128i v58; // xmm1
  __m128i v59; // xmm3
  char v60; // al
  __m128i v61; // xmm2
  __m128i v62; // xmm0
  __m128i si128; // xmm4
  char ***v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  void *v76; // rdi
  char *v77; // rbx
  void *v78; // rax
  int v79; // eax
  const char *v80; // rbx
  void *v81; // rax
  __int64 v82; // rdx
  void *v83; // rax
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rcx
  __m128i v88; // xmm1
  int v89; // eax
  size_t v90; // rax
  size_t v91; // rax
  void *v92; // r8
  size_t v93; // rax
  size_t v94; // rax
  size_t v95; // rax
  size_t v96; // rax
  size_t v97; // rax
  void *v98; // r8
  size_t v99; // rax
  void *v100; // r8
  size_t v101; // rax
  size_t v102; // rax
  size_t v103; // rax
  size_t v104; // rax
  size_t v105; // rax
  int v106; // eax
  size_t v107; // rax
  size_t v108; // rax
  size_t v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int32 v112; // eax
  size_t v113; // rax
  size_t v114; // rax
  size_t v115; // rax
  size_t v116; // rax
  size_t v117; // rax
  void *v118; // r8
  void *v119; // r8
  size_t v120; // rax
  size_t v121; // rax
  size_t v122; // rax
  size_t v123; // rax
  __int64 v124; // rax
  const char *v125; // rbx
  size_t v126; // rax
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // r12
  signed __int64 v129; // rbp
  _BYTE *v130; // r12
  size_t v131; // rax
  void **v133; // [rsp+10h] [rbp-5C8h]
  __int64 *v135; // [rsp+20h] [rbp-5B8h]
  void *s1; // [rsp+28h] [rbp-5B0h] BYREF
  __m128i v137; // [rsp+30h] [rbp-5A8h] BYREF
  __m128i v138; // [rsp+40h] [rbp-598h] BYREF
  __m128i v139; // [rsp+50h] [rbp-588h] BYREF
  __m128i v140; // [rsp+60h] [rbp-578h] BYREF
  char ***v141; // [rsp+70h] [rbp-568h]
  char ***v142; // [rsp+78h] [rbp-560h]
  __m128 v143; // [rsp+80h] [rbp-558h] BYREF
  char ***p_ptr; // [rsp+90h] [rbp-548h]
  __int64 v145; // [rsp+98h] [rbp-540h]
  char v146; // [rsp+A3h] [rbp-535h]
  int v147; // [rsp+A4h] [rbp-534h]
  __int64 v148; // [rsp+A8h] [rbp-530h]
  const char *v149; // [rsp+B0h] [rbp-528h]
  size_t v150; // [rsp+B8h] [rbp-520h]
  void *v151; // [rsp+C0h] [rbp-518h]
  __int64 v152; // [rsp+C8h] [rbp-510h]
  char v153; // [rsp+D2h] [rbp-506h]
  bool v154; // [rsp+D3h] [rbp-505h]
  char v155; // [rsp+D4h] [rbp-504h]
  char v156; // [rsp+D5h] [rbp-503h]
  char v157; // [rsp+D6h] [rbp-502h]
  char v158; // [rsp+D7h] [rbp-501h]
  __int64 *v159; // [rsp+D8h] [rbp-500h]
  void *v160; // [rsp+E0h] [rbp-4F8h] BYREF
  size_t n; // [rsp+E8h] [rbp-4F0h]
  __int64 *v162; // [rsp+F0h] [rbp-4E8h] BYREF
  void **v163; // [rsp+F8h] [rbp-4E0h]
  __int64 *v164; // [rsp+100h] [rbp-4D8h]
  __m128i v165; // [rsp+110h] [rbp-4C8h]
  __int64 v166; // [rsp+120h] [rbp-4B8h]
  __m128i v167; // [rsp+130h] [rbp-4A8h]
  const char *v168; // [rsp+140h] [rbp-498h]
  _OWORD v169[2]; // [rsp+150h] [rbp-488h] BYREF
  void *v170; // [rsp+170h] [rbp-468h] BYREF
  size_t v171; // [rsp+178h] [rbp-460h]
  char *v172; // [rsp+180h] [rbp-458h]
  char *v173; // [rsp+188h] [rbp-450h]
  __m128i v174; // [rsp+190h] [rbp-448h]
  __m128i v175; // [rsp+1A0h] [rbp-438h]
  __m128i v176; // [rsp+1B0h] [rbp-428h]
  __m128i v177; // [rsp+1C0h] [rbp-418h]
  __m128i v178; // [rsp+1D0h] [rbp-408h]
  __m128i v179; // [rsp+1E0h] [rbp-3F8h]
  const char *v180; // [rsp+1F0h] [rbp-3E8h]
  void *ptr; // [rsp+200h] [rbp-3D8h] BYREF
  __int64 v182; // [rsp+208h] [rbp-3D0h]
  char v183; // [rsp+210h] [rbp-3C8h] BYREF
  __m128i v184; // [rsp+240h] [rbp-398h] BYREF
  __m128i v185; // [rsp+250h] [rbp-388h] BYREF
  __int64 v186; // [rsp+260h] [rbp-378h]
  void *v187; // [rsp+280h] [rbp-358h] BYREF
  __int64 v188; // [rsp+288h] [rbp-350h]
  _QWORD v189[6]; // [rsp+290h] [rbp-348h] BYREF
  void *v190; // [rsp+2C0h] [rbp-318h] BYREF
  __int64 v191; // [rsp+2C8h] [rbp-310h]
  _OWORD v192[3]; // [rsp+2D0h] [rbp-308h] BYREF
  void *v193; // [rsp+300h] [rbp-2D8h] BYREF
  __int64 v194; // [rsp+308h] [rbp-2D0h]
  __m128i v195; // [rsp+310h] [rbp-2C8h] BYREF
  __int64 v196; // [rsp+320h] [rbp-2B8h]
  void *v197[2]; // [rsp+340h] [rbp-298h] BYREF
  _OWORD v198[3]; // [rsp+350h] [rbp-288h] BYREF
  char *s[2]; // [rsp+380h] [rbp-258h] BYREF
  _OWORD v200[2]; // [rsp+390h] [rbp-248h] BYREF
  const char *v201; // [rsp+3B0h] [rbp-228h]
  void *v202; // [rsp+3C0h] [rbp-218h] BYREF
  signed __int64 v203; // [rsp+3C8h] [rbp-210h]
  _QWORD v204[6]; // [rsp+3D0h] [rbp-208h] BYREF
  __m128i v205; // [rsp+400h] [rbp-1D8h] BYREF
  _OWORD v206[3]; // [rsp+410h] [rbp-1C8h] BYREF
  __m128i v207; // [rsp+440h] [rbp-198h] BYREF
  __m128i v208; // [rsp+450h] [rbp-188h] BYREF
  const char *v209; // [rsp+460h] [rbp-178h]
  __m128i v210; // [rsp+480h] [rbp-158h] BYREF
  _OWORD v211[3]; // [rsp+490h] [rbp-148h] BYREF
  __m128i v212; // [rsp+4C0h] [rbp-118h] BYREF
  _QWORD v213[2]; // [rsp+4D0h] [rbp-108h] BYREF
  __int16 v214; // [rsp+4E0h] [rbp-F8h]
  __m128i v215; // [rsp+500h] [rbp-D8h] BYREF
  _QWORD v216[2]; // [rsp+510h] [rbp-C8h] BYREF
  __int16 v217; // [rsp+520h] [rbp-B8h]
  __m128 v218; // [rsp+540h] [rbp-98h] BYREF
  void *v219[2]; // [rsp+550h] [rbp-88h] BYREF
  _WORD v220[24]; // [rsp+560h] [rbp-78h] BYREF
  __int64 v221; // [rsp+590h] [rbp-48h]

  v4 = a3;
  v152 = a2;
  sub_21B73E0(a2, a3, 2835, 2697);
  v5 = a1[1];
  v6 = 0;
  if ( *(_DWORD *)(v5 + 60) == 15 )
  {
    v106 = *(_DWORD *)(v5 + 64);
    v6 = 1;
    if ( v106 != 27 )
      v6 = v106 == 0;
  }
  if ( (unsigned __int8)sub_21B7850(v152, 2422, 2620, v6) )
    sub_10DC5D0(v4, (__int64)"-mincremental-linker-compatible");
  sub_118FCD0(v152, v4, 0x28Fu);
  sub_21B73E0(v152, v4, 654, 1118);
  v159 = (__int64 *)a1[1];
  v135 = v159 + 2;
  v7 = *v159;
  v147 = *((_DWORD *)v159 + 17);
  v153 = v147 == 3;
  v146 = (*(__int64 (__fastcall **)(__int64 *))(v7 + 240))(v159);
  p_ptr = (char ***)&ptr;
  ptr = &v183;
  v182 = 0x600000000LL;
  sub_118FB90((__int64)&v184, v152, 0xD4Bu, 0xD9Fu, 2421);
  v8 = v184.m128i_i64[0];
  v169[0] = _mm_load_si128(&v184);
  v148 = v186;
  v169[1] = _mm_load_si128(&v185);
  if ( v186 == v184.m128i_i64[0] )
  {
    v149 = nullptr;
    v157 = 0;
    goto LABEL_35;
  }
  v155 = 0;
  v151 = nullptr;
  v157 = 0;
  v149 = nullptr;
  v154 = 0;
  v158 = 0;
  v156 = 0;
  v150 = 0;
  LOBYTE(s1) = 0;
  v9 = v4;
  v143 = _mm_loadh_ps((const double *)&off_2BAEBE0);
LABEL_6:
  v10 = *(_QWORD **)v8;
  v11 = *(_QWORD **)(*(_QWORD *)v8 + 16LL);
  v145 = *(_QWORD *)v8;
  if ( !v11 )
    v11 = v10;
  *((_BYTE *)v11 + 44) |= 1u;
  if ( *(_DWORD *)(*v10 + 40LL) == 2421 )
  {
    v12 = *(unsigned int *)(a1[1] + 48LL);
    v13 = (void **)v10[6];
    if ( (unsigned int)v12 <= 0x24 )
    {
      v14 = 0x1800000006LL;
      if ( _bittest64(&v14, v12) )
      {
        v151 = *v13;
        v15 = (const char *)v151;
        v16 = j__strlen("always");
        v17 = v16;
        if ( !v15 )
        {
          if ( v16 && j__strlen("never") && j__strlen("arm") && j__strlen("thumb") )
          {
            v150 = 0;
            goto LABEL_334;
          }
          goto LABEL_316;
        }
        v18 = j__strlen(v15);
        v150 = v18;
        if ( v18 == v17 )
        {
          if ( !v18 )
            goto LABEL_316;
          if ( !memcmp(v15, "always", v18) )
            goto LABEL_15;
          v94 = j__strlen("never");
          if ( v150 != v94 )
          {
LABEL_332:
            v95 = j__strlen("arm");
            if ( v150 != v95 )
              goto LABEL_333;
            goto LABEL_381;
          }
        }
        else
        {
          v105 = j__strlen("never");
          if ( v150 != v105 )
          {
            v107 = j__strlen("arm");
            if ( v150 != v107 )
            {
LABEL_333:
              v96 = j__strlen("thumb");
              if ( v150 != v96 )
                goto LABEL_334;
              if ( !v150 )
              {
LABEL_316:
                v150 = 0;
                goto LABEL_15;
              }
LABEL_383:
              if ( !memcmp(v151, "thumb", v150) )
                goto LABEL_15;
LABEL_334:
              sub_FC70B0((__int64)&v218, *a4, 0, 497);
              sub_AEC220((unsigned __int8 **)&v218, *(_BYTE **)(v145 + 24), *(_QWORD *)(v145 + 32));
              sub_AEC220((unsigned __int8 **)&v218, v151, v150);
              sub_AEA040((__int64)&v218);
              goto LABEL_15;
            }
            if ( !v150 )
              goto LABEL_316;
LABEL_381:
            if ( !memcmp(v151, "arm", v150) )
              goto LABEL_15;
            v108 = j__strlen("thumb");
            if ( v150 != v108 )
              goto LABEL_334;
            goto LABEL_383;
          }
          if ( !v150 )
            goto LABEL_316;
        }
        if ( !memcmp(v151, "never", v150) )
          goto LABEL_15;
        goto LABEL_332;
      }
    }
  }
  else
  {
    v13 = (void **)v10[6];
  }
  v133 = &v13[*(unsigned int *)(v145 + 56)];
  if ( v133 == v13 )
    goto LABEL_15;
  v36 = (char)s1;
  v37 = v13;
  while ( 2 )
  {
    v38 = *v37;
    v160 = v38;
    if ( v38 )
    {
      v39 = strlen(v38);
      n = v39;
      if ( v36 )
        goto LABEL_168;
      if ( *(_DWORD *)(a1[1] + 68LL) == 1 && v39 == 9 && *(_QWORD *)v38 == 0x626F2D6769626D2DLL && v38[8] == 106 )
        goto LABEL_94;
    }
    else
    {
      n = 0;
      if ( v36 )
      {
LABEL_168:
        v65 = *(unsigned int *)(v9 + 8);
        if ( v65 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
        {
          sub_2237220(v9, v9 + 16, v65 + 1, 8);
          v65 = *(unsigned int *)(v9 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v9 + 8 * v65) = v38;
        ++*(_DWORD *)(v9 + 8);
        goto LABEL_94;
      }
    }
    v218.m128_i8[0] = 61;
    v40 = sub_2246AB0(&v160, &v218, 1, 0);
    if ( v40 == -1 )
    {
      v40 = n;
      v43 = nullptr;
      v44 = v160;
      v172 = nullptr;
      v173 = nullptr;
      v45 = nullptr;
      v170 = v160;
      v41 = n;
      v171 = n;
    }
    else
    {
      v41 = n;
      v42 = v40 + 1;
      if ( v40 + 1 > n )
      {
        v42 = n;
        v43 = nullptr;
      }
      else
      {
        v43 = (char *)(n - v42);
      }
      v44 = v160;
      v173 = v43;
      v45 = (char *)v160 + v42;
      v170 = v160;
      if ( v40 > n )
        v40 = n;
      v172 = v45;
      v171 = v40;
    }
    v163 = &v170;
    v162 = a4;
    v164 = v135;
    switch ( *(_DWORD *)(a1[1] + 48LL) )
    {
      case 1:
      case 2:
      case 0x23:
      case 0x24:
        if ( v40 == 13 && *(_QWORD *)v44 == 0x63696C706D696D2DLL && v44[2] == 1764586601 && *((_BYTE *)v44 + 12) == 116 )
        {
          v137.m128i_i64[0] = (__int64)v43;
          s1 = "never";
          v218 = _mm_loadh_ps((const double *)&s1);
          s1 = "thumb";
          *(__m128 *)v219 = _mm_loadh_ps((const double *)&s1);
          sub_1189CE0((__int64)&v162, 1, (const char **)&v218, 4);
          v151 = v45;
          v150 = v137.m128i_i64[0];
          goto LABEL_94;
        }
        if ( v41 != 7 )
          goto LABEL_160;
        if ( *v44 == 1752460589 && *((_WORD *)v44 + 2) == 28021 && *((_BYTE *)v44 + 6) == 98 )
          goto LABEL_94;
        goto LABEL_70;
      case 3:
      case 4:
      case 5:
        if ( v40 != 9 || *(_QWORD *)v44 != 0x6D797370616D6D2DLL || *((_BYTE *)v44 + 8) != 115 )
          goto LABEL_160;
        v154 = 0;
        if ( v43 == byte_8 )
          v154 = *(_QWORD *)v45 == 0x746963696C706D69LL;
        s1 = "implicit";
        v218 = _mm_loadh_ps((const double *)&s1);
        sub_1189CE0((__int64)&v162, v153, (const char **)&v218, 2);
        goto LABEL_94;
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
        if ( v41 == 6 )
        {
          if ( *v44 == 1920216365 && *((_WORD *)v44 + 2) == 28769 )
          {
            v84 = *(unsigned int *)(v9 + 8);
            if ( v84 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
            {
              sub_2237220(v9, v9 + 16, v84 + 1, 8);
              v84 = *(unsigned int *)(v9 + 8);
            }
            *(_QWORD *)(*(_QWORD *)v9 + 8 * v84) = "-target-feature";
            v85 = *(unsigned int *)(v9 + 12);
            v86 = (unsigned int)(*(_DWORD *)(v9 + 8) + 1);
            *(_DWORD *)(v9 + 8) = v86;
            if ( v86 + 1 > v85 )
            {
              sub_2237220(v9, v9 + 16, v86 + 1, 8);
              v86 = *(unsigned int *)(v9 + 8);
            }
            *(_QWORD *)(*(_QWORD *)v9 + 8 * v86) = "+use-tcc-in-div";
            ++*(_DWORD *)(v9 + 8);
            goto LABEL_94;
          }
          goto LABEL_99;
        }
        if ( v41 != 7 )
        {
          if ( v41 <= 0xB )
          {
            if ( v41 == 5 )
            {
              if ( *v44 == 1936551213 && *((_BYTE *)v44 + 4) == 97 )
              {
                v155 = 1;
                goto LABEL_94;
              }
              s1 = v44;
              if ( j__strlen("-mno-msa") == 5 && *(_DWORD *)s1 == 1869507885 && *((_BYTE *)s1 + 4) == 45 )
              {
LABEL_243:
                v155 = 0;
                goto LABEL_94;
              }
LABEL_106:
              v41 = n;
              v44 = v160;
              v149 = nullptr;
              if ( n == 21 )
                goto LABEL_161;
              goto LABEL_107;
            }
          }
          else
          {
            if ( *(_QWORD *)v44 == 0x662D74666F736D2DLL && v44[2] == 1952542572 )
            {
              sub_10DC5D0(v9, (__int64)"-target-feature");
              sub_10DC5D0(v9, (__int64)"+soft-float");
              goto LABEL_94;
            }
            if ( *(_QWORD *)v44 == 0x662D647261686D2DLL && v44[2] == 1952542572 )
            {
              sub_10DC5D0(v9, (__int64)"-target-feature");
              sub_10DC5D0(v9, (__int64)"-soft-float");
              goto LABEL_94;
            }
          }
LABEL_99:
          s1 = v44;
          v52 = j__strlen("-mno-msa");
          v53 = s1;
          if ( v52 == v41 )
          {
            if ( !v41 )
              goto LABEL_243;
            v54 = memcmp(s1, "-mno-msa", v41);
            v53 = s1;
            if ( !v54 )
              goto LABEL_243;
          }
          switch ( v41 )
          {
            case 6uLL:
              if ( *(_DWORD *)v53 == 1885957421 && v53[2] == 12659 )
              {
                v149 = "+mips1";
                goto LABEL_94;
              }
              if ( *(_DWORD *)v53 == 1885957421 && v53[2] == 12915 )
              {
                v149 = "+mips2";
                goto LABEL_94;
              }
              if ( *(_DWORD *)v53 == 1885957421 && v53[2] == 13171 )
              {
                v149 = "+mips3";
                goto LABEL_94;
              }
              if ( *(_DWORD *)v53 == 1885957421 && v53[2] == 13427 )
              {
                v149 = "+mips4";
                goto LABEL_94;
              }
              if ( *(_DWORD *)v53 == 1885957421 && v53[2] == 13683 )
              {
                v149 = "+mips5";
                goto LABEL_94;
              }
              break;
            case 7uLL:
              if ( *(_DWORD *)v53 == 1885957421 && v53[2] == 13171 && *((_BYTE *)v53 + 6) == 50 )
              {
                v149 = "+mips32";
                goto LABEL_94;
              }
              if ( *(_DWORD *)v53 == 1885957421 && v53[2] == 13939 && *((_BYTE *)v53 + 6) == 52 )
              {
                v149 = "+mips64";
                goto LABEL_94;
              }
              break;
            case 9uLL:
              if ( *(_QWORD *)v53 == 0x7232337370696D2DLL && *((_BYTE *)v53 + 8) == 50 )
              {
                v149 = "+mips32r2";
                goto LABEL_94;
              }
              if ( *(_QWORD *)v53 == 0x7232337370696D2DLL && *((_BYTE *)v53 + 8) == 51 )
              {
                v149 = "+mips32r3";
                goto LABEL_94;
              }
              if ( *(_QWORD *)v53 == 0x7232337370696D2DLL && *((_BYTE *)v53 + 8) == 53 )
              {
                v149 = "+mips32r5";
                goto LABEL_94;
              }
              if ( *(_QWORD *)v53 == 0x7232337370696D2DLL && *((_BYTE *)v53 + 8) == 54 )
              {
                v149 = "+mips32r6";
                goto LABEL_94;
              }
              if ( *(_QWORD *)v53 == 0x7234367370696D2DLL && *((_BYTE *)v53 + 8) == 50 )
              {
                v149 = "+mips64r2";
                goto LABEL_94;
              }
              if ( *(_QWORD *)v53 == 0x7234367370696D2DLL && *((_BYTE *)v53 + 8) == 51 )
              {
                v149 = "+mips64r3";
                goto LABEL_94;
              }
              if ( *(_QWORD *)v53 == 0x7234367370696D2DLL && *((_BYTE *)v53 + 8) == 53 )
              {
                v149 = "+mips64r5";
                goto LABEL_94;
              }
              if ( *(_QWORD *)v53 == 0x7234367370696D2DLL && *((_BYTE *)v53 + 8) == 54 )
              {
                v149 = "+mips64r6";
                goto LABEL_94;
              }
              break;
          }
          goto LABEL_106;
        }
        if ( *v44 != 1919036717 || *((_WORD *)v44 + 2) != 24933 || *((_BYTE *)v44 + 6) != 107 )
          goto LABEL_99;
        sub_10DC5D0(v9, (__int64)"-target-feature");
        sub_10DC5D0(v9, (__int64)"-use-tcc-in-div");
        goto LABEL_94;
      case 0x1D:
      case 0x1E:
      case 0x1F:
        if ( v41 == 17 )
        {
          if ( !(*(_QWORD *)v44 ^ 0x6C6365646E752D2DLL | *((_QWORD *)v44 + 1) ^ 0x6765722D64657261LL)
            && *((_BYTE *)v44 + 16) == 115 )
          {
            goto LABEL_94;
          }
          v218.m128_u64[0] = (unsigned __int64)v44;
          s1 = &v187;
          v187 = v189;
          v189[0] = "-v8plus";
          v218.m128_u64[1] = 17;
          v221 = 0;
          v188 = 0x600000001LL;
        }
        else
        {
          v218.m128_u64[0] = (unsigned __int64)v44;
          s1 = &v187;
          v187 = v189;
          v189[0] = "-v8plus";
          v218.m128_u64[1] = v41;
          v221 = 0;
          v188 = 0x600000001LL;
          if ( v41 == 4 )
          {
            if ( *v44 != 947274029 )
            {
              v137.m128i_i64[0] = (__int64)"+v9";
              v56 = _mm_loadl_epi64(&v137);
              v137.m128i_i64[0] = (__int64)"+v8plus";
              v57 = _mm_loadl_epi64(&v137);
              v141 = (char ***)&v190;
              v190 = v192;
              v191 = 0x600000002LL;
              v192[0] = _mm_unpacklo_epi64(v57, v56);
              goto LABEL_119;
            }
            v219[0] = v220;
            v219[1] = (void *)0x600000000LL;
            sub_10E02C0((char ***)v219, (char ***)s1);
            LOBYTE(v221) = 1;
            v137.m128i_i64[0] = (__int64)"+v9";
            v56 = _mm_loadl_epi64(&v137);
            v137.m128i_i64[0] = (__int64)"+v8plus";
            v88 = _mm_loadl_epi64(&v137);
            v141 = (char ***)&v190;
            v190 = v192;
            v191 = 0x600000002LL;
            v192[0] = _mm_unpacklo_epi64(v88, v56);
LABEL_275:
            v58 = _mm_unpacklo_epi64(v88, v56);
            v137.m128i_i64[0] = (__int64)"+vis";
            v59 = _mm_loadl_epi64(&v137);
            v142 = (char ***)&v193;
            v193 = &v195;
            v194 = 0x600000003LL;
            v60 = 1;
            v165 = v58;
            v166 = v59.m128i_i64[0];
            v195 = v58;
            v196 = v59.m128i_i64[0];
            goto LABEL_122;
          }
        }
        v137.m128i_i64[0] = (__int64)"+v9";
        v56 = _mm_loadl_epi64(&v137);
        v137.m128i_i64[0] = (__int64)"+v8plus";
        v57 = _mm_loadl_epi64(&v137);
        v141 = (char ***)&v190;
        v190 = v192;
        v191 = 0x600000002LL;
        v192[0] = _mm_unpacklo_epi64(v57, v56);
        if ( v218.m128_u64[1] != 8 || *(_QWORD *)v218.m128_u64[0] != 0x73756C703876412DLL )
        {
LABEL_119:
          v58 = _mm_unpacklo_epi64(v57, v56);
          v137.m128i_i64[0] = (__int64)"+vis";
          v59 = _mm_loadl_epi64(&v137);
          v142 = (char ***)&v193;
          v193 = &v195;
          v194 = 0x600000003LL;
          v60 = 0;
          v165 = v58;
          v166 = v59.m128i_i64[0];
          v195 = v58;
          v196 = v59.m128i_i64[0];
          if ( v218.m128_u64[1] == 9 )
          {
            if ( *(_QWORD *)v218.m128_u64[0] == 0x73756C703876412DLL && *(_BYTE *)(v218.m128_u64[0] + 8) == 97 )
            {
              v139.m128i_i64[0] = v59.m128i_i64[0];
              v219[0] = v220;
              v138.m128i_i64[0] = v56.m128i_i64[0];
              v137 = v58;
              v219[1] = (void *)0x600000000LL;
              sub_10E02C0((char ***)v219, v142);
              v60 = 1;
              LOBYTE(v221) = 1;
              v58 = _mm_load_si128(&v137);
              v56 = _mm_loadl_epi64(&v138);
              v59 = _mm_loadl_epi64(&v139);
            }
            else
            {
              v60 = 0;
            }
          }
LABEL_122:
          v61 = (__m128i)_mm_loadh_ps((const double *)off_2BAEBD8);
          v174 = v58;
          v175 = v61;
          v137.m128i_i64[0] = (__int64)v197;
          v197[0] = v198;
          v198[0] = v58;
          v198[1] = v61;
          v197[1] = (void *)0x600000004LL;
          if ( !v60
            && v218.m128_u64[1] == 9
            && *(_QWORD *)v218.m128_u64[0] == 0x73756C703876412DLL
            && *(_BYTE *)(v218.m128_u64[0] + 8) == 98 )
          {
            v140.m128i_i64[1] = v59.m128i_i64[0];
            v219[0] = v220;
            v140.m128i_i64[0] = v56.m128i_i64[0];
            v139 = v61;
            v138 = v58;
            v219[1] = (void *)0x600000000LL;
            sub_10E02C0((char ***)v219, (char ***)v137.m128i_i64[0]);
            v60 = 1;
            LOBYTE(v221) = 1;
            v59 = _mm_loadl_epi64((const __m128i *)&v140.m128i_u64[1]);
            v56 = _mm_loadl_epi64(&v140);
            v61 = _mm_load_si128(&v139);
            v58 = _mm_load_si128(&v138);
          }
          v178 = v58;
          v138.m128i_i64[0] = (__int64)s;
          v179 = v61;
          v180 = "+vis3";
          s[0] = (char *)v200;
          v200[0] = v58;
          v200[1] = v61;
          v201 = "+vis3";
          s[1] = (char *)0x600000005LL;
          if ( v60 )
          {
            v204[0] = v56.m128i_i64[0];
            v140.m128i_i64[0] = (__int64)&v202;
            v202 = v204;
            v203 = 0x600000001LL;
          }
          else if ( v218.m128_u64[1] == 9
                 && *(_QWORD *)v218.m128_u64[0] == 0x73756C703876412DLL
                 && *(_BYTE *)(v218.m128_u64[0] + 8) == 100 )
          {
            v140.m128i_i64[1] = v59.m128i_i64[0];
            v219[0] = v220;
            v139.m128i_i64[0] = v56.m128i_i64[0];
            v219[1] = (void *)0x600000000LL;
            sub_10E02C0((char ***)v219, (char ***)v138.m128i_i64[0]);
            v56 = _mm_loadl_epi64(&v139);
            LOBYTE(v221) = 1;
            v140.m128i_i64[0] = (__int64)&v202;
            v59 = _mm_loadl_epi64((const __m128i *)&v140.m128i_u64[1]);
            v202 = v204;
            v204[0] = v56.m128i_i64[0];
            v203 = 0x600000001LL;
          }
          else
          {
            v140.m128i_i64[0] = (__int64)&v202;
            v202 = v204;
            v204[0] = v56.m128i_i64[0];
            v203 = 0x600000001LL;
            if ( v218.m128_u64[1] != 4 || *(_DWORD *)v218.m128_u64[0] != 964051245 )
            {
              v62 = _mm_unpacklo_epi64(v56, v59);
              v140.m128i_i64[1] = (__int64)&v205;
              v205.m128i_i64[0] = (__int64)v206;
              v206[0] = v62;
              v205.m128i_i64[1] = 0x600000002LL;
              if ( v218.m128_u64[1] != 5
                || *(_DWORD *)v218.m128_u64[0] != 964051245
                || *(_BYTE *)(v218.m128_u64[0] + 4) != 97 )
              {
                v167 = v62;
                v168 = "+vis2";
                v207.m128i_i64[0] = (__int64)&v208;
                v208 = v62;
                v209 = "+vis2";
                v207.m128i_i64[1] = 0x600000003LL;
                if ( v218.m128_u64[1] == 5
                  && *(_DWORD *)v218.m128_u64[0] == 964051245
                  && *(_BYTE *)(v218.m128_u64[0] + 4) == 98 )
                {
                  v139 = v62;
                  v219[0] = v220;
                  v219[1] = (void *)0x600000000LL;
                  sub_10E02C0((char ***)v219, (char ***)&v207);
                  v60 = 1;
                  LOBYTE(v221) = 1;
                  v62 = _mm_load_si128(&v139);
                }
LABEL_129:
                v176 = v62;
                si128 = _mm_load_si128((const __m128i *)&v143);
                v211[0] = v62;
                v177 = si128;
                v210.m128i_i64[0] = (__int64)v211;
                v211[1] = si128;
                v210.m128i_i64[1] = 0x600000004LL;
                if ( v60 )
                {
                  v212.m128i_i64[0] = (__int64)v213;
                  v212.m128i_i64[1] = 0x600000000LL;
                }
                else
                {
                  if ( v218.m128_u64[1] != 5
                    || *(_DWORD *)v218.m128_u64[0] != 964051245
                    || *(_BYTE *)(v218.m128_u64[0] + 4) != 100 )
                  {
                    v64 = (char ***)&v215;
                    v212.m128i_i64[0] = (__int64)v213;
                    v212.m128i_i64[1] = 0x600000000LL;
                    v215.m128i_i64[0] = (__int64)v216;
                    v215.m128i_i64[1] = 0x600000000LL;
LABEL_133:
                    v139.m128i_i64[0] = (__int64)v64;
                    sub_10E02C0(p_ptr, v64);
                    if ( v215.m128i_i64[0] != v139.m128i_i64[0] + 16 )
                      free((void *)v215.m128i_i64[0]);
                    if ( (_OWORD *)v210.m128i_i64[0] != v211 )
                      free((void *)v210.m128i_i64[0]);
                    if ( (__m128i *)v207.m128i_i64[0] != &v208 )
                      free((void *)v207.m128i_i64[0]);
                    if ( v205.m128i_i64[0] != v140.m128i_i64[1] + 16 )
                      free((void *)v205.m128i_i64[0]);
                    if ( v202 != (void *)(v140.m128i_i64[0] + 16) )
                      free(v202);
                    if ( s[0] != (char *)(v138.m128i_i64[0] + 16) )
                      free(s[0]);
                    if ( v197[0] != (void *)(v137.m128i_i64[0] + 16) )
                      free(v197[0]);
                    if ( v193 != v142 + 2 )
                      free(v193);
                    if ( v190 != v141 + 2 )
                      free(v190);
                    if ( v187 != (char *)s1 + 16 )
                      free(v187);
                    if ( (_BYTE)v221 && v219[0] != v220 )
                      free(v219[0]);
                    if ( (_DWORD)v182 )
                      goto LABEL_94;
                    v41 = n;
                    v44 = v160;
                    goto LABEL_160;
                  }
                  v219[1] = (void *)0x600000000LL;
                  v219[0] = v220;
                  sub_10E02C0((char ***)v219, (char ***)&v210);
                  LOBYTE(v221) = 1;
                  v212.m128i_i64[0] = (__int64)v213;
                  v212.m128i_i64[1] = 0x600000000LL;
                }
                v64 = (char ***)&v215;
                v215.m128i_i64[0] = (__int64)v216;
                v215.m128i_i64[1] = 0x600000000LL;
                if ( LODWORD(v219[1]) )
                {
                  v139.m128i_i64[0] = (__int64)&v215;
                  sub_10E02C0((char ***)&v215, (char ***)v219);
                  v64 = (char ***)v139.m128i_i64[0];
                }
                goto LABEL_133;
              }
              v139 = v62;
              v219[0] = v220;
              v219[1] = (void *)0x600000000LL;
              sub_10E02C0((char ***)v219, (char ***)v140.m128i_i64[1]);
              LOBYTE(v221) = 1;
              v62 = _mm_load_si128(&v139);
LABEL_128:
              v167 = v62;
              v168 = "+vis2";
              v209 = "+vis2";
              v207.m128i_i64[0] = (__int64)&v208;
              v207.m128i_i64[1] = 0x600000003LL;
              v60 = 1;
              v208 = v62;
              goto LABEL_129;
            }
            v140.m128i_i64[1] = v59.m128i_i64[0];
            v219[0] = v220;
            v139.m128i_i64[0] = v56.m128i_i64[0];
            v219[1] = (void *)0x600000000LL;
            sub_10E02C0((char ***)v219, (char ***)&v202);
            LOBYTE(v221) = 1;
            v56 = _mm_loadl_epi64(&v139);
            v59 = _mm_loadl_epi64((const __m128i *)&v140.m128i_u64[1]);
          }
          v62 = _mm_unpacklo_epi64(v56, v59);
          v140.m128i_i64[1] = (__int64)&v205;
          v205.m128i_i64[0] = (__int64)v206;
          v205.m128i_i64[1] = 0x600000002LL;
          v206[0] = v62;
          goto LABEL_128;
        }
        v138.m128i_i64[0] = v57.m128i_i64[0];
        v219[0] = v220;
        v137.m128i_i64[0] = v56.m128i_i64[0];
        v219[1] = (void *)0x600000000LL;
        sub_10E02C0((char ***)v219, v141);
        LOBYTE(v221) = 1;
        v56 = _mm_loadl_epi64(&v137);
        v88 = _mm_loadl_epi64(&v138);
        goto LABEL_275;
      case 0x25:
      case 0x26:
        if ( v40 != 19 )
        {
          if ( v40 != 20
            || *(_QWORD *)v44 ^ 0x78616C65726D2D2DLL | *((_QWORD *)v44 + 1) ^ 0x7461636F6C65722DLL
            || v44[4] != 1936617321 )
          {
            goto LABEL_84;
          }
LABEL_194:
          v146 = 0;
          if ( v43 == (_BYTE *)&dword_0 + 3 )
          {
            if ( *(_WORD *)v45 != 25977 || (v68 = 0, v45[2] != 115) )
              v68 = 1;
            v146 = v68 == 0;
          }
          s1 = "no";
          *(__m128 *)s = _mm_loadh_ps((const double *)&s1);
          if ( v147 != 3 )
          {
            sub_FC70B0((__int64)&v218, *a4, 0, 495);
            v207.m128i_i64[0] = (__int64)"=";
            LOWORD(v209) = 259;
            v214 = 261;
            v212.m128i_i64[0] = (__int64)*v163;
            v69 = (__int64)v163[1];
            v217 = 259;
            v212.m128i_i64[1] = v69;
            v215.m128i_i64[0] = (__int64)"-Wa,";
            sub_A41580(&v210, &v215, &v212, v70, v71, v72);
            sub_A41580(&v205, &v210, &v207, v73, v74, v75);
            sub_2253560(&v202, &v205);
            sub_AEC220((unsigned __int8 **)&v218, v202, v203);
            sub_AEC220((unsigned __int8 **)&v218, (_BYTE *)*v164, v164[1]);
            v76 = v202;
            if ( v202 == v204 )
            {
LABEL_201:
              sub_AEA040((__int64)&v218);
LABEL_94:
              v36 = 0;
              goto LABEL_95;
            }
LABEL_200:
            operator delete(v76);
            goto LABEL_201;
          }
          v77 = s[0];
          if ( s[0] )
          {
            s1 = v43;
            v78 = (void *)strlen(s[0]);
            v43 = (char *)s1;
            if ( v78 != s1 )
            {
              v80 = s[1];
              if ( !s[1] )
              {
                if ( !s1 )
                  goto LABEL_94;
LABEL_236:
                sub_FC70B0((__int64)&v218, *a4, 0, 497);
                v82 = (__int64)*v163;
                v83 = v163[1];
                v215.m128i_i64[0] = (__int64)"-Wa,";
                v217 = 1283;
                v216[1] = v83;
                v212.m128i_i64[0] = (__int64)&v215;
                v213[0] = "=";
                v214 = 770;
                v216[0] = v82;
                v212.m128i_i64[1] = 0;
                sub_2253560(&v210, &v212);
                sub_AEC220((unsigned __int8 **)&v218, v210.m128i_i64[0], v210.m128i_i64[1]);
                sub_AEC220((unsigned __int8 **)&v218, v163[2], (signed __int64)v163[3]);
                v76 = (void *)v210.m128i_i64[0];
                if ( (_OWORD *)v210.m128i_i64[0] == v211 )
                  goto LABEL_201;
                goto LABEL_200;
              }
LABEL_233:
              s1 = v43;
              v81 = (void *)strlen(v80);
              if ( v81 == s1 && (!s1 || !memcmp(v80, v45, (size_t)s1)) )
                goto LABEL_94;
              goto LABEL_236;
            }
            if ( !s1 )
              goto LABEL_94;
            v79 = memcmp(v77, v45, (size_t)s1);
            v43 = (char *)s1;
            if ( !v79 )
              goto LABEL_94;
          }
          else if ( !v43 )
          {
            goto LABEL_94;
          }
          v80 = s[1];
          if ( !s[1] )
            goto LABEL_236;
          goto LABEL_233;
        }
        if ( !(*(_QWORD *)v44 ^ 0x2D78616C65726D2DLL | *((_QWORD *)v44 + 1) ^ 0x697461636F6C6572LL)
          && *((_WORD *)v44 + 8) == 28271
          && *((_BYTE *)v44 + 18) == 115 )
        {
          goto LABEL_194;
        }
LABEL_84:
        if ( v41 == 9 )
        {
          if ( *(_QWORD *)v44 == 0x7661326573736D2DLL && *((_BYTE *)v44 + 8) == 120 )
          {
            sub_10DC5D0(v9, (__int64)"-msse2avx");
            goto LABEL_94;
          }
LABEL_86:
          if ( *(_QWORD *)v44 == 0x7261772D6F6E2D2DLL && *((_BYTE *)v44 + 8) == 110 )
            goto LABEL_110;
          v41 = 9;
          goto LABEL_70;
        }
LABEL_160:
        if ( v41 == 21 )
        {
LABEL_161:
          if ( !(*(_QWORD *)v44 ^ 0x635F6563726F662DLL | *((_QWORD *)v44 + 1) ^ 0x7079746275737570LL)
            && v44[4] == 1279352677
            && *((_BYTE *)v44 + 20) == 76 )
          {
            goto LABEL_94;
          }
          goto LABEL_70;
        }
LABEL_107:
        switch ( v41 )
        {
          case 2uLL:
            if ( *(_WORD *)v44 == 19501 )
            {
              v67 = *(unsigned int *)(v9 + 8);
              if ( v67 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
              {
                sub_2237220(v9, v9 + 16, v67 + 1, 8);
                v67 = *(unsigned int *)(v9 + 8);
              }
              v36 = 0;
              *(_QWORD *)(*(_QWORD *)v9 + 8 * v67) = "-msave-temp-labels";
              ++*(_DWORD *)(v9 + 8);
              goto LABEL_95;
            }
            if ( *(_WORD *)v44 == 22317 )
            {
LABEL_110:
              v55 = *(unsigned int *)(v9 + 8);
              if ( v55 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
              {
                sub_2237220(v9, v9 + 16, v55 + 1, 8);
                v55 = *(unsigned int *)(v9 + 8);
              }
              v36 = 0;
              *(_QWORD *)(*(_QWORD *)v9 + 8 * v55) = "-massembler-no-warn";
              ++*(_DWORD *)(v9 + 8);
              goto LABEL_95;
            }
            break;
          case 0x10uLL:
            if ( !(*(_QWORD *)v44 ^ 0x2D6C617461662D2DLL | *((_QWORD *)v44 + 1) ^ 0x73676E696E726177LL) )
            {
              v66 = *(unsigned int *)(v9 + 8);
              if ( v66 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
              {
                sub_2237220(v9, v9 + 16, v66 + 1, 8);
                v66 = *(unsigned int *)(v9 + 8);
              }
              v36 = 0;
              *(_QWORD *)(*(_QWORD *)v9 + 8 * v66) = "-massembler-fatal-warnings";
              ++*(_DWORD *)(v9 + 8);
              goto LABEL_95;
            }
            break;
          case 9uLL:
            goto LABEL_86;
          case 0xDuLL:
            if ( *(_QWORD *)v44 == 0x636578656F6E2D2DLL && v44[2] == 1667331187 && *((_BYTE *)v44 + 12) == 107 )
            {
              v157 = 1;
              v36 = 0;
              goto LABEL_95;
            }
            break;
          default:
            if ( v41 > 0x17
              && !(*(_QWORD *)v44 ^ 0x736572706D6F632DLL | *((_QWORD *)v44 + 1) ^ 0x2D67756265642D73LL)
              && *((_QWORD *)v44 + 2) == 0x736E6F6974636573LL )
            {
              goto LABEL_77;
            }
            break;
        }
LABEL_70:
        s1 = v44;
        v46 = j__strlen("--compress-debug-sections");
        v44 = s1;
        if ( v46 <= v41 )
        {
          if ( !v46 )
            goto LABEL_77;
          v47 = memcmp(s1, "--compress-debug-sections", v46);
          v44 = s1;
          if ( !v47 )
            goto LABEL_77;
        }
        s1 = v44;
        v48 = j__strlen("-nocompress-debug-sections");
        v44 = s1;
        if ( v48 == v41 )
        {
          if ( !v41 )
            goto LABEL_77;
          v89 = memcmp(s1, "-nocompress-debug-sections", v41);
          v44 = s1;
          if ( !v89 )
            goto LABEL_77;
          v90 = j__strlen("--nocompress-debug-sections");
          v44 = s1;
          if ( v41 == v90 )
          {
LABEL_76:
            s1 = v44;
            v50 = memcmp(v44, "--nocompress-debug-sections", v41);
            v44 = s1;
            if ( !v50 )
              goto LABEL_77;
          }
          s1 = v44;
          v91 = j__strlen("--crel");
          v92 = s1;
          if ( v41 != v91 )
            goto LABEL_351;
          goto LABEL_288;
        }
        v49 = j__strlen("--nocompress-debug-sections");
        v44 = s1;
        if ( v49 == v41 )
        {
          if ( v41 )
            goto LABEL_76;
LABEL_77:
          v51 = *(unsigned int *)(v9 + 8);
          if ( v51 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
          {
            s1 = v44;
            sub_2237220(v9, v9 + 16, v51 + 1, 8);
            v51 = *(unsigned int *)(v9 + 8);
            v44 = s1;
          }
          v36 = 0;
          ++v37;
          *(_QWORD *)(*(_QWORD *)v9 + 8 * v51) = v44;
          ++*(_DWORD *)(v9 + 8);
          if ( v133 == v37 )
          {
LABEL_80:
            LOBYTE(s1) = v36;
            v8 = *(_QWORD *)&v169[0];
            goto LABEL_15;
          }
          continue;
        }
        v93 = j__strlen("--crel");
        v92 = s1;
        if ( v93 != v41 )
        {
LABEL_351:
          s1 = v92;
          v97 = j__strlen("--no-crel");
          v98 = s1;
          if ( v97 != v41 )
            goto LABEL_360;
          if ( !v41 )
            goto LABEL_397;
          goto LABEL_353;
        }
        if ( !v41 )
        {
          v156 = 1;
          v36 = 0;
          goto LABEL_95;
        }
LABEL_288:
        s1 = v92;
        if ( !memcmp(v92, "--crel", v41) )
        {
          v156 = 1;
          v36 = 0;
          goto LABEL_95;
        }
        v103 = j__strlen("--no-crel");
        v98 = s1;
        if ( v41 != v103 )
        {
LABEL_360:
          s1 = v98;
          v104 = j__strlen("--allow-experimental-crel");
          v100 = s1;
          if ( v104 != v41 )
            goto LABEL_355;
          if ( !v41 )
            goto LABEL_401;
LABEL_362:
          s1 = v100;
          if ( !memcmp(v100, "--allow-experimental-crel", v41) )
          {
LABEL_401:
            v158 = 1;
            v36 = 0;
            goto LABEL_95;
          }
          v100 = s1;
          goto LABEL_355;
        }
LABEL_353:
        s1 = v98;
        if ( !memcmp(v98, "--no-crel", v41) )
        {
LABEL_397:
          v156 = 0;
          v36 = 0;
          goto LABEL_95;
        }
        v99 = j__strlen("--allow-experimental-crel");
        v100 = s1;
        if ( v41 == v99 )
          goto LABEL_362;
LABEL_355:
        s1 = v100;
        v101 = j__strlen("-I");
        v36 = sub_9C7D00((__int64)&v160, "-I", v101);
        if ( v36 )
        {
          sub_10DC5D0(v9, (__int64)s1);
          v102 = j__strlen("-I");
          if ( n == v102 )
          {
            if ( n )
              v36 = memcmp(v160, "-I", n) == 0;
            goto LABEL_95;
          }
          goto LABEL_94;
        }
        v109 = j__strlen("-gdwarf-");
        if ( sub_9C7D00((__int64)&v160, "-gdwarf-", v109) )
        {
          v112 = sub_11BB730(v160, n, v110, v111, s1);
          if ( v112 )
            sub_118A940(v152, v9, 4u, v112, 0);
          else
            sub_10DC5D0(v9, (__int64)v160);
          goto LABEL_95;
        }
        v113 = j__strlen("-mcpu");
        if ( sub_9C7D00((__int64)&v160, "-mcpu", v113) )
          goto LABEL_94;
        v114 = j__strlen("-mfpu");
        if ( sub_9C7D00((__int64)&v160, "-mfpu", v114) )
          goto LABEL_94;
        v115 = j__strlen("-mhwdiv");
        if ( sub_9C7D00((__int64)&v160, "-mhwdiv", v115) )
          goto LABEL_94;
        v116 = j__strlen("-march");
        if ( sub_9C7D00((__int64)&v160, "-march", v116) )
          goto LABEL_94;
        if ( j__strlen("-defsym") == v41 )
        {
          if ( !v41 || !memcmp(s1, "-defsym", v41) )
            goto LABEL_426;
          v117 = j__strlen("--defsym");
          v118 = s1;
          if ( v41 != v117 )
          {
            if ( v41 != j__strlen("-fdebug-compilation-dir") )
              goto LABEL_419;
            v119 = s1;
LABEL_412:
            if ( memcmp(v119, "-fdebug-compilation-dir", v41) )
              goto LABEL_419;
LABEL_413:
            v36 = 1;
            sub_10DC5D0(v9, (__int64)"-fdebug-compilation-dir");
            goto LABEL_95;
          }
        }
        else
        {
          v120 = j__strlen("--defsym");
          v118 = s1;
          if ( v120 != v41 )
          {
            v131 = j__strlen("-fdebug-compilation-dir");
            v119 = s1;
            if ( v131 != v41 )
            {
LABEL_419:
              v122 = j__strlen("-fdebug-compilation-dir=");
              v36 = sub_11899B0((const void **)&v160, "-fdebug-compilation-dir=", v122);
              if ( v36 )
              {
                v36 = 0;
                sub_10DC5D0(v9, (__int64)"-fdebug-compilation-dir");
                sub_10DC5D0(v9, (__int64)v160);
              }
              else
              {
                v123 = j__strlen("--version");
                if ( n == v123 && (!n || !memcmp(v160, "--version", n)) )
                {
                  v124 = sub_227D600();
                  sub_10DE280((__int64)a4, (__int64)a1, v124);
                }
                else
                {
                  sub_FC70B0((__int64)&v218, *a4, 0, 497);
                  sub_AEC220((unsigned __int8 **)&v218, *(_BYTE **)(v145 + 24), *(_QWORD *)(v145 + 32));
                  sub_AEC220((unsigned __int8 **)&v218, v160, n);
                  sub_AEA040((__int64)&v218);
                }
              }
              goto LABEL_95;
            }
            if ( !v41 )
              goto LABEL_413;
            goto LABEL_412;
          }
          if ( !v41 )
            goto LABEL_426;
        }
        s1 = v118;
        if ( memcmp(v118, "--defsym", v41) )
        {
          v121 = j__strlen("-fdebug-compilation-dir");
          v119 = s1;
          if ( v41 != v121 )
            goto LABEL_419;
          goto LABEL_412;
        }
LABEL_426:
        if ( *(_DWORD *)(v145 + 56) != 2 )
        {
          sub_FC70B0((__int64)&v218, *a4, 0, 348);
          sub_AEC220((unsigned __int8 **)&v218, v160, n);
          sub_AEA040((__int64)&v218);
          goto LABEL_438;
        }
        v125 = *(const char **)(*(_QWORD *)(v145 + 48) + 8LL);
        v126 = 0;
        v218.m128_u64[0] = (unsigned __int64)v125;
        if ( v125 )
          v126 = j__strlen(v125);
        v218.m128_u64[1] = v126;
        v215.m128i_i8[0] = 61;
        v127 = sub_2246AB0(&v218, &v215, 1, 0);
        if ( v127 != -1 )
        {
          v128 = v127 + 1;
          if ( v127 + 1 <= v218.m128_u64[1] )
          {
            v129 = v218.m128_u64[1] - v128;
            v130 = (_BYTE *)(v218.m128_u64[0] + v128);
            if ( v127 > v218.m128_u64[1] )
              v127 = v218.m128_u64[1];
            if ( v127 && v129 )
            {
              if ( (unsigned __int8)sub_2247A50(v130, v129, 0, &v218) )
              {
                sub_FC70B0((__int64)&v218, *a4, 0, 349);
                sub_AEC220((unsigned __int8 **)&v218, v130, v129);
                sub_AEA040((__int64)&v218);
                goto LABEL_438;
              }
              v36 = 1;
              sub_10DC5D0(v9, (__int64)"--defsym");
LABEL_95:
              if ( v133 == ++v37 )
                goto LABEL_80;
              continue;
            }
          }
        }
        sub_FC70B0((__int64)&v218, *a4, 0, 348);
        sub_1188FA0((unsigned __int8 **)&v218, (__int64)v125);
        sub_AEA040((__int64)&v218);
LABEL_438:
        v8 = *(_QWORD *)&v169[0];
        LOBYTE(s1) = 0;
LABEL_15:
        v19 = *((_QWORD *)&v169[0] + 1);
        v8 += 8;
        *(_QWORD *)&v169[0] = v8;
        if ( v8 == *((_QWORD *)&v169[0] + 1) )
        {
LABEL_21:
          if ( v148 == v8 )
            goto LABEL_22;
          goto LABEL_6;
        }
        while ( 1 )
        {
          v20 = *(_QWORD *)v8;
          v21 = v169;
          if ( *(_QWORD *)v8 )
            break;
LABEL_20:
          v8 += 8;
          *(_QWORD *)&v169[0] = v8;
          if ( v19 == v8 )
            goto LABEL_21;
        }
        while ( 1 )
        {
          v22 = *((unsigned int *)v21 + 4);
          if ( !(_DWORD)v22 )
            goto LABEL_20;
          if ( (unsigned __int8)sub_21B9810(v20, v22) )
            break;
          v21 = (_OWORD *)((char *)v21 + 4);
          if ( (_OWORD *)((char *)v169 + 12) == v21 )
            goto LABEL_20;
        }
        v8 = *(_QWORD *)&v169[0];
        if ( v148 != *(_QWORD *)&v169[0] )
          goto LABEL_6;
LABEL_22:
        v4 = v9;
        if ( v150 )
        {
          sub_10DC5D0(v9, (__int64)"-mllvm");
          v218.m128_u64[0] = (unsigned __int64)"-arm-implicit-it=";
          v220[0] = 1283;
          v219[0] = v151;
          v219[1] = (void *)v150;
          v23 = sub_10DA6C0(v152, (__int64)&v218);
          sub_10DC5D0(v9, v23);
        }
        if ( v156 )
        {
          if ( v158 )
          {
            v24 = v159;
            if ( *((_DWORD *)v159 + 17) == 3 )
              goto LABEL_27;
LABEL_28:
            sub_FC70B0((__int64)&v218, *a4, 0, 495);
            sub_1188FA0((unsigned __int8 **)&v218, (__int64)"-Wa,--crel");
            v25 = (_BYTE *)a4[118];
            v26 = (__int64)&v25[a4[119]];
            v215.m128i_i64[0] = (__int64)v216;
            sub_1189220(&v215, v25, v26);
            sub_AEC220((unsigned __int8 **)&v218, v215.m128i_i64[0], v215.m128i_i64[1]);
            if ( (_QWORD *)v215.m128i_i64[0] != v216 )
              operator delete((void *)v215.m128i_i64[0]);
            sub_AEA040((__int64)&v218);
          }
          else
          {
            sub_FC70B0((__int64)&v218, *a4, 0, 355);
            sub_AEA040((__int64)&v218);
            v24 = v159;
            if ( *((_DWORD *)v159 + 17) != 3 )
              goto LABEL_28;
LABEL_27:
            if ( (unsigned int)(*((_DWORD *)v24 + 12) - 16) <= 3 )
              goto LABEL_28;
            sub_10DC5D0(v9, (__int64)"--crel");
          }
        }
        if ( v154 )
          sub_10DC5D0(v9, (__int64)"-mmapsyms=implicit");
        if ( v155 )
          sub_10DC5D0(v9, (__int64)"-mmsa");
LABEL_35:
        if ( v146 )
        {
          if ( !v157 )
            goto LABEL_37;
LABEL_370:
          sub_10DC5D0(v4, (__int64)"-mnoexecstack");
        }
        else
        {
          sub_10DC5D0(v4, (__int64)"-mrelax-relocations=no");
          if ( v157 )
            goto LABEL_370;
        }
LABEL_37:
        v27 = (__int64)v149;
        if ( v149 )
        {
          sub_10DC5D0(v4, (__int64)"-target-feature");
          sub_10DC5D0(v4, v27);
        }
        v28 = (char *)ptr;
        v29 = (char *)ptr + 8 * (unsigned int)v182;
        if ( ptr != v29 )
        {
          v30 = *(unsigned int *)(v4 + 8);
          do
          {
            v31 = *(_QWORD *)v28;
            if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
            {
              sub_2237220(v4, v4 + 16, v30 + 1, 8);
              v30 = *(unsigned int *)(v4 + 8);
            }
            *(_QWORD *)(*(_QWORD *)v4 + 8 * v30) = "-target-feature";
            v32 = *(unsigned int *)(v4 + 12);
            v33 = (unsigned int)(*(_DWORD *)(v4 + 8) + 1);
            *(_DWORD *)(v4 + 8) = v33;
            if ( v33 + 1 > v32 )
            {
              sub_2237220(v4, v4 + 16, v33 + 1, 8);
              *(_QWORD *)(*(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8)) = v31;
            }
            else
            {
              *(_QWORD *)(*(_QWORD *)v4 + 8 * v33) = v31;
            }
            v28 += 8;
            v30 = (unsigned int)(*(_DWORD *)(v4 + 8) + 1);
            *(_DWORD *)(v4 + 8) = v30;
          }
          while ( v29 != v28 );
        }
        if ( *(_DWORD *)(*a1 + 24LL) )
          sub_118FCD0(v152, v4, 0x28Au);
        v34 = getenv("AS_SECURE_LOG_FILE");
        if ( v34 )
        {
          sub_10DC5D0(v4, (__int64)"-as-secure-log-file");
          v220[0] = 257;
          if ( *v34 )
          {
            v218.m128_u64[0] = (unsigned __int64)v34;
            LOBYTE(v220[0]) = 3;
          }
          v35 = sub_10DA6C0(v152, (__int64)&v218);
          sub_10DC5D0(v4, v35);
        }
        if ( ptr != p_ptr + 2 )
          free(ptr);
        return;
      case 0x37:
      case 0x38:
        if ( v41 != 15 )
          goto LABEL_160;
        if ( *(_QWORD *)v44 != 0x7079742D6F6E2D2DLL
          || v44[2] != 1751330149
          || *((_WORD *)v44 + 6) != 25445
          || *((_BYTE *)v44 + 14) != 107 )
        {
          goto LABEL_70;
        }
        v87 = *(unsigned int *)(v9 + 8);
        if ( v87 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
        {
          sub_2237220(v9, v9 + 16, v87 + 1, 8);
          v87 = *(unsigned int *)(v9 + 8);
        }
        *(_QWORD *)(*(_QWORD *)v9 + 8 * v87) = "-mno-type-check";
        ++*(_DWORD *)(v9 + 8);
        goto LABEL_94;
      default:
        goto LABEL_160;
    }
  }
}
