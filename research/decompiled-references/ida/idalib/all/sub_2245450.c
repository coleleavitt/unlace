__int64 __fastcall sub_2245450(__int64 a1, const void *a2, size_t a3)
{
  size_t v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // r15
  const __m128i *v7; // r13
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r15
  char *k; // rax
  const __m128i *v17; // r14
  int v18; // eax
  size_t v19; // r9
  int v20; // r11d
  unsigned int v21; // r8d
  __int64 v22; // r10
  __int64 v23; // rcx
  const void *v24; // rsi
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // r15d
  __int64 *m128i_i64; // r14
  const void *v29; // rsi
  int v30; // r15d
  int v32; // esi
  __m128i *v33; // rdx
  unsigned int v34; // r15d
  __m128i *v35; // rax
  int v36; // edx
  __int64 v37; // r15
  char **v38; // rdi
  char *v39; // rcx
  char *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  int v43; // r13d
  char *m; // rdx
  int v45; // r13d
  unsigned int v46; // eax
  char *v47; // rcx
  int v48; // r10d
  unsigned int v49; // r8d
  unsigned __int64 v50; // rax
  _QWORD *v51; // rax
  const __m128i *v52; // r11
  _QWORD *v53; // r13
  __int64 v54; // rax
  __int64 v55; // r15
  _QWORD *i; // rax
  const __m128i *v57; // r13
  const __m128i *v58; // r14
  const __m128i *v59; // rbp
  int v60; // eax
  size_t v61; // r10
  int v62; // r8d
  unsigned int v63; // r9d
  __int64 v64; // r11
  __int64 v65; // rcx
  const void *v66; // rsi
  int v67; // r14d
  unsigned int v68; // eax
  int v69; // ecx
  int v70; // r10d
  unsigned int v71; // r8d
  __int64 v72; // rdx
  _QWORD *j; // rdx
  int v74; // esi
  __int64 *v75; // rdx
  unsigned int v76; // r8d
  int v77; // edx
  unsigned int v78; // r8d
  int v79; // edx
  unsigned int v80; // r8d
  int v81; // edx
  unsigned int v82; // r9d
  char *v83; // rax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int s1; // [rsp+0h] [rbp-78h]
  void *s1a; // [rsp+0h] [rbp-78h]
  void *s1f; // [rsp+0h] [rbp-78h]
  char *s1b; // [rsp+0h] [rbp-78h]
  const __m128i *s1c; // [rsp+0h] [rbp-78h]
  int s1d; // [rsp+0h] [rbp-78h]
  void *s1e; // [rsp+0h] [rbp-78h]
  unsigned int s1g; // [rsp+0h] [rbp-78h]
  int s1h; // [rsp+0h] [rbp-78h]
  int v97; // [rsp+8h] [rbp-70h]
  size_t v98; // [rsp+8h] [rbp-70h]
  char *v99; // [rsp+8h] [rbp-70h]
  unsigned int v100; // [rsp+8h] [rbp-70h]
  __int64 v101; // [rsp+10h] [rbp-68h]
  int v102; // [rsp+10h] [rbp-68h]
  __int64 v103; // [rsp+10h] [rbp-68h]
  __int64 v104; // [rsp+10h] [rbp-68h]
  __int64 v105; // [rsp+10h] [rbp-68h]
  int v106; // [rsp+1Ch] [rbp-5Ch]
  int v107; // [rsp+1Ch] [rbp-5Ch]
  int v108; // [rsp+1Ch] [rbp-5Ch]
  int v109; // [rsp+1Ch] [rbp-5Ch]
  __int64 v110; // [rsp+20h] [rbp-58h]
  __int64 v111; // [rsp+20h] [rbp-58h]
  size_t v112; // [rsp+28h] [rbp-50h]
  size_t v113; // [rsp+28h] [rbp-50h]
  int v114; // [rsp+30h] [rbp-48h]
  unsigned int v115; // [rsp+30h] [rbp-48h]
  unsigned int v116; // [rsp+34h] [rbp-44h]
  int v117; // [rsp+34h] [rbp-44h]
  __int64 v118; // [rsp+38h] [rbp-40h]
  __int64 v119; // [rsp+38h] [rbp-40h]

  v4 = a3;
  v5 = a1;
  v6 = *(unsigned int *)(a1 + 24);
  v7 = *(const __m128i **)(a1 + 8);
  if ( !(_DWORD)v6 )
    goto LABEL_2;
  v25 = sub_2248890(a2, a3);
  v26 = v6 - 1;
  v27 = (v6 - 1) & v25;
  if ( v4 )
  {
    v12 = 1;
    v11 = 0;
    while ( 1 )
    {
      m128i_i64 = v7[v27].m128i_i64;
      v29 = (const void *)*m128i_i64;
      if ( *m128i_i64 == -1 )
        break;
      if ( v29 == (const void *)-2LL )
      {
        if ( a2 == (const void *)-2LL )
          return *m128i_i64;
        if ( !v11 )
          v11 = (__int64)v7[v27].m128i_i64;
      }
      else if ( m128i_i64[1] == v4 )
      {
        v102 = v12;
        v97 = v26;
        s1f = (void *)v11;
        v41 = memcmp(a2, v29, v4);
        v11 = (__int64)s1f;
        v26 = v97;
        LODWORD(v12) = v102;
        if ( !v41 )
          return *m128i_i64;
      }
      v30 = v12 + v27;
      v12 = (unsigned int)(v12 + 1);
      v27 = v26 & v30;
    }
    if ( a2 != (const void *)-1LL )
    {
      v35 = (__m128i *)&v7[v27];
      m128i_i64 = (__int64 *)v11;
LABEL_34:
      v6 = *(unsigned int *)(a1 + 24);
      if ( !m128i_i64 )
        m128i_i64 = (__int64 *)v35;
      v36 = *(_DWORD *)(a1 + 16) + 1;
      if ( 4 * v36 < (unsigned int)(3 * v6) )
      {
        if ( (int)v6 - *(_DWORD *)(a1 + 20) - v36 > (unsigned int)v6 >> 3 )
        {
          v37 = *m128i_i64;
LABEL_39:
          *(_DWORD *)(v5 + 16) = v36;
          if ( v37 != -1 )
            --*(_DWORD *)(v5 + 20);
          v38 = *(char ***)v5;
          *m128i_i64 = (__int64)a2;
          m128i_i64[1] = v4;
          v39 = *v38;
          v38[10] += v4 + 1;
          v40 = &v39[v4 + 1];
          if ( v38[1] >= v40 && v39 )
            *v38 = v40;
          else
            v39 = (char *)sub_986170((__int64)v38, v4 + 1, v4 + 1, 0, v11, v12);
          if ( v4 )
            v39 = (char *)memcpy(v39, a2, v4);
          v39[v4] = 0;
          *m128i_i64 = (__int64)v39;
          m128i_i64[1] = v4;
          return *m128i_i64;
        }
        s1c = *(const __m128i **)(a1 + 8);
        v50 = ((((((((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
                   | (unsigned int)(v6 - 1)
                   | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
                 | (unsigned int)(v6 - 1)
                 | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 8)
               | (((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
                 | (unsigned int)(v6 - 1)
                 | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
               | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
               | (unsigned int)(v6 - 1)
               | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 16)
             | (((((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
                 | (unsigned int)(v6 - 1)
                 | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
               | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
               | (unsigned int)(v6 - 1)
               | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
               | (unsigned int)(v6 - 1)
               | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 4)
             | (((unsigned int)(v6 - 1) | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1)) >> 2)
             | (unsigned int)(v6 - 1)
             | ((unsigned __int64)(unsigned int)(v6 - 1) >> 1))
            + 1;
        if ( (unsigned int)v50 < 0x40 )
          LODWORD(v50) = 64;
        *(_DWORD *)(a1 + 24) = v50;
        v51 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v50, 8);
        v52 = s1c;
        v53 = v51;
        *(_QWORD *)(a1 + 8) = v51;
        if ( s1c )
        {
          v54 = *(unsigned int *)(a1 + 24);
          v55 = v6;
          *(_QWORD *)(a1 + 16) = 0;
          for ( i = &v53[2 * v54]; i != v53; *(v53 - 1) = 0 )
          {
            *v53 = -1;
            v53 += 2;
          }
          if ( s1c != &s1c[v55] )
          {
            v98 = v4;
            v57 = s1c;
            v58 = &s1c[v55];
            v59 = s1c;
            do
            {
              if ( v57->m128i_i64[0] != -1 && v57->m128i_i64[0] != -2 )
              {
                s1d = *(_DWORD *)(a1 + 24);
                if ( !s1d )
                {
                  *(__m128i *)&dword_0 = _mm_loadu_si128(v57);
                  BUG();
                }
                v103 = *(_QWORD *)(a1 + 8);
                v60 = sub_2248890(v57->m128i_i64[0], v57->m128i_i64[1]);
                v61 = v57->m128i_u64[1];
                v62 = s1d - 1;
                v63 = (s1d - 1) & v60;
                s1e = (void *)v57->m128i_i64[0];
                if ( v61 )
                {
                  v107 = 1;
                  v64 = 0;
                  while ( 1 )
                  {
                    v65 = v103 + 16LL * v63;
                    v66 = *(const void **)v65;
                    if ( *(_QWORD *)v65 == -1 )
                      break;
                    if ( v66 == (const void *)-2LL )
                    {
                      if ( s1e == (void *)-2LL )
                        goto LABEL_125;
                      if ( !v64 )
                        v64 = v103 + 16LL * v63;
                    }
                    else
                    {
                      v111 = v103 + 16LL * v63;
                      if ( *(_QWORD *)(v65 + 8) == v61 )
                      {
                        v119 = v64;
                        v117 = v62;
                        v115 = v63;
                        v113 = v61;
                        v87 = memcmp(s1e, v66, v61);
                        v61 = v113;
                        v63 = v115;
                        v62 = v117;
                        v64 = v119;
                        v65 = v111;
                        if ( !v87 )
                          goto LABEL_125;
                      }
                    }
                    v63 = v62 & (v107 + v63);
                    ++v107;
                  }
                }
                else
                {
                  v81 = 1;
                  v64 = 0;
                  while ( 1 )
                  {
                    v65 = v103 + 16LL * v63;
                    if ( *(_QWORD *)v65 == -1 )
                      break;
                    if ( *(_QWORD *)v65 == -2 )
                    {
                      if ( s1e == (void *)-2LL )
                        goto LABEL_125;
                      if ( !v64 )
                        v64 = v103 + 16LL * v63;
                    }
                    else if ( !*(_QWORD *)(v65 + 8) )
                    {
                      goto LABEL_125;
                    }
                    v82 = v81 + v63;
                    ++v81;
                    v63 = v62 & v82;
                  }
                }
                if ( s1e != (void *)-1LL && v64 )
                  v65 = v64;
LABEL_125:
                *(__m128i *)v65 = _mm_loadu_si128(v57);
                ++*(_DWORD *)(a1 + 16);
              }
              ++v57;
            }
            while ( v58 != v57 );
            v52 = v59;
            v4 = v98;
          }
          operator delete(v52, v55 * 16, 8);
          v53 = *(_QWORD **)(a1 + 8);
          v67 = *(_DWORD *)(a1 + 24);
        }
        else
        {
          v72 = *(unsigned int *)(a1 + 24);
          *(_QWORD *)(a1 + 16) = 0;
          v67 = v72;
          for ( j = &v51[2 * v72]; j != v51; *(v51 - 1) = 0 )
          {
            *v51 = -1;
            v51 += 2;
          }
        }
        if ( v67 )
        {
          v68 = sub_2248890(a2, v4);
          v69 = v67 - 1;
          v11 = (v67 - 1) & v68;
          if ( v4 )
          {
            v70 = 1;
            v12 = 0;
            while ( 1 )
            {
              m128i_i64 = &v53[2 * (unsigned int)v11];
              v37 = *m128i_i64;
              if ( *m128i_i64 == -1 )
                break;
              if ( v37 == -2 )
              {
                if ( a2 == (const void *)-2LL )
                  goto LABEL_133;
                if ( !v12 )
                  v12 = (__int64)&v53[2 * (unsigned int)v11];
              }
              else if ( m128i_i64[1] == v4 )
              {
                v109 = v70;
                v105 = v12;
                v100 = v11;
                s1h = v69;
                v85 = memcmp(a2, (const void *)*m128i_i64, v4);
                v69 = s1h;
                v11 = v100;
                v12 = v105;
                v70 = v109;
                if ( !v85 )
                  goto LABEL_66;
              }
              v71 = v70 + v11;
              ++v70;
              v11 = v69 & v71;
            }
          }
          else
          {
            v79 = 1;
            v12 = 0;
            while ( 1 )
            {
              m128i_i64 = &v53[2 * (unsigned int)v11];
              v37 = *m128i_i64;
              if ( *m128i_i64 == -1 )
                break;
              if ( v37 == -2 )
              {
                if ( a2 == (const void *)-2LL )
                {
LABEL_133:
                  v37 = (__int64)a2;
                  goto LABEL_66;
                }
                if ( !v12 )
                  v12 = (__int64)&v53[2 * (unsigned int)v11];
              }
              else if ( !m128i_i64[1] )
              {
                goto LABEL_66;
              }
              v80 = v79 + v11;
              ++v79;
              v11 = v69 & v80;
            }
          }
          v37 = -1;
          if ( v12 )
          {
            v37 = *(_QWORD *)v12;
            m128i_i64 = (__int64 *)v12;
          }
          goto LABEL_66;
        }
        goto LABEL_65;
      }
      v7 = *(const __m128i **)(a1 + 8);
LABEL_2:
      v8 = (((((((unsigned int)(2 * v6 - 1) | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1)) >> 2)
             | (unsigned int)(2 * v6 - 1)
             | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1)) >> 4)
           | (((unsigned int)(2 * v6 - 1) | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v6 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1)) >> 8)
         | (((((unsigned int)(2 * v6 - 1) | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1)) >> 2)
           | (unsigned int)(2 * v6 - 1)
           | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1)) >> 4)
         | (((unsigned int)(2 * v6 - 1) | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1)) >> 2)
         | (unsigned int)(2 * v6 - 1)
         | ((unsigned __int64)(unsigned int)(2 * v6 - 1) >> 1);
      v9 = ((v8 >> 16) | v8) + 1;
      if ( (unsigned int)v9 < 0x40 )
        LODWORD(v9) = 64;
      *(_DWORD *)(a1 + 24) = v9;
      v10 = (char *)sub_22300B0(16LL * (unsigned int)v9, 8);
      v13 = v10;
      *(_QWORD *)(a1 + 8) = v10;
      if ( v7 )
      {
        v14 = *(unsigned int *)(a1 + 24);
        v15 = v6;
        *(_QWORD *)(a1 + 16) = 0;
        for ( k = &v13[16 * v14]; k != v13; *((_QWORD *)v13 - 1) = 0 )
        {
          *(_QWORD *)v13 = -1;
          v13 += 16;
        }
        if ( &v7[v15] != v7 )
        {
          v17 = v7;
          do
          {
            if ( v17->m128i_i64[0] != -1 && v17->m128i_i64[0] != -2 )
            {
              s1 = *(_DWORD *)(a1 + 24);
              if ( !s1 )
              {
                *(__m128i *)&dword_0 = _mm_loadu_si128(v17);
                BUG();
              }
              v101 = *(_QWORD *)(a1 + 8);
              v18 = sub_2248890(v17->m128i_i64[0], v17->m128i_i64[1]);
              v19 = v17->m128i_u64[1];
              v20 = s1 - 1;
              v21 = (s1 - 1) & v18;
              s1a = (void *)v17->m128i_i64[0];
              if ( v19 )
              {
                v106 = 1;
                v22 = 0;
                while ( 1 )
                {
                  v23 = v101 + 16LL * v21;
                  v24 = *(const void **)v23;
                  if ( *(_QWORD *)v23 == -1 )
                    break;
                  if ( v24 == (const void *)-2LL )
                  {
                    if ( s1a == (void *)-2LL )
                      goto LABEL_111;
                    if ( !v22 )
                      v22 = v101 + 16LL * v21;
                  }
                  else
                  {
                    v110 = v101 + 16LL * v21;
                    if ( *(_QWORD *)(v23 + 8) == v19 )
                    {
                      v118 = v22;
                      v116 = v21;
                      v114 = v20;
                      v112 = v19;
                      v86 = memcmp(s1a, v24, v19);
                      v19 = v112;
                      v20 = v114;
                      v21 = v116;
                      v22 = v118;
                      v23 = v110;
                      if ( !v86 )
                        goto LABEL_111;
                    }
                  }
                  v21 = v20 & (v106 + v21);
                  ++v106;
                }
              }
              else
              {
                v77 = 1;
                v22 = 0;
                while ( 1 )
                {
                  v23 = v101 + 16LL * v21;
                  if ( *(_QWORD *)v23 == -1 )
                    break;
                  if ( *(_QWORD *)v23 == -2 )
                  {
                    if ( s1a == (void *)-2LL )
                      goto LABEL_111;
                    if ( !v22 )
                      v22 = v101 + 16LL * v21;
                  }
                  else if ( !*(_QWORD *)(v23 + 8) )
                  {
                    goto LABEL_111;
                  }
                  v78 = v77 + v21;
                  ++v77;
                  v21 = v20 & v78;
                }
              }
              if ( s1a != (void *)-1LL && v22 )
                v23 = v22;
LABEL_111:
              *(__m128i *)v23 = _mm_loadu_si128(v17);
              ++*(_DWORD *)(a1 + 16);
            }
            ++v17;
          }
          while ( &v7[v15] != v17 );
          v5 = a1;
        }
        operator delete(v7, v15 * 16, 8);
        v13 = *(char **)(v5 + 8);
        v43 = *(_DWORD *)(v5 + 24);
      }
      else
      {
        v42 = *(unsigned int *)(a1 + 24);
        *(_QWORD *)(a1 + 16) = 0;
        v43 = v42;
        for ( m = &v10[16 * v42]; m != v10; *((_QWORD *)v10 - 1) = 0 )
        {
          *(_QWORD *)v10 = -1;
          v10 += 16;
        }
      }
      if ( v43 )
      {
        s1b = v13;
        v45 = v43 - 1;
        v46 = sub_2248890(a2, v4);
        v47 = s1b;
        v11 = v45 & v46;
        if ( v4 )
        {
          v48 = 1;
          v12 = 0;
          while ( 1 )
          {
            m128i_i64 = (__int64 *)&v47[16 * (unsigned int)v11];
            v37 = *m128i_i64;
            if ( *m128i_i64 == -1 )
              break;
            if ( v37 == -2 )
            {
              if ( a2 == (const void *)-2LL )
                goto LABEL_133;
              if ( !v12 )
                v12 = (__int64)&v47[16 * (unsigned int)v11];
            }
            else if ( v4 == m128i_i64[1] )
            {
              v108 = v48;
              v104 = v12;
              v99 = v47;
              s1g = v11;
              v84 = memcmp(a2, (const void *)*m128i_i64, v4);
              v11 = s1g;
              v47 = v99;
              v12 = v104;
              v48 = v108;
              if ( !v84 )
                goto LABEL_66;
            }
            v49 = v48 + v11;
            ++v48;
            v11 = v45 & v49;
          }
          if ( a2 == (const void *)-1LL )
            goto LABEL_66;
          v83 = &v47[16 * (unsigned int)v11];
          m128i_i64 = (__int64 *)v12;
        }
        else
        {
          v74 = 1;
          v75 = nullptr;
          while ( 1 )
          {
            m128i_i64 = (__int64 *)&s1b[16 * (unsigned int)v11];
            v37 = *m128i_i64;
            if ( *m128i_i64 == -1 )
              break;
            if ( v37 == -2 )
            {
              if ( a2 == (const void *)-2LL )
                goto LABEL_133;
              if ( !v75 )
                v75 = (__int64 *)&s1b[16 * (unsigned int)v11];
            }
            else if ( !m128i_i64[1] )
            {
              goto LABEL_66;
            }
            v76 = v74 + v11;
            ++v74;
            v11 = v45 & v76;
          }
          if ( a2 == (const void *)-1LL )
            goto LABEL_66;
          v83 = &s1b[16 * (unsigned int)v11];
          m128i_i64 = v75;
        }
        if ( m128i_i64 )
        {
          v37 = *m128i_i64;
        }
        else
        {
          m128i_i64 = (__int64 *)v83;
          v37 = -1;
        }
LABEL_66:
        v36 = *(_DWORD *)(v5 + 16) + 1;
        goto LABEL_39;
      }
LABEL_65:
      v37 = 0x10102464C457FLL;
      m128i_i64 = nullptr;
      goto LABEL_66;
    }
  }
  else
  {
    v32 = 1;
    v33 = nullptr;
    while ( 1 )
    {
      m128i_i64 = v7[v27].m128i_i64;
      if ( *m128i_i64 == -1 )
        break;
      if ( *m128i_i64 == -2 )
      {
        if ( a2 == (const void *)-2LL )
          return *m128i_i64;
        if ( !v33 )
          v33 = (__m128i *)&v7[v27];
      }
      else if ( !m128i_i64[1] )
      {
        return *m128i_i64;
      }
      v34 = v32 + v27;
      ++v32;
      v27 = v26 & v34;
    }
    if ( a2 != (const void *)-1LL )
    {
      v35 = (__m128i *)&v7[v27];
      m128i_i64 = (__int64 *)v33;
      goto LABEL_34;
    }
  }
  return *m128i_i64;
}
