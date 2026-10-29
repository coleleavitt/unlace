/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483900
// Address: 0x0000000000483900

//----- (0000000000483900) ----------------------------------------------------
void *__fastcall sub_483900(
        __int64 a1,
        __int64 a2,
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
  __int64 v14; // r12
  __pid_t v16; // eax
  void *v17; // rbx
  int v18; // eax
  const char *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __m128 v25; // xmm4
  __m128 v26; // xmm5
  const char *v27; // rsi
  char *v28; // rdi
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  char *v35; // rbx
  const char *v36; // rbx
  char *v37; // rax
  int v38; // ebx
  __m128 v39; // xmm0
  char *v40; // r13
  unsigned __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char *const *v46; // r13
  __m128 v47; // xmm4
  __m128 v48; // xmm5
  __int32 v49; // edx
  __int64 v50; // rax
  __int128 i; // xmm0
  char **v52; // r8
  char *v53; // rbx
  unsigned __int64 v54; // rsi
  char *v55; // rdi
  char *v56; // rax
  int *v57; // rax
  const char *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __m128 v63; // xmm4
  __m128 v64; // xmm5
  const char *v65; // rsi
  char *v66; // rdi
  __int64 v67; // rdx
  __m128i v68; // xmm0
  size_t v69; // rax
  __int64 v70; // r13
  size_t v71; // rbx
  void *v72; // rax
  void *v73; // rbx
  __m128i v74; // kr00_16
  __int64 v75; // rax
  _QWORD *v76; // r15
  __int64 v77; // rax
  char *v78; // rdx
  __int64 v79; // r14
  __int64 v80; // rbx
  char *v81; // rax
  void *v82; // rdi
  int v83; // ebx
  __int64 v84; // rax
  const char *v85; // rdi
  char v86; // al
  int v87; // edi
  char *v88; // r10
  int v89; // edx
  __int64 v90; // rax
  int *v91; // r15
  int v92; // esi
  int v93; // eax
  int *v94; // rax
  int *v95; // rbx
  __int64 v96; // r9
  const char *v97; // r8
  char *v98; // rcx
  const char *v99; // rsi
  char *v100; // rbx
  int v101; // r8d
  int j; // ecx
  int v103; // edx
  __int64 v104; // rax
  __gid_t v105; // eax
  double v106; // xmm4_8
  double v107; // xmm5_8
  int v108; // eax
  int *v109; // rax
  const char *v110; // rax
  int *v111; // rax
  const char *v112; // rax
  size_t v113; // rbx
  void *v114; // r14
  unsigned __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  char *v119; // rsi
  unsigned __int64 v120; // rdi
  void *v121; // r14
  __m128i v122; // xmm0
  __int64 v123; // r15
  char *v124; // rax
  size_t v125; // rax
  __int64 v126; // r15
  size_t v127; // r14
  __int64 v128; // rax
  unsigned __int64 v129; // rdi
  void *v130; // r13
  __m128i v131; // xmm0
  __int64 v132; // rbx
  __int64 v133; // rax
  __m128i v134; // xmm0
  char *v135; // rax
  __int64 v136; // rax
  int *v137; // rbx
  const char *v138; // rax
  int *v139; // rax
  const char *v140; // rax
  int *v141; // rbp
  const char *v142; // rax
  char v143; // [rsp+0h] [rbp-D8h]
  char *s; // [rsp+8h] [rbp-D0h]
  __m128i v145; // [rsp+10h] [rbp-C8h] BYREF
  void *v146; // [rsp+20h] [rbp-B8h] BYREF
  size_t n[3]; // [rsp+28h] [rbp-B0h]
  void *v148; // [rsp+40h] [rbp-98h] BYREF
  __int128 v149; // [rsp+48h] [rbp-90h]
  void *src; // [rsp+60h] [rbp-78h] BYREF
  __int128 v151; // [rsp+68h] [rbp-70h]
  void *ptr; // [rsp+80h] [rbp-58h] BYREF
  __m128i v153; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v154; // [rsp+98h] [rbp-40h]

  v14 = a2;
  v154 = __readfsqword(0x28u);
  if ( (dword_4C94E4 & 0x4000000) != 0 )
  {
    a2 = *(_QWORD *)(a1 + 16);
    sub_470E00(
      (int)"Launching process %s, with args %s\n",
      a2,
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
      v143);
    if ( qword_4C9510 )
      goto LABEL_3;
  }
  else if ( qword_4C9510 )
  {
    goto LABEL_3;
  }
  qword_4C9510 = j__pthread_self();
  qword_4C9518 = (__int64)sub_482C40();
LABEL_3:
  v146 = nullptr;
  *(_OWORD *)n = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    a2 = (__int64)&v146;
    if ( !(unsigned __int8)sub_4837D0("SHELL", (__int64)&v146) )
    {
      a2 = (__int64)v146;
      if ( n[1] <= 7 )
      {
        v146 = sub_481540((__int64)&v146, v146, 8u, 1u);
        a2 = (__int64)v146;
      }
      n[0] = 8;
      *(_DWORD *)a2 = 1852400175;
      *(_DWORD *)(a2 + 3) = 1752379246;
      *((_BYTE *)v146 + 7) = 0;
    }
  }
  else if ( (unsigned __int8)sub_480670(*(_BYTE **)(a1 + 16)) && !sub_480B00(*(char **)(a1 + 16)) )
  {
    v20 = *(const char **)(a1 + 16);
    ptr = nullptr;
    v153 = 0;
    sub_4172B0((__int64)&ptr, "%s: file does not exist", v20);
    if ( (dword_4C94E4 & 0x4000000) != 0 )
    {
      v27 = s1;
      if ( v153.m128i_i64[0] )
        v27 = (const char *)ptr;
      sub_470E00((int)"%s\n", (__int64)v27, v21, v22, v23, v24, (__m128)0LL, a4, a5, a6, v25, v26, a9, a10, v143);
    }
    v28 = (char *)ptr;
    if ( v14 )
    {
      v28 = *(char **)v14;
      v29 = *(_QWORD *)(v14 + 16);
      *(_QWORD *)v14 = ptr;
      v30 = _mm_loadu_si128(&v153);
      ptr = v28;
      v153.m128i_i64[1] = v29;
      *(__m128i *)(v14 + 8) = v30;
    }
    if ( v28 )
    {
      v153.m128i_i64[0] = 0;
      j__free(v28);
    }
    goto LABEL_24;
  }
  v16 = fork();
  v17 = (void *)v16;
  if ( v16 == -1 )
  {
    ptr = nullptr;
    v153 = 0;
    v57 = __errno_location();
    v58 = (const char *)sub_481FB0(*v57);
    sub_4172B0((__int64)&ptr, "fork() failed: %s", v58);
    if ( (dword_4C94E4 & 0x4000000) != 0 )
    {
      v65 = s1;
      if ( v153.m128i_i64[0] )
        v65 = (const char *)ptr;
      sub_470E00((int)"%s\n", (__int64)v65, v59, v60, v61, v62, (__m128)0LL, a4, a5, a6, v63, v64, a9, a10, v143);
    }
    v66 = (char *)ptr;
    if ( v14 )
    {
      v66 = *(char **)v14;
      v67 = *(_QWORD *)(v14 + 16);
      *(_QWORD *)v14 = ptr;
      v68 = _mm_loadu_si128(&v153);
      ptr = v66;
      v153.m128i_i64[1] = v67;
      *(__m128i *)(v14 + 8) = v68;
    }
    if ( v66 )
    {
      v153.m128i_i64[0] = 0;
      v17 = nullptr;
      j__free(v66);
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
      personality(0x40000u);
      if ( (*(_DWORD *)(a1 + 8) & 0x80u) == 0 )
        goto LABEL_27;
    }
    else if ( (v18 & 0x80u) == 0 )
    {
LABEL_27:
      v31 = *(_QWORD *)(a1 + 32);
      if ( (unsigned __int64)(v31 + 1) > 1 )
      {
        a2 = 0;
        if ( dup2(v31, 0) )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(11);
          goto LABEL_173;
        }
      }
      v32 = *(_QWORD *)(a1 + 40);
      if ( ((v32 + 1) & 0xFFFFFFFFFFFFFFFDLL) != 0 )
      {
        a2 = 1;
        if ( dup2(v32, 1) != 1 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(12);
          goto LABEL_173;
        }
      }
      v33 = *(_QWORD *)(a1 + 48);
      if ( v33 != -1 && v33 != 2 )
      {
        a2 = 2;
        if ( dup2(v33, 2) != 2 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(13);
          goto LABEL_173;
        }
      }
      v34 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 > 0x38u )
      {
        v35 = *(char **)(a1 + 56);
        if ( v35 && *v35 )
        {
          do
          {
            putenv(v35);
            v35 += strlen(v35) + 1;
          }
          while ( *v35 );
          v34 = *(_QWORD *)a1;
        }
        if ( v34 > 0x40 )
        {
          v36 = *(const char **)(a1 + 64);
          if ( v36 )
          {
            if ( j__chdir(*(const char **)(a1 + 64)) == -1 )
            {
              v141 = __errno_location();
              v142 = (const char *)sub_481FB0(*v141);
              sub_479DD0("chdir %s: %s\n", v36, v142);
              _exit(-*v141);
            }
          }
        }
      }
      v37 = *(char **)(a1 + 16);
      v38 = *(_DWORD *)(a1 + 8);
      v39 = 0;
      v148 = nullptr;
      src = nullptr;
      v40 = *(char **)(a1 + 24);
      s = v37;
      v149 = 0;
      v151 = 0;
      if ( (v38 & 8) == 0 )
      {
        if ( v40 )
        {
          a2 = (__int64)&v148;
          sub_476DA0((char *)&src, (char **)&v148, v40, v38);
        }
        if ( (v38 & 4) != 0 )
          goto LABEL_43;
        ptr = nullptr;
        v153 = 0;
        if ( s )
        {
          v69 = strlen(s);
          v70 = v69 + 1;
          v71 = v69;
          v72 = sub_481540((__int64)&ptr, nullptr, v69 + 1, 1u);
          v153.m128i_i64[0] = v70;
          ptr = v72;
          memmove(v72, s, v71);
          *((_BYTE *)ptr + v71) = 0;
          v73 = ptr;
          v74 = v153;
        }
        else
        {
          v73 = nullptr;
          v74 = 0u;
        }
        v75 = v151;
        v39 = 0;
        v76 = src;
        ptr = nullptr;
        v153 = 0;
        if ( *((_QWORD *)&v151 + 1) < (unsigned __int64)(v151 + 1) )
        {
          src = sub_481540((__int64)&src, src, v151 + 1, 0x18u);
          v76 = src;
          v75 = v151;
        }
        a2 = (__int64)v76;
        memmove(v76 + 3, v76, 24 * v75);
        *v76 = v73;
        v76[1] = v74.m128i_i64[0];
        v77 = v151;
        v76[2] = v74.m128i_i64[1];
        v41 = v77 + 1;
        *(_QWORD *)&v151 = v77 + 1;
        if ( ptr )
        {
          v153.m128i_i64[0] = 0;
          j__free(ptr);
LABEL_43:
          v41 = v151;
        }
LABEL_44:
        v46 = (char *const *)sub_4813B0(8 * v41 + 8);
        if ( !v46 )
          sub_437D10((int)"prepare_arguments", a2, v42, v43, v44, v45, v39, a4, a5, a6, v47, v48, a9, a10, v143);
        v49 = 0;
        v50 = 0;
        for ( i = 0; v49 < v41; *v52 = v55 )
        {
          v52 = (char **)&v46[v50];
          v53 = (char *)src + 24 * v50;
          v54 = *((_QWORD *)v53 + 1);
          v55 = *(char **)v53;
          if ( v54 < *((_QWORD *)v53 + 2) )
          {
            if ( v54 )
            {
              if ( v55 )
              {
                v145.m128i_i32[3] = v49;
                v145.m128i_i64[0] = (__int64)&v46[v50];
                v56 = (char *)sub_481420(v55, v54);
                v52 = (char **)v145.m128i_i64[0];
                v49 = v145.m128i_i32[3];
                v55 = v56;
                i = 0;
                if ( !v56 )
                  v55 = *(char **)v53;
              }
            }
          }
          ++v49;
          *(_QWORD *)v53 = 0;
          v50 = v49;
          *(_OWORD *)(v53 + 8) = i;
        }
        v46[v41] = nullptr;
        v78 = (char *)src;
        if ( src )
        {
          v79 = v151;
          if ( (_QWORD)v151 )
          {
            v80 = 0;
            do
            {
              v81 = &v78[24 * v80];
              v82 = *(void **)v81;
              if ( *(_QWORD *)v81 )
              {
                *((_QWORD *)v81 + 1) = 0;
                j__free(v82);
                v78 = (char *)src;
              }
              ++v80;
            }
            while ( v79 != v80 );
          }
          *(_QWORD *)&v151 = 0;
          j__free(v78);
        }
        if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
          s = *v46;
        v83 = 0;
        v84 = 0;
        if ( !(_QWORD)v149 )
        {
LABEL_113:
          if ( !getrlimit(RLIMIT_NOFILE, (struct rlimit *)&ptr) && (unsigned __int64)ptr > 1 )
          {
            v100 = (char *)ptr - 1;
            if ( (char *)ptr - 1 > (char *)2 )
            {
              do
              {
                v101 = (int)v100;
                for ( j = (int)v100; (int)v100 > 9; j = (int)v100 )
                {
                  close((int)v100--);
                  v101 = (int)v100;
                }
                if ( (_QWORD)v149 )
                {
                  v103 = 0;
                  v104 = 0;
                  while ( j != *((_DWORD *)v148 + 12 * v104) )
                  {
                    v104 = ++v103;
                    if ( v103 >= (unsigned __int64)v149 )
                      goto LABEL_172;
                  }
                }
                else
                {
LABEL_172:
                  close(v101);
                }
                --v100;
              }
              while ( v100 != (char *)2 );
            }
          }
          setpgid(0, 0);
          v105 = getgid();
          if ( !setgid(v105) )
          {
            v108 = *(_DWORD *)(a1 + 8);
            if ( (v108 & 2) != 0 )
            {
              if ( ptrace(
                     PTRACE_TRACEME,
                     0,
                     0,
                     0,
                     *(double *)&i,
                     *(double *)a4.m128_u64,
                     *(double *)a5.m128_u64,
                     *(double *)a6.m128_u64,
                     v106,
                     v107,
                     *(double *)a9.m128_u64,
                     *(double *)a10.m128_u64) == -1 )
              {
                v139 = __errno_location();
                v140 = (const char *)sub_481FB0(*v139);
                sub_479DD0("TRACEME: %s", v140);
                _exit(-1);
              }
              v108 = *(_DWORD *)(a1 + 8);
            }
            if ( (v108 & 0x202) != 0 )
            {
              execv(s, v46);
              v109 = __errno_location();
              v110 = (const char *)sub_481FB0(*v109);
              sub_479DD0("execv%s(%s): %s\n", "", s, v110);
            }
            execvp(s, v46);
            v111 = __errno_location();
            v112 = (const char *)sub_481FB0(*v111);
            sub_479DD0("execv%s(%s): %s\n", "p", s, v112);
            _exit(1);
          }
          v137 = __errno_location();
          v138 = (const char *)sub_481FB0(*v137);
          sub_479DD0("setgid: %s\n", v138);
          _exit(-*v137);
        }
        while ( 1 )
        {
          v88 = (char *)v148 + 48 * v84;
          v89 = *((_DWORD *)v88 + 8);
          v90 = *((_QWORD *)v88 + 2);
          v91 = (int *)v88;
          v92 = v89 & 8;
          if ( (v89 & 8) != 0 )
          {
            v92 = 0;
            if ( (v89 & 1) == 0 )
              v92 = (v89 & 4) == 0 ? 577 : 1089;
            v85 = s1;
            if ( v90 )
              v85 = *((const char **)v88 + 1);
            goto LABEL_101;
          }
          if ( !v90 )
            break;
          v85 = *((const char **)v88 + 1);
          if ( *v85 != 38 || (v86 = v85[1], (unsigned __int8)(v86 - 48) > 9u) )
          {
            if ( (v89 & 1) == 0 )
            {
              v93 = open(
                      v85,
                      (v89 & 4) == 0 ? 577 : 1089,
                      420,
                      *(double *)&i,
                      *(double *)a4.m128_u64,
                      *(double *)a5.m128_u64,
                      *(double *)a6.m128_u64,
                      *(double *)v47.m128_u64,
                      *(double *)v48.m128_u64,
                      *(double *)a9.m128_u64,
                      *(double *)a10.m128_u64);
LABEL_102:
              v87 = v93;
              if ( v93 == -1 )
              {
                v94 = __errno_location();
                v95 = v94;
                if ( v14 )
                {
                  v96 = sub_481FB0(*v94);
                  v97 = s1;
                  if ( *((_QWORD *)v91 + 2) )
                    v97 = *((const char **)v91 + 1);
                  v98 = "to";
                  if ( (v91[8] & 1) != 0 )
                    v98 = "from";
                  sub_4172B0(v14, "failed to redirect %d %s %s: %s", (unsigned int)*v91, v98, v97, v96);
                  v99 = s1;
                  if ( *(_QWORD *)(v14 + 8) )
                    v99 = *(const char **)v14;
                  sub_479DD0("%s\n", v99);
                }
                _exit(-*v95);
              }
              goto LABEL_93;
            }
            goto LABEL_101;
          }
          v87 = v86 - 48;
LABEL_93:
          if ( v87 == *v91 )
          {
            fcntl(
              v87,
              2,
              0,
              *(double *)&i,
              *(double *)a4.m128_u64,
              *(double *)a5.m128_u64,
              *(double *)a6.m128_u64,
              *(double *)v47.m128_u64,
              *(double *)v48.m128_u64,
              *(double *)a9.m128_u64,
              *(double *)a10.m128_u64);
            v84 = ++v83;
            if ( v83 >= (unsigned __int64)v149 )
              goto LABEL_113;
          }
          else
          {
            if ( dup2(v87, *v91) != *v91 )
            {
              if ( !byte_4C94E1 )
                sub_481AC0(575);
LABEL_173:
              BUG();
            }
            v84 = ++v83;
            if ( v83 >= (unsigned __int64)v149 )
              goto LABEL_113;
          }
        }
        v85 = s1;
        if ( (v89 & 1) == 0 )
        {
          v92 = 1089;
          if ( (v89 & 4) == 0 )
          {
            v93 = open(
                    s1,
                    577,
                    420,
                    *(double *)&i,
                    *(double *)a4.m128_u64,
                    *(double *)a5.m128_u64,
                    *(double *)a6.m128_u64,
                    *(double *)v47.m128_u64,
                    *(double *)v48.m128_u64,
                    *(double *)a9.m128_u64,
                    *(double *)a10.m128_u64);
            goto LABEL_102;
          }
        }
LABEL_101:
        v93 = open(
                v85,
                v92,
                420,
                *(double *)&i,
                *(double *)a4.m128_u64,
                *(double *)a5.m128_u64,
                *(double *)a6.m128_u64,
                *(double *)v47.m128_u64,
                *(double *)v48.m128_u64,
                *(double *)a9.m128_u64,
                *(double *)a10.m128_u64);
        goto LABEL_102;
      }
      v113 = n[0];
      if ( n[0] )
      {
        v114 = sub_4814F0(n[0]);
        memcpy(v114, v146, v113);
        v116 = v151;
        a2 = (__int64)src;
        v115 = v151 + 1;
        if ( *((_QWORD *)&v151 + 1) >= (unsigned __int64)(v151 + 1) )
          goto LABEL_138;
      }
      else
      {
        a2 = 0;
        v114 = nullptr;
        v115 = 1;
      }
      src = sub_481540((__int64)&src, (void *)a2, v115, 0x18u);
      a2 = (__int64)src;
      v116 = v151;
LABEL_138:
      v117 = a2 + 24 * v116;
      v39 = (__m128)_mm_unpacklo_epi64((__m128i)v113, (__m128i)v113);
      *(_QWORD *)v117 = v114;
      *(__m128 *)(v117 + 8) = v39;
      v41 = v151 + 1;
      *(_QWORD *)&v151 = v151 + 1;
      if ( v40 && *v40 )
      {
        v153 = 0;
        ptr = nullptr;
        ptr = sub_481540((__int64)&ptr, nullptr, 3u, 1u);
        v153.m128i_i64[0] = 3;
        strcpy((char *)ptr, "-c");
        v118 = v151;
        v119 = (char *)src;
        v120 = v151 + 1;
        if ( &ptr < src || &ptr >= (void **)((char *)src + 24 * *((_QWORD *)&v151 + 1)) )
        {
          if ( *((_QWORD *)&v151 + 1) < v120 )
          {
            src = sub_481540((__int64)&src, src, v151 + 1, 0x18u);
            v119 = (char *)src;
            v118 = v151;
          }
          v134 = _mm_loadu_si128(&v153);
          v135 = &v119[24 * v118];
          *(_QWORD *)v135 = ptr;
          *(__m128i *)(v135 + 8) = v134;
          *(_QWORD *)&v151 = v151 + 1;
        }
        else
        {
          a5 = 0;
          v121 = ptr;
          v122 = _mm_loadl_epi64(&v153);
          ptr = nullptr;
          v123 = v153.m128i_i64[1];
          v153 = 0;
          if ( *((_QWORD *)&v151 + 1) < v120 )
          {
            v145.m128i_i64[0] = v122.m128i_i64[0];
            src = sub_481540((__int64)&src, src, v151 + 1, 0x18u);
            v119 = (char *)src;
            v122 = _mm_loadl_epi64(&v145);
            v118 = v151;
          }
          a6 = (__m128)(unsigned __int64)v123;
          v124 = &v119[24 * v118];
          *(_QWORD *)v124 = v121;
          *(__m128i *)(v124 + 8) = _mm_unpacklo_epi64(v122, (__m128i)(unsigned __int64)v123);
          *(_QWORD *)&v151 = v151 + 1;
          if ( ptr )
          {
            v153.m128i_i64[0] = 0;
            j__free(ptr);
          }
        }
        ptr = nullptr;
        v153 = 0;
        v125 = strlen(v40);
        v126 = v125 + 1;
        v127 = v125;
        ptr = sub_481540((__int64)&ptr, nullptr, v125 + 1, 1u);
        v153.m128i_i64[0] = v126;
        memmove(ptr, v40, v127);
        *((_BYTE *)ptr + v127) = 0;
        v128 = v151;
        a2 = (__int64)src;
        v129 = v151 + 1;
        if ( &ptr < src || &ptr >= (void **)((char *)src + 24 * *((_QWORD *)&v151 + 1)) )
        {
          if ( *((_QWORD *)&v151 + 1) < v129 )
          {
            src = sub_481540((__int64)&src, src, v151 + 1, 0x18u);
            a2 = (__int64)src;
            v128 = v151;
          }
          v39 = (__m128)_mm_loadu_si128(&v153);
          v136 = a2 + 24 * v128;
          *(_QWORD *)v136 = ptr;
          *(__m128 *)(v136 + 8) = v39;
          v41 = v151 + 1;
          *(_QWORD *)&v151 = v151 + 1;
        }
        else
        {
          a4 = 0;
          v130 = ptr;
          v131 = _mm_loadl_epi64(&v153);
          ptr = nullptr;
          v132 = v153.m128i_i64[1];
          v153 = 0;
          if ( *((_QWORD *)&v151 + 1) < v129 )
          {
            v145.m128i_i64[0] = v131.m128i_i64[0];
            src = sub_481540((__int64)&src, src, v151 + 1, 0x18u);
            a2 = (__int64)src;
            v131 = _mm_loadl_epi64(&v145);
            v128 = v151;
          }
          v133 = a2 + 24 * v128;
          v39 = (__m128)_mm_unpacklo_epi64(v131, (__m128i)(unsigned __int64)v132);
          *(_QWORD *)v133 = v130;
          *(__m128 *)(v133 + 8) = v39;
          v41 = v151 + 1;
          *(_QWORD *)&v151 = v151 + 1;
          if ( ptr )
          {
            v153.m128i_i64[0] = 0;
            j__free(ptr);
            v41 = v151;
          }
        }
      }
      goto LABEL_44;
    }
    sub_482470();
    goto LABEL_27;
  }
  if ( (v18 & 0x80u) != 0 )
  {
    sub_4824E0();
    v18 = *(_DWORD *)(a1 + 8);
  }
  if ( (v18 & 0x400) != 0 )
    sub_482E20(sub_483710, v17);
LABEL_11:
  if ( v146 )
  {
    n[0] = 0;
    j__free(v146);
  }
  return v17;
}
// 483A78: variable 'v21' is possibly undefined
// 483A78: variable 'v22' is possibly undefined
// 483A78: variable 'v23' is possibly undefined
// 483A78: variable 'v24' is possibly undefined
// 483A78: variable 'v25' is possibly undefined
// 483A78: variable 'v26' is possibly undefined
// 483A78: variable 'v143' is possibly undefined
// 483D5B: variable 'v59' is possibly undefined
// 483D5B: variable 'v60' is possibly undefined
// 483D5B: variable 'v61' is possibly undefined
// 483D5B: variable 'v62' is possibly undefined
// 483D5B: variable 'v63' is possibly undefined
// 483D5B: variable 'v64' is possibly undefined
// 4840DB: variable 'v47' is possibly undefined
// 4840DB: variable 'v48' is possibly undefined
// 4846FA: variable 'v106' is possibly undefined
// 4846FA: variable 'v107' is possibly undefined
// 484972: variable 'v42' is possibly undefined
// 484972: variable 'v43' is possibly undefined
// 484972: variable 'v44' is possibly undefined
// 484972: variable 'v45' is possibly undefined
// 4C94E1: using guessed type char byte_4C94E1;
// 4C94E4: using guessed type int dword_4C94E4;
// 4C9510: using guessed type __int64 qword_4C9510;
// 4C9518: using guessed type __int64 qword_4C9518;
