__m128i *__fastcall sub_21BF540(__m128i *a1, __int64 *a2, __int64 a3)
{
  __m128i *v3; // r15
  __int64 v5; // rax
  size_t v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbp
  const __m128i *v9; // r8
  char *v10; // r10
  size_t v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  const __m128i *v15; // r8
  __m128i *v16; // r13
  __m128i *i; // rax
  const __m128i *v18; // r14
  const __m128i *v19; // rbp
  const __m128i *v20; // r15
  int v21; // r12d
  int v22; // eax
  const void *v23; // r9
  int v24; // r10d
  size_t v25; // r11
  unsigned int v26; // r8d
  __int64 *v27; // r12
  char *v28; // rsi
  char v29; // al
  int v30; // ebp
  int v31; // eax
  char *v32; // r8
  unsigned int v33; // r13d
  bool v34; // r11
  int v35; // ecx
  char **v36; // r12
  char *v37; // r14
  const void *v38; // rsi
  unsigned int v39; // r13d
  const __m128i *v40; // rax
  __m128i v41; // xmm1
  __int64 v42; // rax
  int v44; // edx
  unsigned int v45; // r13d
  int v46; // eax
  int v47; // edx
  __int64 v48; // rcx
  bool v49; // zf
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rsi
  __int64 v52; // rax
  char *v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  int v56; // ebp
  __m128i *v57; // rdx
  __m128i *v58; // rax
  int v59; // ebp
  int v60; // eax
  unsigned int v61; // r14d
  bool v62; // r11
  char **v63; // r8
  char *v64; // rsi
  char v65; // al
  char **v66; // rax
  unsigned __int64 v67; // rdx
  unsigned __int64 v68; // r8
  const __m128i *v69; // rax
  __m128i *v70; // rdx
  const __m128i *v71; // r12
  unsigned __int64 v72; // rax
  __int64 v73; // rax
  bool v74; // r11
  __m128i *v75; // r13
  __m128i *j; // rax
  const __m128i *v77; // r14
  const __m128i *v78; // rbp
  const __m128i *v79; // r15
  bool v80; // r12
  int v81; // r13d
  int v82; // eax
  const void *v83; // r10
  int v84; // r11d
  size_t v85; // r8
  unsigned int v86; // r9d
  __int64 *v87; // r13
  char *v88; // rsi
  char v89; // al
  int v90; // ebp
  int v91; // ebp
  int v92; // eax
  unsigned int v93; // r14d
  bool v94; // r11
  char **v95; // r8
  char *v96; // rsi
  char v97; // al
  __int64 v98; // rax
  __m128i *v99; // rdx
  __m128i *v100; // rax
  int v101; // r8d
  size_t v102; // r11
  char v103; // al
  int v104; // r11d
  char v105; // al
  bool v106; // al
  __int32 v107; // eax
  int v108; // r11d
  char v109; // al
  int v110; // r8d
  char v111; // al
  bool v112; // al
  __int32 v113; // eax
  char **v114; // rdi
  char **v115; // rsi
  char *v116; // rbp
  bool v117; // al
  bool v118; // al
  int v119; // eax
  int v120; // eax
  int v121; // eax
  int v122; // eax
  size_t n; // [rsp+0h] [rbp-B8h]
  size_t na; // [rsp+0h] [rbp-B8h]
  size_t nh; // [rsp+0h] [rbp-B8h]
  size_t ni; // [rsp+0h] [rbp-B8h]
  size_t nj; // [rsp+0h] [rbp-B8h]
  int nb; // [rsp+0h] [rbp-B8h]
  bool nc; // [rsp+0h] [rbp-B8h]
  size_t nd; // [rsp+0h] [rbp-B8h]
  bool ne; // [rsp+0h] [rbp-B8h]
  bool nk; // [rsp+0h] [rbp-B8h]
  size_t nf; // [rsp+0h] [rbp-B8h]
  size_t ng; // [rsp+0h] [rbp-B8h]
  size_t nl; // [rsp+0h] [rbp-B8h]
  char *s1; // [rsp+8h] [rbp-B0h]
  char *s1a; // [rsp+8h] [rbp-B0h]
  void *s1f; // [rsp+8h] [rbp-B0h]
  char *s1g; // [rsp+8h] [rbp-B0h]
  bool s1h; // [rsp+8h] [rbp-B0h]
  char *s1b; // [rsp+8h] [rbp-B0h]
  char *s1i; // [rsp+8h] [rbp-B0h]
  bool s1j; // [rsp+8h] [rbp-B0h]
  void *s1k; // [rsp+8h] [rbp-B0h]
  int s1c; // [rsp+8h] [rbp-B0h]
  int s1d; // [rsp+8h] [rbp-B0h]
  int s1e; // [rsp+8h] [rbp-B0h]
  char *s1l; // [rsp+8h] [rbp-B0h]
  void *v149; // [rsp+10h] [rbp-A8h]
  char *v150; // [rsp+10h] [rbp-A8h]
  char *v151; // [rsp+10h] [rbp-A8h]
  char **v152; // [rsp+10h] [rbp-A8h]
  void *v153; // [rsp+10h] [rbp-A8h]
  void *v154; // [rsp+10h] [rbp-A8h]
  char *v155; // [rsp+10h] [rbp-A8h]
  char *v156; // [rsp+10h] [rbp-A8h]
  char **v157; // [rsp+10h] [rbp-A8h]
  char *v158; // [rsp+10h] [rbp-A8h]
  char *v159; // [rsp+10h] [rbp-A8h]
  void *v160; // [rsp+10h] [rbp-A8h]
  void *v161; // [rsp+10h] [rbp-A8h]
  const __m128i *v162; // [rsp+18h] [rbp-A0h]
  bool v163; // [rsp+18h] [rbp-A0h]
  char *v164; // [rsp+18h] [rbp-A0h]
  size_t v165; // [rsp+18h] [rbp-A0h]
  char *v166; // [rsp+18h] [rbp-A0h]
  size_t v167; // [rsp+18h] [rbp-A0h]
  size_t v168; // [rsp+18h] [rbp-A0h]
  bool v169; // [rsp+18h] [rbp-A0h]
  bool v170; // [rsp+18h] [rbp-A0h]
  __int64 *v171; // [rsp+20h] [rbp-98h]
  int v172; // [rsp+20h] [rbp-98h]
  size_t v173; // [rsp+20h] [rbp-98h]
  const __m128i *v174; // [rsp+20h] [rbp-98h]
  size_t v175; // [rsp+20h] [rbp-98h]
  char **v176; // [rsp+20h] [rbp-98h]
  char **v177; // [rsp+20h] [rbp-98h]
  bool v178; // [rsp+28h] [rbp-90h]
  __int64 *v179; // [rsp+28h] [rbp-90h]
  int v180; // [rsp+28h] [rbp-90h]
  unsigned int v181; // [rsp+30h] [rbp-88h]
  int v182; // [rsp+34h] [rbp-84h]
  bool v183; // [rsp+34h] [rbp-84h]
  unsigned int v184; // [rsp+34h] [rbp-84h]
  int v185; // [rsp+34h] [rbp-84h]
  int v186; // [rsp+38h] [rbp-80h]
  int v187; // [rsp+38h] [rbp-80h]
  int v188; // [rsp+38h] [rbp-80h]
  unsigned int v189; // [rsp+38h] [rbp-80h]
  const void *v190; // [rsp+38h] [rbp-80h]
  unsigned int v191; // [rsp+40h] [rbp-78h]
  int v192; // [rsp+40h] [rbp-78h]
  const void *v193; // [rsp+40h] [rbp-78h]
  int v194; // [rsp+40h] [rbp-78h]
  size_t v195; // [rsp+40h] [rbp-78h]
  const void *v196; // [rsp+40h] [rbp-78h]
  size_t v197; // [rsp+48h] [rbp-70h]
  unsigned int v198; // [rsp+48h] [rbp-70h]
  const void *v199; // [rsp+48h] [rbp-70h]
  int v200; // [rsp+48h] [rbp-70h]
  size_t v201; // [rsp+48h] [rbp-70h]
  const void *v202; // [rsp+50h] [rbp-68h]
  size_t v203; // [rsp+50h] [rbp-68h]
  unsigned int v204; // [rsp+50h] [rbp-68h]
  int v205; // [rsp+50h] [rbp-68h]
  const void *v206; // [rsp+58h] [rbp-60h]
  unsigned int v207; // [rsp+58h] [rbp-60h]
  _QWORD v208[11]; // [rsp+60h] [rbp-58h] BYREF

  v3 = a1;
  v181 = *((_DWORD *)a2 + 8);
  v5 = sub_2245450(a3);
  v8 = *((unsigned int *)a2 + 4);
  v9 = (const __m128i *)*a2;
  v10 = (char *)v5;
  v11 = v6;
  if ( !(_DWORD)v8 )
    goto LABEL_2;
  v150 = (char *)*a2;
  v30 = v8 - 1;
  s1a = (char *)v5;
  nh = v6;
  v31 = sub_2248890(v5, v6);
  v10 = s1a;
  v11 = nh;
  v32 = v150;
  v33 = v30 & v31;
  v34 = s1a + 2 == nullptr;
  if ( nh )
  {
    v35 = 1;
    v36 = nullptr;
    while ( 1 )
    {
      v37 = &v32[24 * v33];
      v38 = *(const void **)v37;
      if ( *(_QWORD *)v37 == -1 )
        break;
      if ( v38 == (const void *)-2LL )
      {
        if ( v10 == (char *)-2LL )
          goto LABEL_28;
        if ( !v36 )
          v36 = (char **)&v32[24 * v33];
      }
      else if ( v11 == *((_QWORD *)v37 + 1) )
      {
        v172 = v35;
        v163 = v34;
        v151 = v32;
        s1f = (void *)v11;
        ni = (size_t)v10;
        v54 = memcmp(v10, v38, v11);
        v10 = (char *)ni;
        v11 = (size_t)s1f;
        v32 = v151;
        v34 = v163;
        v35 = v172;
        if ( !v54 )
          goto LABEL_28;
      }
      v39 = v35 + v33;
      ++v35;
      v33 = v30 & v39;
    }
  }
  else
  {
    v44 = 1;
    v36 = nullptr;
    while ( 1 )
    {
      v37 = &v150[24 * v33];
      if ( *(_QWORD *)v37 == -1 )
        break;
      if ( *(_QWORD *)v37 == -2 )
      {
        if ( s1a == (char *)-2LL )
          goto LABEL_28;
        if ( !v36 )
          v36 = (char **)&v150[24 * v33];
      }
      else if ( !*((_QWORD *)v37 + 1) )
      {
        goto LABEL_28;
      }
      v45 = v44 + v33;
      ++v44;
      v33 = v30 & v45;
    }
  }
  if ( v10 == (char *)-1LL )
  {
LABEL_28:
    v40 = (const __m128i *)(a2[3] + 24LL * *((unsigned int *)v37 + 4));
    goto LABEL_29;
  }
  v46 = *((_DWORD *)a2 + 2);
  v8 = *((unsigned int *)a2 + 4);
  if ( !v36 )
    v36 = (char **)v37;
  v47 = v46 + 1;
  v7 = (unsigned int)(4 * (v46 + 1));
  if ( (unsigned int)v7 >= 3 * (int)v8 )
  {
    v9 = (const __m128i *)*a2;
LABEL_2:
    v149 = (void *)v11;
    s1 = v10;
    n = (size_t)v9;
    v12 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v8 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
    v13 = ((v12 >> 16) | v12) + 1;
    if ( (unsigned int)v13 < 0x40 )
      LODWORD(v13) = 64;
    *((_DWORD *)a2 + 4) = v13;
    v14 = sub_22300B0(24LL * (unsigned int)v13, 8, 64, v7, v9, v11);
    v15 = (const __m128i *)n;
    v10 = s1;
    v16 = (__m128i *)v14;
    *a2 = v14;
    v11 = (size_t)v149;
    if ( n )
    {
      a2[1] = 0;
      na = 24 * v8;
      for ( i = (__m128i *)(v14 + 24LL * *((unsigned int *)a2 + 4)); i != v16; v16[-1].m128i_i64[0] = 0 )
      {
        v16->m128i_i64[0] = -1;
        v16 = (__m128i *)((char *)v16 + 24);
      }
      if ( (const __m128i *)((char *)v15 + 24 * v8) != v15 )
      {
        v18 = v15;
        v19 = (const __m128i *)((char *)v15 + 24 * v8);
        v20 = v15;
        do
        {
          if ( v18->m128i_i64[0] != -1 && v18->m128i_i64[0] != -2 )
          {
            v21 = *((_DWORD *)a2 + 4);
            if ( !v21 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128(v18);
              BUG();
            }
            v162 = (const __m128i *)*a2;
            v22 = sub_2248890(v18->m128i_i64[0], v18->m128i_i64[1]);
            v23 = (const void *)v18->m128i_i64[0];
            v24 = v21 - 1;
            v25 = v18->m128i_u64[1];
            v26 = (v21 - 1) & v22;
            v178 = v18->m128i_i64[0] == -2;
            if ( v25 )
            {
              v182 = 1;
              v171 = nullptr;
              while ( 1 )
              {
                v27 = &v162->m128i_i64[3 * v26];
                v28 = (char *)*v27;
                if ( *v27 == -1 )
                  goto LABEL_140;
                if ( v28 == (char *)-2LL )
                {
                  v106 = v178;
                }
                else
                {
                  if ( v27[1] != v25 )
                    goto LABEL_18;
                  v204 = v26;
                  v200 = v24;
                  v195 = v25;
                  v190 = v23;
                  v120 = memcmp(v23, v28, v25);
                  v23 = v190;
                  v25 = v195;
                  v24 = v200;
                  v26 = v204;
                  v106 = v120 == 0;
                }
                if ( v106 )
                  goto LABEL_122;
LABEL_18:
                v202 = v23;
                v197 = v25;
                v191 = v26;
                v186 = v24;
                v29 = sub_E39ED0((char *)*v27, v27[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
                v24 = v186;
                v25 = v197;
                v23 = v202;
                if ( v171 || !v29 )
                  v27 = v171;
                v171 = v27;
                v26 = v186 & (v182 + v191);
                ++v182;
              }
            }
            v171 = nullptr;
            v104 = 1;
            while ( 1 )
            {
              v27 = &v162->m128i_i64[3 * v26];
              if ( *v27 == -1 )
                break;
              if ( *v27 == -2 )
              {
                if ( v23 == (const void *)-2LL )
                  goto LABEL_122;
              }
              else if ( !v27[1] )
              {
                goto LABEL_122;
              }
              v193 = v23;
              v188 = v104;
              v184 = v26;
              v180 = v24;
              v105 = sub_E39ED0((char *)*v27, v27[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
              v24 = v180;
              v23 = v193;
              if ( v171 || !v105 )
                v27 = v171;
              v171 = v27;
              v104 = v188 + 1;
              v26 = v180 & (v188 + v184);
            }
LABEL_140:
            if ( v23 != (const void *)-1LL && v171 )
              v27 = v171;
LABEL_122:
            v107 = v18[1].m128i_i32[0];
            *(__m128i *)v27 = _mm_loadu_si128(v18);
            *((_DWORD *)v27 + 4) = v107;
            ++*((_DWORD *)a2 + 2);
          }
          v18 = (const __m128i *)((char *)v18 + 24);
        }
        while ( v19 != v18 );
        v10 = s1;
        v11 = (size_t)v149;
        v15 = v20;
        v3 = a1;
      }
      v154 = (void *)v11;
      s1i = v10;
      operator delete(v15, na, 8);
      v16 = (__m128i *)*a2;
      v56 = *((_DWORD *)a2 + 4);
      v10 = s1i;
      v11 = (size_t)v154;
    }
    else
    {
      v55 = *((unsigned int *)a2 + 4);
      a2[1] = 0;
      v56 = v55;
      v57 = (__m128i *)((char *)v16 + 24 * v55);
      if ( v16 != v57 )
      {
        v58 = v16;
        do
        {
          v58->m128i_i64[0] = -1;
          v58 = (__m128i *)((char *)v58 + 24);
          v58[-1].m128i_i64[0] = 0;
        }
        while ( v57 != v58 );
      }
    }
    v36 = nullptr;
    if ( !v56 )
      goto LABEL_63;
    s1g = v10;
    v59 = v56 - 1;
    nj = v11;
    v60 = sub_2248890(v10, v11);
    v10 = s1g;
    v11 = nj;
    v61 = v59 & v60;
    v62 = s1g + 2 == nullptr;
    if ( nj )
    {
      nb = 1;
      v63 = nullptr;
      while ( 1 )
      {
        v36 = (char **)v16 + 3 * v61;
        v64 = *v36;
        if ( *v36 == (char *)-1LL )
        {
          if ( v10 != (char *)-1LL )
          {
            v66 = (char **)v16 + 3 * v61;
            v36 = v63;
LABEL_61:
            if ( !v36 )
              v36 = v66;
          }
          goto LABEL_63;
        }
        if ( v64 == (char *)-2LL )
        {
          v117 = v62;
        }
        else
        {
          if ( (char *)v11 != v36[1] )
            goto LABEL_56;
          v176 = v63;
          v169 = v62;
          v160 = (void *)v11;
          s1l = v10;
          v119 = memcmp(v10, v64, v11);
          v10 = s1l;
          v11 = (size_t)v160;
          v62 = v169;
          v63 = v176;
          v117 = v119 == 0;
        }
        if ( v117 )
          goto LABEL_63;
LABEL_56:
        v173 = v11;
        v164 = v10;
        v152 = v63;
        s1h = v62;
        v65 = sub_E39ED0(*v36, (size_t)v36[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
        v62 = s1h;
        v10 = v164;
        v11 = v173;
        if ( v152 || !v65 )
          v36 = v152;
        v63 = v36;
        v61 = v59 & (nb + v61);
        ++nb;
      }
    }
    v101 = 1;
    v102 = 0;
    while ( 1 )
    {
      v36 = (char **)v16 + 3 * v61;
      if ( *v36 == (char *)-1LL )
        break;
      if ( *v36 == (char *)-2LL )
      {
        if ( v10 == (char *)-2LL )
          goto LABEL_63;
      }
      else if ( !v36[1] )
      {
        goto LABEL_63;
      }
      v167 = v11;
      v158 = v10;
      s1d = v101;
      nf = v102;
      v103 = sub_E39ED0(*v36, (size_t)v36[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v10 = v158;
      v11 = v167;
      if ( nf || !v103 )
        v36 = (char **)nf;
      v102 = (size_t)v36;
      v101 = s1d + 1;
      v61 = v59 & (s1d + v61);
    }
    if ( v10 != (char *)-1LL )
    {
      v66 = (char **)v16 + 3 * v61;
      v36 = (char **)v102;
      goto LABEL_61;
    }
LABEL_63:
    v47 = *((_DWORD *)a2 + 2) + 1;
    goto LABEL_40;
  }
  v48 = (unsigned int)v8 >> 3;
  if ( (int)v8 - *((_DWORD *)a2 + 3) - v47 <= (unsigned int)v48 )
  {
    v71 = (const __m128i *)*a2;
    v153 = (void *)v11;
    s1b = v10;
    nc = v34;
    v72 = ((((((((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
               | (unsigned int)(v8 - 1)
               | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
             | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
             | (unsigned int)(v8 - 1)
             | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
             | (unsigned int)(v8 - 1)
             | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
           | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
           | (unsigned int)(v8 - 1)
           | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 16)
         | (((((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
             | (unsigned int)(v8 - 1)
             | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
           | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
           | (unsigned int)(v8 - 1)
           | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
           | (unsigned int)(v8 - 1)
           | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 4)
         | (((unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1)) >> 2)
         | (unsigned int)(v8 - 1)
         | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1))
        + 1;
    if ( (unsigned int)v72 < 0x40 )
      LODWORD(v72) = 64;
    *((_DWORD *)a2 + 4) = v72;
    v73 = sub_22300B0(24LL * (unsigned int)v72, 8, 64, v48, v32, v11);
    v74 = nc;
    v10 = s1b;
    v75 = (__m128i *)v73;
    *a2 = v73;
    v11 = (size_t)v153;
    if ( v71 )
    {
      a2[1] = 0;
      nd = 24 * v8;
      for ( j = (__m128i *)(v73 + 24LL * *((unsigned int *)a2 + 4)); j != v75; v75[-1].m128i_i64[0] = 0 )
      {
        v75->m128i_i64[0] = -1;
        v75 = (__m128i *)((char *)v75 + 24);
      }
      if ( v71 != (const __m128i *)((char *)v71 + 24 * v8) )
      {
        v77 = v71;
        v78 = (const __m128i *)((char *)v71 + 24 * v8);
        v79 = v71;
        v80 = v74;
        do
        {
          if ( v77->m128i_i64[0] != -1 && v77->m128i_i64[0] != -2 )
          {
            v81 = *((_DWORD *)a2 + 4);
            if ( !v81 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128(v77);
              BUG();
            }
            v174 = (const __m128i *)*a2;
            v82 = sub_2248890(v77->m128i_i64[0], v77->m128i_i64[1]);
            v83 = (const void *)v77->m128i_i64[0];
            v84 = v81 - 1;
            v85 = v77->m128i_u64[1];
            v86 = (v81 - 1) & v82;
            v183 = v77->m128i_i64[0] == -2;
            if ( v85 )
            {
              v187 = 1;
              v179 = nullptr;
              while ( 1 )
              {
                v87 = &v174->m128i_i64[3 * v86];
                v88 = (char *)*v87;
                if ( *v87 == -1 )
                  goto LABEL_147;
                if ( v88 == (char *)-2LL )
                {
                  v112 = v183;
                }
                else
                {
                  if ( v87[1] != v85 )
                    goto LABEL_86;
                  v207 = v86;
                  v205 = v84;
                  v201 = v85;
                  v196 = v83;
                  v122 = memcmp(v83, v88, v85);
                  v83 = v196;
                  v85 = v201;
                  v84 = v205;
                  v86 = v207;
                  v112 = v122 == 0;
                }
                if ( v112 )
                  goto LABEL_139;
LABEL_86:
                v206 = v83;
                v203 = v85;
                v198 = v86;
                v192 = v84;
                v89 = sub_E39ED0((char *)*v87, v87[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
                v84 = v192;
                v85 = v203;
                v83 = v206;
                if ( v179 || !v89 )
                  v87 = v179;
                v179 = v87;
                v86 = v192 & (v187 + v198);
                ++v187;
              }
            }
            v179 = nullptr;
            v110 = 1;
            while ( 1 )
            {
              v87 = &v174->m128i_i64[3 * v86];
              if ( *v87 == -1 )
                break;
              if ( *v87 == -2 )
              {
                if ( v83 == (const void *)-2LL )
                  goto LABEL_139;
              }
              else if ( !v87[1] )
              {
                goto LABEL_139;
              }
              v199 = v83;
              v194 = v110;
              v189 = v86;
              v185 = v84;
              v111 = sub_E39ED0((char *)*v87, v87[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
              v84 = v185;
              v83 = v199;
              if ( v179 || !v111 )
                v87 = v179;
              v179 = v87;
              v110 = v194 + 1;
              v86 = v185 & (v194 + v189);
            }
LABEL_147:
            if ( v83 != (const void *)-1LL && v179 )
              v87 = v179;
LABEL_139:
            v113 = v77[1].m128i_i32[0];
            *(__m128i *)v87 = _mm_loadu_si128(v77);
            *((_DWORD *)v87 + 4) = v113;
            ++*((_DWORD *)a2 + 2);
          }
          v77 = (const __m128i *)((char *)v77 + 24);
        }
        while ( v78 != v77 );
        v74 = v80;
        v10 = s1b;
        v71 = v79;
        v11 = (size_t)v153;
        v3 = a1;
      }
      v165 = v11;
      v155 = v10;
      s1j = v74;
      operator delete(v71, nd, 8);
      v75 = (__m128i *)*a2;
      v90 = *((_DWORD *)a2 + 4);
      v74 = s1j;
      v10 = v155;
      v11 = v165;
    }
    else
    {
      v98 = *((unsigned int *)a2 + 4);
      a2[1] = 0;
      v90 = v98;
      v99 = (__m128i *)((char *)v75 + 24 * v98);
      if ( v75 != v99 )
      {
        v100 = v75;
        do
        {
          v100->m128i_i64[0] = -1;
          v100 = (__m128i *)((char *)v100 + 24);
          v100[-1].m128i_i64[0] = 0;
        }
        while ( v99 != v100 );
      }
    }
    ne = v74;
    v36 = nullptr;
    if ( !v90 )
      goto LABEL_63;
    v156 = v10;
    v91 = v90 - 1;
    s1k = (void *)v11;
    v92 = sub_2248890(v10, v11);
    v11 = (size_t)s1k;
    v10 = v156;
    v93 = v91 & v92;
    if ( !s1k )
    {
      v108 = 1;
      v95 = nullptr;
      while ( 1 )
      {
        v36 = (char **)v75 + 3 * v93;
        if ( *v36 == (char *)-1LL )
          break;
        if ( *v36 == (char *)-2LL )
        {
          if ( v10 == (char *)-2LL )
            goto LABEL_63;
        }
        else if ( !v36[1] )
        {
          goto LABEL_63;
        }
        v168 = v11;
        v159 = v10;
        s1e = v108;
        ng = (size_t)v95;
        v109 = sub_E39ED0(*v36, (size_t)v36[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
        v10 = v159;
        v11 = v168;
        if ( ng || !v109 )
          v36 = (char **)ng;
        v95 = v36;
        v108 = s1e + 1;
        v93 = v91 & (s1e + v93);
      }
LABEL_144:
      if ( v95 )
        v36 = v95;
      goto LABEL_63;
    }
    s1c = 1;
    v94 = ne;
    v95 = nullptr;
    while ( 1 )
    {
      v36 = (char **)v75 + 3 * v93;
      v96 = *v36;
      if ( *v36 == (char *)-1LL )
        goto LABEL_144;
      if ( v96 == (char *)-2LL )
      {
        v118 = v94;
      }
      else
      {
        if ( (char *)v11 != v36[1] )
          goto LABEL_99;
        v177 = v95;
        v170 = v94;
        v161 = (void *)v11;
        nl = (size_t)v10;
        v121 = memcmp(v10, v96, v11);
        v10 = (char *)nl;
        v11 = (size_t)v161;
        v94 = v170;
        v95 = v177;
        v118 = v121 == 0;
      }
      if ( v118 )
        goto LABEL_63;
LABEL_99:
      v175 = v11;
      v166 = v10;
      v157 = v95;
      nk = v94;
      v97 = sub_E39ED0(*v36, (size_t)v36[1], (const void *)0xFFFFFFFFFFFFFFFELL, 0);
      v94 = nk;
      v10 = v166;
      v11 = v175;
      if ( v157 || !v97 )
        v36 = v157;
      v95 = v36;
      v93 = v91 & (s1c + v93);
      ++s1c;
    }
  }
LABEL_40:
  v49 = *v36 + 1 == nullptr;
  *((_DWORD *)a2 + 2) = v47;
  if ( !v49 )
    --*((_DWORD *)a2 + 3);
  *((_DWORD *)v36 + 4) = 0;
  v50 = *((unsigned int *)a2 + 8);
  *v36 = v10;
  *((_DWORD *)v36 + 4) = v50;
  v51 = *((unsigned int *)a2 + 9);
  v36[1] = (char *)v11;
  if ( v50 >= v51 )
  {
    v67 = v50 + 1;
    v208[0] = v10;
    v68 = a2[3];
    v69 = (const __m128i *)v208;
    v208[1] = v11;
    v208[2] = v181;
    if ( v51 < v50 + 1 )
    {
      v114 = (char **)(a2 + 3);
      v115 = (char **)(a2 + 5);
      if ( v68 > (unsigned __int64)v208 || (unsigned __int64)v208 >= v68 + 24 * v50 )
      {
        sub_2237220(v114, v115, v67, 24);
        v68 = a2[3];
        v69 = (const __m128i *)v208;
      }
      else
      {
        v116 = (char *)v208 - v68;
        sub_2237220(v114, v115, v67, 24);
        v68 = a2[3];
        v69 = (const __m128i *)&v116[v68];
      }
    }
    v70 = (__m128i *)(v68 + 24LL * *((unsigned int *)a2 + 8));
    *v70 = _mm_loadu_si128(v69);
    v70[1].m128i_i64[0] = v69[1].m128i_i64[0];
    v52 = (unsigned int)(*((_DWORD *)a2 + 8) + 1);
    *((_DWORD *)a2 + 8) = v52;
  }
  else
  {
    v52 = (unsigned int)(v50 + 1);
    v53 = (char *)(a2[3] + 24 * v50);
    *(_QWORD *)v53 = v10;
    *((_QWORD *)v53 + 1) = v11;
    *((_QWORD *)v53 + 2) = v181;
    *((_DWORD *)a2 + 8) = v52;
  }
  v40 = (const __m128i *)(a2[3] + 24 * v52 - 24);
LABEL_29:
  v41 = _mm_loadu_si128(v40);
  v42 = v40[1].m128i_i64[0];
  *v3 = v41;
  v3[1].m128i_i64[0] = v42;
  return v3;
}
