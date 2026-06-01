__int64 __fastcall sub_1D4E990(
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
  int v14; // ebp
  __int64 v15; // rax
  int v17; // r8d
  int v18; // ebp
  int v19; // edx
  __int64 v20; // rbx
  __int64 v22; // rsi
  __int64 v23; // rdx
  char v24; // al
  __int64 v25; // rdx
  char v26; // dl
  int v27; // esi
  __int64 v28; // rbp
  char *v29; // rbp
  unsigned int v30; // eax
  char v31; // dl
  int v32; // eax
  __int64 v33; // rax
  char *v34; // rbp
  unsigned int v35; // eax
  int v36; // r15d
  int v37; // edx
  int v38; // r14d
  int v39; // ebp
  char v40; // r14
  __int64 v41; // rcx
  __int64 v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  _QWORD *v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rbp
  __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rax
  unsigned __int16 *v58; // rax
  char v59; // r15
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rax
  _BYTE *v62; // rbp
  _BYTE *v63; // rdx
  int v64; // eax
  __int64 v65; // rcx
  __int64 v66; // rax
  char v67; // si
  __int64 v68; // rax
  __int64 v69; // rdi
  char v70; // al
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rax
  _DWORD *v74; // rdx
  _DWORD *v75; // rcx
  int v76; // edi
  int v77; // esi
  _DWORD *v78; // r8
  int v79; // eax
  __int64 v80; // rsi
  unsigned __int64 v81; // rax
  void **v82; // rcx
  void *v83; // rsi
  void **v84; // rbx
  void *v85; // rbp
  __int64 *v86; // rax
  __int64 v87; // r12
  __int64 v88; // rdi
  __int64 v89; // rbp
  int v90; // r14d
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  void **v96; // rdx
  __int64 v97; // rax
  __int64 v98; // r8
  _QWORD *v99; // rax
  _QWORD *v100; // r8
  _QWORD *v101; // rsi
  __m128 v102; // xmm0
  __int64 v103; // rbp
  unsigned __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rbx
  int v107; // eax
  unsigned __int16 *v108; // rsi
  __int64 v109; // rax
  __int64 v110; // r12
  unsigned __int64 v111; // rbx
  char *v112; // rax
  __int64 v113; // rdx
  unsigned __int16 v114; // ax
  __int64 v115; // [rsp-10h] [rbp-2C8h]
  int v117; // [rsp+20h] [rbp-298h]
  int v118; // [rsp+20h] [rbp-298h]
  __int64 v119; // [rsp+20h] [rbp-298h]
  int v120; // [rsp+28h] [rbp-290h]
  __int64 v121; // [rsp+28h] [rbp-290h]
  unsigned __int64 v122; // [rsp+38h] [rbp-280h]
  unsigned __int64 v123; // [rsp+38h] [rbp-280h]
  void *v124; // [rsp+38h] [rbp-280h]
  unsigned int v125; // [rsp+48h] [rbp-270h]
  __int64 v126; // [rsp+48h] [rbp-270h]
  void **v127; // [rsp+58h] [rbp-260h]
  __int64 v128; // [rsp+60h] [rbp-258h]
  unsigned int v129; // [rsp+6Ch] [rbp-24Ch]
  __int64 v130; // [rsp+70h] [rbp-248h]
  __int64 v131; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v132; // [rsp+88h] [rbp-230h]
  __m128i v133; // [rsp+90h] [rbp-228h] BYREF
  __m128i v134; // [rsp+A0h] [rbp-218h] BYREF
  void *v135; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v136; // [rsp+B8h] [rbp-200h]
  _BYTE v137[32]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v138[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE v139[32]; // [rsp+F0h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-1A8h] BYREF
  __m128 v141; // [rsp+118h] [rbp-1A0h]
  _BYTE v142[16]; // [rsp+128h] [rbp-190h] BYREF
  char v143; // [rsp+138h] [rbp-180h]
  void *v144; // [rsp+140h] [rbp-178h] BYREF
  __int64 v145; // [rsp+148h] [rbp-170h]
  _QWORD v146[4]; // [rsp+150h] [rbp-168h] BYREF
  __m128 v147; // [rsp+170h] [rbp-148h] BYREF
  int v148; // [rsp+188h] [rbp-130h] BYREF
  void **v149; // [rsp+190h] [rbp-128h]
  __int64 v150; // [rsp+198h] [rbp-120h]
  unsigned __int16 *v151; // [rsp+1A0h] [rbp-118h]
  __int64 v152; // [rsp+1B0h] [rbp-108h]
  _BYTE *v153; // [rsp+1B8h] [rbp-100h]
  _BYTE *v154; // [rsp+1C8h] [rbp-F0h]
  void *v155; // [rsp+1D0h] [rbp-E8h]
  _QWORD *v156; // [rsp+1D8h] [rbp-E0h]
  __int64 v157; // [rsp+1E0h] [rbp-D8h]
  void *v158[25]; // [rsp+1F0h] [rbp-C8h] BYREF

  v12 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v132 = a4;
  v14 = (int)a4;
  v135 = v137;
  v136 = 0x400000000LL;
  v138[1] = (void *)0x400000000LL;
  ptr = v142;
  v141 = si128;
  v143 = 0;
  v15 = *(_QWORD *)(a3 + 16);
  v131 = a3;
  v138[0] = v139;
  if ( (v15 & 0x100000000LL) != 0 )
  {
    if ( (v15 & 0x20000000) != 0 )
      v17 = sub_1D384A0(a3);
    else
      v17 = 0;
    v18 = v14 + 16;
    v19 = 0;
    if ( *(_BYTE *)(v12 + 16) != 25 )
      v19 = *(unsigned __int16 *)(v12 + 22);
    v120 = v19;
    v117 = v17;
    sub_F6CCB0(&v131, si128);
    if ( (unsigned __int8)sub_1D633C0(
                            (_DWORD)a1,
                            v18,
                            v120,
                            (int)v12 + 48,
                            v117,
                            (unsigned int)&v135,
                            (__int64)v138,
                            (__int64)&ptr) )
      goto LABEL_7;
    v22 = *a1;
    v23 = *(_QWORD *)(*a1 + 3032);
    if ( !v23 )
      v23 = *(_QWORD *)(v22 + 544);
    v24 = *(_BYTE *)(v23 + 8);
    v25 = v23 - 64;
    if ( (v24 & 0x7Fu) - 59 >= 3 )
      v25 = 0;
    sub_19A2CD0((__int64)v158, v22, v25, a5, 1, v115);
    v26 = *(_BYTE *)(v131 + 16);
    if ( v26 == 26 )
    {
      v27 = ((*(_BYTE *)(v131 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v28 = 16;
      if ( v26 == 25 )
        goto LABEL_22;
      v27 = 15;
    }
    v28 = 8 * ((v27 + 8 * (unsigned int)*(unsigned __int16 *)(v131 + 22)) >> 3) + 8;
LABEL_22:
    v29 = (char *)v132 + v28;
    v30 = sub_F6C520(*(_QWORD *)(v131 + 24));
    v121 = sub_1D4F8E0(
             a1,
             a2,
             *(_QWORD *)(v131 + 24),
             v30 * ((unsigned __int64)&v29[-(v29 != nullptr)] / v30 + (v29 != nullptr)));
    if ( (v121 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v20 = 0;
      sub_19A2DA0((__int64 *)v158);
      goto LABEL_8;
    }
    sub_19A2DA0((__int64 *)v158);
    goto LABEL_33;
  }
  v31 = *(_BYTE *)(a3 + 16);
  if ( v31 == 26 )
  {
    v32 = ((*(_BYTE *)(v12 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v33 = 16;
    if ( v31 == 25 )
      goto LABEL_27;
    v32 = 15;
  }
  v33 = 8 * ((v32 + 8 * (unsigned int)*(unsigned __int16 *)(v12 + 22)) >> 3) + 8;
LABEL_27:
  v34 = (char *)a4 + v33;
  v35 = sub_F6C520(*(_QWORD *)(v12 + 24));
  v121 = sub_1D4F8E0(
           a1,
           a2,
           *(_QWORD *)(v131 + 24),
           v35 * ((unsigned __int64)&v34[-(v34 != nullptr)] / v35 + (v34 != nullptr)));
  if ( (v121 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_7;
  if ( (*(_BYTE *)(v12 + 19) & 0x20) != 0 )
    v36 = sub_1D384A0(v12);
  else
    v36 = 0;
  v37 = 0;
  v38 = v131 + 48;
  v39 = (_DWORD)v132 + 16;
  if ( *(_BYTE *)(v131 + 16) != 25 )
    v37 = *(unsigned __int16 *)(v131 + 22);
  v118 = v37;
  sub_F6CCB0(&v131, si128);
  if ( (unsigned __int8)sub_1D633C0((_DWORD)a1, v39, v118, v38, v36, (unsigned int)&v135, (__int64)v138, (__int64)&ptr) )
    goto LABEL_7;
LABEL_33:
  v40 = 0;
  sub_A5E110(&v147, v12);
  v125 = sub_F6CCB0(a10, si128);
  v43 = v148;
  if ( v148 == 10 )
  {
    v40 = 1;
    sub_F5C850((__int64)&v148);
    v43 = v148;
  }
  v44 = (unsigned int)(v43 - 6);
  if ( (unsigned int)v44 <= 2 )
  {
    v45 = v152;
    if ( v152 && (*(_BYTE *)(v152 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v119 = sub_1703690(v152, v12, v44, v41);
      v46 = sub_B8C1B0(v45 + 72);
      v47 = v119;
      v48 = *(_QWORD *)(v46 + 16);
      v49 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v48 & 4) != 0 )
        v49 = (_QWORD *)*v49;
      if ( v49 )
        v49 -= 8;
      v50 = 1;
    }
    else
    {
      v47 = 0;
      v50 = 0;
      v49 = nullptr;
    }
    sub_19A2CD0((__int64)v158, *a9, (__int64)v49, v47, v50, v42);
    v51 = *a9;
    sub_18C74E0(*a9, 4, 0, 4);
    v55 = sub_1D434A0(a9, v151, si128, a7, v52, v53, v54);
    if ( v55 == 1
      || (v56 = *a9,
          LODWORD(v144) = v148,
          v57 = sub_18B0290(v56, (_DWORD *)(v55 & 0xFFFFFFFFFFFFFFFELL), &v144, *(double *)si128.m128_u64),
          v57 == 1) )
    {
      sub_190D5E0(v51, si128);
      sub_19A2DA0((__int64 *)v158);
      goto LABEL_7;
    }
    v58 = (unsigned __int16 *)(v57 & 0xFFFFFFFFFFFFFFFELL);
    if ( v151 == v58 )
    {
      if ( v148 != (_DWORD)v144 )
        v40 = 1;
    }
    else
    {
      v40 = 1;
    }
    v151 = v58;
    v148 = (int)v144;
    sub_190D5E0(v51, si128);
    sub_19A2DA0((__int64 *)v158);
    v43 = v148;
  }
  if ( v43 != 2 )
    goto LABEL_49;
  v127 = &v149[v150];
  if ( v149 == v127 )
    goto LABEL_109;
  v82 = &v158[2];
  v83 = v158;
  v130 = v12;
  v84 = v149;
  do
  {
    v85 = *v84;
    v86 = (__int64 *)((unsigned __int64)*v84 & 0xFFFFFFFFFFFFFFF0LL);
    v87 = *v86;
    if ( *(_BYTE *)(*v86 + 16) == 38
      || (v92 = *(_QWORD *)(*(_QWORD *)(v87 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v92 + 16) == 38)
      && (v87 = sub_F63050(*v86, v83, v92, v82)) != 0 )
    {
      v88 = *a9;
      v158[0] = &v158[2];
      v158[1] = (void *)0x200000000LL;
      sub_1E4C960(v88, *(_QWORD *)(v87 + 32));
      v89 = *a9;
      v90 = *(_DWORD *)(*a9 + 12632);
      v129 = *(_DWORD *)(v87 + 20);
      *(_DWORD *)(*a9 + 12632) = 0;
      v91 = sub_1D51630(a9, *(_QWORD *)(v87 + 32));
      if ( (v91 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v83 = (void *)sub_A781D0(*(_QWORD *)(*a9 + 248), v91, v129);
        sub_A6A4A0(a11, (__int64)v83);
        *(_DWORD *)(v89 + 12632) = v90;
        if ( v158[0] != &v158[2] )
          free(v158[0]);
        v40 = 1;
        goto LABEL_107;
      }
      *(_DWORD *)(v89 + 12632) = v90;
      if ( v158[0] != &v158[2] )
        free(v158[0]);
LABEL_7:
      v20 = 0;
      goto LABEL_8;
    }
    v158[0] = (void *)sub_1D51630(a9, v85);
    if ( ((unsigned __int64)v158[0] & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (unsigned __int8)sub_18B53F0(*a9, (__int64 *)v158, ((unsigned __int64)v125 << 32) | v125, v93, v94, v95) )
    {
      goto LABEL_7;
    }
    v83 = v158[0];
    if ( v85 != v158[0] )
      v40 = 1;
    sub_A6A4A0(a11, (__int64)v158[0]);
LABEL_107:
    ++v84;
  }
  while ( v127 != v84 );
  v12 = v130;
LABEL_109:
  v96 = *(void ***)a11;
  v150 = *(unsigned int *)(a11 + 8);
  v149 = v96;
  if ( !v150 )
    v148 = 1;
LABEL_49:
  v59 = v143;
  v60 = (unsigned int)v136;
  if ( !v143 )
  {
    v63 = v153;
LABEL_113:
    v59 = v40;
    if ( v63 )
    {
      v153 = nullptr;
      v59 = 1;
    }
    goto LABEL_69;
  }
  v61 = v141.m128_u64[0];
  if ( (unsigned int)v136 == v141.m128_u64[0] )
  {
LABEL_135:
    v62 = ptr;
    goto LABEL_57;
  }
  if ( (unsigned int)v136 < v141.m128_u64[0] )
  {
    v141.m128_u64[0] = (unsigned int)v136;
    goto LABEL_135;
  }
  if ( (unsigned int)v136 > v141.m128_u64[1] )
  {
    v123 = (unsigned int)v136;
    sub_2236E10(&ptr, v142, (unsigned int)v136, 1);
    v61 = v141.m128_u64[0];
    v60 = v123;
  }
  v62 = ptr;
  if ( (char *)ptr + v61 != (char *)ptr + v60 )
  {
    v122 = v60;
    memset((char *)ptr + v61, 0, v60 - v61);
    v60 = v122;
  }
  v141.m128_u64[0] = v60;
LABEL_57:
  v63 = v153;
  if ( !v62 )
    goto LABEL_113;
  if ( v153 )
  {
    if ( *(_BYTE *)(v131 + 16) == 25 )
    {
      v65 = 0;
      v64 = 0;
    }
    else
    {
      v64 = *(unsigned __int16 *)(v131 + 22);
      v65 = *(unsigned __int16 *)(v131 + 22);
    }
    if ( (_DWORD)v136 == v64 )
    {
      if ( v153 == &v153[v65] )
        goto LABEL_67;
      if ( *v153 == *v62 )
      {
        v66 = 1;
        while ( v66 != v65 )
        {
          v67 = v153[v66++];
          if ( v67 != v62[v66 - 1] )
            goto LABEL_68;
        }
LABEL_67:
        v59 = v40;
      }
    }
  }
LABEL_68:
  v153 = v62;
LABEL_69:
  memset(v158, 0, 0x88u);
  v68 = *a1;
  v126 = *a1;
  if ( !v157 )
    goto LABEL_70;
  v102 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(v158[16]) = 1;
  v103 = 0;
  v158[0] = &v158[3];
  v158[8] = &v158[10];
  v158[9] = (void *)0x600000000LL;
  *(__m128 *)&v158[1] = v102;
  sub_18C74E0(v68, 4, 0, 4);
  v124 = v155;
  if ( !v155 )
    goto LABEL_162;
  v128 = v12;
  while ( 2 )
  {
    if ( v157 )
    {
      v108 = (unsigned __int16 *)v156[v103];
      v134.m128i_i8[0] = v154[v103];
      v134.m128i_i64[1] = (__int64)v108;
      v133 = _mm_load_si128(&v134);
      if ( v108 )
      {
        v109 = sub_1D434A0(a1, v108, v102, a7, (__int64)v156, v104, v105);
        if ( v109 == 1
          || (v110 = *a1,
              v111 = v109 & 0xFFFFFFFFFFFFFFFELL,
              v112 = sub_F5ED10(v134.m128i_i8),
              v114 = sub_1E72620(v110, v111, v112, v113),
              !HIBYTE(v114)) )
        {
          v20 = 0;
          sub_190D5E0(v126, v102);
          goto LABEL_116;
        }
        switch ( (_BYTE)v114 )
        {
          case 2:
LABEL_149:
            v133.m128i_i64[1] = 0;
            break;
          case 3:
            v133.m128i_i64[1] = v111;
            break;
          case 1:
            v133.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v134);
            goto LABEL_149;
        }
      }
    }
    else
    {
      v134.m128i_i8[0] = v154[v103];
      v134.m128i_i64[1] = 0;
      a7 = (__m128)_mm_load_si128(&v134);
      v133 = (__m128i)a7;
    }
    v106 = *a1;
    v107 = sub_F6CCB0(&v131, v102);
    v144 = v158[0];
    v146[1] = LODWORD(v158[9]);
    v145 = (__int64)v158[1];
    v146[0] = v158[8];
    if ( !(unsigned __int8)sub_19EE280(v106, &v144, v133.m128i_i8, v107) )
    {
      v144 = v146;
      v145 = 0x100000000LL;
      sub_F5EEE0((__int64 *)v158, &v133, (__int64)&v144);
      if ( v144 != v146 )
        free(v144);
    }
    if ( (void *)++v103 != v124 )
      continue;
    break;
  }
  v12 = v128;
LABEL_162:
  v59 = 1;
  v154 = v158[0];
  v155 = v158[1];
  v156 = v158[8];
  v157 = LODWORD(v158[9]);
  sub_190D5E0(v126, v102);
  v126 = *a1;
LABEL_70:
  if ( !*(_DWORD *)(v126 + 12632) )
  {
    v69 = v131;
    if ( v121 == *(_QWORD *)(v12 + 24) )
    {
      v97 = *(unsigned __int16 *)(v12 + 22);
      v98 = 8 * v97;
      if ( v97 == (unsigned int)v136 )
      {
        v99 = (_QWORD *)(v12 + 48);
        v100 = (_QWORD *)(v12 + 48 + v98);
        if ( (_QWORD *)(v12 + 48) == v100 )
          goto LABEL_127;
        if ( *(_QWORD *)(v12 + 48) == *(_QWORD *)v135 )
        {
          v101 = v135;
          while ( 1 )
          {
            ++v99;
            ++v101;
            if ( v100 == v99 )
              break;
            if ( *v99 != *v101 )
              goto LABEL_72;
          }
LABEL_127:
          v20 = v131;
          if ( !v59 )
          {
LABEL_74:
            v70 = *(_BYTE *)(v69 + 16);
            if ( v70 == 26 )
            {
              v71 = ((*(_BYTE *)(v69 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
            }
            else
            {
              v72 = 16;
              if ( v70 == 25 )
              {
LABEL_77:
                v73 = sub_1EA6140(a2, v20, v72, 8);
                v75 = v132;
                *v74 = *v132;
                v74[1] = v75[1];
                v74[2] = v75[2];
                if ( *(_BYTE *)(v131 + 16) == 26 && (*(_BYTE *)(v131 + 19) & 0x1E) != 0 )
                {
                  v76 = v75[2 * *(unsigned __int16 *)(v131 + 22) + 4];
                  v77 = v75[2 * *(unsigned __int16 *)(v131 + 22) + 5];
                }
                else
                {
                  v77 = 0;
                  v76 = 0;
                }
                if ( *(_BYTE *)(v73 + 16) == 26 && (*(_BYTE *)(v73 + 19) & 0x1E) != 0 )
                {
                  v78 = &v74[2 * *(unsigned __int16 *)(v73 + 22) + 4];
                  *v78 = v76;
                  v78[1] = v77;
                }
                v74[3] = v75[3];
                if ( *(_BYTE *)(v73 + 16) != 25 )
                {
                  v79 = *(unsigned __int16 *)(v73 + 22);
                  if ( v79 )
                  {
                    v80 = 8LL * (unsigned int)(v79 - 1) + 8;
                    v81 = 0;
                    do
                    {
                      *(_QWORD *)&v74[v81 / 4 + 4] = *(_QWORD *)((char *)v138[0] + v81);
                      v81 += 8LL;
                    }
                    while ( v80 != v81 );
                  }
                }
                goto LABEL_116;
              }
              v71 = 15;
            }
            v72 = 8 * ((v71 + 8 * (unsigned int)*(unsigned __int16 *)(v69 + 22)) >> 3) + 8;
            goto LABEL_77;
          }
        }
      }
    }
  }
LABEL_72:
  v20 = sub_1E6A200(v126, v121, (_DWORD)v135, v136, 0, 0, (__int64)&v147);
  if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v69 = v20;
    goto LABEL_74;
  }
  v20 = 0;
LABEL_116:
  if ( LOBYTE(v158[16]) )
  {
    if ( v158[8] != &v158[10] )
      free(v158[8]);
    if ( v158[0] != &v158[3] )
      free(v158[0]);
  }
LABEL_8:
  if ( ptr != v142 )
    free(ptr);
  if ( v138[0] != v139 )
    free(v138[0]);
  if ( v135 != v137 )
    free(v135);
  return v20;
}
