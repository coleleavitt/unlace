__int64 __fastcall sub_1CF3B20(
        __int64 a1,
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
  int v46; // r15d
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
  __int64 v63; // r15
  __int64 v64; // rax
  _QWORD *v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r13
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  unsigned __int16 *v74; // rax
  bool v75; // r15
  char v76; // r14
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // rax
  _BYTE *v79; // r13
  _BYTE *v80; // rdx
  int v81; // eax
  __int64 v82; // rcx
  __int64 v83; // rax
  char v84; // si
  __int64 v85; // rax
  __int64 v86; // rdi
  char v87; // al
  int v88; // eax
  __int64 v89; // rdx
  __int64 v90; // rax
  _DWORD *v91; // rdx
  _DWORD *v92; // rcx
  int v93; // edi
  int v94; // esi
  _DWORD *v95; // r8
  int v96; // eax
  __int64 v97; // rsi
  unsigned __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  void **v103; // rdx
  __int64 v104; // rax
  __int64 v105; // r8
  _QWORD *v106; // rax
  _QWORD *v107; // r8
  _QWORD *v108; // rsi
  __m128 v109; // xmm0
  __int64 v110; // r13
  unsigned __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // rbx
  int v114; // eax
  unsigned __int16 *v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rbp
  unsigned __int64 v118; // rbx
  char *v119; // rax
  __int64 v120; // rdx
  unsigned __int16 v121; // ax
  __int64 v122; // [rsp-10h] [rbp-2C8h]
  unsigned int v124; // [rsp+20h] [rbp-298h]
  int v125; // [rsp+20h] [rbp-298h]
  int v126; // [rsp+28h] [rbp-290h]
  __int64 v127; // [rsp+28h] [rbp-290h]
  unsigned __int64 v128; // [rsp+38h] [rbp-280h]
  unsigned __int64 v129; // [rsp+38h] [rbp-280h]
  void *v130; // [rsp+38h] [rbp-280h]
  unsigned int v131; // [rsp+48h] [rbp-270h]
  __int64 v132; // [rsp+48h] [rbp-270h]
  void **v133; // [rsp+58h] [rbp-260h]
  __int64 v134; // [rsp+60h] [rbp-258h]
  unsigned int v135; // [rsp+6Ch] [rbp-24Ch]
  __int64 v136; // [rsp+70h] [rbp-248h]
  __int64 v137; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v138; // [rsp+88h] [rbp-230h]
  __m128i v139; // [rsp+90h] [rbp-228h] BYREF
  __m128i v140; // [rsp+A0h] [rbp-218h] BYREF
  void *v141; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v142; // [rsp+B8h] [rbp-200h]
  _BYTE v143[32]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v144[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE v145[32]; // [rsp+F0h] [rbp-1C8h] BYREF
  void *v146; // [rsp+110h] [rbp-1A8h] BYREF
  __m128 v147; // [rsp+118h] [rbp-1A0h]
  _BYTE v148[16]; // [rsp+128h] [rbp-190h] BYREF
  char v149; // [rsp+138h] [rbp-180h]
  void *v150; // [rsp+140h] [rbp-178h] BYREF
  __int64 v151; // [rsp+148h] [rbp-170h]
  _QWORD v152[4]; // [rsp+150h] [rbp-168h] BYREF
  __m128 v153; // [rsp+170h] [rbp-148h] BYREF
  int v154; // [rsp+188h] [rbp-130h]
  void **v155; // [rsp+190h] [rbp-128h]
  __int64 v156; // [rsp+198h] [rbp-120h]
  unsigned __int16 *v157; // [rsp+1A0h] [rbp-118h]
  __int64 v158; // [rsp+1B0h] [rbp-108h]
  _BYTE *v159; // [rsp+1B8h] [rbp-100h]
  _BYTE *v160; // [rsp+1C8h] [rbp-F0h]
  void *v161; // [rsp+1D0h] [rbp-E8h]
  _QWORD *v162; // [rsp+1D8h] [rbp-E0h]
  __int64 v163; // [rsp+1E0h] [rbp-D8h]
  void *ptr[25]; // [rsp+1F0h] [rbp-C8h] BYREF

  v12 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v138 = a4;
  v141 = v143;
  v142 = 0x400000000LL;
  v144[1] = (void *)0x400000000LL;
  v146 = v148;
  v147 = si128;
  v149 = 0;
  v14 = *(_QWORD *)(a3 + 16);
  v137 = a3;
  v144[0] = v145;
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
    v27 = (_DWORD)v138 + 16;
    if ( *(_BYTE *)(v12 + 16) != 25 )
      v26 = *(unsigned __int16 *)(v12 + 22);
    v126 = v26;
    v124 = v25;
    sub_F6CCB0(&v137, si128);
    if ( (unsigned __int8)sub_1D0C210(
                            a1,
                            v27,
                            v126,
                            (int)v12 + 48,
                            v124,
                            (unsigned int)&v141,
                            (__int64)v144,
                            (__int64)&v146) )
      goto LABEL_26;
    v28 = *(_QWORD *)a1;
    v29 = *(_QWORD *)(*(_QWORD *)a1 + 3032LL);
    if ( !v29 )
      v29 = *(_QWORD *)(v28 + 544);
    v30 = *(_BYTE *)(v29 + 8);
    v31 = v29 - 64;
    if ( (v30 & 0x7Fu) - 59 >= 3 )
      v31 = 0;
    sub_19A2CD0((__int64)ptr, v28, v31, a5, 1, v122);
    v32 = *(_BYTE *)(v137 + 16);
    if ( v32 == 26 )
    {
      v33 = ((*(_BYTE *)(v137 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v34 = 16;
      if ( v32 == 25 )
        goto LABEL_18;
      v33 = 15;
    }
    v34 = 8 * ((v33 + 8 * (unsigned int)*(unsigned __int16 *)(v137 + 22)) >> 3) + 8;
LABEL_18:
    v35 = (char *)v138 + v34;
    v36 = sub_F6C520(*(_QWORD *)(v137 + 24));
    v127 = sub_1CF4B60(
             a1,
             a2,
             *(_QWORD *)(v137 + 24),
             v36 * ((unsigned __int64)&v35[-(v35 != nullptr)] / v36 + (v35 != nullptr)));
    if ( (v127 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
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
  v52 = (char *)v138 + v51;
  v53 = sub_F6C520(*(_QWORD *)(v12 + 24));
  v127 = sub_1CF4B60(
           a1,
           a2,
           *(_QWORD *)(v137 + 24),
           v53 * ((unsigned __int64)&v52[-(v52 != nullptr)] / v53 + (v52 != nullptr)));
  if ( (v127 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_26;
  if ( (*(_BYTE *)(v12 + 19) & 0x20) != 0 )
    v54 = sub_1CB0850(v12);
  else
    v54 = 0;
  v55 = 0;
  v56 = v137 + 48;
  v57 = (_DWORD)v138 + 16;
  if ( *(_BYTE *)(v137 + 16) != 25 )
    v55 = *(unsigned __int16 *)(v137 + 22);
  v125 = v55;
  sub_F6CCB0(&v137, si128);
  if ( (unsigned __int8)sub_1D0C210(a1, v57, v125, v56, v54, (unsigned int)&v141, (__int64)v144, (__int64)&v146) )
    goto LABEL_26;
LABEL_43:
  sub_A5E110(&v153, v12);
  v131 = sub_F6CCB0(a10, si128);
  v60 = v154;
  v61 = (unsigned int)(v154 - 6);
  if ( (unsigned int)v61 > 2 )
  {
    v75 = 0;
  }
  else
  {
    v62 = v158;
    if ( v158 && (*(_BYTE *)(v158 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v63 = sub_1703690(v158, v12, v61, v58);
      v64 = *(_QWORD *)(sub_B8C1B0(v62 + 72) + 16);
      v65 = (_QWORD *)(v64 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v64 & 4) != 0 )
        v65 = (_QWORD *)*v65;
      if ( v65 )
        v65 -= 8;
      v66 = 1;
    }
    else
    {
      v63 = 0;
      v66 = 0;
      v65 = nullptr;
    }
    sub_19A2CD0((__int64)ptr, *a9, (__int64)v65, v63, v66, v59);
    v67 = *a9;
    sub_18C74E0(*a9, 4, 0, 4);
    v71 = sub_1CE88F0(a9, v157, si128, a7, v68, v69, v70);
    if ( v71 == 1
      || (v72 = *a9,
          LODWORD(v150) = v154,
          v73 = sub_18B0290(v72, (_DWORD *)(v71 & 0xFFFFFFFFFFFFFFFELL), &v150, *(double *)si128.m128_u64),
          v73 == 1) )
    {
      sub_190D5E0(v67, si128);
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_26;
    }
    v74 = (unsigned __int16 *)(v73 & 0xFFFFFFFFFFFFFFFELL);
    v75 = 1;
    if ( v157 == v74 )
      v75 = v154 != (_DWORD)v150;
    v157 = v74;
    v154 = (int)v150;
    sub_190D5E0(v67, si128);
    sub_19A2DA0((__int64 *)ptr);
    v60 = v154;
  }
  if ( v60 != 2 )
    goto LABEL_57;
  v133 = &v155[v156];
  if ( v155 == v133 )
    goto LABEL_112;
  v38 = &ptr[2];
  v39 = ptr;
  v136 = v12;
  v40 = v155;
  do
  {
    v41 = *v40;
    v42 = (__int64 *)((unsigned __int64)*v40 & 0xFFFFFFFFFFFFFFF0LL);
    v43 = *v42;
    if ( *(_BYTE *)(*v42 + 16) == 38
      || (v99 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v99 + 16) == 38)
      && (v43 = sub_F63050(*v42, v38, v99, v39)) != 0 )
    {
      v44 = *a9;
      ptr[0] = &ptr[2];
      ptr[1] = (void *)0x200000000LL;
      sub_1E4C960(v44, *(_QWORD *)(v43 + 32));
      v45 = *a9;
      v46 = *(_DWORD *)(*a9 + 12632);
      v135 = *(_DWORD *)(v43 + 20);
      *(_DWORD *)(*a9 + 12632) = 0;
      v47 = sub_1CF6840(a9, *(_QWORD *)(v43 + 32));
      if ( (v47 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v38 = (void **)sub_A781D0(*(_QWORD *)(*a9 + 248), v47, v135);
        sub_A6A4A0(a11, (__int64)v38);
        *(_DWORD *)(v45 + 12632) = v46;
        if ( ptr[0] != &ptr[2] )
          free(ptr[0]);
        v75 = 1;
        goto LABEL_110;
      }
      *(_DWORD *)(v45 + 12632) = v46;
      if ( ptr[0] != &ptr[2] )
        free(ptr[0]);
LABEL_26:
      v37 = 0;
      goto LABEL_27;
    }
    ptr[0] = (void *)sub_1CF6840(a9, v41);
    if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (unsigned __int8)sub_18B53F0(*a9, (__int64 *)ptr, ((unsigned __int64)v131 << 32) | v131, v100, v101, v102) )
    {
      goto LABEL_26;
    }
    v38 = (void **)ptr[0];
    if ( v41 != ptr[0] )
      v75 = 1;
    sub_A6A4A0(a11, (__int64)ptr[0]);
LABEL_110:
    ++v40;
  }
  while ( v133 != v40 );
  v12 = v136;
LABEL_112:
  v103 = *(void ***)a11;
  v156 = *(unsigned int *)(a11 + 8);
  v155 = v103;
  if ( !v156 )
    v154 = 1;
LABEL_57:
  v76 = v149;
  v77 = (unsigned int)v142;
  if ( !v149 )
  {
    v80 = v159;
LABEL_116:
    v76 = v75;
    if ( v80 )
    {
      v159 = nullptr;
      v76 = 1;
    }
    goto LABEL_77;
  }
  v78 = v147.m128_u64[0];
  if ( (unsigned int)v142 == v147.m128_u64[0] )
  {
LABEL_135:
    v79 = v146;
    goto LABEL_65;
  }
  if ( (unsigned int)v142 < v147.m128_u64[0] )
  {
    v147.m128_u64[0] = (unsigned int)v142;
    goto LABEL_135;
  }
  if ( (unsigned int)v142 > v147.m128_u64[1] )
  {
    v129 = (unsigned int)v142;
    sub_2236E10(&v146, v148, (unsigned int)v142, 1);
    v78 = v147.m128_u64[0];
    v77 = v129;
  }
  v79 = v146;
  if ( (char *)v146 + v78 != (char *)v146 + v77 )
  {
    v128 = v77;
    memset((char *)v146 + v78, 0, v77 - v78);
    v77 = v128;
  }
  v147.m128_u64[0] = v77;
LABEL_65:
  v80 = v159;
  if ( !v79 )
    goto LABEL_116;
  if ( v159 )
  {
    if ( *(_BYTE *)(v137 + 16) == 25 )
    {
      v82 = 0;
      v81 = 0;
    }
    else
    {
      v81 = *(unsigned __int16 *)(v137 + 22);
      v82 = *(unsigned __int16 *)(v137 + 22);
    }
    if ( (_DWORD)v142 == v81 )
    {
      if ( v159 == &v159[v82] )
        goto LABEL_75;
      if ( *v159 == *v79 )
      {
        v83 = 1;
        while ( v83 != v82 )
        {
          v84 = v159[v83++];
          if ( v84 != v79[v83 - 1] )
            goto LABEL_76;
        }
LABEL_75:
        v76 = v75;
      }
    }
  }
LABEL_76:
  v159 = v79;
LABEL_77:
  memset(ptr, 0, 0x88u);
  v85 = *(_QWORD *)a1;
  v132 = *(_QWORD *)a1;
  if ( !v163 )
    goto LABEL_78;
  v109 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(ptr[16]) = 1;
  v110 = 0;
  ptr[0] = &ptr[3];
  ptr[8] = &ptr[10];
  ptr[9] = (void *)0x600000000LL;
  *(__m128 *)&ptr[1] = v109;
  sub_18C74E0(v85, 4, 0, 4);
  v130 = v161;
  if ( !v161 )
    goto LABEL_162;
  v134 = v12;
  while ( 2 )
  {
    if ( v163 )
    {
      v115 = (unsigned __int16 *)v162[v110];
      v140.m128i_i8[0] = v160[v110];
      v140.m128i_i64[1] = (__int64)v115;
      v139 = _mm_load_si128(&v140);
      if ( v115 )
      {
        v116 = sub_1CE88F0((__int64 *)a1, v115, v109, a7, (__int64)v162, v111, v112);
        if ( v116 == 1
          || (v117 = *(_QWORD *)a1,
              v118 = v116 & 0xFFFFFFFFFFFFFFFELL,
              v119 = sub_F5ED10(v140.m128i_i8),
              v121 = sub_1E72620(v117, v118, v119, v120),
              !HIBYTE(v121)) )
        {
          v37 = 0;
          sub_190D5E0(v132, v109);
          goto LABEL_119;
        }
        switch ( (_BYTE)v121 )
        {
          case 2:
LABEL_149:
            v139.m128i_i64[1] = 0;
            break;
          case 3:
            v139.m128i_i64[1] = v118;
            break;
          case 1:
            v139.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v140);
            goto LABEL_149;
        }
      }
    }
    else
    {
      v140.m128i_i8[0] = v160[v110];
      v140.m128i_i64[1] = 0;
      a7 = (__m128)_mm_load_si128(&v140);
      v139 = (__m128i)a7;
    }
    v113 = *(_QWORD *)a1;
    v114 = sub_F6CCB0(&v137, v109);
    v150 = ptr[0];
    v152[1] = LODWORD(ptr[9]);
    v151 = (__int64)ptr[1];
    v152[0] = ptr[8];
    if ( !(unsigned __int8)sub_19EE280(v113, &v150, v139.m128i_i8, v114) )
    {
      v150 = v152;
      v151 = 0x100000000LL;
      sub_F5EEE0((__int64 *)ptr, &v139, (__int64)&v150);
      if ( v150 != v152 )
        free(v150);
    }
    if ( v130 != (void *)++v110 )
      continue;
    break;
  }
  v12 = v134;
LABEL_162:
  v76 = 1;
  v160 = ptr[0];
  v161 = ptr[1];
  v162 = ptr[8];
  v163 = LODWORD(ptr[9]);
  sub_190D5E0(v132, v109);
  v132 = *(_QWORD *)a1;
LABEL_78:
  if ( !*(_DWORD *)(v132 + 12632) )
  {
    v86 = v137;
    if ( v127 == *(_QWORD *)(v12 + 24) )
    {
      v104 = *(unsigned __int16 *)(v12 + 22);
      v105 = 8 * v104;
      if ( v104 == (unsigned int)v142 )
      {
        v106 = (_QWORD *)(v12 + 48);
        v107 = (_QWORD *)(v12 + 48 + v105);
        if ( (_QWORD *)(v12 + 48) == v107 )
          goto LABEL_130;
        if ( *(_QWORD *)(v12 + 48) == *(_QWORD *)v141 )
        {
          v108 = v141;
          while ( 1 )
          {
            ++v106;
            ++v108;
            if ( v107 == v106 )
              break;
            if ( *v106 != *v108 )
              goto LABEL_80;
          }
LABEL_130:
          v37 = v137;
          if ( !v76 )
          {
LABEL_82:
            v87 = *(_BYTE *)(v86 + 16);
            if ( v87 == 26 )
            {
              v88 = ((*(_BYTE *)(v86 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
            }
            else
            {
              v89 = 16;
              if ( v87 == 25 )
              {
LABEL_85:
                v90 = sub_1EA6140(a2, v37, v89, 8);
                v92 = v138;
                *v91 = *v138;
                v91[1] = v92[1];
                v91[2] = v92[2];
                if ( *(_BYTE *)(v137 + 16) == 26 && (*(_BYTE *)(v137 + 19) & 0x1E) != 0 )
                {
                  v93 = v92[2 * *(unsigned __int16 *)(v137 + 22) + 4];
                  v94 = v92[2 * *(unsigned __int16 *)(v137 + 22) + 5];
                }
                else
                {
                  v94 = 0;
                  v93 = 0;
                }
                if ( *(_BYTE *)(v90 + 16) == 26 && (*(_BYTE *)(v90 + 19) & 0x1E) != 0 )
                {
                  v95 = &v91[2 * *(unsigned __int16 *)(v90 + 22) + 4];
                  *v95 = v93;
                  v95[1] = v94;
                }
                v91[3] = v92[3];
                if ( *(_BYTE *)(v90 + 16) != 25 )
                {
                  v96 = *(unsigned __int16 *)(v90 + 22);
                  if ( v96 )
                  {
                    v97 = 8LL * (unsigned int)(v96 - 1) + 8;
                    v98 = 0;
                    do
                    {
                      *(_QWORD *)&v91[v98 / 4 + 4] = *(_QWORD *)((char *)v144[0] + v98);
                      v98 += 8LL;
                    }
                    while ( v97 != v98 );
                  }
                }
                goto LABEL_119;
              }
              v88 = 15;
            }
            v89 = 8 * ((v88 + 8 * (unsigned int)*(unsigned __int16 *)(v86 + 22)) >> 3) + 8;
            goto LABEL_85;
          }
        }
      }
    }
  }
LABEL_80:
  v37 = sub_1E6A200(v132, v127, (_DWORD)v141, v142, *(_DWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), (__int64)&v153);
  if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v86 = v37;
    goto LABEL_82;
  }
  v37 = 0;
LABEL_119:
  if ( LOBYTE(ptr[16]) )
  {
    if ( ptr[8] != &ptr[10] )
      free(ptr[8]);
    if ( ptr[0] != &ptr[3] )
      free(ptr[0]);
  }
LABEL_27:
  if ( v146 != v148 )
    free(v146);
  if ( v144[0] != v145 )
    free(v144[0]);
  if ( v141 != v143 )
    free(v141);
  return v37;
}
