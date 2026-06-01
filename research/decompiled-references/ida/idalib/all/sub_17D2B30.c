__int64 __fastcall sub_17D2B30(
        __int64 a1,
        __m128i a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v11; // r14
  __int64 v12; // rbp
  void **p_ptr; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 *v21; // rbx
  __int64 result; // rax
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 *v25; // rbx
  char v26; // bp
  unsigned int v27; // r14d
  __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  unsigned int v32; // esi
  char v33; // r13
  unsigned __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned __int64 v36; // rdx
  int v37; // eax
  unsigned int v38; // esi
  unsigned int v39; // eax
  unsigned __int8 v40; // si
  unsigned __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rsi
  unsigned __int64 v50; // r8
  __int64 v51; // r9
  __int64 *v52; // rbx
  __int64 v53; // rbp
  bool v54; // al
  __int64 v55; // rdx
  bool v56; // r12
  char v57; // al
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  void *v62; // rdx
  _QWORD *v63; // rsi
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 v66; // r15
  void *v67; // rcx
  __int64 v68; // rsi
  unsigned __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rax
  _QWORD *v74; // rdi
  __int64 v75; // r12
  __int64 *v76; // r15
  char v77; // r14
  unsigned __int64 v78; // rbp
  __int64 v79; // rsi
  unsigned __int64 v80; // rdx
  __int64 v81; // r14
  _QWORD *v82; // rax
  unsigned __int64 v83; // rsi
  void *v84; // r8
  __int64 *v85; // rax
  __int64 v86; // r12
  __int64 v87; // rax
  _QWORD *v88; // rcx
  char v89; // al
  unsigned __int64 v90; // rdx
  void **v91; // r8
  unsigned __int64 v92; // r9
  _QWORD *v93; // r14
  void ***v94; // r12
  _QWORD *v95; // rdi
  _QWORD *v96; // rbx
  size_t v97; // rdx
  _QWORD *v98; // rbx
  _QWORD *v99; // rbp
  void **v100; // r12
  __int64 *v101; // rbx
  __int64 *v102; // r12
  __int64 v103; // r15
  char v104; // r14
  void *v105; // rcx
  __int64 v106; // rsi
  unsigned __int64 v107; // rdx
  int v108; // eax
  __int64 v109; // r8
  __int64 v110; // r9
  unsigned int v111; // edx
  __int64 v112; // rdx
  unsigned __int64 *v113; // rax
  unsigned __int64 v114; // rcx
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // rax
  char v117; // bl
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  unsigned __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  void *v126; // rax
  _QWORD *v127; // rax
  __int64 *v128; // rbp
  _QWORD *v129; // rax
  __int64 v130; // r15
  __int64 v131; // rdi
  __int64 v132; // rbx
  __int16 v133; // ax
  char v134; // bl
  unsigned __int64 v135; // rax
  __int64 v136; // rsi
  unsigned __int64 v137; // rdx
  unsigned __int64 v138; // r14
  unsigned __int64 v139; // rdx
  __int64 v140; // rax
  _QWORD *v141; // rbx
  unsigned __int64 v142; // r14
  unsigned __int64 v143; // rax
  __int64 v144; // rcx
  _QWORD *v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rcx
  int v148; // r14d
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // r15
  void *v154; // rax
  _QWORD *v155; // rax
  __int64 *v156; // r15
  __int64 v157; // rbp
  char v158; // bl
  __int64 v159; // rbx
  __int64 *v160; // rbp
  __int64 *v161; // rax
  __int64 *v162; // rbp
  __int64 *v163; // r12
  void *v164; // rsi
  _BYTE *v165; // rdx
  __int64 v166; // rbx
  unsigned __int64 v167; // rdx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // r8
  __int64 v171; // r9
  __int64 v172; // r14
  void *v173; // rax
  _QWORD *v174; // rax
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // r9
  __int64 v179; // rax
  _QWORD *v180; // rax
  _BYTE *v181; // rsi
  signed __int64 v182; // rdx
  __int64 v183; // rcx
  unsigned __int8 *v184; // rax
  __int64 v185; // r9
  __int64 v186; // rax
  void **v187; // rcx
  _BYTE *v188; // rdi
  size_t v189; // rax
  __int64 v190; // rsi
  unsigned __int8 v191; // al
  void *v192; // rcx
  _QWORD *v193; // rdi
  _QWORD *v194; // rbx
  _QWORD *v195; // rbx
  _QWORD *v196; // rbp
  void **v197; // r12
  __int64 v198; // rdi
  int v199; // eax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // rbx
  __int64 v203; // r8
  __int64 v204; // r9
  void *v205; // rax
  _QWORD *v206; // rax
  __int64 v207; // rax
  __int64 v208; // r8
  __int64 v209; // r9
  __int64 v210; // r8
  __int64 v211; // r14
  __int64 v212; // rbp
  __int64 v213; // rbx
  __int64 v214; // r12
  signed __int64 v215; // r15
  void *v216; // rdi
  size_t v217; // r12
  _QWORD *v218; // rcx
  unsigned __int64 v219; // rdi
  _QWORD *v220; // rsi
  unsigned __int64 v221; // rdx
  void ***v222; // rax
  _QWORD *v223; // rax
  char *v224; // r15
  __int64 v225; // rax
  char *v226; // rdx
  __int64 v227; // rbx
  char *v228; // rdi
  char *v229; // rax
  unsigned __int64 v230; // rcx
  __int64 v231; // rax
  __m128i v232; // xmm0
  unsigned __int64 v233; // rax
  char *v234; // rdx
  char *v235; // rax
  __int64 v236; // rcx
  void ***v237; // r14
  void ***v238; // rbx
  void **v239; // rax
  int v240; // ebx
  char *v241; // rdx
  __int64 v242; // rcx
  _BYTE *v243; // [rsp-8h] [rbp-260h]
  __int64 *v244; // [rsp+0h] [rbp-258h]
  int v245; // [rsp+0h] [rbp-258h]
  __int64 v246; // [rsp+0h] [rbp-258h]
  std::__detail::_Prime_rehash_policy *v248; // [rsp+10h] [rbp-248h]
  __int64 v249; // [rsp+10h] [rbp-248h]
  unsigned __int64 v250; // [rsp+10h] [rbp-248h]
  unsigned __int64 v251; // [rsp+10h] [rbp-248h]
  void **v252; // [rsp+10h] [rbp-248h]
  unsigned int v253; // [rsp+18h] [rbp-240h]
  __int64 *v254; // [rsp+18h] [rbp-240h]
  std::__detail::_Prime_rehash_policy *v255; // [rsp+18h] [rbp-240h]
  __int64 *v256; // [rsp+18h] [rbp-240h]
  unsigned __int64 v257; // [rsp+20h] [rbp-238h]
  int v259; // [rsp+30h] [rbp-228h]
  int v260; // [rsp+30h] [rbp-228h]
  void *v261; // [rsp+30h] [rbp-228h]
  void **v262; // [rsp+30h] [rbp-228h]
  char v263; // [rsp+30h] [rbp-228h]
  char v264; // [rsp+30h] [rbp-228h]
  __int64 *v265; // [rsp+30h] [rbp-228h]
  unsigned __int64 v266; // [rsp+30h] [rbp-228h]
  void **v267; // [rsp+30h] [rbp-228h]
  unsigned int v269; // [rsp+38h] [rbp-220h]
  unsigned __int8 v270; // [rsp+38h] [rbp-220h]
  __int64 v271; // [rsp+38h] [rbp-220h]
  unsigned __int8 v272; // [rsp+38h] [rbp-220h]
  void **v273; // [rsp+38h] [rbp-220h]
  __int64 v274; // [rsp+38h] [rbp-220h]
  unsigned __int8 *v275; // [rsp+38h] [rbp-220h]
  void **v276; // [rsp+38h] [rbp-220h]
  unsigned __int64 v277; // [rsp+38h] [rbp-220h]
  char v278; // [rsp+40h] [rbp-218h]
  __int64 ***v279; // [rsp+40h] [rbp-218h]
  _BOOL4 v280; // [rsp+48h] [rbp-210h]
  __int64 v281; // [rsp+48h] [rbp-210h]
  _BYTE *v282; // [rsp+48h] [rbp-210h]
  __int64 *v283; // [rsp+48h] [rbp-210h]
  int v284; // [rsp+50h] [rbp-208h]
  __int64 ***v285; // [rsp+68h] [rbp-1F0h]
  signed __int64 v286; // [rsp+70h] [rbp-1E8h]
  __int64 *v287; // [rsp+70h] [rbp-1E8h]
  __int64 *v288; // [rsp+78h] [rbp-1E0h]
  __int64 v289; // [rsp+88h] [rbp-1D0h]
  unsigned __int64 v290; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v291; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v292; // [rsp+A8h] [rbp-1B0h] BYREF
  void *v293; // [rsp+B0h] [rbp-1A8h] BYREF
  unsigned int v294; // [rsp+B8h] [rbp-1A0h]
  unsigned __int8 v295; // [rsp+BCh] [rbp-19Ch]
  void *v296; // [rsp+C0h] [rbp-198h] BYREF
  signed __int64 v297; // [rsp+C8h] [rbp-190h]
  __int64 v298; // [rsp+D0h] [rbp-188h] BYREF
  void *v299; // [rsp+E0h] [rbp-178h] BYREF
  __int64 v300; // [rsp+E8h] [rbp-170h]
  _BYTE v301[32]; // [rsp+F0h] [rbp-168h] BYREF
  void *s; // [rsp+110h] [rbp-148h] BYREF
  unsigned __int64 v303; // [rsp+118h] [rbp-140h]
  void *v304; // [rsp+120h] [rbp-138h] BYREF
  unsigned __int64 v305; // [rsp+128h] [rbp-130h]
  int v306; // [rsp+130h] [rbp-128h] BYREF
  __int64 v307; // [rsp+138h] [rbp-120h]
  _QWORD v308[2]; // [rsp+140h] [rbp-118h] BYREF
  void *ptr; // [rsp+150h] [rbp-108h] BYREF
  __m128i n; // [rsp+158h] [rbp-100h]
  _BYTE v311[12]; // [rsp+190h] [rbp-C8h] BYREF
  char v312; // [rsp+19Ch] [rbp-BCh]
  void *v313; // [rsp+1A0h] [rbp-B8h]
  unsigned __int8 *v314[11]; // [rsp+1B0h] [rbp-A8h] BYREF
  char v315; // [rsp+208h] [rbp-50h]
  unsigned int v316; // [rsp+210h] [rbp-48h]
  char v317; // [rsp+214h] [rbp-44h]

  v11 = a1;
  v12 = *(_QWORD *)(a6 + 48);
  if ( v12 )
    v257 = v12 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v257 = sub_A7AA70(*(_QWORD *)(a1 + 248), a6, a5, a6, (__int64)a7, a8);
  *(_WORD *)v311 = 1;
  sub_1836B60(a1, a9, a6, a10, v311);
  p_ptr = (void **)a6;
  sub_167AF90(a1, a6, v14, v15, v16, v17, a2, a3);
  if ( (unsigned __int8)sub_B8E180(a6 + 64) )
  {
    if ( (_DWORD)a8 )
    {
      v21 = a7;
      do
      {
        if ( *v21 )
          *(_QWORD *)(*v21 + 48) = v257;
        ++v21;
      }
      while ( &a7[(unsigned int)(a8 - 1) + 1] != v21 );
    }
    return sub_B783F0(
             a6,
             *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL),
             *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19072LL),
             0,
             0);
  }
  v23 = *(_QWORD *)(a1 + 248);
  v24 = (__int64)&a7[a8];
  v244 = (__int64 *)v24;
  if ( a7 == (__int64 *)v24 )
  {
    v280 = 1;
    v26 = 1;
    v253 = 0;
    goto LABEL_46;
  }
  v25 = a7;
  v26 = 1;
  v253 = 0;
  v27 = 0;
  do
  {
    v18 = *v25;
    if ( !*v25 )
      goto LABEL_26;
    v33 = *(_BYTE *)(v18 + 80);
    v34 = *(_QWORD *)(v18 + 56);
    v35 = *(unsigned int *)(v18 + 64);
    v36 = (unsigned __int64)(v35 + 63) >> 6;
    if ( v36 <= 1 )
    {
      *(_DWORD *)&v311[8] = v35;
      if ( (unsigned int)v35 <= 0x40 )
      {
        n.m128i_i32[0] = v35;
        ptr = (void *)v34;
        n.m128i_i8[4] = v33;
        if ( v33 )
          goto LABEL_37;
        v24 = (unsigned int)(v35 - 1);
        v28 = 1LL << ((unsigned __int8)v35 - 1);
LABEL_16:
        if ( (v34 & v28) == 0 )
        {
LABEL_37:
          if ( v34 )
          {
            _BitScanReverse64(&v34, v34);
            *(_DWORD *)v311 = v27;
            *(_DWORD *)&v311[8] = 1;
            *(_DWORD *)&v311[4] = 64 - (v34 ^ 0x3F);
            if ( v27 < *(_DWORD *)&v311[4] )
            {
              v27 = 64 - (v34 ^ 0x3F);
              goto LABEL_23;
            }
          }
          else
          {
            *(_DWORD *)v311 = v27;
            *(_QWORD *)&v311[4] = 0x100000000LL;
LABEL_41:
            if ( !v27 )
            {
              v27 = 1;
              goto LABEL_23;
            }
          }
          v38 = v27;
          goto LABEL_34;
        }
        if ( (_DWORD)v35 )
        {
          v29 = 64;
          v24 = (unsigned int)(64 - v35);
          v30 = ~(v34 << (64 - (unsigned __int8)v35));
          if ( v30 )
          {
            _BitScanReverse64(&v31, v30);
            v29 = v31 ^ 0x3F;
          }
        }
        else
        {
          v29 = 0;
        }
        goto LABEL_20;
      }
      sub_2205470(v311, v34, 0);
    }
    else
    {
      sub_2205610(v311, v35, v36, v34);
    }
    LODWORD(v35) = *(_DWORD *)&v311[8];
    v34 = *(_QWORD *)v311;
    n.m128i_i8[4] = v33;
    n.m128i_i32[0] = *(_DWORD *)&v311[8];
    ptr = *(void **)v311;
    if ( !v33 )
    {
      v24 = (unsigned int)(*(_DWORD *)&v311[8] - 1);
      v28 = 1LL << (v311[8] - 1);
      if ( *(_DWORD *)&v311[8] <= 0x40u )
        goto LABEL_16;
      if ( (v28 & *(_QWORD *)(*(_QWORD *)v311 + 8LL * ((unsigned int)v24 >> 6))) == 0 )
        goto LABEL_33;
      v260 = *(_DWORD *)&v311[8];
      v29 = sub_2206800(&ptr);
      LODWORD(v35) = v260;
LABEL_20:
      v32 = v35 + 1 - v29;
      if ( v253 >= v32 )
        v32 = v253;
      v253 = v32;
      goto LABEL_23;
    }
    if ( *(_DWORD *)&v311[8] <= 0x40u )
      goto LABEL_37;
LABEL_33:
    v259 = *(_DWORD *)&v311[8];
    v37 = sub_2206780(&ptr);
    *(_DWORD *)v311 = v27;
    *(_DWORD *)&v311[8] = 1;
    v38 = v259 - v37;
    *(_DWORD *)&v311[4] = v259 - v37;
    if ( v27 >= v259 - v37 )
      goto LABEL_41;
LABEL_34:
    v27 = v38;
LABEL_23:
    p_ptr = &ptr;
    v26 &= sub_AADFF0(v23, (__int64)&ptr, *(_QWORD *)(v23 + 18720), v24, v19);
    if ( n.m128i_i32[0] > 0x40u && ptr )
      operator delete[](ptr);
LABEL_26:
    ++v25;
  }
  while ( v244 != v25 );
  v39 = v27;
  v280 = v27;
  v11 = a1;
  if ( !v39 )
  {
    v20 = v253;
    v280 = v253 == 0;
  }
LABEL_46:
  v290 = 0;
  v291 = 0;
  if ( (*(_BYTE *)(a6 + 29) & 1) != 0 )
  {
    v113 = sub_B8C3D0(a6, (__int64)p_ptr, v18, v24, v19, v20);
    v114 = *v113;
    v115 = *v113 + 8LL * *((unsigned int *)v113 + 2);
    if ( *v113 >= v115 )
    {
      if ( v114 == v115 )
        goto LABEL_47;
      if ( *(_WORD *)(*(_QWORD *)v115 + 36LL) != 325 )
      {
        v121 = v115 + 8;
        do
        {
          v115 = v121;
          if ( v114 == v121 )
            goto LABEL_47;
          v121 += 8LL;
        }
        while ( *(_WORD *)(*(_QWORD *)v115 + 36LL) != 325 );
      }
    }
    else
    {
      v116 = *v113;
      while ( 1 )
      {
        v114 = v116;
        if ( *(_WORD *)(*(_QWORD *)v116 + 36LL) == 325 )
          break;
        v116 += 8LL;
        if ( v115 == v116 )
          goto LABEL_47;
      }
    }
    v40 = v114 != v115;
  }
  else
  {
LABEL_47:
    v40 = 0;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v11 + 232) + 47LL) & 0x10) != 0 )
    v40 = 1;
  if ( (*(_BYTE *)(a6 + 74) & 1) != 0 || (*(_QWORD *)(a6 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v41 = sub_6F3660(a6);
    v42 = *(_QWORD *)(v11 + 248);
    v290 = v41;
    v49 = v41;
    if ( sub_A62E10(v42, v41, v43, v44, v45) )
      v291 = sub_AAF890(*(__int64 **)(v11 + 248), v290, v46, v47, v48);
    else
      v291 = v290;
    v269 = sub_AAC1F0(*(_QWORD *)(v11 + 248), v49, v46, v47, v48);
  }
  else
  {
    v117 = sub_A63240(*(_QWORD **)(v11 + 248), v40, v253, v280, &v290, &v291);
    v269 = sub_AAC1F0(*(_QWORD *)(v11 + 248), v290, v118, v119, v120);
    if ( v117 )
    {
      sub_168B9F0((__int64)v311, (__int64 *)(v11 + 8), *(_DWORD *)(a6 + 24), 0x15A5u, 0);
      sub_15F7200(v311);
    }
  }
  v52 = a7;
  if ( a7 != v244 )
  {
    v278 = v26;
    while ( 1 )
    {
      v66 = *v52;
      if ( !*v52 )
        goto LABEL_74;
      v57 = *(_BYTE *)(v66 + 80);
      v67 = *(void **)(v66 + 56);
      v68 = *(unsigned int *)(v66 + 64);
      v69 = (unsigned __int64)(v68 + 63) >> 6;
      if ( v69 > 1 )
      {
        v263 = *(_BYTE *)(v66 + 80);
        sub_2205610(v311, v68, v69, v67);
        v68 = *(unsigned int *)&v311[8];
        v57 = v263;
        v67 = *(void **)v311;
      }
      else
      {
        *(_DWORD *)&v311[8] = *(_DWORD *)(v66 + 64);
        if ( (unsigned int)v68 > 0x40 )
        {
          v264 = v57;
          sub_2205470(v311, v67, 0);
          v68 = *(unsigned int *)&v311[8];
          v57 = v264;
          v67 = *(void **)v311;
        }
      }
      v70 = *(_QWORD *)(v11 + 232);
      n.m128i_i32[0] = v68;
      ptr = v67;
      n.m128i_i8[4] = v57;
      if ( (*(_BYTE *)(v70 + 1) & 8) != 0 )
      {
        v53 = v290;
        if ( *(_QWORD *)(v66 + 48) != v290 )
        {
LABEL_60:
          v54 = sub_F65240(*(_QWORD *)(v53 & 0xFFFFFFFFFFFFFFF0LL), v68, v70, (__int64)v67, v50, v51);
          v55 = v269;
          v56 = !v54;
          v57 = n.m128i_i8[4];
LABEL_61:
          if ( v57 )
            sub_2206D90(v311, &ptr, v55);
          else
            sub_2206DE0(v311, &ptr, v55);
          v61 = *(_DWORD *)&v311[8];
          v62 = *(void **)v311;
          if ( n.m128i_i32[0] > 0x40u && ptr )
          {
            v284 = *(_DWORD *)&v311[8];
            v261 = *(void **)v311;
            operator delete[](ptr);
            v61 = v284;
            v62 = v261;
          }
          ptr = v62;
          v63 = *(_QWORD **)(v11 + 248);
          n.m128i_i32[0] = v61;
          n.m128i_i8[4] = v56;
          sub_C0CB30(v66 + 56, v63, (__int64)&ptr, v58, v59, v60);
          v64 = *(_QWORD *)(v66 + 72);
          *(_BYTE *)(v66 + 80) = n.m128i_i8[4];
          if ( v64 )
          {
            v65 = *(_QWORD *)&byte_8[*(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF0LL];
            v50 = *(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v50 | ((unsigned __int8)v53 | (unsigned __int8)*(_QWORD *)&byte_8[v53 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (v65 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v65 | (unsigned __int8)*(_QWORD *)(v64 + 8)) & 7) )
            {
              *(_QWORD *)(v66 + 72) = sub_C0A3E0(*(_QWORD **)(v11 + 248), v53, 27, v64, 0, 0, 0);
              v50 = (unsigned __int64)v243;
            }
          }
          if ( (*(_BYTE *)(*(_QWORD *)(v11 + 232) + 1LL) & 8) != 0 )
            v53 = v257;
          *(_QWORD *)(v66 + 48) = v53;
          if ( n.m128i_i32[0] > 0x40u && ptr )
            operator delete[](ptr);
          goto LABEL_74;
        }
        *(_QWORD *)(v66 + 48) = v257;
      }
      else
      {
        if ( (*(_BYTE *)(a6 + 77) & 2) == 0 && v278 )
        {
          v112 = *(_QWORD *)(v11 + 248);
          v56 = 0;
          v53 = *(_QWORD *)(v112 + 18720);
          v55 = *(unsigned __int8 *)(*(_QWORD *)(v112 + 17448) + 14LL);
          goto LABEL_61;
        }
        v53 = v290;
        if ( *(_QWORD *)(v66 + 48) != v290 )
          goto LABEL_60;
      }
      if ( (unsigned int)v68 > 0x40 && v67 )
      {
        ++v52;
        operator delete[](v67);
        if ( v244 == v52 )
          break;
      }
      else
      {
LABEL_74:
        if ( v244 == ++v52 )
          break;
      }
    }
  }
  sub_B783F0(a6, v290, v291, v280, v253);
  v73 = *(_QWORD *)(a6 + 40);
  if ( (v73 & 7) != 0
    || (v73 & 0xFFFFFFFFFFFFFFF8LL) == 0
    || (unsigned __int8)(*(_WORD *)(a6 + 74) >> 7) > 0x3Fu
    || (unsigned __int8)(*(_QWORD *)(a6 + 72) >> 31) > 0x40u
    || (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(v11 + 264) + 32LL),
                          0x1ACEu,
                          *(unsigned int *)(a6 + 24),
                          *(_QWORD *)(v11 + 264),
                          v71,
                          v72) == 1 )
  {
    goto LABEL_129;
  }
  v74 = v308;
  v303 = 1;
  v299 = v301;
  v300 = 0x300000000LL;
  s = v308;
  v304 = nullptr;
  v305 = 0;
  v306 = 1065353216;
  v307 = 0;
  v308[0] = 0;
  if ( a7 == v244 )
    goto LABEL_117;
  v75 = *a7;
  if ( !*a7 )
  {
    v97 = 8;
    goto LABEL_118;
  }
  v76 = a7 + 1;
  v248 = (std::__detail::_Prime_rehash_policy *)v11;
  while ( 2 )
  {
    if ( *(_QWORD *)(v75 + 72) )
      goto LABEL_93;
    v77 = *(_BYTE *)(v75 + 80);
    v78 = *(_QWORD *)(v75 + 56);
    v79 = *(unsigned int *)(v75 + 64);
    v80 = (unsigned __int64)(v79 + 63) >> 6;
    if ( v80 > 1 )
    {
      sub_2205610(v311, v79, v80, *(_QWORD *)(v75 + 56));
LABEL_177:
      LODWORD(v79) = *(_DWORD *)&v311[8];
      if ( v77 )
      {
        if ( *(_DWORD *)&v311[8] <= 0x40u )
        {
          v78 = *(_QWORD *)v311;
LABEL_99:
          v81 = v78;
          goto LABEL_100;
        }
      }
      else if ( *(_DWORD *)&v311[8] <= 0x40u )
      {
        v78 = *(_QWORD *)v311;
        goto LABEL_193;
      }
      v78 = **(_QWORD **)v311;
      v81 = **(_QWORD **)v311;
      if ( *(_QWORD *)v311 )
        operator delete[](*(void **)v311);
      goto LABEL_100;
    }
    *(_DWORD *)&v311[8] = *(_DWORD *)(v75 + 64);
    if ( (unsigned int)v79 > 0x40 )
    {
      sub_2205470(v311, v78, 0);
      goto LABEL_177;
    }
    if ( v77 )
      goto LABEL_99;
LABEL_193:
    if ( (_DWORD)v79 )
    {
      v81 = (__int64)(v78 << (64 - (unsigned __int8)v79)) >> (64 - (unsigned __int8)v79);
      v78 = v81;
    }
    else
    {
      v78 = 0;
      v81 = 0;
    }
LABEL_100:
    v82 = (_QWORD *)operator new(0x18u);
    v83 = v303;
    v82[2] = v75 & 0xFFFFFFFFFFFFFFFBLL;
    v84 = v82;
    *v82 = 0;
    v82[1] = v81;
    v85 = *((__int64 **)s + v78 % v83);
    v86 = v78 % v83;
    if ( v85 )
    {
      v87 = *v85;
      if ( v81 != *(_QWORD *)(v87 + 8) )
      {
        v88 = *(_QWORD **)v87;
        if ( *(_QWORD *)v87 )
        {
          do
          {
            if ( v78 % v83 != v88[1] % v83 )
              break;
            if ( v88[1] == v81 )
              goto LABEL_186;
            v88 = (_QWORD *)*v88;
          }
          while ( v88 );
        }
        goto LABEL_107;
      }
LABEL_186:
      operator delete(v84);
    }
    else
    {
LABEL_107:
      v262 = (void **)v84;
      v89 = std::__detail::_Prime_rehash_policy::_M_need_rehash(
              (std::__detail::_Prime_rehash_policy *)&v306,
              v83,
              v305,
              1u);
      v91 = v262;
      v92 = v90;
      if ( v89 )
      {
        if ( v90 == 1 )
        {
          v308[0] = 0;
          v93 = v308;
        }
        else
        {
          if ( v90 > 0x1FFFFFFFFFFFFFFFLL )
            std::__throw_bad_alloc();
          v217 = 8 * v90;
          v276 = v262;
          v266 = v90;
          v93 = (_QWORD *)operator new(8 * v90);
          memset(v93, 0, v217);
          v91 = v276;
          v92 = v266;
        }
        v218 = v304;
        v304 = nullptr;
        if ( v218 )
        {
          v219 = 0;
          do
          {
            v220 = (_QWORD *)*v218;
            v221 = v218[1] % v92;
            v222 = (void ***)&v93[v221];
            if ( *v222 )
            {
              *v218 = **v222;
              **v222 = v218;
            }
            else
            {
              *v218 = v304;
              v304 = v218;
              *v222 = &v304;
              if ( *v218 )
                v93[v219] = v218;
              v219 = v221;
            }
            v218 = v220;
          }
          while ( v220 );
        }
        if ( s != v308 )
        {
          v277 = v92;
          v267 = v91;
          operator delete(s);
          v92 = v277;
          v91 = v267;
        }
        v303 = v92;
        s = v93;
        v86 = v78 % v92;
      }
      else
      {
        v93 = s;
      }
      v94 = (void ***)&v93[v86];
      if ( *v94 )
      {
        *v91 = **v94;
        **v94 = v91;
      }
      else
      {
        v223 = v304;
        v304 = v91;
        *v91 = v223;
        if ( v223 )
          v93[v223[1] % v303] = v91;
        *v94 = &v304;
      }
      ++v305;
    }
LABEL_93:
    if ( v244 != v76 )
    {
      v75 = *v76++;
      if ( !v75 )
      {
        v11 = (__int64)v248;
LABEL_115:
        v95 = v304;
        if ( v304 )
        {
          do
          {
            v96 = (_QWORD *)*v95;
            operator delete(v95);
            v95 = v96;
          }
          while ( v96 );
        }
LABEL_117:
        v74 = s;
        v97 = 8 * v303;
LABEL_118:
        memset(v74, 0, v97);
        v305 = 0;
        v304 = nullptr;
        if ( s != v308 )
          operator delete(s);
        v98 = v299;
        v99 = (char *)v299 + 8 * (unsigned int)v300;
        if ( v299 != v99 )
        {
          do
          {
            v100 = (void **)*--v99;
            if ( *v99 )
            {
              if ( *v100 != v100 + 2 )
                free(*v100);
              operator delete(v100, 0x28u);
            }
          }
          while ( v98 != v99 );
          v99 = v299;
        }
        if ( v99 != (_QWORD *)v301 )
          free(v99);
LABEL_129:
        if ( !sub_B78550(a6) || a7 == v244 )
          goto LABEL_148;
        goto LABEL_131;
      }
      continue;
    }
    break;
  }
  v11 = (__int64)v248;
  if ( !v305 )
    goto LABEL_115;
  v128 = a7;
  v255 = v248;
  while ( 2 )
  {
    v130 = *v128;
    v131 = *(_QWORD *)(*v128 + 72);
    if ( !v131 )
      goto LABEL_206;
    v132 = sub_BFB840(v131);
    v133 = *(_WORD *)v132 & 0x1FF;
    if ( ((v133 + 394) & 0x1FFu) > 1 )
      goto LABEL_205;
    if ( ((*(_WORD *)(v132 + 2) >> 3) & 0x3Fu) - 5 > 1 )
      goto LABEL_206;
    v147 = *(_QWORD *)(v132 + 24);
    if ( (*(_WORD *)v147 & 0x1FF) != 0x34 )
      goto LABEL_206;
    sub_179A760((__int64)v311, *(_QWORD *)(v147 + 16), *(_DWORD *)(v147 + 24));
    v148 = *(_DWORD *)&v311[8];
    if ( *(_DWORD *)&v311[8] > 0x40u )
    {
      if ( v148 - (unsigned int)sub_C16760((__int64)v311) <= 0x40 && **(_QWORD **)v311 == 1 )
      {
        operator delete[](*(void **)v311);
        goto LABEL_233;
      }
      if ( *(_QWORD *)v311 )
        operator delete[](*(void **)v311);
      goto LABEL_206;
    }
    if ( *(_QWORD *)v311 != 1 )
      goto LABEL_206;
LABEL_233:
    v132 = *(_QWORD *)(v132 + 16);
    v133 = *(_WORD *)v132 & 0x1FF;
LABEL_205:
    if ( v133 != 71 || (*(_BYTE *)(*(_QWORD *)(v132 + 16) + 28LL) & 0x7F) != 0x21 )
      goto LABEL_206;
    v129 = (_QWORD *)(*(_QWORD *)(v130 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v130 + 16) & 4) != 0 )
      v129 = (_QWORD *)*v129;
    if ( !v129 || (_QWORD *)a6 != v129 - 8 )
    {
LABEL_206:
      v134 = *(_BYTE *)(v130 + 80);
      v135 = *(_QWORD *)(v130 + 56);
      v136 = *(unsigned int *)(v130 + 64);
      v137 = (unsigned __int64)(v136 + 63) >> 6;
      if ( v137 > 1 )
      {
        sub_2205610(v311, v136, v137, v135);
      }
      else
      {
        *(_DWORD *)&v311[8] = *(_DWORD *)(v130 + 64);
        if ( (unsigned int)v136 <= 0x40 )
        {
          if ( v134 )
          {
LABEL_209:
            v138 = v135;
            goto LABEL_210;
          }
          goto LABEL_241;
        }
        sub_2205470(v311, v135, 0);
      }
      LODWORD(v136) = *(_DWORD *)&v311[8];
      if ( v134 )
      {
        if ( *(_DWORD *)&v311[8] <= 0x40u )
        {
          v135 = *(_QWORD *)v311;
          goto LABEL_209;
        }
      }
      else if ( *(_DWORD *)&v311[8] <= 0x40u )
      {
        v135 = *(_QWORD *)v311;
LABEL_241:
        if ( (_DWORD)v136 )
        {
          v135 = (__int64)(v135 << (64 - (unsigned __int8)v136)) >> (64 - (unsigned __int8)v136);
          v138 = v135;
        }
        else
        {
          v135 = 0;
          v138 = 0;
        }
        goto LABEL_210;
      }
      v135 = **(_QWORD **)v311;
      v138 = **(_QWORD **)v311;
      if ( *(_QWORD *)v311 )
      {
        v250 = **(_QWORD **)v311;
        operator delete[](*(void **)v311);
        v135 = v250;
      }
LABEL_210:
      v139 = v135 % v303;
      v140 = *((_QWORD *)s + v135 % v303);
      if ( v140 )
      {
        v141 = *(_QWORD **)v140;
        if ( v138 == *(_QWORD *)(*(_QWORD *)v140 + 8LL) )
        {
LABEL_215:
          v142 = v141[2] & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v141[2] & 4) != 0 || !v142 )
          {
            v145 = *(_QWORD **)v142;
            if ( v130 != **(_QWORD **)v142 )
            {
              v146 = *(unsigned int *)(v142 + 8);
              if ( v146 + 1 > (unsigned __int64)*(unsigned int *)(v142 + 12) )
              {
                sub_2237220(v141[2] & 0xFFFFFFFFFFFFFFF8LL, v142 + 16, v146 + 1, 8);
                v145 = *(_QWORD **)v142;
                v146 = *(unsigned int *)(v142 + 8);
              }
              v145[v146] = v130;
              ++*(_DWORD *)(v142 + 8);
            }
          }
          else if ( v130 != v142 )
          {
            v143 = operator new(0x28u);
            v144 = (unsigned int)v300;
            *(_QWORD *)v143 = v143 + 16;
            *(_QWORD *)(v143 + 8) = 0x300000001LL;
            *(_QWORD *)(v143 + 16) = v142;
            *(_QWORD *)(v143 + 24) = v130;
            ++*(_DWORD *)(v143 + 8);
            v141[2] = v143 | 4;
            if ( HIDWORD(v300) <= (unsigned int)v144 )
            {
              v251 = v143;
              v224 = (char *)sub_2237400(&v299, v301, 0, 8, v311);
              v225 = (unsigned int)v300;
              *(_QWORD *)&v224[8 * (unsigned int)v300] = v251;
              v226 = (char *)v299;
              v227 = 8 * v225;
              v228 = (char *)v299 + 8 * v225;
              if ( v299 != v228 )
              {
                v229 = (char *)v299;
                if ( (v224 >= (char *)v299 + 16 || v299 >= v224 + 16)
                  && (unsigned __int64)&v228[-8LL - (_QWORD)v299] > 0x10 )
                {
                  v230 = ((unsigned __int64)&v228[-8LL - (_QWORD)v299] >> 3) + 1;
                  v231 = 0;
                  do
                  {
                    v232 = _mm_loadu_si128((const __m128i *)&v226[v231]);
                    *(_OWORD *)&v226[v231] = 0;
                    *(__m128i *)&v224[v231] = v232;
                    v231 += 16;
                  }
                  while ( 16 * (v230 >> 1) != v231 );
                  v233 = 8 * (v230 & 0xFFFFFFFFFFFFFFFELL);
                  v234 = &v226[v233];
                  v235 = &v224[v233];
                  if ( (v230 & 0xFFFFFFFFFFFFFFFELL) != v230 )
                  {
                    v236 = *(_QWORD *)v234;
                    *(_QWORD *)v234 = 0;
                    *(_QWORD *)v235 = v236;
                  }
                }
                else
                {
                  v241 = v224;
                  do
                  {
                    v242 = *(_QWORD *)v229;
                    *(_QWORD *)v229 = 0;
                    v229 += 8;
                    v241 += 8;
                    *((_QWORD *)v241 - 1) = v242;
                  }
                  while ( v228 != v229 );
                }
                v237 = (void ***)v299;
                v238 = (void ***)((char *)v299 + v227);
                while ( v237 != v238 )
                {
                  while ( 1 )
                  {
                    v239 = *--v238;
                    if ( !*v238 )
                      break;
                    if ( *v239 != v239 + 2 )
                    {
                      v252 = *v238;
                      free(*v239);
                      v239 = v252;
                    }
                    operator delete(v239, 0x28u);
                    if ( v237 == v238 )
                      goto LABEL_364;
                  }
                }
              }
LABEL_364:
              v240 = *(_DWORD *)v311;
              if ( v299 != v301 )
                free(v299);
              v299 = v224;
              HIDWORD(v300) = v240;
              LODWORD(v300) = v300 + 1;
            }
            else
            {
              *((_QWORD *)v299 + v144) = v143;
              LODWORD(v300) = v144 + 1;
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v141 = (_QWORD *)*v141;
            if ( !v141 || v141[1] % v303 != v139 )
              break;
            if ( v141[1] == v138 )
              goto LABEL_215;
          }
        }
      }
    }
    if ( v244 != ++v128 )
      continue;
    break;
  }
  v11 = (__int64)v255;
  v285 = (__int64 ***)((char *)v299 + 8 * (unsigned int)v300);
  if ( v299 != v285 )
  {
    v279 = (__int64 ***)v299;
    v156 = (__int64 *)&ptr;
    v256 = (__int64 *)((char *)v255 + 8);
    v289 = v11;
    while ( 1 )
    {
      v157 = ***v279;
      sub_168B9F0((__int64)v311, v256, *(_DWORD *)(v157 + 24), 0x1ACEu, 0);
      if ( v315 )
      {
        sub_AE9DF0(v314, v157, 0xAu);
      }
      else if ( v317 )
      {
        v202 = sub_168B9E0(v311);
        v205 = v313;
        if ( v313 )
          v205 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v313 + 32LL))(v313);
        ptr = v205;
        v206 = sub_1587BC0(v202, v156, v200, v201, v203, v204);
        sub_AE9DF0((unsigned __int8 **)(*v206 + 32LL * v316 + 8), v157, 0xAu);
      }
      v158 = *(_BYTE *)(v157 + 80);
      sub_179A760((__int64)v156, *(_QWORD *)(v157 + 56), *(_DWORD *)(v157 + 64));
      BYTE4(v297) = v158;
      LODWORD(v297) = n.m128i_i32[0];
      v296 = ptr;
      sub_C1DEB0(v156, (int)&v296, 10, v158 ^ 1, 0, 1u, 0);
      v159 = sub_1682AF0((__int64)v311, (__int64)v156);
      v293 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v157 + 16LL))(v157);
      sub_1587DB0(v159, (__int64 *)&v293);
      if ( ptr != v156 + 2 )
        operator delete(ptr);
      if ( (unsigned int)v297 > 0x40 && v296 )
        operator delete[](v296);
      sub_15F7200(v311);
      v160 = **v279;
      v161 = &v160[*((unsigned int *)*v279 + 2)];
      v162 = v160 + 1;
      v265 = v161;
      if ( v161 != v162 )
        break;
LABEL_284:
      if ( v285 == ++v279 )
      {
        v11 = v289;
        goto LABEL_286;
      }
    }
    v163 = &v298;
    while ( 2 )
    {
      v166 = *v162;
      sub_168B9F0((__int64)v311, v256, *(_DWORD *)(*v162 + 24), 0x1721u, 0);
      if ( v315 )
      {
        sub_AE9DF0(v314, v166, 0xAu);
      }
      else if ( v317 )
      {
        v172 = sub_168B9E0(v311);
        v173 = v313;
        if ( v313 )
          v173 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v313 + 32LL))(v313);
        ptr = v173;
        v174 = sub_1587BC0(v172, v156, v168, v169, v170, v171);
        sub_AE9DF0((unsigned __int8 **)(*v174 + 32LL * v316 + 8), v166, 0xAu);
      }
      v191 = *(_BYTE *)(v166 + 80);
      v192 = *(void **)(v166 + 56);
      v190 = *(unsigned int *)(v166 + 64);
      v167 = (unsigned __int64)(v190 + 63) >> 6;
      if ( v167 <= 1 )
      {
        n.m128i_i32[0] = *(_DWORD *)(v166 + 64);
        if ( (unsigned int)v190 > 0x40 )
        {
          v272 = v191;
          sub_2205470(v156, v192, 0);
          LODWORD(v190) = n.m128i_i32[0];
          v191 = v272;
          v192 = ptr;
        }
      }
      else
      {
        v270 = *(_BYTE *)(v166 + 80);
        sub_2205610(v156, v190, v167, v192);
        LODWORD(v190) = n.m128i_i32[0];
        v191 = v270;
        v192 = ptr;
      }
      v294 = v190;
      v293 = v192;
      v295 = v191;
      ptr = v156 + 3;
      n = _mm_load_si128((const __m128i *)&xmmword_23A8CF0);
      sub_220BA90((unsigned int)&v293, (_DWORD)v156, 10, v191 ^ 1, 0, 1, 0);
      v164 = ptr;
      v296 = v163;
      sub_179C260(&v296, ptr, (__int64)ptr + n.m128i_i64[0]);
      v165 = v243;
      if ( ptr != v156 + 3 )
        free(ptr);
      if ( v315 )
      {
        v164 = v296;
        sub_AEC220(v314, v296, v297);
      }
      else
      {
        if ( !v317 )
          goto LABEL_260;
        v175 = sub_168B9E0(v311);
        v179 = (__int64)v313;
        if ( v313 )
        {
          v271 = v175;
          v179 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v313 + 32LL))(v313);
          v175 = v271;
        }
        v292 = v179;
        v180 = sub_1587BC0(v175, &v292, v175, v176, v177, v178);
        v181 = v296;
        v182 = v297;
        v183 = *v180 + 32LL * v316;
        v184 = *(unsigned __int8 **)(v183 + 8);
        if ( !v184 )
        {
          v198 = *(_QWORD *)(v183 + 16);
          v199 = *(_DWORD *)(v198 + 14976);
          if ( v199 )
          {
            v207 = (unsigned int)(v199 - 1);
            *(_DWORD *)(v198 + 14976) = v207;
            v184 = *(unsigned __int8 **)(v198 + 8 * v207 + 14848);
            v208 = *((unsigned int *)v184 + 134);
            *v184 = 0;
            v209 = *((_QWORD *)v184 + 66);
            *((_DWORD *)v184 + 106) = 0;
            v210 = v209 + (v208 << 6);
            if ( v209 != v210 )
            {
              v283 = v162;
              v211 = v210;
              v212 = v166;
              v213 = v209;
              v287 = v163;
              v214 = v183;
              v288 = v156;
              v215 = v182;
              do
              {
                while ( 1 )
                {
                  v211 -= 64;
                  v216 = *(void **)(v211 + 24);
                  if ( v216 == (void *)(v211 + 40) )
                    break;
                  v275 = v184;
                  operator delete(v216);
                  v184 = v275;
                  if ( v213 == v211 )
                    goto LABEL_317;
                }
              }
              while ( v213 != v211 );
LABEL_317:
              v166 = v212;
              v183 = v214;
              v182 = v215;
              v162 = v283;
              v163 = v287;
              v156 = v288;
            }
            *((_DWORD *)v184 + 134) = 0;
          }
          else
          {
            v286 = v297;
            v282 = v296;
            v274 = v183;
            v184 = (unsigned __int8 *)operator new(0x3A0u);
            *v184 = 0;
            *((_QWORD *)v184 + 12) = v184 + 112;
            *((_QWORD *)v184 + 16) = v184 + 144;
            *((_QWORD *)v184 + 20) = v184 + 176;
            *((_QWORD *)v184 + 24) = v184 + 208;
            *((_QWORD *)v184 + 28) = v184 + 240;
            *((_QWORD *)v184 + 32) = v184 + 272;
            *((_QWORD *)v184 + 36) = v184 + 304;
            *((_QWORD *)v184 + 40) = v184 + 336;
            *((_QWORD *)v184 + 44) = v184 + 368;
            *((_QWORD *)v184 + 48) = v184 + 400;
            *((_QWORD *)v184 + 52) = v184 + 432;
            *((_QWORD *)v184 + 13) = 0;
            v184[112] = 0;
            *((_QWORD *)v184 + 17) = 0;
            v184[144] = 0;
            *((_QWORD *)v184 + 21) = 0;
            v184[176] = 0;
            *((_QWORD *)v184 + 25) = 0;
            v184[208] = 0;
            *((_QWORD *)v184 + 29) = 0;
            v184[240] = 0;
            *((_QWORD *)v184 + 33) = 0;
            v184[272] = 0;
            *((_QWORD *)v184 + 37) = 0;
            v184[304] = 0;
            *((_QWORD *)v184 + 41) = 0;
            v184[336] = 0;
            *((_QWORD *)v184 + 45) = 0;
            v184[368] = 0;
            *((_QWORD *)v184 + 49) = 0;
            v184[400] = 0;
            *((_QWORD *)v184 + 53) = 0x800000000LL;
            v181 = v282;
            *((_QWORD *)v184 + 66) = v184 + 544;
            v182 = v286;
            *((_QWORD *)v184 + 67) = 0x600000000LL;
            v183 = v274;
          }
          *(_QWORD *)(v183 + 8) = v184;
        }
        v281 = v183;
        v184[*v184 + 1] = 0;
        ptr = v156 + 2;
        sub_179C260(v156, v181, (__int64)&v181[v182]);
        v165 = *(_BYTE **)(v281 + 8);
        v185 = (unsigned __int8)*v165;
        *v165 = v185 + 1;
        v164 = ptr;
        v186 = 32 * (v185 + 3);
        v187 = (void **)&v165[v186];
        v188 = *(_BYTE **)&v165[v186];
        if ( ptr != v156 + 2 )
        {
          if ( v188 == &v165[v186 + 16] )
          {
            *v187 = ptr;
            v187[1] = (void *)n.m128i_i64[0];
            v187[2] = (void *)n.m128i_i64[1];
          }
          else
          {
            v189 = *(_QWORD *)&v165[32 * (int)v185 + 112];
            *v187 = ptr;
            v187[1] = (void *)n.m128i_i64[0];
            v165 = (_BYTE *)n.m128i_i64[1];
            v187[2] = (void *)n.m128i_i64[1];
            if ( v188 )
            {
              ptr = v188;
              n.m128i_i64[1] = v189;
              goto LABEL_282;
            }
          }
          v188 = v156 + 2;
          ptr = v156 + 2;
          goto LABEL_282;
        }
        v165 = (_BYTE *)n.m128i_i64[0];
        if ( n.m128i_i64[0] )
        {
          if ( n.m128i_i64[0] == 1 )
          {
            *v188 = n.m128i_i8[8];
            v165 = (_BYTE *)n.m128i_i64[0];
            v188 = *v187;
          }
          else
          {
            v273 = v187;
            memcpy(v188, ptr, n.m128i_u64[0]);
            v187 = v273;
            v165 = (_BYTE *)n.m128i_i64[0];
            v188 = *v273;
          }
        }
        v187[1] = v165;
        v165[(_QWORD)v188] = 0;
        v188 = ptr;
LABEL_282:
        n.m128i_i64[0] = 0;
        *v188 = 0;
        if ( ptr != v156 + 2 )
          operator delete(ptr);
      }
LABEL_260:
      ptr = (void *)(*(__int64 (__fastcall **)(__int64, void *, _BYTE *))(*(_QWORD *)v166 + 16LL))(v166, v164, v165);
      sub_1587DB0((__int64)v311, v156);
      if ( v296 != v163 )
        operator delete(v296);
      if ( v294 > 0x40 && v293 )
        operator delete[](v293);
      ++v162;
      sub_15F7200(v311);
      if ( v265 == v162 )
        goto LABEL_284;
      continue;
    }
  }
LABEL_286:
  v193 = v304;
  if ( v304 )
  {
    do
    {
      v194 = (_QWORD *)*v193;
      operator delete(v193);
      v193 = v194;
    }
    while ( v194 );
  }
  memset(s, 0, 8 * v303);
  v305 = 0;
  v304 = nullptr;
  if ( s != v308 )
    operator delete(s);
  v195 = v299;
  v196 = (char *)v299 + 8 * (unsigned int)v300;
  if ( v299 != v196 )
  {
    do
    {
      v197 = (void **)*--v196;
      if ( *v196 )
      {
        if ( *v197 != v197 + 2 )
          free(*v197);
        operator delete(v197, 0x28u);
      }
    }
    while ( v195 != v196 );
    v196 = v299;
  }
  if ( v196 == (_QWORD *)v301 )
  {
    if ( !sub_B78550(a6) )
      goto LABEL_148;
  }
  else
  {
    free(v196);
    if ( !sub_B78550(a6) )
      goto LABEL_148;
  }
LABEL_131:
  v101 = a7;
  v102 = v244;
  v249 = v11;
  v254 = (__int64 *)(v11 + 8);
  while ( 2 )
  {
    v103 = *v101;
    if ( !*v101 )
      goto LABEL_146;
    v104 = *(_BYTE *)(v103 + 80);
    v105 = *(void **)(v103 + 56);
    v106 = *(unsigned int *)(v103 + 64);
    v107 = (unsigned __int64)(v106 + 63) >> 6;
    if ( v107 > 1 )
    {
      sub_2205610(v311, v106, v107, v105);
      LODWORD(v106) = *(_DWORD *)&v311[8];
      v105 = *(void **)v311;
    }
    else
    {
      *(_DWORD *)&v311[8] = *(_DWORD *)(v103 + 64);
      if ( (unsigned int)v106 > 0x40 )
      {
        sub_2205470(v311, v105, 0);
        LODWORD(v106) = *(_DWORD *)&v311[8];
        v105 = *(void **)v311;
      }
    }
    n.m128i_i32[0] = v106;
    ptr = v105;
    n.m128i_i8[4] = v104;
    *(_DWORD *)&v311[8] = 64;
    *(_QWORD *)v311 = 0;
    v312 = 0;
    v108 = sub_98E2D0((__int64 *)&ptr, (__int64 *)v311);
    if ( *(_DWORD *)&v311[8] > 0x40u && *(_QWORD *)v311 )
    {
      v245 = v108;
      operator delete[](*(void **)v311);
      v108 = v245;
    }
    v111 = n.m128i_i32[0];
    if ( !v108 )
      goto LABEL_145;
    if ( n.m128i_i32[0] > 0x40u )
    {
      if ( (unsigned int)sub_22069E0(&ptr) != 1 )
        goto LABEL_143;
LABEL_151:
      if ( ptr )
        operator delete[](ptr);
      goto LABEL_146;
    }
    if ( ptr && ((unsigned __int64)ptr & ((unsigned __int64)ptr - 1)) == 0 )
      goto LABEL_146;
LABEL_143:
    if ( (unsigned __int8)sub_17AD650(v249, a6, (__int64)&ptr, 1, v109, v110) )
      goto LABEL_144;
    sub_168B9F0((__int64)v311, v254, *(_DWORD *)(v103 + 24), 0x1AEFu, 0);
    if ( v315 )
    {
      sub_AE9DF0(v314, v103, 0xAu);
LABEL_184:
      if ( v315 )
      {
        sub_AE9DF0(v314, a6, 0xAu);
      }
      else if ( v317 )
      {
        v153 = sub_168B9E0(v311);
        v154 = v313;
        if ( v313 )
          v154 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v313 + 32LL))(v313);
        s = v154;
        v155 = sub_1587BC0(v153, (__int64 *)&s, v149, v150, v151, v152);
        sub_AE9DF0((unsigned __int8 **)(*v155 + 32LL * v316 + 8), a6, 0xAu);
      }
      goto LABEL_166;
    }
    if ( v317 )
    {
      v122 = sub_168B9E0(v311);
      v126 = v313;
      if ( v313 )
      {
        v246 = v122;
        v126 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v313 + 32LL))(v313);
        v122 = v246;
      }
      s = v126;
      v127 = sub_1587BC0(v122, (__int64 *)&s, v122, v123, v124, v125);
      sub_AE9DF0((unsigned __int8 **)(*v127 + 32LL * v316 + 8), v103, 0xAu);
      goto LABEL_184;
    }
LABEL_166:
    sub_15F7200(v311);
LABEL_144:
    v111 = n.m128i_i32[0];
LABEL_145:
    if ( v111 > 0x40 )
      goto LABEL_151;
LABEL_146:
    if ( v102 != ++v101 )
      continue;
    break;
  }
  v11 = v249;
LABEL_148:
  result = a6;
  if ( (*(_BYTE *)(a6 + 29) & 1) != 0 )
    return sub_180FE80(v11, a6);
  return result;
}
