__int64 __fastcall sub_1B8E700(
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
  __int64 *v12; // r12
  __m128 si128; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  char v17; // cl
  __int64 v18; // rdx
  int v19; // esi
  char v20; // al
  int v21; // ecx
  int v22; // r8d
  char v23; // cl
  int v24; // r8d
  int v25; // edx
  int v26; // r14d
  __int64 v27; // r9
  __int64 v28; // rsi
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rdx
  char v32; // dl
  int v33; // esi
  __int64 v34; // r13
  char *v35; // r13
  unsigned int v36; // eax
  __int64 v37; // r12
  __int64 *v38; // r15
  __int64 *v39; // rsi
  void **v40; // rcx
  __int64 v41; // r12
  __int64 *v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rdi
  __int64 v45; // r12
  int v46; // esi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  char v51; // dl
  int v52; // eax
  __int64 v53; // rax
  char *v54; // r13
  unsigned int v55; // eax
  int v56; // r8d
  int v57; // edx
  int v58; // r14d
  int v59; // r13d
  __int64 v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // r9
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r14
  __int64 *v66; // rax
  __int64 v67; // r15
  __int64 v68; // r15
  __int64 v69; // rax
  _QWORD *v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r14
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  __int64 v77; // rdi
  __int64 v78; // rax
  unsigned __int64 v79; // r13
  unsigned __int64 v80; // rax
  void *v81; // r14
  void *v82; // rax
  __int64 v83; // r10
  void *v84; // r13
  __m128 v85; // xmm0
  unsigned __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rbx
  int v89; // eax
  unsigned __int16 *v90; // rsi
  __int64 v91; // rax
  __int64 v92; // rbp
  unsigned __int64 v93; // rbx
  char *v94; // rax
  __int64 v95; // rdx
  unsigned __int16 v96; // ax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r9
  __int64 *v101; // rdx
  __int64 v102; // rax
  char v103; // r9
  char v104; // al
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rax
  _DWORD *v108; // rdx
  _DWORD *v109; // rcx
  int v110; // edi
  int v111; // esi
  _DWORD *v112; // r8
  int v113; // eax
  __int64 v114; // rsi
  unsigned __int64 v115; // rax
  int v117; // [rsp+10h] [rbp-298h]
  int v118; // [rsp+18h] [rbp-290h]
  __int64 v119; // [rsp+18h] [rbp-290h]
  int v120; // [rsp+20h] [rbp-288h]
  int v121; // [rsp+20h] [rbp-288h]
  void *v122; // [rsp+20h] [rbp-288h]
  unsigned int v123; // [rsp+40h] [rbp-268h]
  __int64 v124; // [rsp+40h] [rbp-268h]
  int v125; // [rsp+48h] [rbp-260h]
  __int64 *v126; // [rsp+50h] [rbp-258h]
  unsigned int v127; // [rsp+64h] [rbp-244h]
  __int64 *v128; // [rsp+68h] [rbp-240h]
  __int64 v129; // [rsp+70h] [rbp-238h] BYREF
  _DWORD *v130; // [rsp+78h] [rbp-230h]
  __m128i v131; // [rsp+80h] [rbp-228h] BYREF
  __m128i v132; // [rsp+90h] [rbp-218h] BYREF
  void *v133; // [rsp+A0h] [rbp-208h] BYREF
  __int64 v134; // [rsp+A8h] [rbp-200h]
  _BYTE v135[32]; // [rsp+B0h] [rbp-1F8h] BYREF
  void *v136[2]; // [rsp+D0h] [rbp-1D8h] BYREF
  _BYTE v137[32]; // [rsp+E0h] [rbp-1C8h] BYREF
  void *v138; // [rsp+100h] [rbp-1A8h] BYREF
  __m128 v139; // [rsp+108h] [rbp-1A0h]
  _BYTE v140[16]; // [rsp+118h] [rbp-190h] BYREF
  char v141; // [rsp+128h] [rbp-180h]
  void *v142; // [rsp+130h] [rbp-178h] BYREF
  __int64 v143; // [rsp+138h] [rbp-170h]
  _QWORD v144[4]; // [rsp+140h] [rbp-168h] BYREF
  __m128 v145; // [rsp+160h] [rbp-148h] BYREF
  int v146; // [rsp+178h] [rbp-130h]
  __int64 *v147; // [rsp+180h] [rbp-128h]
  __int64 v148; // [rsp+188h] [rbp-120h]
  unsigned __int16 *v149; // [rsp+190h] [rbp-118h]
  __int64 v150; // [rsp+1A0h] [rbp-108h]
  void *v151; // [rsp+1A8h] [rbp-100h]
  _BYTE *v152; // [rsp+1B8h] [rbp-F0h]
  void *v153; // [rsp+1C0h] [rbp-E8h]
  _QWORD *v154; // [rsp+1C8h] [rbp-E0h]
  __int64 v155; // [rsp+1D0h] [rbp-D8h]
  void *ptr[25]; // [rsp+1E0h] [rbp-C8h] BYREF

  v12 = a1;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v130 = a4;
  v133 = v135;
  v134 = 0x400000000LL;
  v136[1] = (void *)0x400000000LL;
  v138 = v140;
  v139 = si128;
  v141 = 0;
  v14 = *(_QWORD *)(a3 + 16);
  v129 = a3;
  v136[0] = v137;
  if ( (v14 & 0x100000000LL) != 0 )
  {
    v15 = v14 >> 24;
    v17 = v15;
    if ( (v15 & 0x20) != 0 )
    {
      v18 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
      v19 = (a3 + v18 + (((char)v15 >> 5) & 4) + 7) & 0xFFFFFFF8;
      v20 = *(_BYTE *)(a3 + 19);
      v21 = (v17 & 0x40) != 0;
      if ( (v20 & 0x40) != 0 )
        v21 += (*(_BYTE *)(((a3 + v18 + ((v20 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v22 = v19 + 8 * v21;
      v23 = ((unsigned __int8)v20 >> 1) & 0xF;
      if ( v23 != 2 )
        __asm { jmp     rax }
      v24 = v22 + 8 * (*(_WORD *)((a3 + v18 + ((v20 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      v24 = 0;
    }
    v25 = 0;
    v26 = (_DWORD)v130 + 16;
    if ( *(_BYTE *)(a3 + 16) != 25 )
      v25 = *(unsigned __int16 *)(a3 + 22);
    v120 = v25;
    v118 = v24;
    sub_F6CCB0(&v129, si128);
    if ( (unsigned __int8)sub_1B9FBC0(
                            (_DWORD)a1,
                            v26,
                            v120,
                            (int)a3 + 48,
                            v118,
                            (unsigned int)&v133,
                            (__int64)v136,
                            (__int64)&v138) )
      goto LABEL_26;
    v28 = *a1;
    v29 = *(_QWORD *)(*a1 + 3032);
    if ( !v29 )
      v29 = *(_QWORD *)(v28 + 544);
    v30 = *(_BYTE *)(v29 + 8);
    v31 = v29 - 64;
    if ( (v30 & 0x7Fu) - 59 >= 3 )
      v31 = 0;
    sub_19A2CD0((__int64)ptr, v28, v31, a5, 1, v27);
    v32 = *(_BYTE *)(v129 + 16);
    if ( v32 == 26 )
    {
      v33 = ((*(_BYTE *)(v129 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v34 = 16;
      if ( v32 == 25 )
        goto LABEL_18;
      v33 = 15;
    }
    v34 = 8 * ((v33 + 8 * (unsigned int)*(unsigned __int16 *)(v129 + 22)) >> 3) + 8;
LABEL_18:
    v35 = (char *)v130 + v34;
    v36 = sub_F6C520(*(_QWORD *)(v129 + 24));
    v119 = sub_1B8F630(
             a1,
             a2,
             *(_QWORD *)(v129 + 24),
             v36 * ((unsigned __int64)&v35[-(v35 != nullptr)] / v36 + (v35 != nullptr)));
    if ( (v119 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v37 = 0;
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_27;
    }
    sub_19A2DA0((__int64 *)ptr);
    goto LABEL_43;
  }
  v51 = *(_BYTE *)(a3 + 16);
  if ( v51 == 26 )
  {
    v52 = ((*(_BYTE *)(a3 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v53 = 16;
    if ( v51 == 25 )
      goto LABEL_37;
    v52 = 15;
  }
  v53 = 8 * ((v52 + 8 * (unsigned int)*(unsigned __int16 *)(a3 + 22)) >> 3) + 8;
LABEL_37:
  v54 = (char *)v130 + v53;
  v55 = sub_F6C520(*(_QWORD *)(a3 + 24));
  v119 = sub_1B8F630(
           a1,
           a2,
           *(_QWORD *)(v129 + 24),
           v55 * ((unsigned __int64)&v54[-(v54 != nullptr)] / v55 + (v54 != nullptr)));
  if ( (v119 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_26;
  if ( (*(_BYTE *)(a3 + 19) & 0x20) != 0 )
    v56 = sub_1AEA650(a3);
  else
    v56 = 0;
  v57 = 0;
  v58 = v129 + 48;
  v59 = (_DWORD)v130 + 16;
  if ( *(_BYTE *)(v129 + 16) != 25 )
    v57 = *(unsigned __int16 *)(v129 + 22);
  v121 = v57;
  v117 = v56;
  sub_F6CCB0(&v129, si128);
  if ( (unsigned __int8)sub_1B9FBC0(
                          (_DWORD)a1,
                          v59,
                          v121,
                          v58,
                          v117,
                          (unsigned int)&v133,
                          (__int64)v136,
                          (__int64)&v138) )
    goto LABEL_26;
LABEL_43:
  v60 = a3;
  sub_A5E110(&v145, a3);
  v123 = sub_F6CCB0(a10, si128);
  v63 = v146;
  v64 = (unsigned int)(v146 - 6);
  if ( (unsigned int)v64 <= 2 )
  {
    v65 = v150;
    if ( v150 && (*(_BYTE *)(v150 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v66 = (__int64 *)(*(_QWORD *)(v150 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v67 = *v66;
      if ( *(_BYTE *)(*v66 + 16) != 26 )
        v67 = sub_F63050(*v66, v60, v64, v61);
      if ( (*(_QWORD *)(v67 + 16) & 0x1000000LL) != 0 )
      {
        v102 = sub_1AEA650(v67);
        if ( (v103 & 0x20) != 0 )
          v102 += *(unsigned __int16 *)(v67 + 22);
        v68 = *(_QWORD *)((v102 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else if ( *(_BYTE *)(v67 + 16) == 26
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
             && sub_F63050(v67, v60, v64, v61) )
      {
        v68 = *(_BYTE *)(v67 + 18) >> 5;
      }
      else
      {
        v68 = 0;
      }
      v69 = *(_QWORD *)(sub_B8C1B0(v65 + 72) + 16);
      v70 = (_QWORD *)(v69 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (v69 & 4) != 0 )
        v70 = (_QWORD *)*v70;
      if ( v70 )
        v70 -= 8;
      v71 = 1;
    }
    else
    {
      v68 = 0;
      v71 = 0;
      v70 = nullptr;
    }
    sub_19A2CD0((__int64)ptr, *a9, (__int64)v70, v68, v71, v62);
    v72 = *a9;
    sub_18C74E0(*a9, 4, 0, 4);
    v76 = sub_1B7CAD0(a9, v149, si128, a7, v73, v74, v75);
    if ( v76 == 1
      || (v77 = *a9,
          LODWORD(v142) = v146,
          v78 = sub_18B0290(v77, (_DWORD *)(v76 & 0xFFFFFFFFFFFFFFFELL), &v142, *(double *)si128.m128_u64),
          v78 == 1) )
    {
      sub_190D5E0(v72, si128);
      sub_19A2DA0((__int64 *)ptr);
      goto LABEL_26;
    }
    v149 = (unsigned __int16 *)(v78 & 0xFFFFFFFFFFFFFFFELL);
    v146 = (int)v142;
    sub_190D5E0(v72, si128);
    sub_19A2DA0((__int64 *)ptr);
    v63 = v146;
  }
  if ( v63 != 2 )
    goto LABEL_60;
  v38 = v147;
  v39 = &v147[v148];
  v40 = ptr;
  v126 = v39;
  if ( v147 == v39 )
    goto LABEL_109;
  v128 = v12;
  do
  {
    v41 = *v38;
    v42 = (__int64 *)(*v38 & 0xFFFFFFFFFFFFFFF0LL);
    v43 = *v42;
    if ( *(_BYTE *)(*v42 + 16) == 38
      || (v97 = *(_QWORD *)(*(_QWORD *)(v43 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v97 + 16) == 38)
      && (v43 = sub_F63050(*v42, v39, v97, v40)) != 0 )
    {
      v44 = *a9;
      ptr[0] = &ptr[2];
      ptr[1] = (void *)0x200000000LL;
      sub_1E4C960(v44, *(_QWORD *)(v43 + 32));
      v45 = *a9;
      v127 = *(_DWORD *)(v43 + 20);
      v46 = *(_DWORD *)(*a9 + 12632);
      *(_DWORD *)(*a9 + 12632) = 0;
      v125 = v46;
      v49 = sub_1B90FD0(a9, *(_QWORD *)(v43 + 32), v47, v48);
      if ( (v49 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v39 = (__int64 *)sub_A781D0(*(_QWORD *)(*a9 + 248), v49, v127);
        sub_A6A4A0(a11, (__int64)v39);
        *(_DWORD *)(v45 + 12632) = v125;
        if ( ptr[0] != &ptr[2] )
          free(ptr[0]);
        goto LABEL_107;
      }
      *(_DWORD *)(v45 + 12632) = v46;
      if ( ptr[0] != &ptr[2] )
        free(ptr[0]);
LABEL_26:
      v37 = 0;
      goto LABEL_27;
    }
    ptr[0] = (void *)sub_1B90FD0(a9, v41, v97, v40);
    if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (unsigned __int8)sub_18B53F0(*a9, (__int64 *)ptr, ((unsigned __int64)v123 << 32) | v123, v98, v99, v100) )
    {
      goto LABEL_26;
    }
    v39 = (__int64 *)ptr[0];
    sub_A6A4A0(a11, (__int64)ptr[0]);
LABEL_107:
    ++v38;
  }
  while ( v126 != v38 );
  v12 = v128;
LABEL_109:
  v101 = *(__int64 **)a11;
  v148 = *(unsigned int *)(a11 + 8);
  v147 = v101;
  if ( !v148 )
    v146 = 1;
LABEL_60:
  v79 = (unsigned int)v134;
  if ( !v141 )
  {
    v82 = v151;
    goto LABEL_112;
  }
  v80 = v139.m128_u64[0];
  if ( (unsigned int)v134 == v139.m128_u64[0] )
  {
LABEL_119:
    v81 = v138;
    goto LABEL_68;
  }
  if ( (unsigned int)v134 < v139.m128_u64[0] )
  {
    v139.m128_u64[0] = (unsigned int)v134;
    goto LABEL_119;
  }
  if ( (unsigned int)v134 > v139.m128_u64[1] )
  {
    sub_2236E10(&v138, v140, (unsigned int)v134, 1);
    v80 = v139.m128_u64[0];
  }
  v81 = v138;
  if ( (char *)v138 + v80 != (char *)v138 + v79 )
    memset((char *)v138 + v80, 0, v79 - v80);
  v139.m128_u64[0] = v79;
LABEL_68:
  v82 = v151;
  if ( v81 )
  {
    v151 = v81;
    goto LABEL_70;
  }
LABEL_112:
  if ( v82 )
    v151 = nullptr;
LABEL_70:
  v83 = *v12;
  memset(ptr, 0, 0x88u);
  v124 = v83;
  if ( v155 )
  {
    v84 = nullptr;
    v85 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
    LOBYTE(ptr[16]) = 1;
    ptr[0] = &ptr[3];
    ptr[8] = &ptr[10];
    ptr[9] = (void *)0x600000000LL;
    *(__m128 *)&ptr[1] = v85;
    sub_18C74E0(v83, 4, 0, 4);
    v122 = v153;
    if ( v153 )
    {
      do
      {
        if ( !v155 )
        {
          v132.m128i_i8[0] = *((_BYTE *)v84 + (_QWORD)v152);
          v132.m128i_i64[1] = 0;
          a7 = (__m128)_mm_load_si128(&v132);
          v131 = (__m128i)a7;
          goto LABEL_74;
        }
        v90 = (unsigned __int16 *)v154[(_QWORD)v84];
        v132.m128i_i8[0] = *((_BYTE *)v84 + (_QWORD)v152);
        v132.m128i_i64[1] = (__int64)v90;
        v131 = _mm_load_si128(&v132);
        if ( v90 )
        {
          v91 = sub_1B7CAD0(v12, v90, v85, a7, (__int64)v154, v86, v87);
          if ( v91 == 1
            || (v92 = *v12,
                v93 = v91 & 0xFFFFFFFFFFFFFFFELL,
                v94 = sub_F5ED10(v132.m128i_i8),
                v96 = sub_1E72620(v92, v93, v94, v95),
                !HIBYTE(v96)) )
          {
            v37 = 0;
            sub_190D5E0(v124, v85);
            goto LABEL_97;
          }
          if ( (_BYTE)v96 == 2 )
            goto LABEL_84;
          if ( (_BYTE)v96 != 3 )
          {
            if ( (_BYTE)v96 != 1 )
              goto LABEL_74;
            v131.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v132);
LABEL_84:
            v131.m128i_i64[1] = 0;
            goto LABEL_74;
          }
          v131.m128i_i64[1] = v93;
        }
LABEL_74:
        v88 = *v12;
        v89 = sub_F6CCB0(&v129, v85);
        v142 = ptr[0];
        v144[1] = LODWORD(ptr[9]);
        v143 = (__int64)ptr[1];
        v144[0] = ptr[8];
        if ( !(unsigned __int8)sub_19EE280(v88, &v142, v131.m128i_i8, v89) )
        {
          v142 = v144;
          v143 = 0x100000000LL;
          sub_F5EEE0((__int64 *)ptr, &v131, (__int64)&v142);
          if ( v142 != v144 )
            free(v142);
        }
        v84 = (char *)v84 + 1;
      }
      while ( v84 != v122 );
    }
    v152 = ptr[0];
    v153 = ptr[1];
    v154 = ptr[8];
    v155 = LODWORD(ptr[9]);
    sub_190D5E0(v124, v85);
    v124 = *v12;
  }
  v37 = sub_1E6A200(v124, v119, (_DWORD)v133, v134, 0, 0, (__int64)&v145);
  if ( (v37 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v37 = 0;
    goto LABEL_97;
  }
  v104 = *(_BYTE *)(v37 + 16);
  if ( v104 == 26 )
  {
    v105 = ((*(_BYTE *)(v37 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    goto LABEL_126;
  }
  v106 = 16;
  if ( v104 != 25 )
  {
    v105 = 15;
LABEL_126:
    v106 = 8 * ((v105 + 8 * (unsigned int)*(unsigned __int16 *)(v37 + 22)) >> 3) + 8;
  }
  v107 = sub_1EA6140(a2, v37, v106, 8);
  v109 = v130;
  *v108 = *v130;
  v108[1] = v109[1];
  v108[2] = v109[2];
  if ( *(_BYTE *)(v129 + 16) == 26 && (*(_BYTE *)(v129 + 19) & 0x1E) != 0 )
  {
    v110 = v109[2 * *(unsigned __int16 *)(v129 + 22) + 4];
    v111 = v109[2 * *(unsigned __int16 *)(v129 + 22) + 5];
  }
  else
  {
    v111 = 0;
    v110 = 0;
  }
  if ( *(_BYTE *)(v107 + 16) == 26 && (*(_BYTE *)(v107 + 19) & 0x1E) != 0 )
  {
    v112 = &v108[2 * *(unsigned __int16 *)(v107 + 22) + 4];
    *v112 = v110;
    v112[1] = v111;
  }
  v108[3] = v109[3];
  if ( *(_BYTE *)(v107 + 16) != 25 )
  {
    v113 = *(unsigned __int16 *)(v107 + 22);
    if ( v113 )
    {
      v114 = 8LL * (unsigned int)(v113 - 1) + 8;
      v115 = 0;
      do
      {
        *(_QWORD *)&v108[v115 / 4 + 4] = *(_QWORD *)((char *)v136[0] + v115);
        v115 += 8LL;
      }
      while ( v114 != v115 );
    }
  }
LABEL_97:
  if ( LOBYTE(ptr[16]) )
  {
    if ( ptr[8] != &ptr[10] )
      free(ptr[8]);
    if ( ptr[0] != &ptr[3] )
      free(ptr[0]);
  }
LABEL_27:
  if ( v138 != v140 )
    free(v138);
  if ( v136[0] != v137 )
    free(v136[0]);
  if ( v133 != v135 )
    free(v133);
  return v37;
}
