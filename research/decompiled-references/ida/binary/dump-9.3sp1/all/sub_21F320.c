unsigned __int64 __fastcall sub_21F320(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v4; // rax
  char v6; // bl
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 tinfo_size; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  int v14; // eax
  int v15; // ebp
  __int64 v16; // rax
  _QWORD *v17; // rbx
  unsigned __int64 *v18; // r15
  __int64 v19; // r13
  __int64 v20; // rax
  signed __int64 *v21; // rsi
  _QWORD *v22; // rax
  signed __int64 v23; // rdx
  __int64 v24; // rdi
  unsigned __int64 v25; // r14
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // r11
  unsigned __int64 v32; // rsi
  char v33; // r13
  signed __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // eax
  signed __int64 i; // rax
  int v38; // eax
  __int64 v39; // rdi
  __int64 v40; // rbp
  signed __int64 v41; // rax
  unsigned __int64 v42; // r14
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdi
  bool v46; // r13
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r15
  __int64 v55; // r14
  __int64 v56; // rdx
  __int64 v57; // rax
  unsigned __int64 v58; // rdx
  unsigned __int64 v59; // rcx
  _QWORD *v60; // r13
  _QWORD *v61; // rax
  __int64 v62; // rdi
  _QWORD *v63; // r10
  unsigned __int64 v64; // r13
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r13
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rbp
  char v70; // r14
  __int64 v71; // rdi
  signed __int64 *v72; // rax
  unsigned __int64 v73; // r8
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rbp
  bool j; // si
  __int64 v77; // rcx
  bool v78; // zf
  unsigned __int64 v79; // rdx
  __int64 v80; // rax
  unsigned __int64 v81; // r9
  bool v82; // bp
  int v83; // edx
  int *v84; // r15
  unsigned __int64 *v85; // r14
  _QWORD *v86; // rax
  unsigned __int8 v87; // al
  __int64 v88; // r15
  __int64 v89; // r14
  __int64 v90; // rax
  __int64 v91; // rsi
  __int64 v92; // rsi
  unsigned __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rax
  const __m128i *v96; // rcx
  __int64 v97; // rax
  __m128i v98; // xmm0
  _QWORD *v100; // rax
  __int64 v101; // rdx
  _QWORD *v102; // rt1
  unsigned __int64 k; // rax
  unsigned __int64 v104; // rsi
  unsigned __int64 v105; // rsi
  __int64 v106; // rax
  unsigned __int64 v107; // r14
  __int64 v108; // rdi
  unsigned int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rdi
  bool v112; // bp
  unsigned __int64 v113; // rax
  int v114; // ecx
  int v115; // [rsp+0h] [rbp-E8h]
  unsigned __int64 v116; // [rsp+0h] [rbp-E8h]
  __int64 v117; // [rsp+0h] [rbp-E8h]
  __int64 v118; // [rsp+0h] [rbp-E8h]
  __int64 v119; // [rsp+8h] [rbp-E0h]
  _QWORD *v120; // [rsp+8h] [rbp-E0h]
  __int64 v121; // [rsp+8h] [rbp-E0h]
  _QWORD *v122; // [rsp+8h] [rbp-E0h]
  __int64 v123; // [rsp+18h] [rbp-D0h]
  unsigned __int64 *v124; // [rsp+18h] [rbp-D0h]
  __int64 v125; // [rsp+20h] [rbp-C8h]
  _QWORD *v126; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v127; // [rsp+28h] [rbp-C0h]
  __int64 v128; // [rsp+30h] [rbp-B8h]
  char v129; // [rsp+3Fh] [rbp-A9h]
  __int64 v130; // [rsp+40h] [rbp-A8h]
  signed __int64 v131; // [rsp+48h] [rbp-A0h]
  __int64 v132; // [rsp+50h] [rbp-98h] BYREF
  __int128 v133; // [rsp+58h] [rbp-90h]
  signed __int64 v134; // [rsp+70h] [rbp-78h] BYREF
  __int128 v135; // [rsp+78h] [rbp-70h]
  __int64 v136; // [rsp+88h] [rbp-60h]
  char v137; // [rsp+90h] [rbp-58h]
  int v138; // [rsp+98h] [rbp-50h]
  int v139; // [rsp+9Ch] [rbp-4Ch]
  char v140; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v141; // [rsp+A8h] [rbp-40h]

  v141 = __readfsqword(0x28u);
  v1 = *a1;
  if ( !*(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) )
    return v141 - __readfsqword(0x28u);
  v2 = *(int *)(v1 + 480);
  if ( (_DWORD)v2 != -1 )
  {
    v6 = sub_1C34E0(*(_QWORD *)(v1 + 432) + 104 * v2, &v132, &v134, *(_DWORD *)(*(_QWORD *)(v1 + 432) + 104 * v2 + 88));
    if ( v6 )
    {
      v7 = v132;
      v8 = v134;
      v9 = a1[1];
      v10 = v132 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
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
      a1[2] = v10 - v7;
      tinfo_size = get_tinfo_size();
      v12 = a1[2];
      if ( tinfo_size != v12 )
      {
        clear_tinfo_t();
        v12 = a1[2];
      }
      v13 = (_DWORD *)*a1;
      v14 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      a1[3] = (v12 + a1[1] + v14 - 1) & -v14;
      if ( v6 )
        *v13 |= 0x8000000u;
      return v141 - __readfsqword(0x28u);
    }
  }
  if ( (*((_BYTE *)a1 + 68) & 2) != 0 )
    return v141 - __readfsqword(0x28u);
  v4 = *a1;
  if ( *(_BYTE *)(*(_QWORD *)(*a1 + 1496LL) + 148LL) != 2 || *(_BYTE *)(v4 + 320) )
    return v141 - __readfsqword(0x28u);
  v15 = *(_DWORD *)(*(_QWORD *)(v4 + 1504) + 80LL);
  v16 = sub_1108E0(*(_QWORD *)(v4 + 784), 0);
  v17 = (_QWORD *)v16;
  if ( !v16 )
  {
    if ( !under_debugger )
      sub_383060(50446);
LABEL_192:
    BUG();
  }
  ++*(_DWORD *)(v16 + 24);
  v18 = *(unsigned __int64 **)v16;
  v19 = *(_QWORD *)(*a1 + 144LL);
  v20 = *(_QWORD *)(*a1 + 672LL);
  v134 = 0;
  v137 = 5;
  v138 = v20;
  v21 = &v134;
  v136 = v19;
  v139 = -1;
  v140 = 1;
  v135 = 0;
  v22 = sub_1041A0(v18, (__int64)&v134);
  v24 = v134;
  v25 = (unsigned __int64)v22;
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree(v134);
  }
  v26 = v15;
  while ( *v18 != v25 )
  {
    if ( *(_BYTE *)(v25 + 56) == 5 )
    {
      if ( *(_QWORD *)(v25 + 32) )
      {
        if ( *(_QWORD *)(v25 + 32) > 1u
          || (v21 = *(signed __int64 **)(v25 + 24),
              v23 = (unsigned int)(*(_DWORD *)(*a1 + 64LL) - 1),
              *(_DWORD *)v21 != (_DWORD)v23) )
        {
          if ( *(_BYTE *)(v25 + 56) != 5 )
            sub_21BD40(v24, v21, v23, v26);
          v27 = *(_QWORD *)(v25 + 48);
          v21 = (signed __int64 *)*a1;
          v28 = *(int *)(v25 + 64);
          if ( !((v27 - *(_QWORD *)(*a1 + 144LL)) % v26)
            || (v23 = v27 + (int)v28, v24 = v27 + v15 - 1, v23 > (v24 & -v15)) )
          {
            v24 = 1;
            if ( (int)v28 > 0 )
              v24 = *(int *)(v25 + 64);
            v29 = (v24 + v27 + *(_DWORD *)(v21[188] + 80) - 1) & -*(_DWORD *)(v21[188] + 80);
            v30 = a1[3];
            if ( v30 < v29 )
              v30 = (v24 + v27 + *(_DWORD *)(v21[188] + 80) - 1) & -*(_DWORD *)(v21[188] + 80);
            a1[3] = v30;
            v23 = a1[1];
            if ( v23 < v29 && !*((_BYTE *)v21 + 320) )
            {
              v31 = a1[2];
              v32 = v29 & -*(_DWORD *)(v21[188] + 80);
              v33 = v23 != v32;
              if ( v29 < v23 + v31 )
              {
                v34 = v23 + v31 + v32 - v29;
              }
              else
              {
                v33 |= v31 != 0;
                v34 = v32;
              }
              a1[1] = v32;
              a1[2] = v34 - v29;
              v123 = v26;
              v119 = v27;
              v115 = v28;
              v35 = get_tinfo_size();
              v24 = a1[2];
              v28 = v115;
              v27 = v119;
              v26 = v123;
              if ( v35 != v24 )
              {
                clear_tinfo_t();
                v24 = a1[2];
                v26 = v123;
                v27 = v119;
                v28 = v115;
              }
              v23 = *a1;
              v36 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
              v21 = (signed __int64 *)(v24 + a1[1] + v36 - 1);
              a1[3] = (unsigned __int64)v21 & -v36;
              if ( v33 )
                *(_DWORD *)v23 |= 0x8000000u;
            }
            v19 = v28 + v27;
          }
        }
      }
    }
    if ( (*(_QWORD *)v25 & 2) == 0 )
    {
      v23 = *(_QWORD *)(v25 + 16);
      if ( (*(_BYTE *)v23 & 2) != 0 )
      {
        v72 = (signed __int64 *)(*(_QWORD *)v25 & 0xFFFFFFFFFFFFFFFCLL);
        v23 = *v72;
        if ( (*v72 & 2) != 0 || v25 != v72[2] )
        {
LABEL_77:
          v25 = (unsigned __int64)v72;
        }
        else
        {
          while ( 1 )
          {
            v25 = v23 & 0xFFFFFFFFFFFFFFFCLL;
            v23 = *(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v23 & 2) != 0 )
              break;
            v21 = v72;
            v72 = (signed __int64 *)v25;
            if ( v21 != *(signed __int64 **)(v25 + 16) )
              goto LABEL_77;
          }
        }
      }
      else
      {
        for ( i = *(_QWORD *)(v23 + 8); (*(_BYTE *)i & 2) == 0; i = *(_QWORD *)(i + 8) )
          v23 = i;
        v25 = v23;
      }
    }
  }
  v129 = sub_21E760(a1);
  if ( !v129 )
    goto LABEL_75;
  v38 = v15 - 1;
  v39 = *a1;
  v40 = -v15;
  v41 = v40 & (v19 + v38);
  v127 = v41;
  v42 = v41;
  if ( a1[1] != -1 )
  {
    v43 = sub_1F5460(v39, v41);
    v44 = a1[1];
    v45 = a1[2];
    v46 = v129;
    if ( v43 < v42 )
      v43 = v42;
    v47 = v44 + v45 - v43;
    if ( v43 >= v44 + v45 )
      v47 = 0;
    v48 = v43 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    a1[1] = v48;
    if ( v44 == v48 )
      v46 = v45 != 0 && v47 == 0;
    a1[2] = v47 + v48 - v43;
    v49 = get_tinfo_size();
    v50 = a1[2];
    if ( v49 != v50 )
    {
      clear_tinfo_t();
      v50 = a1[2];
    }
    v39 = *a1;
    v51 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
    a1[3] = (v50 + a1[1] + v51 - 1) & -v51;
    if ( v46 )
    {
      *(_DWORD *)v39 |= 0x8000000u;
      v39 = *a1;
    }
  }
  v128 = sub_110340(*(_QWORD *)(v39 + 784), 0);
  if ( !v128 )
  {
    if ( !under_debugger )
      sub_383060(50446);
    goto LABEL_192;
  }
  ++*(_DWORD *)(v128 + 24);
  v130 = sub_1D5170(*a1, 0, v52, v53);
  v54 = a1[1];
  v55 = a1[2];
  v56 = 3LL * *(int *)(v130 + 72);
  v57 = *(_QWORD *)v128;
  v134 = 0;
  v136 = v54;
  v135 = 0;
  v124 = (unsigned __int64 *)(v57 + 8 * v56);
  v137 = 5;
  v138 = v55;
  v139 = -1;
  v140 = 1;
  v60 = sub_1041A0(v124, (__int64)&v134);
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree(v134);
  }
  v61 = v60;
  if ( v60 == (_QWORD *)*v124 )
    goto LABEL_66;
  v62 = (__int64)v124;
  while ( 1 )
  {
    v63 = v61 + 3;
    if ( *((_BYTE *)v61 + 56) != 5 )
      sub_21BD40(v124, v127, v58, v59);
    v64 = v40 & v61[6];
    a1[1] = v64;
    if ( v64 >= v127 )
      break;
    v58 = *v61;
    if ( (*v61 & 2) == 0 )
    {
      v59 = v61[2];
      if ( (*(_BYTE *)v59 & 2) != 0 )
      {
        v58 &= 0xFFFFFFFFFFFFFFFCLL;
        v59 = *(_QWORD *)v58;
        if ( (*(_QWORD *)v58 & 2) == 0 )
        {
          while ( *(_QWORD **)(v58 + 16) == v61 )
          {
            v61 = (_QWORD *)v58;
            v73 = v59 & 0xFFFFFFFFFFFFFFFCLL;
            v59 = *(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v59 & 2) != 0 )
            {
              v61 = (_QWORD *)v73;
              goto LABEL_65;
            }
            v58 = v73;
          }
        }
        v61 = (_QWORD *)v58;
      }
      else
      {
        do
        {
          v61 = (_QWORD *)v59;
          v59 = *(_QWORD *)(v59 + 8);
        }
        while ( (*(_BYTE *)v59 & 2) == 0 );
      }
    }
LABEL_65:
    if ( (_QWORD *)*v124 == v61 )
      goto LABEL_66;
  }
  v74 = *v124;
  if ( (_QWORD *)*v124 == v61 )
  {
LABEL_66:
    v65 = *a1;
    v66 = a1[1];
    if ( v66 < *(_QWORD *)(*a1 + 168LL) )
    {
      v112 = v129;
      v113 = v127 & -*(_DWORD *)(*(_QWORD *)(v65 + 1504) + 80LL);
      a1[1] = v113;
      if ( v66 == v113 )
        v112 = a1[2] != 0;
      a1[2] = v113 - v127;
      if ( get_tinfo_size() != a1[2] )
        clear_tinfo_t();
      v65 = *a1;
      v67 = a1[2];
      v114 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
      v66 = a1[1];
      a1[3] = (v114 - 1 + v66 + v67) & -v114;
      if ( !v112 )
        goto LABEL_68;
      *(_DWORD *)v65 |= 0x8000000u;
      v65 = *a1;
      v66 = a1[1];
    }
    v67 = a1[2];
    goto LABEL_68;
  }
  v75 = (unsigned __int64)v61;
  v131 = v54 + v55;
  for ( j = v127 < v64; ; j = 0 )
  {
    v77 = v75 + 24;
    if ( *(_BYTE *)(v75 + 56) != 5 || v131 <= *(_QWORD *)(v75 + 48) )
      goto LABEL_96;
    if ( *(_QWORD *)(v75 + 32) != 1 || **(_DWORD **)v77 )
      break;
    k = v75;
    if ( (*(_QWORD *)v75 & 2) == 0 )
    {
      v104 = *(_QWORD *)(v75 + 16);
      if ( (*(_BYTE *)v104 & 2) != 0 )
      {
        v105 = v75;
        for ( k = *(_QWORD *)v75 & 0xFFFFFFFFFFFFFFFCLL;
              (*(_QWORD *)k & 2) == 0 && *(_QWORD *)(k + 16) == v105;
              k = *(_QWORD *)k & 0xFFFFFFFFFFFFFFFCLL )
        {
          v105 = k;
        }
      }
      else
      {
        do
        {
          k = v104;
          v104 = *(_QWORD *)(v104 + 8);
        }
        while ( (*(_BYTE *)v104 & 2) == 0 );
      }
    }
    if ( k == v74 )
      goto LABEL_96;
    v107 = k + 24;
    if ( *(_BYTE *)(k + 56) != 5 || v131 <= *(_QWORD *)(k + 48) || *(_QWORD *)(k + 32) == 1 && !**(_DWORD **)(k + 24) )
      goto LABEL_96;
    v108 = *(unsigned int *)(k + 64);
    v122 = v63;
    v109 = round_down_power2();
    v77 = v75 + 24;
    v63 = v122;
    if ( *(_BYTE *)(v107 + 32) != 5 )
      sub_21BD40(v108, v109, v110, v77);
    v111 = *(_QWORD *)(v107 + 24);
    if ( v111 % v109 )
      goto LABEL_96;
    if ( *(_BYTE *)(v75 + 56) != 5 )
      sub_21BD40(v111, v109, 0, v77);
    v74 = *(_QWORD *)(v75 + 48) % (__int64)v109;
    if ( !v74 )
      goto LABEL_96;
    v62 = v111 - *(_QWORD *)(v75 + 48);
    if ( v109 <= v62 )
      goto LABEL_96;
LABEL_116:
    if ( *(_BYTE *)(v77 + 32) != 5
      || (v87 = *((_BYTE *)v63 + 32), v87 > 5u)
      || v87 >= 5u && *(_QWORD *)(v77 + 24) < v63[3] )
    {
      if ( !under_debugger )
        sub_383060(52852);
      goto LABEL_192;
    }
    v88 = *(_QWORD *)(v77 + 24);
    v89 = *(int *)(v77 + 40);
    v64 = v89 + v88;
    if ( *(_BYTE *)(v77 + 32) != 5 )
      sub_21BD40(v62, 5, v74, v77);
    v90 = a1[6];
    if ( a1[7] < (unsigned __int64)(v90 + 1) )
    {
      v126 = v63;
      v121 = a1[7];
      v91 = qvector_reserve((__int64)(a1 + 5), 0, v90 + 1, 16);
      v62 = a1[5];
      v94 = v91;
      v118 = a1[7];
      v95 = a1[6];
      a1[7] = v121;
      v96 = (const __m128i *)v62;
      v97 = v95 - 1;
      if ( v97 >= 0 )
      {
        do
        {
          v98 = _mm_loadu_si128(v96);
          v94 += 16;
          ++v96;
          *(__m128i *)(v94 - 16) = v98;
        }
        while ( v97-- != 0 );
        v62 = a1[5];
      }
      qfree(v62);
      v63 = v126;
      a1[7] = v118;
      v90 = a1[6];
      a1[5] = v91;
    }
    else
    {
      v91 = a1[5];
    }
    v92 = 16 * v90 + v91;
    *(_QWORD *)v92 = v88;
    *(_BYTE *)(v92 + 8) = 5;
    *(_DWORD *)(v92 + 12) = v89;
    ++a1[6];
    if ( (*(_QWORD *)v75 & 2) == 0 )
    {
      v93 = *(_QWORD *)(v75 + 16);
      if ( (*(_BYTE *)v93 & 2) != 0 )
      {
        v100 = (_QWORD *)(*(_QWORD *)v75 & 0xFFFFFFFFFFFFFFFCLL);
        v101 = *v100;
        if ( (*v100 & 2) == 0 )
        {
          while ( v100[2] == v75 )
          {
            v75 = v101 & 0xFFFFFFFFFFFFFFFCLL;
            v101 = *(_QWORD *)(v101 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v101 & 2) != 0 )
              goto LABEL_126;
            v102 = v100;
            v100 = (_QWORD *)v75;
            v75 = (unsigned __int64)v102;
          }
        }
        v75 = (unsigned __int64)v100;
      }
      else
      {
        do
        {
          v75 = v93;
          v93 = *(_QWORD *)(v93 + 8);
        }
        while ( (*(_BYTE *)v93 & 2) == 0 );
      }
    }
LABEL_126:
    v74 = *v124;
    if ( v75 == *v124 )
      goto LABEL_96;
  }
  if ( j && *(_QWORD *)(v75 + 32) == 1 && **(_DWORD **)v77 == 1 )
    goto LABEL_96;
  v84 = *(int **)v77;
  v125 = *(_QWORD *)(v75 + 24) + 4LL * *(_QWORD *)(v75 + 32);
  if ( *(_QWORD *)v77 == v125 )
    goto LABEL_116;
  while ( 1 )
  {
    v120 = v63;
    v117 = v77;
    v85 = (unsigned __int64 *)(*v17 + 24LL * *v84);
    v62 = (__int64)v85;
    v86 = sub_1041A0(v85, v77);
    v77 = v117;
    v63 = v120;
    if ( v86 != (_QWORD *)*v85 && v86[4] != 1 )
      break;
    if ( (int *)v125 == ++v84 )
      goto LABEL_116;
  }
LABEL_96:
  v78 = *(_QWORD *)(*a1 + 168LL) == v64;
  if ( *(_QWORD *)(*a1 + 168LL) <= (signed __int64)v64 )
  {
    v64 = v131;
    if ( !v78 )
    {
      if ( !under_debugger )
        sub_383060(52906);
      goto LABEL_192;
    }
  }
  v79 = a1[1];
  if ( v79 == -1 || v64 < v79 )
  {
    if ( !under_debugger )
      sub_383060(52877);
    goto LABEL_192;
  }
  v80 = v79 & -*(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  if ( v79 >= v64 )
  {
    a1[1] = v80;
    if ( v79 == v80 )
      v82 = a1[2] != 0;
    else
      v82 = v129;
    v81 = 0;
  }
  else
  {
    a1[1] = v80;
    v81 = v64 - v79;
    v82 = v79 != v80;
  }
  a1[2] = v81 + v80 - v79;
  if ( get_tinfo_size() != a1[2] )
    clear_tinfo_t();
  v65 = *a1;
  v67 = a1[2];
  v83 = *(_DWORD *)(*(_QWORD *)(*a1 + 1504LL) + 80LL);
  a1[3] = (v83 - 1 + v67 + a1[1]) & -v83;
  if ( v82 )
  {
    *(_DWORD *)v65 |= 0x8000000u;
    v65 = *a1;
    v67 = a1[2];
  }
  if ( a1[2] )
  {
    v66 = a1[1];
  }
  else
  {
    a1[1] = v127;
    v66 = v127;
  }
LABEL_68:
  v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v65 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v65 + 1440) + v66);
  v132 = 0;
  v69 = v68;
  v133 = 0;
  v116 = v68 + v67 - 1;
  if ( v116 >= v68 )
  {
    v132 = qvector_reserve((__int64)&v132, 0, 1, 16);
    *(__m128i *)(v132 + 16 * v133) = _mm_unpacklo_epi64((__m128i)v69, (__m128i)v67);
    *(_QWORD *)&v133 = v133 + 1;
  }
  v70 = sub_3180C0(v130 + 176, &v132);
  if ( v70 )
  {
    v71 = v132;
    if ( v132 )
      goto LABEL_72;
    goto LABEL_146;
  }
  v134 = 0;
  v135 = 0;
  if ( v116 >= v69 )
  {
    v134 = qvector_reserve((__int64)&v134, 0, 1, 16);
    *(__m128i *)(v134 + 16 * v135) = _mm_unpacklo_epi64((__m128i)v69, (__m128i)v67);
    *(_QWORD *)&v135 = v135 + 1;
  }
  v70 = sub_3180C0(v130 + 136, &v134);
  if ( v134 )
  {
    *(_QWORD *)&v135 = 0;
    qfree(v134);
  }
  v71 = v132;
  if ( v132 )
  {
LABEL_72:
    *(_QWORD *)&v133 = 0;
    qfree(v71);
  }
  if ( v70 )
  {
LABEL_146:
    v106 = *(_QWORD *)(*a1 + 784LL);
    if ( v106 )
      *(_DWORD *)(v106 + 48) = 63;
  }
  sub_104E10(v128);
LABEL_75:
  *((_DWORD *)a1 + 17) |= 2u;
  sub_104E10((__int64)v17);
  return v141 - __readfsqword(0x28u);
}
