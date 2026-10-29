__int64 __fastcall sub_1872820(
        __int64 *a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 **a6)
{
  unsigned int v10; // r14d
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // r14d
  __int64 v15; // rbp
  size_t v16; // rax
  void *v17; // rax
  int v18; // ecx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  _QWORD *v25; // r12
  _QWORD *v26; // rbp
  __int64 v27; // rax
  unsigned __int8 v28; // dl
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __m128 v31; // xmm0
  void *v32; // rdi
  void **v33; // rbp
  void **v34; // r12
  __int64 (__fastcall *v35)(_QWORD); // rax
  _QWORD *v36; // rdi
  _DWORD **v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _DWORD *v42; // rsi
  _DWORD *v43; // r14
  int v44; // eax
  unsigned int v45; // r12d
  __int64 v46; // rsi
  __int64 v47; // rax
  _QWORD *v48; // rdi
  __int64 *v49; // r14
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r9
  __int64 v53; // rax
  unsigned __int64 v54; // rdx
  char *v55; // rdx
  const __m128i *v56; // rcx
  __m128i v57; // xmm1
  __m128i *v58; // rax
  __m128i v59; // xmm2
  bool v60; // zf
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // rax
  _QWORD *v64; // rdi
  __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // rax
  unsigned __int64 v68; // rdx
  char *v69; // rdx
  const __m128i *v70; // rcx
  __m128i *v71; // rax
  __int64 v72; // r14
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  char *v75; // rdx
  const __m128i *v76; // rcx
  __m128i *v77; // rax
  __int64 v78; // r14
  size_t v79; // rax
  __int64 v80; // rax
  __m128i *v81; // r14
  size_t v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  unsigned __int64 v88; // r14
  char v89; // r14
  _QWORD *v90; // rax
  char v91; // r14
  unsigned __int64 v92; // r8
  _QWORD *v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rsi
  __int64 v100; // r14
  unsigned __int64 v101; // rsi
  char v102; // dl
  char v103; // al
  __m128i *v104; // rdi
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  void *v108; // rsi
  __int64 v109; // r12
  _DWORD *v110; // rax
  signed __int64 v111; // rsi
  void *v112; // rdi
  unsigned __int8 (__fastcall *v113)(_QWORD); // rax
  _QWORD *v114; // rdi
  int v115; // eax
  _BYTE *v116; // r14
  _BYTE *v117; // r14
  void **v118; // r14
  void **v119; // rbx
  unsigned __int64 v121; // [rsp+20h] [rbp-2408h] BYREF
  __int64 v122; // [rsp+28h] [rbp-2400h] BYREF
  char *v123; // [rsp+30h] [rbp-23F8h]
  int *v124; // [rsp+38h] [rbp-23F0h]
  __int64 v125; // [rsp+40h] [rbp-23E8h]
  void *v126; // [rsp+48h] [rbp-23E0h]
  __int64 p_ptr; // [rsp+50h] [rbp-23D8h]
  unsigned int v128; // [rsp+58h] [rbp-23D0h]
  char v129; // [rsp+5Eh] [rbp-23CAh]
  unsigned __int8 v130; // [rsp+5Fh] [rbp-23C9h]
  const __m128i *v131; // [rsp+60h] [rbp-23C8h]
  _DWORD *v132; // [rsp+68h] [rbp-23C0h]
  signed __int64 v133; // [rsp+70h] [rbp-23B8h]
  void **v134; // [rsp+78h] [rbp-23B0h]
  unsigned __int64 v135; // [rsp+80h] [rbp-23A8h]
  unsigned __int64 *v136; // [rsp+88h] [rbp-23A0h]
  unsigned __int64 v137; // [rsp+98h] [rbp-2390h] BYREF
  _WORD v138[2]; // [rsp+A0h] [rbp-2388h] BYREF
  unsigned int v139; // [rsp+A4h] [rbp-2384h]
  unsigned int v140; // [rsp+A8h] [rbp-2380h]
  unsigned int v141; // [rsp+ACh] [rbp-237Ch]
  void *v142; // [rsp+B0h] [rbp-2378h] BYREF
  unsigned int v143; // [rsp+B8h] [rbp-2370h]
  _QWORD v144[2]; // [rsp+C0h] [rbp-2368h] BYREF
  _QWORD v145[2]; // [rsp+D0h] [rbp-2358h] BYREF
  double v146[2]; // [rsp+E0h] [rbp-2348h] BYREF
  unsigned __int64 v147; // [rsp+F0h] [rbp-2338h]
  __int64 v148; // [rsp+F8h] [rbp-2330h]
  __m128 v149; // [rsp+100h] [rbp-2328h] BYREF
  __m128 v150; // [rsp+110h] [rbp-2318h]
  __m128 v151; // [rsp+120h] [rbp-2308h]
  int v152; // [rsp+130h] [rbp-22F8h] BYREF
  __int64 v153; // [rsp+138h] [rbp-22F0h]
  __int64 v154; // [rsp+140h] [rbp-22E8h]
  int v155; // [rsp+148h] [rbp-22E0h]
  __int64 v156; // [rsp+150h] [rbp-22D8h]
  __int16 v157; // [rsp+158h] [rbp-22D0h]
  int v158; // [rsp+1C0h] [rbp-2268h] BYREF
  _QWORD *v159; // [rsp+1C8h] [rbp-2260h]
  int v160; // [rsp+1D0h] [rbp-2258h]
  __int128 v161; // [rsp+270h] [rbp-21B8h] BYREF
  void *v162[2]; // [rsp+280h] [rbp-21A8h]
  __int128 v163; // [rsp+290h] [rbp-2198h]
  __int128 v164; // [rsp+2C8h] [rbp-2160h]
  __int64 v165; // [rsp+2D8h] [rbp-2150h]
  __int64 *v166; // [rsp+2E0h] [rbp-2148h]
  __int64 v167; // [rsp+2E8h] [rbp-2140h]
  unsigned int v168; // [rsp+2F0h] [rbp-2138h]
  __int128 v169; // [rsp+300h] [rbp-2128h]
  __int64 v170; // [rsp+310h] [rbp-2118h]
  void *ptr; // [rsp+320h] [rbp-2108h] BYREF
  __int64 v172; // [rsp+328h] [rbp-2100h]
  char v173; // [rsp+330h] [rbp-20F8h] BYREF
  unsigned int v174; // [rsp+430h] [rbp-1FF8h]
  unsigned int v175; // [rsp+434h] [rbp-1FF4h]
  void *v176[2]; // [rsp+440h] [rbp-1FE8h] BYREF
  void *v177[2]; // [rsp+450h] [rbp-1FD8h] BYREF
  __int128 v178; // [rsp+460h] [rbp-1FC8h]
  __int64 v179; // [rsp+470h] [rbp-1FB8h]
  __int64 v180; // [rsp+478h] [rbp-1FB0h]
  unsigned int v181; // [rsp+550h] [rbp-1ED8h]
  unsigned int v182; // [rsp+554h] [rbp-1ED4h]

  v10 = *((_DWORD *)a6 + 2);
  if ( v10 > 0x40 )
  {
    v115 = sub_2206780(a6);
    LODWORD(v12) = -1;
    if ( v10 - v115 <= 0x40 )
    {
      LODWORD(v12) = -1;
      if ( **a6 <= 0xFFFFFFFF )
        v12 = **a6;
    }
  }
  else
  {
    LODWORD(v11) = -1;
    if ( (unsigned __int64)*a6 <= 0xFFFFFFFF )
      v11 = *a6;
    LODWORD(v12) = (_DWORD)v11;
  }
  v13 = sub_1872040((__int64)a1, a4, a5, a2, a3, v12);
  if ( !(_BYTE)v13 && a3 )
  {
    v15 = a1[30];
    v16 = j__strlen("get");
    v17 = (void *)sub_6F3470(v15 + 552, "get", v16);
    v18 = *(_DWORD *)(a4 + 24);
    v124 = &v158;
    v126 = v17;
    sub_1838550((__int64)&v158, (__int64)a1, (__int64)v17, v18, 3);
    v19 = *(unsigned int *)(a4 + 24);
    if ( (unsigned __int8)sub_1E63330(a1, v19, a5, 1, 0) )
      goto LABEL_20;
    v24 = sub_F63270(*(_QWORD *)(a5 & 0xFFFFFFFFFFFFFFF0LL), v19, v20, v21, v22, v23);
    if ( v24 )
      sub_1A48440(a1, v124, v24 + 8, 0);
    if ( v158 == 5 )
    {
      v13 = 1;
      goto LABEL_84;
    }
    v25 = v159;
    v26 = &v159[v160];
    if ( v159 == v26 )
    {
LABEL_20:
      v129 = 0;
    }
    else
    {
      while ( 1 )
      {
        v27 = *v25 & 0xFFFFFFFFFFFFFFF8LL;
        v28 = *(_BYTE *)(v27 + 28) & 0x7F;
        if ( (unsigned int)v28 - 53 <= 1 || ((v28 + 52) & 0x7Fu) <= 1 )
        {
          v27 = sub_B72ED0(v27);
          v28 = *(_BYTE *)(v27 + 28) & 0x7F;
        }
        if ( v28 == 71 )
        {
          v29 = *(_QWORD *)(v27 + 56);
          if ( (*(_DWORD *)(v29 + 20) & 0x1FFFFFFF) != 0 && (*(_BYTE *)(*(_QWORD *)(v29 + 24) + 28LL) & 0x7F) == 0x2F )
            break;
        }
        if ( v26 == ++v25 )
          goto LABEL_20;
      }
      v129 = 1;
    }
    sub_A5EC20(v145, a4);
    v128 = 0;
    v30 = v147;
    v130 = v13;
    v122 = v145[0] + 8LL * v145[1];
    v149 = _mm_loadh_ps(v146);
    v125 = *(_QWORD *)&v146[0] + 8LL * *(_QWORD *)&v146[1];
    v123 = (char *)v125;
    v31 = _mm_loadh_ps((const double *)&v122);
    v121 = v147 + 8 * v148;
    v150 = v31;
    p_ptr = (__int64)&ptr;
    v123 = &v173;
    v151 = _mm_loadh_ps((const double *)&v121);
LABEL_22:
    if ( v121 == v30
      && __PAIR128__(v125, v122) == *(_OWORD *)&v149
      && __PAIR128__(v121, v125) == *(_OWORD *)&v151
      && v122 == v150.m128_u64[1] )
    {
      v13 = v130;
LABEL_84:
      sub_169D230((__int64)v124);
      return v13;
    }
    v32 = nullptr;
    v33 = v176;
    v176[1] = nullptr;
    v176[0] = sub_A56010;
    v34 = v176;
    v177[0] = sub_A56030;
    v177[1] = nullptr;
    *(_QWORD *)&v178 = sub_A56050;
    *((_QWORD *)&v178 + 1) = 0;
    while ( 1 )
    {
      v35 = (__int64 (__fastcall *)(_QWORD))*v34;
      v36 = (unsigned __int64 *)((char *)v149.m128_u64 + (_QWORD)v32);
      if ( ((unsigned __int8)*v34 & 1) != 0 )
        v35 = *(__int64 (__fastcall **)(_QWORD))((char *)v35 + *v36 - 1);
      v37 = (_DWORD **)v35(v36);
      if ( v37 )
        break;
      v34 += 2;
      v32 = v34[1];
    }
    v42 = *v37;
    v177[1] = nullptr;
    *(_QWORD *)&v178 = 0;
    DWORD2(v178) = 0;
    v43 = v42;
    v179 = 0;
    v180 = 0;
    LODWORD(v176[0]) = 21;
    WORD2(v176[0]) = 0;
    v44 = v42[6];
    v132 = v42;
    v177[0] = v42;
    LODWORD(v176[1]) = v44;
    sub_1DBA9B0(a1, v42, v38, v39, v40, v41, v176[0], v176[1], v42, 0, 0, *((_QWORD *)&v178 + 1), 0, 0);
    v45 = v42[6];
    v46 = a4;
    v47 = sub_190BDA0(a1, a4, a5, 1, (unsigned int)v43[6], 0);
    if ( v47 == 1 )
    {
LABEL_92:
      v13 = 1;
      sub_1DBAAE0(a1, v46);
      goto LABEL_84;
    }
    v48 = (_QWORD *)a1[31];
    v49 = (__int64 *)(v47 & 0xFFFFFFFFFFFFFFFELL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 43 )
    {
      v50 = sub_C0A3E0(v48, v49[1], 5, (__int64)v49, 0, 2, 0);
      v48 = (_QWORD *)a1[31];
      v49 = (__int64 *)(v50 & 0xFFFFFFFFFFFFFFFELL);
    }
    v174 = v45;
    v175 = v45;
    ptr = v123;
    v172 = 0x800000000LL;
    v133 = v128;
    v51 = sub_A63CE0(v48);
    sub_1838820((__int64)v176, (__int64)a1, v45, v51, (void *)v133, v52);
    v53 = (unsigned int)v172;
    v54 = (unsigned int)v172 + 1LL;
    if ( v54 > HIDWORD(v172) )
    {
      if ( ptr > v176 || (v131 = (const __m128i *)ptr, v176 >= (void **)((char *)ptr + 32 * (unsigned int)v172)) )
      {
        sub_2237220(p_ptr, v123, v54, 32);
        v55 = (char *)ptr;
        v53 = (unsigned int)v172;
        v56 = (const __m128i *)v176;
      }
      else
      {
        sub_2237220(p_ptr, v123, v54, 32);
        v55 = (char *)ptr;
        v53 = (unsigned int)v172;
        v56 = (const __m128i *)((char *)ptr + (char *)v176 - (char *)v131);
      }
    }
    else
    {
      v55 = (char *)ptr;
      v56 = (const __m128i *)v176;
    }
    v57 = _mm_loadu_si128(v56);
    v58 = (__m128i *)&v55[32 * v53];
    *v58 = v57;
    v59 = _mm_loadu_si128(v56 + 1);
    LODWORD(v172) = v172 + 1;
    v60 = v129 == 0;
    v58[1] = v59;
    if ( v60 )
    {
      LODWORD(v176[1]) = v45;
      v176[0] = v126;
      sub_B85890(v177, (__int64)v126);
      sub_C9A370((_QWORD *)a1[31], 0, 0, 0, 0, (const __m128i *)v176, 1, p_ptr, nullptr, 0, 0, 0);
      v46 = 0;
      v176[0] = v49;
      v63 = sub_192A5E0((_DWORD)a1, v45, 0, 0, 0);
    }
    else
    {
      *(_OWORD *)v176 = 0;
      *(_OWORD *)v177 = 0;
      v178 = 0;
      v61 = sub_19CB370((_DWORD)a1, (_DWORD)v49, a5, v45, 0, (unsigned int)v176, 0, 0, (__int64)v124, p_ptr, 0, 0, 0);
      v46 = HIDWORD(v177[1]);
      v62 = v61;
      if ( HIDWORD(v177[1]) )
        free(v177[0]);
      if ( v62 == 1 )
        goto LABEL_90;
      v46 = 0;
      v63 = sub_192A5E0((_DWORD)a1, v45, 0, 0, 0);
    }
    if ( v63 != 1 )
    {
      v64 = (_QWORD *)a1[31];
      v135 = v63 & 0xFFFFFFFFFFFFFFFELL;
      v137 = v63 & 0xFFFFFFFFFFFFFFFELL;
      v176[0] = v177;
      v134 = v177;
      v176[1] = (void *)0x800000000LL;
      v181 = v45;
      v182 = v45;
      v65 = sub_A63CE0(v64);
      v131 = (const __m128i *)&v161;
      sub_1838820((__int64)&v161, (__int64)a1, v45, v65, (void *)v133, v66);
      v67 = LODWORD(v176[1]);
      v68 = LODWORD(v176[1]) + 1LL;
      if ( v68 > HIDWORD(v176[1]) )
      {
        v117 = v176[0];
        if ( v176[0] > v131 || v131 >= (const __m128i *)((char *)v176[0] + 32 * LODWORD(v176[1])) )
        {
          sub_2237220(v176, v177, v68, 32);
          v69 = (char *)v176[0];
          v70 = v131;
          v67 = LODWORD(v176[1]);
        }
        else
        {
          sub_2237220(v176, v134, v68, 32);
          v69 = (char *)v176[0];
          v67 = LODWORD(v176[1]);
          v70 = (const __m128i *)((char *)v176[0] + (char *)v131 - v117);
        }
      }
      else
      {
        v69 = (char *)v176[0];
        v70 = (const __m128i *)&v161;
      }
      v71 = (__m128i *)&v69[32 * v67];
      *v71 = _mm_loadu_si128(v70);
      v71[1] = _mm_loadu_si128(v70 + 1);
      v134 = (void **)&v152;
      ++LODWORD(v176[1]);
      sub_F1D250((__int64)&v152, a5, 0, 0);
      v72 = (__int64)v131;
      sub_1D3AAD0(v131, a1, &v152, 0, v45, 0);
      v73 = LODWORD(v176[1]);
      v74 = LODWORD(v176[1]) + 1LL;
      if ( v74 > HIDWORD(v176[1]) )
      {
        v116 = v176[0];
        if ( v176[0] > v131 || v131 >= (const __m128i *)((char *)v176[0] + 32 * LODWORD(v176[1])) )
        {
          sub_2237220(v176, v177, v74, 32);
          v75 = (char *)v176[0];
          v76 = v131;
          v73 = LODWORD(v176[1]);
        }
        else
        {
          sub_2237220(v176, v177, v74, 32);
          v75 = (char *)v176[0];
          v73 = LODWORD(v176[1]);
          v76 = (const __m128i *)((char *)v176[0] + (char *)v131 - v116);
        }
      }
      else
      {
        v75 = (char *)v176[0];
        v76 = (const __m128i *)v72;
      }
      v77 = (__m128i *)&v75[32 * v73];
      *v77 = _mm_loadu_si128(v76);
      v77[1] = _mm_loadu_si128(v76 + 1);
      v78 = a1[30];
      ++LODWORD(v176[1]);
      v79 = j__strlen("type");
      v80 = sub_6F3470(v78 + 552, "type", v79);
      v81 = (__m128i *)v131;
      v162[0] = (void *)0x800000000LL;
      v164 = 0;
      *((_QWORD *)&v161 + 1) = (char *)v131 + 24;
      v167 = v80;
      *(_QWORD *)&v161 = 0;
      v165 = 0;
      v166 = a1;
      v168 = v45;
      sub_B85890(&v131[8].m128i_i64[1], v80);
      v169 = 0;
      v170 = 0x101010000LL;
      sub_1A395A0(v81);
      v82 = j__strlen("tuple_element");
      v46 = (__int64)v81;
      if ( !(unsigned __int8)sub_184B0C0(a1, v81, v45, "tuple_element", v82, (__int64)v176, 0xE0Eu) )
      {
        if ( (_DWORD)v161 == 2 )
        {
          v83 = sub_16C47B0(**((_QWORD **)&v161 + 1) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_BYTE *)(v83 + 28) & 0x7Fu) - 58 <= 9 )
          {
            v87 = *(_QWORD *)(v83 + 48);
            if ( v87 )
            {
              v133 = v87 & 0xFFFFFFFFFFFFFFF0LL;
              v88 = v87 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v46 = v83;
              v133 = sub_A7AA70(a1[31], v83, 0, v84, v85, v86);
              v88 = v133 & 0xFFFFFFFFFFFFFFF0LL;
            }
            sub_169D230((__int64)v131);
            if ( v176[0] != v177 )
              free(v176[0]);
            if ( v88 )
            {
              v46 = v133;
              v135 = sub_1E70650(a1, v133, ((*(_BYTE *)(v135 + 1) >> 1) & 3) == 1, v45, *((_QWORD *)v132 + 5));
              if ( (v135 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
              {
                v89 = *(_BYTE *)(a4 + 96);
                v90 = sub_A81910((_QWORD *)a1[31], v133, v45);
                v91 = v89 & 7;
                v92 = *((_QWORD *)v132 + 5) & 0xFFFFFFFFFFFFFFF8LL;
                if ( (*((_QWORD *)v132 + 5) & 7) != 0 )
                  v92 = 0;
                v93 = (_QWORD *)(*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                if ( (*(_QWORD *)(a4 + 16) & 4) != 0 )
                  v93 = (_QWORD *)*v93;
                v94 = sub_B731A0(a1[31], (__int64)v93, v45, v45, v92, v135, (__int64)v90, v91);
                v99 = *(_QWORD *)(a4 + 16);
                v100 = v94;
                if ( (v99 & 4) != 0 )
                  v101 = *(_QWORD *)((v99 & 0xFFFFFFFFFFFFFFF8LL) + 8);
                else
                  v101 = v99 & 0xFFFFFFFFFFFFFFF8LL;
                sub_B90130(v94, v101, v95, v96, v97, v98);
                v102 = *(_BYTE *)(a4 + 96);
                v103 = *(_BYTE *)(v100 + 96);
                *(_BYTE *)(v100 + 29) |= 2u;
                *(_BYTE *)(v100 + 96) = v102 & 0x18 | v103 & 0xE7;
                if ( (*(_BYTE *)(a4 + 28) & 0x7F) != 0x2B && (*(_BYTE *)(a4 + 97) & 0x40) != 0 )
                  *(_BYTE *)(v100 + 97) |= 0x60u;
                v104 = (__m128i *)(*(_QWORD *)(v100 + 16) & 0xFFFFFFFFFFFFFFF8LL);
                if ( (*(_QWORD *)(v100 + 16) & 4) != 0 )
                  v104 = (__m128i *)v104->m128i_i64[1];
                sub_B8EA00(v104, v100);
                v152 = 20;
                v138[0] = 2;
                v153 = 0;
                v105 = *(_QWORD *)(v100 + 48);
                v157 = 0;
                v154 = v105;
                v155 = 0;
                v156 = v100;
                v139 = v45;
                v140 = v45;
                v141 = v45;
                v136 = &v137;
                v135 = (unsigned __int64)v138;
                sub_1A19220(
                  (unsigned int)v176,
                  (_DWORD)a1,
                  (_DWORD)v134,
                  (unsigned int)v138,
                  (unsigned int)&v137,
                  1,
                  0,
                  1);
                v46 = (__int64)a1;
                v106 = sub_1A1D600((unsigned int)v176, (_DWORD)a1, (_DWORD)v134, v135, (_DWORD)v136, 1, 0);
                if ( v106 != 1 )
                {
                  v46 = v106 & 0xFFFFFFFFFFFFFFFELL;
                  v107 = sub_19B4A30(a1, v106 & 0xFFFFFFFFFFFFFFFELL, v45, 0, 0, 0);
                  if ( v107 != 1 )
                  {
                    sub_B73850(v100, v107 & 0xFFFFFFFFFFFFFFFELL);
                    sub_17C8350((__int64)a1, (_BYTE *)v100, 0.0, *(double *)v57.m128i_i64);
                    v108 = *((void **)v132 + 5);
                    v143 = v45;
                    v142 = v108;
                    sub_B85890(v144, (__int64)v108);
                    v161 = 0;
                    *(_OWORD *)v162 = 0;
                    v163 = 0;
                    v46 = (__int64)v131;
                    v109 = sub_190AE60((_DWORD)a1, (_DWORD)v131, (unsigned int)&v142, v100, 0, 0, 0);
                    if ( HIDWORD(v162[1]) )
                      free(v162[0]);
                    if ( v109 != 1 )
                    {
                      v110 = v132;
                      v111 = v133;
                      *((_QWORD *)v132 + 6) = v133;
                      *((_QWORD *)v110 + 8) = v109 & 0xFFFFFFFFFFFFFFFELL;
                      sub_1A0BB10(v176);
                      if ( ptr != v123 )
                        free(ptr);
                      sub_1DBAAE0(a1, v111);
                      v112 = nullptr;
                      v176[1] = nullptr;
                      v176[0] = sub_A55F80;
                      v177[0] = sub_A55FB0;
                      v177[1] = nullptr;
                      *(_QWORD *)&v178 = sub_A55FE0;
                      *((_QWORD *)&v178 + 1) = 0;
                      while ( 1 )
                      {
                        v113 = (unsigned __int8 (__fastcall *)(_QWORD))*v33;
                        v114 = (unsigned __int64 *)((char *)v149.m128_u64 + (_QWORD)v112);
                        if ( ((unsigned __int8)*v33 & 1) != 0 )
                        {
                          if ( (*(unsigned __int8 (**)(void))((char *)v113 + *v114 - 1))() )
                            goto LABEL_75;
                        }
                        else if ( v113(v114) )
                        {
LABEL_75:
                          ++v128;
                          v30 = v150.m128_u64[0];
                          goto LABEL_22;
                        }
                        v33 += 2;
                        v112 = v33[1];
                      }
                    }
                  }
                }
                sub_1A0BB10(v176);
              }
            }
            goto LABEL_90;
          }
        }
        *(_WORD *)((char *)&v170 + 3) = 0;
        v118 = v134;
        sub_168B9F0((__int64)v134, a1 + 1, v45, 0xE0Eu, 0);
        sub_1839770(&v142, (const __m128i *)(a1[31] + 17464), (__int64)v176, 0);
        v46 = (__int64)&v142;
        sub_1682AF0((__int64)v118, (__int64)&v142);
        if ( v142 != v144 )
          operator delete(v142);
        sub_15F7200(v134);
        if ( LODWORD(v162[0]) )
        {
          v46 = (__int64)(a1 + 1);
          v119 = v134;
          sub_168B9F0(
            (__int64)v134,
            a1 + 1,
            *(_DWORD *)((**((_QWORD **)&v161 + 1) & 0xFFFFFFFFFFFFFFF8LL) + 24),
            0x67u,
            0);
          sub_15F7200(v119);
        }
      }
      sub_169D230((__int64)v131);
      if ( v176[0] != v177 )
        free(v176[0]);
    }
LABEL_90:
    if ( ptr != (void *)(p_ptr + 16) )
      free(ptr);
    goto LABEL_92;
  }
  return v13;
}
