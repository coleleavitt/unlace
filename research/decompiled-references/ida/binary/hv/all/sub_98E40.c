void *__fastcall sub_98E40(
        __int64 a1,
        _DWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  _DWORD *v14; // r12
  __pid_t v16; // eax
  void *v17; // rbx
  int v18; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  const char *v26; // rsi
  char *v27; // rdi
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  char *v34; // rbx
  const char *v35; // rbx
  char *v36; // rax
  int v37; // ebx
  __m128 v38; // xmm0
  const char *v39; // r13
  unsigned __int64 v40; // r15
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  char *const *v45; // r13
  __m128 v46; // xmm4
  __m128 v47; // xmm5
  __int32 v48; // edx
  __int64 v49; // rax
  __int128 i; // xmm0
  char **v51; // r8
  char *v52; // rbx
  unsigned __int64 v53; // rsi
  char *v54; // rdi
  char *v55; // rax
  int *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  const char *v63; // rsi
  char *v64; // rdi
  __int64 v65; // rdx
  __m128i v66; // xmm0
  size_t v67; // rax
  __int64 v68; // r13
  size_t v69; // rbx
  void *v70; // rax
  void *v71; // rbx
  __m128i v72; // kr00_16
  __int64 v73; // rax
  _QWORD *v74; // r15
  __int64 v75; // rax
  char *v76; // rdx
  __int64 v77; // r14
  __int64 v78; // rbx
  char *v79; // rax
  void *v80; // rdi
  int v81; // ebx
  __int64 v82; // rax
  const char *v83; // rdi
  char v84; // al
  int v85; // edi
  char *v86; // r10
  int v87; // edx
  __int64 v88; // rax
  int *v89; // r15
  int v90; // esi
  int v91; // eax
  int *v92; // rax
  int *v93; // rbx
  const char *v94; // rsi
  char *v95; // rbx
  int v96; // r8d
  int j; // ecx
  int v98; // edx
  __int64 v99; // rax
  __gid_t v100; // eax
  int v101; // eax
  int *v102; // rax
  const char *v103; // rax
  int *v104; // rax
  const char *v105; // rax
  size_t v106; // rbx
  void *v107; // r14
  unsigned __int64 v108; // rdx
  __int64 v109; // rax
  _DWORD *v110; // rax
  __int64 v111; // rax
  char *v112; // rsi
  unsigned __int64 v113; // rdi
  void *v114; // r14
  __m128i v115; // xmm0
  __int64 v116; // r15
  char *v117; // rax
  size_t v118; // rax
  __int64 v119; // r15
  size_t v120; // r14
  __int64 v121; // rax
  unsigned __int64 v122; // rdi
  void *v123; // r13
  __m128i v124; // xmm0
  __int64 v125; // rbx
  _DWORD *v126; // rax
  __m128i v127; // xmm0
  char *v128; // rax
  _DWORD *v129; // rax
  int *v130; // rbx
  const char *v131; // rax
  int *v132; // rax
  const char *v133; // rax
  int *v134; // rbp
  const char *v135; // rax
  char v136; // [rsp+0h] [rbp-D8h]
  char *s; // [rsp+8h] [rbp-D0h]
  __m128i v138; // [rsp+10h] [rbp-C8h] BYREF
  void *v139; // [rsp+20h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-B0h]
  void *v141; // [rsp+40h] [rbp-98h] BYREF
  __int128 v142; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __int128 v144; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __m128i v146; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v147; // [rsp+98h] [rbp-40h]

  v14 = a2;
  v147 = __readfsqword(0x28u);
  if ( (dword_1671A4 & 0x4000000) != 0 )
  {
    a2 = *(_DWORD **)(a1 + 16);
    sub_2A380(
      (int)"Launching process %s, with args %s\n",
      (__int64)a2,
      *(_QWORD *)(a1 + 24),
      a12,
      a13,
      a14,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      v136);
    if ( qword_1671D0 )
      goto LABEL_3;
  }
  else if ( qword_1671D0 )
  {
    goto LABEL_3;
  }
  qword_1671D0 = j__pthread_self();
  qword_1671D8 = (__int64)sub_98180();
LABEL_3:
  v139 = nullptr;
  *(_OWORD *)n = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    a2 = &v139;
    if ( !(unsigned __int8)sub_98D10("SHELL", (__int64)&v139) )
    {
      a2 = v139;
      if ( n[1] <= 7 )
      {
        v139 = sub_96080((__int64)&v139, v139, 8u, 1u);
        a2 = v139;
      }
      n[0] = 8;
      *a2 = 1852400175;
      *(_DWORD *)((char *)a2 + 3) = 1752379246;
      *((_BYTE *)v139 + 7) = 0;
    }
  }
  else if ( (unsigned __int8)sub_94EB0(*(_BYTE **)(a1 + 16)) && !sub_955B0(*(char **)(a1 + 16)) )
  {
    ptr = nullptr;
    v146 = 0;
    sub_17D80((char **)&ptr);
    if ( (dword_1671A4 & 0x4000000) != 0 )
    {
      v26 = haystack;
      if ( v146.m128i_i64[0] )
        v26 = (const char *)ptr;
      sub_2A380((int)"%s\n", (__int64)v26, v20, v21, v22, v23, (__m128)0LL, a4, a5, a6, v24, v25, a9, a10, v136);
    }
    v27 = (char *)ptr;
    if ( v14 )
    {
      v27 = *(char **)v14;
      v28 = *((_QWORD *)v14 + 2);
      *(_QWORD *)v14 = ptr;
      v29 = _mm_loadu_si128(&v146);
      ptr = v27;
      v146.m128i_i64[1] = v28;
      *(__m128i *)(v14 + 2) = v29;
    }
    if ( v27 )
    {
      v146.m128i_i64[0] = 0;
      j__free(v27);
    }
    goto LABEL_24;
  }
  v16 = fork();
  v17 = (void *)v16;
  if ( v16 == -1 )
  {
    ptr = nullptr;
    v146 = 0;
    v56 = __errno_location();
    sub_974E0(*v56);
    sub_17D80((char **)&ptr);
    if ( (dword_1671A4 & 0x4000000) != 0 )
    {
      v63 = haystack;
      if ( v146.m128i_i64[0] )
        v63 = (const char *)ptr;
      sub_2A380((int)"%s\n", (__int64)v63, v57, v58, v59, v60, (__m128)0LL, a4, a5, a6, v61, v62, a9, a10, v136);
    }
    v64 = (char *)ptr;
    if ( v14 )
    {
      v64 = *(char **)v14;
      v65 = *((_QWORD *)v14 + 2);
      *(_QWORD *)v14 = ptr;
      v66 = _mm_loadu_si128(&v146);
      ptr = v64;
      v146.m128i_i64[1] = v65;
      *(__m128i *)(v14 + 2) = v66;
    }
    if ( v64 )
    {
      v146.m128i_i64[0] = 0;
      v17 = nullptr;
      j__free(v64);
      goto LABEL_11;
    }
LABEL_24:
    v17 = nullptr;
    goto LABEL_11;
  }
  v18 = *(_DWORD *)(a1 + 8);
  if ( !(_DWORD)v17 )
  {
    if ( (v18 & 0x40) != 0 )
    {
      personality((unsigned __int64)&loc_40000);
      if ( (*(_DWORD *)(a1 + 8) & 0x80u) == 0 )
        goto LABEL_27;
    }
    else if ( (v18 & 0x80u) == 0 )
    {
LABEL_27:
      v30 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(v30 + 1) > 1 )
      {
        a2 = nullptr;
        if ( dup2(v30, 0) )
        {
          if ( !byte_1671A1 )
            sub_96F80(11);
          goto LABEL_169;
        }
      }
      v31 = *(_QWORD *)(a1 + 40);
      if ( ((v31 + 1) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
      {
        a2 = &dword_0 + 1;
        if ( dup2(v31, 1) != 1 )
        {
          if ( !byte_1671A1 )
            sub_96F80(12);
          goto LABEL_169;
        }
      }
      v32 = *(_QWORD *)(a1 + 48);
      if ( v32 != -1 && v32 != 2 )
      {
        a2 = &dword_0 + 2;
        if ( dup2(v32, 2) != 2 )
        {
          if ( !byte_1671A1 )
            sub_96F80(13);
          goto LABEL_169;
        }
      }
      v33 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 > 0x38u )
      {
        v34 = *(char **)(a1 + 56);
        if ( v34 && *v34 )
        {
          do
          {
            putenv(v34);
            v34 += strlen(v34) + 1;
          }
          while ( *v34 );
          v33 = *(_QWORD *)a1;
        }
        if ( v33 > 0x40 )
        {
          v35 = *(const char **)(a1 + 64);
          if ( v35 )
          {
            if ( j__chdir(*(const char **)(a1 + 64)) == -1 )
            {
              v134 = __errno_location();
              v135 = (const char *)sub_974E0(*v134);
              sub_169F0((__int64)"chdir %s: %s\n", v35, v135);
              _exit(-*v134);
            }
          }
        }
      }
      v36 = *(char **)(a1 + 16);
      v37 = *(_DWORD *)(a1 + 8);
      v38 = 0;
      v141 = nullptr;
      src = nullptr;
      v39 = *(const char **)(a1 + 24);
      s = v36;
      v142 = 0;
      v144 = 0;
      if ( (v37 & 8) == 0 )
      {
        if ( v39 )
        {
          a2 = &v141;
          sub_8E7D0((__int64 *)&src, (__int64)&v141, (__int64)v39, v37);
        }
        if ( (v37 & 4) != 0 )
          goto LABEL_43;
        ptr = nullptr;
        v146 = 0;
        if ( s )
        {
          v67 = strlen(s);
          v68 = v67 + 1;
          v69 = v67;
          v70 = sub_96080((__int64)&ptr, nullptr, v67 + 1, 1u);
          v146.m128i_i64[0] = v68;
          ptr = v70;
          memmove(v70, s, v69);
          *((_BYTE *)ptr + v69) = 0;
          v71 = ptr;
          v72 = v146;
        }
        else
        {
          v71 = nullptr;
          v72 = 0u;
        }
        v73 = v144;
        v38 = 0;
        v74 = src;
        ptr = nullptr;
        v146 = 0;
        if ( *((_QWORD *)&v144 + 1) < (unsigned __int64)(v144 + 1) )
        {
          src = sub_96080((__int64)&src, src, v144 + 1, 0x18u);
          v74 = src;
          v73 = v144;
        }
        a2 = v74;
        memmove(v74 + 3, v74, 24 * v73);
        *v74 = v71;
        v74[1] = v72.m128i_i64[0];
        v75 = v144;
        v74[2] = v72.m128i_i64[1];
        v40 = v75 + 1;
        *(_QWORD *)&v144 = v75 + 1;
        if ( ptr )
        {
          v146.m128i_i64[0] = 0;
          j__free(ptr);
LABEL_43:
          v40 = v144;
        }
LABEL_44:
        v45 = (char *const *)sub_95F50(8 * v40 + 8);
        if ( !v45 )
          sub_93990((int)"prepare_arguments", (__int64)a2, v41, v42, v43, v44, v38, a4, a5, a6, v46, v47, a9, a10, v136);
        v48 = 0;
        v49 = 0;
        for ( i = 0; v48 < v40; *v51 = v54 )
        {
          v51 = (char **)&v45[v49];
          v52 = (char *)src + 24 * v49;
          v53 = *((_QWORD *)v52 + 1);
          v54 = *(char **)v52;
          if ( v53 < *((_QWORD *)v52 + 2) )
          {
            if ( v53 )
            {
              if ( v54 )
              {
                v138.m128i_i32[3] = v48;
                v138.m128i_i64[0] = (__int64)&v45[v49];
                v55 = (char *)sub_95FC0(v54, v53);
                v51 = (char **)v138.m128i_i64[0];
                v48 = v138.m128i_i32[3];
                v54 = v55;
                i = 0;
                if ( !v55 )
                  v54 = *(char **)v52;
              }
            }
          }
          ++v48;
          *(_QWORD *)v52 = 0;
          v49 = v48;
          *(_OWORD *)(v52 + 8) = i;
        }
        v45[v40] = nullptr;
        v76 = (char *)src;
        if ( src )
        {
          v77 = v144;
          if ( (_QWORD)v144 )
          {
            v78 = 0;
            do
            {
              v79 = &v76[24 * v78];
              v80 = *(void **)v79;
              if ( *(_QWORD *)v79 )
              {
                *((_QWORD *)v79 + 1) = 0;
                j__free(v80);
                v76 = (char *)src;
              }
              ++v78;
            }
            while ( v77 != v78 );
          }
          *(_QWORD *)&v144 = 0;
          j__free(v76);
        }
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          s = *v45;
        v81 = 0;
        v82 = 0;
        if ( !(_QWORD)v142 )
        {
LABEL_109:
          if ( !getrlimit(RLIMIT_NOFILE, (struct rlimit *)&ptr) && (unsigned __int64)ptr > 1 )
          {
            v95 = (char *)ptr - 1;
            if ( (char *)ptr - 1 > (_BYTE *)&dword_0 + 2 )
            {
              do
              {
                v96 = (int)v95;
                for ( j = (int)v95; (int)v95 > 9; j = (int)v95 )
                {
                  close((int)v95--);
                  v96 = (int)v95;
                }
                if ( (_QWORD)v142 )
                {
                  v98 = 0;
                  v99 = 0;
                  while ( j != *((_DWORD *)v141 + 12 * v99) )
                  {
                    v99 = ++v98;
                    if ( v98 >= (unsigned __int64)v142 )
                      goto LABEL_168;
                  }
                }
                else
                {
LABEL_168:
                  close(v96);
                }
                --v95;
              }
              while ( v95 != (_BYTE *)&dword_0 + 2 );
            }
          }
          setpgid(0, 0);
          v100 = getgid();
          if ( !setgid(v100) )
          {
            v101 = *(_DWORD *)(a1 + 8);
            if ( (v101 & 2) != 0 )
            {
              if ( ptrace(PTRACE_TRACEME, 0, 0, 0, *(double *)&i) == -1 )
              {
                v132 = __errno_location();
                v133 = (const char *)sub_974E0(*v132);
                sub_169F0((__int64)"TRACEME: %s", v133);
                _exit(-1);
              }
              v101 = *(_DWORD *)(a1 + 8);
            }
            if ( (v101 & 0x202) != 0 )
            {
              execv(s, v45);
              v102 = __errno_location();
              v103 = (const char *)sub_974E0(*v102);
              sub_169F0((__int64)"execv%s(%s): %s\n", "", s, v103);
            }
            execvp(s, v45);
            v104 = __errno_location();
            v105 = (const char *)sub_974E0(*v104);
            sub_169F0((__int64)"execv%s(%s): %s\n", "p", s, v105);
            _exit(1);
          }
          v130 = __errno_location();
          v131 = (const char *)sub_974E0(*v130);
          sub_169F0((__int64)"setgid: %s\n", v131);
          _exit(-*v130);
        }
        while ( 1 )
        {
          v86 = (char *)v141 + 48 * v82;
          v87 = *((_DWORD *)v86 + 8);
          v88 = *((_QWORD *)v86 + 2);
          v89 = (int *)v86;
          v90 = v87 & 8;
          if ( (v87 & 8) != 0 )
          {
            v90 = 0;
            if ( (v87 & 1) == 0 )
              v90 = (v87 & 4) == 0 ? 577 : 1089;
            v83 = haystack;
            if ( v88 )
              v83 = *((const char **)v86 + 1);
            goto LABEL_101;
          }
          if ( !v88 )
            break;
          v83 = *((const char **)v86 + 1);
          if ( *v83 != 38 || (v84 = v83[1], (unsigned __int8)(v84 - 48) > 9u) )
          {
            if ( (v87 & 1) == 0 )
            {
              v91 = open(v83, (v87 & 4) == 0 ? 577 : 1089, 420, *(double *)&i);
LABEL_102:
              v85 = v91;
              if ( v91 == -1 )
              {
                v92 = __errno_location();
                v93 = v92;
                if ( v14 )
                {
                  sub_974E0(*v92);
                  sub_17D80((char **)v14);
                  v94 = haystack;
                  if ( *((_QWORD *)v14 + 1) )
                    v94 = *(const char **)v14;
                  sub_169F0((__int64)"%s\n", v94);
                }
                _exit(-*v93);
              }
              goto LABEL_93;
            }
            goto LABEL_101;
          }
          v85 = v84 - 48;
LABEL_93:
          if ( v85 == *v89 )
          {
            fcntl(v85, 2, 0, *(double *)&i);
            v82 = ++v81;
            if ( v81 >= (unsigned __int64)v142 )
              goto LABEL_109;
          }
          else
          {
            if ( dup2(v85, *v89) != *v89 )
            {
              if ( !byte_1671A1 )
                sub_96F80(575);
LABEL_169:
              BUG();
            }
            v82 = ++v81;
            if ( v81 >= (unsigned __int64)v142 )
              goto LABEL_109;
          }
        }
        v83 = haystack;
        if ( (v87 & 1) == 0 )
        {
          v90 = 1089;
          if ( (v87 & 4) == 0 )
          {
            v91 = open(haystack, 577, 420, *(double *)&i);
            goto LABEL_102;
          }
        }
LABEL_101:
        v91 = open(v83, v90, 420, *(double *)&i);
        goto LABEL_102;
      }
      v106 = n[0];
      if ( n[0] )
      {
        v107 = sub_96030(n[0]);
        memcpy(v107, v139, v106);
        v109 = v144;
        a2 = src;
        v108 = v144 + 1;
        if ( *((_QWORD *)&v144 + 1) >= (unsigned __int64)(v144 + 1) )
          goto LABEL_134;
      }
      else
      {
        a2 = nullptr;
        v107 = nullptr;
        v108 = 1;
      }
      src = sub_96080((__int64)&src, a2, v108, 0x18u);
      a2 = src;
      v109 = v144;
LABEL_134:
      v110 = &a2[6 * v109];
      v38 = (__m128)_mm_unpacklo_epi64((__m128i)v106, (__m128i)v106);
      *(_QWORD *)v110 = v107;
      *(__m128 *)(v110 + 2) = v38;
      v40 = v144 + 1;
      *(_QWORD *)&v144 = v144 + 1;
      if ( v39 && *v39 )
      {
        v146 = 0;
        ptr = nullptr;
        ptr = sub_96080((__int64)&ptr, nullptr, 3u, 1u);
        v146.m128i_i64[0] = 3;
        strcpy((char *)ptr, "-c");
        v111 = v144;
        v112 = (char *)src;
        v113 = v144 + 1;
        if ( &ptr < src || &ptr >= (void **)((char *)src + 24 * *((_QWORD *)&v144 + 1)) )
        {
          if ( *((_QWORD *)&v144 + 1) < v113 )
          {
            src = sub_96080((__int64)&src, src, v144 + 1, 0x18u);
            v112 = (char *)src;
            v111 = v144;
          }
          v127 = _mm_loadu_si128(&v146);
          v128 = &v112[24 * v111];
          *(_QWORD *)v128 = ptr;
          *(__m128i *)(v128 + 8) = v127;
          *(_QWORD *)&v144 = v144 + 1;
        }
        else
        {
          a5 = 0;
          v114 = ptr;
          v115 = _mm_loadl_epi64(&v146);
          ptr = nullptr;
          v116 = v146.m128i_i64[1];
          v146 = 0;
          if ( *((_QWORD *)&v144 + 1) < v113 )
          {
            v138.m128i_i64[0] = v115.m128i_i64[0];
            src = sub_96080((__int64)&src, src, v144 + 1, 0x18u);
            v112 = (char *)src;
            v115 = _mm_loadl_epi64(&v138);
            v111 = v144;
          }
          a6 = (__m128)(unsigned __int64)v116;
          v117 = &v112[24 * v111];
          *(_QWORD *)v117 = v114;
          *(__m128i *)(v117 + 8) = _mm_unpacklo_epi64(v115, (__m128i)(unsigned __int64)v116);
          *(_QWORD *)&v144 = v144 + 1;
          if ( ptr )
          {
            v146.m128i_i64[0] = 0;
            j__free(ptr);
          }
        }
        ptr = nullptr;
        v146 = 0;
        v118 = strlen(v39);
        v119 = v118 + 1;
        v120 = v118;
        ptr = sub_96080((__int64)&ptr, nullptr, v118 + 1, 1u);
        v146.m128i_i64[0] = v119;
        memmove(ptr, v39, v120);
        *((_BYTE *)ptr + v120) = 0;
        v121 = v144;
        a2 = src;
        v122 = v144 + 1;
        if ( &ptr < src || &ptr >= (void **)((char *)src + 24 * *((_QWORD *)&v144 + 1)) )
        {
          if ( *((_QWORD *)&v144 + 1) < v122 )
          {
            src = sub_96080((__int64)&src, src, v144 + 1, 0x18u);
            a2 = src;
            v121 = v144;
          }
          v38 = (__m128)_mm_loadu_si128(&v146);
          v129 = &a2[6 * v121];
          *(_QWORD *)v129 = ptr;
          *(__m128 *)(v129 + 2) = v38;
          v40 = v144 + 1;
          *(_QWORD *)&v144 = v144 + 1;
        }
        else
        {
          a4 = 0;
          v123 = ptr;
          v124 = _mm_loadl_epi64(&v146);
          ptr = nullptr;
          v125 = v146.m128i_i64[1];
          v146 = 0;
          if ( *((_QWORD *)&v144 + 1) < v122 )
          {
            v138.m128i_i64[0] = v124.m128i_i64[0];
            src = sub_96080((__int64)&src, src, v144 + 1, 0x18u);
            a2 = src;
            v124 = _mm_loadl_epi64(&v138);
            v121 = v144;
          }
          v126 = &a2[6 * v121];
          v38 = (__m128)_mm_unpacklo_epi64(v124, (__m128i)(unsigned __int64)v125);
          *(_QWORD *)v126 = v123;
          *(__m128 *)(v126 + 2) = v38;
          v40 = v144 + 1;
          *(_QWORD *)&v144 = v144 + 1;
          if ( ptr )
          {
            v146.m128i_i64[0] = 0;
            j__free(ptr);
            v40 = v144;
          }
        }
      }
      goto LABEL_44;
    }
    sub_979B0();
    goto LABEL_27;
  }
  if ( (v18 & 0x80u) != 0 )
  {
    sub_97A20();
    v18 = *(_DWORD *)(a1 + 8);
  }
  if ( (v18 & 0x400) != 0 )
    sub_98360(sub_98C50, v17);
LABEL_11:
  if ( v139 )
  {
    n[0] = 0;
    j__free(v139);
  }
  return v17;
}

