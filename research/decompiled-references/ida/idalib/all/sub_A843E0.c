__int64 __fastcall sub_A843E0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 i; // r12
  __int64 v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  _QWORD *v9; // rdx
  unsigned __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rsi
  unsigned __int64 v21; // r13
  unsigned __int64 v22; // r14
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r15
  _QWORD *v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  int v30; // eax
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  _QWORD *m; // rax
  _QWORD *v35; // rsi
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // r13
  _QWORD *v38; // rdx
  unsigned __int64 v39; // r14
  void **v40; // rax
  __int64 *v41; // rax
  __int64 v42; // rdx
  int v43; // eax
  _QWORD *v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rax
  _QWORD *ii; // rax
  _QWORD *v48; // rsi
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // r13
  _QWORD *v51; // rdx
  unsigned __int64 v52; // r12
  __int64 v53; // r14
  void *v54; // rdi
  unsigned __int64 v55; // rdx
  __int64 v56; // rax
  __int64 *v57; // rax
  __int64 v58; // rdx
  int v59; // eax
  __int64 result; // rax
  _QWORD *v61; // rdi
  __int64 v62; // rax
  __int64 v63; // rsi
  unsigned int v64; // edx
  __int64 v65; // rsi
  _QWORD *j; // rax
  unsigned int v67; // edx
  __int64 v68; // rsi
  unsigned int v69; // edx
  __int64 v70; // rsi
  unsigned int v71; // edx
  __int64 v72; // rsi
  unsigned int v73; // eax
  __int64 v74; // rax
  _QWORD *v75; // rax
  unsigned int v76; // eax
  __int64 v77; // rax
  _QWORD *v78; // rax
  unsigned int v79; // eax
  int v80; // eax
  unsigned int v81; // eax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rbx
  int v85; // r13d
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  _QWORD *v90; // rax
  __int64 v91; // rdx
  _QWORD *jj; // rdx
  __int64 v93; // rbx
  int v94; // r12d
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 kk; // rdx
  __int64 v101; // rbx
  int v102; // r13d
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  _QWORD *v107; // rax
  __int64 v108; // rdx
  _QWORD *n; // rdx
  __int64 v110; // rbx
  int v111; // r13d
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  _QWORD *v116; // rax
  __int64 v117; // rdx
  _QWORD *k; // rdx
  unsigned int v119; // edx
  unsigned __int64 v120; // rax
  unsigned int v121; // edx
  unsigned __int64 v122; // rax
  unsigned int v123; // edx
  unsigned __int64 v124; // rax
  unsigned int v125; // edx
  unsigned __int64 v126; // rax
  __m128 v127[4]; // [rsp+0h] [rbp-48h] BYREF

  sub_B8F2B0();
  v2 = *(_QWORD *)(a1 + 22976);
  for ( i = v2 + 16LL * *(unsigned int *)(a1 + 22984); i != v2; v2 += 16 )
    (*(void (__fastcall **)(_QWORD))v2)(*(_QWORD *)(v2 + 8));
  v4 = *(unsigned int *)(a1 + 1112);
  v5 = *(_QWORD **)(a1 + 1096);
  *(_DWORD *)(a1 + 22984) = 0;
  v6 = &v5[2 * v4];
  if ( *(_DWORD *)(a1 + 1104) )
    sub_A83FA0(v127, v5, v6, a1 + 1096, 0);
  else
    sub_A83FA0(v127, v6, v6, a1 + 1096, 1);
  v7 = v127[0].m128_u64[1];
  v8 = v127[0].m128_u64[0];
  v9 = (_QWORD *)(*(_QWORD *)(a1 + 1096) + 16LL * *(unsigned int *)(a1 + 1112));
  sub_A83FA0(v127, v9, v9, a1 + 1096, 1);
  v10 = v127[0].m128_u64[0];
  if ( v127[0].m128_u64[0] != v8 )
  {
    v11 = (_QWORD *)(v8 + 16);
    if ( v8 + 16 != v7 )
      goto LABEL_7;
LABEL_17:
    v11 = (_QWORD *)v7;
    while ( 1 )
    {
LABEL_13:
      v15 = *(_QWORD *)(v8 + 8);
      if ( v15 )
        sub_ED5D30(v15, a1);
      if ( (_QWORD *)v10 == v11 )
        break;
      v8 = (unsigned __int64)v11;
      v11 += 2;
      if ( v11 == (_QWORD *)v7 )
        goto LABEL_17;
LABEL_7:
      v12 = *(_QWORD *)(v8 + 16);
      if ( v12 == -4096 || v12 == -8192 )
      {
        v13 = (_QWORD *)(v8 + 32);
        while ( 1 )
        {
          v11 = v13;
          if ( v13 == (_QWORD *)v7 )
            goto LABEL_17;
          v14 = *v13;
          v13 += 2;
          if ( v14 != -8192 && v14 != -4096 )
            goto LABEL_13;
        }
      }
    }
  }
  v16 = *(_DWORD *)(a1 + 1104);
  if ( !v16 )
  {
    if ( !*(_DWORD *)(a1 + 1108) )
      goto LABEL_22;
    v17 = *(_QWORD **)(a1 + 1096);
    v18 = *(unsigned int *)(a1 + 1112);
    v19 = 2 * v18;
    if ( (unsigned int)v18 > 0x40 )
    {
      operator delete(v17, v19 * 8, 8);
      *(_QWORD *)(a1 + 1096) = 0;
      *(_QWORD *)(a1 + 1104) = 0;
      *(_DWORD *)(a1 + 1112) = 0;
      goto LABEL_22;
    }
    goto LABEL_88;
  }
  v64 = 4 * v16;
  v65 = *(unsigned int *)(a1 + 1112);
  v17 = *(_QWORD **)(a1 + 1096);
  if ( (unsigned int)(4 * v16) < 0x40 )
    v64 = 64;
  if ( v64 >= (unsigned int)v65 )
  {
    v19 = 2LL * (unsigned int)v65;
LABEL_88:
    for ( j = &v17[v19]; j != v17; v17 += 2 )
      *v17 = -4096;
    *(_QWORD *)(a1 + 1104) = 0;
    goto LABEL_22;
  }
  v73 = v16 - 1;
  if ( v73 )
  {
    _BitScanReverse(&v73, v73);
    v74 = (unsigned int)(1 << (33 - (v73 ^ 0x1F)));
    if ( (int)v74 < 64 )
      v74 = 64;
    if ( (_DWORD)v74 == (_DWORD)v65 )
    {
      *(_QWORD *)(a1 + 1104) = 0;
      v75 = &v17[2 * v74];
      do
      {
        *v17 = -4096;
        v17 += 2;
      }
      while ( v75 != v17 );
      goto LABEL_22;
    }
    v121 = 4 * (int)v74 / 3u;
    v122 = (((v121 + 1) | ((unsigned __int64)(v121 + 1) >> 1) | (((v121 + 1) | ((unsigned __int64)(v121 + 1) >> 1)) >> 2)) >> 4)
         | (v121 + 1)
         | ((unsigned __int64)(v121 + 1) >> 1)
         | (((v121 + 1) | ((unsigned __int64)(v121 + 1) >> 1)) >> 2)
         | (((((v121 + 1)
             | ((unsigned __int64)(v121 + 1) >> 1)
             | (((v121 + 1) | ((unsigned __int64)(v121 + 1) >> 1)) >> 2)) >> 4)
           | (v121 + 1)
           | ((unsigned __int64)(v121 + 1) >> 1)
           | (((v121 + 1) | ((unsigned __int64)(v121 + 1) >> 1)) >> 2)) >> 8);
    v111 = (v122 | (v122 >> 16)) + 1;
    v110 = 16 * ((v122 | (v122 >> 16)) + 1);
  }
  else
  {
    v110 = 2048;
    v111 = 128;
  }
  operator delete(v17, 16 * v65, 8);
  *(_DWORD *)(a1 + 1112) = v111;
  v116 = (_QWORD *)sub_22300B0(v110, 8, v112, v113, v114, v115);
  v117 = *(unsigned int *)(a1 + 1112);
  *(_QWORD *)(a1 + 1104) = 0;
  *(_QWORD *)(a1 + 1096) = v116;
  for ( k = &v116[2 * v117]; k != v116; v116 += 2 )
    *v116 = -4096;
LABEL_22:
  v20 = *(_QWORD **)(a1 + 1072);
  if ( *(_DWORD *)(a1 + 1080) )
    sub_A84010(v127, v20, &v20[2 * *(unsigned int *)(a1 + 1088)], a1 + 1072, 0);
  else
    sub_A84010(v127, &v20[2 * *(unsigned int *)(a1 + 1088)], &v20[2 * *(unsigned int *)(a1 + 1088)], a1 + 1072, 1);
  v21 = v127[0].m128_u64[1];
  v22 = v127[0].m128_u64[0];
  v23 = (_QWORD *)(*(_QWORD *)(a1 + 1072) + 16LL * *(unsigned int *)(a1 + 1088));
  sub_A84010(v127, v23, v23, a1 + 1072, 1);
  v24 = v127[0].m128_u64[0];
  if ( v127[0].m128_u64[0] != v22 )
  {
    v25 = (_QWORD *)(v22 + 16);
    if ( v22 + 16 != v21 )
      goto LABEL_26;
LABEL_36:
    v25 = (_QWORD *)v21;
    while ( 1 )
    {
LABEL_32:
      v29 = *(_QWORD *)(v22 + 8);
      if ( v29 )
        sub_ED5D30(v29, a1);
      if ( (_QWORD *)v24 == v25 )
        break;
      v22 = (unsigned __int64)v25;
      v25 += 2;
      if ( v25 == (_QWORD *)v21 )
        goto LABEL_36;
LABEL_26:
      v26 = *(_QWORD *)(v22 + 16);
      if ( v26 == -4096 || v26 == -8192 )
      {
        v27 = (_QWORD *)(v22 + 32);
        while ( 1 )
        {
          v25 = v27;
          if ( v27 == (_QWORD *)v21 )
            goto LABEL_36;
          v28 = *v27;
          v27 += 2;
          if ( v28 != -8192 && v28 != -4096 )
            goto LABEL_32;
        }
      }
    }
  }
  v30 = *(_DWORD *)(a1 + 1080);
  if ( !v30 )
  {
    if ( !*(_DWORD *)(a1 + 1084) )
      goto LABEL_43;
    v31 = *(_QWORD **)(a1 + 1072);
    v32 = *(unsigned int *)(a1 + 1088);
    v33 = 2 * v32;
    if ( (unsigned int)v32 > 0x40 )
    {
      operator delete(v31, v33 * 8, 8);
      *(_QWORD *)(a1 + 1072) = 0;
      *(_QWORD *)(a1 + 1080) = 0;
      *(_DWORD *)(a1 + 1088) = 0;
      goto LABEL_43;
    }
    goto LABEL_40;
  }
  v71 = 4 * v30;
  v72 = *(unsigned int *)(a1 + 1088);
  v31 = *(_QWORD **)(a1 + 1072);
  if ( (unsigned int)(4 * v30) < 0x40 )
    v71 = 64;
  if ( v71 >= (unsigned int)v72 )
  {
    v33 = 2LL * (unsigned int)v72;
LABEL_40:
    for ( m = &v31[v33]; m != v31; v31 += 2 )
      *v31 = -4096;
    *(_QWORD *)(a1 + 1080) = 0;
    goto LABEL_43;
  }
  v76 = v30 - 1;
  if ( v76 )
  {
    _BitScanReverse(&v76, v76);
    v77 = (unsigned int)(1 << (33 - (v76 ^ 0x1F)));
    if ( (int)v77 < 64 )
      v77 = 64;
    if ( (_DWORD)v77 == (_DWORD)v72 )
    {
      *(_QWORD *)(a1 + 1080) = 0;
      v78 = &v31[2 * v77];
      do
      {
        *v31 = -4096;
        v31 += 2;
      }
      while ( v78 != v31 );
      goto LABEL_43;
    }
    v119 = 4 * (int)v77 / 3u;
    v120 = (((v119 + 1) | ((unsigned __int64)(v119 + 1) >> 1) | (((v119 + 1) | ((unsigned __int64)(v119 + 1) >> 1)) >> 2)) >> 4)
         | (v119 + 1)
         | ((unsigned __int64)(v119 + 1) >> 1)
         | (((v119 + 1) | ((unsigned __int64)(v119 + 1) >> 1)) >> 2)
         | (((((v119 + 1)
             | ((unsigned __int64)(v119 + 1) >> 1)
             | (((v119 + 1) | ((unsigned __int64)(v119 + 1) >> 1)) >> 2)) >> 4)
           | (v119 + 1)
           | ((unsigned __int64)(v119 + 1) >> 1)
           | (((v119 + 1) | ((unsigned __int64)(v119 + 1) >> 1)) >> 2)) >> 8);
    v102 = (v120 | (v120 >> 16)) + 1;
    v101 = 16 * ((v120 | (v120 >> 16)) + 1);
  }
  else
  {
    v101 = 2048;
    v102 = 128;
  }
  operator delete(v31, 16 * v72, 8);
  *(_DWORD *)(a1 + 1088) = v102;
  v107 = (_QWORD *)sub_22300B0(v101, 8, v103, v104, v105, v106);
  v108 = *(unsigned int *)(a1 + 1088);
  *(_QWORD *)(a1 + 1080) = 0;
  *(_QWORD *)(a1 + 1072) = v107;
  for ( n = &v107[2 * v108]; n != v107; v107 += 2 )
    *v107 = -4096;
LABEL_43:
  v35 = *(_QWORD **)(a1 + 1704);
  if ( *(_DWORD *)(a1 + 1712) )
    sub_A84080(v127, v35, &v35[2 * *(unsigned int *)(a1 + 1720)], a1 + 1704, 0);
  else
    sub_A84080(v127, &v35[2 * *(unsigned int *)(a1 + 1720)], &v35[2 * *(unsigned int *)(a1 + 1720)], a1 + 1704, 1);
  v36 = v127[0].m128_u64[1];
  v37 = v127[0].m128_u64[0];
  v38 = (_QWORD *)(*(_QWORD *)(a1 + 1704) + 16LL * *(unsigned int *)(a1 + 1720));
  sub_A84080(v127, v38, v38, a1 + 1704, 1);
  v39 = v127[0].m128_u64[0];
  while ( v37 != v39 )
  {
    v40 = *(void ***)(v37 + 8);
    if ( *v40 != v40 + 2 )
      free(*v40);
    v41 = (__int64 *)(v37 + 16);
    if ( v37 + 16 == v36 )
      goto LABEL_54;
    v42 = *(_QWORD *)(v37 + 16);
    if ( v42 != -8192 )
    {
LABEL_52:
      if ( v42 != -4096 )
      {
        v37 = (unsigned __int64)v41;
        continue;
      }
    }
    while ( 1 )
    {
      v41 += 2;
      if ( v41 == (__int64 *)v36 )
        break;
      v42 = *v41;
      if ( *v41 != -8192 )
        goto LABEL_52;
    }
LABEL_54:
    v37 = v36;
  }
  v43 = *(_DWORD *)(a1 + 1712);
  if ( !v43 )
  {
    if ( !*(_DWORD *)(a1 + 1716) )
      goto LABEL_62;
    v44 = *(_QWORD **)(a1 + 1704);
    v45 = *(unsigned int *)(a1 + 1720);
    v46 = 2 * v45;
    if ( (unsigned int)v45 > 0x40 )
    {
      operator delete(v44, v46 * 8, 8);
      *(_QWORD *)(a1 + 1704) = 0;
      *(_QWORD *)(a1 + 1712) = 0;
      *(_DWORD *)(a1 + 1720) = 0;
      goto LABEL_62;
    }
    goto LABEL_59;
  }
  v69 = 4 * v43;
  v70 = *(unsigned int *)(a1 + 1720);
  v44 = *(_QWORD **)(a1 + 1704);
  if ( (unsigned int)(4 * v43) < 0x40 )
    v69 = 64;
  if ( v69 >= (unsigned int)v70 )
  {
    v46 = 2LL * (unsigned int)v70;
LABEL_59:
    for ( ii = &v44[v46]; ii != v44; v44 += 2 )
      *v44 = -4096;
    *(_QWORD *)(a1 + 1712) = 0;
    goto LABEL_62;
  }
  v81 = v43 - 1;
  if ( v81 )
  {
    _BitScanReverse(&v81, v81);
    v82 = (unsigned int)(1 << (33 - (v81 ^ 0x1F)));
    if ( (int)v82 < 64 )
      v82 = 64;
    if ( (_DWORD)v82 == (_DWORD)v70 )
    {
      *(_QWORD *)(a1 + 1712) = 0;
      v83 = &v44[2 * v82];
      do
      {
        *v44 = -4096;
        v44 += 2;
      }
      while ( v83 != v44 );
      goto LABEL_62;
    }
    v123 = 4 * (int)v82 / 3u;
    v124 = (((v123 + 1) | ((unsigned __int64)(v123 + 1) >> 1) | (((v123 + 1) | ((unsigned __int64)(v123 + 1) >> 1)) >> 2)) >> 4)
         | (v123 + 1)
         | ((unsigned __int64)(v123 + 1) >> 1)
         | (((v123 + 1) | ((unsigned __int64)(v123 + 1) >> 1)) >> 2)
         | (((((v123 + 1)
             | ((unsigned __int64)(v123 + 1) >> 1)
             | (((v123 + 1) | ((unsigned __int64)(v123 + 1) >> 1)) >> 2)) >> 4)
           | (v123 + 1)
           | ((unsigned __int64)(v123 + 1) >> 1)
           | (((v123 + 1) | ((unsigned __int64)(v123 + 1) >> 1)) >> 2)) >> 8);
    v85 = (v124 | (v124 >> 16)) + 1;
    v84 = 16 * ((v124 | (v124 >> 16)) + 1);
  }
  else
  {
    v84 = 2048;
    v85 = 128;
  }
  operator delete(v44, 16 * v70, 8);
  *(_DWORD *)(a1 + 1720) = v85;
  v90 = (_QWORD *)sub_22300B0(v84, 8, v86, v87, v88, v89);
  v91 = *(unsigned int *)(a1 + 1720);
  *(_QWORD *)(a1 + 1712) = 0;
  *(_QWORD *)(a1 + 1704) = v90;
  for ( jj = &v90[2 * v91]; jj != v90; v90 += 2 )
    *v90 = -4096;
LABEL_62:
  v48 = *(_QWORD **)(a1 + 1776);
  if ( *(_DWORD *)(a1 + 1784) )
    sub_A84230(v127, v48, &v48[2 * *(unsigned int *)(a1 + 1792)], a1 + 1776, 0);
  else
    sub_A84230(v127, &v48[2 * *(unsigned int *)(a1 + 1792)], &v48[2 * *(unsigned int *)(a1 + 1792)], a1 + 1776, 1);
  v50 = v127[0].m128_u64[1];
  v49 = v127[0].m128_u64[0];
  v51 = (_QWORD *)(*(_QWORD *)(a1 + 1776) + 16LL * *(unsigned int *)(a1 + 1792));
  sub_A84230(v127, v51, v51, a1 + 1776, 1);
  v52 = v127[0].m128_u64[0];
  if ( v127[0].m128_u64[0] != v49 )
  {
    do
    {
      while ( 1 )
      {
LABEL_65:
        v53 = *(_QWORD *)(v49 + 8);
        v54 = *(void **)(v53 + 48);
        if ( v54 != (void *)(v53 + 64) )
          free(v54);
        if ( *(_QWORD *)v53 != v53 + 16 )
          free(*(void **)v53);
        v55 = v49 + 16;
        if ( v49 + 16 != v50 )
          break;
LABEL_93:
        v49 = v50;
        if ( v52 == v50 )
          goto LABEL_77;
      }
      v56 = *(_QWORD *)(v49 + 16);
      if ( v56 == -8192 || v56 == -4096 )
      {
        v57 = (__int64 *)(v49 + 32);
        while ( 1 )
        {
          v49 = (unsigned __int64)v57;
          if ( v57 == (__int64 *)v50 )
            goto LABEL_93;
          v58 = *v57;
          v57 += 2;
          if ( v58 != -4096 && v58 != -8192 )
          {
            if ( v52 != v49 )
              goto LABEL_65;
            goto LABEL_77;
          }
        }
      }
      v49 += 16LL;
    }
    while ( v52 != v55 );
  }
LABEL_77:
  v59 = *(_DWORD *)(a1 + 1784);
  if ( !v59 )
  {
    result = *(unsigned int *)(a1 + 1788);
    if ( !(_DWORD)result )
      return result;
    v61 = *(_QWORD **)(a1 + 1776);
    v62 = *(unsigned int *)(a1 + 1792);
    v63 = 2 * v62;
    if ( (unsigned int)v62 > 0x40 )
    {
      result = operator delete(v61, v63 * 8, 8);
      *(_QWORD *)(a1 + 1776) = 0;
      *(_QWORD *)(a1 + 1784) = 0;
      *(_DWORD *)(a1 + 1792) = 0;
      return result;
    }
    goto LABEL_80;
  }
  v67 = 4 * v59;
  v68 = *(unsigned int *)(a1 + 1792);
  v61 = *(_QWORD **)(a1 + 1776);
  if ( (unsigned int)(4 * v59) < 0x40 )
    v67 = 64;
  if ( (unsigned int)v68 <= v67 )
  {
    v63 = 2 * v68;
LABEL_80:
    for ( result = (__int64)&v61[v63]; (_QWORD *)result != v61; v61 += 2 )
      *v61 = -4096;
    *(_QWORD *)(a1 + 1784) = 0;
    return result;
  }
  v79 = v59 - 1;
  if ( v79 )
  {
    _BitScanReverse(&v79, v79);
    v80 = 1 << (33 - (v79 ^ 0x1F));
    if ( v80 < 64 )
      v80 = 64;
    if ( (_DWORD)v68 == v80 )
    {
      *(_QWORD *)(a1 + 1784) = 0;
      result = (__int64)&v61[2 * (unsigned int)v68];
      do
      {
        *v61 = -4096;
        v61 += 2;
      }
      while ( (_QWORD *)result != v61 );
      return result;
    }
    v125 = 4 * v80 / 3u;
    v126 = (((v125 + 1) | ((unsigned __int64)(v125 + 1) >> 1) | (((v125 + 1) | ((unsigned __int64)(v125 + 1) >> 1)) >> 2)) >> 4)
         | (v125 + 1)
         | ((unsigned __int64)(v125 + 1) >> 1)
         | (((v125 + 1) | ((unsigned __int64)(v125 + 1) >> 1)) >> 2)
         | (((((v125 + 1)
             | ((unsigned __int64)(v125 + 1) >> 1)
             | (((v125 + 1) | ((unsigned __int64)(v125 + 1) >> 1)) >> 2)) >> 4)
           | (v125 + 1)
           | ((unsigned __int64)(v125 + 1) >> 1)
           | (((v125 + 1) | ((unsigned __int64)(v125 + 1) >> 1)) >> 2)) >> 8);
    v94 = (v126 | (v126 >> 16)) + 1;
    v93 = 16 * ((v126 | (v126 >> 16)) + 1);
  }
  else
  {
    v93 = 2048;
    v94 = 128;
  }
  operator delete(v61, 16 * v68, 8);
  *(_DWORD *)(a1 + 1792) = v94;
  result = sub_22300B0(v93, 8, v95, v96, v97, v98);
  v99 = *(unsigned int *)(a1 + 1792);
  *(_QWORD *)(a1 + 1784) = 0;
  *(_QWORD *)(a1 + 1776) = result;
  for ( kk = result + 16 * v99; kk != result; result += 16 )
    *(_QWORD *)result = -4096;
  return result;
}
