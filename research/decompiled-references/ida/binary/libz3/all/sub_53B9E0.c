_QWORD *__fastcall sub_53B9E0(__int64 a1, const void *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // r12
  _QWORD *(__fastcall *v6)(__int64, __int64, _QWORD *); // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __m128i v10; // xmm0
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  size_t v13; // rdx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rax
  __int64 (__fastcall *v19)(__int64); // rax
  char v20; // al
  _QWORD *v22; // r13
  __int64 v23; // rdx
  _QWORD *v24; // r15
  __int64 v25; // rbx
  __int64 v26; // rbp
  __int64 v27; // rbp
  void *v28; // r12
  __int64 v29; // rsi
  __int64 v30; // r15
  __int64 v31; // rax
  __int64 v32; // r14
  void *v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rax
  _QWORD *v36; // r13
  __int64 v37; // rdx
  _QWORD *v38; // r15
  __int64 v39; // rbx
  __int64 v40; // rbp
  __int64 v41; // rbp
  void *v42; // r12
  __int64 v43; // rsi
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // r14
  void *v47; // r13
  __int64 v48; // rsi
  __int64 v49; // rax
  char v50; // al
  char v51; // dl
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v56; // rax
  unsigned int k; // ebp
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned int v60; // ebp
  __int64 v61; // rdx
  __int64 v62; // rcx
  unsigned int m; // r14d
  __int64 v64; // rdi
  _BYTE *v65; // rbp
  unsigned int v66; // eax
  __int64 v67; // rax
  _QWORD *v68; // r14
  void *v69; // r13
  __int64 v70; // r15
  int v71; // eax
  unsigned int *v72; // r13
  int v73; // edx
  int v74; // edx
  void *v75; // rdi
  __int64 v76; // r15
  __int64 v77; // rsi
  void *v78; // rdi
  __int64 v79; // rsi
  int v80; // eax
  int v81; // eax
  void *v82; // rbp
  unsigned int v83; // r13d
  size_t v84; // rsi
  unsigned int *v85; // rax
  __int64 v86; // rsi
  _BYTE *v87; // rdx
  _BYTE *v88; // rsi
  int v89; // eax
  __int64 v90; // rax
  unsigned int i; // ebp
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned int v94; // ebp
  __int64 v95; // rdx
  __int64 v96; // rcx
  unsigned int j; // r14d
  __int64 v98; // rdi
  _BYTE *v99; // rbp
  unsigned int v100; // eax
  __int64 v101; // rax
  _QWORD *v102; // r13
  void *v103; // r14
  __int64 v104; // r15
  int v105; // eax
  unsigned int *v106; // r14
  int v107; // edx
  int v108; // edx
  void *v109; // rdi
  __int64 v110; // r15
  __int64 v111; // rsi
  void *v112; // rdi
  __int64 v113; // rsi
  int v114; // eax
  int v115; // eax
  void *v116; // rbp
  unsigned int v117; // r13d
  size_t v118; // rsi
  unsigned int *v119; // rax
  __int64 v120; // rsi
  _BYTE *v121; // rdx
  _BYTE *v122; // rsi
  int v123; // eax
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  char **exception; // rbp
  _QWORD *v127; // [rsp+8h] [rbp-A0h]
  _QWORD *v128; // [rsp+8h] [rbp-A0h]
  __int64 v129; // [rsp+8h] [rbp-A0h]
  __int64 v130; // [rsp+8h] [rbp-A0h]
  unsigned int *v131; // [rsp+10h] [rbp-98h]
  _QWORD *v132; // [rsp+18h] [rbp-90h]
  _QWORD *v133; // [rsp+18h] [rbp-90h]
  void *v134; // [rsp+18h] [rbp-90h]
  void *v135; // [rsp+18h] [rbp-90h]
  void *v136; // [rsp+18h] [rbp-90h]
  void *v137; // [rsp+18h] [rbp-90h]
  __int64 v138; // [rsp+20h] [rbp-88h]
  __int64 v139; // [rsp+20h] [rbp-88h]
  unsigned int v140; // [rsp+28h] [rbp-80h]
  unsigned int v141; // [rsp+2Ch] [rbp-7Ch]
  unsigned int v142; // [rsp+2Ch] [rbp-7Ch]
  unsigned int *v143; // [rsp+38h] [rbp-70h]
  unsigned int *v144; // [rsp+38h] [rbp-70h]
  __int64 v145; // [rsp+50h] [rbp-58h] BYREF
  __int64 v146; // [rsp+58h] [rbp-50h]
  __int64 v147; // [rsp+60h] [rbp-48h] BYREF
  __int64 v148; // [rsp+68h] [rbp-40h]

  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = v3[4];
  v5 = v3;
  v6 = *(_QWORD *(__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v4 + 64LL);
  if ( v6 == sub_536B50 )
  {
    v7 = (_QWORD *)sub_186B270(0x98u);
    *v7 = qword_1C665B0;
    v8 = v7;
    v7[1] = v4;
    v7[2] = 0;
    v9 = *(_QWORD *)(a1 + 8);
    if ( v9 )
    {
      v10 = _mm_loadl_epi64((const __m128i *)(v9 - 8));
      v11 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v10) + 8);
      v12 = *(_QWORD **)(a1 + 8);
      v8[2] = v11 + 1;
      *v11 = v10.m128i_i64[0];
      if ( v12 )
      {
        v13 = 8LL * *((unsigned int *)v12 - 1);
        if ( v13 <= 8 )
        {
          if ( v13 == 8 )
            v11[1] = *v12;
        }
        else
        {
          memmove(v11 + 1, v12, v13);
        }
      }
    }
    v14 = *(_DWORD *)(v4 + 8);
    v15 = *(_QWORD *)(v4 + 24);
    v8[4] = v4;
    *((_DWORD *)v8 + 6) = v14;
    *v8 = &off_1C67178;
    v16 = sub_4D6490(v15);
    v8[5] = v16;
    sub_16669D0(v8 + 6, v16);
    v17 = v8[5];
    *((_BYTE *)v8 + 80) = 0;
    v8[8] = 0;
    v8[9] = v17;
    v8[13] = 0;
    *((_BYTE *)v8 + 112) = 1;
    v8[17] = 0;
    *((_BYTE *)v8 + 144) = 0;
    *(_OWORD *)(v8 + 11) = 0;
    *(_OWORD *)(v8 + 15) = 0;
  }
  else
  {
    v8 = v6(v4, 0, (_QWORD *)(a1 + 8));
    if ( !v8 )
    {
      v18 = *(unsigned int **)(a1 + 16);
      v131 = v18;
      if ( v18 )
        goto LABEL_9;
      goto LABEL_66;
    }
  }
  v8 = __dynamic_cast(
         v8,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::karr_relation,
         0);
  v18 = *(unsigned int **)(a1 + 16);
  v131 = v18;
  if ( v18 )
  {
LABEL_9:
    v140 = *(v18 - 1);
    goto LABEL_10;
  }
LABEL_66:
  v140 = 0;
LABEL_10:
  v19 = *(__int64 (__fastcall **)(__int64))(*v5 + 24LL);
  if ( v19 == sub_539710 )
    v20 = *((_BYTE *)v5 + 80);
  else
    v20 = v19((__int64)v5);
  if ( v20 )
  {
    *((_BYTE *)v8 + 80) = 1;
    return v8;
  }
  v22 = (_QWORD *)v8[11];
  if ( v22 )
  {
    v23 = *((unsigned int *)v22 - 1);
    if ( (_DWORD)v23 )
    {
      v127 = v5;
      v24 = &v22[v23];
      v132 = v8;
      do
      {
        v25 = *v22;
        if ( *v22 )
        {
          v26 = *(unsigned int *)(v25 - 4);
          if ( (_DWORD)v26 )
          {
            v27 = v25 + 32 * v26;
            do
            {
              v28 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v25);
              v29 = v25 + 16;
              v25 += 32;
              sub_182CBA0(v28, v29);
            }
            while ( v25 != v27 );
            v25 = *v22;
          }
          sub_186B220((void *)(v25 - 8));
        }
        ++v22;
      }
      while ( v22 != v24 );
      v8 = v132;
      v5 = v127;
      v22 = (_QWORD *)v132[11];
    }
    *((_DWORD *)v22 - 1) = 0;
  }
  v30 = v8[12];
  if ( v30 )
  {
    v31 = *(unsigned int *)(v30 - 4);
    if ( (_DWORD)v31 )
    {
      v32 = v30 + 32 * v31;
      do
      {
        v33 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v30);
        v34 = v30 + 16;
        v30 += 32;
        sub_182CBA0(v33, v34);
      }
      while ( v30 != v32 );
      v30 = v8[12];
    }
    *(_DWORD *)(v30 - 4) = 0;
  }
  v35 = v8[13];
  if ( v35 )
    *(_DWORD *)(v35 - 4) = 0;
  v36 = (_QWORD *)v8[15];
  if ( v36 )
  {
    v37 = *((unsigned int *)v36 - 1);
    if ( (_DWORD)v37 )
    {
      v128 = v5;
      v38 = &v36[v37];
      v133 = v8;
      do
      {
        v39 = *v36;
        if ( *v36 )
        {
          v40 = *(unsigned int *)(v39 - 4);
          if ( (_DWORD)v40 )
          {
            v41 = v39 + 32 * v40;
            do
            {
              v42 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v39);
              v43 = v39 + 16;
              v39 += 32;
              sub_182CBA0(v42, v43);
            }
            while ( v39 != v41 );
            v39 = *v36;
          }
          sub_186B220((void *)(v39 - 8));
        }
        ++v36;
      }
      while ( v36 != v38 );
      v8 = v133;
      v5 = v128;
      v36 = (_QWORD *)v133[15];
    }
    *((_DWORD *)v36 - 1) = 0;
  }
  v44 = v8[16];
  if ( v44 )
  {
    v45 = *(unsigned int *)(v44 - 4);
    if ( (_DWORD)v45 )
    {
      v46 = v44 + 32 * v45;
      do
      {
        v47 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v44);
        v48 = v44 + 16;
        v44 += 32;
        sub_182CBA0(v47, v48);
      }
      while ( v44 != v46 );
      v44 = v8[16];
    }
    *(_DWORD *)(v44 - 4) = 0;
  }
  v49 = v8[17];
  if ( v49 )
    *(_DWORD *)(v49 - 4) = 0;
  v50 = *((_BYTE *)v5 + 144);
  v51 = *((_BYTE *)v5 + 112);
  *((_BYTE *)v8 + 144) = v50;
  *((_BYTE *)v8 + 112) = v51;
  if ( !v51 )
    goto LABEL_56;
  v90 = v5[11];
  for ( i = 0; v90; v90 = v5[11] )
  {
    if ( i >= *(_DWORD *)(v90 - 4) )
      break;
    v92 = i++;
    sub_536E30(v8 + 11, (__int64 *)(v90 + 8 * v92));
  }
  v93 = v5[12];
  if ( v93 )
  {
    v94 = 0;
    do
    {
      if ( v94 >= *(_DWORD *)(v93 - 4) )
        break;
      v95 = v94++;
      sub_537BC0(v8 + 12, v93 + 32 * v95);
      v93 = v5[12];
    }
    while ( v93 );
  }
  v96 = v5[13];
  if ( v96 )
  {
    for ( j = 0; j < *(_DWORD *)(v96 - 4); ++j )
    {
      while ( 1 )
      {
        v98 = v8[13];
        v99 = (_BYTE *)(v96 + j);
        if ( !v98 )
        {
          v124 = (_QWORD *)sub_186B270(0xAu);
          v121 = v124 + 1;
          *v124 = 2;
          v123 = 1;
          v8[13] = v121;
          v122 = v121;
          v96 = v5[13];
          goto LABEL_144;
        }
        v100 = *(_DWORD *)(v98 - 4);
        if ( v100 == *(_DWORD *)(v98 - 8) )
          break;
        ++j;
        *(_BYTE *)(v98 + v100) = *v99;
        *(_DWORD *)(v98 - 4) = v100 + 1;
        if ( j >= *(_DWORD *)(v96 - 4) )
          goto LABEL_121;
      }
      v117 = (3 * v100 + 1) >> 1;
      v118 = v117 + 8;
      if ( v100 + 8 >= (unsigned int)v118 || v100 >= v117 )
        goto LABEL_155;
      v119 = (unsigned int *)sub_186B300((void *)(v98 - 8), v118);
      v120 = v119[1];
      v121 = v119 + 2;
      v8[13] = v119 + 2;
      v96 = v5[13];
      *v119 = v117;
      LODWORD(v119) = v120;
      v122 = &v121[v120];
      v123 = (_DWORD)v119 + 1;
LABEL_144:
      *v122 = *v99;
      *((_DWORD *)v121 - 1) = v123;
      if ( !v96 )
        break;
    }
  }
LABEL_121:
  v101 = v8[11];
  if ( v101 )
  {
    v142 = 0;
    v144 = &v131[v140 - 1];
    v130 = (__int64)&v131[v140 - 1];
    while ( v142 < *(_DWORD *)(v101 - 4) )
    {
      v102 = (_QWORD *)(v101 + 8LL * v142);
      v103 = qword_1C7F2C0;
      v104 = *v102 + 32LL * *v131;
      v145 = 0;
      v146 = 0;
      v147 = 1;
      v148 = 0;
      if ( (*(_BYTE *)(v104 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v145, v104);
      else
        LODWORD(v145) = *(_DWORD *)v104;
      if ( (*(_BYTE *)(v104 + 20) & 1) != 0 )
      {
        sub_182C690(v103, &v147, v104 + 16);
      }
      else
      {
        v105 = *(_DWORD *)(v104 + 16);
        BYTE4(v147) &= ~1u;
        LODWORD(v147) = v105;
      }
      v106 = v131;
      if ( v140 > 1 )
      {
        while ( 1 )
        {
          v109 = qword_1C7F2C0;
          v110 = *v102 + 32LL * v106[1];
          v111 = 32LL * *v106 + *v102;
          if ( (*(_BYTE *)(v110 + 4) & 1) != 0 )
          {
            v136 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v111, *v102 + 32LL * v106[1]);
            v109 = v136;
            if ( (*(_BYTE *)(v110 + 20) & 1) != 0 )
              goto LABEL_134;
LABEL_131:
            v108 = *(_DWORD *)(v110 + 16);
            ++v106;
            *(_BYTE *)(v111 + 20) &= ~1u;
            *(_DWORD *)(v111 + 16) = v108;
            if ( (unsigned int *)v130 == v106 )
              break;
          }
          else
          {
            v107 = *(_DWORD *)v110;
            *(_BYTE *)(v111 + 4) &= ~1u;
            *(_DWORD *)v111 = v107;
            if ( (*(_BYTE *)(v110 + 20) & 1) == 0 )
              goto LABEL_131;
LABEL_134:
            sub_182C690(v109, v111 + 16, v110 + 16);
            if ( (unsigned int *)v130 == ++v106 )
              break;
          }
        }
      }
      v112 = qword_1C7F2C0;
      v113 = *v102 + 32LL * *v144;
      if ( (v145 & 0x100000000LL) != 0 )
      {
        v139 = *v102 + 32LL * *v144;
        v137 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v113, &v145);
        v113 = v139;
        v112 = v137;
      }
      else
      {
        v114 = v145;
        *(_BYTE *)(v113 + 4) &= ~1u;
        *(_DWORD *)v113 = v114;
      }
      if ( (v147 & 0x100000000LL) != 0 )
      {
        sub_182C690(v112, v113 + 16, &v147);
      }
      else
      {
        v115 = v147;
        *(_BYTE *)(v113 + 20) &= ~1u;
        *(_DWORD *)(v113 + 16) = v115;
      }
      v116 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v145);
      sub_182CBA0(v116, &v147);
      v101 = v8[11];
      ++v142;
      if ( !v101 )
        break;
    }
  }
  v50 = *((_BYTE *)v8 + 144);
LABEL_56:
  if ( !v50 )
    goto LABEL_57;
  v56 = v5[15];
  for ( k = 0; v56; v56 = v5[15] )
  {
    if ( k >= *(_DWORD *)(v56 - 4) )
      break;
    v58 = k++;
    sub_536E30(v8 + 15, (__int64 *)(v56 + 8 * v58));
  }
  v59 = v5[16];
  if ( v59 )
  {
    v60 = 0;
    do
    {
      if ( v60 >= *(_DWORD *)(v59 - 4) )
        break;
      v61 = v60++;
      sub_537BC0(v8 + 16, v59 + 32 * v61);
      v59 = v5[16];
    }
    while ( v59 );
  }
  v62 = v5[17];
  if ( v62 )
  {
    for ( m = 0; m < *(_DWORD *)(v62 - 4); ++m )
    {
      while ( 1 )
      {
        v64 = v8[17];
        v65 = (_BYTE *)(v62 + m);
        if ( !v64 )
          break;
        v66 = *(_DWORD *)(v64 - 4);
        if ( v66 == *(_DWORD *)(v64 - 8) )
        {
          v83 = (3 * v66 + 1) >> 1;
          v84 = v83 + 8;
          if ( v66 + 8 < (unsigned int)v84 && v66 < v83 )
          {
            v85 = (unsigned int *)sub_186B300((void *)(v64 - 8), v84);
            v86 = v85[1];
            v87 = v85 + 2;
            v8[17] = v85 + 2;
            v62 = v5[17];
            *v85 = v83;
            LODWORD(v85) = v86;
            v88 = &v87[v86];
            v89 = (_DWORD)v85 + 1;
            goto LABEL_102;
          }
LABEL_155:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v145, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &v145);
          sub_233E40((__int64)&v145);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ++m;
        *(_BYTE *)(v64 + v66) = *v65;
        *(_DWORD *)(v64 - 4) = v66 + 1;
        if ( m >= *(_DWORD *)(v62 - 4) )
          goto LABEL_80;
      }
      v125 = (_QWORD *)sub_186B270(0xAu);
      v87 = v125 + 1;
      *v125 = 2;
      v89 = 1;
      v8[17] = v87;
      v88 = v87;
      v62 = v5[17];
LABEL_102:
      *v88 = *v65;
      *((_DWORD *)v87 - 1) = v89;
      if ( !v62 )
        break;
    }
  }
LABEL_80:
  v67 = v8[15];
  if ( !v67 )
    goto LABEL_57;
  v141 = 0;
  v143 = &v131[v140 - 1];
  v129 = (__int64)&v131[v140 - 1];
  do
  {
    if ( v141 >= *(_DWORD *)(v67 - 4) )
      break;
    v68 = (_QWORD *)(v67 + 8LL * v141);
    v69 = qword_1C7F2C0;
    v70 = *v68 + 32LL * *v131;
    v145 = 0;
    v146 = 0;
    v147 = 1;
    v148 = 0;
    if ( (*(_BYTE *)(v70 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v145, v70);
      if ( (*(_BYTE *)(v70 + 20) & 1) == 0 )
      {
LABEL_85:
        v71 = *(_DWORD *)(v70 + 16);
        BYTE4(v147) &= ~1u;
        LODWORD(v147) = v71;
        goto LABEL_86;
      }
    }
    else
    {
      LODWORD(v145) = *(_DWORD *)v70;
      if ( (*(_BYTE *)(v70 + 20) & 1) == 0 )
        goto LABEL_85;
    }
    sub_182C690(v69, &v147, v70 + 16);
LABEL_86:
    v72 = v131;
    if ( v140 > 1 )
    {
      while ( 1 )
      {
        v75 = qword_1C7F2C0;
        v76 = *v68 + 32LL * v72[1];
        v77 = 32LL * *v72 + *v68;
        if ( (*(_BYTE *)(v76 + 4) & 1) != 0 )
        {
          v134 = qword_1C7F2C0;
          sub_182C690(qword_1C7F2C0, v77, *v68 + 32LL * v72[1]);
          v75 = v134;
          if ( (*(_BYTE *)(v76 + 20) & 1) != 0 )
            goto LABEL_92;
LABEL_89:
          v74 = *(_DWORD *)(v76 + 16);
          ++v72;
          *(_BYTE *)(v77 + 20) &= ~1u;
          *(_DWORD *)(v77 + 16) = v74;
          if ( v72 == (unsigned int *)v129 )
            break;
        }
        else
        {
          v73 = *(_DWORD *)v76;
          *(_BYTE *)(v77 + 4) &= ~1u;
          *(_DWORD *)v77 = v73;
          if ( (*(_BYTE *)(v76 + 20) & 1) == 0 )
            goto LABEL_89;
LABEL_92:
          sub_182C690(v75, v77 + 16, v76 + 16);
          if ( ++v72 == (unsigned int *)v129 )
            break;
        }
      }
    }
    v78 = qword_1C7F2C0;
    v79 = *v68 + 32LL * *v143;
    if ( (v145 & 0x100000000LL) != 0 )
    {
      v138 = *v68 + 32LL * *v143;
      v135 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v79, &v145);
      v79 = v138;
      v78 = v135;
    }
    else
    {
      v80 = v145;
      *(_BYTE *)(v79 + 4) &= ~1u;
      *(_DWORD *)v79 = v80;
    }
    if ( (v147 & 0x100000000LL) != 0 )
    {
      sub_182C690(v78, v79 + 16, &v147);
    }
    else
    {
      v81 = v147;
      *(_BYTE *)(v79 + 20) &= ~1u;
      *(_DWORD *)(v79 + 16) = v81;
    }
    v82 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v145);
    sub_182CBA0(v82, &v147);
    v67 = v8[15];
    ++v141;
  }
  while ( v67 );
LABEL_57:
  v52 = v8[8];
  v53 = v5[8];
  if ( v52 != v53 )
  {
    if ( v52 )
    {
      v54 = v8[9];
      if ( (*(_DWORD *)(v52 + 8))-- == 1 )
      {
        sub_15D7BC0(v54, v52);
        v53 = v5[8];
      }
    }
    v8[8] = v53;
    if ( v53 )
      ++*(_DWORD *)(v53 + 8);
  }
  return v8;
}

