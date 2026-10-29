__int64 __fastcall sub_1767640(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 *v9; // r12
  __int64 v10; // rbx
  __m128 si128; // xmm0
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v15; // rcx
  char v16; // dl
  int v17; // eax
  int v18; // esi
  char v19; // dl
  unsigned int v20; // esi
  unsigned int v21; // r8d
  char v22; // si
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // r14d
  __int64 v26; // rsi
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rdx
  char v30; // dl
  int v31; // ecx
  __int64 v32; // r13
  char *v33; // r13
  unsigned int v34; // eax
  __int64 v35; // rbx
  void **v36; // rsi
  void **v37; // r12
  void *v38; // r13
  __int64 *v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rdi
  __int64 v42; // r13
  int v43; // r15d
  __int64 v44; // rax
  char v46; // dl
  int v47; // eax
  __int64 v48; // rax
  char *v49; // r13
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rsi
  char v53; // cl
  char v54; // dl
  int v55; // ecx
  int v56; // r8d
  char v57; // al
  int v58; // r15d
  int v59; // r14d
  int v60; // r13d
  unsigned __int64 v61; // rcx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // r13
  __int64 v65; // r15
  __int64 v66; // rax
  _QWORD *v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r13
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rdi
  __int64 v75; // rax
  unsigned __int16 *v76; // rax
  bool v77; // r15
  char v78; // r14
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
  void *v102; // r8
  __int64 v103; // rax
  void **v104; // rdx
  __int64 v105; // rax
  __int64 v106; // r8
  _QWORD *v107; // rax
  _QWORD *v108; // r8
  _QWORD *v109; // rsi
  __m128 v110; // xmm0
  __int64 v111; // r13
  __int64 v112; // rbx
  unsigned int v113; // eax
  unsigned __int16 *v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rbp
  unsigned __int64 v117; // rbx
  char *v118; // rax
  __int64 v119; // rdx
  unsigned __int16 v120; // ax
  unsigned __int64 v121; // rax
  unsigned int v123; // [rsp+18h] [rbp-2A0h]
  int v124; // [rsp+18h] [rbp-2A0h]
  int v125; // [rsp+20h] [rbp-298h]
  __int64 v126; // [rsp+20h] [rbp-298h]
  unsigned __int64 v127; // [rsp+30h] [rbp-288h]
  unsigned __int64 v128; // [rsp+30h] [rbp-288h]
  void *v129; // [rsp+30h] [rbp-288h]
  unsigned int v130; // [rsp+40h] [rbp-278h]
  __int64 v131; // [rsp+40h] [rbp-278h]
  void **v132; // [rsp+58h] [rbp-260h]
  __int64 v133; // [rsp+58h] [rbp-260h]
  unsigned int v134; // [rsp+68h] [rbp-250h]
  void *v135; // [rsp+68h] [rbp-250h]
  unsigned __int64 v136; // [rsp+68h] [rbp-250h]
  __int64 *v137; // [rsp+78h] [rbp-240h]
  __int64 v138; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v139; // [rsp+88h] [rbp-230h]
  __m128i v140; // [rsp+90h] [rbp-228h] BYREF
  __m128i v141; // [rsp+A0h] [rbp-218h] BYREF
  void *v142; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v143; // [rsp+B8h] [rbp-200h]
  _BYTE v144[32]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v145[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE v146[32]; // [rsp+F0h] [rbp-1C8h] BYREF
  void *v147; // [rsp+110h] [rbp-1A8h] BYREF
  __m128 v148; // [rsp+118h] [rbp-1A0h]
  _BYTE v149[16]; // [rsp+128h] [rbp-190h] BYREF
  char v150; // [rsp+138h] [rbp-180h]
  void *v151; // [rsp+140h] [rbp-178h] BYREF
  __int64 v152; // [rsp+148h] [rbp-170h]
  _QWORD v153[4]; // [rsp+150h] [rbp-168h] BYREF
  __m128 v154; // [rsp+170h] [rbp-148h] BYREF
  int v155; // [rsp+188h] [rbp-130h]
  void **v156; // [rsp+190h] [rbp-128h]
  __int64 v157; // [rsp+198h] [rbp-120h]
  unsigned __int16 *v158; // [rsp+1A0h] [rbp-118h]
  __int64 v159; // [rsp+1B0h] [rbp-108h]
  _BYTE *v160; // [rsp+1B8h] [rbp-100h]
  _BYTE *v161; // [rsp+1C8h] [rbp-F0h]
  void *v162; // [rsp+1D0h] [rbp-E8h]
  _QWORD *v163; // [rsp+1D8h] [rbp-E0h]
  __int64 v164; // [rsp+1E0h] [rbp-D8h]
  void *ptr[25]; // [rsp+1F0h] [rbp-C8h] BYREF

  v9 = a1;
  v10 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v139 = a4;
  v142 = v144;
  v143 = 0x400000000LL;
  v145[1] = (void *)0x400000000LL;
  v147 = v149;
  v148 = si128;
  v150 = 0;
  v12 = *(_QWORD *)(a3 + 16);
  v138 = a3;
  v145[0] = v146;
  if ( (v12 & 0x100000000LL) != 0 )
  {
    v13 = v12 >> 24;
    if ( (v13 & 0x20) != 0 )
    {
      v15 = 8LL * *(unsigned __int16 *)(a3 + 22) + 48;
      v16 = v13;
      v17 = (v13 & 0x40) != 0;
      v18 = v10 + v15 + ((v16 >> 5) & 4) + 7;
      v19 = *(_BYTE *)(v10 + 19);
      v20 = v18 & 0xFFFFFFF8;
      if ( (v19 & 0x40) != 0 )
        v17 += (*(_BYTE *)(((v10 + v15 + ((v19 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
      v21 = v20 + 8 * v17;
      v22 = ((unsigned __int8)v19 >> 1) & 0xF;
      if ( v22 != 2 )
        __asm { jmp     rax }
      v23 = v21 + 8 * (*(_WORD *)((v10 + ((v19 >> 5) & 4) + v15 + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      v23 = 0;
    }
    v24 = 0;
    v25 = (_DWORD)v139 + 16;
    if ( *(_BYTE *)(v10 + 16) != 25 )
      v24 = *(unsigned __int16 *)(v10 + 22);
    v125 = v24;
    v123 = v23;
    sub_F6CCB0(&v138, si128);
    if ( (unsigned __int8)sub_17789F0(
                            (_DWORD)a1,
                            v25,
                            v125,
                            (int)v10 + 48,
                            v123,
                            (unsigned int)&v142,
                            (__int64)v145,
                            (__int64)&v147) )
      goto LABEL_26;
    v26 = *a1;
    v27 = *(_QWORD *)(*a1 + 3032);
    if ( !v27 )
      v27 = *(_QWORD *)(v26 + 544);
    v28 = *(_BYTE *)(v27 + 8);
    v29 = v27 - 64;
    if ( (v28 & 0x7Fu) - 59 >= 3 )
      v29 = 0;
    sub_19A2CD0(ptr, v26, v29, a5, 1);
    v30 = *(_BYTE *)(v138 + 16);
    if ( v30 == 26 )
    {
      v31 = ((*(_BYTE *)(v138 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
    }
    else
    {
      v32 = 16;
      if ( v30 == 25 )
        goto LABEL_18;
      v31 = 15;
    }
    v32 = 8 * ((v31 + 8 * (unsigned int)*(unsigned __int16 *)(v138 + 22)) >> 3) + 8;
LABEL_18:
    v33 = (char *)v139 + v32;
    v34 = sub_F6C520(*(_QWORD *)(v138 + 24));
    v126 = sub_17687F0(
             a1,
             a2,
             *(_QWORD *)(v138 + 24),
             v34 * ((unsigned __int64)&v33[-(v33 != nullptr)] / v34 + (v33 != nullptr)));
    if ( (v126 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v35 = 0;
      sub_19A2DA0(ptr);
      goto LABEL_27;
    }
    sub_19A2DA0(ptr);
    goto LABEL_55;
  }
  v46 = *(_BYTE *)(a3 + 16);
  if ( v46 == 26 )
  {
    v47 = ((*(_BYTE *)(v10 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
  }
  else
  {
    v48 = 16;
    if ( v46 == 25 )
      goto LABEL_37;
    v47 = 15;
  }
  v48 = 8 * ((v47 + 8 * (unsigned int)*(unsigned __int16 *)(v10 + 22)) >> 3) + 8;
LABEL_37:
  v49 = (char *)v139 + v48;
  v50 = sub_F6C520(*(_QWORD *)(v10 + 24));
  v126 = sub_17687F0(
           a1,
           a2,
           *(_QWORD *)(v138 + 24),
           v50 * ((unsigned __int64)&v49[-(v49 != nullptr)] / v50 + (v49 != nullptr)));
  if ( (v126 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_26;
  v51 = *(_QWORD *)(v10 + 16) >> 24;
  if ( (v51 & 0x20) != 0 )
  {
    v52 = 8LL * *(unsigned __int16 *)(v10 + 22) + 48;
    v53 = (unsigned __int8)v51 >> 6;
    v54 = *(_BYTE *)(v10 + 19);
    v55 = v53 & 1;
    if ( (v54 & 0x40) != 0 )
      v55 += (*(_BYTE *)(((v10 + v52 + ((v54 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) + 1) & 4) != 0;
    v56 = ((v10 + v52 + (((char)BYTE3(*(_QWORD *)(v10 + 16)) >> 5) & 4) + 7) & 0xFFFFFFF8) + 8 * v55;
    v57 = ((unsigned __int8)v54 >> 1) & 0xF;
    if ( v57 == 2 )
    {
      v56 += 8 * (*(_WORD *)((v10 + v52 + ((v54 >> 5) & 4) + 7) & 0xFFFFFFFFFFFFFFF8LL) & 0x3FF);
    }
    else
    {
      switch ( v57 )
      {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 11:
          switch ( v57 )
          {
            case 6:
            case 7:
            case 8:
              v56 += 8;
              goto LABEL_50;
            case 9:
              goto LABEL_134;
            case 10:
              goto LABEL_133;
            default:
LABEL_50:
              switch ( v57 )
              {
                case 0:
                case 1:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 11:
                  goto LABEL_52;
                case 9:
                  goto LABEL_134;
                case 10:
                  goto LABEL_133;
                default:
                  goto LABEL_179;
              }
          }
        case 9:
LABEL_134:
          v56 += 8;
          break;
        case 10:
LABEL_133:
          v56 += 16;
          break;
        default:
LABEL_179:
          JUMPOUT(0x2E9544);
      }
    }
  }
  else
  {
    v56 = 0;
  }
LABEL_52:
  v58 = 0;
  v59 = v138 + 48;
  v60 = (_DWORD)v139 + 16;
  if ( *(_BYTE *)(v138 + 16) != 25 )
    v58 = *(unsigned __int16 *)(v138 + 22);
  v124 = v56;
  sub_F6CCB0(&v138, si128);
  if ( (unsigned __int8)sub_17789F0((_DWORD)a1, v60, v58, v59, v124, (unsigned int)&v142, (__int64)v145, (__int64)&v147) )
    goto LABEL_26;
LABEL_55:
  sub_A5E110(&v154, v10);
  v130 = sub_F6CCB0(a8, si128);
  v62 = v155;
  v63 = (unsigned int)(v155 - 6);
  if ( (unsigned int)v63 > 2 )
  {
    v77 = 0;
  }
  else
  {
    v64 = v159;
    if ( v159 && (*(_BYTE *)(v159 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v65 = sub_1703690(v159, v10, v63, v61);
      v66 = *(_QWORD *)(sub_B8C1B0(v64 + 72) + 16);
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
    sub_19A2CD0(ptr, *a7, v67, v65, v68);
    v69 = *a7;
    sub_18C74E0(*a7, 4, 0, 4);
    v70 = sub_175B800(a7, v158);
    if ( v70 == 1
      || (v74 = *a7,
          LODWORD(v151) = v155,
          v75 = sub_18B0290(v74, v70 & 0xFFFFFFFFFFFFFFFELL, &v151, v71, v72, v73),
          v75 == 1) )
    {
      sub_190D5E0(v69);
      sub_19A2DA0(ptr);
      goto LABEL_26;
    }
    v76 = (unsigned __int16 *)(v75 & 0xFFFFFFFFFFFFFFFELL);
    v77 = 1;
    if ( v158 == v76 )
      v77 = v155 != (_DWORD)v151;
    v158 = v76;
    v155 = (int)v151;
    sub_190D5E0(v69);
    sub_19A2DA0(ptr);
    v62 = v155;
  }
  if ( v62 != 2 )
    goto LABEL_69;
  v132 = &v156[v157];
  if ( v156 == v132 )
    goto LABEL_121;
  v36 = &ptr[2];
  v137 = v9;
  v37 = v156;
  do
  {
    v38 = *v37;
    v39 = (__int64 *)((unsigned __int64)*v37 & 0xFFFFFFFFFFFFFFF0LL);
    v40 = *v39;
    if ( *(_BYTE *)(*v39 + 16) == 38
      || (v101 = *(_QWORD *)(*(_QWORD *)(v40 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v101 + 16) == 38)
      && (v40 = sub_F63050(*v39, v36, v101, v61)) != 0 )
    {
      ptr[1] = (void *)0x200000000LL;
      v41 = *a7;
      ptr[0] = &ptr[2];
      sub_1E4C960(v41, *(_QWORD *)(v40 + 32));
      v42 = *a7;
      v43 = *(_DWORD *)(*a7 + 12632);
      v134 = *(_DWORD *)(v40 + 20);
      *(_DWORD *)(*a7 + 12632) = 0;
      v44 = sub_176A2F0(a7, *(_QWORD *)(v40 + 32));
      if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v121 = sub_A781D0(*(_QWORD *)(*a7 + 248), v44, v134);
        v61 = *(unsigned int *)(a9 + 8);
        v36 = (void **)*(unsigned int *)(a9 + 12);
        if ( v61 + 1 > (unsigned __int64)v36 )
        {
          v36 = (void **)(a9 + 16);
          v136 = v121;
          sub_2237220(a9, a9 + 16, v61 + 1, 8);
          v61 = *(unsigned int *)(a9 + 8);
          v121 = v136;
        }
        *(_QWORD *)(*(_QWORD *)a9 + 8 * v61) = v121;
        ++*(_DWORD *)(a9 + 8);
        *(_DWORD *)(v42 + 12632) = v43;
        if ( ptr[0] != &ptr[2] )
          free(ptr[0]);
        v77 = 1;
        goto LABEL_119;
      }
      *(_DWORD *)(v42 + 12632) = v43;
      if ( ptr[0] != &ptr[2] )
        free(ptr[0]);
LABEL_26:
      v35 = 0;
      goto LABEL_27;
    }
    ptr[0] = (void *)sub_176A2F0(a7, v38);
    if ( ((unsigned __int64)ptr[0] & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_26;
    v36 = ptr;
    if ( (unsigned __int8)sub_18B53F0(*a7, ptr, ((unsigned __int64)v130 << 32) | v130) )
      goto LABEL_26;
    v102 = ptr[0];
    v61 = *(unsigned int *)(a9 + 12);
    if ( v38 != ptr[0] )
      v77 = 1;
    v103 = *(unsigned int *)(a9 + 8);
    if ( v103 + 1 > v61 )
    {
      v36 = (void **)(a9 + 16);
      v135 = ptr[0];
      sub_2237220(a9, a9 + 16, v103 + 1, 8);
      v103 = *(unsigned int *)(a9 + 8);
      v102 = v135;
    }
    *(_QWORD *)(*(_QWORD *)a9 + 8 * v103) = v102;
    ++*(_DWORD *)(a9 + 8);
LABEL_119:
    ++v37;
  }
  while ( v132 != v37 );
  v9 = v137;
LABEL_121:
  v104 = *(void ***)a9;
  v157 = *(unsigned int *)(a9 + 8);
  v156 = v104;
  if ( !v157 )
    v155 = 1;
LABEL_69:
  v78 = v150;
  v79 = (unsigned int)v143;
  if ( !v150 )
  {
    v82 = v160;
LABEL_125:
    v78 = v77;
    if ( v82 )
    {
      v160 = nullptr;
      v78 = 1;
    }
    goto LABEL_89;
  }
  v80 = v148.m128_u64[0];
  if ( (unsigned int)v143 == v148.m128_u64[0] )
  {
LABEL_146:
    v81 = v147;
    goto LABEL_77;
  }
  if ( (unsigned int)v143 < v148.m128_u64[0] )
  {
    v148.m128_u64[0] = (unsigned int)v143;
    goto LABEL_146;
  }
  if ( (unsigned int)v143 > v148.m128_u64[1] )
  {
    v128 = (unsigned int)v143;
    sub_2236E10(&v147, v149, (unsigned int)v143, 1);
    v80 = v148.m128_u64[0];
    v79 = v128;
  }
  v81 = v147;
  if ( (char *)v147 + v80 != (char *)v147 + v79 )
  {
    v127 = v79;
    memset((char *)v147 + v80, 0, v79 - v80);
    v79 = v127;
  }
  v148.m128_u64[0] = v79;
LABEL_77:
  v82 = v160;
  if ( !v81 )
    goto LABEL_125;
  if ( v160 )
  {
    if ( *(_BYTE *)(v138 + 16) == 25 )
    {
      v84 = 0;
      v83 = 0;
    }
    else
    {
      v83 = *(unsigned __int16 *)(v138 + 22);
      v84 = *(unsigned __int16 *)(v138 + 22);
    }
    if ( (_DWORD)v143 == v83 )
    {
      if ( v160 == &v160[v84] )
        goto LABEL_87;
      if ( *v160 == *v81 )
      {
        v85 = 1;
        while ( v84 != v85 )
        {
          v86 = v160[v85++];
          if ( v86 != v81[v85 - 1] )
            goto LABEL_88;
        }
LABEL_87:
        v78 = v77;
      }
    }
  }
LABEL_88:
  v160 = v81;
LABEL_89:
  memset(ptr, 0, 0x88u);
  v87 = *v9;
  v131 = *v9;
  if ( !v164 )
    goto LABEL_90;
  v110 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(ptr[16]) = 1;
  v111 = 0;
  ptr[0] = &ptr[3];
  ptr[8] = &ptr[10];
  ptr[9] = (void *)0x600000000LL;
  *(__m128 *)&ptr[1] = v110;
  sub_18C74E0(v87, 4, 0, 4);
  v129 = v162;
  if ( !v162 )
    goto LABEL_175;
  v133 = v10;
  while ( 2 )
  {
    if ( v164 )
    {
      v114 = (unsigned __int16 *)v163[v111];
      v141.m128i_i8[0] = v161[v111];
      v141.m128i_i64[1] = (__int64)v114;
      v140 = _mm_load_si128(&v141);
      if ( v114 )
      {
        v115 = sub_175B800(v9, v114);
        if ( v115 == 1
          || (v116 = *v9,
              v117 = v115 & 0xFFFFFFFFFFFFFFFELL,
              v118 = sub_F5ED10(v141.m128i_i8),
              v120 = sub_1E72620(v116, v117, v118, v119),
              !HIBYTE(v120)) )
        {
          v35 = 0;
          sub_190D5E0(v131);
          goto LABEL_128;
        }
        switch ( (_BYTE)v120 )
        {
          case 2:
LABEL_161:
            v140.m128i_i64[1] = 0;
            break;
          case 3:
            v140.m128i_i64[1] = v117;
            break;
          case 1:
            v140.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v141);
            goto LABEL_161;
        }
      }
    }
    else
    {
      v141.m128i_i8[0] = v161[v111];
      v141.m128i_i64[1] = 0;
      v140 = _mm_load_si128(&v141);
    }
    v112 = *v9;
    v113 = sub_F6CCB0(&v138, v110);
    v151 = ptr[0];
    v153[1] = LODWORD(ptr[9]);
    v152 = (__int64)ptr[1];
    v153[0] = ptr[8];
    if ( !(unsigned __int8)sub_19EE280(v112, &v151, &v140, v113) )
    {
      v151 = v153;
      v152 = 0x100000000LL;
      sub_F5EEE0((__int64 *)ptr, &v140, (__int64)&v151);
      if ( v151 != v153 )
        free(v151);
    }
    if ( v129 != (void *)++v111 )
      continue;
    break;
  }
  v10 = v133;
LABEL_175:
  v78 = 1;
  v161 = ptr[0];
  v162 = ptr[1];
  v163 = ptr[8];
  v164 = LODWORD(ptr[9]);
  sub_190D5E0(v131);
  v131 = *v9;
LABEL_90:
  if ( !*(_DWORD *)(v131 + 12632) )
  {
    v88 = v138;
    if ( v126 == *(_QWORD *)(v10 + 24) )
    {
      v105 = *(unsigned __int16 *)(v10 + 22);
      v106 = 8 * v105;
      if ( v105 == (unsigned int)v143 )
      {
        v107 = (_QWORD *)(v10 + 48);
        v108 = (_QWORD *)(v10 + 48 + v106);
        if ( (_QWORD *)(v10 + 48) == v108 )
          goto LABEL_141;
        if ( *(_QWORD *)v142 == *(_QWORD *)(v10 + 48) )
        {
          v109 = v142;
          while ( 1 )
          {
            ++v107;
            ++v109;
            if ( v108 == v107 )
              break;
            if ( *v107 != *v109 )
              goto LABEL_92;
          }
LABEL_141:
          v35 = v138;
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
                v92 = sub_1EA6140(a2, v35, v91, 8);
                v94 = v139;
                *v93 = *v139;
                v93[1] = v94[1];
                v93[2] = v94[2];
                if ( *(_BYTE *)(v138 + 16) == 26 && (*(_BYTE *)(v138 + 19) & 0x1E) != 0 )
                {
                  v95 = v94[2 * *(unsigned __int16 *)(v138 + 22) + 4];
                  v96 = v94[2 * *(unsigned __int16 *)(v138 + 22) + 5];
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
                      *(_QWORD *)&v93[v100 / 4 + 4] = *(_QWORD *)((char *)v145[0] + v100);
                      v100 += 8LL;
                    }
                    while ( v99 != v100 );
                  }
                }
                goto LABEL_128;
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
  v35 = sub_1E6A200(v131, v126, (_DWORD)v142, v143, 0, 0, (__int64)&v154);
  if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v88 = v35;
    goto LABEL_94;
  }
  v35 = 0;
LABEL_128:
  if ( LOBYTE(ptr[16]) )
  {
    if ( ptr[8] != &ptr[10] )
      free(ptr[8]);
    if ( ptr[0] != &ptr[3] )
      free(ptr[0]);
  }
LABEL_27:
  if ( v147 != v149 )
    free(v147);
  if ( v145[0] != v146 )
    free(v145[0]);
  if ( v142 != v144 )
    free(v142);
  return v35;
}
