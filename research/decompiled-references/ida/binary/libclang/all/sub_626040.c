__int64 __fastcall sub_626040(
        unsigned __int8 *a1,
        __int64 a2,
        const char **a3,
        int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        unsigned int a9,
        __int64 *a10)
{
  __int64 v10; // rbx
  __int64 v11; // r13
  void *v12; // rbp
  void *v13; // rdi
  void *v14; // rbp
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rbp
  __int64 v19; // r12
  __int64 v20; // rax
  const char *v21; // rax
  bool v22; // zf
  void *v23; // rax
  const char *v24; // r13
  char *v25; // rax
  size_t v26; // rcx
  _QWORD *v27; // rdx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  void *v30; // rdx
  void *v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rax
  const char **v36; // r12
  const char *v37; // rbx
  signed __int64 v38; // rcx
  char v39; // r14
  const char **v40; // rdi
  char *v41; // r12
  _QWORD *v42; // rax
  volatile signed __int32 *v43; // r12
  __int64 v44; // r13
  unsigned int v45; // eax
  __int64 v46; // r15
  __int64 *v47; // rcx
  __int64 v48; // rdx
  const __m128i *v49; // rax
  __int64 v50; // rdi
  __m128i v51; // xmm0
  __int64 v52; // r14
  __int64 v53; // r15
  __int64 *v54; // rax
  __int64 v55; // r10
  __int64 v56; // r11
  __m128 v57; // xmm0
  unsigned __int64 v58; // xmm1_8
  __int64 v59; // rsi
  __m128i si128; // xmm0
  volatile signed __int32 *v61; // r14
  volatile signed __int32 *v62; // rdx
  signed __int32 v63; // eax
  void *v64; // r14
  volatile signed __int32 *v65; // rdx
  signed __int32 v66; // eax
  void *v67; // rdi
  _QWORD *v68; // rdi
  unsigned int *v69; // r12
  unsigned int *i; // r14
  unsigned int v71; // r12d
  void *v72; // r13
  void *v73; // r13
  __int64 v74; // r13
  __int64 v75; // rbx
  void *v76; // rbx
  _QWORD *v77; // rbp
  __int64 v78; // r13
  __int64 v79; // rbx
  __int64 v80; // r13
  __int64 v81; // rbx
  __int64 v82; // r13
  __int64 v83; // rbx
  __int64 v84; // r13
  __int64 v85; // rbx
  __int64 v86; // r13
  __int64 v87; // rbx
  _QWORD *v88; // rdi
  _QWORD *v89; // rdi
  _QWORD *v90; // rdi
  void *v91; // rax
  _QWORD *v92; // rdi
  unsigned int v93; // esi
  unsigned __int64 v94; // rdx
  char *v95; // rcx
  char *v96; // r8
  unsigned int v97; // esi
  unsigned int v98; // esi
  unsigned int v99; // ecx
  __int64 v100; // rdi
  unsigned __int64 v102; // rdx
  __int64 v103; // rdi
  signed __int64 v104; // r15
  unsigned __int64 v105; // rax
  bool v106; // cf
  unsigned __int64 v107; // rax
  char *v108; // rdi
  size_t v109; // rdx
  char *v110; // r15
  __int64 v111; // rax
  __int64 *v112; // rax
  __int64 *v113; // rax
  void *v114; // rax
  __int64 v115; // rax
  void *v116; // r12
  __int64 v117; // r13
  const char **v118; // rcx
  const char **v119; // r14
  unsigned __int64 v120; // rdx
  __int64 v121; // rsi
  const char **v122; // r15
  _QWORD *v123; // rdx
  _QWORD *v124; // rax
  _QWORD *v125; // rcx
  void *v126; // rdx
  const char *v127; // rbx
  char *v128; // rax
  size_t v129; // r12
  _QWORD *v130; // rdi
  _QWORD *v131; // rax
  unsigned int v132; // esi
  char *v133; // r14
  signed __int64 v134; // r13
  __int64 v135; // rax
  __int64 v136; // rdx
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // r12
  char *v139; // r15
  __int64 v140; // rcx
  __int64 v141; // rax
  void *v142; // rdi
  unsigned __int64 v143; // rdx
  char *v144; // rcx
  char *v145; // r8
  unsigned int v146; // esi
  unsigned int v147; // esi
  unsigned int v148; // ecx
  __int64 v149; // rdi
  unsigned __int64 v150; // rsi
  __int64 v151; // r14
  __int64 v152; // r15
  __int64 v153; // rax
  char *v154; // rsi
  char *v155; // rdi
  __int64 v156; // r12
  _QWORD *v157; // rdx
  char *v158; // rsi
  char *v159; // rax
  char *v160; // rcx
  __int64 v161; // rdi
  unsigned int v162; // ecx
  unsigned __int64 v163; // rdi
  __int64 v164; // rax
  unsigned __int64 v165; // rdi
  unsigned int v166; // ecx
  unsigned int v167; // ecx
  unsigned int v168; // r8d
  __int64 v169; // r10
  char *v170; // rdi
  char *v171; // rax
  void *v172; // [rsp+38h] [rbp-168h]
  _QWORD *v173; // [rsp+38h] [rbp-168h]
  void *v174; // [rsp+38h] [rbp-168h]
  int v175; // [rsp+38h] [rbp-168h]
  char *v176; // [rsp+38h] [rbp-168h]
  __int64 *v177; // [rsp+38h] [rbp-168h]
  void *v178; // [rsp+38h] [rbp-168h]
  size_t n; // [rsp+40h] [rbp-160h]
  size_t na; // [rsp+40h] [rbp-160h]
  int nb; // [rsp+40h] [rbp-160h]
  size_t nc; // [rsp+40h] [rbp-160h]
  size_t nd; // [rsp+40h] [rbp-160h]
  __int64 v184; // [rsp+48h] [rbp-158h]
  size_t v188; // [rsp+68h] [rbp-138h]
  size_t v189; // [rsp+68h] [rbp-138h]
  size_t v190; // [rsp+68h] [rbp-138h]
  size_t v191; // [rsp+68h] [rbp-138h]
  size_t v192; // [rsp+68h] [rbp-138h]
  __int64 v195; // [rsp+80h] [rbp-120h]
  int v196; // [rsp+88h] [rbp-118h]
  __int64 v197; // [rsp+90h] [rbp-110h]
  __int64 v199; // [rsp+A0h] [rbp-100h]
  int v200; // [rsp+A8h] [rbp-F8h]
  int v201; // [rsp+C0h] [rbp-E0h]
  void *v202; // [rsp+C8h] [rbp-D8h] BYREF
  void *v203; // [rsp+D0h] [rbp-D0h] BYREF
  void *v204; // [rsp+D8h] [rbp-C8h] BYREF
  void *v205; // [rsp+E0h] [rbp-C0h] BYREF
  void *v206; // [rsp+E8h] [rbp-B8h] BYREF
  void *v207; // [rsp+F0h] [rbp-B0h] BYREF
  _BYTE v208[32]; // [rsp+F8h] [rbp-A8h] BYREF
  void *v209[2]; // [rsp+118h] [rbp-88h] BYREF
  _QWORD v210[2]; // [rsp+128h] [rbp-78h] BYREF
  void *v211[2]; // [rsp+138h] [rbp-68h] BYREF
  _QWORD v212[2]; // [rsp+148h] [rbp-58h] BYREF
  void *v213; // [rsp+158h] [rbp-48h]

  if ( !a10 )
    return 3;
  v10 = a5;
  *a10 = 0;
  if ( !a1 )
    return 3;
  if ( (a1[4] & 1) != 0 && !getenv("LIBCLANG_BGPRIO_DISABLE") )
    sub_2648970(1);
  v200 = 0;
  if ( (a9 & 0x40) != 0 )
    v200 = ((a9 & 0x800) == 0) + 1;
  v11 = a4;
  sub_1072040(&v202, a3, a4);
  v12 = v202;
  v202 = nullptr;
  sub_25FEFB0(v211);
  sub_1009C90(&v203, v211[0], v12, 0, 1, 0);
  v13 = v211[0];
  if ( v211[0] && !_InterlockedSub((volatile signed __int32 *)v211[0] + 2, 1u) )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
  if ( (a9 & 0x200) != 0 )
    *((_BYTE *)v203 + 5) = 1;
  v14 = v203;
  if ( v203 && (v15 = sub_25A17C0()) != 0 )
  {
    v16 = operator new(0x30u);
    *(_QWORD *)(v16 + 8) = v15;
    *(_BYTE *)(v16 + 16) = 0;
    *(_QWORD *)(v16 + 40) = v14;
    *(_OWORD *)(v16 + 24) = 0;
    v199 = v16;
    *(_QWORD *)v16 = &off_47CFE18;
    sub_25A1980(v15, v16);
  }
  else
  {
    v199 = 0;
  }
  v17 = operator new(0x18u);
  *(_QWORD *)(v17 + 16) = 0;
  v18 = (__int64 *)v17;
  *(_OWORD *)v17 = 0;
  v197 = 0;
  v19 = sub_25A17C0();
  if ( v19 )
  {
    v20 = operator new(0x30u);
    *(_QWORD *)(v20 + 8) = v19;
    *(_BYTE *)(v20 + 16) = 0;
    *(_QWORD *)(v20 + 40) = v18;
    *(_OWORD *)(v20 + 24) = 0;
    v197 = v20;
    *(_QWORD *)v20 = &off_47CFE40;
    sub_25A1980(v19, v20);
  }
  n = a5 + 24 * a6;
  if ( n != a5 )
  {
    while ( 1 )
    {
      v21 = *(const char **)v10;
      v22 = **(_BYTE **)v10 == 0;
      LOWORD(v213) = 257;
      if ( !v22 )
      {
        v211[0] = (void *)v21;
        LOBYTE(v213) = 3;
      }
      sub_25CCFD0(&v206, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16), v211);
      v23 = v206;
      v24 = *(const char **)v10;
      v206 = nullptr;
      v211[0] = v212;
      v172 = v23;
      if ( !v24 )
LABEL_301:
        std::__throw_logic_error("basic_string: construction from null is not valid");
      v25 = (char *)strlen(v24);
      v209[0] = v25;
      v26 = (size_t)v25;
      if ( (unsigned __int64)v25 > 0xF )
      {
        v188 = (size_t)v25;
        v91 = (void *)std::string::_M_create();
        v26 = v188;
        v211[0] = v91;
        v92 = v91;
        v212[0] = v209[0];
      }
      else
      {
        if ( v25 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v212[0]) = *v24;
LABEL_23:
          v27 = v212;
          goto LABEL_24;
        }
        if ( !v25 )
          goto LABEL_23;
        v92 = v212;
      }
      memcpy(v92, v24, v26);
      v25 = (char *)v209[0];
      v27 = v211[0];
LABEL_24:
      v211[1] = v25;
      v25[(_QWORD)v27] = 0;
      v213 = v172;
      v28 = (_QWORD *)v18[1];
      if ( v28 != (_QWORD *)v18[2] )
      {
        v29 = v28 + 2;
        *v28 = v28 + 2;
        if ( v211[0] != v212 )
        {
          *v28 = v211[0];
          v28[2] = v212[0];
          goto LABEL_27;
        }
        v30 = v211[1];
        v93 = LODWORD(v211[1]) + 1;
        if ( (unsigned int)(LODWORD(v211[1]) + 1) >= 8 )
        {
          v28[2] = v212[0];
          *(_QWORD *)((char *)v29 + v93 - 8) = *(void **)((char *)&v211[1] + v93);
          v94 = (unsigned __int64)(v28 + 3) & 0xFFFFFFFFFFFFFFF8LL;
          v95 = (char *)v29 - v94;
          v96 = (char *)((char *)v212 - v95);
          v97 = ((_DWORD)v95 + v93) & 0xFFFFFFF8;
          if ( v97 >= 8 )
          {
            v98 = v97 & 0xFFFFFFF8;
            v99 = 0;
            do
            {
              v100 = v99;
              v99 += 8;
              *(_QWORD *)(v94 + v100) = *(_QWORD *)&v96[v100];
            }
            while ( v99 < v98 );
          }
LABEL_27:
          v30 = v211[1];
        }
        else if ( (v93 & 4) != 0 )
        {
          *((_DWORD *)v28 + 4) = v212[0];
          *(_DWORD *)((char *)v29 + v93 - 4) = *(_DWORD *)((char *)&v211[1] + v93 + 4);
          v30 = v211[1];
        }
        else if ( LODWORD(v211[1]) != -1 )
        {
          *((_BYTE *)v28 + 16) = v212[0];
          v30 = v211[1];
          if ( (v93 & 2) != 0 )
          {
            *(_WORD *)((char *)v29 + v93 - 2) = *(_WORD *)((char *)&v211[1] + v93 + 6);
            v30 = v211[1];
          }
        }
        v28[1] = v30;
        v28[4] = v213;
        v18[1] += 40;
        goto LABEL_29;
      }
      sub_625D00((__int64)v18, (char **)v211);
      if ( v211[0] == v212 )
      {
LABEL_29:
        v31 = v206;
        if ( !v206 )
          goto LABEL_158;
LABEL_30:
        v10 += 24;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v31 + 8LL))(v31);
        if ( n == v10 )
          goto LABEL_31;
      }
      else
      {
        operator delete(v211[0], v212[0] + 1LL);
        v31 = v206;
        if ( v206 )
          goto LABEL_30;
LABEL_158:
        v10 += 24;
        if ( n == v10 )
        {
LABEL_31:
          v11 = a4;
          break;
        }
      }
    }
  }
  v32 = operator new(0x18u);
  *(_QWORD *)(v32 + 16) = 0;
  v33 = v32;
  *(_OWORD *)v32 = 0;
  v34 = sub_25A17C0();
  if ( v34 )
  {
    v35 = operator new(0x30u);
    *(_QWORD *)(v35 + 8) = v34;
    *(_BYTE *)(v35 + 16) = 0;
    *(_QWORD *)(v35 + 40) = v33;
    *(_OWORD *)(v35 + 24) = 0;
    v184 = v35;
    *(_QWORD *)v35 = &off_47CFE68;
    sub_25A1980(v34, v35);
  }
  else
  {
    v184 = 0;
  }
  if ( a4 )
  {
    v173 = (_QWORD *)v33;
    na = 8 * v11;
    v36 = a3;
    do
    {
      v37 = *v36;
      if ( !strcmp(*v36, "-fno-spell-checking") || !strcmp(v37, "-fspell-checking") )
      {
        v33 = (__int64)v173;
        v38 = 8 * v11;
        v39 = 1;
        v40 = (const char **)v173[1];
        if ( v173[2] - (_QWORD)v40 < na )
          goto LABEL_178;
        goto LABEL_40;
      }
      ++v36;
    }
    while ( &a3[v11] != v36 );
    v33 = (__int64)v173;
    v38 = 8 * v11;
    v39 = 0;
    v40 = (const char **)v173[1];
    if ( v173[2] - (_QWORD)v40 < na )
    {
LABEL_178:
      v102 = v38 >> 3;
      v103 = (__int64)v40 - *(_QWORD *)v33;
      v176 = *(char **)v33;
      v104 = v103;
      v105 = v103 >> 3;
      if ( 0xFFFFFFFFFFFFFFFLL - (v103 >> 3) < (unsigned __int64)(v38 >> 3) )
        std::__throw_length_error("vector::_M_range_insert");
      if ( v102 < v105 )
        v102 = v103 >> 3;
      v106 = __CFADD__(v102, v105);
      v107 = v102 + v105;
      if ( v106 )
      {
        nd = 0x7FFFFFFFFFFFFFF8LL;
        v163 = 0x7FFFFFFFFFFFFFF8LL;
      }
      else
      {
        nc = 0;
        v41 = nullptr;
        if ( !v107 )
          goto LABEL_183;
        if ( v107 > 0xFFFFFFFFFFFFFFFLL )
          v107 = 0xFFFFFFFFFFFFFFFLL;
        nd = 8 * v107;
        v163 = 8 * v107;
      }
      v191 = v38;
      v164 = operator new(v163);
      v38 = v191;
      v41 = (char *)v164;
      nc = v164 + nd;
LABEL_183:
      if ( v104 <= 8 )
      {
        if ( v104 == 8 )
        {
          v108 = v41 + 8;
          *(_QWORD *)v41 = *(_QWORD *)v176;
          if ( v38 == 8 )
          {
            v110 = v41 + 16;
            *((_QWORD *)v41 + 1) = *a3;
          }
          else
          {
            v189 = v38;
            v109 = v38;
LABEL_186:
            v110 = (char *)memcpy(v108, a3, v109) + v189;
          }
          goto LABEL_187;
        }
        v170 = &v41[v104];
        if ( v38 == 8 )
        {
          *(_QWORD *)v170 = *a3;
        }
        else
        {
          v192 = v38;
          v171 = (char *)memcpy(v170, a3, v38);
          v38 = v192;
          v170 = v171;
        }
        v110 = &v170[v38];
        if ( v176 )
          goto LABEL_187;
      }
      else
      {
        v189 = v38;
        memmove(v41, v176, v104);
        v108 = &v41[v104];
        if ( v189 != 8 )
        {
          v109 = v189;
          goto LABEL_186;
        }
        v110 = v108 + 8;
        *(_QWORD *)v108 = *a3;
LABEL_187:
        operator delete(v176, *(_QWORD *)(v33 + 16) - (_QWORD)v176);
      }
      *(_QWORD *)v33 = v41;
      *(_QWORD *)(v33 + 8) = v110;
      *(_QWORD *)(v33 + 16) = nc;
      if ( v39 )
        goto LABEL_43;
      goto LABEL_189;
    }
LABEL_40:
    if ( v38 <= 8 )
    {
      if ( v38 == 8 )
      {
        *v40 = *a3;
        v40 = *(const char ***)(v33 + 8);
      }
    }
    else
    {
      v174 = (void *)v38;
      memmove(v40, a3, v38);
      v40 = *(const char ***)(v33 + 8);
      v38 = (signed __int64)v174;
    }
    v41 = *(char **)v33;
    *(_QWORD *)(v33 + 8) = (char *)v40 + v38;
    if ( !v39 )
      goto LABEL_189;
  }
  else
  {
    v41 = *(char **)v33;
LABEL_189:
    v211[0] = (void *)"-fno-spell-checking";
    sub_623040(v33, v41 + 8, (__int64 *)v211);
  }
LABEL_43:
  if ( a2 )
  {
    v42 = *(_QWORD **)(v33 + 8);
    if ( *(_QWORD **)(v33 + 16) != v42 )
    {
      *v42 = a2;
      *(_QWORD *)(v33 + 8) += 8LL;
      goto LABEL_46;
    }
    v133 = *(char **)v33;
    v134 = (signed __int64)v42 - *(_QWORD *)v33;
    v135 = v134 >> 3;
    if ( v134 >> 3 == 0xFFFFFFFFFFFFFFFLL )
      std::__throw_length_error("vector::_M_realloc_append");
    v136 = 1;
    if ( v135 )
      v136 = v134 >> 3;
    v106 = __CFADD__(v136, v135);
    v137 = v136 + v135;
    if ( v106 )
    {
      v138 = 0x7FFFFFFFFFFFFFF8LL;
    }
    else
    {
      if ( v137 > 0xFFFFFFFFFFFFFFFLL )
        v137 = 0xFFFFFFFFFFFFFFFLL;
      v138 = 8 * v137;
    }
    v139 = (char *)operator new(v138);
    v140 = (__int64)&v139[v134 + 8];
    *(_QWORD *)&v139[v134] = a2;
    if ( v134 > 0 )
    {
      memcpy(v139, v133, v134);
      v140 = (__int64)&v139[v134 + 8];
      v150 = *(_QWORD *)(v33 + 16) - (_QWORD)v133;
    }
    else
    {
      if ( !v133 )
      {
LABEL_248:
        *(_QWORD *)v33 = v139;
        *(_QWORD *)(v33 + 8) = v140;
        *(_QWORD *)(v33 + 16) = &v139[v138];
        goto LABEL_46;
      }
      v150 = *(_QWORD *)(v33 + 16) - (_QWORD)v133;
    }
    v178 = (void *)v140;
    operator delete(v133, v150);
    v140 = (__int64)v178;
    goto LABEL_248;
  }
LABEL_46:
  if ( (a9 & 1) != 0 )
  {
    v211[0] = "-Xclang";
    sub_5F8AC0(v33, v211);
    v211[0] = "-detailed-preprocessing-record";
    sub_5F8AC0(v33, v211);
  }
  v211[0] = "-fallow-editor-placeholders";
  sub_5F8AC0(v33, v211);
  v204 = nullptr;
  nb = 0;
  v201 = *(_DWORD *)(*((_QWORD *)v203 + 6) + 12LL);
  if ( (a9 & 4) != 0 )
    nb = 2 - ((a9 >> 8) & 1);
  sub_636FA0(
    (unsigned int)v208,
    (_DWORD)a1,
    0,
    a9,
    *(_QWORD *)v33,
    (__int64)(*(_QWORD *)(v33 + 8) - *(_QWORD *)v33) >> 3,
    0,
    0,
    a5,
    a6);
  v43 = *((volatile signed __int32 **)a1 + 6);
  v44 = *((_QWORD *)a1 + 5);
  v207 = nullptr;
  if ( v43 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd(v43 + 2, 1u);
    else
      ++*((_DWORD *)v43 + 2);
  }
  v45 = sub_25E2710("raw", 3);
  v46 = (unsigned int)sub_25E2870(v44 + 24, "raw", 3, v45);
  v47 = (__int64 *)(*(_QWORD *)(v44 + 24) + 8 * v46);
  v48 = *v47;
  if ( *v47 )
  {
    if ( v48 != -8 )
      goto LABEL_55;
    --*(_DWORD *)(v44 + 40);
  }
  v177 = v47;
  v111 = sub_25CC9C0(20, 8);
  *(_BYTE *)(v111 + 18) = 119;
  *(_WORD *)(v111 + 16) = 24946;
  *(_BYTE *)(v111 + 19) = 0;
  *(_QWORD *)v111 = 3;
  *(_QWORD *)(v111 + 8) = 0;
  *v177 = v111;
  ++*(_DWORD *)(v44 + 36);
  v112 = (__int64 *)(*(_QWORD *)(v44 + 24) + 8LL * (unsigned int)sub_25E2C40(v44 + 24, (unsigned int)v46));
  v48 = *v112;
  if ( *v112 == -8 || !v48 )
  {
    v113 = v112 + 1;
    do
    {
      do
        v48 = *v113++;
      while ( !v48 );
    }
    while ( v48 == -8 );
  }
LABEL_55:
  v49 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v48 + 8) + 16LL))(*(_QWORD *)(v48 + 8));
  v50 = *v18;
  v51 = _mm_loadu_si128(v49);
  LOBYTE(v212[0]) = 1;
  *(__m128i *)v211 = v51;
  v52 = *((_QWORD *)a1 + 11);
  v53 = *((_QWORD *)a1 + 12);
  v175 = a1[2];
  v195 = 0xCCCCCCCCCCCCCCCDLL * ((v18[1] - v50) >> 3);
  v196 = *a1;
  v54 = (__int64 *)sub_636F20();
  v55 = *v54;
  v56 = v54[1];
  v206 = v203;
  if ( v203 )
    ++*(_DWORD *)v203;
  v57 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 40));
  v58 = _mm_movehl_ps(a8, v57).m128_u64[0];
  *(__m128 *)v209 = v57;
  if ( v58 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v58 + 8), 1u);
    else
      ++*(_DWORD *)(v58 + 8);
  }
  v59 = *(_QWORD *)v33;
  si128 = _mm_load_si128((const __m128i *)v211);
  sub_1001710(
    (unsigned int)&v205,
    *(_QWORD *)v33,
    *(_QWORD *)(v33 + 8),
    (unsigned int)v209,
    (unsigned int)&v206,
    v175,
    v55,
    v56,
    v52,
    v53,
    v196,
    ((a9 & 0x4000) != 0) + 1,
    v50,
    v195,
    1,
    nb,
    (a9 & 0x402) != 0,
    (a9 & 8) != 0,
    (unsigned __int8)a9 >> 7,
    1,
    v200,
    (a9 & 0x400) != 0,
    1,
    (a9 & 0x10) != 0,
    (a9 & 0x8000) != 0,
    si128.m128i_i64[0],
    si128.m128i_i64[1],
    v212[0],
    (__int64)&v204,
    (__int64)&v207);
  v61 = (volatile signed __int32 *)v209[1];
  if ( v209[1] )
  {
    v62 = (volatile signed __int32 *)((char *)v209[1] + 8);
    if ( *((_QWORD *)v209[1] + 1) == 0x100000001LL )
    {
      v141 = *(_QWORD *)v209[1];
      v142 = v209[1];
      *((_QWORD *)v209[1] + 1) = 0;
      (*(void (__fastcall **)(void *, __int64, volatile signed __int32 *))(v141 + 16))(v142, v59, v62);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v61 + 24LL))(v61);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v63 = _InterlockedExchangeAdd(v62, 0xFFFFFFFF);
      }
      else
      {
        v63 = *((_DWORD *)v209[1] + 2);
        *((_DWORD *)v209[1] + 2) = v63 - 1;
      }
      if ( v63 == 1 )
        sub_6111C0(v61);
    }
  }
  v64 = v206;
  if ( v206 )
  {
    v22 = (*(_DWORD *)v206)-- == 1;
    if ( v22 )
    {
      sub_C68450(v64);
      v59 = 15248;
      operator delete(v64, 0x3B90u);
    }
  }
  if ( v43 )
  {
    v65 = v43 + 2;
    if ( *((_QWORD *)v43 + 1) == 0x100000001LL )
    {
      *((_QWORD *)v43 + 1) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(*(_QWORD *)v43 + 16LL))(
        v43,
        v59,
        v65);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 24LL))(v43);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v66 = _InterlockedExchangeAdd(v65, 0xFFFFFFFF);
      }
      else
      {
        v66 = *((_DWORD *)v43 + 2);
        *((_DWORD *)v43 + 2) = v66 - 1;
      }
      if ( v66 == 1 )
        sub_6111C0(v43);
    }
  }
  v67 = v207;
  if ( v207 && !_InterlockedSub((volatile signed __int32 *)v207 + 2, 1u) )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v67 + 8LL))(v67);
  v68 = v205;
  if ( v205 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v203 + 6) + 12LL) == v201 || !a1[1] )
      goto LABEL_81;
    goto LABEL_228;
  }
  v131 = v204;
  v68 = v204;
  if ( v204 )
  {
    if ( v201 == *(_DWORD *)(*((_QWORD *)v203 + 6) + 12LL) )
      goto LABEL_81;
    if ( !a1[1] )
    {
LABEL_230:
      v68 = v131;
      goto LABEL_81;
    }
LABEL_228:
    sub_60B4B0((__int64)v68);
    v68 = v205;
    if ( !v205 )
    {
      v131 = v204;
      goto LABEL_230;
    }
LABEL_81:
    v69 = (unsigned int *)v68[113];
    for ( i = &v69[26 * *((unsigned int *)v68 + 228)]; i != v69; v69 += 26 )
    {
      if ( (int)v69[1] > 3 && (unsigned int)sub_C73000(*v69) == 14 )
      {
        v71 = 4;
        goto LABEL_87;
      }
    }
    v114 = v205;
    v205 = nullptr;
    v207 = v114;
    v115 = sub_602020((__int64)a1, (const double *)&v207);
    v116 = v207;
    v117 = v115;
    *a10 = v115;
    if ( v116 )
    {
      sub_FFE9C0(v116);
      operator delete(v116, 0x808u);
      v117 = *a10;
    }
    v71 = 1;
    if ( v117 )
    {
      *(_DWORD *)(v117 + 48) = a9;
      v118 = *(const char ***)(v33 + 8);
      v119 = *(const char ***)v33;
      v120 = ((__int64)v118 - *(_QWORD *)v33) >> 3;
      if ( (unsigned __int64)v118 - *(_QWORD *)v33 > 0x1FFFFFFFFFFFFFF8LL )
        std::__throw_length_error("vector::reserve");
      v121 = *(_QWORD *)(v117 + 56);
      if ( (*(_QWORD *)(v117 + 72) - v121) >> 5 >= v120 )
        goto LABEL_203;
      v151 = 32 * v120;
      v152 = *(_QWORD *)(v117 + 64) - v121;
      v153 = operator new(32 * v120);
      v154 = *(char **)(v117 + 64);
      v155 = *(char **)(v117 + 56);
      v156 = v153;
      if ( v154 == v155 )
        goto LABEL_270;
      v157 = (_QWORD *)(v153 + 16);
      v158 = v154 + 16;
      v159 = v155 + 16;
      while ( 1 )
      {
        *(v157 - 2) = v157;
        v160 = *((char **)v159 - 2);
        v161 = *((_QWORD *)v159 - 1);
        if ( v160 == v159 )
        {
          v162 = v161 + 1;
          if ( (unsigned int)(v161 + 1) >= 8 )
          {
            *v157 = *(_QWORD *)v159;
            *(_QWORD *)((char *)v157 + v162 - 8) = *(_QWORD *)&v159[v162 - 8];
            v165 = (unsigned __int64)(v157 + 1) & 0xFFFFFFFFFFFFFFF8LL;
            v166 = ((_DWORD)v157 - v165 + v162) & 0xFFFFFFF8;
            if ( v166 >= 8 )
            {
              v167 = v166 & 0xFFFFFFF8;
              v168 = 0;
              do
              {
                v169 = v168;
                v168 += 8;
                *(_QWORD *)(v165 + v169) = *(_QWORD *)(v159 - ((char *)v157 - v165) + v169);
              }
              while ( v168 < v167 );
            }
LABEL_268:
            v161 = *((_QWORD *)v159 - 1);
            goto LABEL_262;
          }
          if ( (v162 & 4) != 0 )
          {
            *(_DWORD *)v157 = *(_DWORD *)v159;
            *(_DWORD *)((char *)v157 + v162 - 4) = *(_DWORD *)&v159[v162 - 4];
            v161 = *((_QWORD *)v159 - 1);
            goto LABEL_262;
          }
          if ( (_DWORD)v161 != -1 )
          {
            *(_BYTE *)v157 = *v159;
            if ( (v162 & 2) != 0 )
            {
              *(_WORD *)((char *)v157 + v162 - 2) = *(_WORD *)&v159[v162 - 2];
              v161 = *((_QWORD *)v159 - 1);
              goto LABEL_262;
            }
            goto LABEL_268;
          }
        }
        else
        {
          *(v157 - 2) = v160;
          *v157 = *(_QWORD *)v159;
        }
LABEL_262:
        *(v157 - 1) = v161;
        v157 += 4;
        *((_QWORD *)v159 - 2) = v159;
        v159 += 32;
        *((_QWORD *)v159 - 5) = 0;
        *(v159 - 32) = 0;
        if ( v158 == v159 )
        {
          v155 = *(char **)(v117 + 56);
LABEL_270:
          if ( v155 )
            operator delete(v155, *(_QWORD *)(v117 + 72) - (_QWORD)v155);
          *(_QWORD *)(v117 + 56) = v156;
          *(_QWORD *)(v117 + 64) = v156 + v152;
          *(_QWORD *)(v117 + 72) = v151 + v156;
          v118 = *(const char ***)(v33 + 8);
          v119 = *(const char ***)v33;
LABEL_203:
          if ( v118 == v119 )
            goto LABEL_221;
          v122 = v118;
          v190 = v33;
          while ( 1 )
          {
            v127 = *v119;
            v209[0] = v210;
            if ( !v127 )
              goto LABEL_301;
            v128 = (char *)strlen(v127);
            v211[0] = v128;
            v129 = (size_t)v128;
            if ( (unsigned __int64)v128 <= 0xF )
            {
              if ( v128 == (_BYTE *)&dword_0 + 1 )
              {
                LOBYTE(v210[0]) = *v127;
LABEL_207:
                v123 = v210;
                goto LABEL_208;
              }
              if ( !v128 )
                goto LABEL_207;
              v130 = v210;
            }
            else
            {
              v209[0] = (void *)std::string::_M_create();
              v130 = v209[0];
              v210[0] = v211[0];
            }
            memcpy(v130, v127, v129);
            v128 = (char *)v211[0];
            v123 = v209[0];
LABEL_208:
            v209[1] = v128;
            v128[(_QWORD)v123] = 0;
            v124 = *(_QWORD **)(v117 + 64);
            if ( v124 != *(_QWORD **)(v117 + 72) )
            {
              v125 = v124 + 2;
              *v124 = v124 + 2;
              if ( v209[0] != v210 )
              {
                *v124 = v209[0];
                v124[2] = v210[0];
                goto LABEL_211;
              }
              v126 = v209[1];
              v132 = LODWORD(v209[1]) + 1;
              if ( (unsigned int)(LODWORD(v209[1]) + 1) >= 8 )
              {
                v124[2] = v210[0];
                *(_QWORD *)((char *)v125 + v132 - 8) = *(void **)((char *)&v209[1] + v132);
                v143 = (unsigned __int64)(v124 + 3) & 0xFFFFFFFFFFFFFFF8LL;
                v144 = (char *)v125 - v143;
                v145 = (char *)((char *)v210 - v144);
                v146 = ((_DWORD)v144 + v132) & 0xFFFFFFF8;
                if ( v146 >= 8 )
                {
                  v147 = v146 & 0xFFFFFFF8;
                  v148 = 0;
                  do
                  {
                    v149 = v148;
                    v148 += 8;
                    *(_QWORD *)(v143 + v149) = *(_QWORD *)&v145[v149];
                  }
                  while ( v148 < v147 );
                }
LABEL_211:
                v126 = v209[1];
              }
              else if ( (v132 & 4) != 0 )
              {
                *((_DWORD *)v124 + 4) = v210[0];
                *(_DWORD *)((char *)v125 + v132 - 4) = *(_DWORD *)((char *)&v209[1] + v132 + 4);
                v126 = v209[1];
              }
              else if ( LODWORD(v209[1]) != -1 )
              {
                *((_BYTE *)v124 + 16) = v210[0];
                v126 = v209[1];
                if ( (v132 & 2) != 0 )
                {
                  *(_WORD *)((char *)v125 + v132 - 2) = *(_WORD *)((char *)&v209[1] + v132 + 6);
                  v126 = v209[1];
                }
              }
              v124[1] = v126;
              *(_QWORD *)(v117 + 64) += 32LL;
LABEL_213:
              if ( v122 == ++v119 )
                goto LABEL_220;
              continue;
            }
            sub_625280(v117 + 56, (char **)v209);
            if ( v209[0] == v210 )
              goto LABEL_213;
            ++v119;
            operator delete(v209[0], v210[0] + 1LL);
            if ( v122 == v119 )
            {
LABEL_220:
              v33 = v190;
LABEL_221:
              v71 = 0;
              goto LABEL_87;
            }
          }
        }
      }
    }
LABEL_87:
    v72 = v205;
    if ( v205 )
    {
      sub_FFE9C0(v205);
      operator delete(v72, 0x808u);
    }
    goto LABEL_89;
  }
  v71 = 4;
LABEL_89:
  v205 = nullptr;
  sub_636F40(v208);
  v73 = v204;
  if ( v204 )
  {
    sub_FFE9C0(v204);
    operator delete(v73, 0x808u);
  }
  v204 = nullptr;
  if ( v184 && !*(_BYTE *)(v184 + 16) )
    sub_25A19A0(*(_QWORD *)(v184 + 8), v184);
  if ( *(_QWORD *)v33 )
    operator delete(*(void **)v33, *(_QWORD *)(v33 + 16) - *(_QWORD *)v33);
  operator delete((void *)v33, 0x18u);
  if ( v197 && !*(_BYTE *)(v197 + 16) )
    sub_25A19A0(*(_QWORD *)(v197 + 8), v197);
  v74 = v18[1];
  v75 = *v18;
  if ( v74 != *v18 )
  {
    do
    {
      if ( *(_QWORD *)v75 != v75 + 16 )
        operator delete(*(void **)v75, *(_QWORD *)(v75 + 16) + 1LL);
      v75 += 40;
    }
    while ( v74 != v75 );
    v75 = *v18;
  }
  if ( v75 )
    operator delete((void *)v75, v18[2] - v75);
  operator delete(v18, 0x18u);
  if ( v199 && !*(_BYTE *)(v199 + 16) )
    sub_25A19A0(*(_QWORD *)(v199 + 8), v199);
  v76 = v203;
  if ( v203 )
  {
    v22 = (*(_DWORD *)v203)-- == 1;
    if ( v22 )
    {
      sub_C68450(v76);
      operator delete(v76, 0x3B90u);
    }
  }
  v77 = v202;
  if ( v202 )
  {
    v78 = *((_QWORD *)v202 + 31);
    v79 = *((_QWORD *)v202 + 30);
    if ( v78 != v79 )
    {
      do
      {
        if ( *(_QWORD *)v79 != v79 + 16 )
          operator delete(*(void **)v79, *(_QWORD *)(v79 + 16) + 1LL);
        v79 += 32;
      }
      while ( v78 != v79 );
      v79 = v77[30];
    }
    if ( v79 )
      operator delete((void *)v79, v77[32] - v79);
    v80 = v77[28];
    v81 = v77[27];
    if ( v80 != v81 )
    {
      do
      {
        if ( *(_QWORD *)v81 != v81 + 16 )
          operator delete(*(void **)v81, *(_QWORD *)(v81 + 16) + 1LL);
        v81 += 32;
      }
      while ( v80 != v81 );
      v81 = v77[27];
    }
    if ( v81 )
      operator delete((void *)v81, v77[29] - v81);
    v82 = v77[25];
    v83 = v77[24];
    if ( v82 != v83 )
    {
      do
      {
        if ( *(_QWORD *)v83 != v83 + 16 )
          operator delete(*(void **)v83, *(_QWORD *)(v83 + 16) + 1LL);
        v83 += 32;
      }
      while ( v82 != v83 );
      v83 = v77[24];
    }
    if ( v83 )
      operator delete((void *)v83, v77[26] - v83);
    v84 = v77[22];
    v85 = v77[21];
    if ( v84 != v85 )
    {
      do
      {
        if ( *(_QWORD *)v85 != v85 + 16 )
          operator delete(*(void **)v85, *(_QWORD *)(v85 + 16) + 1LL);
        v85 += 32;
      }
      while ( v84 != v85 );
      v85 = v77[21];
    }
    if ( v85 )
      operator delete((void *)v85, v77[23] - v85);
    v86 = v77[19];
    v87 = v77[18];
    if ( v86 != v87 )
    {
      do
      {
        if ( *(_QWORD *)v87 != v87 + 16 )
          operator delete(*(void **)v87, *(_QWORD *)(v87 + 16) + 1LL);
        v87 += 32;
      }
      while ( v86 != v87 );
      v87 = v77[18];
    }
    if ( v87 )
      operator delete((void *)v87, v77[20] - v87);
    v88 = (_QWORD *)v77[14];
    if ( v88 != v77 + 16 )
      operator delete(v88, v77[16] + 1LL);
    v89 = (_QWORD *)v77[10];
    if ( v89 != v77 + 12 )
      operator delete(v89, v77[12] + 1LL);
    v90 = (_QWORD *)v77[6];
    if ( v90 != v77 + 8 )
      operator delete(v90, v77[8] + 1LL);
    operator delete(v77, 0x108u);
  }
  return v71;
}

