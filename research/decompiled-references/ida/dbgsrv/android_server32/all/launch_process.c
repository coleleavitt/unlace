/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: launch_process
// Address: 0x00081330

//----- (00081330) --------------------------------------------------------
void *__fastcall launch_process(int a1, char **a2)
{
  size_t v3; // r6
  void *v4; // r2
  void *v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  unsigned int v10; // r0
  char *v11; // r6
  const char *v12; // r6
  int v13; // r7
  char *v14; // r6
  const char *v15; // r6
  int *v16; // r0
  const char *v17; // r0
  int v18; // r0
  int v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r3
  const char *v23; // r2
  int v24; // r7
  char **v25; // r5
  unsigned int v26; // r4
  const char *v27; // r3
  const char *v28; // r6
  unsigned int v29; // r1
  void *v30; // r0
  void *v31; // r0
  char *v32; // r1
  char **v33; // r5
  char *v34; // r6
  int v35; // r4
  unsigned int v36; // r7
  int i; // r5
  void *v38; // r0
  int v39; // r5
  int v40; // r3
  int v41; // r6
  int v42; // r0
  int *v43; // r1
  unsigned int v44; // r7
  int v45; // r4
  int v46; // r1
  const char *v47; // r0
  int v48; // r1
  __gid_t v49; // r0
  int v50; // r0
  int v51; // r0
  int *v52; // r0
  const char *v53; // r0
  const char *v54; // r1
  char *v55; // r0
  const char *v56; // r1
  const char *v57; // r2
  const char *v58; // r1
  char *v59; // r0
  const char *v60; // r1
  const char *v61; // r2
  int *v63; // r5
  int *v64; // r5
  const char *v65; // r0
  int v66; // r1
  const char *v67; // r6
  int v68; // r7
  int v69; // r0
  const char *v70; // r4
  const char *v71; // r0
  const char *v72; // r1
  int v73; // r0
  int *v74; // r0
  const char *v75; // r0
  int v76; // r0
  int *v77; // r0
  const char *v78; // r0
  int *v79; // r5
  const char *v80; // r0
  char *path; // [sp+Ch] [bp-68h]
  char **argv; // [sp+14h] [bp-60h]
  int v84; // [sp+1Ch] [bp-58h]
  int v85; // [sp+28h] [bp-4Ch]
  const char *v86; // [sp+2Ch] [bp-48h]
  int v87; // [sp+30h] [bp-44h]
  int v88; // [sp+30h] [bp-44h]
  const char *v89; // [sp+38h] [bp-3Ch]
  const char *v90; // [sp+38h] [bp-3Ch]
  int v91; // [sp+38h] [bp-3Ch]
  int v92; // [sp+40h] [bp-34h] BYREF
  unsigned int v93; // [sp+44h] [bp-30h]
  int v94; // [sp+48h] [bp-2Ch]
  void *ptr; // [sp+4Ch] [bp-28h] BYREF
  size_t v96; // [sp+50h] [bp-24h]
  unsigned int v97; // [sp+54h] [bp-20h]
  void *v98; // [sp+58h] [bp-1Ch] BYREF
  int v99; // [sp+5Ch] [bp-18h]
  int v100; // [sp+60h] [bp-14h]
  const char *v101; // [sp+64h] [bp-10h] BYREF
  char *v102; // [sp+68h] [bp-Ch]
  const char *v103; // [sp+6Ch] [bp-8h]

  if ( (byte_E0547 & 4) != 0 )
    sub_6DAE0((int)"Launching process %s, with args %s\n", *(const char **)(a1 + 8), *(const char **)(a1 + 12));
  if ( !dword_E055C )
  {
    dword_E055C = pthread_self();
    dword_E0560 = (int)qmutex_create();
  }
  v96 = 0;
  ptr = nullptr;
  v97 = 0;
  v84 = a1;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
  {
    if ( !qgetenv("SHELL", (int)&ptr) )
    {
      v3 = _strlen_chk("/bin/sh", 8);
      if ( v3 )
      {
        v4 = ptr;
        if ( v97 < v3 + 1 )
        {
          v4 = qvector_reserve((int)&ptr, ptr, v3 + 1, 1u);
          ptr = v4;
        }
        v96 = v3 + 1;
        memmove(v4, "/bin/sh", v3);
        *((_BYTE *)ptr + v3) = 0;
      }
      else
      {
        v96 = 0;
      }
    }
  }
  else if ( qisabspath(*(unsigned __int8 **)(a1 + 8)) && !qfileexist(*(const char **)(a1 + 8)) )
  {
    v102 = nullptr;
    v101 = nullptr;
    v103 = nullptr;
    sub_1DA58((int)&v101, "%s: file does not exist", *(const char **)(a1 + 8));
    if ( (*(_DWORD *)debug & 0x4000000) != 0 )
    {
      if ( v102 )
        v58 = v101;
      else
        v58 = &byte_B3CBE;
      sub_6DAE0((int)"%s\n", v58);
    }
    if ( a2 )
    {
      v59 = *a2;
      *a2 = (char *)v101;
      v60 = a2[1];
      a2[1] = v102;
      v61 = a2[2];
      a2[2] = (char *)v103;
      v101 = v59;
      v102 = (char *)v60;
      v103 = v61;
      if ( !v59 )
        goto LABEL_123;
    }
    else
    {
      v59 = (char *)v101;
      if ( !v101 )
      {
LABEL_123:
        v5 = nullptr;
        goto LABEL_124;
      }
    }
    v102 = nullptr;
    qfree(v59);
    v103 = nullptr;
    v101 = nullptr;
    goto LABEL_123;
  }
  v5 = (void *)fork();
  if ( v5 == (void *)-1 )
  {
    v102 = nullptr;
    v101 = nullptr;
    v103 = nullptr;
    v16 = (int *)_errno(0);
    v17 = (const char *)winerr(*v16);
    sub_1DA58((int)&v101, "fork() failed: %s", v17);
    if ( (*(_DWORD *)debug & 0x4000000) != 0 )
    {
      if ( v102 )
        v54 = v101;
      else
        v54 = &byte_B3CBE;
      sub_6DAE0((int)"%s\n", v54);
    }
    if ( a2 )
    {
      v55 = *a2;
      *a2 = (char *)v101;
      v56 = a2[1];
      a2[1] = v102;
      v57 = a2[2];
      a2[2] = (char *)v103;
      v101 = v55;
      v102 = (char *)v56;
      v103 = v57;
      if ( !v55 )
        goto LABEL_116;
    }
    else
    {
      v55 = (char *)v101;
      if ( !v101 )
      {
LABEL_116:
        v5 = nullptr;
        goto LABEL_124;
      }
    }
    v102 = nullptr;
    qfree(v55);
    v103 = nullptr;
    v101 = nullptr;
    goto LABEL_116;
  }
  if ( !v5 )
  {
    v6 = *(_DWORD *)(v84 + 4);
    if ( (v6 & 0x40) != 0 )
    {
      personality(0x40000u);
      v6 = *(_DWORD *)(v84 + 4);
    }
    if ( (v6 & 0x80) != 0 )
      qdetach_tty();
    v7 = *(_DWORD *)(v84 + 16);
    if ( (unsigned int)(v7 + 1) >= 2 && dup2(v7, 0) )
    {
      if ( !under_debugger )
        interr(11);
    }
    else
    {
      v8 = *(_DWORD *)(v84 + 20);
      if ( v8 == -1 || v8 == 1 || dup2(v8, 1) == 1 )
      {
        v9 = *(_DWORD *)(v84 + 24);
        if ( v9 == -1 || v9 == 2 || dup2(v9, 2) == 2 )
        {
          v10 = *(_DWORD *)v84;
          if ( *(_DWORD *)v84 >= 0x1Du )
          {
            v11 = *(char **)(v84 + 28);
            if ( v11 )
            {
              if ( *v11 )
              {
                do
                {
                  putenv(v11);
                  v11 += strlen(v11) + 1;
                }
                while ( *v11 );
                v10 = *(_DWORD *)v84;
              }
            }
          }
          if ( v10 >= 0x21 )
          {
            v12 = *(const char **)(v84 + 32);
            if ( v12 )
            {
              if ( qchdir(*(const char **)(v84 + 32)) == -1 )
              {
                v79 = (int *)_errno(0);
                v80 = (const char *)winerr(*v79);
                sub_75B3C("chdir %s: %s\n", v12, v80);
                exit(-*v79);
              }
            }
          }
          v93 = 0;
          v92 = 0;
          v94 = 0;
          v13 = *(_DWORD *)(v84 + 4);
          path = *(char **)(v84 + 8);
          v14 = *(char **)(v84 + 12);
          v102 = nullptr;
          v101 = nullptr;
          v103 = nullptr;
          if ( (v13 & 8) != 0 )
          {
            sub_24B4C((int)&v101, (int)&ptr);
            if ( !v14 || !*v14 )
              goto LABEL_62;
            sub_1B09C((int)&v98, "-c");
            sub_265B0((int)&v101, &v98);
            if ( v98 )
            {
              v99 = 0;
              qfree(v98);
              v100 = 0;
              v98 = nullptr;
            }
            sub_1B09C((int)&v98, v14);
            sub_265B0((int)&v101, &v98);
            if ( !v98 )
              goto LABEL_62;
            v99 = 0;
            qfree(v98);
          }
          else
          {
            if ( v14 )
              parse_command_line((int)&v101, &v92, v14, v13);
            if ( (v13 & 4) != 0 )
              goto LABEL_62;
            v15 = v101;
            sub_1B09C((int)&v98, path);
            sub_5F826((void **)&v101, (int)v15, (int *)&v98);
            if ( !v98 )
              goto LABEL_62;
            v99 = 0;
            qfree(v98);
          }
          v100 = 0;
          v98 = nullptr;
LABEL_62:
          v86 = v102;
          v19 = 4 * (_DWORD)v102;
          argv = (char **)qalloc(4 * (_DWORD)v102 + 4);
          if ( !argv )
            sub_41D0C((int)"prepare_arguments", v20, v21, v22);
          v85 = v19;
          v23 = v86;
          if ( v86 )
          {
            v24 = 0;
            v25 = argv;
            v26 = 0;
            do
            {
              v27 = v101;
              v28 = &v101[v24];
              v29 = *(_DWORD *)&v101[v24 + 4];
              if ( *(_DWORD *)&v101[v24 + 8] > v29 )
              {
                if ( v29 )
                {
                  v30 = *(void **)&v101[v24];
                  if ( v30 )
                  {
                    v89 = v101;
                    v87 = *(_DWORD *)&v101[v24 + 4];
                    v31 = qrealloc(v30, v29);
                    v23 = v86;
                    v27 = v89;
                    if ( v31 )
                    {
                      *(_DWORD *)&v89[v24] = v31;
                      *((_DWORD *)v28 + 2) = v87;
                    }
                  }
                }
              }
              *((_DWORD *)v28 + 2) = 0;
              *((_DWORD *)v28 + 1) = 0;
              v32 = *(char **)&v27[v24];
              *(_DWORD *)&v27[v24] = 0;
              *v25++ = v32;
              v24 += 12;
              ++v26;
            }
            while ( v26 < (unsigned int)v23 );
          }
          v33 = argv;
          *(char **)((char *)argv + v85) = nullptr;
          v34 = (char *)v101;
          v35 = v84;
          if ( v101 )
          {
            v90 = v102;
            if ( v102 )
            {
              v36 = 1;
              for ( i = 8; ; i += 12 )
              {
                v38 = *(void **)&v34[i - 8];
                if ( v38 )
                {
                  *(_DWORD *)&v34[i - 4] = 0;
                  qfree(v38);
                  *(_DWORD *)&v34[i - 8] = 0;
                  *(_DWORD *)&v34[i] = 0;
                }
                if ( v36 >= (unsigned int)v90 )
                  break;
                ++v36;
                v34 = (char *)v101;
              }
              v34 = (char *)v101;
              v35 = v84;
              v33 = argv;
            }
            v102 = nullptr;
            qfree(v34);
            v103 = nullptr;
            v101 = nullptr;
          }
          if ( (*(_BYTE *)(v35 + 4) & 8) != 0 )
            path = *v33;
          if ( !v93 )
          {
LABEL_104:
            setpgid(0, 0);
            v49 = getgid();
            v50 = setgid(v49);
            if ( v50 )
            {
              v64 = (int *)_errno(v50);
              v65 = (const char *)winerr(*v64);
              sub_75B3C("setgid: %s\n", v65);
              exit(-*v64);
            }
            v51 = *(_DWORD *)(v84 + 4);
            if ( (v51 & 2) != 0 )
            {
              if ( ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 )
              {
                v52 = (int *)_errno(0);
                v53 = (const char *)winerr(*v52);
                sub_75B3C("TRACEME: %s", v53);
                exit(-1);
              }
              v51 = *(_DWORD *)(v84 + 4);
            }
            if ( (v51 & 0x202) != 0 )
            {
              v73 = execv(path, argv);
              v74 = (int *)_errno(v73);
              v75 = (const char *)winerr(*v74);
              sub_75B3C("execv%s(%s): %s\n", &byte_A0742, path, v75);
            }
            v76 = execvp(path, argv);
            v77 = (int *)_errno(v76);
            v78 = (const char *)winerr(*v77);
            sub_75B3C("execv%s(%s): %s\n", "p", path, v78);
            exit(1);
          }
          v39 = 0;
          v91 = 0;
          while ( 1 )
          {
            v40 = v92;
            v41 = v92 + v39;
            v42 = *(_DWORD *)(v92 + v39 + 16);
            if ( (v42 & 8) != 0 )
              goto LABEL_91;
            v43 = dword_B3DF8;
            if ( *(_DWORD *)(v41 + 8) )
              v43 = *(int **)(v92 + v39 + 4);
            if ( *(_BYTE *)v43 != 38
              || *(char *)(*(_DWORD *)(v41 + 4) + 1) < 0
              || (v44 = *(unsigned __int8 *)(*(_DWORD *)(v41 + 4) + 1) - 48, v45 = 0, v44 >= 0xA) )
            {
LABEL_91:
              v46 = 0;
              if ( !(v42 << 31) )
              {
                v46 = 577;
                if ( (v42 & 4) != 0 )
                  v46 = 1089;
              }
              v88 = v92;
              if ( *(_DWORD *)(v41 + 8) )
                v47 = *(const char **)(v92 + v39 + 4);
              else
                v47 = &byte_B3CBE;
              v44 = open(v47, v46, 420);
              v45 = 1;
              v40 = v88;
              if ( v44 == -1 )
              {
                if ( a2 )
                {
                  v66 = v41;
                  if ( *(unsigned __int8 *)(v41 + 16) << 31 )
                    v67 = "from";
                  else
                    v67 = "to";
                  v68 = *(_DWORD *)(v88 + v39);
                  v69 = *(_DWORD *)(v66 + 8);
                  if ( v69 )
                  {
                    v69 = v88 + v39;
                    v70 = *(const char **)(v88 + v39 + 4);
                  }
                  else
                  {
                    v70 = &byte_B3CBE;
                  }
                  v63 = (int *)_errno(v69);
                  v71 = (const char *)winerr(*v63);
                  sub_1DA58((int)a2, "failed to redirect %d %s %s: %s", v68, v67, v70, v71);
                  if ( a2[1] )
                    v72 = *a2;
                  else
                    v72 = &byte_B3CBE;
                  sub_75B3C("%s\n", v72);
                }
                else
                {
                  v63 = (int *)_errno(0);
                }
                exit(-*v63);
              }
            }
            v48 = *(_DWORD *)(v40 + v39);
            if ( v44 == v48 )
            {
              fcntl(v44, 2, 0);
            }
            else
            {
              if ( dup2(v44, v48) != *(_DWORD *)(v40 + v39) )
              {
                if ( !under_debugger )
                  interr(575);
                goto LABEL_151;
              }
              if ( v45 )
                close(v44);
            }
            v39 += 28;
            if ( ++v91 >= v93 )
              goto LABEL_104;
          }
        }
        if ( !under_debugger )
          interr(13);
      }
      else if ( !under_debugger )
      {
        interr(12);
      }
    }
LABEL_151:
    __debugbreak();
  }
  v18 = *(_DWORD *)(v84 + 4);
  if ( (v18 & 0x80) != 0 )
  {
    qcontrol_tty();
    v18 = *(_DWORD *)(v84 + 4);
  }
  if ( (v18 & 0x400) != 0 )
    qthread_create((void *(*)(void *))sub_81CE0, v5);
LABEL_124:
  if ( ptr )
  {
    v96 = 0;
    qfree(ptr);
    v97 = 0;
    ptr = nullptr;
  }
  return v5;
}
// 819A4: variable 'v20' is possibly undefined
// 819A4: variable 'v21' is possibly undefined
// 819A4: variable 'v22' is possibly undefined
// 192F8: using guessed type int __fastcall _errno(_DWORD);
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// A0742: using guessed type char byte_A0742;
// B3CBE: using guessed type char byte_B3CBE;
// B3DF8: using guessed type int dword_B3DF8[41];
// E0547: using guessed type char byte_E0547;
// E0550: using guessed type char under_debugger;
// E055C: using guessed type int dword_E055C;
// E0560: using guessed type int dword_E0560;
