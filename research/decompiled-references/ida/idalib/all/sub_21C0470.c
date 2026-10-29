_QWORD *__fastcall sub_21C0470(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD **v3; // rbp
  __int64 v4; // rbx
  __int64 v6; // rax
  size_t v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  size_t v10; // r8
  void *v11; // r9
  size_t v12; // r10
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  const __m128i *v16; // r8
  _QWORD *v17; // r14
  __int64 v18; // rax
  const __m128i *v19; // r11
  _QWORD *i; // rax
  const __m128i *v21; // r15
  const __m128i *v22; // r13
  const __m128i *v23; // r12
  int v24; // r14d
  int v25; // eax
  const void *v26; // r9
  size_t v27; // r11
  unsigned int v28; // r10d
  __int64 v29; // r8
  __int64 v30; // r14
  char *v31; // rsi
  char v32; // al
  int v33; // r15d
  __int64 *v34; // r13
  int v35; // eax
  int v36; // ecx
  __int64 v37; // r8
  unsigned int v38; // r14d
  void *v39; // r11
  __int64 *v40; // rax
  const void *v41; // rsi
  int v42; // eax
  unsigned int v43; // r14d
  unsigned int v44; // r14d
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // r11
  __int64 v48; // rax
  unsigned __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // r15d
  _QWORD *j; // rdx
  int v54; // r15d
  int v55; // eax
  unsigned int v56; // ecx
  __int64 *v57; // r8
  const void *v58; // r15
  const __m128i *v59; // r13
  unsigned __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // r11
  _QWORD *v63; // r14
  __int64 v64; // rax
  const __m128i *v65; // r8
  _QWORD *k; // rax
  const __m128i *v67; // r15
  const __m128i *v68; // r13
  __int64 v69; // r12
  int v70; // r14d
  int v71; // eax
  const void *v72; // r10
  size_t v73; // r8
  unsigned int v74; // r11d
  __int64 v75; // r9
  __int64 v76; // r14
  char *v77; // rsi
  char v78; // al
  int v79; // r15d
  int v80; // r15d
  int v81; // eax
  unsigned int v82; // ecx
  __int64 v83; // rdx
  _QWORD *m; // rdx
  int v85; // edx
  const void *v86; // rax
  unsigned int v87; // ecx
  int v88; // r11d
  char v89; // al
  int v90; // edx
  unsigned int v91; // ecx
  int v92; // r8d
  char v93; // al
  bool v94; // al
  int v95; // eax
  bool v96; // al
  int v97; // eax
  int v98; // eax
  int v99; // eax
  size_t n; // [rsp+8h] [rbp-C0h]
  size_t na; // [rsp+8h] [rbp-C0h]
  size_t ne; // [rsp+8h] [rbp-C0h]
  size_t nf; // [rsp+8h] [rbp-C0h]
  size_t nh; // [rsp+8h] [rbp-C0h]
  int nb; // [rsp+8h] [rbp-C0h]
  size_t ng; // [rsp+8h] [rbp-C0h]
  size_t nc; // [rsp+8h] [rbp-C0h]
  size_t ni; // [rsp+8h] [rbp-C0h]
  int nd; // [rsp+8h] [rbp-C0h]
  void *s1; // [rsp+10h] [rbp-B8h]
  void *s1a; // [rsp+10h] [rbp-B8h]
  void *s1h; // [rsp+10h] [rbp-B8h]
  void *s1b; // [rsp+10h] [rbp-B8h]
  int s1c; // [rsp+10h] [rbp-B8h]
  void *s1i; // [rsp+10h] [rbp-B8h]
  void *s1d; // [rsp+10h] [rbp-B8h]
  void *s1e; // [rsp+10h] [rbp-B8h]
  void *s1j; // [rsp+10h] [rbp-B8h]
  void *s1f; // [rsp+10h] [rbp-B8h]
  int s1g; // [rsp+10h] [rbp-B8h]
  size_t v121; // [rsp+18h] [rbp-B0h]
  __int64 v122; // [rsp+18h] [rbp-B0h]
  __int64 v123; // [rsp+18h] [rbp-B0h]
  void *v124; // [rsp+18h] [rbp-B0h]
  size_t v125; // [rsp+18h] [rbp-B0h]
  __int64 v126; // [rsp+18h] [rbp-B0h]
  __int64 v127; // [rsp+18h] [rbp-B0h]
  void *v128; // [rsp+18h] [rbp-B0h]
  void *v129; // [rsp+18h] [rbp-B0h]
  int v130; // [rsp+20h] [rbp-A8h]
  size_t v131; // [rsp+20h] [rbp-A8h]
  void *v132; // [rsp+20h] [rbp-A8h]
  size_t v133; // [rsp+20h] [rbp-A8h]
  size_t v134; // [rsp+20h] [rbp-A8h]
  __int64 v135; // [rsp+28h] [rbp-A0h]
  void *v136; // [rsp+28h] [rbp-A0h]
  size_t v137; // [rsp+28h] [rbp-A0h]
  unsigned int v138; // [rsp+28h] [rbp-A0h]
  unsigned int v139; // [rsp+28h] [rbp-A0h]
  int v140; // [rsp+30h] [rbp-98h]
  __int64 v141; // [rsp+30h] [rbp-98h]
  __int64 *v142; // [rsp+30h] [rbp-98h]
  __int64 *v143; // [rsp+30h] [rbp-98h]
  bool v144; // [rsp+38h] [rbp-90h]
  int v145; // [rsp+38h] [rbp-90h]
  unsigned int v146; // [rsp+38h] [rbp-90h]
  __int64 v147; // [rsp+38h] [rbp-90h]
  __int64 v148; // [rsp+38h] [rbp-90h]
  int v149; // [rsp+40h] [rbp-88h]
  bool v150; // [rsp+40h] [rbp-88h]
  __int64 v151; // [rsp+40h] [rbp-88h]
  unsigned int v152; // [rsp+40h] [rbp-88h]
  unsigned int v153; // [rsp+48h] [rbp-80h]
  int v154; // [rsp+48h] [rbp-80h]
  int v155; // [rsp+48h] [rbp-80h]
  __int64 v156; // [rsp+48h] [rbp-80h]
  const void *v157; // [rsp+48h] [rbp-80h]
  __int64 v158; // [rsp+50h] [rbp-78h]
  unsigned int v159; // [rsp+50h] [rbp-78h]
  const void *v160; // [rsp+50h] [rbp-78h]
  int v161; // [rsp+50h] [rbp-78h]
  size_t v162; // [rsp+50h] [rbp-78h]
  const void *v163; // [rsp+50h] [rbp-78h]
  size_t v164; // [rsp+58h] [rbp-70h]
  __int64 v165; // [rsp+58h] [rbp-70h]
  const void *v166; // [rsp+58h] [rbp-70h]
  unsigned int v167; // [rsp+58h] [rbp-70h]
  size_t v168; // [rsp+58h] [rbp-70h]
  const void *v169; // [rsp+60h] [rbp-68h]
  size_t v170; // [rsp+60h] [rbp-68h]
  __int64 v171; // [rsp+60h] [rbp-68h]
  unsigned int v172; // [rsp+60h] [rbp-68h]
  const void *v173; // [rsp+68h] [rbp-60h]
  __int64 v174; // [rsp+68h] [rbp-60h]
  __m128i v175[5]; // [rsp+70h] [rbp-58h] BYREF

  v2 = a1;
  v3 = *(_QWORD ***)a2;
  v4 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  if ( ***(_QWORD ***)a2 < **(_QWORD **)(*(_QWORD *)a2 + 8LL) )
  {
    sub_21BF540(v175, (__int64 *)(v4 + 168), v4 + 96);
    goto LABEL_3;
  }
  v6 = sub_2245450(v4 + 96);
  v9 = *(unsigned int *)(v4 + 264);
  v10 = *(_QWORD *)(v4 + 248);
  v11 = (void *)v6;
  v12 = v7;
  if ( !(_DWORD)v9 )
  {
LABEL_5:
    v121 = v12;
    s1 = v11;
    n = v10;
    v13 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v9 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
    v14 = ((v13 >> 16) | v13) + 1;
    if ( (unsigned int)v14 < 0x40 )
      LODWORD(v14) = 64;
    *(_DWORD *)(v4 + 264) = v14;
    v15 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v14, 8, 64, v8, v10, v11);
    v16 = (const __m128i *)n;
    v11 = s1;
    v17 = v15;
    *(_QWORD *)(v4 + 248) = v15;
    v12 = v121;
    if ( n )
    {
      v18 = *(unsigned int *)(v4 + 264);
      *(_QWORD *)(v4 + 256) = 0;
      na = 16 * v9;
      v19 = &v16[v9];
      for ( i = &v17[2 * v18]; i != v17; *(v17 - 1) = 0 )
      {
        *v17 = -1;
        v17 += 2;
      }
      if ( v19 != v16 )
      {
        v21 = v16;
        v22 = v19;
        v23 = v16;
        do
        {
          if ( v21->m128i_i64[0] != -1 && v21->m128i_i64[0] != -2 )
          {
            v24 = *(_DWORD *)(v4 + 264);
            if ( !v24 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128(v21);
              BUG();
            }
            v135 = *(_QWORD *)(v4 + 248);
            v25 = sub_2248890(v21->m128i_i64[0], v21->m128i_i64[1]);
            v26 = (const void *)v21->m128i_i64[0];
            v27 = v21->m128i_u64[1];
            v140 = v24 - 1;
            v28 = (v24 - 1) & v25;
            v144 = v21->m128i_i64[0] == -2;
            if ( v27 )
            {
              v149 = 1;
              v29 = 0;
              while ( 1 )
              {
                v30 = v135 + 16LL * v28;
                v31 = *(char **)v30;
                if ( *(_QWORD *)v30 == -1 )
                  goto LABEL_112;
                if ( v31 == (char *)-2LL )
                {
                  v94 = v144;
                }
                else
                {
                  if ( *(_QWORD *)(v30 + 8) != v27 )
                    goto LABEL_21;
                  v171 = v29;
                  v167 = v28;
                  v162 = v27;
                  v157 = v26;
                  v98 = memcmp(v26, v31, v27);
                  v26 = v157;
                  v27 = v162;
                  v28 = v167;
                  v29 = v171;
                  v94 = v98 == 0;
                }
                if ( v94 )
                  goto LABEL_115;
LABEL_21:
                v169 = v26;
                v164 = v27;
                v158 = v29;
                v153 = v28;
                v32 = sub_E39ED0(*(char **)v30, *(_QWORD *)(v30 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
                v27 = v164;
                v26 = v169;
                if ( v158 || !v32 )
                  v30 = v158;
                v29 = v30;
                v28 = v140 & (v149 + v153);
                ++v149;
              }
            }
            v88 = 1;
            v29 = 0;
            while ( 1 )
            {
              v30 = v135 + 16LL * v28;
              if ( *(_QWORD *)v30 == -1 )
                break;
              if ( *(_QWORD *)v30 == -2 )
              {
                if ( v26 == (const void *)-2LL )
                  goto LABEL_115;
              }
              else if ( !*(_QWORD *)(v30 + 8) )
              {
                goto LABEL_115;
              }
              v160 = v26;
              v155 = v88;
              v151 = v29;
              v146 = v28;
              v89 = sub_E39ED0(*(char **)v30, *(_QWORD *)(v30 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
              v26 = v160;
              if ( v151 || !v89 )
                v30 = v151;
              v29 = v30;
              v28 = v140 & (v155 + v146);
              v88 = v155 + 1;
            }
LABEL_112:
            if ( v26 != (const void *)-1LL && v29 )
              v30 = v29;
LABEL_115:
            *(__m128i *)v30 = _mm_loadu_si128(v21);
            ++*(_DWORD *)(v4 + 256);
          }
          ++v21;
        }
        while ( v22 != v21 );
        v16 = v23;
        v11 = s1;
        v2 = a1;
        v12 = v121;
      }
      v125 = v12;
      s1j = v11;
      operator delete(v16, na, 8);
      v11 = s1j;
      v12 = v125;
      v17 = *(_QWORD **)(v4 + 248);
      v52 = *(_DWORD *)(v4 + 264);
    }
    else
    {
      v51 = *(unsigned int *)(v4 + 264);
      *(_QWORD *)(v4 + 256) = 0;
      v52 = v51;
      for ( j = &v15[2 * v51]; j != v15; *(v15 - 1) = 0 )
      {
        *v15 = -1;
        v15 += 2;
      }
    }
    if ( v52 )
    {
      s1b = v11;
      v54 = v52 - 1;
      nh = v12;
      v55 = sub_2248890(v11, v12);
      v11 = s1b;
      v12 = nh;
      v56 = v54 & v55;
      v47 = (__int64)s1b;
      if ( nh )
      {
        nb = 1;
        v57 = nullptr;
        s1c = v54;
        while ( 1 )
        {
          v34 = &v17[2 * v56];
          v58 = (const void *)*v34;
          if ( *v34 == -1 )
            break;
          if ( v58 == (const void *)-2LL )
          {
            if ( v11 == (void *)-2LL )
              goto LABEL_63;
            if ( !v57 )
              v57 = &v17[2 * v56];
          }
          else if ( v12 == v34[1] )
          {
            v147 = v47;
            v142 = v57;
            v138 = v56;
            v133 = v12;
            v128 = v11;
            v95 = memcmp(v11, (const void *)*v34, v12);
            v11 = v128;
            v12 = v133;
            v56 = v138;
            v57 = v142;
            v47 = v147;
            if ( !v95 )
              goto LABEL_145;
          }
          v56 = s1c & (nb + v56);
          ++nb;
        }
      }
      else
      {
        v85 = 1;
        v57 = nullptr;
        while ( 1 )
        {
          v34 = &v17[2 * v56];
          v86 = (const void *)*v34;
          if ( *v34 == -1 )
            break;
          if ( v86 == (const void *)-2LL )
          {
            if ( s1b == (void *)-2LL )
              goto LABEL_63;
            if ( !v57 )
              v57 = &v17[2 * v56];
          }
          else if ( !v34[1] )
          {
            goto LABEL_132;
          }
          v87 = v85 + v56;
          ++v85;
          v56 = v54 & v87;
        }
      }
      goto LABEL_97;
    }
    goto LABEL_62;
  }
  v122 = *(_QWORD *)(v4 + 248);
  v33 = v9 - 1;
  s1a = (void *)v6;
  v34 = nullptr;
  ne = v7;
  v35 = sub_2248890(v6, v7);
  v12 = ne;
  v11 = s1a;
  v36 = 1;
  v37 = v122;
  v38 = v33 & v35;
  v39 = s1a;
  if ( ne )
  {
    while ( 1 )
    {
      v40 = (__int64 *)(v37 + 16LL * v38);
      v41 = (const void *)*v40;
      if ( *v40 == -1 )
        break;
      if ( v41 == (const void *)-2LL )
      {
        if ( v11 == (void *)-2LL )
          goto LABEL_3;
        if ( !v34 )
          v34 = (__int64 *)(v37 + 16LL * v38);
      }
      else if ( v40[1] == v12 )
      {
        v136 = v39;
        v130 = v36;
        v123 = v37;
        s1h = (void *)v12;
        nf = (size_t)v11;
        v42 = memcmp(v11, v41, v12);
        v11 = (void *)nf;
        v12 = (size_t)s1h;
        v37 = v123;
        v36 = v130;
        v39 = v136;
        if ( !v42 )
          goto LABEL_3;
      }
      v43 = v36 + v38;
      ++v36;
      v38 = v33 & v43;
    }
  }
  else
  {
    while ( 1 )
    {
      v40 = (__int64 *)(v122 + 16LL * v38);
      if ( *v40 == -1 )
        break;
      if ( *v40 == -2 )
      {
        if ( s1a == (void *)-2LL )
          goto LABEL_3;
        if ( !v34 )
          v34 = (__int64 *)(v122 + 16LL * v38);
      }
      else if ( !v40[1] )
      {
        goto LABEL_3;
      }
      v44 = v36 + v38;
      ++v36;
      v38 = v33 & v44;
    }
  }
  if ( v11 != (void *)-1LL )
  {
    v9 = *(unsigned int *)(v4 + 264);
    if ( !v34 )
      v34 = v40;
    v45 = *(_DWORD *)(v4 + 256) + 1;
    v8 = (unsigned int)(4 * v45);
    if ( (unsigned int)v8 >= 3 * (int)v9 )
    {
      v10 = *(_QWORD *)(v4 + 248);
      goto LABEL_5;
    }
    v46 = (unsigned int)v9 >> 3;
    if ( (int)v9 - *(_DWORD *)(v4 + 260) - v45 > (unsigned int)v46 )
    {
      v47 = *v34;
      goto LABEL_44;
    }
    v131 = v12;
    v59 = *(const __m128i **)(v4 + 248);
    v124 = v11;
    s1d = v39;
    nc = (size_t)v59;
    v60 = ((((((((((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
               | (unsigned int)(v9 - 1)
               | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 4)
             | (((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
             | (unsigned int)(v9 - 1)
             | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
             | (unsigned int)(v9 - 1)
             | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 4)
           | (((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
           | (unsigned int)(v9 - 1)
           | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 16)
         | (((((((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
             | (unsigned int)(v9 - 1)
             | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 4)
           | (((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
           | (unsigned int)(v9 - 1)
           | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
           | (unsigned int)(v9 - 1)
           | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 4)
         | (((unsigned int)(v9 - 1) | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1)) >> 2)
         | (unsigned int)(v9 - 1)
         | ((unsigned __int64)(unsigned int)(v9 - 1) >> 1))
        + 1;
    if ( (unsigned int)v60 < 0x40 )
      LODWORD(v60) = 64;
    *(_DWORD *)(v4 + 264) = v60;
    v61 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v60, 8, 64, v46, v37, v11);
    v62 = (__int64)s1d;
    v11 = v124;
    v63 = v61;
    *(_QWORD *)(v4 + 248) = v61;
    v12 = v131;
    if ( v59 )
    {
      v64 = *(unsigned int *)(v4 + 264);
      *(_QWORD *)(v4 + 256) = 0;
      s1e = (void *)(16 * v9);
      v65 = &v59[v9];
      for ( k = &v63[2 * v64]; k != v63; *(v63 - 1) = 0 )
      {
        *v63 = -1;
        v63 += 2;
      }
      if ( v59 != v65 )
      {
        v67 = v59;
        v68 = v65;
        v69 = v62;
        do
        {
          if ( v67->m128i_i64[0] != -1 && v67->m128i_i64[0] != -2 )
          {
            v70 = *(_DWORD *)(v4 + 264);
            if ( !v70 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128(v67);
              BUG();
            }
            v141 = *(_QWORD *)(v4 + 248);
            v71 = sub_2248890(v67->m128i_i64[0], v67->m128i_i64[1]);
            v72 = (const void *)v67->m128i_i64[0];
            v73 = v67->m128i_u64[1];
            v145 = v70 - 1;
            v74 = (v70 - 1) & v71;
            v150 = v67->m128i_i64[0] == -2;
            if ( v73 )
            {
              v154 = 1;
              v75 = 0;
              while ( 1 )
              {
                v76 = v141 + 16LL * v74;
                v77 = *(char **)v76;
                if ( *(_QWORD *)v76 == -1 )
                  goto LABEL_128;
                if ( v77 == (char *)-2LL )
                {
                  v96 = v150;
                }
                else
                {
                  if ( *(_QWORD *)(v76 + 8) != v73 )
                    goto LABEL_80;
                  v174 = v75;
                  v172 = v74;
                  v168 = v73;
                  v163 = v72;
                  v99 = memcmp(v72, v77, v73);
                  v72 = v163;
                  v73 = v168;
                  v74 = v172;
                  v75 = v174;
                  v96 = v99 == 0;
                }
                if ( v96 )
                  goto LABEL_131;
LABEL_80:
                v173 = v72;
                v170 = v73;
                v165 = v75;
                v159 = v74;
                v78 = sub_E39ED0(*(char **)v76, *(_QWORD *)(v76 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
                v73 = v170;
                v72 = v173;
                if ( v165 || !v78 )
                  v76 = v165;
                v75 = v76;
                v74 = v145 & (v154 + v159);
                ++v154;
              }
            }
            v92 = 1;
            v75 = 0;
            while ( 1 )
            {
              v76 = v141 + 16LL * v74;
              if ( *(_QWORD *)v76 == -1 )
                break;
              if ( *(_QWORD *)v76 == -2 )
              {
                if ( v72 == (const void *)-2LL )
                  goto LABEL_131;
              }
              else if ( !*(_QWORD *)(v76 + 8) )
              {
                goto LABEL_131;
              }
              v166 = v72;
              v161 = v92;
              v156 = v75;
              v152 = v74;
              v93 = sub_E39ED0(*(char **)v76, *(_QWORD *)(v76 + 8), (const void *)0xFFFFFFFFFFFFFFFELL, 0);
              v72 = v166;
              if ( v156 || !v93 )
                v76 = v156;
              v75 = v76;
              v74 = v145 & (v161 + v152);
              v92 = v161 + 1;
            }
LABEL_128:
            if ( v72 != (const void *)-1LL && v75 )
              v76 = v75;
LABEL_131:
            *(__m128i *)v76 = _mm_loadu_si128(v67);
            ++*(_DWORD *)(v4 + 256);
          }
          ++v67;
        }
        while ( v68 != v67 );
        v62 = v69;
        v11 = v124;
        v2 = a1;
        v12 = v131;
      }
      v137 = v12;
      v132 = v11;
      v126 = v62;
      operator delete(nc, s1e, 8);
      v62 = v126;
      v11 = v132;
      v63 = *(_QWORD **)(v4 + 248);
      v79 = *(_DWORD *)(v4 + 264);
      v12 = v137;
    }
    else
    {
      v83 = *(unsigned int *)(v4 + 264);
      *(_QWORD *)(v4 + 256) = 0;
      v79 = v83;
      for ( m = &v61[2 * v83]; m != v61; *(v61 - 1) = 0 )
      {
        *v61 = -1;
        v61 += 2;
      }
    }
    if ( v79 )
    {
      v127 = v62;
      v80 = v79 - 1;
      s1f = v11;
      ni = v12;
      v81 = sub_2248890(v11, v12);
      v12 = ni;
      v11 = s1f;
      v47 = v127;
      v82 = v80 & v81;
      if ( ni )
      {
        nd = 1;
        v57 = nullptr;
        s1g = v80;
        while ( 1 )
        {
          v34 = &v63[2 * v82];
          v58 = (const void *)*v34;
          if ( *v34 == -1 )
            break;
          if ( v58 == (const void *)-2LL )
          {
            if ( v11 == (void *)-2LL )
              goto LABEL_63;
            if ( !v57 )
              v57 = &v63[2 * v82];
          }
          else if ( v34[1] == v12 )
          {
            v148 = v47;
            v143 = v57;
            v139 = v82;
            v134 = v12;
            v129 = v11;
            v97 = memcmp(v11, (const void *)*v34, v12);
            v11 = v129;
            v12 = v134;
            v82 = v139;
            v57 = v143;
            v47 = v148;
            if ( !v97 )
            {
LABEL_145:
              v47 = (__int64)v58;
              goto LABEL_63;
            }
          }
          v82 = s1g & (nd + v82);
          ++nd;
        }
      }
      else
      {
        v90 = 1;
        v57 = nullptr;
        while ( 1 )
        {
          v34 = &v63[2 * v82];
          v86 = (const void *)*v34;
          if ( *v34 == -1 )
            break;
          if ( v86 == (const void *)-2LL )
          {
            if ( s1f == (void *)-2LL )
              goto LABEL_63;
            if ( !v57 )
              v57 = &v63[2 * v82];
          }
          else if ( !v34[1] )
          {
LABEL_132:
            v47 = (__int64)v86;
            goto LABEL_63;
          }
          v91 = v90 + v82;
          ++v90;
          v82 = v80 & v91;
        }
      }
LABEL_97:
      if ( v11 != (void *)-1LL )
      {
        if ( !v57 )
        {
          ++*(_DWORD *)(v4 + 256);
LABEL_46:
          v48 = *(unsigned int *)(v4 + 280);
          v49 = *(unsigned int *)(v4 + 284);
          *v34 = (__int64)v11;
          v34[1] = v12;
          if ( v48 + 1 > v49 )
          {
            s1i = (void *)v12;
            ng = (size_t)v11;
            sub_2237220(v4 + 272, v4 + 288, v48 + 1, 16);
            v48 = *(unsigned int *)(v4 + 280);
            v12 = (size_t)s1i;
            v11 = (void *)ng;
          }
          v50 = (_QWORD *)(*(_QWORD *)(v4 + 272) + 16 * v48);
          *v50 = v11;
          v50[1] = v12;
          ++*(_DWORD *)(v4 + 280);
          goto LABEL_3;
        }
        v47 = *v57;
        v34 = v57;
      }
      goto LABEL_63;
    }
LABEL_62:
    v47 = 0x10102464C457FLL;
    v34 = nullptr;
LABEL_63:
    v45 = *(_DWORD *)(v4 + 256) + 1;
LABEL_44:
    *(_DWORD *)(v4 + 256) = v45;
    if ( v47 != -1 )
      --*(_DWORD *)(v4 + 260);
    goto LABEL_46;
  }
LABEL_3:
  ++**v3;
  *v2 = 0;
  return v2;
}
