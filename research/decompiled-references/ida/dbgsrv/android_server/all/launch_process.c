/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: launch_process
// Address: 0x00000000000C20D4

//----- (00000000000C20D4) ----------------------------------------------------
__int64 __fastcall launch_process(__int64 a1, __int64 a2)
{
  const char *align; // x1
  __int128 v5; // q1
  __int64 v6; // x9
  void *v7; // x0
  __int64 v8; // x0
  size_t v9; // x21
  struct __pthread_internal_list *prev; // x8
  __int64 v11; // x0
  int v12; // w21
  int v13; // w8
  __int64 v14; // x0
  pthread_mutex_t *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  __int64 v23; // x0
  __int64 v24; // x0
  unsigned __int64 v25; // x8
  char *v26; // x21
  char *v27; // x21
  int v28; // t1
  const char *v29; // x21
  __int64 v30; // x0
  unsigned int v31; // w23
  char *v32; // x22
  char *v33; // x29
  __int64 v34; // x22
  int *v35; // x0
  const char *v36; // x0
  const char *v37; // x1
  __int128 v38; // q1
  __int64 v39; // x9
  void *v40; // x0
  int v41; // w19
  int v42; // w22
  __pid_t v43; // w0
  __int64 v44; // x19
  struct __pthread_internal_list *v45; // x0
  unsigned __int64 v46; // x19
  char **v47; // x0
  char **v48; // x9
  __int64 v49; // x20
  int v50; // w21
  __int64 v51; // x24
  unsigned __int64 v52; // x23
  void *v53; // x0
  char *v54; // x8
  char *v56; // x0
  unsigned __int64 v57; // x19
  __int64 v58; // x20
  unsigned __int64 v59; // x21
  void *v60; // x8
  char *v61; // x22
  unsigned __int64 v62; // x21
  int v63; // w24
  __int64 v64; // x20
  int *v65; // x22
  __int64 v66; // x9
  __int64 v67; // x10
  char **v68; // x9
  char *v69; // x10
  int v70; // w9
  unsigned int v71; // w23
  int v72; // w19
  int v73; // w1
  __int64 v74; // x26
  _QWORD *v75; // x26
  __int64 v76; // t1
  const char *v77; // x0
  __int64 v78; // x0
  __gid_t v79; // w0
  pthread_mutex_t *v80; // x0
  int v81; // w8
  int *v82; // x0
  const char *v83; // x0
  int *v85; // x20
  int *v86; // x19
  const char *v87; // x0
  int v88; // w24
  const char *v89; // x22
  const char *v90; // x23
  const char *v91; // x0
  const char *v92; // x1
  __int64 v93; // x0
  int *v94; // x0
  const char *v95; // x0
  __int64 v96; // x0
  int *v97; // x0
  const char *v98; // x0
  int *v99; // x19
  const char *v100; // x0
  __int64 *p_align; // x19
  char *v102; // x20
  unsigned __int64 v103; // x21
  __int64 v104; // x22
  unsigned __int64 i; // x23
  char *v106; // x24
  void *v107; // x0
  char v108; // [xsp+0h] [xbp-F0h]
  char **argv; // [xsp+20h] [xbp-D0h]
  pthread_mutex_t v110; // [xsp+28h] [xbp-C8h] BYREF
  unsigned __int64 v111; // [xsp+50h] [xbp-A0h]
  void *ptr; // [xsp+58h] [xbp-98h] BYREF
  __int64 v113; // [xsp+60h] [xbp-90h]
  __int64 v114; // [xsp+68h] [xbp-88h]
  pthread_mutex_t v115; // [xsp+70h] [xbp-80h] BYREF

  v115.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (byte_168DDF & 4) != 0 )
    sub_A64CC((__int64)"Launching process %s, with args %s\n", *(const char **)(a1 + 16), *(const char **)(a1 + 24));
  if ( !qword_168E08 )
  {
    qword_168E08 = pthread_self();
    qword_168E10 = (__int64)qmutex_create();
  }
  v111 = 0;
  *(_OWORD *)(&v110.__align + 3) = 0u;
  if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
  {
    if ( (qgetenv("SHELL", (__int64)&v110.__list) & 1) == 0 )
    {
      v8 = __strlen_chk("/bin/sh", 8);
      v9 = v8;
      if ( v8 )
      {
        prev = v110.__list.__prev;
        if ( v111 < v8 + 1 )
        {
          prev = (struct __pthread_internal_list *)qvector_reserve(
                                                     (pthread_mutex_t *)(&v110.__align + 3),
                                                     v110.__list.__prev,
                                                     v8 + 1,
                                                     1u);
          v110.__list.__prev = prev;
        }
        v110.__list.__next = (struct __pthread_internal_list *)(v9 + 1);
        memmove(prev, "/bin/sh", v9);
        *((_BYTE *)&v110.__list.__prev->__prev + v9) = 0;
      }
      else
      {
        v110.__list.__next = nullptr;
      }
    }
  }
  else if ( (qisabspath(*(unsigned __int8 **)(a1 + 16)) & 1) != 0 && !qfileexist(*(const char **)(a1 + 16)) )
  {
    memset(&v115, 0, 24);
    sub_3C748((__int64)&v115, "%s: file does not exist", *(const char **)(a1 + 16));
    if ( (byte_168DDF & 4) != 0 )
    {
      if ( *(&v115.__align + 1) )
        align = (const char *)v115.__align;
      else
        align = &byte_F154B;
      sub_A64CC((__int64)"%s\n", align);
    }
    if ( a2 )
    {
      v5 = *(_OWORD *)a2;
      v6 = *(_QWORD *)(a2 + 16);
      *(_OWORD *)a2 = *(_OWORD *)&v115.__lock;
      v7 = (void *)v5;
      *(_QWORD *)(a2 + 16) = *(&v115.__align + 2);
      *(_OWORD *)&v115.__lock = v5;
      *(&v115.__align + 2) = v6;
      if ( !(_QWORD)v5 )
        goto LABEL_131;
    }
    else
    {
      v7 = (void *)v115.__align;
      if ( !v115.__align )
        goto LABEL_131;
    }
    *(&v115.__align + 1) = 0;
    qfree(v7);
LABEL_130:
    v115.__align = 0;
    *(&v115.__align + 2) = 0;
    goto LABEL_131;
  }
  v11 = fork();
  v12 = v11;
  if ( (_DWORD)v11 != -1 )
  {
    if ( (_DWORD)v11 )
    {
      if ( (*(_BYTE *)(a1 + 8) & 0x80) != 0 )
      {
        v41 = __open_2("/dev/tty", 2);
        if ( v41 >= 1 )
        {
          v42 = syscall(156, 0);
          if ( v42 != -1 )
          {
            v43 = tcgetsid(v41);
            if ( v43 != -1 && v43 != v42 )
              ioctl(v41, 0x540Eu, 0);
          }
          close(v41);
        }
      }
      v44 = v12;
      if ( (*(_BYTE *)(a1 + 9) & 4) != 0 )
        qthread_create((void *(*)(void *))sub_C2DF0, (void *)v12);
      v45 = v110.__list.__prev;
      if ( v110.__list.__prev )
        goto LABEL_132;
      return v44;
    }
    v13 = *(_DWORD *)(a1 + 8);
    if ( (v13 & 0x40) != 0 )
    {
      personality(0x40000u);
      v13 = *(_DWORD *)(a1 + 8);
    }
    if ( (v13 & 0x80) != 0 )
      qdetach_tty();
    v14 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v14 + 1) >= 2 && (v15 = (pthread_mutex_t *)dup2(v14, 0), (_DWORD)v15) )
    {
      if ( under_debugger )
        goto LABEL_162;
      v15 = interr(11);
    }
    else
    {
      v23 = *(_QWORD *)(a1 + 40);
      if ( v23 == -1 || v23 == 1 || (v15 = (pthread_mutex_t *)dup2(v23, 1), (_DWORD)v15 == 1) )
      {
        v24 = *(_QWORD *)(a1 + 48);
        if ( v24 == -1 || v24 == 2 || (v15 = (pthread_mutex_t *)dup2(v24, 2), (_DWORD)v15 == 2) )
        {
          v25 = *(_QWORD *)a1;
          if ( *(_QWORD *)a1 >= 0x39u )
          {
            v26 = *(char **)(a1 + 56);
            if ( v26 )
            {
              if ( *v26 )
              {
                do
                {
                  putenv(v26);
                  v27 = &v26[strlen(v26)];
                  v28 = (unsigned __int8)v27[1];
                  v26 = v27 + 1;
                }
                while ( v28 );
                v25 = *(_QWORD *)a1;
              }
            }
          }
          if ( v25 >= 0x41 )
          {
            v29 = *(const char **)(a1 + 64);
            if ( v29 )
            {
              v30 = qchdir(*(const char **)(a1 + 64));
              if ( (_DWORD)v30 == -1 )
              {
                v99 = (int *)__errno(v30);
                v100 = (const char *)winerr(*v99);
                sub_B27D8("chdir %s: %s\n", v29, v100);
                _exit(-*v99);
              }
            }
          }
          memset(&v110, 0, 24);
          v31 = *(_DWORD *)(a1 + 8);
          v33 = *(char **)(a1 + 16);
          v32 = *(char **)(a1 + 24);
          memset(&v115, 0, 24);
          if ( (v31 & 8) != 0 )
          {
            sub_46FA4(&v115, (__int64)&v110.__list);
            if ( v32 && *v32 )
            {
              sub_39140(&ptr, "-c");
              sub_494CC((char *)&v115, (char *)&ptr);
              if ( ptr )
              {
                v113 = 0;
                qfree(ptr);
                ptr = nullptr;
                v114 = 0;
              }
              sub_39140(&ptr, v32);
              sub_494CC((char *)&v115, (char *)&ptr);
              if ( ptr )
              {
                v113 = 0;
                qfree(ptr);
                goto LABEL_75;
              }
            }
          }
          else
          {
            if ( v32 )
              parse_command_line((char **)&v115, &v110, v32, v31);
            if ( (v31 & 4) == 0 )
            {
              v34 = v115.__align;
              sub_39140(&ptr, v33);
              sub_93278((__int64)&v115, v34, (__int64 *)&ptr);
              if ( ptr )
              {
                v113 = 0;
                qfree(ptr);
LABEL_75:
                ptr = nullptr;
                v114 = 0;
              }
            }
          }
          v46 = *(&v115.__align + 1);
          v47 = (char **)qalloc((void *)(8 * *(&v115.__align + 1) + 8));
          v48 = v47;
          if ( !v47 )
            sub_6B464((__int64)"prepare_arguments");
          argv = v47;
          if ( v46 )
          {
            v49 = 0;
            v50 = 1;
            do
            {
              v51 = v115.__align + 24 * v49;
              v52 = *(_QWORD *)(v51 + 8);
              if ( *(_QWORD *)(v51 + 16) > v52 )
              {
                if ( v52 )
                {
                  if ( *(_QWORD *)v51 )
                  {
                    v53 = qrealloc(*(void **)v51, v52);
                    v48 = argv;
                    if ( v53 )
                    {
                      *(_QWORD *)v51 = v53;
                      *(_QWORD *)(v51 + 16) = v52;
                    }
                  }
                }
              }
              *(_QWORD *)(v51 + 8) = 0;
              *(_QWORD *)(v51 + 16) = 0;
              v54 = *(char **)v51;
              *(_QWORD *)v51 = 0;
              v48[v49] = v54;
              v49 = v50;
            }
            while ( v46 > v50++ );
          }
          v48[v46] = nullptr;
          v56 = (char *)v115.__align;
          if ( v115.__align )
          {
            v57 = *(&v115.__align + 1);
            if ( *(&v115.__align + 1) )
            {
              v58 = 0;
              v59 = 1;
              v60 = *(void **)v115.__align;
              if ( *(_QWORD *)v115.__align )
                goto LABEL_90;
              while ( v59 < v57 )
              {
                v56 = (char *)v115.__align;
                ++v59;
                v58 += 24;
                v60 = *(void **)(v115.__align + v58);
                if ( v60 )
                {
LABEL_90:
                  v61 = &v56[v58];
                  *(_QWORD *)&v56[v58 + 8] = 0;
                  qfree(v60);
                  *(_QWORD *)v61 = 0;
                  *((_QWORD *)v61 + 2) = 0;
                }
              }
              v56 = (char *)v115.__align;
            }
            *(&v115.__align + 1) = 0;
            qfree(v56);
            v48 = argv;
            v115.__align = 0;
            *(&v115.__align + 2) = 0;
          }
          if ( (*(_BYTE *)(a1 + 8) & 8) != 0 )
            v33 = *v48;
          if ( !*(&v110.__align + 1) )
          {
LABEL_122:
            setpgid(0, 0);
            v79 = getgid();
            v80 = (pthread_mutex_t *)setgid(v79);
            if ( !(_DWORD)v80 )
            {
              v81 = *(_DWORD *)(a1 + 8);
              if ( (v81 & 2) != 0 )
              {
                if ( ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 )
                {
                  v82 = (int *)__errno(-1);
                  v83 = (const char *)winerr(*v82);
                  sub_B27D8("TRACEME: %s", v83);
                  _exit(-1);
                }
                v81 = *(_DWORD *)(a1 + 8);
              }
              if ( (v81 & 0x202) != 0 )
              {
                v93 = execv(v33, argv);
                v94 = (int *)__errno(v93);
                v95 = (const char *)winerr(*v94);
                sub_B27D8("execv%s(%s): %s\n", "", v33, v95);
              }
              v96 = execvp(v33, argv);
              v97 = (int *)__errno(v96);
              v98 = (const char *)winerr(*v97);
              sub_B27D8("execv%s(%s): %s\n", "p", v33, v98);
              _exit(1);
            }
LABEL_138:
            v86 = (int *)__errno(v80);
            v87 = (const char *)winerr(*v86);
            sub_B27D8("setgid: %s\n", v87);
            _exit(-*v86);
          }
          v62 = 0;
          v63 = 1;
          while ( 1 )
          {
            v64 = v110.__align;
            v65 = (int *)(v110.__align + 48 * v62);
            if ( (v65[8] & 8) != 0
              || ((v66 = v110.__align + 48 * v62, v67 = *(_QWORD *)(v66 + 16), v68 = (char **)(v66 + 8), !v67)
                ? (v69 = &byte_1028F3)
                : (v69 = *v68),
                  *v69 != 38 || (v70 = (*v68)[1], v70 < 0) || (v71 = (unsigned __int8)v70 - 48, v71 >= 0xA)) )
            {
              if ( (v65[8] & 1) != 0 )
              {
                v73 = 0;
              }
              else if ( (v65[8] & 4) != 0 )
              {
                v73 = 1089;
              }
              else
              {
                v73 = 577;
              }
              v74 = v110.__align + 48 * v62;
              v76 = *(_QWORD *)(v74 + 16);
              v75 = (_QWORD *)(v74 + 16);
              if ( v76 )
                v77 = *(const char **)(v110.__align + 48 * v62 + 8);
              else
                v77 = &byte_F154B;
              v78 = open(v77, v73, 420);
              v71 = v78;
              if ( (_DWORD)v78 == -1 )
              {
                if ( a2 )
                {
                  v88 = *v65;
                  if ( (v65[8] & 1) != 0 )
                    v89 = "from";
                  else
                    v89 = "to";
                  if ( *v75 )
                    v90 = *(const char **)(v64 + 48 * v62 + 8);
                  else
                    v90 = &byte_F154B;
                  v85 = (int *)__errno(v78);
                  v91 = (const char *)winerr(*v85);
                  sub_3C748(a2, "failed to redirect %d %s %s: %s", v88, v89, v90, v91);
                  if ( *(_QWORD *)(a2 + 8) )
                    v92 = *(const char **)a2;
                  else
                    v92 = &byte_F154B;
                  sub_B27D8("%s\n", v92);
                }
                else
                {
                  v85 = (int *)__errno(v78);
                }
                _exit(-*v85);
              }
              v72 = 1;
            }
            else
            {
              v72 = 0;
            }
            if ( v71 == *v65 )
            {
              fcntl(v71, 2, 0);
            }
            else
            {
              v15 = (pthread_mutex_t *)dup2(v71, *v65);
              if ( (_DWORD)v15 != *v65 )
              {
                if ( !under_debugger )
                {
                  v80 = interr(575);
                  goto LABEL_138;
                }
LABEL_162:
                __break(1u);
                p_align = &v15->__align;
                v102 = (char *)v110.__align;
                if ( v110.__align )
                {
                  v103 = *(&v110.__align + 1);
                  if ( *(&v110.__align + 1) )
                  {
                    v104 = 0;
                    for ( i = 1; ; ++i )
                    {
                      v106 = &v102[v104];
                      v107 = *(void **)&v102[v104 + 8];
                      if ( v107 )
                      {
                        *((_QWORD *)v106 + 2) = 0;
                        qfree(v107);
                        *((_QWORD *)v106 + 1) = 0;
                        *(_QWORD *)&v102[v104 + 24] = 0;
                      }
                      if ( i >= v103 )
                        break;
                      v102 = (char *)v110.__align;
                      v104 += 48;
                    }
                    v102 = (char *)v110.__align;
                  }
                  *(&v110.__align + 1) = 0;
                  qfree(v102);
                  v110.__align = 0;
                  *(&v110.__align + 2) = 0;
                }
                if ( v110.__list.__prev )
                {
                  v110.__list.__next = nullptr;
                  qfree(v110.__list.__prev);
                  v110.__list.__prev = nullptr;
                  v111 = 0;
                }
                Unwind_Resume(p_align, v16, v17, v18, v19, v20, v21, v22, v108);
              }
              if ( v72 )
                close(v71);
            }
            v62 = v63++;
            if ( *(&v110.__align + 1) <= v62 )
              goto LABEL_122;
          }
        }
LABEL_160:
        if ( !under_debugger )
          v15 = interr(13);
        goto LABEL_162;
      }
    }
    if ( under_debugger )
      goto LABEL_162;
    v15 = interr(12);
    goto LABEL_160;
  }
  memset(&v115, 0, 24);
  v35 = (int *)__errno(v11);
  v36 = (const char *)winerr(*v35);
  sub_3C748((__int64)&v115, "fork() failed: %s", v36);
  if ( (byte_168DDF & 4) != 0 )
  {
    if ( *(&v115.__align + 1) )
      v37 = (const char *)v115.__align;
    else
      v37 = &byte_F154B;
    sub_A64CC((__int64)"%s\n", v37);
  }
  if ( !a2 )
  {
    v40 = (void *)v115.__align;
    if ( !v115.__align )
      goto LABEL_131;
    goto LABEL_127;
  }
  v38 = *(_OWORD *)a2;
  v39 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)a2 = *(_OWORD *)&v115.__lock;
  v40 = (void *)v38;
  *(_QWORD *)(a2 + 16) = *(&v115.__align + 2);
  *(_OWORD *)&v115.__lock = v38;
  *(&v115.__align + 2) = v39;
  if ( (_QWORD)v38 )
  {
LABEL_127:
    *(&v115.__align + 1) = 0;
    qfree(v40);
    goto LABEL_130;
  }
LABEL_131:
  v44 = 0;
  v45 = v110.__list.__prev;
  if ( v110.__list.__prev )
  {
LABEL_132:
    v110.__list.__next = nullptr;
    qfree(v45);
    v110.__list.__prev = nullptr;
    v111 = 0;
  }
  return v44;
}
// C2CB8: variable 'v16' is possibly undefined
// C2CB8: variable 'v17' is possibly undefined
// C2CB8: variable 'v18' is possibly undefined
// C2CB8: variable 'v19' is possibly undefined
// C2CB8: variable 'v20' is possibly undefined
// C2CB8: variable 'v21' is possibly undefined
// C2CB8: variable 'v22' is possibly undefined
// C2CB8: variable 'v108' is possibly undefined
// 0: using guessed type int dword_0;
// 36DE0: using guessed type __int64 __fastcall __open_2(_QWORD, _QWORD);
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 1028F3: using guessed type char byte_1028F3;
// 167DD0: using guessed type __int64[512];
// 168DDF: using guessed type char byte_168DDF;
// 168DF0: using guessed type char under_debugger;
// 168E08: using guessed type __int64 qword_168E08;
// 168E10: using guessed type __int64 qword_168E10;
