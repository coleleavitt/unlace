unsigned __int64 __fastcall sub_219F60(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rax
  char v6; // bl
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 tinfo_size; // rax
  __int64 v13; // rcx
  _DWORD *v14; // rsi
  int v15; // eax
  int v16; // ebp
  __int64 v17; // rax
  _QWORD *v18; // rbx
  unsigned __int64 *v19; // r15
  __int64 v20; // r13
  __int64 v21; // rax
  signed __int64 *v22; // rsi
  _QWORD *v23; // rax
  signed __int64 v24; // rdx
  __int64 v25; // rdi
  unsigned __int64 v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r10
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // r11
  unsigned __int64 v33; // rsi
  char v34; // r13
  signed __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  int v38; // eax
  signed __int64 i; // rax
  int v40; // eax
  __int64 v41; // rdi
  __int64 v42; // rbp
  signed __int64 v43; // rax
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  bool v48; // r13
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // r15
  __int64 v56; // r14
  __int64 v57; // rdx
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rcx
  _QWORD *v61; // r13
  _QWORD *v62; // rax
  __int64 v63; // rdi
  _QWORD *v64; // r10
  unsigned __int64 v65; // r13
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // r13
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rbp
  char v71; // r14
  __int64 v72; // rdi
  signed __int64 *v73; // rax
  unsigned __int64 v74; // r8
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rbp
  bool j; // si
  __int64 v78; // rcx
  bool v79; // zf
  unsigned __int64 v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // r9
  bool v83; // bp
  __int64 v84; // rsi
  int v85; // edx
  int *v86; // r15
  unsigned __int64 *v87; // r14
  _QWORD *v88; // rax
  unsigned __int8 v89; // al
  __int64 v90; // r15
  __int64 v91; // r14
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rsi
  unsigned __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rax
  const __m128i *v98; // rcx
  __int64 v99; // rax
  __m128i v100; // xmm0
  _QWORD *v102; // rax
  __int64 v103; // rdx
  _QWORD *v104; // rt1
  unsigned __int64 k; // rax
  unsigned __int64 v106; // rsi
  unsigned __int64 v107; // rsi
  __int64 v108; // rax
  unsigned __int64 v109; // r14
  __int64 v110; // rdi
  unsigned int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rdi
  bool v114; // bp
  unsigned __int64 v115; // rax
  __int64 v116; // rsi
  int v117; // ecx
  int v118; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v119; // [rsp+0h] [rbp-E8h]
  __int64 v120; // [rsp+0h] [rbp-E8h]
  __int64 v121; // [rsp+0h] [rbp-E8h]
  __int64 v122; // [rsp+8h] [rbp-E0h]
  _QWORD *v123; // [rsp+8h] [rbp-E0h]
  __int64 v124; // [rsp+8h] [rbp-E0h]
  _QWORD *v125; // [rsp+8h] [rbp-E0h]
  __int64 v126; // [rsp+18h] [rbp-D0h]
  unsigned __int64 *v127; // [rsp+18h] [rbp-D0h]
  __int64 v128; // [rsp+20h] [rbp-C8h]
  _QWORD *v129; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v130; // [rsp+28h] [rbp-C0h]
  __int64 v131; // [rsp+30h] [rbp-B8h]
  char v132; // [rsp+3Fh] [rbp-A9h]
  __int64 v133; // [rsp+40h] [rbp-A8h]
  signed __int64 v134; // [rsp+48h] [rbp-A0h]
  __int64 v135; // [rsp+50h] [rbp-98h] BYREF
  __int128 v136; // [rsp+58h] [rbp-90h]
  signed __int64 v137; // [rsp+70h] [rbp-78h] BYREF
  __int128 v138; // [rsp+78h] [rbp-70h]
  __int64 v139; // [rsp+88h] [rbp-60h]
  char v140; // [rsp+90h] [rbp-58h]
  int v141; // [rsp+98h] [rbp-50h]
  int v142; // [rsp+9Ch] [rbp-4Ch]
  char v143; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v144; // [rsp+A8h] [rbp-40h]

  v144 = __readfsqword(0x28u);
  v1 = *a1;
  if ( !*(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) )
    return v144 - __readfsqword(0x28u);
  v2 = *(int *)(v1 + 480);
  if ( (_DWORD)v2 != -1 )
  {
    v6 = sub_1BE760(*(_QWORD *)(v1 + 432) + 104 * v2, &v135, &v137, *(_DWORD *)(*(_QWORD *)(v1 + 432) + 104 * v2 + 88));
    if ( v6 )
    {
      v7 = v135;
      v8 = v137;
      v9 = a1[1];
      v10 = v135 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      a1[1] = v10;
      if ( v7 >= v8 )
      {
        if ( v9 == v10 )
          v6 = a1[2] != 0;
      }
      else
      {
        v6 = v9 != v10;
        v10 += v8 - v7;
      }
      v11 = a1[4];
      a1[2] = v10 - v7;
      tinfo_size = get_tinfo_size(0, v11, 0);
      v13 = a1[2];
      if ( tinfo_size != v13 )
      {
        clear_tinfo_t(a1 + 4);
        v13 = a1[2];
      }
      v14 = (_DWORD *)*a1;
      v15 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      a1[3] = (v13 + a1[1] + v15 - 1) & -v15;
      if ( v6 )
        *v14 |= 0x8000000u;
      return v144 - __readfsqword(0x28u);
    }
  }
  if ( (*((_BYTE *)a1 + 68) & 2) != 0 )
    return v144 - __readfsqword(0x28u);
  v4 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) != 2 || *(_BYTE *)(v4 + 320) )
    return v144 - __readfsqword(0x28u);
  v16 = *(_DWORD *)(*(_QWORD *)(v4 + 1504) + 80LL);
  v17 = sub_10BD20(*(_QWORD *)(v4 + 784), 0);
  v18 = (_QWORD *)v17;
  if ( !v17 )
  {
    if ( !under_debugger )
      sub_37CFE0(50446);
LABEL_192:
    BUG();
  }
  ++*(_DWORD *)(v17 + 24);
  v19 = *(unsigned __int64 **)v17;
  v20 = *(_QWORD *)(*a1 + 144LL);
  v21 = *(_QWORD *)(*a1 + 672LL);
  v137 = 0;
  v140 = 5;
  v141 = v21;
  v22 = &v137;
  v139 = v20;
  v142 = -1;
  v143 = 1;
  v138 = 0;
  v23 = sub_FF5E0(v19, (__int64)&v137);
  v25 = v137;
  v26 = (unsigned __int64)v23;
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  v27 = v16;
  while ( *v19 != v26 )
  {
    if ( *(_BYTE *)(v26 + 56) == 5 )
    {
      if ( *(_QWORD *)(v26 + 32) )
      {
        if ( *(_QWORD *)(v26 + 32) > 1u
          || (v22 = *(signed __int64 **)(v26 + 24),
              v24 = (unsigned int)(*(_DWORD *)(*a1 + 64LL) - 1),
              *(_DWORD *)v22 != (_DWORD)v24) )
        {
          if ( *(_BYTE *)(v26 + 56) != 5 )
            sub_216980(v25, v22, v24, v27);
          v28 = *(_QWORD *)(v26 + 48);
          v22 = (signed __int64 *)*a1;
          v29 = *(int *)(v26 + 64);
          if ( !((v28 - *(_QWORD *)(*a1 + 144LL)) % v27)
            || (v24 = v28 + (int)v29, v25 = v28 + v16 - 1, v24 > (v25 & -v16)) )
          {
            v25 = 1;
            if ( (int)v29 > 0 )
              v25 = *(int *)(v26 + 64);
            v30 = (v25 + v28 + *(_DWORD *)(v22[188] + 80) - 1) & -*(_DWORD *)(v22[188] + 80);
            v31 = a1[3];
            if ( v31 < v30 )
              v31 = (v25 + v28 + *(_DWORD *)(v22[188] + 80) - 1) & -*(_DWORD *)(v22[188] + 80);
            a1[3] = v31;
            v24 = a1[1];
            if ( v24 < v30 && !*((_BYTE *)v22 + 320) )
            {
              v32 = a1[2];
              v33 = v30 & -*(_DWORD *)(v22[188] + 80);
              v34 = v24 != v33;
              if ( v30 < v24 + v32 )
              {
                v35 = v24 + v32 + v33 - v30;
              }
              else
              {
                v34 |= v32 != 0;
                v35 = v33;
              }
              a1[1] = v33;
              v36 = a1[4];
              a1[2] = v35 - v30;
              v126 = v27;
              v122 = v28;
              v118 = v29;
              v37 = get_tinfo_size(0, v36, 0);
              v25 = a1[2];
              v29 = v118;
              v28 = v122;
              v27 = v126;
              if ( v37 != v25 )
              {
                clear_tinfo_t(a1 + 4);
                v25 = a1[2];
                v27 = v126;
                v28 = v122;
                v29 = v118;
              }
              v24 = *a1;
              v38 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
              v22 = (signed __int64 *)(v25 + a1[1] + v38 - 1);
              a1[3] = (unsigned __int64)v22 & -v38;
              if ( v34 )
                *(_DWORD *)v24 |= 0x8000000u;
            }
            v20 = v29 + v28;
          }
        }
      }
    }
    if ( (*(_QWORD *)v26 & 2) == 0 )
    {
      v24 = *(_QWORD *)(v26 + 16);
      if ( (*(_BYTE *)v24 & 2) != 0 )
      {
        v73 = (signed __int64 *)(*(_QWORD *)v26 & 0xFFFFFFFFFFFFFFFCLL);
        v24 = *v73;
        if ( (*v73 & 2) != 0 || v26 != v73[2] )
        {
LABEL_77:
          v26 = (unsigned __int64)v73;
        }
        else
        {
          while ( 1 )
          {
            v26 = v24 & 0xFFFFFFFFFFFFFFFCLL;
            v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v24 & 2) != 0 )
              break;
            v22 = v73;
            v73 = (signed __int64 *)v26;
            if ( v22 != *(signed __int64 **)(v26 + 16) )
              goto LABEL_77;
          }
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v24 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v24 = i;
        v26 = v24;
      }
    }
  }
  v132 = sub_2193A0(a1);
  if ( !v132 )
    goto LABEL_75;
  v40 = v16 - 1;
  v41 = *a1;
  v42 = -v16;
  v43 = v42 & (v20 + v40);
  v130 = v43;
  v44 = v43;
  if ( a1[1] != -1 )
  {
    v45 = sub_1F00A0(v41, v43);
    v46 = a1[1];
    v47 = a1[2];
    v48 = v132;
    if ( v45 < v44 )
      v45 = v44;
    v49 = v46 + v47 - v45;
    if ( v45 >= v46 + v47 )
      v49 = 0;
    v50 = v45 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    a1[1] = v50;
    if ( v46 == v50 )
      v48 = v47 != 0 && v49 == 0;
    v51 = a1[4];
    a1[2] = v49 + v50 - v45;
    v52 = get_tinfo_size(0, v51, 0);
    v53 = a1[2];
    if ( v52 != v53 )
    {
      clear_tinfo_t(a1 + 4);
      v53 = a1[2];
    }
    v41 = *a1;
    v54 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    a1[3] = (v53 + a1[1] + v54 - 1) & -v54;
    if ( v48 )
    {
      *(_DWORD *)v41 |= 0x8000000u;
      v41 = *a1;
    }
  }
  v131 = sub_10B780(*(_QWORD *)(v41 + 784), 0);
  if ( !v131 )
  {
    if ( !under_debugger )
      sub_37CFE0(50446);
    goto LABEL_192;
  }
  ++*(_DWORD *)(v131 + 24);
  v133 = sub_1D0330(*a1);
  v55 = a1[1];
  v56 = a1[2];
  v57 = 3LL * *(int *)(v133 + 72);
  v58 = *(_QWORD *)v131;
  v137 = 0;
  v139 = v55;
  v138 = 0;
  v127 = (unsigned __int64 *)(v58 + 8 * v57);
  v140 = 5;
  v141 = v56;
  v142 = -1;
  v143 = 1;
  v61 = sub_FF5E0(v127, (__int64)&v137);
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  v62 = v61;
  if ( v61 == (_QWORD *)*v127 )
    goto LABEL_66;
  v63 = (__int64)v127;
  while ( 1 )
  {
    v64 = v62 + 3;
    if ( *((_BYTE *)v62 + 56) != 5 )
      sub_216980(v127, v130, v59, v60);
    v65 = v42 & v62[6];
    a1[1] = v65;
    if ( v65 >= v130 )
      break;
    v59 = *v62;
    if ( (*v62 & 2) == 0 )
    {
      v60 = v62[2];
      if ( (*(_BYTE *)v60 & 2) != 0 )
      {
        v59 &= 0xFFFFFFFFFFFFFFFCLL;
        v60 = *(_QWORD *)v59;
        if ( (*(_QWORD *)v59 & 2) == 0 )
        {
          while ( *(_QWORD **)(v59 + 16) == v62 )
          {
            v62 = (_QWORD *)v59;
            v74 = v60 & 0xFFFFFFFFFFFFFFFCLL;
            v60 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v60 & 2) != 0 )
            {
              v62 = (_QWORD *)v74;
              goto LABEL_65;
            }
            v59 = v74;
          }
        }
        v62 = (_QWORD *)v59;
      }
      else
      {
        do
        {
          v62 = (_QWORD *)v60;
          v60 = *(_QWORD *)(v60 + 8);
        }
        while ( (*(_BYTE *)v60 & 2) == 0 );
      }
    }
LABEL_65:
    if ( (_QWORD *)*v127 == v62 )
      goto LABEL_66;
  }
  v75 = *v127;
  if ( (_QWORD *)*v127 == v62 )
  {
LABEL_66:
    v66 = *a1;
    v67 = a1[1];
    if ( v67 < *(_QWORD *)(*a1 + 168LL) )
    {
      v114 = v132;
      v115 = v130 & -*(_DWORD *)(*(_QWORD *)(v66 + 1504) + 80LL);
      a1[1] = v115;
      if ( v67 == v115 )
        v114 = a1[2] != 0;
      v116 = a1[4];
      a1[2] = v115 - v130;
      if ( get_tinfo_size(0, v116, 0) != a1[2] )
        clear_tinfo_t(a1 + 4);
      v66 = *a1;
      v68 = a1[2];
      v117 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      v67 = a1[1];
      a1[3] = (v117 - 1 + v67 + v68) & -v117;
      if ( !v114 )
        goto LABEL_68;
      *(_DWORD *)v66 |= 0x8000000u;
      v66 = *a1;
      v67 = a1[1];
    }
    v68 = a1[2];
    goto LABEL_68;
  }
  v76 = (unsigned __int64)v62;
  v134 = v55 + v56;
  for ( j = v130 < v65; ; j = 0 )
  {
    v78 = v76 + 24;
    if ( *(_BYTE *)(v76 + 56) != 5 || v134 <= *(_QWORD *)(v76 + 48) )
      goto LABEL_96;
    if ( *(_QWORD *)(v76 + 32) != 1 || **(_DWORD **)v78 )
      break;
    k = v76;
    if ( (*(_QWORD *)v76 & 2) == 0 )
    {
      v106 = *(_QWORD *)(v76 + 16);
      if ( (*(_BYTE *)v106 & 2) != 0 )
      {
        v107 = v76;
        for ( k = *(_QWORD *)v76 & 0xFFFFFFFFFFFFFFFCLL;
              (*(_QWORD *)k & 2) == 0 && *(_QWORD *)(k + 16) == v107;
              k = *(_QWORD *)k & 0xFFFFFFFFFFFFFFFCLL )
        {
          v107 = k;
        }
      }
      else
      {
        do
        {
          k = v106;
          v106 = *(_QWORD *)(v106 + 8);
        }
        while ( (*(_BYTE *)v106 & 2) == 0 );
      }
    }
    if ( k == v75 )
      goto LABEL_96;
    v109 = k + 24;
    if ( *(_BYTE *)(k + 56) != 5 || v134 <= *(_QWORD *)(k + 48) || *(_QWORD *)(k + 32) == 1 && !**(_DWORD **)(k + 24) )
      goto LABEL_96;
    v110 = *(unsigned int *)(k + 64);
    v125 = v64;
    v111 = round_down_power2(v110);
    v78 = v76 + 24;
    v64 = v125;
    if ( *(_BYTE *)(v109 + 32) != 5 )
      sub_216980(v110, v111, v112, v78);
    v113 = *(_QWORD *)(v109 + 24);
    if ( v113 % v111 )
      goto LABEL_96;
    if ( *(_BYTE *)(v76 + 56) != 5 )
      sub_216980(v113, v111, 0, v78);
    v75 = *(_QWORD *)(v76 + 48) % (__int64)v111;
    if ( !v75 )
      goto LABEL_96;
    v63 = v113 - *(_QWORD *)(v76 + 48);
    if ( v111 <= v63 )
      goto LABEL_96;
LABEL_116:
    if ( *(_BYTE *)(v78 + 32) != 5
      || (v89 = *((_BYTE *)v64 + 32), v89 > 5u)
      || v89 >= 5u && *(_QWORD *)(v78 + 24) < v64[3] )
    {
      if ( !under_debugger )
        sub_37CFE0(52852);
      goto LABEL_192;
    }
    v90 = *(_QWORD *)(v78 + 24);
    v91 = *(int *)(v78 + 40);
    v65 = v91 + v90;
    if ( *(_BYTE *)(v78 + 32) != 5 )
      sub_216980(v63, 5, v75, v78);
    v92 = a1[6];
    if ( a1[7] < (unsigned __int64)(v92 + 1) )
    {
      v129 = v64;
      v124 = a1[7];
      v93 = qvector_reserve(a1 + 5, 0, v92 + 1, 16);
      v63 = a1[5];
      v96 = v93;
      v121 = a1[7];
      v97 = a1[6];
      a1[7] = v124;
      v98 = (const __m128i *)v63;
      v99 = v97 - 1;
      if ( v99 >= 0 )
      {
        do
        {
          v100 = _mm_loadu_si128(v98);
          v96 += 16;
          ++v98;
          *(__m128i *)(v96 - 16) = v100;
        }
        while ( v99-- != 0 );
        v63 = a1[5];
      }
      qfree(v63);
      v64 = v129;
      a1[7] = v121;
      v92 = a1[6];
      a1[5] = v93;
    }
    else
    {
      v93 = a1[5];
    }
    v94 = 16 * v92 + v93;
    *(_QWORD *)v94 = v90;
    *(_BYTE *)(v94 + 8) = 5;
    *(_DWORD *)(v94 + 12) = v91;
    ++a1[6];
    if ( (*(_QWORD *)v76 & 2) == 0 )
    {
      v95 = *(_QWORD *)(v76 + 16);
      if ( (*(_BYTE *)v95 & 2) != 0 )
      {
        v102 = (_QWORD *)(*(_QWORD *)v76 & 0xFFFFFFFFFFFFFFFCLL);
        v103 = *v102;
        if ( (*v102 & 2) == 0 )
        {
          while ( v102[2] == v76 )
          {
            v76 = v103 & 0xFFFFFFFFFFFFFFFCLL;
            v103 = *(_QWORD *)(v103 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v103 & 2) != 0 )
              goto LABEL_126;
            v104 = v102;
            v102 = (_QWORD *)v76;
            v76 = (unsigned __int64)v104;
          }
        }
        v76 = (unsigned __int64)v102;
      }
      else
      {
        do
        {
          v76 = v95;
          v95 = *(_QWORD *)(v95 + 8);
        }
        while ( (*(_BYTE *)v95 & 2) == 0 );
      }
    }
LABEL_126:
    v75 = *v127;
    if ( v76 == *v127 )
      goto LABEL_96;
  }
  if ( j && *(_QWORD *)(v76 + 32) == 1 && **(_DWORD **)v78 == 1 )
    goto LABEL_96;
  v86 = *(int **)v78;
  v128 = *(_QWORD *)(v76 + 24) + 4LL * *(_QWORD *)(v76 + 32);
  if ( *(_QWORD *)v78 == v128 )
    goto LABEL_116;
  while ( 1 )
  {
    v123 = v64;
    v120 = v78;
    v87 = (unsigned __int64 *)(*v18 + 24LL * *v86);
    v63 = (__int64)v87;
    v88 = sub_FF5E0(v87, v78);
    v78 = v120;
    v64 = v123;
    if ( v88 != (_QWORD *)*v87 && v88[4] != 1 )
      break;
    if ( (int *)v128 == ++v86 )
      goto LABEL_116;
  }
LABEL_96:
  v79 = *(_QWORD *)(*a1 + 168LL) == v65;
  if ( *(_QWORD *)(*a1 + 168LL) <= (signed __int64)v65 )
  {
    v65 = v134;
    if ( !v79 )
    {
      if ( !under_debugger )
        sub_37CFE0(52906);
      goto LABEL_192;
    }
  }
  v80 = a1[1];
  if ( v80 == -1 || v65 < v80 )
  {
    if ( !under_debugger )
      sub_37CFE0(52877);
    goto LABEL_192;
  }
  v81 = v80 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  if ( v80 >= v65 )
  {
    a1[1] = v81;
    if ( v80 == v81 )
      v83 = a1[2] != 0;
    else
      v83 = v132;
    v82 = 0;
  }
  else
  {
    a1[1] = v81;
    v82 = v65 - v80;
    v83 = v80 != v81;
  }
  v84 = a1[4];
  a1[2] = v82 + v81 - v80;
  if ( get_tinfo_size(0, v84, 0) != a1[2] )
    clear_tinfo_t(a1 + 4);
  v66 = *a1;
  v68 = a1[2];
  v85 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  a1[3] = (v85 - 1 + v68 + a1[1]) & -v85;
  if ( v83 )
  {
    *(_DWORD *)v66 |= 0x8000000u;
    v66 = *a1;
    v68 = a1[2];
  }
  if ( a1[2] )
  {
    v67 = a1[1];
  }
  else
  {
    a1[1] = v130;
    v67 = v130;
  }
LABEL_68:
  v69 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v66 + 1440) + v67);
  v135 = 0;
  v70 = v69;
  v136 = 0;
  v119 = v69 + v68 - 1;
  if ( v119 >= v69 )
  {
    v135 = qvector_reserve(&v135, 0, 1, 16);
    *(__m128i *)(v135 + 16 * v136) = _mm_unpacklo_epi64((__m128i)v70, (__m128i)v68);
    *(_QWORD *)&v136 = v136 + 1;
  }
  v71 = sub_312800(v133 + 176, &v135);
  if ( v71 )
  {
    v72 = v135;
    if ( v135 )
      goto LABEL_72;
    goto LABEL_146;
  }
  v137 = 0;
  v138 = 0;
  if ( v119 >= v70 )
  {
    v137 = qvector_reserve(&v137, 0, 1, 16);
    *(__m128i *)(v137 + 16 * v138) = _mm_unpacklo_epi64((__m128i)v70, (__m128i)v68);
    *(_QWORD *)&v138 = v138 + 1;
  }
  v71 = sub_312800(v133 + 136, &v137);
  if ( v137 )
  {
    *(_QWORD *)&v138 = 0;
    qfree(v137);
  }
  v72 = v135;
  if ( v135 )
  {
LABEL_72:
    *(_QWORD *)&v136 = 0;
    qfree(v72);
  }
  if ( v71 )
  {
LABEL_146:
    v108 = *(_QWORD *)(*a1 + 784LL);
    if ( v108 )
      *(_DWORD *)(v108 + 48) = 63;
  }
  sub_100250(v131);
LABEL_75:
  *((_DWORD *)a1 + 17) |= 2u;
  sub_100250((__int64)v18);
  return v144 - __readfsqword(0x28u);
}
