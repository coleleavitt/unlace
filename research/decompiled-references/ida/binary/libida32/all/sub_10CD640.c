unsigned __int8 *__fastcall sub_10CD640(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        char *a4,
        _BYTE *a5,
        __int64 a6,
        __m128i a7,
        char a8,
        char a9,
        _BYTE *a10,
        __int64 a11)
{
  __int64 v14; // rdi
  size_t v15; // rsi
  const char *v16; // r15
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r13
  _BYTE *v20; // r14
  __int64 v21; // rax
  size_t v22; // rdx
  const char **v23; // rax
  __int64 v24; // rdi
  __int64 v25; // r8
  unsigned int v26; // r9d
  _BYTE *v27; // rcx
  const void *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 *v33; // r13
  int v35; // eax
  __int64 v36; // rax
  size_t v37; // rsi
  void *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  char v41; // r14
  size_t v42; // r9
  const char *v43; // rax
  void *v44; // rdi
  __int64 v45; // rax
  char *v46; // rdx
  size_t v47; // rax
  int v48; // eax
  __int64 v49; // rdi
  int v50; // eax
  char v51; // al
  __int64 v52; // rdx
  size_t v53; // rcx
  unsigned __int64 v54; // rax
  char *v55; // rdx
  __int64 v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // eax
  size_t v62; // rax
  bool v63; // zf
  unsigned __int8 *v64; // rdx
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  void *v71; // rdi
  __int64 v72; // r13
  size_t v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdi
  _BYTE *v76; // r13
  __int64 v77; // rdx
  __int64 v78; // r15
  __int64 v79; // r14
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // r13
  size_t v86; // rax
  _BYTE *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // r9
  size_t v95; // rsi
  __int64 v96; // rax
  __int64 v97; // r15
  __int64 v98; // rdx
  __int64 v99; // r13
  _BYTE *v100; // r14
  size_t v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  const char **v104; // rax
  size_t v105; // rdx
  const char *v106; // r13
  __int64 v107; // rdi
  unsigned int v108; // r9d
  size_t v109; // rax
  _BYTE *v110; // rax
  signed __int64 v111; // rdx
  char v112; // al
  size_t v113; // rsi
  void *v114; // rax
  __int64 v115; // rdx
  const char *v116; // rax
  size_t v117; // r9
  __int64 v118; // r12
  __int64 v119; // rax
  __int64 v120; // r13
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  size_t v126; // rdx
  __int64 v127; // rax
  char *v128; // rdx
  const char **v129; // rax
  char *v130; // rsi
  unsigned __int8 *v131; // rax
  unsigned __int8 *v132; // rdx
  __int64 v133; // rax
  const char **v134; // rax
  const char *v135; // rax
  char *v136; // rdx
  char *v137; // rsi
  char *v138; // r8
  __int64 v139; // r13
  __int64 v140; // rax
  char *v141; // rsi
  size_t v142; // rax
  char *v143; // r15
  size_t v144; // rax
  size_t v145; // rax
  size_t v146; // rdx
  __int64 v147; // r13
  size_t v148; // rax
  char v149; // al
  size_t v150; // rax
  size_t v151; // rax
  size_t v152; // rax
  size_t v153; // rax
  __int64 v154; // rax
  size_t v155; // rdx
  const char *v156; // rax
  size_t v157; // r9
  __int64 v158; // r12
  __int64 v159; // rdi
  size_t v160; // rax
  __int64 v161; // r13
  size_t v162; // rax
  __int64 v163; // rax
  char *v164; // rsi
  size_t v165; // rax
  size_t v166; // rax
  _QWORD *v167; // [rsp+0h] [rbp-3F8h]
  char *s; // [rsp+10h] [rbp-3E8h]
  __int64 v170; // [rsp+28h] [rbp-3D0h]
  size_t n; // [rsp+30h] [rbp-3C8h]
  _BYTE *s2; // [rsp+38h] [rbp-3C0h]
  char *v173; // [rsp+48h] [rbp-3B0h]
  char *v174; // [rsp+48h] [rbp-3B0h]
  char v175; // [rsp+5Fh] [rbp-399h] BYREF
  _QWORD v176[4]; // [rsp+60h] [rbp-398h] BYREF
  void *v177; // [rsp+80h] [rbp-378h] BYREF
  __int64 v178; // [rsp+88h] [rbp-370h]
  _BYTE v179[16]; // [rsp+90h] [rbp-368h] BYREF
  _BYTE *v180; // [rsp+A0h] [rbp-358h] BYREF
  size_t v181; // [rsp+A8h] [rbp-350h]
  __int16 v182; // [rsp+C0h] [rbp-338h]
  unsigned __int8 *v183; // [rsp+D0h] [rbp-328h] BYREF
  unsigned __int8 *v184; // [rsp+D8h] [rbp-320h]
  __int16 v185; // [rsp+F0h] [rbp-308h]
  void *v186[2]; // [rsp+100h] [rbp-2F8h] BYREF
  __int64 v187; // [rsp+110h] [rbp-2E8h] BYREF
  __int16 v188; // [rsp+120h] [rbp-2D8h]
  void *v189; // [rsp+130h] [rbp-2C8h] BYREF
  __int64 v190; // [rsp+138h] [rbp-2C0h]
  _BYTE v191[16]; // [rsp+140h] [rbp-2B8h] BYREF
  __int16 v192; // [rsp+150h] [rbp-2A8h]
  void *v193; // [rsp+160h] [rbp-298h] BYREF
  __m128i si128; // [rsp+168h] [rbp-290h]
  _BYTE v195[136]; // [rsp+178h] [rbp-280h] BYREF
  void *v196; // [rsp+200h] [rbp-1F8h] BYREF
  __m128i v197; // [rsp+208h] [rbp-1F0h] BYREF
  __int64 v198; // [rsp+218h] [rbp-1E0h] BYREF
  __int16 v199; // [rsp+220h] [rbp-1D8h]
  void *ptr; // [rsp+2A0h] [rbp-158h] BYREF
  __m128i v201; // [rsp+2A8h] [rbp-150h] BYREF
  __int64 v202; // [rsp+2B8h] [rbp-140h] BYREF
  __int16 v203; // [rsp+2C0h] [rbp-138h]

  v177 = v179;
  if ( a5 )
  {
    sub_10B5070(&v177, a5, (__int64)&a5[a6]);
  }
  else
  {
    v178 = 0;
    v179[0] = 0;
  }
  v167 = v176;
  sub_220FAE0(v176);
  v14 = a2[10];
  v176[0] = &off_2BC1238;
  v176[2] = "Computing output path";
  if ( a8 )
  {
    if ( (unsigned int)(*(_DWORD *)(a3 + 8) - 13) > 2 )
    {
      v45 = sub_10B8FF0(v14, 0xC2Cu);
      if ( v45 )
      {
        v33 = **(unsigned __int8 ***)(v45 + 48);
        goto LABEL_13;
      }
      v14 = a2[10];
    }
    if ( sub_10B8FF0(v14, 0xC6Du) )
      goto LABEL_6;
    if ( (*(_BYTE *)(a1 + 920) & 2) == 0 && sub_10B46E0(a3) )
      goto LABEL_46;
  }
  else if ( sub_10B8FF0(v14, 0xC6Du) )
  {
LABEL_6:
    v15 = 0;
    if ( a4 )
      v15 = j__strlen(a4);
    v16 = nullptr;
    v17 = sub_2266D20(a4, v15, 0);
    v19 = v18;
    v20 = (_BYTE *)v17;
    v21 = sub_10B8FF0(a2[10], 0x377u);
    v22 = 0;
    if ( v21 )
    {
      v23 = *(const char ***)(v21 + 48);
      v22 = 0;
      v16 = *v23;
      if ( *v23 )
        v22 = j__strlen(*v23);
    }
    v24 = a2[10];
    v25 = v19;
    v26 = 1;
    v27 = v20;
    v28 = v16;
LABEL_12:
    v33 = (unsigned __int8 *)sub_10BACA0(v24, v28, v22, v27, v25, v26);
LABEL_13:
    ptr = (void *)a3;
    *sub_10CD3D0((__int64)(a2 + 49), (__int64 *)&ptr, v29, v30, v31, v32) = (__int64)v33;
    goto LABEL_14;
  }
  v35 = *(_DWORD *)(a3 + 12);
  if ( v35 == 51 )
  {
    if ( sub_10B8FF0(a2[10], 0xAE3u) )
    {
LABEL_46:
      v33 = (unsigned __int8 *)"-";
      goto LABEL_14;
    }
    v35 = *(_DWORD *)(a3 + 12);
  }
  if ( v35 == 38 )
  {
    if ( sub_10B8FF0(a2[10], 0x226u) )
    {
      v85 = a2[10];
      v86 = j__strlen(&byte_22CD811);
      v87 = (_BYTE *)sub_2193E80(v85, 550, &byte_22CD811, v86);
      v89 = a2[10];
      if ( v87 )
      {
        v196 = &v197.m128i_u64[1];
        sub_10B5070(&v196, v87, (__int64)&v87[v88]);
      }
      else
      {
        v197.m128i_i8[8] = 0;
        v196 = &v197.m128i_u64[1];
        v197.m128i_i64[0] = 0;
      }
      v203 = 260;
      ptr = &v196;
      v90 = sub_10B6980(v89, (__int64)&ptr);
      v193 = (void *)a3;
      v33 = (unsigned __int8 *)v90;
      *sub_10CD3D0((__int64)(a2 + 49), (__int64 *)&v193, v91, v92, v93, v94) = v90;
      v44 = v196;
      if ( v196 == &v197.m128i_u64[1] )
        goto LABEL_14;
      goto LABEL_119;
    }
    v35 = *(_DWORD *)(a3 + 12);
  }
  if ( v35 == 58 )
  {
    if ( sub_10B8FF0(a2[10], 0x62Bu) )
    {
LABEL_108:
      v72 = a2[10];
      v73 = j__strlen(&byte_22CD811);
      v74 = sub_2193E80(v72, 1579, &byte_22CD811, v73);
      v75 = a2[1];
      v76 = (_BYTE *)v74;
      v78 = v77;
      if ( *(_DWORD *)(v75 + 48) == 11 )
      {
        v112 = sub_122AC50(v75, a2[10], *(unsigned int *)(a3 + 8));
        if ( !v78 || !v112 )
        {
          v113 = 0;
          if ( a4 )
            v113 = j__strlen(a4);
          v114 = (void *)sub_2266D20(a4, v113, 0);
          v197.m128i_i64[0] = v115;
          v196 = v114;
          LOBYTE(v193) = 46;
          sub_103B480(&ptr, (__int64 *)&v196, (__int64)&v193, 1);
          v116 = (const char *)sub_12A8C00(*(unsigned int *)(a3 + 12), 1);
          v117 = 0;
          v118 = (__int64)v116;
          if ( v116 )
            v117 = j__strlen(v116);
          v33 = (unsigned __int8 *)sub_10B9540(
                                     a1,
                                     (__int64)a2,
                                     (unsigned __int8 *)ptr,
                                     (unsigned __int8 *)v201.m128i_i64[0],
                                     v118,
                                     v117,
                                     0,
                                     a7,
                                     0);
          goto LABEL_14;
        }
      }
      v79 = a2[10];
      if ( v76 )
      {
        v196 = &v197.m128i_u64[1];
        sub_10B5070(&v196, v76, (__int64)&v76[v78]);
      }
      else
      {
        v197.m128i_i8[8] = 0;
        v196 = &v197.m128i_u64[1];
        v197.m128i_i64[0] = 0;
      }
      v203 = 260;
      ptr = &v196;
      v80 = sub_10B6980(v79, (__int64)&ptr);
      v193 = (void *)a3;
      v33 = (unsigned __int8 *)v80;
      *sub_10CD3D0((__int64)(a2 + 49), (__int64 *)&v193, v81, v82, v83, v84) = v80;
      v44 = v196;
      if ( v196 == &v197.m128i_u64[1] )
        goto LABEL_14;
LABEL_119:
      operator delete(v44);
      goto LABEL_14;
    }
    v35 = *(_DWORD *)(a3 + 12);
  }
  if ( v35 == 66 )
    goto LABEL_108;
  if ( v35 == 38 )
  {
    if ( sub_10B8FF0(a2[10], 0x1C7u) || sub_10B8FF0(a2[10], 0x1C8u) )
    {
      v95 = 0;
      if ( a4 )
        v95 = j__strlen(a4);
      v96 = sub_2266D20(a4, v95, 0);
      v97 = a2[10];
      v99 = v98;
      v100 = (_BYTE *)v96;
      v101 = j__strlen(&byte_22CD811);
      v102 = sub_2193E80(v97, 456, &byte_22CD811, v101);
      v25 = v99;
      v24 = a2[10];
      v27 = v100;
      v26 = *(_DWORD *)(a3 + 12);
      v28 = (const void *)v102;
      goto LABEL_12;
    }
    v35 = *(_DWORD *)(a3 + 12);
  }
  if ( v35 == 65 && sub_10B8FF0(a2[10], 0x150u) && sub_10B8FF0(a2[10], 0xC2Cu) )
  {
    sub_FA3370((__int64)&ptr, *(_QWORD *)a1, 0, 480);
    v170 = a2[10];
    v109 = j__strlen(&byte_22CD811);
    v110 = (_BYTE *)sub_2193E80(v170, 3116, &byte_22CD811, v109);
    sub_AC84E0((unsigned __int8 **)&ptr, v110, v111);
    sub_AC6300((__int64)&ptr);
  }
  if ( a8 && *(_DWORD *)(a3 + 12) == 38 && *(_DWORD *)(a1 + 16) == 5 )
    goto LABEL_46;
  if ( sub_10B8FF0(a2[10], 0x3B1u) || (v36 = sub_10B8FF0(a2[10], 0x3B0u)) != 0 )
  {
    if ( a9 )
    {
      sub_FA3370((__int64)&ptr, *(_QWORD *)a1, 0, 424);
      sub_AC6300((__int64)&ptr);
      LOBYTE(v36) = a9;
    }
    else
    {
      LOBYTE(v36) = 1;
    }
  }
  if ( !a8 )
  {
    if ( *(_DWORD *)(a3 + 8) == 4 && *(_DWORD *)(a3 + 12) == 51 && (_BYTE)v36 )
    {
      sub_1171CE0(&ptr, a2[10], a4);
      v119 = v201.m128i_i64[0];
      v120 = a2[10];
      if ( (unsigned __int64)(v201.m128i_i64[0] + 1) > v201.m128i_i64[1] )
      {
        sub_22130D0(&ptr, &v202, v201.m128i_i64[0] + 1, 1);
        v119 = v201.m128i_i64[0];
      }
      *((_BYTE *)ptr + v119) = 0;
      v199 = 257;
      if ( *(_BYTE *)ptr )
      {
        v196 = ptr;
        LOBYTE(v199) = 3;
      }
      v121 = sub_10B6980(v120, (__int64)&v196);
      v193 = (void *)a3;
      v33 = (unsigned __int8 *)v121;
      *sub_10CD3D0((__int64)(a2 + 49), (__int64 *)&v193, v122, v123, v124, v125) = v121;
      v71 = ptr;
      if ( ptr == &v202 )
        goto LABEL_14;
LABEL_106:
      free(v71);
      goto LABEL_14;
    }
    if ( !*(_DWORD *)(a1 + 20) && !sub_10B8FF0(a2[10], 0x62Cu) )
      goto LABEL_34;
  }
  if ( (*(_BYTE *)(a1 + 920) & 2) != 0 )
  {
LABEL_34:
    v37 = 0;
    if ( a4 )
      v37 = j__strlen(a4);
    v38 = (void *)sub_2266D20(a4, v37, 0);
    v190 = v39;
    v189 = v38;
    LOBYTE(ptr) = 46;
    sub_103B480(&v193, (__int64 *)&v189, (__int64)&ptr, 1);
    v40 = sub_12A8C00(*(unsigned int *)(a3 + 12), ((*(_DWORD *)(a1 + 16) - 3) & 0xFFFFFFFD) == 0);
    v196 = &v197.m128i_u64[1];
    s = (char *)v40;
    sub_10B4F90(&v196, *(_BYTE **)(*a2 + 944), *(_QWORD *)(*a2 + 944) + *(_QWORD *)(*a2 + 952));
    sub_2296190(&ptr, &v196);
    if ( v196 != &v197.m128i_u64[1] )
      operator delete(v196);
    v41 = (char)v177;
    v42 = 0;
    if ( s )
      v42 = j__strlen(s);
    v43 = sub_10B9540(
            a1,
            (__int64)a2,
            (unsigned __int8 *)v193,
            (unsigned __int8 *)si128.m128i_i64[0],
            (__int64)s,
            v42,
            a9,
            a7,
            v41);
    v44 = ptr;
    v33 = (unsigned __int8 *)v43;
    if ( ptr == &v201.m128i_u64[1] )
      goto LABEL_14;
    goto LABEL_119;
  }
  v46 = nullptr;
  if ( a4 )
    v46 = &a4[j__strlen(a4)];
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v193 = v195;
  sub_9FC110(&v193, a4, v46);
  v47 = j__strlen(&byte_22CD811);
  v196 = &v198;
  v197 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  sub_9FC110(&v196, &byte_22CD811, (_BYTE *)&byte_22CD811 + v47);
  v48 = *(_DWORD *)(a3 + 8);
  if ( v48 != 13 )
    goto LABEL_51;
  if ( !sub_10B8FF0(a2[10], 0x12Cu) )
  {
    v48 = *(_DWORD *)(a3 + 8);
LABEL_51:
    n = si128.m128i_i64[0];
    s2 = v193;
    if ( (unsigned int)(v48 - 13) > 2 )
    {
      s2 = (_BYTE *)sub_2266D20(v193, si128.m128i_i64[0], 0);
      n = v126;
    }
    goto LABEL_53;
  }
  v127 = sub_10B8FF0(a2[10], 0x12Cu);
  v128 = nullptr;
  v129 = *(const char ***)(v127 + 48);
  v130 = (char *)*v129;
  if ( *v129 )
  {
    v130 = (char *)*v129;
    v128 = &v130[j__strlen(*v129)];
  }
  sub_9FC110(&v196, v130, v128);
  v203 = 257;
  v192 = 257;
  v188 = 257;
  v131 = (unsigned __int8 *)sub_2266D20(v193, si128.m128i_i64[0], 0);
  v185 = 261;
  v184 = v132;
  v183 = v131;
  sub_2266050(&v196, 1, &v183, v186, &v189, &ptr, v176);
  n = v197.m128i_i64[0];
  s2 = v196;
LABEL_53:
  v49 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v49 == 58 || (_DWORD)v49 == 46 )
  {
    if ( sub_10BA920(a2[10], 0x62Cu, 0xC2Du) )
    {
      v103 = sub_10BA920(a2[10], 0x62Cu, 0xC2Du);
LABEL_134:
      v104 = *(const char ***)(v103 + 48);
      v105 = 0;
      v106 = *v104;
      if ( *v104 )
        v105 = j__strlen(*v104);
      v107 = a2[10];
      v108 = 58;
LABEL_137:
      v33 = (unsigned __int8 *)sub_10BACA0(v107, v106, v105, s2, n, v108);
      goto LABEL_80;
    }
    v49 = *(unsigned int *)(a3 + 12);
  }
  if ( (_DWORD)v49 == 60 )
  {
    if ( sub_10BA920(a2[10], 0x2B5u, 0xC2Du) )
    {
      v133 = sub_10BA920(a2[10], 0x2B5u, 0xC2Du);
      v105 = 0;
      v134 = *(const char ***)(v133 + 48);
      v106 = *v134;
      if ( *v134 )
        v105 = j__strlen(*v134);
      v107 = a2[10];
      v108 = 60;
      goto LABEL_137;
    }
    v49 = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)v49 == 60 )
    {
      if ( *(_DWORD *)(a1 + 16) == 3 )
      {
        v148 = j__strlen(&byte_22CD811);
        v33 = (unsigned __int8 *)sub_10BACA0(a2[10], &byte_22CD811, v148, s2, n, 0x3Cu);
        goto LABEL_80;
      }
      v135 = sub_10B7720(a1);
      v136 = nullptr;
      v137 = (char *)v135;
      if ( v135 )
      {
        v137 = (char *)v135;
        v136 = (char *)&v135[j__strlen(v135)];
      }
      v201 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      ptr = &v202;
      sub_9FC110(&ptr, v137, v136);
      v138 = &a10[a11];
      if ( *(_DWORD *)(a3 + 64) == 8 && (v149 = sub_2193B10(a2[10], 825, 1164, 0), v138 = &a10[a11], !v149)
        || *(_DWORD *)(a3 + 8) == 18 )
      {
        v174 = v138;
        v201.m128i_i64[0] = 0;
        sub_9FC110(&ptr, s2, &s2[n]);
        v192 = 257;
        sub_22669F0(&ptr, &v189, 0);
        sub_9FC110(&ptr, a10, v174);
        if ( a9 && v178 )
        {
          v166 = j__strlen("-");
          sub_9FC110(&ptr, "-", &asc_2313975[v166 + 2]);
          sub_9FC110(&ptr, v177, (_BYTE *)v177 + v178);
        }
        v150 = j__strlen(".out");
        sub_9FC110(&ptr, ".out", &aAOut[v150 + 1]);
      }
      else
      {
        sub_9FC110(&ptr, a10, v138);
        if ( a9 && v178 )
        {
          v160 = j__strlen("-");
          sub_9FC110(&ptr, "-", &asc_2313975[v160 + 2]);
          sub_9FC110(&ptr, v177, (_BYTE *)v177 + v178);
        }
      }
      v56 = a2[10];
      sub_FA4310(&ptr, 0);
      --v201.m128i_i64[0];
      v192 = 257;
      if ( *(_BYTE *)ptr )
      {
        v189 = ptr;
        LOBYTE(v192) = 3;
      }
      goto LABEL_78;
    }
  }
  if ( (_DWORD)v49 != 57 )
  {
    if ( (_DWORD)v49 != 53 && (_DWORD)v49 != 48 )
    {
      v50 = *(_DWORD *)(a1 + 16);
      goto LABEL_60;
    }
    if ( sub_10B8FF0(a2[10], 0xC2Du) )
    {
      v103 = sub_10B8FF0(a2[10], 0xC2Du);
      goto LABEL_134;
    }
    v49 = *(unsigned int *)(a3 + 12);
    v50 = *(_DWORD *)(a1 + 16);
LABEL_60:
    v173 = (char *)sub_12A8C00(v49, ((v50 - 3) & 0xFFFFFFFD) == 0);
    v51 = sub_12A8E20(*(unsigned int *)(a3 + 12));
    v52 = n;
    if ( v51 )
      goto LABEL_69;
    v53 = n;
    if ( n )
    {
      v54 = n - 1;
      if ( s2[n - 1] == 46 )
      {
LABEL_214:
        if ( v54 > v53 )
          v54 = v53;
        v52 = v54;
        goto LABEL_69;
      }
      if ( n == 1 )
      {
        v52 = 1;
LABEL_69:
        ptr = &v202;
        v201 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
        sub_9FC110(&ptr, s2, &s2[v52]);
        sub_9FC110(&ptr, a10, &a10[a11]);
        if ( a9 && v178 )
        {
          v151 = j__strlen("-");
          sub_9FC110(&ptr, "-", &asc_2313975[v151 + 2]);
          sub_9FC110(&ptr, v177, (_BYTE *)v177 + v178);
        }
        if ( !a8 && *(_DWORD *)(a3 + 12) == 44 )
        {
          if ( sub_10B8FF0(a2[10], 0x159u)
            || *(_DWORD *)(a3 + 8) == 7
            && ((v161 = *(_QWORD *)(a3 + 80), *(_DWORD *)(a3 + 64) == 8)
             && (unsigned __int8)sub_2193B10(a2[10], 825, 1164, 0)
             || *(_DWORD *)(a3 + 64) == 4 && v161 && (unsigned int)(*(_DWORD *)(v161 + 48) - 25) <= 1) )
          {
            v152 = j__strlen(".tmp");
            sub_9FC110(&ptr, ".tmp", &aIda12345Tmp[v152 + 8]);
          }
        }
        sub_FA4310(&ptr, 46);
        v55 = nullptr;
        if ( v173 )
          v55 = &v173[j__strlen(v173)];
        sub_9FC110(&ptr, v173, v55);
        v56 = a2[10];
        sub_FA4310(&ptr, 0);
        --v201.m128i_i64[0];
        v192 = 257;
        if ( *(_BYTE *)ptr )
        {
          v189 = ptr;
          LOBYTE(v192) = 3;
        }
LABEL_78:
        v33 = (unsigned __int8 *)sub_10B6980(v56, (__int64)&v189);
        if ( ptr != &v202 )
          free(ptr);
        goto LABEL_80;
      }
      v54 = n - 2;
      if ( s2[n - 2] == 46 )
      {
LABEL_213:
        v53 = n;
        goto LABEL_214;
      }
      while ( v54 )
      {
        if ( s2[--v54] == 46 )
          goto LABEL_213;
      }
    }
    v52 = n;
    goto LABEL_69;
  }
  v50 = *(_DWORD *)(a1 + 16);
  if ( v50 != 3 )
    goto LABEL_60;
  v139 = a2[10];
  ptr = &v202;
  v201 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v140 = sub_10B8FF0(v139, 0x688u);
  if ( v140 )
  {
    v141 = **(char ***)(v140 + 48);
    v142 = 0;
    if ( v141 )
      v142 = j__strlen(v141);
    v201.m128i_i64[0] = 0;
    sub_9FC110(&ptr, v141, &v141[v142]);
    v192 = 261;
    v189 = ptr;
    v190 = v201.m128i_i64[0];
    if ( !(unsigned __int8)sub_22671F0(&v189, 0) )
    {
      v162 = j__strlen(".pch");
      sub_9FC110(&ptr, ".pch", &aPch[v162]);
    }
  }
  else
  {
    v163 = sub_10B8FF0(a2[10], 0xDB8u);
    if ( v163 )
    {
      v164 = **(char ***)(v163 + 48);
      v165 = 0;
      if ( v164 )
        v165 = j__strlen(v164);
      v201.m128i_i64[0] = 0;
      sub_9FC110(&ptr, v164, &v164[v165]);
    }
    if ( !v201.m128i_i64[0] )
      sub_9FC110(&ptr, s2, &s2[n]);
    v192 = 259;
    v189 = (void *)".pch";
    sub_22669F0(&ptr, &v189, 0);
  }
  v189 = v191;
  sub_10B5070(&v189, ptr, (__int64)ptr + v201.m128i_i64[0]);
  if ( ptr != &v202 )
    free(ptr);
  v203 = 260;
  ptr = &v189;
  v33 = (unsigned __int8 *)sub_10B6980(v139, (__int64)&ptr);
  if ( v189 != v191 )
    operator delete(v189);
LABEL_80:
  if ( a8 )
    goto LABEL_94;
  v61 = *(_DWORD *)(a1 + 20);
  if ( v61 == 2 )
  {
    if ( sub_10B8FF0(a2[10], 0xC2Cu) )
    {
      if ( *(_DWORD *)(a3 + 12) == 57 )
      {
        if ( !*(_DWORD *)(a1 + 20) )
        {
LABEL_95:
          if ( *(_DWORD *)(a1 + 16) != 3 )
          {
            sub_22668B0(&v193, 0);
            if ( si128.m128i_i64[0] )
            {
              v203 = 257;
              v192 = 257;
              v188 = 257;
              v185 = 257;
              if ( *v33 )
              {
                v183 = v33;
                LOBYTE(v185) = 3;
              }
              sub_2266670(&v193, &v183, v186, &v189, &ptr);
            }
            else
            {
              v64 = nullptr;
              if ( v33 )
                v64 = &v33[j__strlen((const char *)v33)];
              sub_9FC110(&v193, v33, v64);
            }
            v65 = a2[10];
            sub_FA4310(&v193, 0);
            --si128.m128i_i64[0];
            v203 = 257;
            if ( *(_BYTE *)v193 )
            {
              ptr = v193;
              LOBYTE(v203) = 3;
            }
            v66 = sub_10B6980(v65, (__int64)&ptr);
            v189 = (void *)a3;
            v33 = (unsigned __int8 *)v66;
            *sub_10CD3D0((__int64)(a2 + 49), (__int64 *)&v189, v67, v68, v69, v70) = v66;
            goto LABEL_103;
          }
LABEL_125:
          ptr = (void *)a3;
          *sub_10CD3D0((__int64)(a2 + 49), (__int64 *)&ptr, v57, v58, v59, v60) = (__int64)v33;
          goto LABEL_103;
        }
        goto LABEL_83;
      }
      v143 = **(char ***)(sub_10B8FF0(a2[10], 0xC2Cu) + 48);
      v144 = 0;
      if ( v143 )
        v144 = j__strlen(v143);
      v201 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      ptr = &v202;
      sub_9FC110(&ptr, v143, &v143[v144]);
      sub_22668B0(&ptr, 0);
      v145 = 0;
      if ( v33 )
        v145 = j__strlen((const char *)v33);
      v180 = (_BYTE *)sub_2266D20(v33, v145, 0);
      v192 = 257;
      v188 = 257;
      v185 = 257;
      v182 = 261;
      v181 = v146;
      sub_2266670(&ptr, &v180, &v183, v186, &v189);
      v147 = a2[10];
      sub_FA4310(&ptr, 0);
      --v201.m128i_i64[0];
      v192 = 257;
      if ( *(_BYTE *)ptr )
      {
        v189 = ptr;
        LOBYTE(v192) = 3;
      }
      v33 = (unsigned __int8 *)sub_10B6980(v147, (__int64)&v189);
      if ( ptr != &v202 )
        free(ptr);
    }
    v61 = *(_DWORD *)(a1 + 20);
  }
  if ( !v61 )
    goto LABEL_94;
LABEL_83:
  if ( v33 )
  {
    v62 = j__strlen((const char *)v33);
    v58 = n;
    if ( v62 != n || n && memcmp(v33, s2, n) )
      goto LABEL_94;
  }
  else if ( n )
  {
    goto LABEL_94;
  }
  v175 = 0;
  v201 = _mm_load_si128((const __m128i *)&xmmword_2384DA0);
  ptr = &v202;
  sub_2269DC0((std::_V2 *)&ptr);
  v188 = 257;
  v185 = 257;
  v182 = 261;
  v192 = 257;
  v180 = s2;
  v181 = n;
  sub_2266670(&ptr, &v180, &v183, v186, &v189);
  sub_FA4310(&ptr, 0);
  --v201.m128i_i64[0];
  v192 = 257;
  if ( *(_BYTE *)ptr )
  {
    v189 = ptr;
    LOBYTE(v192) = 3;
  }
  v63 = *a4 == 0;
  v188 = 257;
  if ( !v63 )
  {
    v186[0] = a4;
    LOBYTE(v188) = 3;
  }
  sub_22685A0(v186, &v189, &v175);
  if ( !v175 )
  {
    if ( ptr != &v202 )
      free(ptr);
LABEL_94:
    if ( *(_DWORD *)(a3 + 12) != 57 )
      goto LABEL_125;
    goto LABEL_95;
  }
  v153 = j__strlen(a4);
  v154 = sub_2266D20(a4, v153, 0);
  v181 = v155;
  v180 = (_BYTE *)v154;
  LOBYTE(v189) = 46;
  sub_103B480(&v183, (__int64 *)&v180, (__int64)&v189, 1);
  v156 = (const char *)sub_12A8C00(*(unsigned int *)(a3 + 12), ((*(_DWORD *)(a1 + 16) - 3) & 0xFFFFFFFD) == 0);
  v157 = 0;
  v158 = (__int64)v156;
  if ( v156 )
    v157 = j__strlen(v156);
  sub_10B77A0(v186, (__int64 *)a1, v183, v184, v158, v157);
  v159 = a2[10];
  v192 = 260;
  v189 = v186;
  v33 = (unsigned __int8 *)sub_10B6980(v159, (__int64)&v189);
  sub_10B8890((__int64)(a2 + 31), (__int64)v33);
  if ( v186[0] != &v187 )
    operator delete(v186[0]);
  if ( ptr != &v202 )
    free(ptr);
LABEL_103:
  if ( v196 != &v198 )
    free(v196);
  v71 = v193;
  if ( v193 != v195 )
    goto LABEL_106;
LABEL_14:
  v176[0] = &off_2BC1238;
  sub_220FB60(v167);
  if ( v177 != v179 )
    operator delete(v177);
  return v33;
}

