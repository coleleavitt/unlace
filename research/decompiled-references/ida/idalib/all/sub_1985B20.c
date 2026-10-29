__int64 __fastcall sub_1985B20(
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
  __int64 v14; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // r13d
  __int64 v19; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r13
  __int64 *v31; // rax
  __int64 v32; // r15
  __int64 v33; // r15
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r13
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int16 *v41; // rax
  bool v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // r15d
  int v46; // edx
  int v47; // r14d
  int v48; // r13d
  char v49; // r13
  unsigned __int64 v50; // r8
  unsigned __int64 v51; // rax
  _BYTE *v52; // r14
  _BYTE *v53; // rdx
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  char v57; // si
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdi
  _QWORD *v61; // rax
  _QWORD *v62; // rdi
  _QWORD *v63; // rsi
  char v64; // al
  int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rax
  _DWORD *v68; // rdx
  _DWORD *v69; // rcx
  int v70; // edi
  int v71; // esi
  _DWORD *v72; // r8
  int v73; // eax
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  void **v76; // rcx
  void *v77; // rsi
  void **v78; // rbx
  void *v79; // r13
  __int64 *v80; // rax
  __int64 v81; // rbp
  __int64 v82; // rdi
  __int64 v83; // r13
  int v84; // r15d
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  void **v90; // rdx
  __int64 v91; // rax
  char v92; // r9
  __int64 v93; // r13
  __m128 v94; // xmm0
  __int64 v95; // rbx
  unsigned int v96; // eax
  unsigned __int16 *v97; // rsi
  unsigned __int64 v98; // rax
  __int64 v99; // rbp
  unsigned __int64 v100; // rbx
  char *v101; // rax
  __int64 v102; // rdx
  unsigned __int16 v103; // ax
  int v105; // [rsp+28h] [rbp-290h]
  int v106; // [rsp+28h] [rbp-290h]
  int v107; // [rsp+30h] [rbp-288h]
  __int64 v108; // [rsp+30h] [rbp-288h]
  unsigned __int64 v109; // [rsp+38h] [rbp-280h]
  unsigned __int64 v110; // [rsp+38h] [rbp-280h]
  void *v111; // [rsp+38h] [rbp-280h]
  unsigned int v112; // [rsp+50h] [rbp-268h]
  void **v113; // [rsp+58h] [rbp-260h]
  __int64 v114; // [rsp+58h] [rbp-260h]
  unsigned int v115; // [rsp+68h] [rbp-250h]
  __int64 v116; // [rsp+68h] [rbp-250h]
  __int64 v117; // [rsp+70h] [rbp-248h]
  __int64 v118; // [rsp+80h] [rbp-238h] BYREF
  _DWORD *v119; // [rsp+88h] [rbp-230h]
  __m128i v120; // [rsp+90h] [rbp-228h] BYREF
  __m128i v121; // [rsp+A0h] [rbp-218h] BYREF
  void *v122; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v123; // [rsp+B8h] [rbp-200h]
  _BYTE v124[32]; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v125[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  _BYTE v126[32]; // [rsp+F0h] [rbp-1C8h] BYREF
  void *ptr; // [rsp+110h] [rbp-1A8h] BYREF
  __m128 v128; // [rsp+118h] [rbp-1A0h]
  _BYTE v129[16]; // [rsp+128h] [rbp-190h] BYREF
  char v130; // [rsp+138h] [rbp-180h]
  void *v131; // [rsp+140h] [rbp-178h] BYREF
  __int64 v132; // [rsp+148h] [rbp-170h]
  _QWORD v133[4]; // [rsp+150h] [rbp-168h] BYREF
  __m128 v134; // [rsp+170h] [rbp-148h] BYREF
  int v135; // [rsp+188h] [rbp-130h]
  void **v136; // [rsp+190h] [rbp-128h]
  __int64 v137; // [rsp+198h] [rbp-120h]
  unsigned __int16 *v138; // [rsp+1A0h] [rbp-118h]
  __int64 v139; // [rsp+1B0h] [rbp-108h]
  _BYTE *v140; // [rsp+1B8h] [rbp-100h]
  _BYTE *v141; // [rsp+1C8h] [rbp-F0h]
  void *v142; // [rsp+1D0h] [rbp-E8h]
  _QWORD *v143; // [rsp+1D8h] [rbp-E0h]
  __int64 v144; // [rsp+1E0h] [rbp-D8h]
  void *v145[25]; // [rsp+1F0h] [rbp-C8h] BYREF

  v12 = a3;
  si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v119 = a4;
  v122 = v124;
  v123 = 0x400000000LL;
  v125[1] = (void *)0x400000000LL;
  ptr = v129;
  v128 = si128;
  v130 = 0;
  v14 = *(_QWORD *)(a3 + 16);
  v118 = a3;
  v125[0] = v126;
  if ( (v14 & 0x100000000LL) != 0 )
  {
    if ( (v14 & 0x20000000) != 0 )
      v16 = sub_18BCBB0(a3);
    else
      v16 = 0;
    v17 = 0;
    v18 = (_DWORD)v119 + 16;
    if ( *(_BYTE *)(v12 + 16) != 25 )
      v17 = *(unsigned __int16 *)(v12 + 22);
    v107 = v17;
    v105 = v16;
    sub_F6CCB0(&v118, si128);
    if ( (unsigned __int8)sub_1995580(
                            (_DWORD)a1,
                            v18,
                            v107,
                            (int)v12 + 48,
                            v105,
                            (unsigned int)&v122,
                            (__int64)v125,
                            (__int64)&ptr) )
      goto LABEL_7;
    v21 = *a1;
    v22 = *(_QWORD *)(*a1 + 3032);
    if ( !v22 )
      v22 = *(_QWORD *)(v21 + 544);
    v23 = *(_BYTE *)(v22 + 8);
    v24 = v22 - 64;
    if ( (v23 & 0x7Fu) - 59 >= 3 )
      v24 = 0;
    sub_19A2CD0(v145, v21, v24, a5, 1);
    v25 = sub_BEB490((__int64)&v118);
    v108 = sub_1986980(a1, a2, v25, v26);
    if ( (v108 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    {
      v19 = 0;
      sub_19A2DA0(v145);
      goto LABEL_8;
    }
    sub_19A2DA0(v145);
  }
  else
  {
    v43 = sub_BEB490((__int64)&v118);
    v108 = sub_1986980(a1, a2, v43, v44);
    if ( (v108 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_7;
    if ( (*(_BYTE *)(v12 + 19) & 0x20) != 0 )
      v45 = sub_18BCBB0(v12);
    else
      v45 = 0;
    v46 = 0;
    v47 = v118 + 48;
    v48 = (_DWORD)v119 + 16;
    if ( *(_BYTE *)(v118 + 16) != 25 )
      v46 = *(unsigned __int16 *)(v118 + 22);
    v106 = v46;
    sub_F6CCB0(&v118, si128);
    if ( (unsigned __int8)sub_1995580(
                            (_DWORD)a1,
                            v48,
                            v106,
                            v47,
                            v45,
                            (unsigned int)&v122,
                            (__int64)v125,
                            (__int64)&ptr) )
      goto LABEL_7;
  }
  sub_A5E110(&v134, v12);
  v112 = sub_F6CCB0(a10, si128);
  v28 = v135;
  v29 = (unsigned int)(v135 - 6);
  if ( (unsigned int)v29 > 2 )
  {
    v42 = 0;
  }
  else
  {
    v30 = v139;
    if ( v139 && (*(_BYTE *)(v139 + 28) & 0x7Fu) - 35 <= 3 )
    {
      v31 = (__int64 *)(*(_QWORD *)(v139 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v32 = *v31;
      if ( *(_BYTE *)(*v31 + 16) != 26 )
        v32 = sub_F63050(*v31, v12, v29, v27);
      if ( (*(_QWORD *)(v32 + 16) & 0x1000000LL) != 0 )
      {
        v91 = sub_18BCBB0(v32);
        if ( (v92 & 0x20) != 0 )
          v91 += *(unsigned __int16 *)(v32 + 22);
        v33 = *(_QWORD *)((v91 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else if ( *(_BYTE *)(v32 + 16) == 26
             || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
             && sub_F63050(v32, v12, v29, v27) )
      {
        v33 = *(_BYTE *)(v32 + 18) >> 5;
      }
      else
      {
        v33 = 0;
      }
      v34 = sub_B72690(v30 + 72);
      v35 = v34;
      if ( v34 )
        v35 = v34 - 64;
      v36 = 1;
    }
    else
    {
      v33 = 0;
      v36 = 0;
      v35 = 0;
    }
    sub_19A2CD0(v145, *a9, v35, v33, v36);
    v37 = *a9;
    sub_18C79E0(*a9, 4, 4);
    v38 = sub_190CCA0(a9, v138, *(double *)si128.m128_u64, a7);
    if ( v38 == 1
      || (v39 = *a9,
          LODWORD(v131) = v135,
          v40 = sub_18B0290(v39, (_DWORD *)(v38 & 0xFFFFFFFFFFFFFFFELL), &v131, *(double *)si128.m128_u64),
          v40 == 1) )
    {
      sub_190D5E0(v37, si128);
      sub_19A2DA0(v145);
      goto LABEL_7;
    }
    v41 = (unsigned __int16 *)(v40 & 0xFFFFFFFFFFFFFFFELL);
    v42 = 1;
    if ( v138 == v41 )
      v42 = v135 != (_DWORD)v131;
    v138 = v41;
    v135 = (int)v131;
    sub_190D5E0(v37, si128);
    sub_19A2DA0(v145);
    v28 = v135;
  }
  if ( v28 != 2 )
    goto LABEL_47;
  v113 = &v136[v137];
  if ( v136 == v113 )
    goto LABEL_108;
  v76 = &v145[2];
  v77 = v145;
  v117 = v12;
  v78 = v136;
  do
  {
    v79 = *v78;
    v80 = (__int64 *)((unsigned __int64)*v78 & 0xFFFFFFFFFFFFFFF0LL);
    v81 = *v80;
    if ( *(_BYTE *)(*v80 + 16) == 38
      || (v86 = *(_QWORD *)(*(_QWORD *)(v81 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v86 + 16) == 38)
      && (v81 = sub_F63050(*v80, v77, v86, v76)) != 0 )
    {
      v82 = *a9;
      v145[1] = (void *)0x200000000LL;
      v145[0] = &v145[2];
      sub_1E4C960(v82, *(_QWORD *)(v81 + 32));
      v83 = *a9;
      v84 = *(_DWORD *)(*a9 + 12632);
      v115 = *(_DWORD *)(v81 + 20);
      *(_DWORD *)(*a9 + 12632) = 0;
      v85 = sub_19885D0(a9, *(_QWORD *)(v81 + 32));
      if ( (v85 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v77 = (void *)sub_A781D0(*(_QWORD *)(*a9 + 248), v85, v115);
        sub_A6A4A0(a11, (__int64)v77);
        *(_DWORD *)(v83 + 12632) = v84;
        if ( v145[0] != &v145[2] )
          free(v145[0]);
        v42 = 1;
        goto LABEL_106;
      }
      *(_DWORD *)(v83 + 12632) = v84;
      if ( v145[0] != &v145[2] )
        free(v145[0]);
LABEL_7:
      v19 = 0;
      goto LABEL_8;
    }
    v145[0] = (void *)sub_19885D0(a9, v79);
    if ( ((unsigned __int64)v145[0] & 0xFFFFFFFFFFFFFFF0LL) == 0
      || (unsigned __int8)sub_18B53F0(*a9, (__int64 *)v145, ((unsigned __int64)v112 << 32) | v112, v87, v88, v89) )
    {
      goto LABEL_7;
    }
    v77 = v145[0];
    if ( v79 != v145[0] )
      v42 = 1;
    sub_A6A4A0(a11, (__int64)v145[0]);
LABEL_106:
    ++v78;
  }
  while ( v113 != v78 );
  v12 = v117;
LABEL_108:
  v90 = *(void ***)a11;
  v137 = *(unsigned int *)(a11 + 8);
  v136 = v90;
  if ( !v137 )
    v135 = 1;
LABEL_47:
  v49 = v130;
  v50 = (unsigned int)v123;
  if ( !v130 )
  {
    v53 = v140;
LABEL_111:
    v49 = v42;
    if ( v53 )
    {
      v140 = nullptr;
      v49 = 1;
    }
    goto LABEL_67;
  }
  v51 = v128.m128_u64[0];
  if ( (unsigned int)v123 == v128.m128_u64[0] )
  {
LABEL_126:
    v52 = ptr;
    goto LABEL_55;
  }
  if ( (unsigned int)v123 < v128.m128_u64[0] )
  {
    v128.m128_u64[0] = (unsigned int)v123;
    goto LABEL_126;
  }
  if ( (unsigned int)v123 > v128.m128_u64[1] )
  {
    v110 = (unsigned int)v123;
    sub_2236E10(&ptr, v129, (unsigned int)v123, 1);
    v51 = v128.m128_u64[0];
    v50 = v110;
  }
  v52 = ptr;
  if ( (char *)ptr + v51 != (char *)ptr + v50 )
  {
    v109 = v50;
    memset((char *)ptr + v51, 0, v50 - v51);
    v50 = v109;
  }
  v128.m128_u64[0] = v50;
LABEL_55:
  v53 = v140;
  if ( !v52 )
    goto LABEL_111;
  if ( v140 )
  {
    if ( *(_BYTE *)(v118 + 16) == 25 )
    {
      v55 = 0;
      v54 = 0;
    }
    else
    {
      v54 = *(unsigned __int16 *)(v118 + 22);
      v55 = *(unsigned __int16 *)(v118 + 22);
    }
    if ( (_DWORD)v123 == v54 )
    {
      if ( v140 == &v140[v55] )
        goto LABEL_65;
      if ( *v52 == *v140 )
      {
        v56 = 1;
        while ( v56 != v55 )
        {
          v57 = v140[v56++];
          if ( v57 != v52[v56 - 1] )
            goto LABEL_66;
        }
LABEL_65:
        v49 = v42;
      }
    }
  }
LABEL_66:
  v140 = v52;
LABEL_67:
  memset(v145, 0, 0x88u);
  if ( !v144 )
    goto LABEL_68;
  v93 = 0;
  v94 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8CF0);
  LOBYTE(v145[16]) = 1;
  *(__m128 *)&v145[1] = v94;
  v145[0] = &v145[3];
  v145[8] = &v145[10];
  v145[9] = (void *)0x600000000LL;
  v114 = *a1;
  sub_18C79E0(*a1, 4, 4);
  v111 = v142;
  if ( !v142 )
    goto LABEL_153;
  v116 = v12;
  while ( 2 )
  {
    if ( v144 )
    {
      v97 = (unsigned __int16 *)v143[v93];
      v121.m128i_i8[0] = v141[v93];
      v121.m128i_i64[1] = (__int64)v97;
      v120 = _mm_load_si128(&v121);
      if ( v97 )
      {
        v98 = sub_190CCA0(a1, v97, *(double *)v94.m128_u64, a7);
        if ( v98 == 1
          || (v99 = *a1,
              v100 = v98 & 0xFFFFFFFFFFFFFFFELL,
              v101 = sub_F5ED10(v121.m128i_i8),
              v103 = sub_1E72620(v99, v100, v101, v102),
              !HIBYTE(v103)) )
        {
          v19 = 0;
          sub_190D5E0(v114, v94);
          goto LABEL_114;
        }
        switch ( (_BYTE)v103 )
        {
          case 2:
LABEL_140:
            v120.m128i_i64[1] = 0;
            break;
          case 3:
            v120.m128i_i64[1] = v100;
            break;
          case 1:
            v120.m128i_i8[0] = sub_F5ED00((unsigned __int8 *)&v121);
            goto LABEL_140;
        }
      }
    }
    else
    {
      v121.m128i_i8[0] = v141[v93];
      v121.m128i_i64[1] = 0;
      a7 = (__m128)_mm_load_si128(&v121);
      v120 = (__m128i)a7;
    }
    v95 = *a1;
    v96 = sub_F6CCB0(&v118, v94);
    v131 = v145[0];
    v133[1] = LODWORD(v145[9]);
    v132 = (__int64)v145[1];
    v133[0] = v145[8];
    if ( !(unsigned __int8)sub_19EE280(v95, &v131, &v120, v96) )
    {
      v131 = v133;
      v132 = 0x100000000LL;
      sub_F5EEE0((__int64 *)v145, &v120, (__int64)&v131);
      if ( v131 != v133 )
        free(v131);
    }
    if ( v111 != (void *)++v93 )
      continue;
    break;
  }
  v12 = v116;
LABEL_153:
  v49 = 1;
  v141 = v145[0];
  v142 = v145[1];
  v143 = v145[8];
  v144 = LODWORD(v145[9]);
  sub_190D5E0(v114, v94);
LABEL_68:
  v58 = v118;
  if ( *(_QWORD *)(v12 + 24) == v108 )
  {
    v59 = *(unsigned __int16 *)(v12 + 22);
    v60 = 8 * v59;
    if ( v59 == (unsigned int)v123 )
    {
      v61 = (_QWORD *)(v12 + 48);
      v62 = (_QWORD *)(v12 + 48 + v60);
      if ( (_QWORD *)(v12 + 48) == v62 )
        goto LABEL_75;
      if ( *(_QWORD *)(v12 + 48) == *(_QWORD *)v122 )
      {
        v63 = v122;
        while ( 1 )
        {
          ++v61;
          ++v63;
          if ( v62 == v61 )
            break;
          if ( *v61 != *v63 )
            goto LABEL_76;
        }
LABEL_75:
        v19 = v118;
        if ( !v49 )
        {
LABEL_78:
          v64 = *(_BYTE *)(v58 + 16);
          if ( v64 == 26 )
          {
            v65 = ((*(_BYTE *)(v58 + 19) >> 1) & 0xF) == 0 ? 15 : 23;
          }
          else
          {
            v66 = 16;
            if ( v64 == 25 )
            {
LABEL_81:
              v67 = sub_1EA6140(a2, v19, v66, 8);
              v69 = v119;
              *v68 = *v119;
              v68[1] = v69[1];
              v68[2] = v69[2];
              if ( *(_BYTE *)(v118 + 16) == 26 && (*(_BYTE *)(v118 + 19) & 0x1E) != 0 )
              {
                v70 = v69[2 * *(unsigned __int16 *)(v118 + 22) + 4];
                v71 = v69[2 * *(unsigned __int16 *)(v118 + 22) + 5];
              }
              else
              {
                v71 = 0;
                v70 = 0;
              }
              if ( *(_BYTE *)(v67 + 16) == 26 && (*(_BYTE *)(v67 + 19) & 0x1E) != 0 )
              {
                v72 = &v68[2 * *(unsigned __int16 *)(v67 + 22) + 4];
                *v72 = v70;
                v72[1] = v71;
              }
              v68[3] = v69[3];
              if ( *(_BYTE *)(v67 + 16) != 25 )
              {
                v73 = *(unsigned __int16 *)(v67 + 22);
                if ( v73 )
                {
                  v74 = 8LL * (unsigned int)(v73 - 1) + 8;
                  v75 = 0;
                  do
                  {
                    *(_QWORD *)&v68[v75 / 4 + 4] = *(_QWORD *)((char *)v125[0] + v75);
                    v75 += 8LL;
                  }
                  while ( v74 != v75 );
                }
              }
              goto LABEL_114;
            }
            v65 = 15;
          }
          v66 = 8 * ((v65 + 8 * (unsigned int)*(unsigned __int16 *)(v58 + 22)) >> 3) + 8;
          goto LABEL_81;
        }
      }
    }
  }
LABEL_76:
  v19 = sub_1E6A200(*a1, v108, (_DWORD)v122, v123, 0, 0, (__int64)&v134);
  if ( (v19 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v58 = v19;
    goto LABEL_78;
  }
  v19 = 0;
LABEL_114:
  if ( LOBYTE(v145[16]) )
  {
    if ( v145[8] != &v145[10] )
      free(v145[8]);
    if ( v145[0] != &v145[3] )
      free(v145[0]);
  }
LABEL_8:
  if ( ptr != v129 )
    free(ptr);
  if ( v125[0] != v126 )
    free(v125[0]);
  if ( v122 != v124 )
    free(v122);
  return v19;
}
