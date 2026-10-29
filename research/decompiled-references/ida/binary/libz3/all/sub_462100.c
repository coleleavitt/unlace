int *__fastcall sub_462100(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  _QWORD *v3; // rax
  __int64 v4; // r8
  _QWORD *v5; // r12
  unsigned int v6; // r9d
  __int64 v7; // r11
  __int64 v8; // rbx
  __int64 *v9; // r10
  unsigned int i; // r14d
  unsigned int v11; // r13d
  __int64 v12; // rbp
  int v13; // esi
  __int64 v14; // rax
  __int64 *v15; // rdi
  __int64 *j; // rax
  __int64 v17; // rdx
  unsigned int v18; // r14d
  unsigned int v19; // r9d
  _DWORD *v20; // rax
  int *v21; // r13
  unsigned int v22; // edx
  __m128i *v23; // rbx
  int v24; // r11d
  __int64 v25; // rcx
  __m128i *v26; // r14
  int v27; // esi
  __m128i v28; // xmm0
  __int64 v29; // r11
  __m128i *v30; // rdi
  __m128i *v31; // rax
  __m128i *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 *k; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r15
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 *v44; // rsi
  int v45; // r11d
  unsigned int v46; // edx
  __int64 *v47; // rdi
  __int64 v48; // rdx
  __int64 *v49; // r13
  __int64 *m; // rax
  __int64 v51; // rdx
  unsigned int v52; // eax
  __int64 v53; // rdx
  int v54; // eax
  _QWORD *v55; // rdx
  unsigned int v56; // eax
  int *v57; // rax
  unsigned int v58; // edx
  __int64 v59; // rsi
  _QWORD *v60; // r14
  unsigned int v61; // eax
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // r13
  char *v65; // rax
  char *v66; // rdi
  unsigned __int64 v67; // rax
  __int64 v68; // r11
  unsigned int v69; // r13d
  unsigned int v70; // edx
  unsigned int *v71; // rax
  __int64 v72; // rdx
  unsigned __int64 v73; // rax
  __int64 v74; // r11
  int v75; // eax
  __int64 v76; // rax
  int v77; // r9d
  __m128i *v78; // rdx
  __m128i *v79; // rax
  const __m128i *v80; // r15
  __m128i *v81; // r10
  __int64 v82; // rdx
  __m128i *v83; // rsi
  __m128i *v84; // rdx
  __m128i v85; // xmm0
  __int64 v86; // rax
  __int64 v87; // rdx
  int v89; // edx
  __int64 *v90; // rcx
  __int64 v91; // rdi
  __int64 v92; // rax
  int v93; // r9d
  unsigned int v94; // edx
  __int64 *v95; // r10
  __int64 v96; // rdx
  __int64 *v97; // rsi
  __int64 *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rdx
  int **v102; // rsi
  int v103; // edi
  unsigned int v104; // ecx
  int **v105; // r10
  __int64 v106; // rcx
  int **v107; // r9
  int **n; // rax
  int *v109; // rdx
  char v110; // al
  int *v111; // rdx
  void *v112; // [rsp+8h] [rbp-130h]
  __int64 *v113; // [rsp+8h] [rbp-130h]
  unsigned __int8 v114; // [rsp+8h] [rbp-130h]
  unsigned __int8 v115; // [rsp+8h] [rbp-130h]
  unsigned __int8 v116; // [rsp+8h] [rbp-130h]
  char *v117; // [rsp+8h] [rbp-130h]
  int v118; // [rsp+8h] [rbp-130h]
  __int64 *v119; // [rsp+8h] [rbp-130h]
  __int64 *v120; // [rsp+8h] [rbp-130h]
  unsigned int v121; // [rsp+10h] [rbp-128h]
  __int64 v122; // [rsp+10h] [rbp-128h]
  __int64 v123; // [rsp+10h] [rbp-128h]
  int v124; // [rsp+10h] [rbp-128h]
  __int64 v125; // [rsp+10h] [rbp-128h]
  __int64 v126; // [rsp+18h] [rbp-120h]
  __int64 v127; // [rsp+18h] [rbp-120h]
  __int64 v128; // [rsp+18h] [rbp-120h]
  __int64 v129; // [rsp+18h] [rbp-120h]
  unsigned int v130; // [rsp+20h] [rbp-118h]
  int v131[2]; // [rsp+20h] [rbp-118h]
  unsigned int v132; // [rsp+20h] [rbp-118h]
  int v133; // [rsp+20h] [rbp-118h]
  int v134; // [rsp+2Ch] [rbp-10Ch]
  __int64 v135[4]; // [rsp+50h] [rbp-E8h] BYREF
  void *v136; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int v137; // [rsp+78h] [rbp-C0h]
  unsigned int v138; // [rsp+7Ch] [rbp-BCh]
  _BYTE v139[184]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = (_QWORD *)sub_186B270(0x18u);
  v4 = a1;
  v138 = 16;
  v3[1] = a2;
  v5 = v3 + 1;
  v6 = 1;
  v7 = *(unsigned int *)(a1 + 48);
  v8 = *(_QWORD *)a1;
  *v3 = 0x100000002LL;
  v9 = *(__int64 **)(a1 + 40);
  v136 = v139;
  for ( i = v7 - 1; ; i = v7 - 1 )
  {
LABEL_2:
    v11 = v6;
    v12 = v5[v6 - 1];
    v13 = *(_DWORD *)(v12 + 12);
    v14 = 2LL * (v13 & i);
    v15 = &v9[v14];
    if ( v14 != 2 * v7 )
    {
      for ( j = &v9[v14]; &v9[2 * v7] != j; j += 2 )
      {
        v17 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v17 + 12) == v13 && v12 == v17 )
          {
LABEL_32:
            v6 = --*((_DWORD *)v5 - 1);
            goto LABEL_2;
          }
        }
        else if ( !v17 )
        {
          goto LABEL_9;
        }
      }
    }
    if ( v15 != v9 )
    {
      for ( k = v9; v15 != k; k += 2 )
      {
        v36 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v36 + 12) == v13 && v12 == v36 )
            goto LABEL_32;
        }
        else if ( !v36 )
        {
          break;
        }
      }
    }
LABEL_9:
    v18 = *(_DWORD *)(v12 + 24);
    v137 = 0;
    if ( !v18 )
      goto LABEL_10;
    v121 = v6;
    v112 = (void *)v4;
    v37 = sub_15D1F10(*(_QWORD *)(v12 + 8LL * (v18 - 1) + 32));
    v4 = (__int64)v112;
    v19 = v121;
    if ( *(_QWORD *)(v8 + 848) == v37 )
      break;
    v38 = v18 - 1;
    if ( v18 != 1 )
      goto LABEL_43;
    v6 = *((_DWORD *)v5 - 1);
LABEL_10:
    if ( v11 >= v6 )
    {
      v19 = v6 - 1;
      *((_DWORD *)v5 - 1) = v19;
      if ( *(_WORD *)(v12 + 4) )
        goto LABEL_14;
      v20 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
      if ( !v20 || *v20 )
        goto LABEL_14;
      v89 = v20[1];
      v41 = 0;
      if ( v89 == 34 )
        goto LABEL_140;
LABEL_134:
      if ( !(_BYTE)v41 )
        goto LABEL_14;
      if ( v89 == 35 )
      {
        v113 = (__int64 *)v4;
        v57 = sub_4619C0((__int64 *)v4, *(_DWORD **)v136);
        goto LABEL_60;
      }
      if ( v20[1] == 36 )
      {
        v113 = (__int64 *)v4;
        v57 = (int *)sub_460D00((_QWORD *)v4, v12, (__int64 *)&v136);
        goto LABEL_60;
      }
LABEL_59:
      v113 = (__int64 *)v4;
      v57 = (int *)sub_460A00((_QWORD *)v4, v12, (__int64 *)&v136, v41, v4, v19);
LABEL_60:
      v21 = v57;
      sub_45BA50(v113, v57);
      v4 = (__int64)v113;
      goto LABEL_15;
    }
    v7 = *(unsigned int *)(v4 + 48);
    v9 = *(__int64 **)(v4 + 40);
    v8 = *(_QWORD *)v4;
  }
  v38 = v18;
LABEL_43:
  v39 = v12;
  v40 = v12 + 8 * v38;
  v41 = 0;
  while ( 2 )
  {
    v42 = *(_QWORD *)(v39 + 32);
    v43 = *(unsigned int *)(v4 + 48);
    v44 = *(__int64 **)(v4 + 40);
    v45 = *(_DWORD *)(v42 + 12);
    v46 = v43 - 1;
    v43 *= 16;
    v47 = (__int64 *)((char *)v44 + v43);
    v48 = 16LL * (v45 & v46);
    v49 = &v44[(unsigned __int64)v48 / 8];
    if ( v48 != v43 )
    {
      for ( m = &v44[(unsigned __int64)v48 / 8]; v47 != m; m += 2 )
      {
        v51 = *m;
        if ( (unsigned __int64)*m > 1 )
        {
          if ( *(_DWORD *)(v51 + 12) == v45 && v42 == v51 )
          {
LABEL_62:
            v58 = v137;
            v59 = m[1];
            v60 = v136;
            if ( v137 >= v138 )
            {
              v134 = v19;
              v64 = 2 * v138;
              *(_QWORD *)v131 = v4;
              v127 = v40;
              v115 = v41;
              v65 = (char *)sub_186B270(8 * v64);
              v58 = v137;
              v66 = (char *)v136;
              v60 = v65;
              LODWORD(v41) = v115;
              v40 = v127;
              v4 = *(_QWORD *)v131;
              v19 = v134;
              if ( v137 )
              {
                if ( v137 - 1 <= 2 || v65 == (char *)v136 + 8 )
                {
                  v73 = 0;
                  v74 = 8LL * v137;
                  do
                  {
                    v60[v73 / 8] = *(_QWORD *)&v66[v73];
                    v73 += 8LL;
                  }
                  while ( v74 != v73 );
                }
                else
                {
                  v67 = 0;
                  v68 = 16LL * (v137 >> 1);
                  do
                  {
                    *(__m128i *)&v60[v67 / 8] = _mm_loadu_si128((const __m128i *)&v66[v67]);
                    v67 += 16LL;
                  }
                  while ( v67 != v68 );
                  if ( (v58 & 1) != 0 )
                    v60[v58 & 0xFFFFFFFE] = *(_QWORD *)&v66[8 * (v58 & 0xFFFFFFFE)];
                }
              }
              if ( v66 != v139 && v66 )
              {
                sub_186B220(v66);
                v58 = v137;
                v19 = v134;
                v4 = *(_QWORD *)v131;
                v40 = v127;
                LODWORD(v41) = v115;
              }
              v136 = v60;
              v138 = v64;
            }
            v61 = v58;
            v60[v58] = v59;
            LOBYTE(v61) = v59 != v42;
            v137 = v58 + 1;
            v41 = v61 | (unsigned int)v41;
            goto LABEL_55;
          }
        }
        else if ( !v51 )
        {
          goto LABEL_51;
        }
      }
    }
    if ( v44 == v49 )
    {
LABEL_51:
      if ( !v5 )
        goto LABEL_72;
      goto LABEL_52;
    }
    while ( 2 )
    {
      v62 = *v44;
      if ( (unsigned __int64)*v44 > 1 )
      {
        if ( *(_DWORD *)(v62 + 12) == v45 && v42 == v62 )
        {
          m = v44;
          goto LABEL_62;
        }
        goto LABEL_68;
      }
      if ( v62 )
      {
LABEL_68:
        v44 += 2;
        if ( v49 == v44 )
          goto LABEL_51;
        continue;
      }
      break;
    }
    if ( !v5 )
    {
LABEL_72:
      v130 = v19;
      v126 = v4;
      v122 = v40;
      v114 = v41;
      v63 = (_QWORD *)sub_186B270(0x18u);
      v41 = v114;
      v40 = v122;
      v5 = v63 + 1;
      v4 = v126;
      v19 = v130;
      *v63 = 2;
      v55 = v63 + 1;
      v54 = 1;
      goto LABEL_54;
    }
LABEL_52:
    v52 = *((_DWORD *)v5 - 1);
    if ( v52 == *((_DWORD *)v5 - 2) )
    {
      v69 = (3 * v52 + 1) >> 1;
      v70 = 8 * v69 + 8;
      if ( 8 * v52 + 8 >= v70 || v52 >= v69 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v135, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v135);
        sub_233E40((__int64)v135);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v132 = v19;
      v128 = v4;
      v123 = v40;
      v116 = v41;
      v71 = (unsigned int *)sub_186B300(v5 - 1, v70);
      v72 = v71[1];
      v5 = v71 + 2;
      v41 = v116;
      *v71 = v69;
      v40 = v123;
      v4 = v128;
      LODWORD(v71) = v72;
      v19 = v132;
      v55 = &v5[v72];
      v54 = (_DWORD)v71 + 1;
    }
    else
    {
      v53 = v52;
      v54 = v52 + 1;
      v55 = &v5[v53];
    }
LABEL_54:
    *v55 = v42;
    *((_DWORD *)v5 - 1) = v54;
LABEL_55:
    v39 += 8;
    if ( v39 != v40 )
      continue;
    break;
  }
  v56 = *((_DWORD *)v5 - 1);
  if ( v19 < v56 )
  {
    v7 = *(unsigned int *)(v4 + 48);
    v9 = *(__int64 **)(v4 + 40);
    v6 = *((_DWORD *)v5 - 1);
    v8 = *(_QWORD *)v4;
    i = v7 - 1;
    goto LABEL_2;
  }
  *((_DWORD *)v5 - 1) = v56 - 1;
  if ( *(_WORD *)(v12 + 4) || (v20 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL)) == nullptr || *v20 )
  {
    if ( !(_BYTE)v41 )
      goto LABEL_14;
    goto LABEL_59;
  }
  v89 = v20[1];
  if ( v89 != 34 )
    goto LABEL_134;
LABEL_140:
  v90 = *(__int64 **)(v4 + 64);
  v91 = *(_QWORD *)(v12 + 8LL * (unsigned int)(*(_DWORD *)(v12 + 24) - 1) + 32);
  v92 = *(unsigned int *)(v4 + 72);
  v93 = *(_DWORD *)(v91 + 12);
  v94 = v92 - 1;
  v92 *= 16;
  v95 = (__int64 *)((char *)v90 + v92);
  v96 = 16LL * (v93 & v94);
  v97 = &v90[(unsigned __int64)v96 / 8];
  if ( v96 == v92 )
  {
LABEL_148:
    if ( v90 != v97 )
    {
      v98 = *(__int64 **)(v4 + 64);
      while ( 1 )
      {
        v100 = *v98;
        if ( (unsigned __int64)*v98 > 1 )
        {
          if ( *(_DWORD *)(v100 + 12) == v93 && v91 == v100 )
            goto LABEL_160;
        }
        else if ( !v100 )
        {
          goto LABEL_14;
        }
        v98 += 2;
        if ( v97 == v98 )
          goto LABEL_14;
      }
    }
    goto LABEL_14;
  }
  v98 = &v90[(unsigned __int64)v96 / 8];
  while ( 1 )
  {
    while ( 1 )
    {
      v99 = *v98;
      if ( (unsigned __int64)*v98 > 1 )
        break;
      if ( !v99 )
        goto LABEL_14;
      v98 += 2;
      if ( v95 == v98 )
        goto LABEL_148;
    }
    if ( *(_DWORD *)(v99 + 12) == v93 && v91 == v99 )
      break;
    v98 += 2;
    if ( v95 == v98 )
      goto LABEL_148;
  }
LABEL_160:
  v21 = (int *)v98[1];
  v101 = *(unsigned int *)(v4 + 48);
  v102 = *(int ***)(v4 + 40);
  v103 = v21[3];
  v104 = v101 - 1;
  v101 *= 16;
  v105 = (int **)((char *)v102 + v101);
  v106 = 16LL * (v103 & v104);
  v107 = &v102[(unsigned __int64)v106 / 8];
  n = &v102[(unsigned __int64)v106 / 8];
  if ( v106 != v101 )
  {
    do
    {
      v109 = *n;
      if ( (unsigned __int64)*n > 1 )
      {
        if ( v109[3] == v103 && v21 == v109 )
        {
LABEL_171:
          v21 = n[1];
          goto LABEL_167;
        }
      }
      else if ( !v109 )
      {
        goto LABEL_167;
      }
      n += 2;
    }
    while ( v105 != n );
  }
  if ( v102 != v107 )
  {
    for ( n = *(int ***)(v4 + 40); v107 != n; n += 2 )
    {
      v111 = *n;
      if ( (unsigned __int64)*n > 1 )
      {
        if ( v111[3] == v103 && v21 == v111 )
          goto LABEL_171;
      }
      else if ( !v111 )
      {
        break;
      }
    }
  }
LABEL_167:
  v120 = (__int64 *)v4;
  sub_45BA50((__int64 *)v4, v21);
  v110 = sub_45CC50(v120, (int *)v12, v21);
  v4 = (__int64)v120;
  if ( v110 )
LABEL_14:
    v21 = (int *)v12;
LABEL_15:
  v22 = *(_DWORD *)(v4 + 48);
  if ( 3 * v22 < 4 * (*(_DWORD *)(v4 + 52) + *(_DWORD *)(v4 + 56)) )
  {
    v129 = v4;
    v124 = 2 * v22;
    v117 = (char *)(32LL * v22);
    v76 = sub_186B270((size_t)v117);
    v77 = v124;
    v25 = (__int64)v117;
    v23 = (__m128i *)v76;
    v78 = (__m128i *)v76;
    v4 = v129;
    v79 = (__m128i *)&v117[v76];
    if ( v124 )
    {
      if ( (((_BYTE)v79 - (_BYTE)v23) & 0x10) == 0 || (v78 = v23 + 1, *v23 = 0, v79 != &v23[1]) )
      {
        do
        {
          *v78 = 0;
          v78 += 2;
          v78[-1] = 0;
        }
        while ( v79 != v78 );
      }
    }
    v80 = *(const __m128i **)(v129 + 40);
    v24 = v124 - 1;
    v26 = v79;
    v81 = (__m128i *)&v80[*(unsigned int *)(v129 + 48)];
    if ( v80 != v81 )
    {
      do
      {
        while ( v80->m128i_i64[0] <= 1uLL )
        {
          if ( v81 == ++v80 )
            goto LABEL_108;
        }
        v82 = 16LL * (*(_DWORD *)(v80->m128i_i64[0] + 12) & (unsigned int)v24);
        v83 = &v23[(unsigned __int64)v82 / 0x10];
        if ( v117 == (char *)v82 )
        {
LABEL_112:
          if ( v23 == v83 )
          {
LABEL_127:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v84 = v23;
          while ( v84->m128i_i64[0] )
          {
            if ( v83 == ++v84 )
              goto LABEL_127;
          }
        }
        else
        {
          v84 = &v23[(unsigned __int64)v82 / 0x10];
          while ( v84->m128i_i64[0] )
          {
            if ( v79 == ++v84 )
              goto LABEL_112;
          }
        }
        v85 = _mm_loadu_si128(v80++);
        *v84 = v85;
      }
      while ( v81 != v80 );
LABEL_108:
      v81 = *(__m128i **)(v129 + 40);
    }
    if ( v81 )
    {
      v133 = v124;
      v125 = (__int64)v117;
      v118 = v77 - 1;
      sub_186B220(v81);
      v77 = v133;
      v4 = v129;
      v25 = v125;
      v24 = v118;
    }
    *(_QWORD *)(v4 + 40) = v23;
    *(_DWORD *)(v4 + 48) = v77;
    *(_DWORD *)(v4 + 56) = 0;
  }
  else
  {
    v23 = *(__m128i **)(v4 + 40);
    v24 = v22 - 1;
    v25 = 16LL * v22;
    v26 = (__m128i *)((char *)v23 + v25);
  }
  v27 = *(_DWORD *)(v12 + 12);
  v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v21);
  v29 = 16LL * (v27 & (unsigned int)v24);
  v30 = &v23[(unsigned __int64)v29 / 0x10];
  if ( v29 != v25 )
  {
    v31 = &v23[(unsigned __int64)v29 / 0x10];
    v32 = nullptr;
    while ( 1 )
    {
      v33 = v31->m128i_i64[0];
      if ( v31->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v33 + 12) == v27 && v12 == v33 )
        {
          *v31 = v28;
          goto LABEL_91;
        }
      }
      else
      {
        if ( !v33 )
        {
          if ( v32 )
            goto LABEL_119;
          v32 = v31;
          goto LABEL_120;
        }
        v32 = v31;
      }
      if ( ++v31 == v26 )
        goto LABEL_28;
    }
  }
  v32 = nullptr;
LABEL_28:
  while ( 2 )
  {
    if ( v30 == v23 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v34 = v23->m128i_i64[0];
    if ( v23->m128i_i64[0] > 1uLL )
    {
      if ( *(_DWORD *)(v34 + 12) == v27 && v12 == v34 )
      {
        *v23 = v28;
        goto LABEL_91;
      }
      goto LABEL_27;
    }
    if ( v34 )
    {
      v32 = v23;
LABEL_27:
      ++v23;
      continue;
    }
    break;
  }
  if ( v32 )
LABEL_119:
    --*(_DWORD *)(v4 + 56);
  else
    v32 = v23;
LABEL_120:
  *v32 = v28;
  ++*(_DWORD *)(v4 + 52);
LABEL_91:
  v8 = *(_QWORD *)v4;
  if ( (unsigned int)*v21 < *(_DWORD *)(v4 + 144)
    && (*(_DWORD *)(*(_QWORD *)(v4 + 152) + 4LL * ((unsigned int)*v21 >> 5)) & (1 << *v21)) != 0
    || (v75 = v21[6]) == 0
    || (v119 = (__int64 *)v4,
        v86 = sub_15D1F10(*(_QWORD *)&v21[2 * (v75 - 1) + 8]),
        v87 = *(_QWORD *)(v8 + 848),
        v4 = (__int64)v119,
        v8 = *v119,
        v87 == v86)
    || *(_QWORD *)(v8 + 864) != *(_QWORD *)&v21[2 * (v21[6] - 1) + 8] )
  {
    v7 = *(unsigned int *)(v4 + 48);
    v9 = *(__int64 **)(v4 + 40);
    v6 = *((_DWORD *)v5 - 1);
    i = v7 - 1;
    goto LABEL_2;
  }
  if ( v136 && v136 != v139 )
    sub_186B220(v136);
  sub_186B220(v5 - 1);
  return v21;
}

