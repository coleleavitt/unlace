/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: launch_process
// Address: 0x00000000000C6D70

//----- (00000000000C6D70) ----------------------------------------------------
__int64 __fastcall launch_process(__int64 a1, __m128i *a2)
{
  char *v4; // rdi
  const char *v5; // rsi
  size_t v6; // rbx
  void *v7; // rax
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  char *v14; // rbx
  size_t v15; // rax
  bool v16; // zf
  const char *v17; // rbx
  const char *v18; // rdi
  char *v19; // rbx
  int v20; // ebp
  void *v21; // rbx
  int *v22; // rax
  char *v23; // rax
  const char *v24; // rsi
  int v25; // ebp
  int v26; // r14d
  __pid_t v27; // eax
  signed __int64 v28; // rdi
  char **v29; // rax
  char **v30; // rcx
  unsigned __int64 v31; // rsi
  int v32; // r15d
  unsigned __int64 v33; // rbx
  __int128 v34; // xmm0
  _QWORD *v35; // rbp
  signed __int64 *v36; // r13
  unsigned __int64 v37; // r12
  void *v38; // rax
  signed __int64 v39; // rax
  char *v40; // rbp
  void *v41; // r14
  unsigned __int64 v42; // r15
  __int64 i; // rbx
  void *v44; // rdi
  int v45; // ebx
  void *v46; // rax
  _BYTE *v47; // r12
  __int64 v48; // r13
  int v49; // eax
  int *v50; // rdx
  unsigned int v51; // ebp
  char v52; // r15
  int v53; // esi
  int *v54; // r14
  __gid_t v55; // eax
  __int64 v56; // rdi
  int v57; // eax
  int *v58; // rax
  char *v59; // rax
  __m128i v60; // xmm0
  __int64 v61; // rax
  void *v62; // rdi
  __m128i v63; // xmm0
  __int64 v64; // rax
  void *v65; // rdi
  int *v67; // rbx
  int v68; // r15d
  const char *v69; // rbp
  const char *v70; // r12
  int *v71; // rbx
  char *v72; // rax
  char *v73; // rax
  const char *v74; // rsi
  int *v75; // rax
  char *v76; // rax
  int *v77; // rax
  char *v78; // rax
  int *v79; // r14
  char *v80; // rax
  char *path; // [rsp+8h] [rbp-D0h]
  char **argv; // [rsp+10h] [rbp-C8h]
  __int64 v84; // [rsp+20h] [rbp-B8h]
  void *v85; // [rsp+28h] [rbp-B0h]
  void *v86[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v87; // [rsp+40h] [rbp-98h]
  void *dest[2]; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 v89; // [rsp+60h] [rbp-78h]
  __int128 ptr; // [rsp+68h] [rbp-70h] BYREF
  __int64 v91; // [rsp+78h] [rbp-60h]
  void *v92[2]; // [rsp+80h] [rbp-58h] BYREF
  __int64 v93; // [rsp+90h] [rbp-48h]
  unsigned __int64 v94; // [rsp+A0h] [rbp-38h]

  v94 = __readfsqword(0x28u);
  if ( (debug & 0x4000000) != 0 )
    sub_AB2A0((int)"Launching process %s, with args %s\n", *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  if ( !thread2 )
  {
    thread2 = pthread_self();
    mutex = qmutex_create();
  }
  *(_OWORD *)dest = 0;
  v89 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    v4 = "SHELL";
    if ( !(unsigned __int8)qgetenv("SHELL", (__int64)dest) )
    {
      v4 = "/bin/sh";
      v6 = __strlen_chk("/bin/sh", 8);
      if ( v6 )
      {
        v7 = dest[0];
        if ( v89 < v6 + 1 )
        {
          v7 = qvector_reserve((__int64)dest, (char *)dest[0], v6 + 1, 1u);
          dest[0] = v7;
        }
        dest[1] = (void *)(v6 + 1);
        v4 = (char *)v7;
        memmove(v7, "/bin/sh", v6);
        *((_BYTE *)dest[0] + v6) = 0;
      }
      else
      {
        dest[1] = nullptr;
      }
    }
  }
  else
  {
    v4 = *(char **)(a1 + 16);
    if ( qisabspath(v4) )
    {
      v4 = *(char **)(a1 + 16);
      if ( !qfileexist(v4) )
      {
        *(_OWORD *)v92 = 0;
        v93 = 0;
        sub_3BBA0((__int64)v92, "%s: file does not exist", *(const char **)(a1 + 16));
        if ( (debug & 0x4000000) != 0 )
        {
          if ( v92[1] )
            v5 = (const char *)v92[0];
          else
            v5 = s1;
          sub_AB2A0((int)"%s\n", v5);
        }
        if ( a2 )
        {
          v63 = _mm_loadu_si128(a2);
          v64 = a2[1].m128i_i64[0];
          *a2 = *(__m128i *)v92;
          a2[1].m128i_i64[0] = v93;
          *(__m128i *)v92 = v63;
          v93 = v64;
          v65 = (void *)v63.m128i_i64[0];
          if ( !v63.m128i_i64[0] )
            goto LABEL_124;
          goto LABEL_122;
        }
        v65 = v92[0];
        if ( v92[0] )
        {
LABEL_122:
          v92[1] = nullptr;
          qfree(v65);
          goto LABEL_123;
        }
LABEL_124:
        v8 = 0;
        goto LABEL_125;
      }
    }
  }
  LODWORD(v8) = fork();
  if ( (_DWORD)v8 == -1 )
  {
    *(_OWORD *)v92 = 0;
    v93 = 0;
    v22 = (int *)__errno(v4);
    v23 = winerr(*v22);
    sub_3BBA0((__int64)v92, "fork() failed: %s", v23);
    if ( (debug & 0x4000000) != 0 )
    {
      if ( v92[1] )
        v24 = (const char *)v92[0];
      else
        v24 = s1;
      sub_AB2A0((int)"%s\n", v24);
    }
    if ( a2 )
    {
      v60 = _mm_loadu_si128(a2);
      v61 = a2[1].m128i_i64[0];
      *a2 = *(__m128i *)v92;
      a2[1].m128i_i64[0] = v93;
      *(__m128i *)v92 = v60;
      v93 = v61;
      v62 = (void *)v60.m128i_i64[0];
      if ( !v60.m128i_i64[0] )
        goto LABEL_124;
    }
    else
    {
      v62 = v92[0];
      if ( !v92[0] )
        goto LABEL_124;
    }
    v92[1] = nullptr;
    qfree(v62);
LABEL_123:
    v92[0] = nullptr;
    v93 = 0;
    goto LABEL_124;
  }
  if ( !(_DWORD)v8 )
  {
    v9 = *(_DWORD *)(a1 + 8);
    if ( (v9 & 0x40) != 0 )
    {
      personality(0x40000u);
      v9 = *(_DWORD *)(a1 + 8);
    }
    if ( (v9 & 0x80u) != 0 )
      qdetach_tty();
    v10 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v10 + 1) >= 2 && dup2(v10, 0) )
    {
      if ( !(_BYTE)under_debugger )
        interr(11);
    }
    else
    {
      v11 = *(_QWORD *)(a1 + 40);
      if ( v11 == -1 || v11 == 1 || dup2(v11, 1) == 1 )
      {
        v12 = *(_QWORD *)(a1 + 48);
        if ( v12 == -1 || v12 == 2 || dup2(v12, 2) == 2 )
        {
          v13 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 >= 0x39u )
          {
            v14 = *(char **)(a1 + 56);
            if ( v14 )
            {
              if ( *v14 )
              {
                do
                {
                  putenv(v14);
                  v15 = strlen(v14);
                  v16 = v14[v15 + 1] == 0;
                  v14 += v15 + 1;
                }
                while ( !v16 );
                v13 = *(_QWORD *)a1;
              }
            }
          }
          if ( v13 >= 0x41 )
          {
            v17 = *(const char **)(a1 + 64);
            if ( v17 )
            {
              v18 = *(const char **)(a1 + 64);
              if ( qchdir(v18) == -1 )
              {
                v79 = (int *)__errno(v18);
                v80 = winerr(*v79);
                sub_B7430("chdir %s: %s\n", v17, v80);
                _exit(-*v79);
              }
            }
          }
          *(_OWORD *)v86 = 0;
          v87 = 0;
          path = *(char **)(a1 + 16);
          v19 = *(char **)(a1 + 24);
          v20 = *(_DWORD *)(a1 + 8);
          *(_OWORD *)v92 = 0;
          v93 = 0;
          if ( (v20 & 8) != 0 )
          {
            sub_47F30((__int64)v92, (__int64)dest);
            if ( !v19 || !*v19 )
              goto LABEL_64;
            sub_37F60((__int64)&ptr, "-c");
            sub_4AA20((__int64)v92, &ptr);
            if ( (_QWORD)ptr )
            {
              *((_QWORD *)&ptr + 1) = 0;
              qfree((void *)ptr);
              *(_QWORD *)&ptr = 0;
              v91 = 0;
            }
            sub_37F60((__int64)&ptr, v19);
            sub_4AA20((__int64)v92, &ptr);
            if ( !(_QWORD)ptr )
              goto LABEL_64;
            *((_QWORD *)&ptr + 1) = 0;
            qfree((void *)ptr);
          }
          else
          {
            if ( v19 )
              parse_command_line((__int64)v92, (char **)v86, v19, v20);
            if ( (v20 & 4) != 0 )
              goto LABEL_64;
            v21 = v92[0];
            sub_37F60((__int64)&ptr, path);
            sub_9AB10((__int64)v92, (__int64)v21, &ptr);
            if ( !(_QWORD)ptr )
              goto LABEL_64;
            *((_QWORD *)&ptr + 1) = 0;
            qfree((void *)ptr);
          }
          *(_QWORD *)&ptr = 0;
          v91 = 0;
LABEL_64:
          v85 = v92[1];
          v28 = 8 * (__int64)v92[1] + 8;
          v29 = (char **)qalloc(v28);
          v30 = v29;
          v84 = a1;
          if ( !v29 )
            sub_6E800((int)"prepare_arguments");
          v31 = (unsigned __int64)v85;
          argv = v29;
          if ( v85 )
          {
            v32 = 1;
            v33 = 0;
            v34 = 0;
            do
            {
              v35 = v92[0];
              v36 = (signed __int64 *)((char *)v92[0] + 24 * v33);
              v37 = v36[1];
              if ( v36[2] > v37 )
              {
                if ( v37 )
                {
                  v28 = *v36;
                  if ( *v36 )
                  {
                    v38 = qrealloc((void *)v28, *((_QWORD *)v92[0] + 3 * v33 + 1));
                    v30 = argv;
                    v31 = (unsigned __int64)v85;
                    v34 = 0;
                    if ( v38 )
                    {
                      *v36 = (signed __int64)v38;
                      v35[3 * v33 + 2] = v37;
                      v30 = argv;
                    }
                  }
                }
              }
              *(_OWORD *)&v35[3 * v33 + 1] = v34;
              v39 = *v36;
              *v36 = 0;
              v30[v33] = (char *)v39;
              v33 = v32++;
            }
            while ( v31 > v33 );
          }
          v30[v31] = nullptr;
          v40 = (char *)v92[0];
          if ( v92[0] )
          {
            v41 = v92[1];
            if ( v92[1] )
            {
              v42 = 1;
              for ( i = 0; ; i += 24 )
              {
                v44 = *(void **)&v40[i];
                if ( v44 )
                {
                  *(_QWORD *)&v40[i + 8] = 0;
                  qfree(v44);
                  *(_QWORD *)&v40[i] = 0;
                  *(_QWORD *)&v40[i + 16] = 0;
                }
                if ( v42 >= (unsigned __int64)v41 )
                  break;
                v40 = (char *)v92[0];
                ++v42;
              }
              v40 = (char *)v92[0];
            }
            v92[1] = nullptr;
            v28 = (signed __int64)v40;
            qfree(v40);
            v92[0] = nullptr;
            v93 = 0;
            v30 = argv;
          }
          if ( (*(_BYTE *)(v84 + 8) & 8) != 0 )
            path = *v30;
          if ( !v86[1] )
          {
LABEL_105:
            setpgid(0, 0);
            v55 = getgid();
            v56 = v55;
            if ( !setgid(v55) )
            {
              v57 = *(_DWORD *)(v84 + 8);
              if ( (v57 & 2) != 0 )
              {
                if ( ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 )
                {
                  v58 = (int *)__errno(0);
                  v59 = winerr(*v58);
                  sub_B7430("TRACEME: %s", v59);
                  _exit(-1);
                }
                v57 = *(_DWORD *)(v84 + 8);
              }
              if ( (v57 & 0x202) != 0 )
              {
                execv(path, argv);
                v75 = (int *)__errno(path);
                v76 = winerr(*v75);
                sub_B7430("execv%s(%s): %s\n", &byte_EB522, path, v76);
              }
              execvp(path, argv);
              v77 = (int *)__errno(path);
              v78 = winerr(*v77);
              sub_B7430("execv%s(%s): %s\n", "p", path, v78);
              _exit(1);
            }
            v71 = (int *)__errno(v56);
            v72 = winerr(*v71);
            sub_B7430("setgid: %s\n", v72);
            _exit(-*v71);
          }
          v45 = 1;
          v46 = nullptr;
          while ( 1 )
          {
            v47 = v86[0];
            v48 = 48LL * (_QWORD)v46;
            v49 = *((_DWORD *)v86[0] + 12 * (_QWORD)v46 + 8);
            if ( (v49 & 8) != 0 )
              goto LABEL_93;
            v30 = (char **)((char *)v86[0] + v48 + 8);
            v50 = &dword_101BA4;
            if ( *(_QWORD *)((char *)v86[0] + v48 + 16) )
              v50 = (int *)*v30;
            if ( *(_BYTE *)v50 != 38
              || (v30 = (char **)(unsigned __int8)(*v30)[1], (char)v30 < 0)
              || (unsigned int)((_DWORD)v30 - 48) > 9 )
            {
LABEL_93:
              v53 = 0;
              if ( (v49 & 1) == 0 )
                v53 = ((v49 & 4) << 7) + 577;
              v28 = (signed __int64)s1;
              if ( *(_QWORD *)((char *)v86[0] + v48 + 16) )
                v28 = *(_QWORD *)((char *)v86[0] + v48 + 8);
              v51 = open((const char *)v28, v53, 420, v30);
              v52 = 1;
            }
            else
            {
              v51 = (char)v30 - 48;
              v52 = 0;
            }
            v54 = (int *)&v47[v48];
            if ( v51 == -1 )
            {
              if ( a2 )
              {
                v68 = *v54;
                v69 = "from";
                if ( (v47[v48 + 32] & 1) == 0 )
                  v69 = "to";
                if ( *(_QWORD *)&v47[v48 + 16] )
                  v70 = *(const char **)&v47[v48 + 8];
                else
                  v70 = s1;
                v67 = (int *)__errno(v28);
                v73 = winerr(*v67);
                sub_3BBA0((__int64)a2, "failed to redirect %d %s %s: %s", v68, v69, v70, v73);
                if ( a2->m128i_i64[1] )
                  v74 = (const char *)a2->m128i_i64[0];
                else
                  v74 = s1;
                sub_B7430("%s\n", v74);
              }
              else
              {
                v67 = (int *)__errno(v28);
              }
              _exit(-*v67);
            }
            if ( v51 == *v54 )
            {
              v28 = v51;
              fcntl(v51, 2, 0);
            }
            else
            {
              v28 = v51;
              if ( dup2(v51, *v54) != *v54 )
              {
                if ( !(_BYTE)under_debugger )
                  interr(575);
                goto LABEL_155;
              }
              if ( v52 )
              {
                v28 = v51;
                close(v51);
              }
            }
            v46 = (void *)v45++;
            if ( v86[1] <= v46 )
              goto LABEL_105;
          }
        }
        if ( !(_BYTE)under_debugger )
          interr(13);
      }
      else if ( !(_BYTE)under_debugger )
      {
        interr(12);
      }
    }
LABEL_155:
    BUG();
  }
  if ( *(char *)(a1 + 8) < 0 )
  {
    v25 = __open_2("/dev/tty", 2);
    if ( v25 > 0 )
    {
      v26 = syscall(124, 0);
      if ( v26 != -1 )
      {
        v27 = tcgetsid(v25);
        if ( v27 != -1 && v27 != v26 )
          ioctl(v25, 0x540Eu, 0);
      }
      close(v25);
    }
  }
  v8 = (int)v8;
  if ( (*(_BYTE *)(a1 + 9) & 4) != 0 )
    qthread_create(sub_C7D40, (void *)(int)v8);
LABEL_125:
  if ( dest[0] )
  {
    dest[1] = nullptr;
    qfree(dest[0]);
    dest[0] = nullptr;
    v89 = 0;
  }
  return v8;
}
// C74BE: variable 'v30' is possibly undefined
// 33A10: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 101BA4: using guessed type int dword_101BA4;
// 158B2C: using guessed type int debug;
// 158B40: using guessed type __int64 under_debugger;
