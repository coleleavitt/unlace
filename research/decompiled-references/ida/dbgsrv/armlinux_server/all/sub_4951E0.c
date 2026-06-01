/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4951E0
// Address: 0x00000000004951E0

//----- (00000000004951E0) ----------------------------------------------------
void *__fastcall sub_4951E0(__int64 a1, rlim_t *a2)
{
  int v4; // w0
  __pid_t v5; // w0
  void *v6; // x21
  int v7; // w0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  unsigned __int64 v12; // x0
  char *v13; // x19
  const char *v14; // x19
  unsigned int v15; // w19
  char *v16; // x21
  unsigned __int64 v17; // x26
  char *const *v18; // x27
  int v19; // w25
  __int64 v20; // x19
  _QWORD *v21; // x22
  __int64 v22; // x23
  __int64 v23; // x19
  char *v24; // x21
  void *v25; // x0
  unsigned __int64 v26; // x1
  const char *v28; // x2
  __int64 *rlim_cur; // x1
  rlim_t v30; // x1
  void *v31; // x0
  rlim_t v32; // x4
  rlim_t rlim_max; // x5
  rlim_t v34; // x3
  rlim_t v35; // x2
  int *v37; // x0
  const char *v38; // x0
  rlim_t v39; // x1
  void *v40; // x0
  rlim_t v41; // x4
  rlim_t v42; // x5
  rlim_t v43; // x3
  rlim_t v44; // x2
  __int64 *v45; // x1
  char *v46; // x1
  unsigned __int64 v47; // x22
  __int64 v48; // x19
  __int64 v49; // x21
  void *v50; // x0
  char *v51; // x1
  int v52; // w21
  __int64 v53; // x0
  char *v54; // x25
  __int64 v55; // x19
  char *v56; // x26
  int v57; // w3
  __int64 v58; // x0
  int v59; // w1
  const char *v60; // x4
  const char *v61; // x0
  int v62; // w2
  unsigned int v63; // w2
  int v64; // w0
  int v65; // w1
  rlim_t v66; // x19
  int v67; // w1
  __gid_t v68; // w0
  int v69; // w21
  int *v70; // x0
  int *v71; // x19
  int v72; // w0
  const char *v73; // x0
  const char *v74; // x0
  int *v75; // x20
  const char *v76; // x19
  int v77; // w22
  const char *v78; // x21
  const char *v79; // x0
  const char *v80; // x1
  void *v81; // x0
  _BYTE *v82; // x19
  size_t v83; // x21
  rlim_t v84; // x22
  rlim_t v85; // x25
  signed __int64 v86; // x21
  rlim_t v87; // x23
  unsigned __int64 v88; // x0
  char *v89; // x26
  size_t v90; // x19
  void *v91; // x1
  void *v92; // x22
  unsigned __int64 v93; // x2
  char *v94; // x0
  unsigned __int64 v95; // x1
  char *v96; // x2
  char *v97; // x0
  unsigned __int64 v98; // x1
  unsigned __int64 v99; // x3
  unsigned __int64 v100; // x2
  rlim_t v101; // x22
  rlim_t v102; // x25
  rlim_t v103; // x23
  rlim_t *v104; // x1
  size_t v105; // x0
  rlim_t v106; // x23
  size_t v107; // x22
  char *v108; // x0
  unsigned __int64 v109; // x1
  unsigned __int64 v110; // x3
  unsigned __int64 v111; // x2
  rlim_t v112; // x21
  rlim_t v113; // x22
  rlim_t v114; // x19
  rlim_t *v115; // x1
  struct rlimit *v116; // x1
  struct rlimit *v117; // x1
  unsigned __int64 v118; // x0
  int *v119; // x20
  const char *v120; // x0
  const char *v121; // x0
  const char *v122; // x0
  char *path; // [xsp+68h] [xbp-78h]
  void *ptr; // [xsp+78h] [xbp-68h] BYREF
  size_t v125; // [xsp+80h] [xbp-60h]
  unsigned __int64 v126; // [xsp+88h] [xbp-58h]
  void *v127; // [xsp+90h] [xbp-50h] BYREF
  unsigned __int64 v128; // [xsp+98h] [xbp-48h]
  __int64 v129; // [xsp+A0h] [xbp-40h]
  void *v130; // [xsp+A8h] [xbp-38h] BYREF
  unsigned __int64 v131; // [xsp+B0h] [xbp-30h]
  unsigned __int64 v132; // [xsp+B8h] [xbp-28h]
  struct rlimit rlimits; // [xsp+C0h] [xbp-20h] BYREF
  rlim_t v134; // [xsp+D0h] [xbp-10h]

  if ( (debug & 0x4000000) != 0 )
  {
    sub_479E10((int)"Launching process %s, with args %s\n", *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
    if ( qword_524530 )
      goto LABEL_3;
  }
  else if ( qword_524530 )
  {
    goto LABEL_3;
  }
  sub_4944D8();
LABEL_3:
  v4 = *(_DWORD *)(a1 + 8);
  ptr = nullptr;
  v125 = 0;
  v126 = 0;
  if ( (v4 & 8) != 0 )
  {
    if ( !(unsigned __int8)sub_4950A8("SHELL", (__int64)&ptr) )
    {
      v81 = ptr;
      if ( v126 <= 7 )
      {
        v81 = sub_491288((__int64)&ptr, ptr, 8u, 1u);
        ptr = v81;
      }
      v125 = 8;
      qmemcpy(v81, "/bin/sh", 7);
      *((_BYTE *)ptr + 7) = 0;
    }
  }
  else if ( sub_48F628(*(unsigned __int8 **)(a1 + 16)) && !(unsigned __int8)sub_490268(*(const char **)(a1 + 16)) )
  {
    v28 = *(const char **)(a1 + 16);
    rlimits.rlim_cur = 0;
    rlimits.rlim_max = 0;
    v134 = 0;
    sub_40CD68((__int64)&rlimits, "%s: file does not exist", v28);
    if ( (debug & 0x4000000) != 0 )
    {
      rlim_cur = &qword_4B2D48;
      if ( rlimits.rlim_max )
        rlim_cur = (__int64 *)rlimits.rlim_cur;
      sub_479E10((int)"%s\n", rlim_cur);
    }
    v30 = rlimits.rlim_cur;
    v31 = (void *)rlimits.rlim_cur;
    if ( a2 )
    {
      rlim_max = rlimits.rlim_max;
      v32 = v134;
      v31 = (void *)*a2;
      v34 = a2[1];
      rlimits.rlim_cur = *a2;
      rlimits.rlim_max = v34;
      v35 = a2[2];
      *a2 = v30;
      a2[1] = rlim_max;
      a2[2] = v32;
      v134 = v35;
    }
    if ( v31 )
    {
      rlimits.rlim_max = 0;
      j__free(v31);
    }
    goto LABEL_50;
  }
  v5 = fork();
  v6 = (void *)v5;
  if ( v5 == -1 )
  {
    rlimits.rlim_cur = 0;
    rlimits.rlim_max = 0;
    v134 = 0;
    v37 = __errno_location();
    v38 = (const char *)sub_492F00(*v37);
    sub_40CD68((__int64)&rlimits, "fork() failed: %s", v38);
    if ( (debug & 0x4000000) != 0 )
    {
      v45 = &qword_4B2D48;
      if ( rlimits.rlim_max )
        v45 = (__int64 *)rlimits.rlim_cur;
      sub_479E10((int)"%s\n", v45);
    }
    v39 = rlimits.rlim_cur;
    v40 = (void *)rlimits.rlim_cur;
    if ( a2 )
    {
      v42 = rlimits.rlim_max;
      v41 = v134;
      v40 = (void *)*a2;
      v43 = a2[1];
      rlimits.rlim_cur = *a2;
      rlimits.rlim_max = v43;
      v44 = a2[2];
      *a2 = v39;
      a2[1] = v42;
      a2[2] = v41;
      v134 = v44;
    }
    if ( v40 )
    {
      rlimits.rlim_max = 0;
      v6 = nullptr;
      j__free(v40);
      goto LABEL_53;
    }
LABEL_50:
    v6 = nullptr;
    goto LABEL_53;
  }
  v7 = *(_DWORD *)(a1 + 8);
  if ( !(_DWORD)v6 )
  {
    if ( (v7 & 0x40) != 0 )
      goto LABEL_69;
    if ( (v7 & 0x80) != 0 )
LABEL_70:
      sub_493B60();
LABEL_9:
    v8 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v8 + 1) > 1 && dup2(v8, 0) )
    {
      if ( !under_debugger )
        sub_492270(11);
      goto LABEL_68;
    }
    v9 = *(_QWORD *)(a1 + 40);
    if ( ((v9 + 1) & 0xFFFFFFFFFFFFFFFDLL) != 0 && dup2(v9, 1) != 1 )
    {
      if ( !under_debugger )
        sub_492270(12);
      goto LABEL_68;
    }
    v10 = *(_QWORD *)(a1 + 48);
    v11 = v10 == 2 || v10 == -1;
    if ( !v11 && dup2(v10, 2) != 2 )
    {
      if ( !under_debugger )
        sub_492270(13);
      goto LABEL_68;
    }
    v12 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 > 0x38u )
    {
      v13 = *(char **)(a1 + 56);
      if ( v13 && *v13 )
      {
        do
        {
          putenv(v13);
          v13 += strlen(v13) + 1;
        }
        while ( *v13 );
        v12 = *(_QWORD *)a1;
      }
      if ( v12 > 0x40 )
      {
        v14 = *(const char **)(a1 + 64);
        if ( v14 )
        {
          if ( j__chdir(*(const char **)(a1 + 64)) == -1 )
          {
            v119 = __errno_location();
            v120 = (const char *)sub_492F00(*v119);
            sub_486900("chdir %s: %s\n", v14, v120);
            _exit(-*v119);
          }
        }
      }
    }
    v127 = nullptr;
    v128 = 0;
    v15 = *(_DWORD *)(a1 + 8);
    v16 = *(char **)(a1 + 24);
    path = *(char **)(a1 + 16);
    v129 = 0;
    v130 = nullptr;
    v131 = 0;
    v132 = 0;
    if ( (v15 & 8) == 0 )
    {
      if ( v16 )
        sub_480028((__int64)&v130, &v127, v16, v15);
      if ( (v15 & 4) == 0 )
      {
        rlimits.rlim_cur = 0;
        rlimits.rlim_max = 0;
        v134 = 0;
        v82 = v130;
        if ( path )
        {
          v83 = strlen(path);
          rlimits.rlim_cur = (rlim_t)sub_491288((__int64)&rlimits, nullptr, v83 + 1, 1u);
          rlimits.rlim_max = v83 + 1;
          memmove((void *)rlimits.rlim_cur, path, v83);
          *(_BYTE *)(rlimits.rlim_cur + v83) = 0;
          v84 = rlimits.rlim_cur;
          v85 = rlimits.rlim_max;
          v86 = v82 - (_BYTE *)v130;
          v87 = v134;
          v82 = v130;
        }
        else
        {
          v86 = 0;
          v87 = 0;
          v85 = 0;
          v84 = 0;
        }
        v88 = v131;
        rlimits.rlim_cur = 0;
        rlimits.rlim_max = 0;
        v134 = 0;
        if ( v131 + 1 > v132 )
        {
          v82 = sub_491288((__int64)&v130, v82, v131 + 1, 0x18u);
          v88 = v131;
          v130 = v82;
        }
        v89 = &v82[v86];
        memmove(&v82[v86 + 24], &v82[v86], 24 * v88 - v86);
        *(_QWORD *)&v82[v86] = v84;
        *((_QWORD *)v89 + 1) = v85;
        *((_QWORD *)v89 + 2) = v87;
        v17 = ++v131;
        if ( !rlimits.rlim_cur )
          goto LABEL_29;
        rlimits.rlim_max = 0;
        j__free((void *)rlimits.rlim_cur);
      }
      v17 = v131;
LABEL_29:
      v18 = (char *const *)sub_491040(8 * (v17 + 1));
      if ( !v18 )
        sub_43CEB8("prepare_arguments");
      if ( v17 )
      {
        v19 = 0;
        v20 = 0;
        do
        {
          v21 = v130;
          v22 = 3 * v20;
          v23 = v20;
          v24 = (char *)v130 + 8 * v22;
          v25 = *(void **)v24;
          v26 = *((_QWORD *)v24 + 1);
          if ( *((_QWORD *)v24 + 2) > v26 && v25 && v26 != 0 )
          {
            v25 = sub_491148(v25, v26);
            if ( !v25 )
              v25 = (void *)v21[v22];
          }
          *((_QWORD *)v24 + 1) = 0;
          *((_QWORD *)v24 + 2) = 0;
          ++v19;
          v21[v22] = 0;
          v18[v23] = (char *const)v25;
          v20 = v19;
        }
        while ( v19 < v17 );
      }
      v18[v17] = nullptr;
      v46 = (char *)v130;
      if ( v130 )
      {
        v47 = v131;
        if ( v131 )
        {
          v48 = 0;
          v49 = 0;
          do
          {
            v50 = *(void **)&v46[v48];
            v51 = &v46[v48];
            if ( v50 )
            {
              *((_QWORD *)v51 + 1) = 0;
              j__free(v50);
            }
            ++v49;
            v48 += 24;
            v46 = (char *)v130;
          }
          while ( v47 != v49 );
        }
        v131 = 0;
        j__free(v46);
      }
      if ( (*(_DWORD *)(a1 + 8) & 8) != 0 )
        path = *v18;
      if ( v128 )
      {
        v52 = 0;
        v53 = 0;
        while ( 1 )
        {
          v54 = (char *)v127;
          v55 = 48 * v53;
          v56 = (char *)v127 + 48 * v53;
          v57 = *((_DWORD *)v56 + 8);
          v58 = *((_QWORD *)v56 + 2);
          v59 = v57 & 8;
          if ( (v57 & 8) != 0 )
            break;
          if ( !v58 )
          {
            v61 = (const char *)&qword_4B2D48;
            if ( (v57 & 1) != 0 )
              goto LABEL_97;
            v59 = 1089;
            if ( (v57 & 4) != 0 )
              goto LABEL_97;
            v59 = 577;
            goto LABEL_128;
          }
          v60 = *((const char **)v56 + 1);
          v61 = v60;
          if ( *v60 != 38 || (v62 = *((unsigned __int8 *)v60 + 1), (v62 & 0x80) != 0) || (v63 = v62 - 48, v63 > 9) )
          {
            if ( (v57 & 1) == 0 )
            {
              if ( (v57 & 4) != 0 )
                v59 = 1089;
              else
                v59 = 577;
LABEL_96:
              v61 = v60;
            }
LABEL_97:
            v64 = open(v61, v59, 420);
            goto LABEL_98;
          }
          v64 = v63;
LABEL_98:
          if ( v64 == -1 )
          {
            v75 = __errno_location();
            if ( a2 )
            {
              v76 = "to";
              v77 = *(_DWORD *)v56;
              if ( (*((_DWORD *)v56 + 8) & 1LL) != 0 )
                v76 = "from";
              if ( *((_QWORD *)v56 + 2) )
                v78 = *((const char **)v56 + 1);
              else
                v78 = (const char *)&qword_4B2D48;
              v79 = (const char *)sub_492F00(*v75);
              sub_40CD68((__int64)a2, "failed to redirect %d %s %s: %s", v77, v76, v78, v79);
              if ( a2[1] )
                v80 = (const char *)*a2;
              else
                v80 = (const char *)&qword_4B2D48;
              sub_486900("%s\n", v80);
            }
            _exit(-*v75);
          }
          v65 = *(_DWORD *)&v54[v55];
          if ( v64 == v65 )
          {
            fcntl(v64, 2, 0);
          }
          else if ( dup2(v64, v65) != *(_DWORD *)&v54[v55] )
          {
            if ( !under_debugger )
              sub_492270(575);
LABEL_68:
            __break(0x3E8u);
LABEL_69:
            personality(0x40000u);
            if ( (*(_DWORD *)(a1 + 8) & 0x80) != 0 )
              goto LABEL_70;
            goto LABEL_9;
          }
          v53 = ++v52;
          if ( v52 >= v128 )
            goto LABEL_102;
        }
        v59 = 0;
        if ( (v57 & 1) == 0 )
        {
          if ( (v57 & 4) != 0 )
            v59 = 1089;
          else
            v59 = 577;
        }
        if ( v58 )
        {
          v60 = *((const char **)v56 + 1);
          goto LABEL_96;
        }
LABEL_128:
        v61 = (const char *)&qword_4B2D48;
        goto LABEL_97;
      }
LABEL_102:
      if ( getrlimit(RLIMIT_NOFILE, &rlimits)
        || rlimits.rlim_cur <= 1
        || (v66 = rlimits.rlim_cur - 1, rlimits.rlim_cur - 1 <= 2) )
      {
LABEL_113:
        setpgid(0, 0);
        v68 = getgid();
        v69 = setgid(v68);
        v70 = __errno_location();
        v71 = v70;
        if ( !v69 )
        {
          v72 = *(_DWORD *)(a1 + 8);
          if ( (v72 & 2) != 0 )
          {
            if ( ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 )
            {
              v121 = (const char *)sub_492F00(*v71);
              sub_486900("TRACEME: %s", v121);
              _exit(-1);
            }
            v72 = *(_DWORD *)(a1 + 8);
          }
          if ( (v72 & 0x202) != 0 )
          {
            execv(path, v18);
            v73 = (const char *)sub_492F00(*v71);
            sub_486900("execv%s(%s): %s\n", &byte_4B31F0, path, v73);
          }
          execvp(path, v18);
          v74 = (const char *)sub_492F00(*v71);
          sub_486900("execv%s(%s): %s\n", "p", path, v74);
          _exit(1);
        }
        v122 = (const char *)sub_492F00(*v70);
        sub_486900("setgid: %s\n", v122);
        _exit(-*v71);
      }
      while ( 1 )
      {
        if ( (int)v66 <= 9 && v128 )
        {
          v67 = 0;
          if ( *(_DWORD *)v127 == (_DWORD)v66 )
            goto LABEL_112;
          while ( v128 > ++v67 )
          {
            if ( (_DWORD)v66 == *((_DWORD *)v127 + 12 * v67) )
              goto LABEL_112;
          }
        }
        close(v66);
LABEL_112:
        if ( --v66 == 2 )
          goto LABEL_113;
      }
    }
    v90 = v125;
    if ( v125 )
    {
      v92 = sub_491248(v125);
      memcpy(v92, ptr, v90);
      v95 = v131;
      v93 = v131 + 1;
      if ( v131 + 1 <= v132 )
      {
        v94 = (char *)v130;
        goto LABEL_157;
      }
      v91 = v130;
    }
    else
    {
      v91 = nullptr;
      v92 = nullptr;
      v93 = 1;
    }
    v94 = (char *)sub_491288((__int64)&v130, v91, v93, 0x18u);
    v95 = v131;
    v130 = v94;
LABEL_157:
    v96 = &v94[24 * v95];
    *(_QWORD *)v96 = v92;
    *((_QWORD *)v96 + 1) = v90;
    *((_QWORD *)v96 + 2) = v90;
    v17 = ++v131;
    if ( !v16 || !*v16 )
      goto LABEL_29;
    rlimits.rlim_cur = 0;
    rlimits.rlim_max = 0;
    v134 = 0;
    rlimits.rlim_cur = (rlim_t)sub_491288((__int64)&rlimits, nullptr, 3u, 1u);
    rlimits.rlim_max = 3;
    strcpy((char *)rlimits.rlim_cur, "-c");
    v97 = (char *)v130;
    if ( v130 > &rlimits )
    {
      v99 = v131;
      v98 = v132;
      v100 = v131 + 1;
    }
    else
    {
      v99 = v131;
      v98 = v132;
      v100 = v131 + 1;
      if ( &rlimits < (struct rlimit *)((char *)v130 + 24 * v132) )
      {
        v101 = rlimits.rlim_cur;
        v102 = rlimits.rlim_max;
        rlimits.rlim_cur = 0;
        rlimits.rlim_max = 0;
        v103 = v134;
        v134 = 0;
        if ( v132 < v100 )
        {
          v97 = (char *)sub_491288((__int64)&v130, v130, v100, 0x18u);
          v99 = v131;
          v130 = v97;
        }
        v104 = (rlim_t *)&v97[24 * v99];
        *v104 = v101;
        v104[1] = v102;
        v104[2] = v103;
        ++v131;
        if ( rlimits.rlim_cur )
        {
          rlimits.rlim_max = 0;
          j__free((void *)rlimits.rlim_cur);
        }
        goto LABEL_165;
      }
    }
    if ( v98 < v100 )
    {
      v97 = (char *)sub_491288((__int64)&v130, v130, v100, 0x18u);
      v99 = v131;
      v130 = v97;
    }
    v117 = (struct rlimit *)&v97[24 * v99];
    *v117 = rlimits;
    v118 = v131 + 1;
    v117[1].rlim_cur = v134;
    v131 = v118;
LABEL_165:
    rlimits.rlim_cur = 0;
    rlimits.rlim_max = 0;
    v134 = 0;
    v105 = strlen(v16);
    v106 = v105 + 1;
    v107 = v105;
    rlimits.rlim_cur = (rlim_t)sub_491288((__int64)&rlimits, nullptr, v105 + 1, 1u);
    rlimits.rlim_max = v106;
    memmove((void *)rlimits.rlim_cur, v16, v107);
    *(_BYTE *)(rlimits.rlim_cur + v107) = 0;
    v108 = (char *)v130;
    if ( v130 > &rlimits )
    {
      v110 = v131;
      v109 = v132;
      v111 = v131 + 1;
    }
    else
    {
      v110 = v131;
      v109 = v132;
      v111 = v131 + 1;
      if ( &rlimits < (struct rlimit *)((char *)v130 + 24 * v132) )
      {
        v112 = rlimits.rlim_cur;
        v113 = rlimits.rlim_max;
        rlimits.rlim_cur = 0;
        rlimits.rlim_max = 0;
        v114 = v134;
        v134 = 0;
        if ( v132 < v111 )
        {
          v108 = (char *)sub_491288((__int64)&v130, v130, v111, 0x18u);
          v110 = v131;
          v130 = v108;
        }
        v115 = (rlim_t *)&v108[24 * v110];
        *v115 = v112;
        v115[1] = v113;
        v115[2] = v114;
        v17 = ++v131;
        if ( rlimits.rlim_cur )
        {
          rlimits.rlim_max = 0;
          j__free((void *)rlimits.rlim_cur);
          v17 = v131;
        }
        goto LABEL_29;
      }
    }
    if ( v109 < v111 )
    {
      v108 = (char *)sub_491288((__int64)&v130, v130, v111, 0x18u);
      v110 = v131;
      v130 = v108;
    }
    v116 = (struct rlimit *)&v108[24 * v110];
    *v116 = rlimits;
    v17 = v131 + 1;
    v116[1].rlim_cur = v134;
    v131 = v17;
    goto LABEL_29;
  }
  if ( (v7 & 0x80) != 0 )
  {
    sub_493BD8();
    if ( (*(_DWORD *)(a1 + 8) & 0x400) == 0 )
      goto LABEL_53;
  }
  else if ( (v7 & 0x400) == 0 )
  {
    goto LABEL_53;
  }
  sub_494528((void *(*)(void *))sub_494D80, v6);
LABEL_53:
  if ( ptr )
  {
    v125 = 0;
    j__free(ptr);
  }
  return v6;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 524514: using guessed type int debug;
// 52451C: using guessed type char under_debugger;
// 524530: using guessed type __int64 qword_524530;
