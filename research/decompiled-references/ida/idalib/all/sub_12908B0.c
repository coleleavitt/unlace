void __fastcall sub_12908B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _QWORD *a6,
        double a7,
        double a8)
{
  _QWORD *v8; // rbx
  __int64 v9; // r13
  char *p_ptr; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  _QWORD *v15; // r15
  __int64 v16; // rax
  __m128i *v17; // rbp
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // r15
  _QWORD *v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  bool v33; // zf
  __int64 v34; // rdx
  __int64 v35; // rax
  unsigned __int8 *v36; // r14
  _BYTE *v37; // rsi
  signed __int64 v38; // rdx
  signed __int64 v39; // r15
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  void **v45; // r15
  _BYTE *v46; // rdi
  __int64 v47; // rax
  unsigned __int8 *v48; // r14
  _QWORD *v49; // rdx
  __int64 v50; // rax
  void **v51; // r14
  _QWORD *v52; // rax
  void **v53; // rdx
  void **v54; // r15
  __m128i *v55; // r12
  _QWORD *v56; // rbp
  void **v57; // rbx
  void **v58; // rdi
  void **v59; // rdi
  void **v60; // r15
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rcx
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rcx
  __int64 v71; // rax
  unsigned __int64 v72; // rdx
  __int64 v73; // r14
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // rdx
  _QWORD *v77; // r15
  _QWORD *v78; // r14
  __m128 v79; // xmm0
  __int64 v80; // rbx
  void *v81; // rax
  __int64 v82; // rcx
  unsigned __int64 v83; // rdx
  char *v84; // rdx
  void *v85; // rax
  __int64 v86; // rcx
  unsigned __int64 v87; // rdx
  __int64 v88; // rax
  _QWORD *v89; // r15
  char *v90; // rax
  __m128i *v91; // r12
  _QWORD *v92; // rbp
  _QWORD *v93; // rbx
  char *v94; // r14
  __int64 v95; // rcx
  __int64 v96; // r8
  unsigned __int64 v97; // rax
  __int64 v98; // rdx
  _QWORD *v99; // r14
  _QWORD *v100; // r15
  unsigned __int64 v101; // rax
  __int64 v102; // rdx
  _QWORD *v103; // r14
  _QWORD *v104; // r15
  unsigned __int64 v105; // rax
  __int64 v106; // rdx
  _QWORD *v107; // r15
  _QWORD *v108; // r14
  __int64 v109; // rax
  unsigned __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int64 v113; // rcx
  unsigned __int64 v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rax
  __int64 v117; // rax
  unsigned __int64 v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rbx
  const __m128i *v123; // r13
  __int64 v124; // r14
  void *v125; // r15
  __int64 v126; // rdx
  __int64 v127; // rsi
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // rsi
  _QWORD *v131; // rbp
  void (__fastcall *v132)(_QWORD *); // rax
  __int64 v133; // r13
  __int64 v134; // rbx
  void *v135; // rdi
  _QWORD *v136; // rdi
  _QWORD *v137; // rdi
  void **v138; // r13
  void **v139; // rbx
  void *v140; // rdi
  _QWORD *v141; // rdi
  char *v142; // rax
  __int64 v143; // rax
  __int64 v144; // rax
  unsigned __int64 v145; // rdx
  __int64 v146; // rax
  unsigned __int64 v147; // rax
  __int64 v148; // rdx
  _QWORD *v149; // r14
  _QWORD *v150; // r15
  __int64 v151; // rax
  __int64 v152; // rax
  unsigned __int64 v153; // rdx
  unsigned __int64 v154; // rax
  __int64 v155; // rdx
  _QWORD *v156; // r15
  _QWORD *v157; // r14
  __int64 v158; // rbx
  __int64 v159; // rax
  __int64 v160; // rax
  unsigned __int64 v161; // rdx
  __int64 v162; // rax
  _QWORD *v163; // r15
  __int64 v164; // rbx
  unsigned __int64 v165; // rdx
  __int64 v166; // rax
  unsigned __int64 v167; // rdx
  size_t v168; // rdx
  __int64 v169; // r14
  unsigned __int64 v170; // rbx
  __int64 v171; // rdi
  __int64 v172; // rdx
  _QWORD *v173; // rdx
  int v174; // eax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rax
  __int64 v179; // rbp
  _QWORD *v180; // r12
  __int64 v181; // rbx
  void *v182; // rdi
  _QWORD *v183; // rdx
  int v184; // eax
  __int64 v185; // rax
  __int64 v186; // r15
  __int64 v187; // rdx
  __int64 v188; // r15
  __m128i *v189; // r12
  _QWORD *v190; // rbp
  __int64 v191; // rbx
  void *v192; // rdi
  __int64 v193; // rax
  __int64 v194; // rax
  char *v195; // rdx
  void *v196; // rax
  __int64 v197; // rcx
  unsigned __int64 v198; // rdx
  void *v199; // rax
  __int64 v200; // rcx
  unsigned __int64 v201; // rdx
  void *v202; // rax
  __int64 v203; // rcx
  unsigned __int64 v204; // rdx
  __int64 v205; // rax
  unsigned __int64 v206; // rdx
  __int64 v207; // rax
  unsigned __int64 v208; // rdx
  void *src; // [rsp+0h] [rbp-198h] BYREF
  __int64 v210; // [rsp+8h] [rbp-190h]
  __int64 v211; // [rsp+18h] [rbp-180h]
  bool v212; // [rsp+27h] [rbp-171h]
  __int64 v213; // [rsp+28h] [rbp-170h]
  __int64 v214; // [rsp+30h] [rbp-168h]
  __int64 *v215; // [rsp+38h] [rbp-160h]
  __int64 v216; // [rsp+40h] [rbp-158h]
  __int64 v217; // [rsp+48h] [rbp-150h]
  void **v218; // [rsp+50h] [rbp-148h]
  void **v219; // [rsp+58h] [rbp-140h]
  void *v220; // [rsp+60h] [rbp-138h]
  size_t n; // [rsp+68h] [rbp-130h]
  _QWORD v222[2]; // [rsp+70h] [rbp-128h] BYREF
  void *v223[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v224; // [rsp+90h] [rbp-108h] BYREF
  void *v225; // [rsp+A0h] [rbp-F8h]
  __int16 v226; // [rsp+C0h] [rbp-D8h]
  void *ptr; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v228; // [rsp+D8h] [rbp-C0h]
  _BYTE v229[184]; // [rsp+E0h] [rbp-B8h] BYREF

  v8 = a6;
  v9 = *(_QWORD *)(a1 + 24);
  p_ptr = (char *)&ptr;
  v217 = a1;
  v11 = *(_QWORD *)(v9 + 8);
  v213 = a2;
  v214 = a3;
  v211 = v11;
  LODWORD(v11) = *(_DWORD *)(v9 + 48);
  v215 = a4;
  v216 = a5;
  LODWORD(src) = v11;
  LODWORD(ptr) = 323;
  v12 = sub_21B6DA0(a6, &ptr, 1);
  v13 = v8[1];
  v14 = (_QWORD *)(v13 + 8LL * (unsigned int)v12);
  v15 = (_QWORD *)(v13 + 8 * HIDWORD(v12));
  if ( v14 == v15 )
    goto LABEL_5;
  while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 323) )
  {
    if ( v15 == ++v14 )
      goto LABEL_5;
  }
  if ( v15 == v14 )
  {
LABEL_5:
    v212 = sub_10DCD30((__int64)v8, 0xCC0u) == 0;
  }
  else
  {
    do
    {
      v16 = *v14;
      if ( *(_QWORD *)(*v14 + 16LL) )
        v16 = *(_QWORD *)(*v14 + 16LL);
      ++v14;
      *(_BYTE *)(v16 + 44) |= 1u;
      if ( v14 == v15 )
        break;
      while ( !*v14 || !(unsigned __int8)sub_21B9810(*v14, 323) )
      {
        if ( v15 == ++v14 )
          goto LABEL_13;
      }
    }
    while ( v15 != v14 );
LABEL_13:
    v212 = 0;
  }
  v228 = 0x1000000000LL;
  v17 = (__m128i *)v223;
  ptr = v229;
  sub_21B7CF0(v8, 36);
  sub_21B7CF0(v8, 345);
  sub_21B7CF0(v8, 3480);
  if ( *(_QWORD *)(v211 + 496) )
  {
    sub_C05100((__int64)v223, "--sysroot=", v211 + 488);
    v64 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*v8 + 16LL))(v8, v223[0], v223[1]);
    v65 = (unsigned int)v228;
    v66 = (unsigned int)v228 + 1LL;
    if ( v66 > HIDWORD(v228) )
    {
      v218 = (void **)v64;
      sub_2237220(&ptr, v229, v66, 8);
      v65 = (unsigned int)v228;
      v64 = (__int64)v218;
    }
    *((_QWORD *)ptr + v65) = v64;
    LODWORD(v228) = v228 + 1;
    if ( v223[0] != &v224 )
      operator delete(v223[0]);
  }
  LODWORD(v223[0]) = 3203;
  v18 = sub_21B6DA0(v8, v223, 1);
  v19 = v8[1];
  v20 = (_QWORD *)(v19 + 8LL * (unsigned int)v18);
  v21 = (_QWORD *)(v19 + 8 * HIDWORD(v18));
  if ( v20 != v21 )
  {
    while ( !*v20 || !(unsigned __int8)sub_21B9810(*v20, 3203) )
    {
      if ( v21 == ++v20 )
        goto LABEL_19;
    }
    if ( v21 != v20 )
    {
      do
      {
        v61 = *v20;
        if ( *(_QWORD *)(*v20 + 16LL) )
          v61 = *(_QWORD *)(*v20 + 16LL);
        ++v20;
        *(_BYTE *)(v61 + 44) |= 1u;
        if ( v20 == v21 )
          break;
        while ( !*v20 || !(unsigned __int8)sub_21B9810(*v20, 3203) )
        {
          if ( v21 == ++v20 )
            goto LABEL_87;
        }
      }
      while ( v21 != v20 );
LABEL_87:
      v62 = (unsigned int)v228;
      v63 = (unsigned int)v228 + 1LL;
      if ( v63 > HIDWORD(v228) )
      {
        sub_2237220(&ptr, v229, v63, 8);
        v62 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v62) = "-export-dynamic";
      LODWORD(v228) = v228 + 1;
    }
  }
LABEL_19:
  LODWORD(v223[0]) = 3321;
  v22 = sub_21B6DA0(v8, v223, 1);
  v23 = v8[1];
  v24 = (_QWORD *)(v23 + 8LL * (unsigned int)v22);
  v25 = (_QWORD *)(v23 + 8 * HIDWORD(v22));
  if ( v24 == v25 )
    goto LABEL_23;
  while ( !*v24 || !(unsigned __int8)sub_21B9810(*v24, 3321) )
  {
    if ( v25 == ++v24 )
      goto LABEL_23;
  }
  if ( v25 == v24 )
  {
LABEL_23:
    v26 = (unsigned int)v228;
    v27 = HIDWORD(v228);
    v28 = (unsigned int)v228 + 1LL;
  }
  else
  {
    do
    {
      v29 = *v24;
      if ( *(_QWORD *)(*v24 + 16LL) )
        v29 = *(_QWORD *)(*v24 + 16LL);
      ++v24;
      *(_BYTE *)(v29 + 44) |= 1u;
      if ( v24 == v25 )
        break;
      while ( !*v24 || !(unsigned __int8)sub_21B9810(*v24, 3321) )
      {
        if ( v25 == ++v24 )
          goto LABEL_33;
      }
    }
    while ( v25 != v24 );
LABEL_33:
    v30 = (unsigned int)v228;
    v31 = (unsigned int)v228 + 1LL;
    if ( HIDWORD(v228) < v31 )
    {
      sub_2237220(&ptr, v229, v31, 8);
      v30 = (unsigned int)v228;
    }
    *((_QWORD *)ptr + v30) = "-s";
    v27 = HIDWORD(v228);
    LODWORD(v228) = v228 + 1;
    v26 = (unsigned int)v228;
    v28 = (unsigned int)v228 + 1LL;
  }
  if ( v27 < v28 )
  {
    sub_2237220(&ptr, v229, v28, 8);
    v26 = (unsigned int)v228;
  }
  *((_QWORD *)ptr + v26) = "--build-id";
  v32 = (unsigned int)(v228 + 1);
  LODWORD(v228) = v228 + 1;
  if ( !v212 )
  {
    if ( v32 + 1 > (unsigned __int64)HIDWORD(v228) )
    {
      sub_2237220(&ptr, v229, v32 + 1, 8);
      v32 = (unsigned int)v228;
    }
    *((_QWORD *)ptr + v32) = "--eh-frame-hdr";
    v32 = (unsigned int)(v228 + 1);
    LODWORD(v228) = v228 + 1;
  }
  if ( v32 + 1 > (unsigned __int64)HIDWORD(v228) )
  {
    sub_2237220(&ptr, v229, v32 + 1, 8);
    v32 = (unsigned int)v228;
  }
  v33 = (_DWORD)src == 37;
  *((_QWORD *)ptr + v32) = "-m";
  v34 = (unsigned int)(v228 + 1);
  LODWORD(v228) = v228 + 1;
  if ( v33 )
  {
    v67 = v34 + 1;
    if ( v67 > HIDWORD(v228) )
      sub_2237220(&ptr, v229, v67, 8);
    *((_QWORD *)ptr + (unsigned int)v228) = "elf_i386_nacl";
    LODWORD(v228) = v228 + 1;
    goto LABEL_102;
  }
  switch ( (_DWORD)src )
  {
    case 1:
      v165 = v34 + 1;
      if ( v165 > HIDWORD(v228) )
        sub_2237220(&ptr, v229, v165, 8);
      *((_QWORD *)ptr + (unsigned int)v228) = "armelf_nacl";
      LODWORD(v228) = v228 + 1;
      goto LABEL_102;
    case 0x26:
      v167 = v34 + 1;
      if ( v167 > HIDWORD(v228) )
        sub_2237220(&ptr, v229, v167, 8);
      *((_QWORD *)ptr + (unsigned int)v228) = "elf_x86_64_nacl";
      LODWORD(v228) = v228 + 1;
      goto LABEL_102;
    case 0x11:
      v160 = (unsigned int)v34;
      v161 = (unsigned int)v34 + 1LL;
      if ( v161 > HIDWORD(v228) )
      {
        sub_2237220(&ptr, v229, v161, 8);
        v160 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v160) = "mipselelf_nacl";
      LODWORD(v228) = v228 + 1;
      goto LABEL_102;
  }
  sub_FC70B0((__int64)v223, *(_QWORD *)v211, 0, 513);
  v35 = sub_22B7480(v9 + 16);
  v36 = (unsigned __int8 *)v223[0];
  v37 = (_BYTE *)v35;
  v39 = v38;
  if ( !v223[0] )
  {
    v173 = v223[1];
    v174 = *((_DWORD *)v223[1] + 3744);
    if ( v174 )
    {
      v175 = (unsigned int)(v174 - 1);
      *((_DWORD *)v223[1] + 3744) = v175;
      v36 = (unsigned __int8 *)v173[v175 + 1856];
      v176 = *((unsigned int *)v36 + 134);
      *v36 = 0;
      v177 = *((_QWORD *)v36 + 66);
      *((_DWORD *)v36 + 106) = 0;
      v178 = v177 + (v176 << 6);
      if ( v177 != v178 )
      {
        src = (void *)v39;
        v218 = v223;
        v179 = v177;
        v219 = &ptr;
        v180 = v8;
        v181 = v178;
        do
        {
          while ( 1 )
          {
            v181 -= 64;
            v182 = *(void **)(v181 + 24);
            if ( v182 == (void *)(v181 + 40) )
              break;
            operator delete(v182);
            if ( v179 == v181 )
              goto LABEL_323;
          }
        }
        while ( v179 != v181 );
LABEL_323:
        v8 = v180;
        v17 = (__m128i *)v218;
        v39 = (signed __int64)src;
        p_ptr = (char *)v219;
      }
      *((_DWORD *)v36 + 134) = 0;
    }
    else
    {
      src = v37;
      v36 = (unsigned __int8 *)operator new(0x3A0u);
      *v36 = 0;
      *((_QWORD *)v36 + 12) = v36 + 112;
      *((_QWORD *)v36 + 16) = v36 + 144;
      *((_QWORD *)v36 + 20) = v36 + 176;
      *((_QWORD *)v36 + 24) = v36 + 208;
      *((_QWORD *)v36 + 28) = v36 + 240;
      *((_QWORD *)v36 + 32) = v36 + 272;
      *((_QWORD *)v36 + 36) = v36 + 304;
      *((_QWORD *)v36 + 40) = v36 + 336;
      *((_QWORD *)v36 + 44) = v36 + 368;
      *((_QWORD *)v36 + 48) = v36 + 400;
      *((_QWORD *)v36 + 52) = v36 + 432;
      *((_QWORD *)v36 + 13) = 0;
      v36[112] = 0;
      *((_QWORD *)v36 + 17) = 0;
      v36[144] = 0;
      *((_QWORD *)v36 + 21) = 0;
      v36[176] = 0;
      *((_QWORD *)v36 + 25) = 0;
      v36[208] = 0;
      *((_QWORD *)v36 + 29) = 0;
      v36[240] = 0;
      *((_QWORD *)v36 + 33) = 0;
      v36[272] = 0;
      *((_QWORD *)v36 + 37) = 0;
      v36[304] = 0;
      *((_QWORD *)v36 + 41) = 0;
      v36[336] = 0;
      *((_QWORD *)v36 + 45) = 0;
      v36[368] = 0;
      *((_QWORD *)v36 + 49) = 0;
      v36[400] = 0;
      *((_QWORD *)v36 + 53) = 0x800000000LL;
      v37 = src;
      *((_QWORD *)v36 + 66) = v36 + 544;
      *((_QWORD *)v36 + 67) = 0x600000000LL;
    }
    v223[0] = v36;
  }
  v36[*v36 + 1] = 0;
  v220 = v222;
  if ( &v37[v39] && !v37 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v39 > 0xF )
  {
    if ( v39 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src = v37;
    v40 = (_QWORD *)operator new(v39 + 1);
    v222[0] = v39;
    v220 = v40;
LABEL_304:
    memcpy(v40, v37, v39);
    v40 = v220;
    goto LABEL_51;
  }
  if ( v39 == 1 )
  {
    LOBYTE(v222[0]) = *v37;
    v40 = v222;
    goto LABEL_51;
  }
  v40 = v222;
  if ( v39 )
    goto LABEL_304;
LABEL_51:
  n = v39;
  *((_BYTE *)v40 + v39) = 0;
  v41 = v223[0];
  v42 = *(unsigned __int8 *)v223[0];
  *(_BYTE *)v223[0] = v42 + 1;
  v43 = (unsigned __int8)v42;
  v44 = 4 * (v42 + 3);
  v45 = (void **)&v41[v44];
  v46 = (_BYTE *)v41[v44];
  if ( v220 == v222 )
  {
    v168 = n;
    if ( n )
    {
      if ( n == 1 )
        *v46 = v222[0];
      else
        memcpy(v46, v220, n);
      v168 = n;
      v46 = *v45;
    }
    v45[1] = (void *)v168;
    v46[v168] = 0;
    v46 = v220;
    goto LABEL_55;
  }
  if ( v46 == (_BYTE *)&v41[v44 + 2] )
  {
    *v45 = v220;
    v45[1] = (void *)n;
    v45[2] = (void *)v222[0];
    goto LABEL_317;
  }
  v47 = v41[4 * v43 + 14];
  *v45 = v220;
  v45[1] = (void *)n;
  v45[2] = (void *)v222[0];
  if ( !v46 )
  {
LABEL_317:
    v46 = v222;
    v220 = v222;
    goto LABEL_55;
  }
  v220 = v46;
  v222[0] = v47;
LABEL_55:
  n = 0;
  *v46 = 0;
  if ( v220 != v222 )
    operator delete(v220);
  v48 = (unsigned __int8 *)v223[0];
  if ( !v223[0] )
  {
    v183 = v223[1];
    v184 = *((_DWORD *)v223[1] + 3744);
    if ( v184 )
    {
      v185 = (unsigned int)(v184 - 1);
      *((_DWORD *)v223[1] + 3744) = v185;
      v48 = (unsigned __int8 *)v183[v185 + 1856];
      v186 = *((unsigned int *)v48 + 134);
      *v48 = 0;
      v187 = *((_QWORD *)v48 + 66);
      *((_DWORD *)v48 + 106) = 0;
      v188 = v187 + (v186 << 6);
      if ( v187 != v188 )
      {
        src = p_ptr;
        v189 = v17;
        v190 = v8;
        v191 = v187;
        do
        {
          while ( 1 )
          {
            v188 -= 64;
            v192 = *(void **)(v188 + 24);
            if ( v192 == (void *)(v188 + 40) )
              break;
            operator delete(v192);
            if ( v191 == v188 )
              goto LABEL_330;
          }
        }
        while ( v191 != v188 );
LABEL_330:
        v8 = v190;
        v17 = v189;
        p_ptr = (char *)src;
      }
      *((_DWORD *)v48 + 134) = 0;
    }
    else
    {
      v48 = (unsigned __int8 *)operator new(0x3A0u);
      *v48 = 0;
      *((_QWORD *)v48 + 12) = v48 + 112;
      *((_QWORD *)v48 + 16) = v48 + 144;
      *((_QWORD *)v48 + 20) = v48 + 176;
      *((_QWORD *)v48 + 24) = v48 + 208;
      *((_QWORD *)v48 + 28) = v48 + 240;
      *((_QWORD *)v48 + 32) = v48 + 272;
      *((_QWORD *)v48 + 36) = v48 + 304;
      *((_QWORD *)v48 + 40) = v48 + 336;
      *((_QWORD *)v48 + 44) = v48 + 368;
      *((_QWORD *)v48 + 48) = v48 + 400;
      *((_QWORD *)v48 + 52) = v48 + 432;
      *((_QWORD *)v48 + 13) = 0;
      v48[112] = 0;
      *((_QWORD *)v48 + 17) = 0;
      v48[144] = 0;
      *((_QWORD *)v48 + 21) = 0;
      v48[176] = 0;
      *((_QWORD *)v48 + 25) = 0;
      v48[208] = 0;
      *((_QWORD *)v48 + 29) = 0;
      v48[240] = 0;
      *((_QWORD *)v48 + 33) = 0;
      v48[272] = 0;
      *((_QWORD *)v48 + 37) = 0;
      v48[304] = 0;
      *((_QWORD *)v48 + 41) = 0;
      v48[336] = 0;
      *((_QWORD *)v48 + 45) = 0;
      v48[368] = 0;
      *((_QWORD *)v48 + 49) = 0;
      v48[400] = 0;
      *((_QWORD *)v48 + 53) = 0x800000000LL;
      *((_QWORD *)v48 + 66) = v48 + 544;
      *((_QWORD *)v48 + 67) = 0x600000000LL;
    }
    v223[0] = v48;
  }
  v48[*v48 + 1] = 1;
  v49 = v223[0];
  v50 = *(unsigned __int8 *)v223[0];
  *(_BYTE *)v223[0] = v50 + 1;
  v49[v50 + 2] = "Native Client";
  if ( (_BYTE)v226 )
  {
    sub_FC7790(v224, v17->m128i_i64, SHIBYTE(v226));
    v224 = 0;
    v226 = 0;
  }
  if ( v225 != &v17[3] )
    operator delete(v225);
  v51 = (void **)v223[0];
  if ( v223[0] )
  {
    v52 = v223[1];
    if ( v223[1] )
    {
      if ( v223[0] < v223[1] || v223[0] > (char *)v223[1] + 14848 )
      {
        v53 = *((void ***)v223[0] + 66);
        v54 = &v53[8 * (unsigned __int64)*((unsigned int *)v223[0] + 134)];
        if ( v53 != v54 )
        {
          src = p_ptr;
          v55 = v17;
          v56 = v8;
          v57 = v53;
          do
          {
            while ( 1 )
            {
              v54 -= 8;
              v58 = (void **)v54[3];
              if ( v58 == v54 + 5 )
                break;
              operator delete(v58);
              if ( v57 == v54 )
                goto LABEL_69;
            }
          }
          while ( v57 != v54 );
LABEL_69:
          v8 = v56;
          v54 = (void **)v51[66];
          v17 = v55;
          p_ptr = (char *)src;
        }
        if ( v54 != v51 + 68 )
          free(v54);
        v59 = (void **)v51[52];
        if ( v59 != v51 + 54 )
          free(v59);
        v60 = v51 + 48;
        src = v51 + 8;
        do
        {
          while ( *v60 != v60 + 2 )
          {
            operator delete(*v60);
            v60 -= 4;
            if ( v60 == src )
              goto LABEL_77;
          }
          v60 -= 4;
        }
        while ( v60 != src );
LABEL_77:
        operator delete(v51, 0x3A0u);
      }
      else
      {
        v172 = *((unsigned int *)v223[1] + 3744);
        *((_DWORD *)v223[1] + 3744) = v172 + 1;
        v52[v172 + 1856] = v51;
      }
    }
  }
LABEL_102:
  if ( v212 )
  {
    v68 = (unsigned int)v228;
    v69 = (unsigned int)v228 + 1LL;
    if ( v69 > HIDWORD(v228) )
    {
      sub_2237220(p_ptr, p_ptr + 16, v69, 8);
      v68 = (unsigned int)v228;
    }
    *((_QWORD *)ptr + v68) = "-static";
  }
  else
  {
    LODWORD(v223[0]) = 3264;
    v147 = sub_21B6DA0(v8, v17, 1);
    v148 = v8[1];
    v149 = (_QWORD *)(v148 + 8LL * (unsigned int)v147);
    v150 = (_QWORD *)(v148 + 8 * HIDWORD(v147));
    if ( v149 == v150 )
      goto LABEL_239;
    while ( !*v149 || !(unsigned __int8)sub_21B9810(*v149, 3264) )
    {
      if ( v150 == ++v149 )
        goto LABEL_239;
    }
    if ( v150 == v149 )
    {
LABEL_239:
      v71 = (unsigned int)v228;
      v70 = HIDWORD(v228);
      v72 = (unsigned int)v228 + 1LL;
      goto LABEL_107;
    }
    do
    {
      v151 = *v149;
      if ( *(_QWORD *)(*v149 + 16LL) )
        v151 = *(_QWORD *)(*v149 + 16LL);
      ++v149;
      *(_BYTE *)(v151 + 44) |= 1u;
      if ( v149 == v150 )
        break;
      while ( !*v149 || !(unsigned __int8)sub_21B9810(*v149, 3264) )
      {
        if ( v150 == ++v149 )
          goto LABEL_247;
      }
    }
    while ( v150 != v149 );
LABEL_247:
    v152 = (unsigned int)v228;
    v153 = (unsigned int)v228 + 1LL;
    if ( HIDWORD(v228) < v153 )
    {
      sub_2237220(p_ptr, p_ptr + 16, v153, 8);
      v152 = (unsigned int)v228;
    }
    *((_QWORD *)ptr + v152) = "-shared";
  }
  v70 = HIDWORD(v228);
  LODWORD(v228) = v228 + 1;
  v71 = (unsigned int)v228;
  v72 = (unsigned int)v228 + 1LL;
LABEL_107:
  if ( v72 > v70 )
  {
    sub_2237220(p_ptr, p_ptr + 16, v72, 8);
    v71 = (unsigned int)v228;
  }
  *((_QWORD *)ptr + v71) = "-o";
  v73 = *v215;
  LODWORD(v228) = v228 + 1;
  v74 = (unsigned int)v228;
  if ( (unsigned __int64)(unsigned int)v228 + 1 > HIDWORD(v228) )
  {
    sub_2237220(p_ptr, p_ptr + 16, (unsigned int)v228 + 1LL, 8);
    v74 = (unsigned int)v228;
  }
  *((_QWORD *)ptr + v74) = v73;
  v223[0] = (void *)0xBEB00000BF0LL;
  LODWORD(v228) = v228 + 1;
  v75 = sub_21B6DA0(v8, v17, 2);
  v76 = v8[1];
  v224 = 0xBEB00000BF0LL;
  v77 = (_QWORD *)(v76 + 8LL * (unsigned int)v75);
  v78 = (_QWORD *)(v76 + 8 * HIDWORD(v75));
  src = v78;
  v79 = _mm_loadh_ps((const double *)&src);
  *(__m128 *)v223 = v79;
  if ( v77 == v78 )
    goto LABEL_118;
  src = v8;
  while ( 1 )
  {
    v80 = *v77;
    if ( *v77 )
    {
      if ( (unsigned __int8)sub_21B9810(*v77, 3056) || (unsigned __int8)sub_21B9810(v80, 3051) )
        break;
    }
    v223[0] = ++v77;
    if ( v78 == v77 )
    {
      v8 = src;
      goto LABEL_118;
    }
  }
  v8 = src;
  src = v78;
  v224 = 0xBEB00000BF0LL;
  v79 = _mm_loadh_ps((const double *)&src);
  *(__m128 *)v223 = v79;
  if ( v78 == v77 )
  {
LABEL_118:
    if ( !sub_10DCD30((__int64)v8, 0xCC0u) )
    {
      sub_112D4E0(v17, v9, "crt1.o");
      v202 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*v8 + 16LL))(v8, v223[0], v223[1]);
      v203 = (unsigned int)v228;
      v204 = (unsigned int)v228 + 1LL;
      if ( v204 > HIDWORD(v228) )
      {
        src = v202;
        sub_2237220(p_ptr, p_ptr + 16, v204, 8);
        v203 = (unsigned int)v228;
        v202 = src;
      }
      *((_QWORD *)ptr + v203) = v202;
      LODWORD(v228) = v228 + 1;
      if ( v223[0] != &v17[1] )
        operator delete(v223[0]);
    }
    sub_112D4E0(v17, v9, "crti.o");
    v81 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*v8 + 16LL))(v8, v223[0], v223[1]);
    v82 = (unsigned int)v228;
    v83 = (unsigned int)v228 + 1LL;
    if ( v83 > HIDWORD(v228) )
    {
      src = v81;
      sub_2237220(p_ptr, p_ptr + 16, v83, 8);
      v82 = (unsigned int)v228;
      v81 = src;
    }
    *((_QWORD *)ptr + v82) = v81;
    LODWORD(v228) = v228 + 1;
    if ( v223[0] != &v17[1] )
      operator delete(v223[0]);
    v84 = "crtbeginT.o";
    if ( !v212 )
    {
      v193 = sub_10DCD30((__int64)v8, 0xCC0u);
      v84 = "crtbeginS.o";
      if ( !v193 )
        v84 = (char *)"crtbegin.o";
    }
    sub_112D4E0(v17, v9, v84);
    v85 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*v8 + 16LL))(v8, v223[0], v223[1]);
    v86 = (unsigned int)v228;
    v87 = (unsigned int)v228 + 1LL;
    if ( v87 > HIDWORD(v228) )
    {
      src = v85;
      sub_2237220(p_ptr, p_ptr + 16, v87, 8);
      v86 = (unsigned int)v228;
      v85 = src;
    }
    *((_QWORD *)ptr + v86) = v85;
    LODWORD(v228) = v228 + 1;
    if ( v223[0] != &v17[1] )
      operator delete(v223[0]);
  }
  else
  {
    do
    {
      v88 = *v77;
      if ( *(_QWORD *)(*v77 + 16LL) )
        v88 = *(_QWORD *)(*v77 + 16LL);
      v89 = v77 + 1;
      *(_BYTE *)(v88 + 44) |= 1u;
      v223[0] = v89;
      if ( v89 == v78 )
        break;
      v90 = p_ptr;
      v91 = v17;
      v92 = v8;
      v93 = v78;
      v94 = v90;
      while ( 1 )
      {
        if ( *v89 )
        {
          src = (void *)*v89;
          if ( (unsigned __int8)sub_21B9810(src, 3056) || (unsigned __int8)sub_21B9810(src, 3051) )
            break;
        }
        v223[0] = ++v89;
        if ( v93 == v89 )
        {
          v8 = v92;
          v17 = v91;
          p_ptr = v94;
          goto LABEL_138;
        }
      }
      v77 = v223[0];
      v142 = v94;
      v78 = v93;
      v8 = v92;
      v17 = v91;
      p_ptr = v142;
    }
    while ( v78 != v223[0] );
  }
LABEL_138:
  v223[0] = (void *)0xD250000089CLL;
  sub_21B6650(v8, p_ptr, v17, 2);
  sub_112D940(v9, (__int64)v8, (__int64)p_ptr, v95, v96);
  LODWORD(v223[0]) = 3519;
  v97 = sub_21B6DA0(v8, v17, 1);
  v98 = v8[1];
  v99 = (_QWORD *)(v98 + 8LL * (unsigned int)v97);
  v100 = (_QWORD *)(v98 + 8 * HIDWORD(v97));
  if ( v99 != v100 )
  {
    while ( !*v99 || !(unsigned __int8)sub_21B9810(*v99, 3519) )
    {
      if ( v100 == ++v99 )
        goto LABEL_142;
    }
    if ( v99 != v100 )
    {
      do
      {
        v143 = *v99;
        if ( *(_QWORD *)(*v99 + 16LL) )
          v143 = *(_QWORD *)(*v99 + 16LL);
        ++v99;
        *(_BYTE *)(v143 + 44) |= 1u;
        if ( v99 == v100 )
          break;
        while ( !*v99 || !(unsigned __int8)sub_21B9810(*v99, 3519) )
        {
          if ( v100 == ++v99 )
            goto LABEL_218;
        }
      }
      while ( v99 != v100 );
LABEL_218:
      v144 = (unsigned int)v228;
      v145 = (unsigned int)v228 + 1LL;
      if ( v145 > HIDWORD(v228) )
      {
        sub_2237220(p_ptr, p_ptr + 16, v145, 8);
        v144 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v144) = "--no-demangle";
      LODWORD(v228) = v228 + 1;
    }
  }
LABEL_142:
  sub_11C3660(v9, v216, (__int64)v8, (__int64)p_ptr, v214);
  if ( *(_DWORD *)(v211 + 16) == 1 )
  {
    v223[0] = (void *)0xBDD00000BF0LL;
    v154 = sub_21B6DA0(v8, v17, 2);
    v155 = v8[1];
    v224 = 0xBDD00000BF0LL;
    v156 = (_QWORD *)(v155 + 8LL * (unsigned int)v154);
    v157 = (_QWORD *)(v155 + 8 * HIDWORD(v154));
    src = v157;
    v79 = _mm_loadh_ps((const double *)&src);
    *(__m128 *)v223 = v79;
    if ( v156 != v157 )
    {
      src = v8;
      while ( 1 )
      {
        v158 = *v156;
        if ( *v156 )
        {
          if ( (unsigned __int8)sub_21B9810(*v156, 3056) || (unsigned __int8)sub_21B9810(v158, 3037) )
            break;
        }
        v223[0] = ++v156;
        if ( v157 == v156 )
        {
          v8 = src;
          goto LABEL_259;
        }
      }
      v8 = src;
      src = v157;
      v224 = 0xBDD00000BF0LL;
      v79 = _mm_loadh_ps((const double *)&src);
      *(__m128 *)v223 = v79;
      if ( v157 != v156 )
      {
        src = v8;
        do
        {
          v162 = *(_QWORD *)(*v156 + 16LL);
          if ( !v162 )
            v162 = *v156;
          v163 = v156 + 1;
          *(_BYTE *)(v162 + 44) |= 1u;
          v223[0] = v163;
          if ( v163 == v157 )
            break;
          while ( 1 )
          {
            v164 = *v163;
            if ( *v163 )
            {
              if ( (unsigned __int8)sub_21B9810(*v163, 3056) || (unsigned __int8)sub_21B9810(v164, 3037) )
                break;
            }
            v223[0] = ++v163;
            if ( v157 == v163 )
              goto LABEL_282;
          }
          v156 = v223[0];
        }
        while ( v157 != v223[0] );
LABEL_282:
        v8 = src;
        goto LABEL_143;
      }
    }
LABEL_259:
    if ( sub_112D7B0(v9, (__int64)v8) )
    {
      if ( sub_10DCD30((__int64)v8, 0xCE0u) && !v212 )
      {
        v205 = (unsigned int)v228;
        v206 = (unsigned int)v228 + 1LL;
        if ( v206 > HIDWORD(v228) )
        {
          sub_2237220(p_ptr, p_ptr + 16, v206, 8);
          v205 = (unsigned int)v228;
        }
        *((_QWORD *)ptr + v205) = "-Bstatic";
        LODWORD(v228) = v228 + 1;
        (*(void (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v9 + 640LL))(v9, v8, p_ptr);
        v207 = (unsigned int)v228;
        v208 = (unsigned int)v228 + 1LL;
        if ( v208 > HIDWORD(v228) )
        {
          sub_2237220(p_ptr, p_ptr + 16, v208, 8);
          v207 = (unsigned int)v228;
        }
        *((_QWORD *)ptr + v207) = "-Bdynamic";
        v159 = (unsigned int)(v228 + 1);
        LODWORD(v228) = v228 + 1;
        goto LABEL_261;
      }
      (*(void (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v9 + 640LL))(v9, v8, p_ptr);
    }
    v159 = (unsigned int)v228;
LABEL_261:
    if ( v159 + 1 > (unsigned __int64)HIDWORD(v228) )
    {
      sub_2237220(p_ptr, p_ptr + 16, v159 + 1, 8);
      v159 = (unsigned int)v228;
    }
    *((_QWORD *)ptr + v159) = "-lm";
    LODWORD(v228) = v228 + 1;
  }
LABEL_143:
  LODWORD(v223[0]) = 3056;
  v101 = sub_21B6DA0(v8, v17, 1);
  v102 = v8[1];
  v103 = (_QWORD *)(v102 + 8LL * (unsigned int)v101);
  v104 = (_QWORD *)(v102 + 8 * HIDWORD(v101));
  if ( v103 == v104 )
    goto LABEL_147;
  while ( !*v103 || !(unsigned __int8)sub_21B9810(*v103, 3056) )
  {
    if ( v104 == ++v103 )
      goto LABEL_147;
  }
  if ( v104 == v103 )
  {
LABEL_147:
    LODWORD(v223[0]) = 3037;
    v105 = sub_21B6DA0(v8, v17, 1);
    v106 = v8[1];
    v107 = (_QWORD *)(v106 + 8LL * (unsigned int)v105);
    v108 = (_QWORD *)(v106 + 8 * HIDWORD(v105));
    if ( v107 == v108 )
      goto LABEL_151;
    while ( !*v107 || !(unsigned __int8)sub_21B9810(*v107, 3037) )
    {
      if ( v108 == ++v107 )
        goto LABEL_151;
    }
    if ( v107 == v108 )
    {
LABEL_151:
      v109 = (unsigned int)v228;
      v110 = (unsigned int)v228 + 1LL;
      if ( v110 > HIDWORD(v228) )
      {
        sub_2237220(p_ptr, p_ptr + 16, v110, 8);
        v109 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v109) = "--start-group";
      LODWORD(v228) = v228 + 1;
      v111 = (unsigned int)v228;
      if ( (unsigned __int64)(unsigned int)v228 + 1 > HIDWORD(v228) )
      {
        sub_2237220(p_ptr, p_ptr + 16, (unsigned int)v228 + 1LL, 8);
        v111 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v111) = "-lc";
      LODWORD(v228) = v228 + 1;
      if ( sub_10DCD30((__int64)v8, 0xC6Au) || sub_10DCD30((__int64)v8, 0xC69u) || *(_DWORD *)(v211 + 16) == 1 )
      {
        v112 = (unsigned int)v228;
        v113 = HIDWORD(v228);
        v114 = (unsigned int)v228 + 1LL;
        if ( *(_DWORD *)(*(_QWORD *)(v217 + 24) + 48LL) == 17 )
        {
          if ( HIDWORD(v228) < v114 )
          {
            sub_2237220(p_ptr, p_ptr + 16, v114, 8);
            v112 = (unsigned int)v228;
          }
          *((_QWORD *)ptr + v112) = "-lnacl";
          v113 = HIDWORD(v228);
          LODWORD(v228) = v228 + 1;
          v112 = (unsigned int)v228;
          v114 = (unsigned int)v228 + 1LL;
        }
        if ( v114 > v113 )
        {
          sub_2237220(p_ptr, p_ptr + 16, v114, 8);
          v112 = (unsigned int)v228;
        }
        *((_QWORD *)ptr + v112) = "-lpthread";
        v115 = (unsigned int)(v228 + 1);
        LODWORD(v228) = v228 + 1;
      }
      else
      {
        v115 = (unsigned int)v228;
      }
      if ( v115 + 1 > (unsigned __int64)HIDWORD(v228) )
      {
        sub_2237220(p_ptr, p_ptr + 16, v115 + 1, 8);
        v115 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v115) = "-lgcc";
      LODWORD(v228) = v228 + 1;
      v116 = (unsigned int)v228;
      if ( (unsigned __int64)(unsigned int)v228 + 1 > HIDWORD(v228) )
      {
        sub_2237220(p_ptr, p_ptr + 16, (unsigned int)v228 + 1LL, 8);
        v116 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v116) = "--as-needed";
      LODWORD(v228) = v228 + 1;
      v117 = (unsigned int)v228;
      v118 = (unsigned int)v228 + 1LL;
      if ( v212 )
      {
        if ( v118 > HIDWORD(v228) )
          sub_2237220(p_ptr, p_ptr + 16, v118, 8);
        *((_QWORD *)ptr + (unsigned int)v228) = "-lgcc_eh";
        v119 = (unsigned int)(v228 + 1);
        LODWORD(v228) = v228 + 1;
      }
      else
      {
        if ( v118 > HIDWORD(v228) )
        {
          sub_2237220(p_ptr, p_ptr + 16, v118, 8);
          v117 = (unsigned int)v228;
        }
        *((_QWORD *)ptr + v117) = "-lgcc_s";
        v119 = (unsigned int)(v228 + 1);
        LODWORD(v228) = v228 + 1;
      }
      if ( v119 + 1 > (unsigned __int64)HIDWORD(v228) )
      {
        sub_2237220(p_ptr, p_ptr + 16, v119 + 1, 8);
        v119 = (unsigned int)v228;
      }
      v120 = v217;
      *((_QWORD *)ptr + v119) = "--no-as-needed";
      v121 = (unsigned int)(v228 + 1);
      v33 = *(_DWORD *)(*(_QWORD *)(v120 + 24) + 48LL) == 17;
      LODWORD(v228) = v228 + 1;
      if ( v33 )
      {
        if ( v121 + 1 > (unsigned __int64)HIDWORD(v228) )
        {
          sub_2237220(p_ptr, p_ptr + 16, v121 + 1, 8);
          v121 = (unsigned int)v228;
        }
        *((_QWORD *)ptr + v121) = "-lpnacl_legacy";
        v121 = (unsigned int)(v228 + 1);
        LODWORD(v228) = v228 + 1;
      }
      if ( v121 + 1 > (unsigned __int64)HIDWORD(v228) )
      {
        sub_2237220(p_ptr, p_ptr + 16, v121 + 1, 8);
        v121 = (unsigned int)v228;
      }
      *((_QWORD *)ptr + v121) = "--end-group";
      LODWORD(v228) = v228 + 1;
    }
    else
    {
      do
      {
        v166 = *(_QWORD *)(*v107 + 16LL);
        if ( !v166 )
          v166 = *v107;
        ++v107;
        *(_BYTE *)(v166 + 44) |= 1u;
        if ( v107 == v108 )
          break;
        while ( !*v107 || !(unsigned __int8)sub_21B9810(*v107, 3037) )
        {
          if ( v108 == ++v107 )
            goto LABEL_174;
        }
      }
      while ( v107 != v108 );
    }
LABEL_174:
    if ( !sub_10DCD30((__int64)v8, 0xBEBu) )
    {
      v194 = sub_10DCD30((__int64)v8, 0xCC0u);
      v195 = "crtendS.o";
      if ( !v194 )
        v195 = "crtend.o";
      sub_112D4E0(v17, v9, v195);
      v196 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*v8 + 16LL))(v8, v223[0], v223[1]);
      v197 = (unsigned int)v228;
      v198 = (unsigned int)v228 + 1LL;
      if ( v198 > HIDWORD(v228) )
      {
        src = v196;
        sub_2237220(p_ptr, p_ptr + 16, v198, 8);
        v197 = (unsigned int)v228;
        v196 = src;
      }
      *((_QWORD *)ptr + v197) = v196;
      LODWORD(v228) = v228 + 1;
      if ( v223[0] != &v17[1] )
        operator delete(v223[0]);
      sub_112D4E0(v17, v9, "crtn.o");
      v199 = (void *)(*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*v8 + 16LL))(v8, v223[0], v223[1]);
      v200 = (unsigned int)v228;
      v201 = (unsigned int)v228 + 1LL;
      if ( v201 > HIDWORD(v228) )
      {
        src = v199;
        sub_2237220(p_ptr, p_ptr + 16, v201, 8);
        v200 = (unsigned int)v228;
        v199 = src;
      }
      *((_QWORD *)ptr + v200) = v199;
      LODWORD(v228) = v228 + 1;
      if ( v223[0] != &v17[1] )
        operator delete(v223[0]);
    }
  }
  else
  {
    do
    {
      v146 = *v103;
      if ( *(_QWORD *)(*v103 + 16LL) )
        v146 = *(_QWORD *)(*v103 + 16LL);
      ++v103;
      *(_BYTE *)(v146 + 44) |= 1u;
      if ( v103 == v104 )
        break;
      while ( !*v103 || !(unsigned __int8)sub_21B9810(*v103, 3056) )
      {
        if ( v104 == ++v103 )
          goto LABEL_175;
      }
    }
    while ( v103 != v104 );
  }
LABEL_175:
  sub_1132E50(v17, v9, nullptr);
  v122 = (*(__int64 (__fastcall **)(_QWORD *, void *, void *))(*v8 + 16LL))(v8, v223[0], v223[1]);
  if ( v223[0] != &v17[1] )
    operator delete(v223[0]);
  v210 = 1;
  v123 = *(const __m128i **)v216;
  v124 = *(unsigned int *)(v216 + 8);
  src = v215;
  v125 = (void *)operator new(0x208u);
  sub_1106AE0(
    (__int64)v125,
    v214,
    v217,
    0x100000000LL,
    (__int64)"@",
    v122,
    (__int64)p_ptr,
    v123,
    v124,
    (__int64)src,
    v210,
    0);
  v223[0] = v125;
  v126 = *(unsigned int *)(v213 + 160);
  v127 = v126 + 1;
  v128 = *(_DWORD *)(v213 + 160);
  if ( v126 + 1 > (unsigned __int64)*(unsigned int *)(v213 + 164) )
  {
    v169 = v213;
    v170 = *(_QWORD *)(v213 + 152);
    v171 = v213 + 152;
    if ( v170 > (unsigned __int64)v17 || (unsigned __int64)v17 >= v170 + 8 * v126 )
    {
      sub_11673D0(v171, v127, v79, a8);
      v126 = *(unsigned int *)(v213 + 160);
      v129 = *(_QWORD *)(v213 + 152);
      v128 = *(_DWORD *)(v213 + 160);
    }
    else
    {
      sub_11673D0(v171, v127, v79, a8);
      v129 = *(_QWORD *)(v169 + 152);
      v126 = *(unsigned int *)(v169 + 160);
      v17 = (__m128i *)((char *)v17 + v129 - v170);
      v128 = *(_DWORD *)(v169 + 160);
    }
  }
  else
  {
    v129 = *(_QWORD *)(v213 + 152);
  }
  v130 = v17->m128i_i64[0];
  v17->m128i_i64[0] = 0;
  *(_QWORD *)(v129 + 8 * v126) = v130;
  v131 = v223[0];
  *(_DWORD *)(v213 + 160) = v128 + 1;
  if ( v131 )
  {
    v132 = *(void (__fastcall **)(_QWORD *))(*v131 + 8LL);
    if ( v132 == sub_10D4290 )
    {
      v133 = v131[58];
      v134 = v131[57];
      *v131 = &off_2BA8F30;
      if ( v133 != v134 )
      {
        do
        {
          if ( *(_BYTE *)(v134 + 32) && *(_QWORD *)v134 != v134 + 16 )
            operator delete(*(void **)v134);
          v134 += 40;
        }
        while ( v133 != v134 );
        v134 = v131[57];
      }
      if ( v134 )
        operator delete((void *)v134);
      v135 = (void *)v131[54];
      if ( v135 )
        operator delete(v135);
      v136 = (_QWORD *)v131[50];
      if ( v136 != v131 + 52 )
        operator delete(v136);
      v137 = (_QWORD *)v131[32];
      if ( v137 != v131 + 34 )
        free(v137);
      v138 = (void **)v131[29];
      v139 = (void **)v131[28];
      if ( v138 != v139 )
      {
        do
        {
          while ( *v139 != v139 + 2 )
          {
            operator delete(*v139);
            v139 += 4;
            if ( v138 == v139 )
              goto LABEL_198;
          }
          v139 += 4;
        }
        while ( v138 != v139 );
LABEL_198:
        v139 = (void **)v131[28];
      }
      if ( v139 )
        operator delete(v139);
      v140 = (void *)v131[25];
      if ( v140 )
        operator delete(v140);
      v141 = (_QWORD *)v131[7];
      if ( v141 != v131 + 9 )
        free(v141);
      operator delete(v131, 0x208u);
    }
    else
    {
      v132(v131);
    }
  }
  if ( ptr != p_ptr + 16 )
    free(ptr);
}
