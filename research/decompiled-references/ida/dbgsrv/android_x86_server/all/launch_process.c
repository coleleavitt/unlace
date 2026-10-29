/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: launch_process
// Address: 0x000B4FA0

//----- (000B4FA0) --------------------------------------------------------
void *__cdecl launch_process(int a1, char **a2)
{
  char *v2; // eax
  size_t v3; // esi
  void *v4; // eax
  int v5; // ecx
  void *v6; // esi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  char *v11; // esi
  size_t v12; // eax
  bool v13; // zf
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  char *v17; // esi
  char v18; // si
  int v19; // esi
  int *v20; // eax
  void *v21; // eax
  char *v22; // eax
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // edi
  int v26; // esi
  char *v27; // edi
  unsigned int v28; // edx
  void *v29; // eax
  void *v30; // eax
  char *v31; // eax
  char *v32; // esi
  unsigned int v33; // ecx
  int i; // edi
  void *v35; // eax
  int v36; // esi
  int v37; // edi
  char *v38; // edx
  int v39; // eax
  int *v40; // ecx
  int v41; // ecx
  int v42; // edi
  int v43; // ecx
  int v44; // ecx
  const char *v45; // eax
  int v46; // eax
  __gid_t v47; // eax
  int v48; // ecx
  int v49; // eax
  int v50; // ecx
  int *v51; // eax
  void *v52; // eax
  char *v53; // eax
  char *v54; // ecx
  char *v55; // edx
  char *v56; // eax
  char *v57; // ecx
  char *v58; // edx
  int *v60; // esi
  char *v61; // ecx
  const char *v62; // edi
  char *v63; // eax
  int *v64; // esi
  void *v65; // eax
  void *v66; // eax
  char *v67; // eax
  int v68; // ecx
  int *v69; // eax
  void *v70; // eax
  int v71; // ecx
  int *v72; // eax
  void *v73; // eax
  int *v74; // esi
  void *v75; // eax
  char *v76; // [esp+8h] [ebp-84h]
  int v77; // [esp+20h] [ebp-6Ch]
  unsigned int v78; // [esp+20h] [ebp-6Ch]
  char *v79; // [esp+20h] [ebp-6Ch]
  char *v80; // [esp+20h] [ebp-6Ch]
  unsigned int v81; // [esp+24h] [ebp-68h]
  char v82; // [esp+24h] [ebp-68h]
  int v83; // [esp+28h] [ebp-64h]
  unsigned int v84; // [esp+28h] [ebp-64h]
  int v85; // [esp+28h] [ebp-64h]
  int v86; // [esp+28h] [ebp-64h]
  char *v87; // [esp+2Ch] [ebp-60h]
  char *const *v88; // [esp+30h] [ebp-5Ch]
  char *v89; // [esp+38h] [ebp-54h] BYREF
  unsigned int v90; // [esp+3Ch] [ebp-50h]
  int v91; // [esp+40h] [ebp-4Ch]
  int v92; // [esp+48h] [ebp-44h] BYREF
  size_t v93; // [esp+4Ch] [ebp-40h]
  unsigned int v94; // [esp+50h] [ebp-3Ch]
  int v95; // [esp+58h] [ebp-34h] BYREF
  int v96; // [esp+5Ch] [ebp-30h]
  int v97; // [esp+60h] [ebp-2Ch]
  char *v98; // [esp+68h] [ebp-24h] BYREF
  unsigned int v99; // [esp+6Ch] [ebp-20h]
  char *v100; // [esp+70h] [ebp-1Ch]
  unsigned int v101; // [esp+78h] [ebp-14h]

  v101 = __readgsdword(0x14u);
  if ( (debug & 0x4000000) != 0 )
    sub_96C50((int)"Launching process %s, with args %s\n", *(_DWORD *)(a1 + 8));
  if ( !dword_13E358 )
  {
    dword_13E358 = pthread_self();
    dword_13E35C = (int)qmutex_create();
  }
  v92 = 0;
  v93 = 0;
  v94 = 0;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
  {
    if ( !(unsigned __int8)qgetenv("SHELL", (int)&v92) )
    {
      v3 = __strlen_chk("/bin/sh", 8);
      if ( v3 )
      {
        v4 = (void *)v92;
        if ( v94 < v3 + 1 )
        {
          v4 = qvector_reserve((int)&v92, (void *)v92, v3 + 1, 1u);
          v92 = (int)v4;
        }
        v93 = v3 + 1;
        memmove(v4, "/bin/sh", v3);
        *(_BYTE *)(v92 + v3) = 0;
      }
      else
      {
        v93 = 0;
      }
    }
  }
  else if ( qisabspath(*(_BYTE **)(a1 + 8)) && !qfileexist(*(char **)(a1 + 8)) )
  {
    v98 = nullptr;
    v99 = 0;
    v100 = nullptr;
    sub_1F400((int)&v98, "%s: file does not exist", *(_DWORD *)(a1 + 8));
    if ( (debug & 0x4000000) != 0 )
    {
      if ( v99 )
        LOBYTE(v2) = (_BYTE)v98;
      else
        v2 = byte_EF875;
      sub_96C50((int)&off_EC379, (char)v2);
    }
    if ( a2 )
    {
      v56 = *a2;
      v57 = a2[1];
      v58 = a2[2];
      *a2 = v98;
      a2[1] = (char *)v99;
      a2[2] = v100;
      v98 = v56;
      v99 = (unsigned int)v57;
      v100 = v58;
      if ( !v56 )
        goto LABEL_121;
      goto LABEL_119;
    }
    v56 = v98;
    if ( v98 )
    {
LABEL_119:
      v99 = 0;
      qfree(v56);
      goto LABEL_120;
    }
LABEL_121:
    v6 = nullptr;
    goto LABEL_122;
  }
  v6 = (void *)fork();
  if ( v6 == (void *)-1 )
  {
    v98 = nullptr;
    v99 = 0;
    v100 = nullptr;
    v20 = (int *)__errno(v5);
    v21 = winerr(*v20);
    sub_1F400((int)&v98, "fork() failed: %s", v21);
    if ( (debug & 0x4000000) != 0 )
    {
      if ( v99 )
        LOBYTE(v22) = (_BYTE)v98;
      else
        v22 = byte_EF875;
      sub_96C50((int)&off_EC379, (char)v22);
    }
    if ( a2 )
    {
      v53 = *a2;
      v54 = a2[1];
      v55 = a2[2];
      *a2 = v98;
      a2[1] = (char *)v99;
      a2[2] = v100;
      v98 = v53;
      v99 = (unsigned int)v54;
      v100 = v55;
      if ( !v53 )
        goto LABEL_121;
    }
    else
    {
      v53 = v98;
      if ( !v98 )
        goto LABEL_121;
    }
    v99 = 0;
    qfree(v53);
LABEL_120:
    v98 = nullptr;
    v100 = nullptr;
    goto LABEL_121;
  }
  if ( !v6 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    if ( (v7 & 0x40) != 0 )
    {
      personality(0x40000u);
      v7 = *(_DWORD *)(a1 + 4);
    }
    if ( (v7 & 0x80u) != 0 )
      qdetach_tty();
    if ( (unsigned int)(*(_DWORD *)(a1 + 16) + 1) >= 2 && dup2(*(_DWORD *)(a1 + 16), 0) )
    {
      if ( !(_BYTE)under_debugger )
        interr(11);
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 20);
      if ( v8 == -1 || v8 == 1 || dup2(*(_DWORD *)(a1 + 20), 1) == 1 )
      {
        v9 = *(_DWORD *)(a1 + 24);
        if ( v9 == -1 || v9 == 2 || dup2(*(_DWORD *)(a1 + 24), 2) == 2 )
        {
          v10 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 >= 0x1Du )
          {
            v11 = *(char **)(a1 + 28);
            if ( v11 )
            {
              if ( *v11 )
              {
                do
                {
                  putenv(v11);
                  v12 = strlen(v11);
                  v13 = v11[v12 + 1] == 0;
                  v11 += v12 + 1;
                }
                while ( !v13 );
                v10 = *(_DWORD *)a1;
              }
            }
          }
          if ( v10 >= 0x21 )
          {
            v14 = *(_DWORD *)(a1 + 32);
            if ( v14 )
            {
              if ( qchdir(*(char **)(a1 + 32)) == -1 )
              {
                v74 = (int *)__errno(v15);
                v75 = winerr(*v74);
                sub_A3B80("chdir %s: %s\n", v14, v75);
                _exit(-*v74);
              }
            }
          }
          v89 = nullptr;
          v90 = 0;
          v91 = 0;
          v16 = *(_DWORD *)(a1 + 4);
          v87 = *(char **)(a1 + 8);
          v17 = *(char **)(a1 + 12);
          v98 = nullptr;
          v99 = 0;
          v100 = nullptr;
          if ( (v16 & 8) != 0 )
          {
            sub_2AC80((int)&v98, (int)&v92);
            if ( !v17 || !*v17 )
              goto LABEL_58;
            sub_1B530((int)&v95, "-c");
            sub_2DAC0((int)&v98, (char *)&v95);
            if ( v95 )
            {
              v96 = 0;
              qfree((void *)v95);
              v95 = 0;
              v97 = 0;
            }
            sub_1B530((int)&v95, v17);
            sub_2DAC0((int)&v98, (char *)&v95);
            if ( !v95 )
              goto LABEL_58;
            v96 = 0;
            qfree((void *)v95);
          }
          else
          {
            if ( v17 )
            {
              v76 = v17;
              v18 = v16;
              parse_command_line((int)&v98, &v89, v76, v16);
              LOBYTE(v16) = v18;
            }
            if ( (v16 & 4) != 0 )
              goto LABEL_58;
            v19 = (int)v98;
            sub_1B530((int)&v95, v87);
            sub_84BD0((void **)&v98, v19, &v95);
            if ( !v95 )
              goto LABEL_58;
            v96 = 0;
            qfree((void *)v95);
          }
          v95 = 0;
          v97 = 0;
LABEL_58:
          v81 = v99;
          v88 = (char *const *)qalloc(4 * v99 + 4);
          if ( !v88 )
            sub_54EC0((int)"prepare_arguments");
          v24 = v81;
          if ( v81 )
          {
            v25 = 0;
            v26 = 2;
            do
            {
              v77 = v25;
              v27 = v98;
              v28 = *(_DWORD *)&v98[4 * v26 - 4];
              if ( *(_DWORD *)&v98[4 * v26] > v28 )
              {
                if ( v28 )
                {
                  v29 = *(void **)&v98[4 * v26 - 8];
                  if ( v29 )
                  {
                    v83 = *(_DWORD *)&v98[4 * v26 - 4];
                    v30 = qrealloc(v29, v28);
                    v24 = v81;
                    if ( v30 )
                    {
                      *(_DWORD *)&v27[4 * v26 - 8] = v30;
                      *(_DWORD *)&v27[4 * v26] = v83;
                    }
                  }
                }
              }
              *(_DWORD *)&v27[4 * v26] = 0;
              *(_DWORD *)&v27[4 * v26 - 4] = 0;
              v31 = *(char **)&v27[4 * v26 - 8];
              *(_DWORD *)&v27[4 * v26 - 8] = 0;
              v88[v77] = v31;
              v25 = v77 + 1;
              v26 += 3;
            }
            while ( v77 + 1 < v24 );
          }
          v88[v24] = nullptr;
          v32 = v98;
          if ( v98 )
          {
            v84 = v99;
            if ( v99 )
            {
              v33 = 1;
              for ( i = 0; ; i += 12 )
              {
                v35 = *(void **)&v32[i];
                if ( v35 )
                {
                  v78 = v33;
                  *(_DWORD *)&v32[i + 4] = 0;
                  qfree(v35);
                  *(_DWORD *)&v32[i] = 0;
                  *(_DWORD *)&v32[i + 8] = 0;
                  v33 = v78;
                }
                if ( v33 >= v84 )
                  break;
                v32 = v98;
                ++v33;
              }
              v32 = v98;
            }
            v99 = 0;
            qfree(v32);
            v98 = nullptr;
            v100 = nullptr;
          }
          if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
            v87 = *v88;
          if ( !v90 )
          {
LABEL_100:
            setpgid(0, 0);
            v47 = getgid();
            if ( !setgid(v47) )
            {
              v49 = *(_DWORD *)(a1 + 4);
              if ( (v49 & 2) != 0 )
              {
                if ( ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 )
                {
                  v51 = (int *)__errno(v50);
                  v52 = winerr(*v51);
                  sub_A3B80("TRACEME: %s", v52);
                  _exit(-1);
                }
                v49 = *(_DWORD *)(a1 + 4);
              }
              if ( (v49 & 0x202) != 0 )
              {
                execv(v87, v88);
                v69 = (int *)__errno(v68);
                v70 = winerr(*v69);
                sub_A3B80("execv%s(%s): %s\n", &byte_DCEE2, v87, v70);
              }
              execvp(v87, v88);
              v72 = (int *)__errno(v71);
              v73 = winerr(*v72);
              sub_A3B80("execv%s(%s): %s\n", "p", v87, v73);
              _exit(1);
            }
            v64 = (int *)__errno(v48);
            v65 = winerr(*v64);
            sub_A3B80("setgid: %s\n", v65);
            _exit(-*v64);
          }
          v36 = 0;
          v37 = 0;
          while ( 1 )
          {
            v38 = v89;
            v39 = *(_DWORD *)&v89[v36 + 16];
            v79 = v89;
            v85 = v37;
            if ( (v39 & 8) != 0 )
              goto LABEL_88;
            v40 = dword_F3564;
            if ( *(_DWORD *)&v89[v36 + 8] )
              v40 = *(int **)&v89[v36 + 4];
            if ( *(_BYTE *)v40 != 38
              || (v41 = *(unsigned __int8 *)(*(_DWORD *)&v89[v36 + 4] + 1), (v41 & 0x80u) != 0)
              || (v38 = v89, (unsigned int)(v41 - 48) > 9) )
            {
LABEL_88:
              v44 = 0;
              if ( (v39 & 1) == 0 )
                v44 = ((*(_DWORD *)&v89[v36 + 16] & 4) << 7) + 577;
              if ( *(_DWORD *)&v38[v36 + 8] )
                v45 = *(const char **)&v38[v36 + 4];
              else
                v45 = byte_EF875;
              v42 = open(v45, v44, 420);
              LOBYTE(v43) = 1;
              v38 = v79;
              if ( v42 == -1 )
              {
LABEL_125:
                if ( a2 )
                {
                  v61 = v79;
                  v62 = "from";
                  if ( (v79[v36 + 16] & 1) == 0 )
                    v62 = "to";
                  v86 = *(_DWORD *)&v79[v36];
                  if ( *(_DWORD *)&v79[v36 + 8] )
                    v63 = *(char **)&v79[v36 + 4];
                  else
                    v63 = byte_EF875;
                  v80 = v63;
                  v60 = (int *)__errno(v61);
                  v66 = winerr(*v60);
                  sub_1F400((int)a2, "failed to redirect %d %s %s: %s", v86, v62, v80, v66);
                  if ( a2[1] )
                    v67 = *a2;
                  else
                    v67 = byte_EF875;
                  sub_A3B80((char *)&off_EC379, v67);
                }
                else
                {
                  v60 = (int *)__errno(v43);
                }
                _exit(-*v60);
              }
            }
            else
            {
              v42 = (char)v41 - 48;
              v43 = 0;
              if ( v42 == -1 )
                goto LABEL_125;
            }
            v46 = *(_DWORD *)&v38[v36];
            if ( v42 == v46 )
            {
              fcntl(v42, 2, 0);
            }
            else
            {
              v82 = v43;
              if ( dup2(v42, v46) != *(_DWORD *)&v79[v36] )
              {
                if ( !(_BYTE)under_debugger )
                  interr(575);
                goto LABEL_152;
              }
              if ( v82 )
                close(v42);
            }
            v37 = v85 + 1;
            v36 += 28;
            if ( v85 + 1 >= v90 )
              goto LABEL_100;
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
LABEL_152:
    BUG();
  }
  v23 = *(_DWORD *)(a1 + 4);
  if ( (v23 & 0x80u) != 0 )
  {
    qcontrol_tty();
    if ( (*(_DWORD *)(a1 + 4) & 0x400) == 0 )
      goto LABEL_122;
    goto LABEL_105;
  }
  if ( (v23 & 0x400) != 0 )
LABEL_105:
    qthread_create((void *(*)(void *))sub_B5F10, v6);
LABEL_122:
  if ( v92 )
  {
    v93 = 0;
    qfree((void *)v92);
    v92 = 0;
    v94 = 0;
  }
  return v6;
}
// B5328: variable 'v5' is possibly undefined
// B5722: variable 'v50' is possibly undefined
// B58B0: variable 'v43' is possibly undefined
// B5908: variable 'v48' is possibly undefined
// B59DC: variable 'v68' is possibly undefined
// B5A23: variable 'v71' is possibly undefined
// B5A7B: variable 'v15' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// DCEE2: using guessed type char byte_DCEE2;
// EC379: using guessed type _UNKNOWN *off_EC379;
// F3564: using guessed type int dword_F3564[41];
// 13E340: using guessed type int debug;
// 13E34C: using guessed type int under_debugger;
// 13E358: using guessed type int dword_13E358;
// 13E35C: using guessed type int dword_13E35C;
