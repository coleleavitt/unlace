void *__fastcall launch_process(__int64 a1, char *p_ptr)
{
  char *v2; // r12
  __pid_t v4; // eax
  void *v5; // rbx
  int v6; // eax
  void *v8; // rdi
  __int64 v9; // rdx
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char *v15; // rbx
  const char *v16; // rbx
  char *v17; // rax
  unsigned int v18; // ebx
  const char *v19; // r13
  unsigned __int64 v20; // r15
  char *const *v21; // r13
  __int32 v22; // edx
  __int64 v23; // rax
  __int128 i; // xmm0
  char **v25; // r8
  _QWORD *v26; // rbx
  unsigned __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  int *v30; // rax
  char *v31; // rdi
  __int64 v32; // rdx
  __m128i v33; // xmm0
  size_t v34; // rax
  size_t v35; // r13
  size_t v36; // rbx
  void *v37; // rax
  __int64 v38; // rbx
  __int128 v39; // kr00_16
  __int64 v40; // rax
  char *v41; // r15
  __int64 v42; // rax
  char *v43; // rdx
  __int64 v44; // r14
  __int64 v45; // rbx
  char *v46; // rax
  void *v47; // rdi
  int v48; // ebx
  __int64 v49; // rax
  const char *v50; // rdi
  char v51; // al
  int v52; // edi
  char *v53; // r10
  int v54; // edx
  __int64 v55; // rax
  int *v56; // r15
  int v57; // esi
  int v58; // eax
  int *v59; // rax
  int *v60; // rbx
  const char *v61; // rsi
  __int64 v62; // rbx
  int v63; // r8d
  int j; // ecx
  int v65; // edx
  __int64 v66; // rax
  __gid_t v67; // eax
  int v68; // eax
  int *v69; // rax
  const char *v70; // rax
  int *v71; // rax
  const char *v72; // rax
  size_t v73; // rbx
  void *v74; // r14
  __int64 v75; // rdx
  __int64 v76; // rax
  char *v77; // rax
  __int64 v78; // rax
  char *v79; // rsi
  unsigned __int64 v80; // rdi
  __int64 v81; // r14
  __m128i v82; // xmm0
  unsigned __int64 v83; // r15
  char *v84; // rax
  size_t v85; // rax
  size_t v86; // r15
  size_t v87; // r14
  __int64 v88; // rax
  unsigned __int64 v89; // rdi
  __int64 v90; // r13
  __m128i v91; // xmm0
  unsigned __int64 v92; // rbx
  char *v93; // rax
  __m128i v94; // xmm0
  char *v95; // rax
  __m128i v96; // xmm0
  char *v97; // rax
  int *v98; // rbx
  const char *v99; // rax
  int *v100; // rax
  const char *v101; // rax
  int *v102; // rbp
  const char *v103; // rax
  char *s; // [rsp+8h] [rbp-D0h]
  __m128i v105; // [rsp+10h] [rbp-C8h] BYREF
  void *ptr; // [rsp+20h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-B0h]
  void *v108; // [rsp+40h] [rbp-98h] BYREF
  __int128 v109; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __int128 v111; // [rsp+68h] [rbp-70h]
  _BYTE rlimits[24]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v113; // [rsp+98h] [rbp-40h]

  v2 = p_ptr;
  v113 = __readfsqword(0x28u);
  if ( (unk_2CD6F07 & 4) != 0 )
    sub_3879F0();
  if ( !qword_2CD6F30 )
  {
    qword_2CD6F30 = qthread_self();
    qword_2CD6F38 = qmutex_create();
  }
  ptr = nullptr;
  *(_OWORD *)n = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    p_ptr = (char *)&ptr;
    if ( !(unsigned __int8)qgetenv("SHELL") )
    {
      p_ptr = (char *)ptr;
      if ( n[1] <= 7 )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, 8, 1);
        p_ptr = (char *)ptr;
      }
      n[0] = 8;
      *(_DWORD *)p_ptr = 1852400175;
      *(_DWORD *)(p_ptr + 3) = 1752379246;
      *((_BYTE *)ptr + 7) = 0;
    }
  }
  else if ( (unsigned __int8)qisabspath(*(_QWORD *)(a1 + 16))
         && !(unsigned __int8)qfileexist(*(_QWORD *)(a1 + 16), p_ptr) )
  {
    memset(rlimits, 0, sizeof(rlimits));
    sub_35A790((char **)rlimits);
    if ( (*(_DWORD *)&debug & 0x4000000) != 0 )
      sub_3879F0();
    v8 = *(void **)rlimits;
    if ( p_ptr )
    {
      v8 = *(void **)p_ptr;
      v9 = *((_QWORD *)p_ptr + 2);
      *(_QWORD *)p_ptr = *(_QWORD *)rlimits;
      v10 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
      *(_QWORD *)rlimits = v8;
      *(_QWORD *)&rlimits[16] = v9;
      *(__m128i *)(p_ptr + 8) = v10;
    }
    if ( v8 )
    {
      *(_QWORD *)&rlimits[8] = 0;
      qfree(v8);
    }
    goto LABEL_23;
  }
  v4 = fork();
  v5 = (void *)v4;
  if ( v4 == -1 )
  {
    memset(rlimits, 0, sizeof(rlimits));
    v30 = __errno_location();
    winerr(*v30);
    sub_35A790((char **)rlimits);
    if ( (*(_DWORD *)&debug & 0x4000000) != 0 )
      sub_3879F0();
    v31 = *(char **)rlimits;
    if ( v2 )
    {
      v31 = *(char **)v2;
      v32 = *((_QWORD *)v2 + 2);
      *(_QWORD *)v2 = *(_QWORD *)rlimits;
      v33 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
      *(_QWORD *)rlimits = v31;
      *(_QWORD *)&rlimits[16] = v32;
      *(__m128i *)(v2 + 8) = v33;
    }
    if ( v31 )
    {
      *(_QWORD *)&rlimits[8] = 0;
      v5 = nullptr;
      qfree(v31);
      goto LABEL_12;
    }
LABEL_23:
    v5 = nullptr;
    goto LABEL_12;
  }
  v6 = *(_DWORD *)(a1 + 8);
  if ( !(_DWORD)v5 )
  {
    if ( (v6 & 0x40) != 0 )
    {
      personality(0x40000u);
      if ( (*(_DWORD *)(a1 + 8) & 0x80u) == 0 )
        goto LABEL_26;
    }
    else if ( (v6 & 0x80u) == 0 )
    {
LABEL_26:
      v11 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(v11 + 1) > 1 )
      {
        p_ptr = nullptr;
        if ( dup2(v11, 0) )
        {
          if ( !under_debugger )
            interr(11);
          goto LABEL_165;
        }
      }
      v12 = *(_QWORD *)(a1 + 40);
      if ( ((v12 + 1) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
      {
        p_ptr = (_BYTE *)(&dword_0 + 1);
        if ( dup2(v12, 1) != 1 )
        {
          if ( !under_debugger )
            interr(12);
          goto LABEL_165;
        }
      }
      v13 = *(_QWORD *)(a1 + 48);
      if ( v13 != -1 && v13 != 2 )
      {
        p_ptr = (_BYTE *)(&dword_0 + 2);
        if ( dup2(v13, 2) != 2 )
        {
          if ( !under_debugger )
            interr(13);
          goto LABEL_165;
        }
      }
      v14 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 > 0x38u )
      {
        v15 = *(char **)(a1 + 56);
        if ( v15 && *v15 )
        {
          do
          {
            putenv(v15);
            v15 += strlen(v15) + 1;
          }
          while ( *v15 );
          v14 = *(_QWORD *)a1;
        }
        if ( v14 > 0x40 )
        {
          v16 = *(const char **)(a1 + 64);
          if ( v16 )
          {
            if ( qchdir(*(const char **)(a1 + 64)) == -1 )
            {
              v102 = __errno_location();
              v103 = (const char *)winerr(*v102);
              sub_733E40((__int64)"chdir %s: %s\n", v16, v103);
              _exit(-*v102);
            }
          }
        }
      }
      v17 = *(char **)(a1 + 16);
      v18 = *(_DWORD *)(a1 + 8);
      v108 = nullptr;
      src = nullptr;
      v19 = *(const char **)(a1 + 24);
      s = v17;
      v109 = 0;
      v111 = 0;
      if ( (v18 & 8) == 0 )
      {
        if ( v19 )
        {
          p_ptr = (char *)&v108;
          parse_command_line(&src, &v108, v19, v18);
        }
        if ( (v18 & 4) != 0 )
          goto LABEL_42;
        memset(rlimits, 0, sizeof(rlimits));
        if ( s )
        {
          v34 = strlen(s);
          v35 = v34 + 1;
          v36 = v34;
          v37 = (void *)qvector_reserve(rlimits, 0, v34 + 1, 1);
          *(_QWORD *)&rlimits[8] = v35;
          *(_QWORD *)rlimits = v37;
          memmove(v37, s, v36);
          *(_BYTE *)(*(_QWORD *)rlimits + v36) = 0;
          v38 = *(_QWORD *)rlimits;
          v39 = *(_OWORD *)&rlimits[8];
        }
        else
        {
          v38 = 0;
          v39 = 0u;
        }
        v40 = v111;
        v41 = (char *)src;
        memset(rlimits, 0, sizeof(rlimits));
        if ( *((_QWORD *)&v111 + 1) < (unsigned __int64)(v111 + 1) )
        {
          src = (void *)qvector_reserve(&src, src, v111 + 1, 24);
          v41 = (char *)src;
          v40 = v111;
        }
        p_ptr = v41;
        memmove(v41 + 24, v41, 24 * v40);
        *(_QWORD *)v41 = v38;
        *((_QWORD *)v41 + 1) = v39;
        v42 = v111;
        *((_QWORD *)v41 + 2) = *((_QWORD *)&v39 + 1);
        v20 = v42 + 1;
        *(_QWORD *)&v111 = v42 + 1;
        if ( *(_QWORD *)rlimits )
        {
          *(_QWORD *)&rlimits[8] = 0;
          qfree(*(void **)rlimits);
LABEL_42:
          v20 = v111;
        }
LABEL_43:
        v21 = (char *const *)qalloc(8 * v20 + 8);
        if ( !v21 )
          sub_3BC000((int)"prepare_arguments", p_ptr);
        v22 = 0;
        v23 = 0;
        for ( i = 0; v22 < v20; *v25 = (char *)v28 )
        {
          v25 = (char **)&v21[v23];
          v26 = (char *)src + 24 * v23;
          v27 = v26[1];
          v28 = *v26;
          if ( v27 < v26[2] )
          {
            if ( v27 )
            {
              if ( v28 )
              {
                v105.m128i_i32[3] = v22;
                v105.m128i_i64[0] = (__int64)&v21[v23];
                v29 = qrealloc(v28);
                v25 = (char **)v105.m128i_i64[0];
                v22 = v105.m128i_i32[3];
                v28 = v29;
                i = 0;
                if ( !v29 )
                  v28 = *v26;
              }
            }
          }
          ++v22;
          *v26 = 0;
          v23 = v22;
          *(_OWORD *)(v26 + 1) = i;
        }
        v21[v20] = nullptr;
        v43 = (char *)src;
        if ( src )
        {
          v44 = v111;
          if ( (_QWORD)v111 )
          {
            v45 = 0;
            do
            {
              v46 = &v43[24 * v45];
              v47 = *(void **)v46;
              if ( *(_QWORD *)v46 )
              {
                *((_QWORD *)v46 + 1) = 0;
                qfree(v47);
                v43 = (char *)src;
              }
              ++v45;
            }
            while ( v44 != v45 );
          }
          *(_QWORD *)&v111 = 0;
          qfree(v43);
        }
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          s = *v21;
        v48 = 0;
        v49 = 0;
        if ( !(_QWORD)v109 )
        {
LABEL_105:
          if ( !getrlimit(RLIMIT_NOFILE, (struct rlimit *)rlimits) && *(_QWORD *)rlimits > 1u )
          {
            v62 = *(_QWORD *)rlimits - 1LL;
            if ( (unsigned __int64)(*(_QWORD *)rlimits - 1LL) > 2 )
            {
              do
              {
                v63 = v62;
                for ( j = v62; (int)v62 > 9; j = v62 )
                {
                  close(v62--);
                  v63 = v62;
                }
                if ( (_QWORD)v109 )
                {
                  v65 = 0;
                  v66 = 0;
                  while ( j != *((_DWORD *)v108 + 12 * v66) )
                  {
                    v66 = ++v65;
                    if ( v65 >= (unsigned __int64)v109 )
                      goto LABEL_164;
                  }
                }
                else
                {
LABEL_164:
                  close(v63);
                }
                --v62;
              }
              while ( v62 != 2 );
            }
          }
          setpgid(0, 0);
          v67 = getgid();
          if ( !setgid(v67) )
          {
            v68 = *(_DWORD *)(a1 + 8);
            if ( (v68 & 2) != 0 )
            {
              if ( ptrace(PTRACE_TRACEME, 0, 0, 0, *(double *)&i) == -1 )
              {
                v100 = __errno_location();
                v101 = (const char *)winerr(*v100);
                sub_733E40((__int64)"TRACEME: %s", v101);
                _exit(-1);
              }
              v68 = *(_DWORD *)(a1 + 8);
            }
            if ( (v68 & 0x202) != 0 )
            {
              execv(s, v21);
              v69 = __errno_location();
              v70 = (const char *)winerr(*v69);
              sub_733E40((__int64)"execv%s(%s): %s\n", &byte_22F0C30, s, v70);
            }
            execvp(s, v21);
            v71 = __errno_location();
            v72 = (const char *)winerr(*v71);
            sub_733E40((__int64)"execv%s(%s): %s\n", "p", s, v72);
            _exit(1);
          }
          v98 = __errno_location();
          v99 = (const char *)winerr(*v98);
          sub_733E40((__int64)"setgid: %s\n", v99);
          _exit(-*v98);
        }
        while ( 1 )
        {
          v53 = (char *)v108 + 48 * v49;
          v54 = *((_DWORD *)v53 + 8);
          v55 = *((_QWORD *)v53 + 2);
          v56 = (int *)v53;
          v57 = v54 & 8;
          if ( (v54 & 8) != 0 )
          {
            v57 = 0;
            if ( (v54 & 1) == 0 )
              v57 = (v54 & 4) == 0 ? 577 : 1089;
            v50 = haystack;
            if ( v55 )
              v50 = *((const char **)v53 + 1);
            goto LABEL_97;
          }
          if ( !v55 )
            break;
          v50 = *((const char **)v53 + 1);
          if ( *v50 != 38 || (v51 = v50[1], (unsigned __int8)(v51 - 48) > 9u) )
          {
            if ( (v54 & 1) == 0 )
            {
              v58 = open(v50, (v54 & 4) == 0 ? 577 : 1089, 420, *(double *)&i);
LABEL_98:
              v52 = v58;
              if ( v58 == -1 )
              {
                v59 = __errno_location();
                v60 = v59;
                if ( v2 )
                {
                  winerr(*v59);
                  sub_35A790((char **)v2);
                  v61 = haystack;
                  if ( *((_QWORD *)v2 + 1) )
                    v61 = *(const char **)v2;
                  sub_733E40((__int64)"%s\n", v61);
                }
                _exit(-*v60);
              }
              goto LABEL_89;
            }
            goto LABEL_97;
          }
          v52 = v51 - 48;
LABEL_89:
          if ( v52 == *v56 )
          {
            fcntl(v52, 2, 0, *(double *)&i);
            v49 = ++v48;
            if ( v48 >= (unsigned __int64)v109 )
              goto LABEL_105;
          }
          else
          {
            if ( dup2(v52, *v56) != *v56 )
            {
              if ( !under_debugger )
                interr(575);
LABEL_165:
              BUG();
            }
            v49 = ++v48;
            if ( v48 >= (unsigned __int64)v109 )
              goto LABEL_105;
          }
        }
        v50 = haystack;
        if ( (v54 & 1) == 0 )
        {
          v57 = 1089;
          if ( (v54 & 4) == 0 )
          {
            v58 = open(haystack, 577, 420, *(double *)&i);
            goto LABEL_98;
          }
        }
LABEL_97:
        v58 = open(v50, v57, 420, *(double *)&i);
        goto LABEL_98;
      }
      v73 = n[0];
      if ( n[0] )
      {
        v74 = (void *)qalloc_or_throw(n[0]);
        memcpy(v74, ptr, v73);
        v76 = v111;
        p_ptr = (char *)src;
        v75 = v111 + 1;
        if ( *((_QWORD *)&v111 + 1) >= (unsigned __int64)(v111 + 1) )
          goto LABEL_130;
      }
      else
      {
        p_ptr = nullptr;
        v74 = nullptr;
        v75 = 1;
      }
      src = (void *)qvector_reserve(&src, p_ptr, v75, 24);
      p_ptr = (char *)src;
      v76 = v111;
LABEL_130:
      v77 = &p_ptr[24 * v76];
      *(_QWORD *)v77 = v74;
      *(__m128i *)(v77 + 8) = _mm_unpacklo_epi64((__m128i)v73, (__m128i)v73);
      v20 = v111 + 1;
      *(_QWORD *)&v111 = v111 + 1;
      if ( v19 && *v19 )
      {
        memset(rlimits, 0, sizeof(rlimits));
        *(_QWORD *)rlimits = qvector_reserve(rlimits, 0, 3, 1);
        *(_QWORD *)&rlimits[8] = 3;
        strcpy(*(char **)rlimits, "-c");
        v78 = v111;
        v79 = (char *)src;
        v80 = v111 + 1;
        if ( rlimits < src || rlimits >= (char *)src + 24 * *((_QWORD *)&v111 + 1) )
        {
          if ( *((_QWORD *)&v111 + 1) < v80 )
          {
            src = (void *)qvector_reserve(&src, src, v111 + 1, 24);
            v79 = (char *)src;
            v78 = v111;
          }
          v94 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
          v95 = &v79[24 * v78];
          *(_QWORD *)v95 = *(_QWORD *)rlimits;
          *(__m128i *)(v95 + 8) = v94;
          *(_QWORD *)&v111 = v111 + 1;
        }
        else
        {
          v81 = *(_QWORD *)rlimits;
          v82 = _mm_loadl_epi64((const __m128i *)&rlimits[8]);
          memset(rlimits, 0, sizeof(rlimits));
          v83 = *(_QWORD *)&rlimits[16];
          if ( *((_QWORD *)&v111 + 1) < v80 )
          {
            v105.m128i_i64[0] = v82.m128i_i64[0];
            src = (void *)qvector_reserve(&src, src, v111 + 1, 24);
            v79 = (char *)src;
            v82 = _mm_loadl_epi64(&v105);
            v78 = v111;
          }
          v84 = &v79[24 * v78];
          *(_QWORD *)v84 = v81;
          *(__m128i *)(v84 + 8) = _mm_unpacklo_epi64(v82, (__m128i)v83);
          *(_QWORD *)&v111 = v111 + 1;
          if ( *(_QWORD *)rlimits )
          {
            *(_QWORD *)&rlimits[8] = 0;
            qfree(*(void **)rlimits);
          }
        }
        memset(rlimits, 0, sizeof(rlimits));
        v85 = strlen(v19);
        v86 = v85 + 1;
        v87 = v85;
        *(_QWORD *)rlimits = qvector_reserve(rlimits, 0, v85 + 1, 1);
        *(_QWORD *)&rlimits[8] = v86;
        memmove(*(void **)rlimits, v19, v87);
        *(_BYTE *)(*(_QWORD *)rlimits + v87) = 0;
        v88 = v111;
        p_ptr = (char *)src;
        v89 = v111 + 1;
        if ( rlimits < src || rlimits >= (char *)src + 24 * *((_QWORD *)&v111 + 1) )
        {
          if ( *((_QWORD *)&v111 + 1) < v89 )
          {
            src = (void *)qvector_reserve(&src, src, v111 + 1, 24);
            p_ptr = (char *)src;
            v88 = v111;
          }
          v96 = _mm_loadu_si128((const __m128i *)&rlimits[8]);
          v97 = &p_ptr[24 * v88];
          *(_QWORD *)v97 = *(_QWORD *)rlimits;
          *(__m128i *)(v97 + 8) = v96;
          v20 = v111 + 1;
          *(_QWORD *)&v111 = v111 + 1;
        }
        else
        {
          v90 = *(_QWORD *)rlimits;
          v91 = _mm_loadl_epi64((const __m128i *)&rlimits[8]);
          memset(rlimits, 0, sizeof(rlimits));
          v92 = *(_QWORD *)&rlimits[16];
          if ( *((_QWORD *)&v111 + 1) < v89 )
          {
            v105.m128i_i64[0] = v91.m128i_i64[0];
            src = (void *)qvector_reserve(&src, src, v111 + 1, 24);
            p_ptr = (char *)src;
            v91 = _mm_loadl_epi64(&v105);
            v88 = v111;
          }
          v93 = &p_ptr[24 * v88];
          *(_QWORD *)v93 = v90;
          *(__m128i *)(v93 + 8) = _mm_unpacklo_epi64(v91, (__m128i)v92);
          v20 = v111 + 1;
          *(_QWORD *)&v111 = v111 + 1;
          if ( *(_QWORD *)rlimits )
          {
            *(_QWORD *)&rlimits[8] = 0;
            qfree(*(void **)rlimits);
            v20 = v111;
          }
        }
      }
      goto LABEL_43;
    }
    qdetach_tty();
    goto LABEL_26;
  }
  if ( (v6 & 0x80u) != 0 )
  {
    qcontrol_tty();
    v6 = *(_DWORD *)(a1 + 8);
  }
  if ( (v6 & 0x400) != 0 )
    qthread_create(sub_843530, v5);
LABEL_12:
  if ( ptr )
  {
    n[0] = 0;
    qfree(ptr);
  }
  return v5;
}
