/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: launch_process
// Address: 0x0000000100076790

//----- (0000000100076790) ----------------------------------------------------
__int64 __fastcall launch_process(__int64 a1, __int64 a2)
{
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  __int64 v7; // x5
  __int64 v8; // x6
  __int64 v9; // x7
  char *v10; // x0
  __int64 v11; // x8
  _DWORD *v12; // x1
  pid_t v13; // w0
  pid_t v14; // w21
  int v15; // w20
  pid_t v16; // w22
  pid_t v17; // w0
  __int64 v18; // x20
  void *v19; // x0
  int *v20; // x0
  char v21; // w0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  __int64 v28; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  unsigned __int64 v33; // x8
  char *v34; // x21
  char *v35; // x21
  int v36; // t1
  __int64 v37; // x21
  bool v38; // zf
  int *v39; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  int *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  char *v55; // x21
  char **v56; // x0
  char *const *v57; // x22
  gid_t v58; // w0
  unsigned int v59; // w2
  int v60; // w19
  char *v61; // x0
  char *v62; // x8
  int *v63; // x0
  int *v64; // x0
  char v65; // w0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x5
  __int64 v71; // x6
  __int64 v72; // x7
  void *v73; // [xsp+18h] [xbp-58h] BYREF
  __int128 v74; // [xsp+20h] [xbp-50h]
  void *__ptr; // [xsp+30h] [xbp-40h] BYREF
  __int64 v76; // [xsp+38h] [xbp-38h]
  unsigned __int64 v77; // [xsp+40h] [xbp-30h]

  if ( (debug & 0x4000000) != 0 )
    sub_100012E04();
  if ( !qword_1000A63B8 )
  {
    qword_1000A63B8 = (__int64)pthread_self();
    qword_1000A63C0 = (__int64)qmutex_create();
  }
  __ptr = nullptr;
  v76 = 0;
  v77 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    if ( (qgetenv("SHELL", &__ptr) & 1) == 0 )
    {
      v12 = __ptr;
      if ( v77 <= 7 )
      {
        v12 = qvector_reserve(&__ptr, __ptr, 8u, 1u);
        __ptr = v12;
      }
      v76 = 8;
      *(_DWORD *)((char *)v12 + 3) = 1752379246;
      *v12 = 1852400175;
      *((_BYTE *)__ptr + 7) = 0;
    }
  }
  else if ( qisabspath(*(unsigned __int8 **)(a1 + 16)) && !qfileexist(*(const char **)(a1 + 16)) )
  {
    v73 = nullptr;
    v74 = 0u;
    sub_10000295C((char **)&v73, "%s: file does not exist", v4, v5, v6, v7, v8, v9, *(_QWORD *)(a1 + 16));
    if ( (debug & 0x4000000) != 0 )
      sub_100012E04();
    if ( a2 )
    {
      v10 = *(char **)a2;
      v11 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = v73;
      *(_OWORD *)(a2 + 8) = v74;
      v73 = v10;
      *((_QWORD *)&v74 + 1) = v11;
      if ( !v10 )
        goto LABEL_39;
    }
    else
    {
      v10 = (char *)v73;
      if ( !v73 )
        goto LABEL_39;
    }
    goto LABEL_38;
  }
  v13 = fork();
  v14 = v13;
  if ( v13 != -1 )
  {
    if ( v13 )
    {
      if ( (*(_BYTE *)(a1 + 8) & 0x80) != 0 )
      {
        v15 = open("/dev/tty", 2);
        if ( v15 >= 1 )
        {
          v16 = getsid(0);
          if ( v16 != -1 )
          {
            v17 = tcgetsid(v15);
            if ( v17 != -1 && v16 != v17 )
              ioctl(v15, 0x20007461u, 0);
          }
          close(v15);
        }
      }
      v18 = v14;
      if ( (*(_BYTE *)(a1 + 9) & 4) != 0 )
        qthread_create((void *(__cdecl *)(void *))sub_100076F2C, (void *)v14);
      v19 = __ptr;
      if ( __ptr )
        goto LABEL_40;
      return v18;
    }
    if ( (*(_BYTE *)(a1 + 8) & 0x80) != 0 )
      qdetach_tty();
    v30 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v30 + 1) >= 2 && dup2(v30, 0) )
    {
      if ( under_debugger != 1 )
        interr(11);
LABEL_77:
      __break(1u);
LABEL_78:
      if ( !a2 )
      {
LABEL_84:
        v60 = -*__error();
        goto LABEL_85;
      }
      if ( *(_QWORD *)(a2 + 8) )
        v61 = *(char **)a2;
      else
        v61 = &byte_10007AE40;
      v62 = "%s\n";
LABEL_83:
      sub_10006C28C(v62, v48, v49, v50, v51, v52, v53, v54, (char)v61);
      goto LABEL_84;
    }
    v31 = *(_QWORD *)(a1 + 40);
    if ( v31 != -1 && v31 != 1 && dup2(v31, 1) != 1 )
    {
      if ( under_debugger != 1 )
        interr(12);
      goto LABEL_77;
    }
    v32 = *(_QWORD *)(a1 + 48);
    if ( v32 != -1 && v32 != 2 && dup2(v32, 2) != 2 )
    {
      if ( under_debugger != 1 )
        interr(13);
      goto LABEL_77;
    }
    v33 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 >= 0x39u )
    {
      v34 = *(char **)(a1 + 56);
      if ( v34 )
      {
        if ( *v34 )
        {
          do
          {
            putenv(v34);
            v35 = &v34[strlen(v34)];
            v36 = (unsigned __int8)v35[1];
            v34 = v35 + 1;
          }
          while ( v36 );
          v33 = *(_QWORD *)a1;
        }
      }
    }
    v37 = *(_QWORD *)(a1 + 64);
    v38 = v33 < 0x41 || v37 == 0;
    if ( !v38 && qchdir(*(const char **)(a1 + 64)) == -1 )
    {
      v39 = __error();
      winerr(*v39);
      sub_10006C28C("chdir %s: %s\n", v40, v41, v42, v43, v44, v45, v46, v37);
      v47 = __error();
      _exit(-*v47);
    }
    v73 = nullptr;
    v74 = 0u;
    v55 = *(char **)(a1 + 16);
    v56 = (char **)sub_100076FD8(v55, *(char **)(a1 + 24), *(_DWORD *)(a1 + 8), (__int64)&v73, (__int64)&__ptr);
    v57 = v56;
    if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
      v55 = *v56;
    if ( (sub_10007743C(&v73, (char **)a2) & 1) == 0 )
      goto LABEL_78;
    setpgid(0, 0);
    v58 = getgid();
    if ( setgid(v58) )
    {
      v63 = __error();
      LOBYTE(v61) = (unsigned __int8)winerr(*v63);
      v62 = "setgid: %s\n";
      goto LABEL_83;
    }
    v59 = *(_DWORD *)(a1 + 8);
    if ( (v59 & 2) != 0 )
    {
      if ( ptrace(0, 0, nullptr, 0) == -1 )
      {
        v64 = __error();
        v65 = (unsigned __int8)winerr(*v64);
        sub_10006C28C("TRACEME: %s", v66, v67, v68, v69, v70, v71, v72, v65);
        v60 = -1;
        goto LABEL_85;
      }
      v59 = *(_DWORD *)(a1 + 8);
    }
    if ( (v59 & 0x202) != 0 )
    {
      sub_1000776C4(v55, v57, v59, 0);
      v59 = *(_DWORD *)(a1 + 8);
    }
    v60 = 1;
    sub_1000776C4(v55, v57, v59, 1);
LABEL_85:
    _exit(v60);
  }
  v73 = nullptr;
  v74 = 0u;
  v20 = __error();
  v21 = (unsigned __int8)winerr(*v20);
  sub_10000295C((char **)&v73, "fork() failed: %s", v22, v23, v24, v25, v26, v27, v21);
  if ( (debug & 0x4000000) != 0 )
    sub_100012E04();
  if ( !a2 )
  {
    v10 = (char *)v73;
    if ( !v73 )
      goto LABEL_39;
    goto LABEL_38;
  }
  v10 = *(char **)a2;
  v28 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)a2 = v73;
  *(_OWORD *)(a2 + 8) = v74;
  v73 = v10;
  *((_QWORD *)&v74 + 1) = v28;
  if ( v10 )
  {
LABEL_38:
    *(_QWORD *)&v74 = 0;
    qfree(v10);
  }
LABEL_39:
  v18 = 0;
  v19 = __ptr;
  if ( __ptr )
  {
LABEL_40:
    v76 = 0;
    qfree(v19);
  }
  return v18;
}
// 100076848: variable 'v4' is possibly undefined
// 100076848: variable 'v5' is possibly undefined
// 100076848: variable 'v6' is possibly undefined
// 100076848: variable 'v7' is possibly undefined
// 100076848: variable 'v8' is possibly undefined
// 100076848: variable 'v9' is possibly undefined
// 1000769DC: variable 'v22' is possibly undefined
// 1000769DC: variable 'v23' is possibly undefined
// 1000769DC: variable 'v24' is possibly undefined
// 1000769DC: variable 'v25' is possibly undefined
// 1000769DC: variable 'v26' is possibly undefined
// 1000769DC: variable 'v27' is possibly undefined
// 100076B5C: variable 'v40' is possibly undefined
// 100076B5C: variable 'v41' is possibly undefined
// 100076B5C: variable 'v42' is possibly undefined
// 100076B5C: variable 'v43' is possibly undefined
// 100076B5C: variable 'v44' is possibly undefined
// 100076B5C: variable 'v45' is possibly undefined
// 100076B5C: variable 'v46' is possibly undefined
// 100076CC8: variable 'v48' is possibly undefined
// 100076CC8: variable 'v49' is possibly undefined
// 100076CC8: variable 'v50' is possibly undefined
// 100076CC8: variable 'v51' is possibly undefined
// 100076CC8: variable 'v52' is possibly undefined
// 100076CC8: variable 'v53' is possibly undefined
// 100076CC8: variable 'v54' is possibly undefined
// 100076D30: variable 'v66' is possibly undefined
// 100076D30: variable 'v67' is possibly undefined
// 100076D30: variable 'v68' is possibly undefined
// 100076D30: variable 'v69' is possibly undefined
// 100076D30: variable 'v70' is possibly undefined
// 100076D30: variable 'v71' is possibly undefined
// 100076D30: variable 'v72' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A5908: using guessed type int debug;
// 1000A590D: using guessed type char under_debugger;
// 1000A5F98: using guessed type __int64 qword_1000A5F98[128];
// 1000A63B8: using guessed type __int64 qword_1000A63B8;
// 1000A63C0: using guessed type __int64 qword_1000A63C0;
