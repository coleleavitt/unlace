__int64 __fastcall sub_C3CAE0(__m128i *a1, __int64 a2, void **a3)
{
  __m128i *v5; // rbx
  __m128i v6; // xmm0
  void (__fastcall ***v7)(void *); // rbp
  bool v8; // zf
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // rax
  int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // rdx
  char v16; // al
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // eax
  int v22; // eax
  __int64 *v23; // rcx
  char v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  int v27; // esi
  __int64 *v28; // rbp
  __int64 *v29; // rbx
  int *v30; // rax
  unsigned int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rax
  void *v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // r12
  _QWORD *v38; // rdx
  unsigned int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 *v42; // rcx
  __int64 v43; // rsi
  __int64 *v44; // rax
  void *v45; // rbp
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // rax
  __int64 v49; // rsi
  unsigned int v50; // ebx
  __int64 v51; // rsi
  __int64 v52; // rcx
  char v53; // dl
  unsigned int v54; // edx
  int v55; // edx
  __int64 *v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdi
  __int64 v59; // rbx
  __int64 v60; // rax
  __m128 v61; // xmm0
  __int64 v62; // rsi
  unsigned int v63; // r13d
  _DWORD *v64; // rdx
  __int64 v65; // rcx
  char v66; // dl
  unsigned int v67; // edx
  int v68; // edx
  _DWORD **v69; // rax
  unsigned int v70; // r13d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // ebx
  __int64 v76; // rbp
  _DWORD *v77; // rax
  int v78; // ebp
  void *v79; // rbx
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // rbx
  __int64 v83; // rdi
  __int64 v84; // r13
  __int64 v85; // rax
  __int64 v86; // rbx
  void *v87; // rbp
  __int64 v88; // rsi
  void *v89; // rbp
  int v90; // r8d
  int v91; // r9d
  __int64 v92; // rax
  __int64 v93; // rsi
  unsigned int v94; // ebx
  __int64 v95; // rsi
  __int64 v96; // rcx
  char v97; // dl
  unsigned int v98; // edx
  int v99; // edx
  __int64 *v100; // rax
  __int64 v101; // rsi
  __int64 v102; // rdi
  _DWORD *v103; // rsi
  __int64 v104; // rdi
  int v105; // r8d
  int v106; // r9d
  _DWORD *v107; // rbx
  void (__fastcall ***v108)(void *); // rbp
  __int64 v109; // rdx
  unsigned int v110; // ebx
  __int64 v111; // rax
  unsigned int v112; // r13d
  __m128i *v113; // r11
  __int64 v114; // rbx
  __m128 *v115; // r12
  unsigned int v116; // eax
  __int64 v117; // rdx
  int v118; // eax
  __m128 *v119; // rdx
  __int64 v120; // rbx
  unsigned int v122; // r10d
  unsigned int v123; // edx
  __int64 v124; // rax
  __int64 v125; // r11
  int v126; // r10d
  _QWORD *v127; // rbp
  __int64 v128; // rdi
  __int64 v129; // rdx
  _QWORD *v130; // rcx
  _QWORD *i; // rax
  __int64 v132; // r9
  __int64 v133; // r9
  __int64 v134; // r9
  __int64 *v135; // rbx
  __int64 *v136; // rbp
  __int64 v137; // rsi
  __int64 v138; // rdi
  __int64 v139; // rsi
  __int64 v140; // rdi
  _QWORD *v141; // rax
  __int64 v142; // rdi
  _QWORD *v143; // r12
  char **v144; // r12
  __int64 v145; // rdx
  char **exception; // r12
  __int64 v147; // rdx
  char **v148; // r12
  __int64 v149; // rdx
  int *v150; // [rsp+0h] [rbp-108h]
  unsigned int v151; // [rsp+0h] [rbp-108h]
  __m128i *v152; // [rsp+0h] [rbp-108h]
  void *v153; // [rsp+0h] [rbp-108h]
  __int64 *v154; // [rsp+0h] [rbp-108h]
  __int64 m128i_i64; // [rsp+8h] [rbp-100h] BYREF
  __m128i *v156; // [rsp+10h] [rbp-F8h]
  _DWORD *v157; // [rsp+18h] [rbp-F0h]
  char *v158; // [rsp+20h] [rbp-E8h]
  void **v159; // [rsp+28h] [rbp-E0h]
  char v160[8]; // [rsp+38h] [rbp-D0h] BYREF
  int v161; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v162; // [rsp+48h] [rbp-C0h]
  void *ptr; // [rsp+50h] [rbp-B8h]
  int v164[4]; // [rsp+60h] [rbp-A8h] BYREF
  __m128i v165; // [rsp+70h] [rbp-98h] BYREF
  int v166; // [rsp+80h] [rbp-88h]
  __int128 v167; // [rsp+88h] [rbp-80h]
  _QWORD v168[2]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v169; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v170; // [rsp+B0h] [rbp-58h]
  __int16 v171; // [rsp+C0h] [rbp-48h]

  v159 = a3;
  v158 = v160;
  sub_EE4940(v160, "nla->bv", a2);
  v5 = (__m128i *)sub_186B270(0x50u);
  v5[1].m128i_i8[8] = 1;
  v6 = _mm_loadl_epi64(a1);
  v5[1].m128i_i64[0] = 0;
  v7 = (void (__fastcall ***)(void *))a1[39].m128i_i64[1];
  strcpy(&v5[3].m128i_i8[8], "nla2bv");
  v5->m128i_i64[0] = (__int64)&off_1C60CE8;
  v5[3].m128i_i64[0] = 6;
  v5[4].m128i_i64[1] = 0;
  v5->m128i_i32[2] = 1;
  v5[2] = _mm_unpacklo_epi64(v6, (__m128i)(unsigned __int64)&v5[3].m128i_u64[1]);
  if ( v7 )
  {
    v8 = (*((_DWORD *)v7 + 2))-- == 1;
    if ( v8 )
    {
      (**v7)(v7);
      sub_186B220(v7);
    }
  }
  v9 = *(_QWORD *)(a2 + 72);
  a1[39].m128i_i64[1] = (__int64)v5;
  if ( !v9 )
    goto LABEL_38;
  v10 = *(_QWORD *)a2;
  v11 = 0;
  while ( 2 )
  {
    v16 = *(_BYTE *)(v9 + 3) >> 6;
    if ( v16 )
    {
      if ( v16 != 1 )
        goto LABEL_15;
LABEL_37:
      if ( v11 >= *(_DWORD *)(v9 + 4) + 1 )
        break;
      goto LABEL_18;
    }
    do
    {
      v9 = *(_QWORD *)(v9 + 16);
      v16 = *(_BYTE *)(v9 + 3) >> 6;
    }
    while ( !v16 );
    if ( v16 == 1 )
      goto LABEL_37;
LABEL_15:
    if ( v16 == 2 )
      v17 = *(_DWORD *)(v9 + 4) - 1;
    else
      v17 = *(_DWORD *)(v9 + 4);
    if ( v11 >= v17 )
      break;
LABEL_18:
    v18 = *(_QWORD *)(a2 + 88);
    if ( !v18 )
      goto LABEL_29;
    v19 = *(_QWORD *)(a2 + 88);
    v20 = *(_BYTE *)(v18 + 3) >> 6;
    if ( v20 )
    {
      if ( v20 != 1 )
        goto LABEL_21;
    }
    else
    {
      do
      {
        v19 = *(_QWORD *)(v19 + 16);
        v20 = *(_BYTE *)(v19 + 3) >> 6;
      }
      while ( !v20 );
      if ( v20 != 1 )
      {
LABEL_21:
        if ( v20 == 2 )
          v21 = *(_DWORD *)(v19 + 4) - 1;
        else
          v21 = *(_DWORD *)(v19 + 4);
        if ( v11 >= v21 )
        {
LABEL_75:
          LODWORD(v18) = 0;
          goto LABEL_29;
        }
        goto LABEL_24;
      }
    }
    if ( v11 >= *(_DWORD *)(v19 + 4) + 1 )
      goto LABEL_75;
LABEL_24:
    v22 = 17;
    while ( 1 )
    {
      if ( *(char *)(v18 + 3) < 0 )
      {
        if ( *(_BYTE *)(v18 + 3) >> 6 != 2 )
        {
          v23 = (__int64 *)(*(_QWORD *)(v18 + 16) + 8LL * v11);
          goto LABEL_28;
        }
        goto LABEL_80;
      }
      if ( *(_DWORD *)(v18 + 4) == v11 )
        break;
LABEL_80:
      v18 = *(_QWORD *)(v18 + 16);
      if ( !--v22 )
      {
        sub_233F80((__int64 *)(v10 + 616), (_DWORD *)(a2 + 88));
        v10 = *(_QWORD *)a2;
        v23 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 88) + 16LL) + 8LL * v11);
        goto LABEL_28;
      }
    }
    v23 = (__int64 *)(v18 + 8);
LABEL_28:
    v18 = *v23;
LABEL_29:
    v24 = *(_BYTE *)(a2 + 123);
    v25 = v10;
    if ( (v24 & 0x10) == 0 )
    {
      v15 = 0;
      if ( (*(_BYTE *)(a2 + 123) & 0x20) != 0 )
        goto LABEL_11;
      goto LABEL_31;
    }
    v12 = *(_QWORD *)(a2 + 104);
    v13 = 17;
    while ( 2 )
    {
      if ( *(char *)(v12 + 3) < 0 )
      {
        if ( *(_BYTE *)(v12 + 3) >> 6 != 2 )
        {
          v14 = (__int64 *)(*(_QWORD *)(v12 + 16) + 8LL * v11);
          goto LABEL_10;
        }
LABEL_77:
        v12 = *(_QWORD *)(v12 + 16);
        if ( !--v13 )
        {
          LODWORD(v150) = v18;
          sub_236900((_QWORD *)(v10 + 672), (__int64 *)(a2 + 104));
          v24 = *(_BYTE *)(a2 + 123);
          v25 = *(_QWORD *)a2;
          LODWORD(v18) = (_DWORD)v150;
          v14 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL) + 8LL * v11);
          goto LABEL_10;
        }
        continue;
      }
      break;
    }
    if ( v11 != *(_DWORD *)(v12 + 4) )
      goto LABEL_77;
    v14 = (__int64 *)(v12 + 8);
LABEL_10:
    v15 = *v14;
    if ( (v24 & 0x20) == 0 )
    {
LABEL_31:
      v26 = *(_QWORD *)(a2 + 72);
      v27 = 17;
      do
      {
        if ( *(char *)(v26 + 3) >= 0 )
        {
          if ( *(_DWORD *)(v26 + 4) == v11 )
            goto LABEL_11;
        }
        else if ( *(_BYTE *)(v26 + 3) >> 6 != 2 )
        {
          goto LABEL_11;
        }
        v26 = *(_QWORD *)(v26 + 16);
        --v27;
      }
      while ( v27 );
      m128i_i64 = v15;
      LODWORD(v150) = v18;
      sub_233F80((__int64 *)(v25 + 616), (_DWORD *)(a2 + 72));
    }
LABEL_11:
    sub_F79EF0((_DWORD)a1 + 392);
    v9 = *(_QWORD *)(a2 + 72);
    ++v11;
    if ( v9 )
    {
      v10 = *(_QWORD *)a2;
      continue;
    }
    break;
  }
LABEL_38:
  sub_CB6780(&a1[20].m128i_u64[1], a2);
  if ( !a1[22].m128i_i32[3] )
    goto LABEL_94;
  v28 = (__int64 *)a1[22].m128i_i64[0];
  v29 = &v28[2 * a1[22].m128i_u32[2]];
  if ( v28 != v29 )
  {
    while ( (unsigned __int64)*v28 <= 1 )
    {
      v28 += 2;
      if ( v29 == v28 )
        goto LABEL_56;
    }
    if ( v29 != v28 )
    {
      m128i_i64 = (__int64)a1[2].m128i_i64;
      v156 = &v165;
      do
      {
        v30 = *(int **)(*(_QWORD *)(sub_15D1F10(v28[1]) + 24) + 8LL);
        if ( *((_BYTE *)v30 + 8) )
          sub_A8ADA((__int64)"std::get: wrong index for variant");
        v31 = *v30;
        *(_QWORD *)v164 = 1;
        *(_QWORD *)&v164[2] = 0;
        v151 = v31;
        v165 = (__m128i)1uLL;
        sub_182CBA0(qword_1C7F2C0, v156);
        v32 = v151;
        v165.m128i_i32[0] = 1;
        v165.m128i_i8[4] &= ~1u;
        v150 = v164;
        v33 = sub_1674520(m128i_i64, v164, v32);
        v34 = qword_1C7F2C0;
        v157 = (_DWORD *)v33;
        sub_182CBA0(qword_1C7F2C0, v164);
        sub_182CBA0(v34, v156);
        v35 = sub_15E1B70(a1[2].m128i_i64[1]);
        v36 = sub_16747F0(m128i_i64, v35);
        v37 = v36;
        if ( v36 )
          ++*(_DWORD *)(v36 + 8);
        v38 = (_QWORD *)a1[38].m128i_i64[1];
        if ( v38 )
        {
          v39 = *((_DWORD *)v38 - 1);
          if ( v39 == *((_DWORD *)v38 - 2) )
          {
            v70 = (3 * v39 + 1) >> 1;
            v71 = 8 * v70 + 8;
            if ( 8 * v39 + 8 >= (unsigned int)v71 || v39 >= v70 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_15FB08((__int64 *)v164, "Overflow encountered when expanding vector", v147);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v164);
              sub_233E40((__int64)v164);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v72 = (unsigned int *)sub_186B300(v38 - 1, v71);
            v73 = v72[1];
            v38 = v72 + 2;
            *v72 = v70;
            a1[38].m128i_i64[1] = (__int64)(v72 + 2);
            LODWORD(v72) = v73;
            v42 = &v38[v73];
            v41 = (_DWORD)v72 + 1;
          }
          else
          {
            v40 = v39;
            v41 = v39 + 1;
            v42 = &v38[v40];
          }
        }
        else
        {
          v141 = (_QWORD *)sub_186B270(0x18u);
          v38 = v141 + 1;
          *v141 = 2;
          v41 = 1;
          a1[38].m128i_i64[1] = (__int64)v38;
          v42 = v38;
        }
        *v42 = v37;
        v43 = *v28;
        *((_DWORD *)v38 - 1) = v41;
        sub_1692DB0(&a1[32].m128i_u64[1], v43, v37, 0, 0);
        v44 = v28 + 2;
        if ( v29 == v28 + 2 )
          break;
        while ( 1 )
        {
          v28 = v44;
          if ( (unsigned __int64)*v44 > 1 )
            break;
          v44 += 2;
          if ( v29 == v44 )
            goto LABEL_56;
        }
      }
      while ( v29 != v44 );
    }
  }
LABEL_56:
  v45 = (void *)sub_1434DE0(a1->m128i_i64[0], 0);
  (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v45 + 24LL))(v45, &a1[32].m128i_i64[1]);
  *(_QWORD *)v164 = 0;
  *(_QWORD *)&v164[2] = a1->m128i_i64[0];
  v48 = *(_QWORD *)(a2 + 72);
  if ( !v48 )
    goto LABEL_93;
  v49 = *(_QWORD *)a2;
  v50 = 0;
  while ( 2 )
  {
    v52 = v48;
    v53 = *(_BYTE *)(v48 + 3) >> 6;
    if ( !v53 )
    {
      do
      {
        v52 = *(_QWORD *)(v52 + 16);
        v53 = *(_BYTE *)(v52 + 3) >> 6;
      }
      while ( !v53 );
      if ( v53 != 1 )
        goto LABEL_63;
      goto LABEL_89;
    }
    if ( v53 == 1 )
    {
LABEL_89:
      if ( v50 >= *(_DWORD *)(v52 + 4) + 1 )
        break;
      goto LABEL_66;
    }
LABEL_63:
    if ( v53 == 2 )
      v54 = *(_DWORD *)(v52 + 4) - 1;
    else
      v54 = *(_DWORD *)(v52 + 4);
    if ( v50 >= v54 )
      break;
LABEL_66:
    if ( (*(_BYTE *)(a2 + 123) & 0x20) != 0 )
    {
      v51 = *(_QWORD *)(v49 + 864);
      goto LABEL_59;
    }
    v55 = 17;
    while ( 2 )
    {
      LODWORD(v52) = *(unsigned __int8 *)(v48 + 3);
      if ( (v52 & 0x80u) != 0LL )
      {
        if ( *(_BYTE *)(v48 + 3) >> 6 != 2 )
        {
          v52 = *(_QWORD *)(v48 + 16);
          v56 = (__int64 *)(v52 + 8LL * v50);
          goto LABEL_71;
        }
LABEL_111:
        v48 = *(_QWORD *)(v48 + 16);
        if ( !--v55 )
        {
          sub_233F80((__int64 *)(v49 + 616), (_DWORD *)(a2 + 72));
          v56 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 16LL) + 8LL * v50);
          goto LABEL_71;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v48 + 4) != v50 )
      goto LABEL_111;
    v56 = (__int64 *)(v48 + 8);
LABEL_71:
    v51 = *v56;
LABEL_59:
    sub_1435270(
      (_DWORD)v45,
      v51,
      (unsigned int)v164,
      v52,
      v46,
      v47,
      (_DWORD)v150,
      m128i_i64,
      (__int64)v156,
      (__int64)v157,
      (__int64)v158);
    sub_EDBFA0(a2);
    v48 = *(_QWORD *)(a2 + 72);
    ++v50;
    if ( v48 )
    {
      v49 = *(_QWORD *)a2;
      continue;
    }
    break;
  }
  v57 = *(_QWORD *)v164;
  if ( *(_QWORD *)v164 )
  {
    v58 = *(_QWORD *)&v164[2];
    v8 = (*(_DWORD *)(*(_QWORD *)v164 + 8LL))-- == 1;
    if ( v8 )
      sub_15D7BC0(v58, v57);
  }
LABEL_93:
  (**(void (__fastcall ***)(void *))v45)(v45);
  sub_186B220(v45);
  sub_1694B10(&a1[32].m128i_u64[1]);
LABEL_94:
  v59 = a1[1].m128i_i64[0];
  *(__m128i *)v164 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)&a1[1]);
  v165 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v59, (__m128i)(unsigned __int64)v59);
  sub_180C5A0(&v161, "pb");
  v166 = sub_15DA4C0(v59 + 560, &v161);
  v60 = *(_QWORD *)(a2 + 72);
  v61.m128_u64[0] = 0;
  v168[0] = 0;
  v168[1] = 0;
  v169 = 1;
  v171 = 257;
  v162 = 0;
  ptr = nullptr;
  v167 = 0;
  v170 = 0;
  if ( !v60 )
  {
LABEL_130:
    v78 = 1;
    if ( HIBYTE(v171) )
      v78 = 2 * (unsigned __int8)v171;
    goto LABEL_132;
  }
  v62 = *(_QWORD *)a2;
  v63 = 0;
  while ( 2 )
  {
    v65 = v60;
    v66 = *(_BYTE *)(v60 + 3) >> 6;
    if ( !v66 )
    {
      do
      {
        v65 = *(_QWORD *)(v65 + 16);
        v66 = *(_BYTE *)(v65 + 3) >> 6;
      }
      while ( !v66 );
      if ( v66 != 1 )
        goto LABEL_101;
      goto LABEL_119;
    }
    if ( v66 == 1 )
    {
LABEL_119:
      if ( v63 >= *(_DWORD *)(v65 + 4) + 1 )
        break;
      goto LABEL_104;
    }
LABEL_101:
    if ( v66 == 2 )
      v67 = *(_DWORD *)(v65 + 4) - 1;
    else
      v67 = *(_DWORD *)(v65 + 4);
    if ( v63 >= v67 )
      break;
LABEL_104:
    if ( (*(_BYTE *)(a2 + 123) & 0x20) != 0 )
    {
      v64 = *(_DWORD **)(v62 + 864);
      goto LABEL_97;
    }
    v68 = 17;
    while ( 2 )
    {
      if ( *(char *)(v60 + 3) < 0 )
      {
        if ( *(_BYTE *)(v60 + 3) >> 6 != 2 )
        {
          v69 = (_DWORD **)(*(_QWORD *)(v60 + 16) + 8LL * v63);
          goto LABEL_109;
        }
LABEL_163:
        v60 = *(_QWORD *)(v60 + 16);
        if ( !--v68 )
        {
          sub_233F80((__int64 *)(v62 + 616), (_DWORD *)(a2 + 72));
          v69 = (_DWORD **)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 16LL) + 8LL * v63);
          goto LABEL_109;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v60 + 4) != v63 )
      goto LABEL_163;
    v69 = (_DWORD **)(v60 + 8);
LABEL_109:
    v64 = *v69;
LABEL_97:
    v150 = v164;
    sub_C3C540((__int64)v164, (__int64)&v161, v64);
    v60 = *(_QWORD *)(a2 + 72);
    ++v63;
    if ( v60 )
    {
      v62 = *(_QWORD *)a2;
      continue;
    }
    break;
  }
  if ( ptr )
    sub_186B220(ptr);
  v74 = *((_QWORD *)&v170 + 1);
  if ( !*((_QWORD *)&v170 + 1) )
    goto LABEL_130;
  v75 = 0;
  while ( v75 < *(_DWORD *)(v74 - 4) )
  {
    v76 = *(_QWORD *)(v74 + 8LL * v75);
    v77 = *(_DWORD **)(sub_15D1F10(v76) + 24);
    if ( v77 && *v77 == 5 && v77[1] == 1 )
    {
      sub_C3A690(a1->m128i_i64, v76);
      v74 = *((_QWORD *)&v170 + 1);
      ++v75;
      if ( !*((_QWORD *)&v170 + 1) )
        goto LABEL_130;
    }
    else
    {
      sub_C39740(a1->m128i_i64, v76);
      v74 = *((_QWORD *)&v170 + 1);
      ++v75;
      if ( !*((_QWORD *)&v170 + 1) )
        goto LABEL_130;
    }
  }
  v78 = 1;
  if ( HIBYTE(v171) )
  {
    v78 = 0;
    if ( !*(_DWORD *)(v74 - 4) )
      v78 = 2 * (unsigned __int8)v171;
  }
  sub_186B220((void *)(v74 - 8));
LABEL_132:
  v79 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v168);
  sub_182CBA0(v79, &v169);
  v80 = *((_QWORD *)&v167 + 1);
  if ( *((_QWORD *)&v167 + 1) )
  {
    v81 = *(unsigned int *)(*((_QWORD *)&v167 + 1) - 4LL);
    if ( (_DWORD)v81 )
    {
      v82 = *((_QWORD *)&v167 + 1) + 16 * v81;
      do
      {
        v83 = v80;
        v80 += 16;
        sub_15D0DF0(v83);
      }
      while ( v80 != v82 );
      v80 = *((_QWORD *)&v167 + 1);
    }
    sub_186B220((void *)(v80 - 8));
  }
  v84 = v167;
  if ( (_QWORD)v167 )
  {
    v85 = *(unsigned int *)(v167 - 4);
    if ( (_DWORD)v85 )
    {
      LODWORD(v150) = v78;
      v86 = v167 + 32 * v85;
      do
      {
        v87 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v84);
        v88 = v84 + 16;
        v84 += 32;
        sub_182CBA0(v87, v88);
      }
      while ( v84 != v86 );
      v78 = (int)v150;
      v84 = v167;
    }
    sub_186B220((void *)(v84 - 8));
  }
  if ( v78 == 1 )
  {
    v148 = (char **)__cxa_allocate_exception(0x28u);
    sub_15FB08((__int64 *)v164, "goal is not in the fragment supported by nla2bv", v149);
    *v148 = (char *)off_1C63670;
    sub_2333C0(v148 + 1, v164);
    sub_233E40((__int64)v164);
    __cxa_throw(v148, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
  }
  if ( v78 == 2 )
    return sub_EE4A00(v158);
  v89 = (void *)sub_1434DE0(a1->m128i_i64[0], 0);
  (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v89 + 24LL))(v89, &a1[32].m128i_i64[1]);
  *(_QWORD *)v164 = 0;
  *(_QWORD *)&v164[2] = a1->m128i_i64[0];
  v92 = *(_QWORD *)(a2 + 72);
  if ( !v92 )
    goto LABEL_169;
  v93 = *(_QWORD *)a2;
  v94 = 0;
  while ( 2 )
  {
    v96 = v92;
    v97 = *(_BYTE *)(v92 + 3) >> 6;
    if ( v97 )
    {
      if ( v97 != 1 )
        goto LABEL_153;
LABEL_210:
      v98 = *(_DWORD *)(v96 + 4) + 1;
    }
    else
    {
      do
      {
        v96 = *(_QWORD *)(v96 + 16);
        v97 = *(_BYTE *)(v96 + 3) >> 6;
      }
      while ( !v97 );
      if ( v97 == 1 )
        goto LABEL_210;
LABEL_153:
      if ( v97 == 2 )
        v98 = *(_DWORD *)(v96 + 4) - 1;
      else
        v98 = *(_DWORD *)(v96 + 4);
    }
    if ( v94 >= v98 )
      break;
    if ( (*(_BYTE *)(a2 + 123) & 0x20) != 0 )
    {
      v95 = *(_QWORD *)(v93 + 864);
      goto LABEL_149;
    }
    v99 = 17;
    while ( 2 )
    {
      LODWORD(v96) = *(unsigned __int8 *)(v92 + 3);
      if ( (v96 & 0x80u) != 0LL )
      {
        if ( *(_BYTE *)(v92 + 3) >> 6 != 2 )
        {
          v96 = *(_QWORD *)(v92 + 16);
          v100 = (__int64 *)(v96 + 8LL * v94);
          goto LABEL_161;
        }
LABEL_212:
        v92 = *(_QWORD *)(v92 + 16);
        if ( !--v99 )
        {
          sub_233F80((__int64 *)(v93 + 616), (_DWORD *)(a2 + 72));
          v100 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a2 + 72) + 16LL) + 8LL * v94);
          goto LABEL_161;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v92 + 4) != v94 )
      goto LABEL_212;
    v100 = (__int64 *)(v92 + 8);
LABEL_161:
    v95 = *v100;
LABEL_149:
    sub_1435270(
      (_DWORD)v89,
      v95,
      (unsigned int)v164,
      v96,
      v90,
      v91,
      (_DWORD)v150,
      m128i_i64,
      (__int64)v156,
      (__int64)v157,
      (__int64)v158);
    sub_EDBFA0(a2);
    v92 = *(_QWORD *)(a2 + 72);
    ++v94;
    if ( v92 )
    {
      v93 = *(_QWORD *)a2;
      continue;
    }
    break;
  }
  v101 = *(_QWORD *)v164;
  if ( *(_QWORD *)v164 )
  {
    v102 = *(_QWORD *)&v164[2];
    v8 = (*(_DWORD *)(*(_QWORD *)v164 + 8LL))-- == 1;
    if ( v8 )
      sub_15D7BC0(v102, v101);
  }
LABEL_169:
  (**(void (__fastcall ***)(void *))v89)(v89);
  sub_186B220(v89);
  sub_C38790(a1->m128i_i64, (__int64 *)a2);
  v103 = (_DWORD *)a2;
  v104 = (__int64)a1;
  sub_C38AF0(a1->m128i_i64, (__int64 *)a2);
  v107 = (_DWORD *)a1[39].m128i_i64[1];
  if ( v107 )
    ++v107[2];
  v108 = (void (__fastcall ***)(void *))*v159;
  if ( *v159 )
  {
    v8 = (*((_DWORD *)v108 + 2))-- == 1;
    if ( v8 )
    {
      (**v108)(v108);
      v104 = (__int64)v108;
      sub_186B220(v108);
    }
  }
  v109 = a1[36].m128i_i64[1];
  *v159 = v107;
  if ( v109 )
  {
    v110 = 0;
    do
    {
      if ( v110 >= *(_DWORD *)(v109 - 4) )
        break;
      v104 = a1[39].m128i_i64[1];
      v103 = *(_DWORD **)(v109 + 8LL * v110);
      sub_13333D0(
        v104,
        (_DWORD)v103,
        *(_QWORD *)(a1[37].m128i_i64[1] + 8LL * v110),
        *(_QWORD *)(a1[37].m128i_i64[1] + 8LL * v110),
        v105,
        v106);
      v109 = a1[36].m128i_i64[1];
      ++v110;
    }
    while ( v109 );
  }
  v111 = a1[7].m128i_i64[0];
  if ( v111 )
  {
    v112 = 0;
    do
    {
      if ( v112 >= *(_DWORD *)(v111 - 4) )
        break;
      v113 = (__m128i *)a1[39].m128i_i64[1];
      v114 = *(_QWORD *)(v111 + 8LL * v112);
      m128i_i64 = v113[2].m128i_i64[0];
      if ( v114 )
        ++*(_DWORD *)(v114 + 8);
      v115 = (__m128 *)v113[4].m128i_i64[1];
      if ( v115 )
      {
        v116 = v115[-1].m128_u32[3];
        if ( v116 == v115[-1].m128_i32[2] )
        {
          v122 = (3 * v116 + 1) >> 1;
          v123 = 40 * v122 + 8;
          if ( 40 * v116 + 8 >= v123 || v116 >= v122 )
          {
            v144 = (char **)__cxa_allocate_exception(0x28u);
            sub_15FB08((__int64 *)v164, "Overflow encountered when expanding vector", v145);
            *v144 = (char *)off_1C63128;
            sub_2333C0(v144 + 1, v164);
            sub_233E40((__int64)v164);
            __cxa_throw(v144, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v104 = v123;
          LODWORD(v156) = (3 * v116 + 1) >> 1;
          v152 = v113;
          v124 = sub_186B270(v123);
          v125 = (__int64)v152;
          v126 = (int)v156;
          v103 = (_DWORD *)v124;
          v115 = (__m128 *)(v124 + 8);
          v127 = (_QWORD *)v152[4].m128i_i64[1];
          if ( v127 )
          {
            v128 = *((unsigned int *)v127 - 1);
            v129 = v124 + 8;
            *(_DWORD *)(v124 + 4) = v128;
            v130 = &v127[5 * v128];
            for ( i = v127; v130 != i; *(_DWORD *)(v129 - 8) = *((_DWORD *)i - 2) )
            {
              v132 = i[1];
              i += 5;
              v129 += 40;
              *(_QWORD *)(v129 - 32) = v132;
              v133 = *(i - 5);
              *(i - 5) = 0;
              *(_QWORD *)(v129 - 40) = v133;
              *(_QWORD *)(v129 - 16) = *(i - 2);
              v134 = *(i - 3);
              *(i - 3) = 0;
              *(_QWORD *)(v129 - 24) = v134;
            }
            if ( (_DWORD)v128 )
            {
              v135 = v127;
              v156 = v152;
              LODWORD(v157) = v126;
              v136 = &v127[5 * v128];
              v159 = (void **)v103;
              do
              {
                while ( 1 )
                {
                  v139 = v135[2];
                  if ( v139 )
                  {
                    v140 = v135[3];
                    v8 = (*(_DWORD *)(v139 + 8))-- == 1;
                    if ( v8 )
                      sub_15D7BC0(v140, v139);
                  }
                  v137 = *v135;
                  if ( *v135 )
                  {
                    v138 = v135[1];
                    v8 = (*(_DWORD *)(v137 + 8))-- == 1;
                    if ( v8 )
                      break;
                  }
                  v135 += 5;
                  if ( v135 == v136 )
                    goto LABEL_205;
                }
                sub_15D7BC0(v138, v137);
                v135 += 5;
              }
              while ( v135 != v136 );
LABEL_205:
              v125 = (__int64)v156;
              v126 = (int)v157;
              v103 = v159;
              v127 = (_QWORD *)v156[4].m128i_i64[1];
            }
            v104 = (__int64)(v127 - 1);
            v157 = v103;
            LODWORD(v156) = v126;
            v153 = (void *)v125;
            sub_186B220(v127 - 1);
            v103 = v157;
            v126 = (int)v156;
            v125 = (__int64)v153;
            v119 = (__m128 *)((char *)v115 + 40 * (unsigned int)v157[1]);
            v118 = v157[1] + 1;
          }
          else
          {
            *(_DWORD *)(v124 + 4) = 0;
            v119 = (__m128 *)(v124 + 8);
            v118 = 1;
          }
          *(_QWORD *)(v125 + 72) = v115;
          *v103 = v126;
        }
        else
        {
          v117 = v116;
          v118 = v116 + 1;
          v119 = (__m128 *)((char *)v115 + 40 * v117);
        }
      }
      else
      {
        v104 = 88;
        v154 = (__int64 *)v113;
        v143 = (_QWORD *)sub_186B270(0x58u);
        *v143 = 2;
        v118 = 1;
        v115 = (__m128 *)(v143 + 1);
        v154[9] = (__int64)v115;
        v119 = v115;
      }
      v120 = m128i_i64;
      v119[1].m128_u64[0] = 0;
      ++v112;
      v61 = _mm_loadh_ps((const double *)&m128i_i64);
      v119[2].m128_i32[0] = 0;
      *v119 = v61;
      v119[1].m128_u64[1] = v120;
      v115[-1].m128_i32[3] = v118;
      v111 = a1[7].m128i_i64[0];
    }
    while ( v111 );
  }
  if ( (unsigned int)sub_180B130(v104) > 9 )
  {
    if ( (unsigned __int8)sub_186A530(*(double *)v61.m128_u64) )
    {
      sub_186A4C0(*(double *)v61.m128_u64);
      sub_180B150(v104, v103);
      std::__ostream_insert<char,std::char_traits<char>>();
      v142 = std::ostream::_M_insert<bool>();
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v142, ")\n");
    }
    else
    {
      sub_180B150(v104, v103);
      std::__ostream_insert<char,std::char_traits<char>>();
      std::ostream::_M_insert<bool>();
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  *(_DWORD *)(a2 + 120) = (*(_DWORD *)(a2 + 120) + 1) & 0x3FFFFFF | *(_DWORD *)(a2 + 120) & 0xFC000000;
  if ( !a1->m128i_i8[8] )
    *(_BYTE *)(a2 + 123) = ((unsigned __int8)sub_ED2900(*(_BYTE *)(a2 + 123) >> 6, 1) << 6)
                         | *(_BYTE *)(a2 + 123) & 0x3F;
  return sub_EE4A00(v158);
}

