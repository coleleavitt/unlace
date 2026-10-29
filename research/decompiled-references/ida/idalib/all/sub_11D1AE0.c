void __fastcall sub_11D1AE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char **a4,
        __int64 a5,
        _QWORD *a6,
        double a7,
        double a8)
{
  _QWORD *v8; // rbx
  _DWORD *v9; // r13
  char *v10; // r12
  __int64 *v11; // r15
  __m128i *v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // r14
  _QWORD *v16; // r15
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // r14
  _QWORD *v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // r14
  _QWORD *v24; // r15
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  void *v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  _QWORD *v44; // r14
  _QWORD *v45; // r15
  __int64 v46; // rax
  const char *v47; // r14
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  _QWORD *v52; // r15
  _QWORD *v53; // r14
  __m128 v54; // xmm0
  __int64 v55; // rbx
  __int64 v56; // rax
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  unsigned __int8 *v64; // r14
  _BYTE *v65; // rsi
  signed __int64 v66; // r15
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  void **v72; // r15
  _BYTE *v73; // rdi
  __int64 v74; // rax
  void **v75; // r14
  __int64 v76; // rax
  void **v77; // rdx
  void **v78; // r15
  __m128i *v79; // r12
  _QWORD *v80; // rbp
  void **v81; // rbx
  void **v82; // rdi
  void **v83; // rdi
  void **v84; // r15
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __m128 *v88; // rax
  __int64 v89; // rax
  unsigned __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // rdx
  _QWORD *v93; // r14
  _QWORD *v94; // r15
  const char *v95; // r14
  __int64 v96; // rax
  unsigned __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  void *v101; // rax
  __int64 v102; // rcx
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rcx
  __int64 v105; // rax
  unsigned __int64 v106; // rdx
  __int64 v107; // rax
  const char *v108; // r14
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  __int64 v111; // rdx
  _QWORD *v112; // r14
  _QWORD *v113; // r15
  const char *v114; // r15
  size_t v115; // rax
  size_t v116; // r14
  unsigned __int64 *v117; // rdi
  __int64 v118; // rax
  unsigned __int64 v119; // rdx
  __int64 v120; // rax
  void *v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // r8
  bool v126; // r14
  unsigned __int64 v127; // rax
  __int64 v128; // rdx
  _QWORD *v129; // r14
  _QWORD *v130; // r15
  void **v131; // r14
  void **v132; // r15
  void **v133; // r14
  void **v134; // r15
  void **v135; // r14
  void **v136; // r15
  void **v137; // r14
  void **v138; // r15
  void **v139; // r14
  void **v140; // r15
  __int64 v141; // rbx
  const __m128i *v142; // r13
  __int64 v143; // r14
  __int64 v144; // r15
  __int64 v145; // rdx
  __int64 v146; // rsi
  int v147; // eax
  __int64 v148; // rcx
  __int64 v149; // rsi
  _QWORD *v150; // rbp
  void (__fastcall *v151)(_QWORD *); // rax
  __int64 v152; // r13
  __int64 v153; // rbx
  void *v154; // rdi
  _QWORD *v155; // rdi
  _QWORD *v156; // rdi
  void **v157; // r13
  void **v158; // rbx
  void *v159; // rdi
  _QWORD *v160; // rdi
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 (__fastcall *v164)(__int64, __int64, __int64); // rcx
  __int64 v165; // rax
  unsigned __int64 v166; // rdx
  __int64 v167; // rax
  __int64 v168; // rcx
  unsigned __int64 v169; // rdx
  __m128 *v170; // rax
  __int64 v171; // rax
  _QWORD *v172; // r15
  __int64 v173; // rbx
  const char **v174; // r15
  const char *v175; // rdx
  __int64 v176; // rcx
  size_t v177; // rax
  __int64 v178; // rax
  __int64 v179; // rcx
  unsigned __int64 v180; // rdx
  __int64 v181; // rax
  __int64 v182; // rcx
  unsigned __int64 v183; // rdx
  const char *v184; // r14
  __int64 v185; // rax
  __int64 (__fastcall *v186)(_QWORD *, const char *, size_t); // r15
  size_t v187; // rax
  unsigned __int64 v188; // rbx
  __int64 v189; // rdi
  __int64 v190; // rax
  unsigned __int64 v191; // rdx
  __int64 v192; // rax
  unsigned __int64 v193; // rdx
  size_t v194; // rdx
  __int64 v195; // rdx
  __int64 v196; // rdx
  int v197; // eax
  __int64 v198; // rax
  unsigned __int64 v199; // rdx
  __int64 v200; // rax
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rax
  __int64 v204; // rbx
  __int64 v205; // rbp
  void *v206; // rdi
  __int64 *v212; // [rsp+40h] [rbp-318h]
  __int64 v213; // [rsp+40h] [rbp-318h]
  const char *v214; // [rsp+40h] [rbp-318h]
  __int64 v215; // [rsp+40h] [rbp-318h]
  __int64 v216; // [rsp+40h] [rbp-318h]
  __int64 v217; // [rsp+40h] [rbp-318h]
  void *src; // [rsp+48h] [rbp-310h] BYREF
  __m128i *v219; // [rsp+50h] [rbp-308h]
  void **v220; // [rsp+58h] [rbp-300h]
  void *v221; // [rsp+60h] [rbp-2F8h] BYREF
  size_t n; // [rsp+68h] [rbp-2F0h]
  _QWORD v223[2]; // [rsp+70h] [rbp-2E8h] BYREF
  __int16 v224; // [rsp+80h] [rbp-2D8h]
  void *v225; // [rsp+90h] [rbp-2C8h] BYREF
  __int64 v226; // [rsp+98h] [rbp-2C0h]
  _BYTE v227[128]; // [rsp+A0h] [rbp-2B8h] BYREF
  void *v228; // [rsp+120h] [rbp-238h] BYREF
  __m128i si128; // [rsp+128h] [rbp-230h]
  _BYTE v230[136]; // [rsp+138h] [rbp-220h] BYREF
  _BYTE ptr[24]; // [rsp+1C0h] [rbp-198h] BYREF
  void *v232; // [rsp+1E0h] [rbp-178h]
  void *v233; // [rsp+200h] [rbp-158h]
  void *v234; // [rsp+228h] [rbp-130h]
  void **v235; // [rsp+230h] [rbp-128h]
  void *v236; // [rsp+240h] [rbp-118h]
  void **v237; // [rsp+248h] [rbp-110h]
  void *v238; // [rsp+258h] [rbp-100h]
  void **v239; // [rsp+260h] [rbp-F8h]
  void *v240; // [rsp+270h] [rbp-E8h]
  void **v241; // [rsp+278h] [rbp-E0h]
  void *v242; // [rsp+288h] [rbp-D0h]
  void **v243; // [rsp+290h] [rbp-C8h]
  void *v244; // [rsp+2D0h] [rbp-88h]
  void *v245; // [rsp+300h] [rbp-58h]

  v8 = a6;
  v9 = *(_DWORD **)(a1 + 24);
  v10 = (char *)&v225;
  v11 = *((__int64 **)v9 + 1);
  v12 = (__m128i *)ptr;
  v228 = v230;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  v226 = 0x1000000000LL;
  v212 = v11;
  v225 = v227;
  sub_21B7CF0(a6, 36);
  sub_21B7CF0(v8, 345);
  sub_21B7CF0(v8, 3480);
  if ( v11[62] )
  {
    sub_C05100((__int64)ptr, "--sysroot=", (__int64)(v11 + 61));
    v38 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 16LL))(
                    v8,
                    *(_QWORD *)ptr,
                    *(_QWORD *)&ptr[8]);
    v39 = (unsigned int)v226;
    v40 = (unsigned int)v226 + 1LL;
    if ( v40 > HIDWORD(v226) )
    {
      src = v38;
      sub_2237220(&v225, v227, v40, 8);
      v39 = (unsigned int)v226;
      v38 = src;
    }
    *((_QWORD *)v225 + v39) = v38;
    LODWORD(v226) = v226 + 1;
    if ( *(_BYTE **)ptr != &ptr[16] )
      operator delete(*(void **)ptr);
  }
  *(_DWORD *)ptr = 3132;
  v13 = sub_21B6DA0(v8, ptr, 1);
  v14 = v8[1];
  v15 = (_QWORD *)(v14 + 8LL * (unsigned int)v13);
  v16 = (_QWORD *)(v14 + 8 * HIDWORD(v13));
  if ( v15 != v16 )
  {
    while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 3132) )
    {
      if ( v16 == ++v15 )
        goto LABEL_6;
    }
    if ( v16 != v15 )
    {
      do
      {
        v32 = *v15;
        if ( *(_QWORD *)(*v15 + 16LL) )
          v32 = *(_QWORD *)(*v15 + 16LL);
        ++v15;
        *(_BYTE *)(v32 + 44) |= 1u;
        if ( v15 == v16 )
          break;
        while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, 3132) )
        {
          if ( v16 == ++v15 )
            goto LABEL_37;
        }
      }
      while ( v15 != v16 );
LABEL_37:
      v33 = (unsigned int)v226;
      v34 = (unsigned int)v226 + 1LL;
      if ( v34 > HIDWORD(v226) )
      {
        sub_2237220(&v225, v227, v34, 8);
        v33 = (unsigned int)v226;
      }
      *((_QWORD *)v225 + v33) = "-pie";
      LODWORD(v226) = v226 + 1;
    }
  }
LABEL_6:
  *(_DWORD *)ptr = 3203;
  v17 = sub_21B6DA0(v8, ptr, 1);
  v18 = v8[1];
  v19 = (_QWORD *)(v18 + 8LL * (unsigned int)v17);
  v20 = (_QWORD *)(v18 + 8 * HIDWORD(v17));
  if ( v19 != v20 )
  {
    while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3203) )
    {
      if ( v20 == ++v19 )
        goto LABEL_10;
    }
    if ( v19 != v20 )
    {
      do
      {
        v35 = *v19;
        if ( *(_QWORD *)(*v19 + 16LL) )
          v35 = *(_QWORD *)(*v19 + 16LL);
        ++v19;
        *(_BYTE *)(v35 + 44) |= 1u;
        if ( v19 == v20 )
          break;
        while ( !*v19 || !(unsigned __int8)sub_21B9810(*v19, 3203) )
        {
          if ( v20 == ++v19 )
            goto LABEL_49;
        }
      }
      while ( v20 != v19 );
LABEL_49:
      v36 = (unsigned int)v226;
      v37 = (unsigned int)v226 + 1LL;
      if ( v37 > HIDWORD(v226) )
      {
        sub_2237220(&v225, v227, v37, 8);
        v36 = (unsigned int)v226;
      }
      *((_QWORD *)v225 + v36) = "-export-dynamic";
      LODWORD(v226) = v226 + 1;
    }
  }
LABEL_10:
  *(_DWORD *)ptr = 3321;
  v21 = sub_21B6DA0(v8, ptr, 1);
  v22 = v8[1];
  v23 = (_QWORD *)(v22 + 8LL * (unsigned int)v21);
  v24 = (_QWORD *)(v22 + 8 * HIDWORD(v21));
  if ( v23 == v24 )
    goto LABEL_14;
  while ( !*v23 || !(unsigned __int8)sub_21B9810(*v23, 3321) )
  {
    if ( v24 == ++v23 )
      goto LABEL_14;
  }
  if ( v24 == v23 )
  {
LABEL_14:
    v25 = (unsigned int)v226;
    v26 = HIDWORD(v226);
    v27 = (unsigned int)v226 + 1LL;
  }
  else
  {
    do
    {
      v28 = *v23;
      if ( *(_QWORD *)(*v23 + 16LL) )
        v28 = *(_QWORD *)(*v23 + 16LL);
      ++v23;
      *(_BYTE *)(v28 + 44) |= 1u;
      if ( v23 == v24 )
        break;
      while ( !*v23 || !(unsigned __int8)sub_21B9810(*v23, 3321) )
      {
        if ( v24 == ++v23 )
          goto LABEL_22;
      }
    }
    while ( v24 != v23 );
LABEL_22:
    v29 = (unsigned int)v226;
    v30 = (unsigned int)v226 + 1LL;
    if ( v30 > HIDWORD(v226) )
    {
      sub_2237220(&v225, v227, v30, 8);
      v29 = (unsigned int)v226;
    }
    *((_QWORD *)v225 + v29) = "--strip-all";
    v26 = HIDWORD(v226);
    LODWORD(v226) = v226 + 1;
    v25 = (unsigned int)v226;
    v27 = (unsigned int)v226 + 1LL;
  }
  if ( v27 > v26 )
  {
    sub_2237220(&v225, v227, v27, 8);
    v25 = (unsigned int)v226;
  }
  *((_QWORD *)v225 + v25) = "-m";
  v31 = (unsigned int)(v226 + 1);
  LODWORD(v226) = v226 + 1;
  switch ( v9[12] )
  {
    case 1:
    case 0x23:
      v41 = v31 + 1;
      if ( v41 > HIDWORD(v226) )
        sub_2237220(&v225, v227, v41, 8);
      *((_QWORD *)v225 + (unsigned int)v226) = "thumb2pe";
      LODWORD(v226) = v226 + 1;
      goto LABEL_61;
    case 3:
      v59 = v31 + 1;
      if ( v59 > HIDWORD(v226) )
        sub_2237220(&v225, v227, v59, 8);
      *((_QWORD *)v225 + (unsigned int)v226) = "arm64pe";
      LODWORD(v226) = v226 + 1;
      goto LABEL_61;
    case 0x25:
      v60 = v31 + 1;
      if ( v60 > HIDWORD(v226) )
        sub_2237220(&v225, v227, v60, 8);
      *((_QWORD *)v225 + (unsigned int)v226) = "i386pe";
      v61 = si128.m128i_i64[0];
      LODWORD(v226) = v226 + 1;
      if ( (unsigned __int64)(si128.m128i_i64[0] + 1) > si128.m128i_i64[1] )
      {
        sub_2236E10(&v228, v230, si128.m128i_i64[0] + 1, 1);
        v61 = si128.m128i_i64[0];
      }
      *((_BYTE *)v228 + v61) = 95;
      ++si128.m128i_i64[0];
      goto LABEL_61;
    case 0x26:
      v62 = (unsigned int)v31;
      v63 = (unsigned int)v31 + 1LL;
      if ( v63 > HIDWORD(v226) )
      {
        sub_2237220(&v225, v227, v63, 8);
        v62 = (unsigned int)v226;
      }
      *((_QWORD *)v225 + v62) = "i386pep";
      LODWORD(v226) = v226 + 1;
      goto LABEL_61;
    default:
      sub_FC70B0((__int64)ptr, *v212, 0, 67);
      v64 = *(unsigned __int8 **)ptr;
      v65 = *((_BYTE **)v9 + 220);
      v66 = *((_QWORD *)v9 + 221);
      if ( !*(_QWORD *)ptr )
      {
        v196 = *(_QWORD *)&ptr[8];
        v197 = *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL);
        if ( v197 )
        {
          v200 = (unsigned int)(v197 - 1);
          *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v200;
          v64 = *(unsigned __int8 **)(v196 + 8 * v200 + 14848);
          v201 = *((unsigned int *)v64 + 134);
          *v64 = 0;
          v202 = *((_QWORD *)v64 + 66);
          *((_DWORD *)v64 + 106) = 0;
          v203 = v202 + (v201 << 6);
          if ( v202 != v203 )
          {
            src = v8;
            v204 = v203;
            v219 = (__m128i *)ptr;
            v205 = v202;
            v220 = &v225;
            do
            {
              while ( 1 )
              {
                v204 -= 64;
                v206 = *(void **)(v204 + 24);
                if ( v206 == (void *)(v204 + 40) )
                  break;
                operator delete(v206);
                if ( v205 == v204 )
                  goto LABEL_380;
              }
            }
            while ( v205 != v204 );
LABEL_380:
            v8 = src;
            v12 = v219;
            v10 = (char *)v220;
          }
          *((_DWORD *)v64 + 134) = 0;
        }
        else
        {
          src = *((void **)v9 + 220);
          v64 = (unsigned __int8 *)operator new(0x3A0u);
          *v64 = 0;
          *((_QWORD *)v64 + 12) = v64 + 112;
          *((_QWORD *)v64 + 16) = v64 + 144;
          *((_QWORD *)v64 + 20) = v64 + 176;
          *((_QWORD *)v64 + 24) = v64 + 208;
          *((_QWORD *)v64 + 28) = v64 + 240;
          *((_QWORD *)v64 + 32) = v64 + 272;
          *((_QWORD *)v64 + 36) = v64 + 304;
          *((_QWORD *)v64 + 40) = v64 + 336;
          *((_QWORD *)v64 + 44) = v64 + 368;
          *((_QWORD *)v64 + 48) = v64 + 400;
          *((_QWORD *)v64 + 52) = v64 + 432;
          *((_QWORD *)v64 + 13) = 0;
          v64[112] = 0;
          *((_QWORD *)v64 + 17) = 0;
          v64[144] = 0;
          *((_QWORD *)v64 + 21) = 0;
          v64[176] = 0;
          *((_QWORD *)v64 + 25) = 0;
          v64[208] = 0;
          *((_QWORD *)v64 + 29) = 0;
          v64[240] = 0;
          *((_QWORD *)v64 + 33) = 0;
          v64[272] = 0;
          *((_QWORD *)v64 + 37) = 0;
          v64[304] = 0;
          *((_QWORD *)v64 + 41) = 0;
          v64[336] = 0;
          *((_QWORD *)v64 + 45) = 0;
          v64[368] = 0;
          *((_QWORD *)v64 + 49) = 0;
          v64[400] = 0;
          *((_QWORD *)v64 + 53) = 0x800000000LL;
          v65 = src;
          *((_QWORD *)v64 + 66) = v64 + 544;
          *((_QWORD *)v64 + 67) = 0x600000000LL;
        }
        *(_QWORD *)ptr = v64;
      }
      v64[*v64 + 1] = 0;
      v221 = v223;
      if ( &v65[v66] && !v65 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v66 > 0xF )
      {
        if ( v66 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        src = v65;
        v67 = (_QWORD *)operator new(v66 + 1);
        v223[0] = v66;
        v221 = v67;
LABEL_358:
        memcpy(v67, v65, v66);
        v67 = v221;
        goto LABEL_98;
      }
      if ( v66 == 1 )
      {
        LOBYTE(v223[0]) = *v65;
        v67 = v223;
        goto LABEL_98;
      }
      v67 = v223;
      if ( v66 )
        goto LABEL_358;
LABEL_98:
      n = v66;
      *((_BYTE *)v67 + v66) = 0;
      v68 = *(_QWORD *)ptr;
      v69 = (unsigned __int8)**(_BYTE **)ptr;
      **(_BYTE **)ptr = v69 + 1;
      v70 = (unsigned __int8)v69;
      v71 = 32 * (v69 + 3);
      v72 = (void **)(v68 + v71);
      v73 = *(_BYTE **)(v68 + v71);
      if ( v221 == v223 )
      {
        v194 = n;
        if ( n )
        {
          if ( n == 1 )
            *v73 = v223[0];
          else
            memcpy(v73, v221, n);
          v194 = n;
          v73 = *v72;
        }
        v72[1] = (void *)v194;
        v73[v194] = 0;
        v73 = v221;
      }
      else
      {
        if ( v73 == (_BYTE *)(v68 + v71 + 16) )
        {
          *v72 = v221;
          v72[1] = (void *)n;
          v72[2] = (void *)v223[0];
        }
        else
        {
          v74 = *(_QWORD *)(v68 + 32 * v70 + 112);
          *v72 = v221;
          v72[1] = (void *)n;
          v72[2] = (void *)v223[0];
          if ( v73 )
          {
            v221 = v73;
            v223[0] = v74;
            goto LABEL_102;
          }
        }
        v73 = v223;
        v221 = v223;
      }
LABEL_102:
      n = 0;
      *v73 = 0;
      if ( v221 != v223 )
        operator delete(v221);
      if ( (_BYTE)v233 )
      {
        sub_FC7790(*(__int64 *)&ptr[16], v12->m128i_i64, SBYTE1(v233));
        *(_QWORD *)&ptr[16] = 0;
        LOWORD(v233) = 0;
      }
      if ( v232 != &v12[3] )
        operator delete(v232);
      v75 = *(void ***)ptr;
      if ( *(_QWORD *)ptr )
      {
        v76 = *(_QWORD *)&ptr[8];
        if ( *(_QWORD *)&ptr[8] )
        {
          if ( *(_QWORD *)ptr < *(_QWORD *)&ptr[8] || *(_QWORD *)ptr > (unsigned __int64)(*(_QWORD *)&ptr[8] + 14848LL) )
          {
            v77 = *(void ***)(*(_QWORD *)ptr + 528LL);
            v78 = &v77[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)ptr + 536LL)];
            if ( v77 != v78 )
            {
              src = v10;
              v79 = v12;
              v80 = v8;
              v81 = v77;
              do
              {
                while ( 1 )
                {
                  v78 -= 8;
                  v82 = (void **)v78[3];
                  if ( v82 == v78 + 5 )
                    break;
                  operator delete(v82);
                  if ( v81 == v78 )
                    goto LABEL_115;
                }
              }
              while ( v81 != v78 );
LABEL_115:
              v8 = v80;
              v78 = (void **)v75[66];
              v12 = v79;
              v10 = (char *)src;
            }
            if ( v78 != v75 + 68 )
              free(v78);
            v83 = (void **)v75[52];
            if ( v83 != v75 + 54 )
              free(v83);
            v84 = v75 + 48;
            src = v75 + 8;
            do
            {
              while ( *v84 != v84 + 2 )
              {
                operator delete(*v84);
                v84 -= 4;
                if ( v84 == src )
                  goto LABEL_123;
              }
              v84 -= 4;
            }
            while ( v84 != src );
LABEL_123:
            operator delete(v75, 0x3A0u);
          }
          else
          {
            v195 = *(unsigned int *)(*(_QWORD *)&ptr[8] + 14976LL);
            *(_DWORD *)(*(_QWORD *)&ptr[8] + 14976LL) = v195 + 1;
            *(_QWORD *)(v76 + 8 * v195 + 14848) = v75;
          }
        }
      }
LABEL_61:
      *(_DWORD *)ptr = 3264;
      v42 = sub_21B6DA0(v8, v12, 1);
      v43 = v8[1];
      v44 = (_QWORD *)(v43 + 8LL * (unsigned int)v42);
      v45 = (_QWORD *)(v43 + 8 * HIDWORD(v42));
      if ( v44 == v45 )
        goto LABEL_65;
      while ( !*v44 || !(unsigned __int8)sub_21B9810(*v44, 3264) )
      {
        if ( v45 == ++v44 )
          goto LABEL_65;
      }
      if ( v45 == v44 )
      {
LABEL_65:
        v46 = si128.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[0] + 14) > si128.m128i_i64[1] )
        {
          sub_2236E10(&v228, v230, si128.m128i_i64[0] + 14, 1);
          v46 = si128.m128i_i64[0];
        }
        qmemcpy((char *)v228 + v46, "mainCRTStartup", 14);
        v47 = "-Bstatic";
        si128.m128i_i64[0] += 14;
        if ( !sub_10DCD30((__int64)v8, 0xCE3u) )
          v47 = "-Bdynamic";
        v48 = (unsigned int)v226;
        v49 = (unsigned int)v226 + 1LL;
        if ( v49 > HIDWORD(v226) )
        {
          sub_2237220(v10, v10 + 16, v49, 8);
          v48 = (unsigned int)v226;
        }
        *((_QWORD *)v225 + v48) = v47;
        *(_QWORD *)ptr = 0xBEB00000BF0LL;
        LODWORD(v226) = v226 + 1;
        v50 = sub_21B6DA0(v8, v12, 2);
        v51 = v8[1];
        *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
        v52 = (_QWORD *)(v51 + 8LL * (unsigned int)v50);
        v53 = (_QWORD *)(v51 + 8 * HIDWORD(v50));
        src = v53;
        v54 = _mm_loadh_ps((const double *)&src);
        *(__m128 *)ptr = v54;
        if ( v52 == v53 )
          goto LABEL_78;
        src = v8;
        while ( 1 )
        {
          v55 = *v52;
          if ( *v52 )
          {
            if ( (unsigned __int8)sub_21B9810(*v52, 3056) || (unsigned __int8)sub_21B9810(v55, 3051) )
              break;
          }
          *(_QWORD *)ptr = ++v52;
          if ( v53 == v52 )
          {
            v8 = src;
            goto LABEL_78;
          }
        }
        v8 = src;
        src = v53;
        *(_QWORD *)&ptr[16] = 0xBEB00000BF0LL;
        v54 = _mm_loadh_ps((const double *)&src);
        *(__m128 *)ptr = v54;
        if ( v53 == v52 )
        {
LABEL_78:
          v56 = (unsigned int)v226;
          v57 = (unsigned int)v226 + 1LL;
          if ( HIDWORD(v226) < v57 )
          {
            sub_2237220(v10, v10 + 16, v57, 8);
            v56 = (unsigned int)v226;
          }
          *((_QWORD *)v225 + v56) = "--entry";
          LODWORD(v226) = v226 + 1;
          *(_QWORD *)ptr = v228;
          LOWORD(v232) = 261;
          *(_QWORD *)&ptr[8] = si128.m128i_i64[0];
          v58 = sub_10DA6C0((__int64)v8, (__int64)v12);
          sub_10DC5D0((__int64)v10, v58);
        }
        else
        {
          src = v8;
          do
          {
            v171 = *(_QWORD *)(*v52 + 16LL);
            if ( !v171 )
              v171 = *v52;
            v172 = v52 + 1;
            *(_BYTE *)(v171 + 44) |= 1u;
            *(_QWORD *)ptr = v172;
            if ( v172 == v53 )
              break;
            while ( 1 )
            {
              v173 = *v172;
              if ( *v172 )
              {
                if ( (unsigned __int8)sub_21B9810(*v172, 3056) || (unsigned __int8)sub_21B9810(v173, 3051) )
                  break;
              }
              *(_QWORD *)ptr = ++v172;
              if ( v53 == v172 )
                goto LABEL_327;
            }
            v52 = *(_QWORD **)ptr;
          }
          while ( *(_QWORD **)ptr != v53 );
LABEL_327:
          v8 = src;
        }
        v105 = (unsigned int)v226;
        v104 = HIDWORD(v226);
        v106 = (unsigned int)v226 + 1LL;
      }
      else
      {
        do
        {
          v85 = *v44;
          if ( *(_QWORD *)(*v44 + 16LL) )
            v85 = *(_QWORD *)(*v44 + 16LL);
          ++v44;
          *(_BYTE *)(v85 + 44) |= 1u;
          if ( v44 == v45 )
            break;
          while ( !*v44 || !(unsigned __int8)sub_21B9810(*v44, 3264) )
          {
            if ( v45 == ++v44 )
              goto LABEL_131;
          }
        }
        while ( v45 != v44 );
LABEL_131:
        v86 = si128.m128i_i64[0];
        v87 = 0x480000000ALL;
        if ( _bittest64(&v87, (unsigned int)v9[12]) )
        {
          if ( si128.m128i_i64[1] < (unsigned __int64)(si128.m128i_i64[0] + 18) )
          {
            sub_2236E10(&v228, v230, si128.m128i_i64[0] + 18, 1);
            v86 = si128.m128i_i64[0];
          }
          v54 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A9B30);
          v170 = (__m128 *)((char *)v228 + v86);
          v170[1].m128_i16[0] = 28789;
          *v170 = v54;
          si128.m128i_i64[0] += 18;
        }
        else
        {
          if ( (unsigned __int64)(si128.m128i_i64[0] + 21) > si128.m128i_i64[1] )
          {
            sub_2236E10(&v228, v230, si128.m128i_i64[0] + 21, 1);
            v86 = si128.m128i_i64[0];
          }
          v54 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A9B30);
          v88 = (__m128 *)((char *)v228 + v86);
          v88[1].m128_i32[0] = 826306677;
          *v88 = v54;
          si128.m128i_i64[0] += 21;
          v88[1].m128_i8[4] = 50;
        }
        v89 = (unsigned int)v226;
        v90 = (unsigned int)v226 + 1LL;
        if ( v90 > HIDWORD(v226) )
        {
          sub_2237220(v10, v10 + 16, v90, 8);
          v89 = (unsigned int)v226;
        }
        *((_QWORD *)v225 + v89) = "-shared";
        LODWORD(v226) = v226 + 1;
        *(_DWORD *)ptr = 3299;
        v91 = sub_21B6DA0(v8, v12, 1);
        v92 = v8[1];
        v93 = (_QWORD *)(v92 + 8LL * (unsigned int)v91);
        v94 = (_QWORD *)(v92 + 8 * HIDWORD(v91));
        if ( v93 == v94 )
          goto LABEL_141;
        while ( !*v93 || !(unsigned __int8)sub_21B9810(*v93, 3299) )
        {
          if ( v94 == ++v93 )
            goto LABEL_141;
        }
        if ( v93 == v94 )
        {
LABEL_141:
          v95 = "-Bdynamic";
        }
        else
        {
          do
          {
            v163 = *v93;
            if ( *(_QWORD *)(*v93 + 16LL) )
              v163 = *(_QWORD *)(*v93 + 16LL);
            ++v93;
            *(_BYTE *)(v163 + 44) |= 1u;
            if ( v93 == v94 )
              break;
            while ( !*v93 || !(unsigned __int8)sub_21B9810(*v93, 3299) )
            {
              if ( v94 == ++v93 )
                goto LABEL_293;
            }
          }
          while ( v93 != v94 );
LABEL_293:
          v95 = "-Bstatic";
        }
        v96 = (unsigned int)v226;
        v97 = (unsigned int)v226 + 1LL;
        if ( v97 > HIDWORD(v226) )
        {
          sub_2237220(v10, v10 + 16, v97, 8);
          v96 = (unsigned int)v226;
        }
        *((_QWORD *)v225 + v96) = v95;
        LODWORD(v226) = v226 + 1;
        v98 = (unsigned int)v226;
        if ( (unsigned __int64)(unsigned int)v226 + 1 > HIDWORD(v226) )
        {
          sub_2237220(v10, v10 + 16, (unsigned int)v226 + 1LL, 8);
          v98 = (unsigned int)v226;
        }
        *((_QWORD *)v225 + v98) = "--enable-auto-image-base";
        LODWORD(v226) = v226 + 1;
        v99 = (unsigned int)v226;
        if ( (unsigned __int64)(unsigned int)v226 + 1 > HIDWORD(v226) )
        {
          sub_2237220(v10, v10 + 16, (unsigned int)v226 + 1LL, 8);
          v99 = (unsigned int)v226;
        }
        *((_QWORD *)v225 + v99) = "--entry";
        v100 = *v8;
        LODWORD(v226) = v226 + 1;
        v101 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *, __int64))(v100 + 16))(v8, v228, si128.m128i_i64[0]);
        v102 = (unsigned int)v226;
        v103 = (unsigned int)v226 + 1LL;
        if ( v103 > HIDWORD(v226) )
        {
          src = v101;
          sub_2237220(v10, v10 + 16, v103, 8);
          v102 = (unsigned int)v226;
          v101 = src;
        }
        *((_QWORD *)v225 + v102) = v101;
        v104 = HIDWORD(v226);
        LODWORD(v226) = v226 + 1;
        v105 = (unsigned int)v226;
        v106 = (unsigned int)v226 + 1LL;
      }
      if ( v104 < v106 )
      {
        sub_2237220(v10, v10 + 16, v106, 8);
        v105 = (unsigned int)v226;
      }
      *((_QWORD *)v225 + v105) = "--allow-multiple-definition";
      LODWORD(v226) = v226 + 1;
      v107 = (unsigned int)v226;
      if ( (unsigned __int64)(unsigned int)v226 + 1 > HIDWORD(v226) )
      {
        sub_2237220(v10, v10 + 16, (unsigned int)v226 + 1LL, 8);
        v107 = (unsigned int)v226;
      }
      *((_QWORD *)v225 + v107) = "-o";
      v108 = *a4;
      LODWORD(v226) = v226 + 1;
      v109 = (unsigned int)v226;
      if ( (unsigned __int64)(unsigned int)v226 + 1 > HIDWORD(v226) )
      {
        sub_2237220(v10, v10 + 16, (unsigned int)v226 + 1LL, 8);
        v109 = (unsigned int)v226;
      }
      *((_QWORD *)v225 + v109) = v108;
      LODWORD(v226) = v226 + 1;
      *(_DWORD *)ptr = 3264;
      v110 = sub_21B6DA0(v8, v12, 1);
      v111 = v8[1];
      v112 = (_QWORD *)(v111 + 8LL * (unsigned int)v110);
      v113 = (_QWORD *)(v111 + 8 * HIDWORD(v110));
      if ( v112 != v113 )
      {
        while ( !*v112 || !(unsigned __int8)sub_21B9810(*v112, 3264) )
        {
          if ( v113 == ++v112 )
            goto LABEL_161;
        }
        if ( v113 != v112 )
        {
          do
          {
            v161 = *v112;
            if ( *(_QWORD *)(*v112 + 16LL) )
              v161 = *(_QWORD *)(*v112 + 16LL);
            ++v112;
            *(_BYTE *)(v161 + 44) |= 1u;
            if ( v112 == v113 )
              break;
            while ( !*v112 || !(unsigned __int8)sub_21B9810(*v112, 3264) )
            {
              if ( v113 == ++v112 )
                goto LABEL_162;
            }
          }
          while ( v112 != v113 );
LABEL_162:
          v114 = *a4;
          if ( *a4 )
          {
            v115 = strlen(*a4);
            v54 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A9B20);
            v116 = v115;
            *(_QWORD *)ptr = (char *)v12 + 24;
            *(__m128 *)&ptr[8] = v54;
            if ( v115 <= 0x105 )
            {
              if ( !v115 )
                goto LABEL_166;
              v117 = &v12[1].m128i_u64[1];
            }
            else
            {
              sub_2236E10(v12, &v12[1].m128i_u64[1], v115, 1);
              v117 = (unsigned __int64 *)(*(_QWORD *)ptr + *(_QWORD *)&ptr[8]);
            }
            memcpy(v117, v114, v116);
            v115 = v116 + *(_QWORD *)&ptr[8];
          }
          else
          {
            v54 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A9B20);
            *(_QWORD *)ptr = (char *)v12 + 24;
            v115 = 0;
            *(__m128 *)&ptr[8] = v54;
          }
LABEL_166:
          *(_QWORD *)&ptr[8] = v115;
          v221 = ".lib";
          v224 = 259;
          sub_228A730(v12, &v221, 0);
          v118 = (unsigned int)v226;
          v119 = (unsigned int)v226 + 1LL;
          if ( v119 > HIDWORD(v226) )
          {
            sub_2237220(v10, v10 + 16, v119, 8);
            v118 = (unsigned int)v226;
          }
          *((_QWORD *)v225 + v118) = "--out-implib";
          v120 = *v8;
          LODWORD(v226) = v226 + 1;
          v121 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(v120 + 16))(
                           v8,
                           *(_QWORD *)ptr,
                           *(_QWORD *)&ptr[8]);
          v122 = (unsigned int)v226;
          v123 = (unsigned int)v226 + 1LL;
          if ( v123 > HIDWORD(v226) )
          {
            src = v121;
            sub_2237220(v10, v10 + 16, v123, 8);
            v122 = (unsigned int)v226;
            v121 = src;
          }
          *((_QWORD *)v225 + v122) = v121;
          LODWORD(v226) = v226 + 1;
          if ( *(__m128i **)ptr != (__m128i *)&v12[1].m128i_u64[1] )
            free(*(void **)ptr);
          goto LABEL_172;
        }
      }
LABEL_161:
      if ( sub_10DCD30((__int64)v8, 0xC83u) )
        goto LABEL_162;
LABEL_172:
      sub_21B7F70(v8, v10, 2204);
      sub_112D940((__int64)v9, (__int64)v8, (__int64)v10, v124, v125);
      sub_11C3660((__int64)v9, a5, (__int64)v8, (__int64)v10, a3);
      v126 = sub_112D7B0((__int64)v9, (__int64)v8);
      if ( v126 )
      {
        if ( sub_10DCD30((__int64)v8, 0xCE0u) && !sub_10DCD30((__int64)v8, 0xCE3u) )
        {
          v198 = (unsigned int)v226;
          v199 = (unsigned int)v226 + 1LL;
          if ( v199 > HIDWORD(v226) )
          {
            sub_2237220(v10, v10 + 16, v199, 8);
            v198 = (unsigned int)v226;
          }
          *((_QWORD *)v225 + v198) = "-Bstatic";
          LODWORD(v226) = v226 + 1;
        }
        else
        {
          v126 = 0;
        }
        v164 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v9 + 640LL);
        if ( v164 == sub_11D10F0 )
        {
          if ( !(*(unsigned int (__fastcall **)(_DWORD *, _QWORD *))(*(_QWORD *)v9 + 608LL))(v9, v8) )
          {
            v190 = (unsigned int)v226;
            v191 = (unsigned int)v226 + 1LL;
            if ( v191 > HIDWORD(v226) )
            {
              sub_2237220(v10, v10 + 16, v191, 8);
              v190 = (unsigned int)v226;
            }
            *((_QWORD *)v225 + v190) = "-lc++";
            LODWORD(v226) = v226 + 1;
            if ( sub_10DCD30((__int64)v8, 0x29Fu) )
            {
              v192 = (unsigned int)v226;
              v193 = (unsigned int)v226 + 1LL;
              if ( v193 > HIDWORD(v226) )
              {
                sub_2237220(v10, v10 + 16, v193, 8);
                v192 = (unsigned int)v226;
              }
              *((_QWORD *)v225 + v192) = "-lc++experimental";
              LODWORD(v226) = v226 + 1;
            }
          }
        }
        else
        {
          v164((__int64)v9, (__int64)v8, (__int64)v10);
        }
        if ( v126 )
        {
          v165 = (unsigned int)v226;
          v166 = (unsigned int)v226 + 1LL;
          if ( v166 > HIDWORD(v226) )
          {
            sub_2237220(v10, v10 + 16, v166, 8);
            v165 = (unsigned int)v226;
          }
          *((_QWORD *)v225 + v165) = "-Bdynamic";
          LODWORD(v226) = v226 + 1;
        }
      }
      *(_DWORD *)ptr = 3056;
      v127 = sub_21B6DA0(v8, v12, 1);
      v128 = v8[1];
      v129 = (_QWORD *)(v128 + 8LL * (unsigned int)v127);
      v130 = (_QWORD *)(v128 + 8 * HIDWORD(v127));
      if ( v129 == v130 )
        goto LABEL_177;
      while ( !*v129 || !(unsigned __int8)sub_21B9810(*v129, 3056) )
      {
        if ( v130 == ++v129 )
          goto LABEL_177;
      }
      if ( v130 == v129 )
      {
LABEL_177:
        if ( !sub_10DCD30((__int64)v8, 0xBDDu) )
        {
          sub_10DC5D0((__int64)v10, (__int64)"-lmsvcrt");
          sub_11BEF20((__int64)v9, (__int64)v212, (__int64)v10, (__int64)v8);
        }
      }
      else
      {
        do
        {
          v162 = *v129;
          if ( *(_QWORD *)(*v129 + 16LL) )
            v162 = *(_QWORD *)(*v129 + 16LL);
          ++v129;
          *(_BYTE *)(v162 + 44) |= 1u;
          if ( v129 == v130 )
            break;
          while ( !*v129 || !(unsigned __int8)sub_21B9810(*v129, 3056) )
          {
            if ( v130 == ++v129 )
              goto LABEL_179;
          }
        }
        while ( v130 != v129 );
      }
LABEL_179:
      sub_112C5F0((__int64)v12, (__int64)v9, (__int64)v8);
      v213 = ptr[0] & 1;
      if ( v245 != &v12[21] )
        operator delete(v245);
      if ( v244 != &v12[18] )
        operator delete(v244);
      v131 = v243;
      v132 = (void **)v242;
      if ( v243 != v242 )
      {
        do
        {
          while ( *v132 != v132 + 2 )
          {
            operator delete(*v132);
            v132 += 4;
            if ( v131 == v132 )
              goto LABEL_186;
          }
          v132 += 4;
        }
        while ( v131 != v132 );
LABEL_186:
        v132 = (void **)v242;
      }
      if ( v132 )
        operator delete(v132);
      v133 = v241;
      v134 = (void **)v240;
      if ( v241 != v240 )
      {
        do
        {
          while ( *v134 != v134 + 2 )
          {
            operator delete(*v134);
            v134 += 4;
            if ( v133 == v134 )
              goto LABEL_192;
          }
          v134 += 4;
        }
        while ( v133 != v134 );
LABEL_192:
        v134 = (void **)v240;
      }
      if ( v134 )
        operator delete(v134);
      v135 = v239;
      v136 = (void **)v238;
      if ( v239 != v238 )
      {
        do
        {
          while ( *v136 != v136 + 2 )
          {
            operator delete(*v136);
            v136 += 4;
            if ( v135 == v136 )
              goto LABEL_198;
          }
          v136 += 4;
        }
        while ( v135 != v136 );
LABEL_198:
        v136 = (void **)v238;
      }
      if ( v136 )
        operator delete(v136);
      v137 = v237;
      v138 = (void **)v236;
      if ( v237 != v236 )
      {
        do
        {
          while ( *v138 != v138 + 2 )
          {
            operator delete(*v138);
            v138 += 4;
            if ( v138 == v137 )
              goto LABEL_204;
          }
          v138 += 4;
        }
        while ( v137 != v138 );
LABEL_204:
        v138 = (void **)v236;
      }
      if ( v138 )
        operator delete(v138);
      v139 = v235;
      v140 = (void **)v234;
      if ( v235 != v234 )
      {
        do
        {
          while ( *v140 != v140 + 2 )
          {
            operator delete(*v140);
            v140 += 4;
            if ( v139 == v140 )
              goto LABEL_210;
          }
          v140 += 4;
        }
        while ( v139 != v140 );
LABEL_210:
        v140 = (void **)v234;
      }
      if ( v140 )
        operator delete(v140);
      if ( v233 )
        operator delete(v233);
      if ( v213 )
      {
        if ( sub_10DCD30((__int64)v8, 0xCC0u) )
        {
          v167 = sub_112D2D0((__int64)v9, (__int64)v8, (__int64)"asan_dll_thunk", 14, 1u, 0);
        }
        else
        {
          v174 = (const char **)off_2BAEC10;
          do
          {
            v175 = *v174;
            v176 = 0;
            if ( *v174 )
            {
              v214 = *v174;
              v177 = strlen(*v174);
              v175 = v214;
              v176 = v177;
            }
            v178 = sub_112D2D0((__int64)v9, (__int64)v8, (__int64)v175, v176, 1u, 0);
            v179 = (unsigned int)v226;
            v180 = (unsigned int)v226 + 1LL;
            if ( v180 > HIDWORD(v226) )
            {
              v216 = v178;
              sub_2237220(v10, v10 + 16, v180, 8);
              v179 = (unsigned int)v226;
              v178 = v216;
            }
            ++v174;
            *((_QWORD *)v225 + v179) = v178;
            LODWORD(v226) = v226 + 1;
          }
          while ( &off_2BAEC20 != (_UNKNOWN **)v174 );
          v181 = (*(__int64 (__fastcall **)(_QWORD *, const char *, __int64))(*v8 + 16LL))(v8, "--undefined", 11);
          v182 = (unsigned int)v226;
          v183 = (unsigned int)v226 + 1LL;
          if ( v183 > HIDWORD(v226) )
          {
            v217 = v181;
            sub_2237220(v10, v10 + 16, v183, 8);
            v182 = (unsigned int)v226;
            v181 = v217;
          }
          v184 = "___asan_seh_interceptor";
          *((_QWORD *)v225 + v182) = v181;
          v185 = *v8;
          LODWORD(v226) = v226 + 1;
          if ( v9[12] != 37 )
            v184 = "__asan_seh_interceptor";
          v186 = *(__int64 (__fastcall **)(_QWORD *, const char *, size_t))(v185 + 16);
          v187 = strlen(v184);
          v167 = v186(v8, v184, v187);
        }
        v168 = (unsigned int)v226;
        v169 = (unsigned int)v226 + 1LL;
        if ( v169 > HIDWORD(v226) )
        {
          v215 = v167;
          sub_2237220(v10, v10 + 16, v169, 8);
          v168 = (unsigned int)v226;
          v167 = v215;
        }
        *((_QWORD *)v225 + v168) = v167;
        LODWORD(v226) = v226 + 1;
      }
      sub_1132E50(v12, (__int64)v9, nullptr);
      v141 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 16LL))(v8, *(_QWORD *)ptr, *(_QWORD *)&ptr[8]);
      if ( *(__m128i **)ptr != &v12[1] )
        operator delete(*(void **)ptr);
      v142 = *(const __m128i **)a5;
      v143 = *(unsigned int *)(a5 + 8);
      v144 = operator new(0x208u);
      sub_1106AE0(v144, a3, a1, 0, (__int64)"@", v141, (__int64)v10, v142, v143, (__int64)a4, 1, 0);
      *(_QWORD *)ptr = v144;
      v145 = *(unsigned int *)(a2 + 160);
      v146 = v145 + 1;
      v147 = *(_DWORD *)(a2 + 160);
      if ( v145 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 164) )
      {
        v188 = *(_QWORD *)(a2 + 152);
        v189 = a2 + 152;
        if ( v188 > (unsigned __int64)v12 || (unsigned __int64)v12 >= v188 + 8 * v145 )
        {
          sub_11673D0(v189, v146, v54, a8);
          v145 = *(unsigned int *)(a2 + 160);
          v148 = *(_QWORD *)(a2 + 152);
          v147 = *(_DWORD *)(a2 + 160);
        }
        else
        {
          sub_11673D0(v189, v146, v54, a8);
          v148 = *(_QWORD *)(a2 + 152);
          v145 = *(unsigned int *)(a2 + 160);
          v12 = (__m128i *)((char *)v12 + v148 - v188);
          v147 = *(_DWORD *)(a2 + 160);
        }
      }
      else
      {
        v148 = *(_QWORD *)(a2 + 152);
      }
      v149 = v12->m128i_i64[0];
      v12->m128i_i64[0] = 0;
      *(_QWORD *)(v148 + 8 * v145) = v149;
      v150 = *(_QWORD **)ptr;
      *(_DWORD *)(a2 + 160) = v147 + 1;
      if ( v150 )
      {
        v151 = *(void (__fastcall **)(_QWORD *))(*v150 + 8LL);
        if ( v151 == sub_10D4290 )
        {
          v152 = v150[58];
          v153 = v150[57];
          *v150 = &off_2BA8F30;
          if ( v152 != v153 )
          {
            do
            {
              if ( *(_BYTE *)(v153 + 32) && *(_QWORD *)v153 != v153 + 16 )
                operator delete(*(void **)v153);
              v153 += 40;
            }
            while ( v152 != v153 );
            v153 = v150[57];
          }
          if ( v153 )
            operator delete((void *)v153);
          v154 = (void *)v150[54];
          if ( v154 )
            operator delete(v154);
          v155 = (_QWORD *)v150[50];
          if ( v155 != v150 + 52 )
            operator delete(v155);
          v156 = (_QWORD *)v150[32];
          if ( v156 != v150 + 34 )
            free(v156);
          v157 = (void **)v150[29];
          v158 = (void **)v150[28];
          if ( v157 != v158 )
          {
            do
            {
              while ( *v158 != v158 + 2 )
              {
                operator delete(*v158);
                v158 += 4;
                if ( v157 == v158 )
                  goto LABEL_239;
              }
              v158 += 4;
            }
            while ( v157 != v158 );
LABEL_239:
            v158 = (void **)v150[28];
          }
          if ( v158 )
            operator delete(v158);
          v159 = (void *)v150[25];
          if ( v159 )
            operator delete(v159);
          v160 = (_QWORD *)v150[7];
          if ( v160 != v150 + 9 )
            free(v160);
          operator delete(v150, 0x208u);
        }
        else
        {
          v151(v150);
        }
      }
      if ( v225 != v10 + 16 )
        free(v225);
      if ( v228 != v230 )
        free(v228);
      return;
  }
}
