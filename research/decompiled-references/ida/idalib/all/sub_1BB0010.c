__int64 __fastcall sub_1BB0010(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        double a6,
        __m128 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 a11)
{
  __int64 v12; // rbx
  __m128 si128; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // rcx
  char v18; // dl
  int v19; // eax
  int v20; // esi
  char v21; // dl
  unsigned int v22; // esi
  unsigned int v23; // r8d
  char v24; // si
  unsigned int v25; // r8d
  int v26; // edx
  int v27; // r14d
  __int64 v28; // rsi
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  char v32; // dl
  int v33; // esi
  __int64 v34; // r13
  char *v35; // r13
  unsigned int v36; // eax
  __int64 v37; // rbx
  void **v38; // rsi
  void **v39; // rcx
  void **v40; // rbx
  void *v41; // r13
  __int64 *v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rdi
  __int64 v45; // r13
  int v46; // r14d
  __int64 v47; // rax
  char v49; // dl
  int v50; // eax
  __int64 v51; // rax
  char *v52; // r13
  unsigned int v53; // eax
  int v54; // r15d
  int v55; // edx
  int v56; // r14d
  int v57; // r13d
  __int64 v58; // rcx
  __int64 v59; // r9
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // r13
  __int64 *v63; // rax
  __int64 v64; // r14
  __int64 v65; // r14
  __int64 v66; // rax
  _QWORD *v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r13
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  bool v77; // r14
  char v78; // r15
  unsigned __int64 v79; // r8
  unsigned __int64 v80; // rax
  _BYTE *v81; // r13
  _BYTE *v82; // rdx
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // rax
  char v86; // si
  __int64 v87; // rax
  __int64 v88; // rdi
  char v89; // al
  int v90; // eax
  __int64 v91; // rdx
  __int64 v92; // rax
  _DWORD *v93; // rdx
  _DWORD *v94; // rcx
  int v95; // edi
  int v96; // esi
  _DWORD *v97; // r8
  int v98; // eax
  __int64 v99; // rsi
  unsigned __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  void **v105; // rdx
  __int64 v106; // rax
  char v107; // r9
  __int64 v108; // rax
  __int64 v109; // r8
  _QWORD *v110; // rax
  _QWORD *v111; // r8
  _QWORD *v112; // rsi
  __m128 v113; // xmm0
  __int64 v114; // r13
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // rbx
  int v118; // eax
  unsigned __int64 v119; // rsi
  __int64 v120; // rax
  __int64 v121; // rbp
  unsigned __int64 v122; // rbx
  char *v123; // rax
  __int64 v124; // rdx
  unsigned __int16 v125; // ax
  __int64 v126; // [rsp-10h] [rbp-2C8h]
  unsigned int v128; // [rsp+20h] [rbp-298h]
  int v129; // [rsp+20h] [rbp-298h]
  int v130; // [rsp+28h] [rbp-290h]
  __int64 v131; // [rsp+28h] [rbp-290h]
  unsigned __int64 v132; // [rsp+38h] [rbp-280h]
  unsigned __int64 v133; // [rsp+38h] [rbp-280h]
  void *v134; // [rsp+38h] [rbp-280h]
  unsigned int v135; // [rsp+48h] [rbp-270h]
  __int64 v136; // [rsp+48h] [rbp-270h]
  void **v137; // [rsp+58h] [rbp-260h]
  unsigned int v138; // [rsp+68h] [rbp-250h]
  __int64 v139; // [rsp+68h] [rbp-250h]
  __int64 v140; // [rsp+70h] [rbp-248h]
  __int64 v141; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v142; // [rsp+88h] [rbp-230h]
  __m128i v143; // [rsp+90h] [rbp-228h] BYREF
  __m128i v144; // [rsp+A0h] [rbp-218h] BYREF
  void *v145; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v146; // [rsp+B8h] [rbp-200h]
  _BYTE v147[32]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v148[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE v149[32]; // [rsp+F0h] [rbp-1C8h] BYREF
  void *v150; // [rsp+110h] [rbp-1A8h] BYREF
  __m128 v151; // [rsp+118h] [rbp-1A0h]
  _BYTE v152[16]; // [rsp+128h] [rbp-190h] BYREF
  char v153; // [rsp+138h] [rbp-180h]
  void *v154; // [rsp+140h] [rbp-178h] BYREF
  __int64 v155; // [rsp+148h] [rbp-170h]
  _QWORD v156[4]; // [rsp+150h] [rbp-168h] BYREF
  __m128 v157; // [rsp+170h] [rbp-148h] BYREF
  int v158; // [rsp+188h] [rbp-130h]
  void **v159; // [rsp+190h] [rbp-128h]
  __int64 v160; // [rsp+198h] [rbp-120h]
  unsigned __int64 v161; // [rsp+1A0h] [rbp-118h]
  __int64 v162; // [rsp+1B0h] [rbp-108h]
  _BYTE *v163; // [rsp+1B8h] [rbp-100h]
  _BYTE *v164; // [rsp+1C8h] [rbp-F0h]
  void *v165; // [rsp+1D0h] [rbp-E8h]
  _QWORD *v166; // [rsp+1D8h] [rbp-E0h]
  __int64 v167; // [rsp+1E0h] [rbp-D8h]
  void *ptr[25]; // [rsp+1F0h] [rbp-C8h] BYREF

  v12 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v142 = a4;
  v145 = v147;
  v146 = 0x400000000LL;
  v148[1] = (void *)0x400000000LL;
  v150 = v152;
  v151 = si128;
  v153 = 0;
  v14 = *(_QWORD *)(a3 + 16);
  v141 = a3;
  v148[0] = v149;
  if ( (v14 & 0x100000000LL) != 0 )
  {
    v15 = v14 >> 24;
    if ( (v15 & 0x20) != 0 )
    {
      v17 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
      v18 = v15;
      v19 = (v15 & 0x40) != 0;
      v20 = v12 + v17 + ((v18 >> 5) & 4) + 7;
      v21 = *(_BYTE *)(v12 + 19);
      v22 = v20 & 0xFFFFFFF8;
      if ( (v21 & 0x40) != 0 )
        v19 += (*(_BYTE *)(((v12 + v17 + ((v21 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v23 = v22 + 8 * v19;
      v24 = ((unsigned __int8)v21 >> 1) & 0xF;
      if ( v24 != 2 )
        __asm { jmp     rax }
      v25 = v23 + 8 * (*(_WORD *)((v12 + ((v21 >> 5) & 4) + v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      v25 = 0;
    }
    v26 = 0;
    v27 = (_DWORD)v142 + 16;
    if ( *(_BYTE *)(v12 + 16) != 25 )
      v26 = *(unsigned __int16 *)(v12 + 22);
    v130 = v26;
    v128 = v25;
    sub_F6CCB0(&v141, si128);
    if ( (unsigned __int8)sub_1BC0460(
                            (_DWORD)a1,
                            v27,
                            v130,
                            (int)v12 + 48,
                            v128,
                            (unsigned int)&v145,
                            (__int64)v148,
                            (__int64)&v150) )
      goto LABEL_26;
    v28 = *a1;
    v29 = *(_QWORD *)(*a1 + 3032);
    if ( !v29 )
      v29 = *(_QWORD *)(v28 + 544);
    v30 = *(_BYTE *)(v29 + 8);
    v31 = v29 - 64;
    if ( (v30 & 0x7Fu) - 59 >= 3 )
      v31 = 0;
    sub_19A2CD0((__int64)ptr, v28, v31, a5, 1, v126);
    v32 = *(_BYTE *)(v141 + 16);
    if ( v32 == 26 )
    {
      v33 = ((*(_BYTE *)(v141 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v34 = 16;
      if ( v32 == 25 )
        goto LABEL_18;
      v33 = 15;
    }
    v34 = 8 * ((v33 + 8 * (unsigned int)*(unsigned __int16 *)(v141 + 22)) >> 3) + 8;
LABEL_18:
    v35 = (char *)v142 + v34;
    v36 = sub_F6C520(*(_QWORD *)(v141 + 24));
    v131 = sub_1BB10D0(
             a1,
             a2,
             *(_QWORD *)(v141 + 24),
             v36 * ((unsigned __int64)&v35[-(v35 != nullptr)] / v36 + (v35 != nullptr)));
    if ( (v131 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v37 = 0;
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_27;
    }
    sub_19A2DA0((__int64 *)ptr);
    goto LABEL_43;
  }
  v49 = *(_BYTE *)(a3 + 16);
  if ( v49 == 26 )
  {
    v50 = ((*(_BYTE *)(v12 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v51 = 16;
    if ( v49 == 25 )
      goto LABEL_37;
    v50 = 15;
  }
  v51 = 8 * ((v50 + 8 * (unsigned int)*(unsigned __int16 *)(v12 + 22)) >> 3) + 8;
LABEL_37:
  v52 = (char *)v142 + v51;
  v53 = sub_F6C520(*(_QWORD *)(v12 + 24));
  v131 = sub_1BB10D0(
           a1,
           a2,
           *(_QWORD *)(v141 + 24),
           v53 * ((unsigned __int64)&v52[-(v52 != nullptr)] / v53 + (v52 != nullptr)));
  if ( (v131 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_26;
  if ( (*(_BYTE *)(v12 + 19) & 0x20) != 0 )
    v54 = sub_1AEA650(v12);
  else
    v54 = 0;
  v55 = 0;
  v56 = v141 + 48;
  v57 = (_DWORD)v142 + 16;
  if ( *(_BYTE *)(v141 + 16) != 25 )
    v55 = *(unsigned __int16 *)(v141 + 22);
  v129 = v55;
  sub_F6CCB0(&v141, si128);
  if ( (unsigned __int8)sub_1BC0460((_DWORD)a1, v57, v129, v56, v54, (unsigned int)&v145, (__int64)v148, (__int64)&v150) )
    goto LABEL_26;
LABEL_43:
  sub_A5E110(&v157, v12);
  v135 = sub_F6CCB0(a10, si128);
  v60 = v158;
  v61 = (unsigned int)(v158 - 6);
  if ( (unsigned int)v61 > 2 )
  {
    v77 = 0;
  }
  else
  {
    v62 = v162;
    if ( v162 && (*(_BYTE *)(v162 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v63 = (__int64 *)(*(_QWORD *)(v162 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v64 = *v63;
      if ( *(_BYTE *)(*v63 + 16) != 26 )
        v64 = sub_F63050(*v63, v12, v61, v58);
      if ( (*(_QWORD *)(v64 + 16) & 0x1000000LL) != 0 )
      {
        v106 = sub_1AEA650(v64);
        if ( (v107 & 0x20) != 0 )
          v106 += *(unsigned __int16 *)(v64 + 22);
        v65 = *(_QWORD *)((v106 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else if ( *(_BYTE *)(v64 + 16) == 26
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
             && sub_F63050(v64, v12, v61, v58) )
      {
        v65 = *(_BYTE *)(v64 + 18) >> 5;
      }
      else
      {
        v65 = 0;
      }
      v66 = *(_QWORD *)(sub_B8C1B0(v62 + 72) + 16);
      v67 = (_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v66 & 4) != 0 )
        v67 = (_QWORD *)*v67;
      if ( v67 )
        v67 -= 8;
      v68 = 1;
    }
    else
    {
      v65 = 0;
      v68 = 0;
      v67 = nullptr;
    }
    sub_19A2CD0((__int64)ptr, *a9, (__int64)v67, v65, v68, v59);
    v69 = *a9;
    sub_18C74E0(*a9, 4, 0, 4);
    v73 = sub_1B73BE0(a9, v161, v70, si128, a7, v71, v72);
    if ( v73 == 1
      || (v74 = *a9,
          LODWORD(v154) = v158,
          v75 = sub_18B0290(v74, (_DWORD *)(v73 & 0xFFFFFFFFFFFFFFFELL), &v154, *(double *)si128.m128_u64),
          v75 == 1) )
    {
      sub_190D5E0(v69, si128);
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_26;
    }
    v76 = v75 & 0xFFFFFFFFFFFFFFFELL;
    v77 = 1;
    if ( v161 == v76 )
      v77 = v158 != (_DWORD)v154;
    v161 = v76;
    v158 = (int)v154;
    sub_190D5E0(v69, si128);
    sub_19A2DA0((__int64 *)ptr);
    v60 = v158;
  }
  if ( v60 != 2 )
    goto LABEL_69;
  v137 = &v159[v160];
  if ( v159 == v137 )
    goto LABEL_117;
  v38 = &ptr[2];
  v39 = ptr;
  v140 = v12;
  v40 = v159;
  do
  {
    v41 = *v40;
    v42 = (__int64 *)((unsigned __int64)*v40 & 0xFFFFFFFFFFFFFFF0LL);
    v43 = *v42;
    if ( *(_BYTE *)(*v42 + 16) == 38
      || (v101 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v101 + 16) == 38)
      && (v43 = sub_F63050(*v42, v38, v101, v39)) != 0 )
    {
      v44 = *a9;
      ptr[0] = &ptr[2];
      ptr[1] = (void *)0x200000000LL;
      sub_1E4C960(v44, *(_QWORD *)(v43 + 32));
      v45 = *a9;
      v46 = *(_DWORD *)(*a9 + 12632);
      v138 = *(_DWORD *)(v43 + 20);
      *(_DWORD *)(*a9 + 12632) = 0;
      v47 = sub_1BB2C30(a9, *(_QWORD *)(v43 + 32));
      if ( (v47 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v38 = (void **)sub_A781D0(*(_QWORD *)(*a9 + 248), v47, v138);
        sub_A6A4A0(a11, (__int64)v38);
        *(_DWORD *)(v45 + 12632) = v46;
        if ( ptr[0] != &ptr[2] )
          free(ptr[0]);
        v77 = 1;
        goto LABEL_115;
      }
      *(_DWORD *)(v45 + 12632) = v46;
      if ( ptr[0] != &ptr[2] )
        free(ptr[0]);
LABEL_26:
      v37 = 0;
      goto LABEL_27;
    }
    ptr[0] = (void *)sub_1BB2C30(a9, v41);
    if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (unsigned __int8)sub_18B53F0(*a9, (__int64 *)ptr, ((unsigned __int64)v135 << 32) | v135, v102, v103, v104) )
    {
      goto LABEL_26;
    }
    v38 = (void **)ptr[0];
    if ( v41 != ptr[0] )
      v77 = 1;
    sub_A6A4A0(a11, (__int64)ptr[0]);
LABEL_115:
    ++v40;
  }
  while ( v137 != v40 );
  v12 = v140;
LABEL_117:
  v105 = *(void ***)a11;
  v160 = *(unsigned int *)(a11 + 8);
  v159 = v105;
  if ( !v160 )
    v158 = 1;
LABEL_69:
  v78 = v153;
  v79 = (unsigned int)v146;
  if ( !v153 )
  {
    v82 = v163;
LABEL_120:
    v78 = v77;
    if ( v82 )
    {
      v163 = nullptr;
      v78 = 1;
    }
    goto LABEL_89;
  }
  v80 = v151.m128_u64[0];
  if ( (unsigned int)v146 == v151.m128_u64[0] )
  {
LABEL_143:
    v81 = v150;
    goto LABEL_77;
  }
  if ( (unsigned int)v146 < v151.m128_u64[0] )
  {
    v151.m128_u64[0] = (unsigned int)v146;
    goto LABEL_143;
  }
  if ( (unsigned int)v146 > v151.m128_u64[1] )
  {
    v133 = (unsigned int)v146;
    sub_2236E10(&v150, v152, (unsigned int)v146, 1);
    v80 = v151.m128_u64[0];
    v79 = v133;
  }
  v81 = v150;
  if ( (char *)v150 + v80 != (char *)v150 + v79 )
  {
    v132 = v79;
    memset((char *)v150 + v80, 0, v79 - v80);
    v79 = v132;
  }
  v151.m128_u64[0] = v79;
LABEL_77:
  v82 = v163;
  if ( !v81 )
    goto LABEL_120;
  if ( v163 )
  {
    if ( *(_BYTE *)(v141 + 16) == 25 )
    {
      v84 = 0;
      v83 = 0;
    }
    else
    {
      v83 = *(unsigned __int16 *)(v141 + 22);
      v84 = *(unsigned __int16 *)(v141 + 22);
    }
    if ( (_DWORD)v146 == v83 )
    {
      if ( v163 == &v163[v84] )
        goto LABEL_87;
      if ( *v163 == *v81 )
      {
        v85 = 1;
        while ( v85 != v84 )
        {
          v86 = v163[v85++];
          if ( v86 != v81[v85 - 1] )
            goto LABEL_88;
        }
LABEL_87:
        v78 = v77;
      }
    }
  }
LABEL_88:
  v163 = v81;
LABEL_89:
  memset(ptr, 0, 0x88u);
  v87 = *a1;
  v136 = *a1;
  if ( !v167 )
    goto LABEL_90;
  v113 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(ptr[16]) = 1;
  v114 = 0;
  ptr[0] = &ptr[3];
  ptr[8] = &ptr[10];
  ptr[9] = (void *)0x600000000LL;
  *(__m128 *)&ptr[1] = v113;
  sub_18C74E0(v87, 4, 0, 4);
  v134 = v165;
  if ( !v165 )
    goto LABEL_170;
  v139 = v12;
  while ( 2 )
  {
    if ( v167 )
    {
      v119 = v166[v114];
      v144.m128i_i8[0] = v164[v114];
      v144.m128i_i64[1] = v119;
      v143 = _mm_load_si128(&v144);
      if ( v119 )
      {
        v120 = sub_1B73BE0(a1, v119, (unsigned __int64)v166, v113, a7, v115, v116);
        if ( v120 == 1
          || (v121 = *a1,
              v122 = v120 & 0xFFFFFFFFFFFFFFFELL,
              v123 = sub_F5ED10(v144.m128i_i8),
              v125 = sub_1E72620(v121, v122, v123, v124),
              !HIBYTE(v125)) )
        {
          v37 = 0;
          sub_190D5E0(v136, v113);
          goto LABEL_123;
        }
        switch ( (_BYTE)v125 )
        {
          case 2:
LABEL_157:
            v143.m128i_i64[1] = 0;
            break;
          case 3:
            v143.m128i_i64[1] = v122;
            break;
          case 1:
            v143.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v144);
            goto LABEL_157;
        }
      }
    }
    else
    {
      v144.m128i_i8[0] = v164[v114];
      v144.m128i_i64[1] = 0;
      a7 = (__m128)_mm_load_si128(&v144);
      v143 = (__m128i)a7;
    }
    v117 = *a1;
    v118 = sub_F6CCB0(&v141, v113);
    v154 = ptr[0];
    v156[1] = LODWORD(ptr[9]);
    v155 = (__int64)ptr[1];
    v156[0] = ptr[8];
    if ( !(unsigned __int8)sub_19EE280(v117, &v154, v143.m128i_i8, v118) )
    {
      v154 = v156;
      v155 = 0x100000000LL;
      sub_F5EEE0((__int64 *)ptr, &v143, (__int64)&v154);
      if ( v154 != v156 )
        free(v154);
    }
    if ( v134 != (void *)++v114 )
      continue;
    break;
  }
  v12 = v139;
LABEL_170:
  v78 = 1;
  v164 = ptr[0];
  v165 = ptr[1];
  v166 = ptr[8];
  v167 = LODWORD(ptr[9]);
  sub_190D5E0(v136, v113);
  v136 = *a1;
LABEL_90:
  if ( !*(_DWORD *)(v136 + 12632) )
  {
    v88 = v141;
    if ( v131 == *(_QWORD *)(v12 + 24) )
    {
      v108 = *(unsigned __int16 *)(v12 + 22);
      v109 = 8 * v108;
      if ( v108 == (unsigned int)v146 )
      {
        v110 = (_QWORD *)(v12 + 48);
        v111 = (_QWORD *)(v12 + 48 + v109);
        if ( (_QWORD *)(v12 + 48) == v111 )
          goto LABEL_137;
        if ( *(_QWORD *)(v12 + 48) == *(_QWORD *)v145 )
        {
          v112 = v145;
          while ( 1 )
          {
            ++v110;
            ++v112;
            if ( v111 == v110 )
              break;
            if ( *v110 != *v112 )
              goto LABEL_92;
          }
LABEL_137:
          v37 = v141;
          if ( !v78 )
          {
LABEL_94:
            v89 = *(_BYTE *)(v88 + 16);
            if ( v89 == 26 )
            {
              v90 = ((*(_BYTE *)(v88 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
            }
            else
            {
              v91 = 16;
              if ( v89 == 25 )
              {
LABEL_97:
                v92 = sub_1EA6140(a2, v37, v91, 8);
                v94 = v142;
                *v93 = *v142;
                v93[1] = v94[1];
                v93[2] = v94[2];
                if ( *(_BYTE *)(v141 + 16) == 26 && (*(_BYTE *)(v141 + 19) & 0x1E) != 0 )
                {
                  v95 = v94[2 * *(unsigned __int16 *)(v141 + 22) + 4];
                  v96 = v94[2 * *(unsigned __int16 *)(v141 + 22) + 5];
                }
                else
                {
                  v96 = 0;
                  v95 = 0;
                }
                if ( *(_BYTE *)(v92 + 16) == 26 && (*(_BYTE *)(v92 + 19) & 0x1E) != 0 )
                {
                  v97 = &v93[2 * *(unsigned __int16 *)(v92 + 22) + 4];
                  *v97 = v95;
                  v97[1] = v96;
                }
                v93[3] = v94[3];
                if ( *(_BYTE *)(v92 + 16) != 25 )
                {
                  v98 = *(unsigned __int16 *)(v92 + 22);
                  if ( v98 )
                  {
                    v99 = 8LL * (unsigned int)(v98 - 1) + 8;
                    v100 = 0;
                    do
                    {
                      *(_QWORD *)&v93[v100 / 4 + 4] = *(_QWORD *)((char *)v148[0] + v100);
                      v100 += 8LL;
                    }
                    while ( v100 != v99 );
                  }
                }
                goto LABEL_123;
              }
              v90 = 15;
            }
            v91 = 8 * ((v90 + 8 * (unsigned int)*(unsigned __int16 *)(v88 + 22)) >> 3) + 8;
            goto LABEL_97;
          }
        }
      }
    }
  }
LABEL_92:
  v37 = sub_1E6A200(v136, v131, (_DWORD)v145, v146, 0, 0, (__int64)&v157);
  if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v88 = v37;
    goto LABEL_94;
  }
  v37 = 0;
LABEL_123:
  if ( LOBYTE(ptr[16]) )
  {
    if ( ptr[8] != &ptr[10] )
      free(ptr[8]);
    if ( ptr[0] != &ptr[3] )
      free(ptr[0]);
  }
LABEL_27:
  if ( v150 != v152 )
    free(v150);
  if ( v148[0] != v149 )
    free(v148[0]);
  if ( v145 != v147 )
    free(v145);
  return v37;
}
