/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: launch_process
// Address: 0x000000010007ECC0

//----- (000000010007ECC0) ----------------------------------------------------
__int64 __fastcall launch_process(__int64 a1, __int64 a2)
{
  const char *v4; // rsi
  _DWORD *v5; // rax
  pid_t v6; // r15d
  int v7; // r14d
  pid_t v8; // r12d
  pid_t v9; // eax
  __int64 v10; // r14
  int *v11; // rax
  const char *v12; // rax
  const char *v13; // rsi
  char *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  unsigned __int64 v21; // rax
  char *v22; // r15
  size_t v23; // rax
  bool v24; // zf
  const char *v25; // r15
  int *v26; // rax
  const char *v27; // rax
  int *v28; // rax
  char *v29; // r15
  char **v30; // rax
  char **v31; // r12
  gid_t v32; // eax
  unsigned int v33; // edx
  const char *v34; // rsi
  int v35; // ebx
  int *v36; // rax
  __int64 v37; // rsi
  int *v38; // rax
  const char *v39; // rax
  _OWORD v40[2]; // [rsp+0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-30h]

  if ( (debug[3] & 4) != 0 )
    sub_1000139E0((int)"Launching process %s, with args %s\n", *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
  if ( !qword_1000AED00 )
  {
    qword_1000AED00 = pthread_self();
    qword_1000AED08 = qmutex_create();
  }
  v41 = 0;
  v42 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    if ( !(unsigned __int8)qgetenv("SHELL", (__int64)&v41) )
    {
      v5 = (_DWORD *)v41;
      if ( v42 <= 7 )
      {
        v5 = qvector_reserve((__int64)&v41, (void *)v41, 8u, 1u);
        *(_QWORD *)&v41 = v5;
      }
      *((_QWORD *)&v41 + 1) = 8;
      *(_DWORD *)((char *)v5 + 3) = 1752379246;
      *v5 = 1852400175;
      *(_BYTE *)(v41 + 7) = 0;
    }
  }
  else if ( (unsigned __int8)qisabspath(*(unsigned __int8 **)(a1 + 16)) && !qfileexist(*(const char **)(a1 + 16)) )
  {
    memset(v40, 0, 24);
    sub_100002D00((__int64)v40, "%s: file does not exist", *(const char **)(a1 + 16));
    if ( (debug[3] & 4) != 0 )
    {
      if ( *((_QWORD *)&v40[0] + 1) )
        v4 = *(const char **)&v40[0];
      else
        v4 = _s1;
      sub_1000139E0((int)"%s\n", v4);
    }
    if ( a2 )
    {
      v14 = *(char **)a2;
      v16 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = *(_QWORD *)&v40[0];
      *(_OWORD *)(a2 + 8) = *(_OWORD *)((char *)v40 + 8);
      *(_QWORD *)&v40[0] = v14;
      *(_QWORD *)&v40[1] = v16;
      if ( !v14 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v14 = *(char **)&v40[0];
    if ( *(_QWORD *)&v40[0] )
    {
LABEL_41:
      *((_QWORD *)&v40[0] + 1) = 0;
      qfree(v14);
    }
LABEL_42:
    v10 = 0;
    goto LABEL_43;
  }
  v6 = fork();
  if ( v6 == -1 )
  {
    memset(v40, 0, 24);
    v11 = __error();
    v12 = (const char *)winerr(*v11);
    sub_100002D00((__int64)v40, "fork() failed: %s", v12);
    if ( (debug[3] & 4) != 0 )
    {
      if ( *((_QWORD *)&v40[0] + 1) )
        v13 = *(const char **)&v40[0];
      else
        v13 = _s1;
      sub_1000139E0((int)"%s\n", v13);
    }
    if ( a2 )
    {
      v14 = *(char **)a2;
      v15 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = *(_QWORD *)&v40[0];
      *(_OWORD *)(a2 + 8) = *(_OWORD *)((char *)v40 + 8);
      *(_QWORD *)&v40[0] = v14;
      *(_QWORD *)&v40[1] = v15;
      if ( !v14 )
        goto LABEL_42;
      goto LABEL_41;
    }
    v14 = *(char **)&v40[0];
    if ( *(_QWORD *)&v40[0] )
      goto LABEL_41;
    goto LABEL_42;
  }
  if ( !v6 )
  {
    if ( *(char *)(a1 + 8) < 0 )
      qdetach_tty();
    v18 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v18 + 1) >= 2 && dup2(v18, 0) )
    {
      if ( under_debugger != 1 )
        interr(0xBu);
      goto LABEL_76;
    }
    v19 = *(_QWORD *)(a1 + 40);
    if ( v19 != -1 && v19 != 1 && dup2(v19, 1) != 1 )
    {
      if ( under_debugger != 1 )
        interr(0xCu);
      goto LABEL_76;
    }
    v20 = *(_QWORD *)(a1 + 48);
    if ( v20 != -1 && v20 != 2 && dup2(v20, 2) != 2 )
    {
      if ( under_debugger != 1 )
        interr(0xDu);
LABEL_76:
      BUG();
    }
    v21 = *(_QWORD *)a1;
    v22 = *(char **)(a1 + 56);
    if ( *(_QWORD *)a1 >= 0x39u && v22 != nullptr && *v22 )
    {
      do
      {
        putenv(v22);
        v23 = strlen(v22);
        v24 = v22[v23 + 1] == 0;
        v22 += v23 + 1;
      }
      while ( !v24 );
      v21 = *(_QWORD *)a1;
    }
    v25 = *(const char **)(a1 + 64);
    if ( v21 >= 0x41 && v25 != nullptr && qchdir(*(const char **)(a1 + 64)) == -1 )
    {
      v26 = __error();
      v27 = (const char *)winerr(*v26);
      sub_1000746B0("chdir %s: %s\n", v25, v27);
      v28 = __error();
      _exit(-*v28);
    }
    memset(v40, 0, 24);
    v29 = *(char **)(a1 + 16);
    v30 = (char **)sub_10007F4B0(v29, *(char **)(a1 + 24), *(_DWORD *)(a1 + 8), (__int64)v40, (__int64)&v41);
    v31 = v30;
    if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
      v29 = *v30;
    if ( (unsigned __int8)sub_10007F9A0(v40, a2) )
    {
      setpgid(0, 0);
      v32 = getgid();
      if ( !setgid(v32) )
      {
        v33 = *(_DWORD *)(a1 + 8);
        if ( (v33 & 2) != 0 )
        {
          if ( ptrace(0, 0, nullptr, 0) == -1 )
          {
            v38 = __error();
            v39 = (const char *)winerr(*v38);
            v35 = -1;
            sub_1000746B0("TRACEME: %s", v39);
            goto LABEL_83;
          }
          v33 = *(_DWORD *)(a1 + 8);
          if ( (v33 & 0x202) != 0 )
            goto LABEL_72;
        }
        else if ( (v33 & 0x202) != 0 )
        {
LABEL_72:
          sub_10007FC00(v29, v31, v33, 0);
          v33 = *(_DWORD *)(a1 + 8);
        }
        v35 = 1;
        sub_10007FC00(v29, v31, v33, 1);
LABEL_83:
        _exit(v35);
      }
      v36 = __error();
      v37 = winerr(*v36);
      sub_1000746B0("setgid: %s\n", v37);
    }
    else if ( a2 )
    {
      if ( *(_QWORD *)(a2 + 8) )
        v34 = *(const char **)a2;
      else
        v34 = _s1;
      sub_1000746B0("%s\n", v34);
    }
    v35 = -*__error();
    goto LABEL_83;
  }
  if ( *(char *)(a1 + 8) < 0 )
  {
    v7 = open("/dev/tty", 2);
    if ( v7 > 0 )
    {
      v8 = getsid(0);
      if ( v8 != -1 )
      {
        v9 = tcgetsid(v7);
        if ( v9 != -1 && v8 != v9 )
          ioctl(v7, 0x20007461u, 0);
      }
      close(v7);
    }
  }
  v10 = v6;
  if ( (*(_BYTE *)(a1 + 9) & 4) != 0 )
    qthread_create((void *(__cdecl *)(void *))sub_10007F430, (void *)v6);
LABEL_43:
  if ( (_QWORD)v41 )
  {
    *((_QWORD *)&v41 + 1) = 0;
    qfree((void *)v41);
  }
  return v10;
}
// 1000AE23D: using guessed type char under_debugger;
