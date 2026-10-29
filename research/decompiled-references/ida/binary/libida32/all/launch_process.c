void *__fastcall launch_process(__int64 a1, char *p_ptr)
{
  char *v2; // r12
  void **v4; // rdi
  __pid_t v5; // eax
  void *v6; // rbx
  int v7; // eax
  void *v9; // rdi
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rax
  char *v16; // rbx
  const char *v17; // rbx
  char *v18; // rax
  unsigned int v19; // ebx
  const char *v20; // r13
  unsigned __int64 v21; // r15
  char *const *v22; // r13
  __int32 v23; // edx
  __int64 v24; // rax
  __int128 i; // xmm0
  char **v26; // r8
  _QWORD *v27; // rbx
  unsigned __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  int *v31; // rax
  char *v32; // rdi
  __int64 v33; // rdx
  __m128i v34; // xmm0
  size_t v35; // rax
  size_t v36; // r13
  size_t v37; // rbx
  void *v38; // rax
  __int64 v39; // rbx
  __int128 v40; // kr00_16
  __int64 v41; // rax
  char *v42; // r15
  __int64 v43; // rax
  char *v44; // rdx
  __int64 v45; // r14
  __int64 v46; // rbx
  char *v47; // rax
  void *v48; // rdi
  int v49; // ebx
  __int64 v50; // rax
  const char *v51; // rdi
  char v52; // al
  int v53; // edi
  char *v54; // r10
  int v55; // edx
  __int64 v56; // rax
  int *v57; // r15
  int v58; // esi
  int v59; // eax
  int *v60; // rax
  int *v61; // rbx
  const char *v62; // rsi
  __int64 v63; // rbx
  int v64; // r8d
  int j; // ecx
  int v66; // edx
  __int64 v67; // rax
  __gid_t v68; // eax
  int v69; // eax
  int *v70; // rax
  const char *v71; // rax
  int *v72; // rax
  const char *v73; // rax
  size_t v74; // rbx
  void *v75; // r14
  __int64 v76; // rdx
  __int64 v77; // rax
  char *v78; // rax
  __int64 v79; // rax
  char *v80; // rsi
  unsigned __int64 v81; // rdi
  __int64 v82; // r14
  __m128i v83; // xmm0
  unsigned __int64 v84; // r15
  char *v85; // rax
  size_t v86; // rax
  size_t v87; // r15
  size_t v88; // r14
  __int64 v89; // rax
  unsigned __int64 v90; // rdi
  __int64 v91; // r13
  __m128i v92; // xmm0
  unsigned __int64 v93; // rbx
  char *v94; // rax
  __m128i v95; // xmm0
  char *v96; // rax
  __m128i v97; // xmm0
  char *v98; // rax
  int *v99; // rbx
  const char *v100; // rax
  int *v101; // rax
  const char *v102; // rax
  int *v103; // rbp
  const char *v104; // rax
  char *s; // [rsp+8h] [rbp-D0h]
  __m128i v106; // [rsp+10h] [rbp-C8h] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-B0h]
  void *v109; // [rsp+40h] [rbp-98h] BYREF
  __int128 v110; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __int128 v112; // [rsp+68h] [rbp-70h]
  _BYTE rlimits[24]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v114; // [rsp+98h] [rbp-40h]

  v2 = p_ptr;
  v114 = __readfsqword(0x28u);
  if ( (unk_2CACFE7 & 4) != 0 )
    sub_383DA0();
  if ( !qword_2CAD010 )
  {
    qword_2CAD010 = qthread_self();
    qword_2CAD018 = qmutex_create();
  }
  ptr = nullptr;
  *(_OWORD *)n = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    v4 = (void **)"SHELL";
    p_ptr = (char *)&ptr;
    if ( !(unsigned __int8)qgetenv("SHELL") )
    {
      p_ptr = (char *)ptr;
      if ( n[1] <= 7 )
      {
        v4 = &ptr;
        ptr = (void *)qvector_reserve(&ptr, ptr, 8, 1);
        p_ptr = (char *)ptr;
      }
      n[0] = 8;
      *(_DWORD *)p_ptr = 1852400175;
      *(_DWORD *)(p_ptr + 3) = 1752379246;
      *((_BYTE *)ptr + 7) = 0;
    }
  }
  else
  {
    v4 = *(void ***)(a1 + 16);
    if ( (unsigned __int8)qisabspath(v4) )
    {
      v4 = *(void ***)(a1 + 16);
      if ( !(unsigned __int8)qfileexist(v4, p_ptr) )
      {
        memset(rlimits, 0, sizeof(rlimits));
        sub_3573A0((char **)rlimits);
        if ( (*(_DWORD *)&debug & 0x4000000) != 0 )
          sub_383DA0();
        v9 = *(void **)rlimits;
        if ( p_ptr )
        {
          v9 = *(void **)p_ptr;
          v10 = *((_QWORD *)p_ptr + 2);
          *(_QWORD *)p_ptr = *(_QWORD *)rlimits;
          v11 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
          *(_QWORD *)rlimits = v9;
          *(_QWORD *)&rlimits[16] = v10;
          *(__m128i *)(p_ptr + 8) = v11;
        }
        if ( v9 )
        {
          *(_QWORD *)&rlimits[8] = 0;
          qfree(v9);
        }
        goto LABEL_23;
      }
    }
  }
  v5 = fork();
  v6 = (void *)v5;
  if ( v5 == -1 )
  {
    memset(rlimits, 0, sizeof(rlimits));
    v31 = __errno_location();
    winerr(*v31);
    sub_3573A0((char **)rlimits);
    if ( (*(_DWORD *)&debug & 0x4000000) != 0 )
      sub_383DA0();
    v32 = *(char **)rlimits;
    if ( v2 )
    {
      v32 = *(char **)v2;
      v33 = *((_QWORD *)v2 + 2);
      *(_QWORD *)v2 = *(_QWORD *)rlimits;
      v34 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
      *(_QWORD *)rlimits = v32;
      *(_QWORD *)&rlimits[16] = v33;
      *(__m128i *)(v2 + 8) = v34;
    }
    if ( v32 )
    {
      *(_QWORD *)&rlimits[8] = 0;
      v6 = nullptr;
      qfree(v32);
      goto LABEL_12;
    }
LABEL_23:
    v6 = nullptr;
    goto LABEL_12;
  }
  v7 = *(_DWORD *)(a1 + 8);
  if ( !(_DWORD)v6 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      v4 = (void **)&stru_40000;
      personality((unsigned __int64)&stru_40000);
      if ( (*(_DWORD *)(a1 + 8) & 0x80u) == 0 )
        goto LABEL_26;
    }
    else if ( (v7 & 0x80u) == 0 )
    {
LABEL_26:
      v12 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(v12 + 1) > 1 )
      {
        p_ptr = nullptr;
        if ( dup2(v12, 0) )
        {
          if ( !under_debugger )
            interr(11);
          goto LABEL_165;
        }
      }
      v13 = *(_QWORD *)(a1 + 40);
      if ( ((v13 + 1) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
      {
        p_ptr = (_BYTE *)(&dword_0 + 1);
        if ( dup2(v13, 1) != 1 )
        {
          if ( !under_debugger )
            interr(12);
          goto LABEL_165;
        }
      }
      v14 = *(_QWORD *)(a1 + 48);
      if ( v14 != -1 && v14 != 2 )
      {
        p_ptr = (_BYTE *)(&dword_0 + 2);
        if ( dup2(v14, 2) != 2 )
        {
          if ( !under_debugger )
            interr(13);
          goto LABEL_165;
        }
      }
      v15 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 > 0x38u )
      {
        v16 = *(char **)(a1 + 56);
        if ( v16 && *v16 )
        {
          do
          {
            putenv(v16);
            v16 += strlen(v16) + 1;
          }
          while ( *v16 );
          v15 = *(_QWORD *)a1;
        }
        if ( v15 > 0x40 )
        {
          v17 = *(const char **)(a1 + 64);
          if ( v17 )
          {
            if ( qchdir(*(const char **)(a1 + 64)) == -1 )
            {
              v103 = __errno_location();
              v104 = (const char *)winerr(*v103);
              sub_713900((__int64)"chdir %s: %s\n", v17, v104);
              _exit(-*v103);
            }
          }
        }
      }
      v18 = *(char **)(a1 + 16);
      v19 = *(_DWORD *)(a1 + 8);
      v109 = nullptr;
      src = nullptr;
      v20 = *(const char **)(a1 + 24);
      s = v18;
      v110 = 0;
      v112 = 0;
      if ( (v19 & 8) == 0 )
      {
        if ( v20 )
        {
          p_ptr = (char *)&v109;
          parse_command_line(&src, &v109, v20, v19);
        }
        if ( (v19 & 4) != 0 )
          goto LABEL_42;
        memset(rlimits, 0, sizeof(rlimits));
        if ( s )
        {
          v35 = strlen(s);
          v36 = v35 + 1;
          v37 = v35;
          v38 = (void *)qvector_reserve(rlimits, 0, v35 + 1, 1);
          *(_QWORD *)&rlimits[8] = v36;
          *(_QWORD *)rlimits = v38;
          memmove(v38, s, v37);
          *(_BYTE *)(*(_QWORD *)rlimits + v37) = 0;
          v39 = *(_QWORD *)rlimits;
          v40 = *(_OWORD *)&rlimits[8];
        }
        else
        {
          v39 = 0;
          v40 = 0u;
        }
        v41 = v112;
        v42 = (char *)src;
        memset(rlimits, 0, sizeof(rlimits));
        if ( *((_QWORD *)&v112 + 1) < (unsigned __int64)(v112 + 1) )
        {
          src = (void *)qvector_reserve(&src, src, v112 + 1, 24);
          v42 = (char *)src;
          v41 = v112;
        }
        p_ptr = v42;
        memmove(v42 + 24, v42, 24 * v41);
        *(_QWORD *)v42 = v39;
        *((_QWORD *)v42 + 1) = v40;
        v43 = v112;
        *((_QWORD *)v42 + 2) = *((_QWORD *)&v40 + 1);
        v21 = v43 + 1;
        *(_QWORD *)&v112 = v43 + 1;
        if ( *(_QWORD *)rlimits )
        {
          *(_QWORD *)&rlimits[8] = 0;
          qfree(*(void **)rlimits);
LABEL_42:
          v21 = v112;
        }
LABEL_43:
        v22 = (char *const *)qalloc(8 * v21 + 8);
        if ( !v22 )
          sub_3B74D0((int)"prepare_arguments", p_ptr);
        v23 = 0;
        v24 = 0;
        for ( i = 0; v23 < v21; *v26 = (char *)v29 )
        {
          v26 = (char **)&v22[v24];
          v27 = (char *)src + 24 * v24;
          v28 = v27[1];
          v29 = *v27;
          if ( v28 < v27[2] )
          {
            if ( v28 )
            {
              if ( v29 )
              {
                v106.m128i_i32[3] = v23;
                v106.m128i_i64[0] = (__int64)&v22[v24];
                v30 = qrealloc(v29);
                v26 = (char **)v106.m128i_i64[0];
                v23 = v106.m128i_i32[3];
                v29 = v30;
                i = 0;
                if ( !v30 )
                  v29 = *v27;
              }
            }
          }
          ++v23;
          *v27 = 0;
          v24 = v23;
          *(_OWORD *)(v27 + 1) = i;
        }
        v22[v21] = nullptr;
        v44 = (char *)src;
        if ( src )
        {
          v45 = v112;
          if ( (_QWORD)v112 )
          {
            v46 = 0;
            do
            {
              v47 = &v44[24 * v46];
              v48 = *(void **)v47;
              if ( *(_QWORD *)v47 )
              {
                *((_QWORD *)v47 + 1) = 0;
                qfree(v48);
                v44 = (char *)src;
              }
              ++v46;
            }
            while ( v45 != v46 );
          }
          *(_QWORD *)&v112 = 0;
          qfree(v44);
        }
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          s = *v22;
        v49 = 0;
        v50 = 0;
        if ( !(_QWORD)v110 )
        {
LABEL_105:
          if ( !getrlimit(RLIMIT_NOFILE, (struct rlimit *)rlimits) && *(_QWORD *)rlimits > 1u )
          {
            v63 = *(_QWORD *)rlimits - 1LL;
            if ( (unsigned __int64)(*(_QWORD *)rlimits - 1LL) > 2 )
            {
              do
              {
                v64 = v63;
                for ( j = v63; (int)v63 > 9; j = v63 )
                {
                  close(v63--);
                  v64 = v63;
                }
                if ( (_QWORD)v110 )
                {
                  v66 = 0;
                  v67 = 0;
                  while ( j != *((_DWORD *)v109 + 12 * v67) )
                  {
                    v67 = ++v66;
                    if ( v66 >= (unsigned __int64)v110 )
                      goto LABEL_164;
                  }
                }
                else
                {
LABEL_164:
                  close(v64);
                }
                --v63;
              }
              while ( v63 != 2 );
            }
          }
          setpgid(0, 0);
          v68 = getgid();
          if ( !setgid(v68) )
          {
            v69 = *(_DWORD *)(a1 + 8);
            if ( (v69 & 2) != 0 )
            {
              if ( ptrace(PTRACE_TRACEME, 0, 0, 0, *(double *)&i) == -1 )
              {
                v101 = __errno_location();
                v102 = (const char *)winerr(*v101);
                sub_713900((__int64)"TRACEME: %s", v102);
                _exit(-1);
              }
              v69 = *(_DWORD *)(a1 + 8);
            }
            if ( (v69 & 0x202) != 0 )
            {
              execv(s, v22);
              v70 = __errno_location();
              v71 = (const char *)winerr(*v70);
              sub_713900((__int64)"execv%s(%s): %s\n", &byte_22CD811, s, v71);
            }
            execvp(s, v22);
            v72 = __errno_location();
            v73 = (const char *)winerr(*v72);
            sub_713900((__int64)"execv%s(%s): %s\n", "p", s, v73);
            _exit(1);
          }
          v99 = __errno_location();
          v100 = (const char *)winerr(*v99);
          sub_713900((__int64)"setgid: %s\n", v100);
          _exit(-*v99);
        }
        while ( 1 )
        {
          v54 = (char *)v109 + 48 * v50;
          v55 = *((_DWORD *)v54 + 8);
          v56 = *((_QWORD *)v54 + 2);
          v57 = (int *)v54;
          v58 = v55 & 8;
          if ( (v55 & 8) != 0 )
          {
            v58 = 0;
            if ( (v55 & 1) == 0 )
              v58 = (v55 & 4) == 0 ? 577 : 1089;
            v51 = haystack;
            if ( v56 )
              v51 = *((const char **)v54 + 1);
            goto LABEL_97;
          }
          if ( !v56 )
            break;
          v51 = *((const char **)v54 + 1);
          if ( *v51 != 38 || (v52 = v51[1], (unsigned __int8)(v52 - 48) > 9u) )
          {
            if ( (v55 & 1) == 0 )
            {
              v59 = open(v51, (v55 & 4) == 0 ? 577 : 1089, 420, *(double *)&i);
LABEL_98:
              v53 = v59;
              if ( v59 == -1 )
              {
                v60 = __errno_location();
                v61 = v60;
                if ( v2 )
                {
                  winerr(*v60);
                  sub_3573A0((char **)v2);
                  v62 = haystack;
                  if ( *((_QWORD *)v2 + 1) )
                    v62 = *(const char **)v2;
                  sub_713900((__int64)"%s\n", v62);
                }
                _exit(-*v61);
              }
              goto LABEL_89;
            }
            goto LABEL_97;
          }
          v53 = v52 - 48;
LABEL_89:
          if ( v53 == *v57 )
          {
            fcntl(v53, 2, 0, *(double *)&i);
            v50 = ++v49;
            if ( v49 >= (unsigned __int64)v110 )
              goto LABEL_105;
          }
          else
          {
            if ( dup2(v53, *v57) != *v57 )
            {
              if ( !under_debugger )
                interr(575);
LABEL_165:
              BUG();
            }
            v50 = ++v49;
            if ( v49 >= (unsigned __int64)v110 )
              goto LABEL_105;
          }
        }
        v51 = haystack;
        if ( (v55 & 1) == 0 )
        {
          v58 = 1089;
          if ( (v55 & 4) == 0 )
          {
            v59 = open(haystack, 577, 420, *(double *)&i);
            goto LABEL_98;
          }
        }
LABEL_97:
        v59 = open(v51, v58, 420, *(double *)&i);
        goto LABEL_98;
      }
      v74 = n[0];
      if ( n[0] )
      {
        v75 = (void *)qalloc_or_throw(n[0], p_ptr);
        memcpy(v75, ptr, v74);
        v77 = v112;
        p_ptr = (char *)src;
        v76 = v112 + 1;
        if ( *((_QWORD *)&v112 + 1) >= (unsigned __int64)(v112 + 1) )
          goto LABEL_130;
      }
      else
      {
        p_ptr = nullptr;
        v75 = nullptr;
        v76 = 1;
      }
      src = (void *)qvector_reserve(&src, p_ptr, v76, 24);
      p_ptr = (char *)src;
      v77 = v112;
LABEL_130:
      v78 = &p_ptr[24 * v77];
      *(_QWORD *)v78 = v75;
      *(__m128i *)(v78 + 8) = _mm_unpacklo_epi64((__m128i)v74, (__m128i)v74);
      v21 = v112 + 1;
      *(_QWORD *)&v112 = v112 + 1;
      if ( v20 && *v20 )
      {
        memset(rlimits, 0, sizeof(rlimits));
        *(_QWORD *)rlimits = qvector_reserve(rlimits, 0, 3, 1);
        *(_QWORD *)&rlimits[8] = 3;
        strcpy(*(char **)rlimits, "-c");
        v79 = v112;
        v80 = (char *)src;
        v81 = v112 + 1;
        if ( rlimits < src || rlimits >= (char *)src + 24 * *((_QWORD *)&v112 + 1) )
        {
          if ( *((_QWORD *)&v112 + 1) < v81 )
          {
            src = (void *)qvector_reserve(&src, src, v112 + 1, 24);
            v80 = (char *)src;
            v79 = v112;
          }
          v95 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
          v96 = &v80[24 * v79];
          *(_QWORD *)v96 = *(_QWORD *)rlimits;
          *(__m128i *)(v96 + 8) = v95;
          *(_QWORD *)&v112 = v112 + 1;
        }
        else
        {
          v82 = *(_QWORD *)rlimits;
          v83 = _mm_loadl_epi64((const __m128i *)&rlimits[8]);
          memset(rlimits, 0, sizeof(rlimits));
          v84 = *(_QWORD *)&rlimits[16];
          if ( *((_QWORD *)&v112 + 1) < v81 )
          {
            v106.m128i_i64[0] = v83.m128i_i64[0];
            src = (void *)qvector_reserve(&src, src, v112 + 1, 24);
            v80 = (char *)src;
            v83 = _mm_loadl_epi64(&v106);
            v79 = v112;
          }
          v85 = &v80[24 * v79];
          *(_QWORD *)v85 = v82;
          *(__m128i *)(v85 + 8) = _mm_unpacklo_epi64(v83, (__m128i)v84);
          *(_QWORD *)&v112 = v112 + 1;
          if ( *(_QWORD *)rlimits )
          {
            *(_QWORD *)&rlimits[8] = 0;
            qfree(*(void **)rlimits);
          }
        }
        memset(rlimits, 0, sizeof(rlimits));
        v86 = strlen(v20);
        v87 = v86 + 1;
        v88 = v86;
        *(_QWORD *)rlimits = qvector_reserve(rlimits, 0, v86 + 1, 1);
        *(_QWORD *)&rlimits[8] = v87;
        memmove(*(void **)rlimits, v20, v88);
        *(_BYTE *)(*(_QWORD *)rlimits + v88) = 0;
        v89 = v112;
        p_ptr = (char *)src;
        v90 = v112 + 1;
        if ( rlimits < src || rlimits >= (char *)src + 24 * *((_QWORD *)&v112 + 1) )
        {
          if ( *((_QWORD *)&v112 + 1) < v90 )
          {
            src = (void *)qvector_reserve(&src, src, v112 + 1, 24);
            p_ptr = (char *)src;
            v89 = v112;
          }
          v97 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
          v98 = &p_ptr[24 * v89];
          *(_QWORD *)v98 = *(_QWORD *)rlimits;
          *(__m128i *)(v98 + 8) = v97;
          v21 = v112 + 1;
          *(_QWORD *)&v112 = v112 + 1;
        }
        else
        {
          v91 = *(_QWORD *)rlimits;
          v92 = _mm_loadl_epi64((const __m128i *)&rlimits[8]);
          memset(rlimits, 0, sizeof(rlimits));
          v93 = *(_QWORD *)&rlimits[16];
          if ( *((_QWORD *)&v112 + 1) < v90 )
          {
            v106.m128i_i64[0] = v92.m128i_i64[0];
            src = (void *)qvector_reserve(&src, src, v112 + 1, 24);
            p_ptr = (char *)src;
            v92 = _mm_loadl_epi64(&v106);
            v89 = v112;
          }
          v94 = &p_ptr[24 * v89];
          *(_QWORD *)v94 = v91;
          *(__m128i *)(v94 + 8) = _mm_unpacklo_epi64(v92, (__m128i)v93);
          v21 = v112 + 1;
          *(_QWORD *)&v112 = v112 + 1;
          if ( *(_QWORD *)rlimits )
          {
            *(_QWORD *)&rlimits[8] = 0;
            qfree(*(void **)rlimits);
            v21 = v112;
          }
        }
      }
      goto LABEL_43;
    }
    qdetach_tty(v4, p_ptr);
    goto LABEL_26;
  }
  if ( (v7 & 0x80u) != 0 )
  {
    qcontrol_tty(v4, p_ptr);
    v7 = *(_DWORD *)(a1 + 8);
  }
  if ( (v7 & 0x400) != 0 )
    qthread_create(sub_820170, v6);
LABEL_12:
  if ( ptr )
  {
    n[0] = 0;
    qfree(ptr);
  }
  return v6;
}

