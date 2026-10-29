_QWORD *__fastcall sub_8493F0(__int64 a1, __int64 a2)
{
  char **v2; // r14
  char **exception; // r14
  char **v4; // r14
  __int64 v7; // rax
  __int64 *v8; // rcx
  int v9; // edi
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *i; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  unsigned int v17; // r14d
  _QWORD *v18; // rdi
  unsigned int v19; // edx
  __int64 v20; // rax
  __int64 *v21; // r12
  int v22; // r9d
  __int64 v23; // rcx
  __int64 *v24; // r15
  int v25; // esi
  __int64 v26; // r9
  __int64 *v27; // rdi
  __int64 *v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  _QWORD *v33; // r12
  _QWORD *v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  _QWORD *v38; // rcx
  __int64 v39; // r15
  int v40; // r9d
  _QWORD *v41; // r12
  _QWORD *v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  _QWORD *v46; // rcx
  _QWORD *v47; // r8
  _QWORD *v48; // rdx
  __int64 v49; // r12
  __int64 v50; // rcx
  int v51; // eax
  _QWORD *v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // r15d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rcx
  __int64 v59; // rax
  unsigned int v60; // eax
  __int64 v61; // r14
  __int64 v62; // r15
  int v63; // eax
  int v64; // r8d
  int v65; // r9d
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 *v68; // r12
  __int64 v69; // rsi
  bool v70; // zf
  __int64 v71; // rdx
  __int64 v72; // r12
  __int64 v73; // rsi
  __int64 v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // rdi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rsi
  __int64 v80; // rdi
  unsigned int v81; // ecx
  size_t v82; // rsi
  unsigned int *v83; // rax
  unsigned int v84; // ecx
  size_t v85; // rsi
  unsigned int *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rsi
  __int64 v89; // rdi
  __m128i *v90; // rax
  int v91; // r10d
  __m128i *v92; // r8
  const __m128i *v93; // rax
  __m128i *v94; // r11
  __int64 v95; // rdx
  __m128i *v96; // rsi
  _QWORD *v97; // rdi
  __m128i *v98; // rdx
  _QWORD *v99; // rax
  unsigned __int64 v100; // r15
  __int64 *v101; // r12
  __int64 v102; // rsi
  __int64 v103; // rdi
  _QWORD *v104; // rax
  _QWORD *v105; // rdx
  _QWORD *v106; // rdx
  int v107; // [rsp-8h] [rbp-2E8h]
  int v108; // [rsp+0h] [rbp-2E0h]
  int v109; // [rsp+0h] [rbp-2E0h]
  __int64 v110; // [rsp+8h] [rbp-2D8h]
  int v111; // [rsp+8h] [rbp-2D8h]
  int v112; // [rsp+10h] [rbp-2D0h]
  int v113; // [rsp+10h] [rbp-2D0h]
  _QWORD *v114; // [rsp+18h] [rbp-2C8h]
  int v115; // [rsp+18h] [rbp-2C8h]
  __int64 v116; // [rsp+18h] [rbp-2C8h]
  _QWORD *v117; // [rsp+20h] [rbp-2C0h]
  int v118; // [rsp+20h] [rbp-2C0h]
  __int64 v119; // [rsp+20h] [rbp-2C0h]
  __int64 **v120; // [rsp+28h] [rbp-2B8h]
  char v121; // [rsp+28h] [rbp-2B8h]
  int v122[2]; // [rsp+28h] [rbp-2B8h]
  __int64 v123; // [rsp+30h] [rbp-2B0h]
  int v124; // [rsp+30h] [rbp-2B0h]
  void *v125; // [rsp+38h] [rbp-2A8h]
  int v126; // [rsp+38h] [rbp-2A8h]
  __int64 v127; // [rsp+40h] [rbp-2A0h]
  int v128; // [rsp+40h] [rbp-2A0h]
  unsigned int v129; // [rsp+40h] [rbp-2A0h]
  unsigned int v130; // [rsp+40h] [rbp-2A0h]
  size_t v131; // [rsp+40h] [rbp-2A0h]
  int v132; // [rsp+40h] [rbp-2A0h]
  _QWORD *v133; // [rsp+48h] [rbp-298h]
  void *v134; // [rsp+48h] [rbp-298h]
  int v135; // [rsp+50h] [rbp-290h]
  int v136; // [rsp+58h] [rbp-288h]
  int v137[2]; // [rsp+60h] [rbp-280h] BYREF
  __int64 v138; // [rsp+68h] [rbp-278h]
  int v139; // [rsp+70h] [rbp-270h]
  int v140; // [rsp+78h] [rbp-268h]
  __int64 *v141; // [rsp+80h] [rbp-260h] BYREF
  int v142; // [rsp+88h] [rbp-258h]
  int v143; // [rsp+90h] [rbp-250h]
  int v144; // [rsp+98h] [rbp-248h]
  int v145; // [rsp+A0h] [rbp-240h]
  void *v146; // [rsp+A8h] [rbp-238h]
  int v147; // [rsp+B0h] [rbp-230h]
  __int64 v148; // [rsp+B8h] [rbp-228h]
  _BYTE *v149; // [rsp+110h] [rbp-1D0h]
  int v150; // [rsp+118h] [rbp-1C8h]
  __int64 v151; // [rsp+120h] [rbp-1C0h]
  _QWORD v152[19]; // [rsp+128h] [rbp-1B8h] BYREF
  int v153; // [rsp+1C0h] [rbp-120h]
  _QWORD v154[18]; // [rsp+1C8h] [rbp-118h] BYREF
  int v155; // [rsp+258h] [rbp-88h]
  __int64 v156; // [rsp+260h] [rbp-80h]
  __int64 v157; // [rsp+268h] [rbp-78h]
  __int64 v158; // [rsp+270h] [rbp-70h]
  __int64 v159; // [rsp+278h] [rbp-68h]
  __int64 v160; // [rsp+280h] [rbp-60h]
  __int64 v161; // [rsp+288h] [rbp-58h]
  __int64 v162; // [rsp+290h] [rbp-50h]
  _BYTE v163[72]; // [rsp+298h] [rbp-48h] BYREF

  v7 = *(unsigned int *)(a1 + 224);
  v8 = *(__int64 **)(a1 + 216);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = v7 - 1;
  v7 *= 16;
  v11 = (__int64 *)((char *)v8 + v7);
  v12 = 16LL * (v9 & v10);
  v13 = &v8[(unsigned __int64)v12 / 8];
  if ( v12 != v7 )
  {
    for ( i = &v8[(unsigned __int64)v12 / 8]; v11 != i; i += 2 )
    {
      v15 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v15 + 12) == v9 && a2 == v15 )
          return (_QWORD *)i[1];
      }
      else if ( !v15 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v13 != v8; v8 += 2 )
  {
    v59 = *v8;
    if ( (unsigned __int64)*v8 > 1 )
    {
      if ( *(_DWORD *)(v59 + 12) == v9 && a2 == v59 )
      {
        i = v8;
        return (_QWORD *)i[1];
      }
    }
    else if ( !v59 )
    {
      break;
    }
  }
LABEL_8:
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_DWORD *)(a2 + 20);
  v120 = &v141;
  sub_1584DD0(&v141, v16, 0);
  v141 = (__int64 *)&off_1C4CA60;
  v149 = v163;
  v150 = 0;
  v151 = 0;
  v117 = v152;
  sub_1584DD0(v152, v16, 0);
  v152[18] = 0;
  v114 = v154;
  v152[0] = &off_1C61DB8;
  v153 = 0;
  sub_1584DD0(v154, v16, 0);
  v155 = 0;
  v156 = 0;
  v157 = v16;
  v154[0] = &off_1C61DE0;
  v158 = 0;
  v159 = v16;
  v160 = 0;
  v161 = v16;
  v162 = 0;
  v141 = &off_1C4CA80;
  v163[8] = 1;
  v18 = (_QWORD *)sub_186B270(0x50u);
  v19 = *(_DWORD *)(a1 + 224);
  v133 = v18;
  v20 = *(_QWORD *)(a1 + 16);
  v18[1] = 0;
  v18[2] = 0;
  *v18 = v20;
  v18[4] = v20;
  v18[5] = v20;
  v18[7] = v20;
  LODWORD(v20) = *(_DWORD *)(a1 + 228) + *(_DWORD *)(a1 + 232);
  v18[3] = 0;
  v18[6] = 0;
  v18[8] = 0;
  v18[9] = 0;
  if ( 3 * v19 < 4 * (int)v20 )
  {
    LODWORD(v125) = 2 * v19;
    v131 = 32LL * v19;
    v90 = (__m128i *)sub_186B270(v131);
    v23 = v131;
    v91 = (int)v125;
    v21 = (__int64 *)v90;
    v92 = &v90[v131 / 0x10];
    if ( (_DWORD)v125 )
    {
      if ( (v131 & 0x10) == 0 || (*v90 = 0, ++v90, v92 != v90) )
      {
        do
        {
          *v90 = 0;
          v90 += 2;
          v90[-1] = 0;
        }
        while ( v92 != v90 );
      }
    }
    v93 = *(const __m128i **)(a1 + 216);
    v22 = (_DWORD)v125 - 1;
    v24 = (__int64 *)v92;
    v94 = (__m128i *)&v93[*(unsigned int *)(a1 + 224)];
    if ( v93 != v94 )
    {
      do
      {
        if ( v93->m128i_i64[0] > 1uLL )
        {
          v95 = 16LL * (*(_DWORD *)(v93->m128i_i64[0] + 12) & (unsigned int)v22);
          v96 = (__m128i *)&v21[(unsigned __int64)v95 / 8];
          if ( v131 == v95 )
          {
LABEL_110:
            if ( v21 == (__int64 *)v96 )
            {
LABEL_129:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v97 = v133;
            v98 = (__m128i *)v21;
            while ( v98->m128i_i64[0] )
            {
              if ( v96 == ++v98 )
                goto LABEL_129;
            }
          }
          else
          {
            v97 = v133;
            v98 = (__m128i *)&v21[(unsigned __int64)v95 / 8];
            while ( v98->m128i_i64[0] )
            {
              if ( v92 == ++v98 )
                goto LABEL_110;
            }
          }
          v133 = v97;
          *v98 = _mm_loadu_si128(v93);
        }
        ++v93;
      }
      while ( v94 != v93 );
      v94 = *(__m128i **)(a1 + 216);
    }
    if ( v94 )
    {
      LODWORD(v123) = (_DWORD)v125;
      v125 = (void *)v131;
      v132 = v91 - 1;
      sub_186B220(v94);
      v91 = v123;
      v23 = (__int64)v125;
      v22 = v132;
    }
    *(_QWORD *)(a1 + 216) = v21;
    *(_DWORD *)(a1 + 224) = v91;
    *(_DWORD *)(a1 + 232) = 0;
  }
  else
  {
    v21 = *(__int64 **)(a1 + 216);
    v22 = v19 - 1;
    v23 = 16LL * v19;
    v24 = (__int64 *)((char *)v21 + v23);
  }
  v25 = *(_DWORD *)(a2 + 12);
  v26 = 16LL * (v25 & (unsigned int)v22);
  v27 = &v21[(unsigned __int64)v26 / 8];
  if ( v26 == v23 )
  {
    v29 = nullptr;
LABEL_18:
    if ( v27 == v21 )
    {
LABEL_26:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = *v21;
        if ( (unsigned __int64)*v21 <= 1 )
          break;
        if ( *(_DWORD *)(v31 + 12) == v25 && a2 == v31 )
        {
          *v21 = a2;
          v21[1] = (__int64)v133;
          goto LABEL_27;
        }
        v21 += 2;
        if ( v27 == v21 )
          goto LABEL_26;
      }
      if ( !v31 )
        break;
      v29 = v21;
      v21 += 2;
      if ( v27 == v21 )
        goto LABEL_26;
    }
    v99 = v133;
    if ( v29 )
      --*(_DWORD *)(a1 + 232);
    else
      v29 = v21;
  }
  else
  {
    v28 = &v21[(unsigned __int64)v26 / 8];
    v29 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v30 = *v28;
        if ( (unsigned __int64)*v28 <= 1 )
          break;
        if ( *(_DWORD *)(v30 + 12) == v25 && a2 == v30 )
        {
          *v28 = a2;
          v28[1] = (__int64)v133;
          goto LABEL_27;
        }
        v28 += 2;
        if ( v28 == v24 )
          goto LABEL_18;
      }
      if ( !v30 )
        break;
      v29 = v28;
      v28 += 2;
      if ( v28 == v24 )
        goto LABEL_18;
    }
    if ( v29 )
      --*(_DWORD *)(a1 + 232);
    else
      v29 = v28;
    v99 = v133;
  }
  *v29 = a2;
  v29[1] = (__int64)v99;
  ++*(_DWORD *)(a1 + 228);
LABEL_27:
  v32 = *(_QWORD *)a1;
  v33 = (_QWORD *)sub_180C100(*(_QWORD *)a1 + 2144LL, 16);
  v34 = *(_QWORD **)(v32 + 2128);
  *v33 = off_1C553F8;
  v33[1] = v133;
  if ( v34 )
  {
    v35 = *((_DWORD *)v34 - 1);
    if ( v35 == *((_DWORD *)v34 - 2) )
    {
      v84 = (3 * v35 + 1) >> 1;
      v85 = 8 * v84 + 8;
      if ( 8 * v35 + 8 >= (unsigned int)v85 || v35 >= v84 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v137, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v137);
        sub_233E40((__int64)v137);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v130 = (3 * v35 + 1) >> 1;
      v86 = (unsigned int *)sub_186B300(v34 - 1, v85);
      v34 = v86 + 2;
      *(_QWORD *)(v32 + 2128) = v86 + 2;
      *v86 = v130;
      LODWORD(v86) = v86[1];
      v38 = &v34[(unsigned int)v86];
      v37 = (_DWORD)v86 + 1;
    }
    else
    {
      v36 = v35;
      v37 = v35 + 1;
      v38 = &v34[v36];
    }
  }
  else
  {
    v105 = (_QWORD *)sub_186B270(0x18u);
    *v105 = 2;
    v37 = 1;
    v34 = v105 + 1;
    *(_QWORD *)(v32 + 2128) = v34;
    v38 = v34;
  }
  *v38 = v33;
  v39 = *(_QWORD *)a1;
  *((_DWORD *)v34 - 1) = v37;
  v41 = (_QWORD *)sub_180C100(v39 + 2144, 24);
  *v41 = off_1C55420;
  v41[1] = a1 + 216;
  v42 = *(_QWORD **)(v39 + 2128);
  v41[2] = a2;
  if ( v42 )
  {
    v43 = *((_DWORD *)v42 - 1);
    if ( v43 == *((_DWORD *)v42 - 2) )
    {
      v81 = (3 * v43 + 1) >> 1;
      v82 = 8 * v81 + 8;
      if ( 8 * v43 + 8 >= (unsigned int)v82 || v43 >= v81 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v137, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v137);
        sub_233E40((__int64)v137);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v129 = (3 * v43 + 1) >> 1;
      v83 = (unsigned int *)sub_186B300(v42 - 1, v82);
      v42 = v83 + 2;
      *(_QWORD *)(v39 + 2128) = v83 + 2;
      *v83 = v129;
      LODWORD(v83) = v83[1];
      v46 = &v42[(unsigned int)v83];
      v45 = (_DWORD)v83 + 1;
    }
    else
    {
      v44 = v43;
      v45 = v43 + 1;
      v46 = &v42[v44];
    }
  }
  else
  {
    v106 = (_QWORD *)sub_186B270(0x18u);
    *v106 = 2;
    v45 = 1;
    v42 = v106 + 1;
    *(_QWORD *)(v39 + 2128) = v42;
    v46 = v42;
  }
  *v46 = v41;
  *((_DWORD *)v42 - 1) = v45;
  v47 = (_QWORD *)v133[1];
  v48 = v47;
  if ( !v47 )
  {
    if ( v17 )
    {
      v104 = (_QWORD *)sub_186B270(0x18u);
      v48 = v104 + 1;
      *v104 = 2;
      LODWORD(v49) = 0;
      v52 = v104 + 1;
      v133[1] = v104 + 1;
      v51 = 1;
      goto LABEL_38;
    }
    v71 = *(_QWORD *)(a2 + 24);
    goto LABEL_67;
  }
  v49 = *((unsigned int *)v47 - 1);
  if ( v17 < (unsigned int)v49 )
  {
    v100 = (unsigned __int64)&v47[v49];
    v101 = &v47[v17];
    if ( (unsigned __int64)v101 >= v100 )
      goto LABEL_55;
    do
    {
      v102 = *v101;
      if ( *v101 )
      {
        v103 = *v133;
        v70 = (*(_DWORD *)(v102 + 8))-- == 1;
        if ( v70 )
          sub_15D7BC0(v103, v102);
      }
      ++v101;
    }
    while ( (unsigned __int64)v101 < v100 );
    v47 = (_QWORD *)v133[1];
    if ( v47 )
LABEL_55:
      *((_DWORD *)v47 - 1) = v17;
  }
  else if ( (unsigned int)v49 < v17 )
  {
    do
    {
      v53 = *((_DWORD *)v48 - 1);
      if ( v53 == *((_DWORD *)v48 - 2) )
      {
        v54 = (3 * v53 + 1) >> 1;
        v55 = 8 * v54 + 8;
        if ( 8 * v53 + 8 >= (unsigned int)v55 || v53 >= v54 )
        {
          v2 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v137, "Overflow encountered when expanding vector");
          *v2 = (char *)off_1C63128;
          sub_2333C0(v2 + 1, v137);
          sub_233E40((__int64)v137);
          __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v56 = (unsigned int *)sub_186B300(v48 - 1, v55);
        v57 = v56[1];
        v48 = v56 + 2;
        *v56 = v54;
        LODWORD(v56) = v57;
        v133[1] = v48;
        v52 = &v48[v57];
        v51 = (_DWORD)v56 + 1;
      }
      else
      {
        v50 = v53;
        v51 = v53 + 1;
        v52 = &v48[v50];
      }
LABEL_38:
      LODWORD(v49) = v49 + 1;
      *v52 = 0;
      *((_DWORD *)v48 - 1) = v51;
    }
    while ( (unsigned int)v49 < v17 );
    goto LABEL_57;
  }
  if ( v17 )
  {
LABEL_57:
    v60 = v17;
    v61 = 0;
    LODWORD(v127) = v60;
    LODWORD(v125) = a2 + 80;
    do
    {
      v62 = *(_QWORD *)(a1 + 16);
      v63 = sub_15E3D10(
              v62,
              (int)v125 + 8 * ((int)v61 + *(_DWORD *)(a2 + 20)),
              (int)&qword_18D6CD0,
              0,
              0,
              *(_QWORD *)(a2 + 8 * v61 + 80),
              0,
              v107,
              v108,
              v110,
              v112,
              (int)v114,
              (int)v117,
              (int)v120,
              v123,
              (int)v125,
              v127,
              (int)v133,
              v135,
              v136,
              v137[0],
              v138,
              v139,
              v140,
              (int)v141,
              v142,
              v143,
              v144,
              v145,
              v146,
              v147,
              v148);
      v66 = sub_15DC610(v62, v63, 0, 0, v64, v65, v109, v111, v113, v115, v118, v121, v124, v126, v128, v134);
      v67 = *v133;
      v68 = (__int64 *)(v133[1] + 8 * v61);
      if ( v66 )
        ++*(_DWORD *)(v66 + 8);
      v69 = *v68;
      if ( *v68 )
      {
        v70 = (*(_DWORD *)(v69 + 8))-- == 1;
        if ( v70 )
        {
          v123 = v66;
          sub_15D7BC0(v67, v69);
          v66 = v123;
        }
      }
      *v68 = v66;
      ++v61;
    }
    while ( v127 != v61 );
    v47 = (_QWORD *)v133[1];
  }
  v71 = *(_QWORD *)(a2 + 24);
  if ( v47 )
    v17 = *((_DWORD *)v47 - 1);
  else
    v17 = 0;
LABEL_67:
  sub_157BE40(
    (int)v137,
    (int)v120,
    v71,
    v17,
    (int)v47,
    v40,
    v108,
    v110,
    v112,
    (int)v114,
    (int)v117,
    (int)v120,
    v123,
    v125);
  v72 = *(_QWORD *)v137;
  if ( *(_WORD *)(a2 + 4) == 2 && !*(_DWORD *)(a2 + 16) )
  {
    v87 = sub_15E1A70(*(_QWORD *)(a1 + 16));
    v72 = v87;
    if ( v87 )
      ++*(_DWORD *)(v87 + 8);
    v88 = *(_QWORD *)v137;
    if ( *(_QWORD *)v137 )
    {
      v89 = v138;
      v70 = (*(_DWORD *)(*(_QWORD *)v137 + 8LL))-- == 1;
      if ( v70 )
        sub_15D7BC0(v89, v88);
    }
    *(_QWORD *)v137 = v72;
  }
  sub_15EEF60(v72);
  sub_848F40(a1, a2);
  sub_848BB0(a1, *(_QWORD *)(a2 + 24), (__int64)v133);
  v73 = *(_QWORD *)v137;
  if ( *(_QWORD *)v137 )
  {
    v74 = v138;
    v70 = (*(_DWORD *)(*(_QWORD *)v137 + 8LL))-- == 1;
    if ( v70 )
      sub_15D7BC0(v74, v73);
  }
  v141 = (__int64 *)&off_1C4CA60;
  if ( v162 )
    sub_186B220((void *)(v162 - 8));
  v75 = v160;
  if ( v160 )
  {
    v76 = v161;
    v70 = (*(_DWORD *)(v160 + 8))-- == 1;
    if ( v70 )
      sub_15D7BC0(v76, v75);
  }
  v77 = v158;
  if ( v158 )
  {
    v78 = v159;
    v70 = (*(_DWORD *)(v158 + 8))-- == 1;
    if ( v70 )
      sub_15D7BC0(v78, v77);
  }
  v79 = v156;
  if ( v156 )
  {
    v80 = v157;
    v70 = (*(_DWORD *)(v156 + 8))-- == 1;
    if ( v70 )
      sub_15D7BC0(v80, v79);
  }
  v154[0] = &qword_1C637E8;
  sub_15841B0(v116);
  v152[0] = &qword_1C637E8;
  sub_15841B0(v119);
  if ( v151 )
    sub_186B220((void *)(v151 - 8));
  sub_15841B0(*(_QWORD *)v122);
  return v133;
}

