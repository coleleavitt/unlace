/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A7D8
// Address: 0x0007A7D8

//----- (0007A7D8) --------------------------------------------------------
void *__fastcall sub_7A7D8(int a1, char **a2)
{
  int v4; // r2
  __pid_t v5; // r0
  void *v6; // r5
  int v7; // r3
  const char *v9; // r2
  const char *v10; // r1
  char *v11; // r0
  const char *v12; // r4
  const char *v13; // r1
  const char *v14; // r2
  const char *v15; // r3
  int v16; // r0
  int v17; // r0
  int v18; // r0
  bool v19; // zf
  unsigned int v20; // r3
  char *v21; // r5
  const char *v22; // r5
  unsigned int v23; // r5
  unsigned __int8 *v24; // r7
  int v25; // r5
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r9
  int v30; // r7
  char *const *v31; // r11
  char *v32; // r5
  void *v33; // r0
  __int64 v34; // kr08_8
  bool v35; // zf
  int *v36; // r0
  const char *v37; // r0
  const char *v38; // r1
  char *v39; // r0
  const char *v40; // r4
  const char *v41; // r1
  const char *v42; // r2
  const char *v43; // r3
  int v44; // r7
  char *v45; // r3
  int v46; // r10
  int v47; // r9
  void *v48; // r0
  char *v49; // r3
  unsigned int v50; // r7
  int v51; // r9
  int *v52; // r5
  int v53; // r2
  int v54; // r3
  int v55; // r1
  const char *v56; // r12
  const char *v57; // r0
  int v58; // r3
  unsigned int v59; // r3
  int v60; // r0
  int v61; // r5
  _DWORD *v62; // r2
  int v63; // r3
  int v64; // t1
  __gid_t v65; // r0
  int v66; // r5
  int *v67; // r0
  int *v68; // r6
  int v69; // r3
  const char *v70; // r0
  const char *v71; // r0
  int *v72; // r0
  int *v73; // r4
  int v74; // r7
  const char *v75; // r9
  const char *v76; // r5
  const char *v77; // r0
  const char *v78; // r1
  void *v79; // r1
  size_t v80; // r5
  unsigned int v81; // r2
  void *v82; // r1
  void *v83; // r9
  char *v84; // r0
  int v85; // r3
  char *v86; // r2
  int v87; // r3
  char *v88; // r1
  unsigned int v89; // r0
  int v90; // r3
  unsigned int v91; // r12
  int v92; // r9
  __int64 v93; // r10
  int v94; // r3
  size_t v95; // r9
  char *v96; // r1
  unsigned int v97; // r0
  int v98; // r3
  unsigned int v99; // r12
  int v100; // r5
  int v101; // r9
  int v102; // r7
  int v103; // r3
  char *v104; // r2
  _BYTE *v105; // r7
  size_t v106; // r9
  int v107; // r11
  int v108; // r9
  int v109; // r3
  _BYTE *v110; // r0
  char *v111; // r10
  int v112; // r3
  char *v113; // r3
  int v114; // r2
  int v115; // r3
  char *v116; // r3
  int v117; // r1
  int *v118; // r4
  const char *v119; // r0
  const char *v120; // r0
  const char *v121; // r0
  int v122; // [sp+8h] [bp-4Ch]
  int v123; // [sp+8h] [bp-4Ch]
  char *const *v124; // [sp+Ch] [bp-48h]
  char *s; // [sp+10h] [bp-44h]
  void *src; // [sp+1Ch] [bp-38h] BYREF
  size_t v127; // [sp+20h] [bp-34h]
  unsigned int v128; // [sp+24h] [bp-30h]
  void *v129; // [sp+28h] [bp-2Ch] BYREF
  unsigned int v130; // [sp+2Ch] [bp-28h]
  int v131; // [sp+30h] [bp-24h]
  void *ptr; // [sp+34h] [bp-20h] BYREF
  int v133; // [sp+38h] [bp-1Ch]
  unsigned int v134; // [sp+3Ch] [bp-18h]
  _BYTE rlimits[12]; // [sp+40h] [bp-14h] BYREF

  if ( (debug & 0x4000000) != 0 )
    sub_68430((int)"Launching process %s, with args %s\n", *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 12), 32 * debug);
  if ( !dword_D5C0C )
    sub_79F7C();
  v4 = *(_DWORD *)(a1 + 4);
  src = nullptr;
  v127 = 0;
  v128 = 0;
  if ( (v4 & 8) != 0 )
  {
    if ( !sub_7A72C("SHELL", (int)&src) )
    {
      v79 = src;
      if ( v128 <= 7 )
      {
        v79 = sub_77EB0((int)&src, src, 8u, 1u);
        src = v79;
      }
      v127 = 8;
      qmemcpy(v79, "/bin/sh", 7);
      *((_BYTE *)src + 7) = 0;
    }
  }
  else if ( sub_76C54(*(unsigned __int8 **)(a1 + 8)) && !sub_77404(*(_DWORD *)(a1 + 8)) )
  {
    v9 = *(const char **)(a1 + 8);
    memset(rlimits, 0, sizeof(rlimits));
    sub_1873C((int)rlimits, "%s: file does not exist", v9);
    if ( (debug & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)&rlimits[4] )
        v10 = *(const char **)rlimits;
      else
        v10 = (const char *)&dword_8DA5C;
      sub_68430((int)"%s\n", v10);
    }
    v11 = *(char **)rlimits;
    if ( a2 )
    {
      v12 = a2[1];
      v11 = *a2;
      v13 = *(const char **)&rlimits[4];
      v14 = a2[2];
      *a2 = *(char **)rlimits;
      v15 = *(const char **)&rlimits[8];
      *(_QWORD *)rlimits = __PAIR64__((unsigned int)v12, (unsigned int)v11);
      a2[1] = (char *)v13;
      *(_DWORD *)&rlimits[8] = v14;
      a2[2] = (char *)v15;
    }
    if ( v11 )
    {
      *(_DWORD *)&rlimits[4] = 0;
      sub_77E08(v11);
    }
    goto LABEL_26;
  }
  v5 = fork();
  v6 = (void *)v5;
  if ( v5 == -1 )
  {
    memset(rlimits, 0, sizeof(rlimits));
    v36 = _errno_location();
    v37 = (const char *)sub_792D8(*v36);
    sub_1873C((int)rlimits, "fork() failed: %s", v37);
    if ( (debug & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)&rlimits[4] )
        v38 = *(const char **)rlimits;
      else
        v38 = (const char *)&dword_8DA5C;
      sub_68430((int)"%s\n", v38);
    }
    v39 = *(char **)rlimits;
    if ( a2 )
    {
      v40 = a2[1];
      v39 = *a2;
      v41 = *(const char **)&rlimits[4];
      v42 = a2[2];
      *a2 = *(char **)rlimits;
      v43 = *(const char **)&rlimits[8];
      *(_QWORD *)rlimits = __PAIR64__((unsigned int)v40, (unsigned int)v39);
      a2[1] = (char *)v41;
      *(_DWORD *)&rlimits[8] = v42;
      a2[2] = (char *)v43;
    }
    if ( v39 )
    {
      v6 = nullptr;
      *(_DWORD *)&rlimits[4] = 0;
      sub_77E08(v39);
      goto LABEL_13;
    }
LABEL_26:
    v6 = nullptr;
    goto LABEL_13;
  }
  v7 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      personality(0x40000u);
      if ( (*(_DWORD *)(a1 + 4) & 0x80) == 0 )
        goto LABEL_29;
    }
    else if ( (v7 & 0x80) == 0 )
    {
LABEL_29:
      v16 = *(_DWORD *)(a1 + 16);
      if ( (unsigned int)(v16 + 1) > 1 && dup2(v16, 0) )
      {
        if ( !under_debugger )
          sub_78AFC(11);
        goto LABEL_68;
      }
      v17 = *(_DWORD *)(a1 + 20);
      if ( ((v17 + 1) & 0xFFFFFFFD) != 0 && dup2(v17, 1) != 1 )
      {
        if ( !under_debugger )
          sub_78AFC(12);
        goto LABEL_68;
      }
      v18 = *(_DWORD *)(a1 + 24);
      v19 = v18 == -1;
      if ( v18 != -1 )
        v19 = v18 == 2;
      if ( !v19 && dup2(v18, 2) != 2 )
      {
        if ( !under_debugger )
          sub_78AFC(13);
        goto LABEL_68;
      }
      v20 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 > 0x1Cu )
      {
        v21 = *(char **)(a1 + 28);
        if ( v21 && *v21 )
        {
          do
          {
            putenv(v21);
            v21 += strlen(v21) + 1;
          }
          while ( *v21 );
          v20 = *(_DWORD *)a1;
        }
        if ( v20 > 0x20 )
        {
          v22 = *(const char **)(a1 + 32);
          if ( v22 )
          {
            if ( sub_76E88(*(const char **)(a1 + 32)) == -1 )
            {
              v118 = _errno_location();
              v119 = (const char *)sub_792D8(*v118);
              sub_709D0("chdir %s: %s\n", v22, v119);
              exit(-*v118);
            }
          }
        }
      }
      v23 = *(_DWORD *)(a1 + 4);
      v129 = nullptr;
      v130 = 0;
      v131 = 0;
      ptr = nullptr;
      v133 = 0;
      v134 = 0;
      v24 = *(unsigned __int8 **)(a1 + 12);
      s = *(char **)(a1 + 8);
      if ( (v23 & 8) == 0 )
      {
        if ( v24 )
          sub_6C4D0((char **)&ptr, &v129, v24, v23);
        v25 = v23 & 4;
        if ( !v25 )
        {
          memset(rlimits, 0, sizeof(rlimits));
          v105 = ptr;
          if ( s )
          {
            v106 = strlen(s);
            *(_DWORD *)rlimits = sub_77EB0((int)rlimits, nullptr, v106 + 1, 1u);
            *(_DWORD *)&rlimits[4] = v106 + 1;
            memmove(*(void **)rlimits, s, v106);
            *(_BYTE *)(*(_DWORD *)rlimits + v106) = 0;
            v107 = *(_DWORD *)&rlimits[8];
            v108 = *(_DWORD *)rlimits;
            v25 = v105 - (_BYTE *)ptr;
            v105 = ptr;
            v123 = *(_DWORD *)&rlimits[4];
          }
          else
          {
            v107 = 0;
            v123 = 0;
            v108 = 0;
          }
          v109 = v133;
          memset(rlimits, 0, sizeof(rlimits));
          if ( v133 + 1 > v134 )
          {
            v110 = sub_77EB0((int)&ptr, v105, v133 + 1, 0xCu);
            v109 = v133;
            v105 = v110;
            ptr = v110;
          }
          v111 = &v105[v25];
          memmove(&v105[v25 + 12], &v105[v25], 12 * v109 - v25);
          *(_DWORD *)&v105[v25] = v108;
          *((_DWORD *)v111 + 1) = v123;
          *((_DWORD *)v111 + 2) = v107;
          v122 = ++v133;
          if ( !*(_DWORD *)rlimits )
            goto LABEL_48;
          *(_DWORD *)&rlimits[4] = 0;
          sub_77E08(*(void **)rlimits);
        }
        v122 = v133;
LABEL_48:
        v124 = (char *const *)sub_77D94(4 * (v122 + 1));
        if ( !v124 )
          sub_3E310((int)"prepare_arguments", v26, v27, v28);
        if ( v122 )
        {
          v29 = 0;
          v30 = 0;
          v31 = v124 - 1;
          do
          {
            v32 = (char *)ptr + v30;
            v33 = *(void **)((char *)ptr + v30);
            v34 = *(_QWORD *)((char *)ptr + v30 + 4);
            if ( HIDWORD(v34) > (unsigned int)v34 )
            {
              v35 = (_DWORD)v34 == 0;
              if ( (_DWORD)v34 )
                v35 = v33 == nullptr;
              if ( !v35 )
              {
                v33 = sub_77E0C(v33, v34);
                if ( !v33 )
                  v33 = *(void **)v32;
              }
            }
            ++v29;
            *((_DWORD *)v32 + 1) = 0;
            *((_DWORD *)v32 + 2) = 0;
            v30 += 12;
            *(_DWORD *)v32 = 0;
            *((_DWORD *)v31++ + 1) = v33;
          }
          while ( v29 != v122 );
        }
        v44 = 0;
        v124[v122] = nullptr;
        v45 = (char *)ptr;
        if ( ptr )
        {
          v46 = v133;
          if ( v133 )
          {
            v47 = 0;
            do
            {
              v48 = *(void **)&v45[v44];
              v49 = &v45[v44];
              if ( v48 )
              {
                *((_DWORD *)v49 + 1) = 0;
                sub_77E08(v48);
              }
              ++v47;
              v44 += 12;
              v45 = (char *)ptr;
            }
            while ( v46 != v47 );
          }
          v133 = 0;
          sub_77E08(v45);
        }
        if ( (*(_DWORD *)(a1 + 4) & 8) != 0 )
          s = *v124;
        if ( v130 )
        {
          v50 = 0;
          v51 = 0;
          while ( 1 )
          {
            v52 = (int *)((char *)v129 + v51);
            v53 = *(_DWORD *)((char *)v129 + v51 + 16);
            v54 = *(_DWORD *)((char *)v129 + v51 + 8);
            v55 = v53 & 8;
            if ( (v53 & 8) != 0 )
              break;
            if ( v54 )
            {
              v56 = (const char *)v52[1];
              v57 = v56;
              if ( *v56 != 38 || (v58 = *((unsigned __int8 *)v56 + 1), (v58 & 0x80) != 0) || (v59 = v58 - 48, v59 > 9) )
              {
                v54 = v53 << 31;
                if ( (v53 & 1) == 0 )
                {
                  v55 = 577;
                  if ( (v53 & 4) != 0 )
                    v55 = 1089;
LABEL_91:
                  v57 = v56;
                }
                goto LABEL_92;
              }
              v60 = v59;
            }
            else
            {
              if ( (v53 & 1) != 0 )
                goto LABEL_119;
              if ( (v53 & 4) == 0 )
              {
                v55 = 577;
                goto LABEL_119;
              }
              v60 = open((const char *)&dword_8DA5C, 1089, 420, 1536);
            }
LABEL_93:
            if ( v60 == -1 )
            {
              v72 = _errno_location();
              v73 = v72;
              if ( a2 )
              {
                v74 = *v52;
                if ( (v52[4] & 1) != 0 )
                  v75 = "from";
                else
                  v75 = "to";
                if ( v52[2] )
                  v76 = (const char *)v52[1];
                else
                  v76 = (const char *)&dword_8DA5C;
                v77 = (const char *)sub_792D8(*v72);
                sub_1873C((int)a2, "failed to redirect %d %s %s: %s", v74, v75, v76, v77);
                if ( a2[1] )
                  v78 = *a2;
                else
                  v78 = (const char *)&dword_8DA5C;
                sub_709D0("%s\n", v78);
              }
              exit(-*v73);
            }
            if ( v60 == *v52 )
            {
              fcntl(v60, 2, 0, v60 + 1);
            }
            else if ( dup2(v60, *v52) != *v52 )
            {
              if ( !under_debugger )
                sub_78AFC(575);
LABEL_68:
              __und(0xFFu);
            }
            ++v50;
            v51 += 28;
            if ( v130 <= v50 )
              goto LABEL_97;
          }
          if ( (v53 & 1) != 0 )
          {
            v55 = 0;
          }
          else
          {
            v55 = 577;
            if ( (v53 & 4) != 0 )
              v55 = 1089;
          }
          if ( v54 )
          {
            v56 = (const char *)v52[1];
            goto LABEL_91;
          }
LABEL_119:
          v54 = 1536;
          v57 = (const char *)&dword_8DA5C;
LABEL_92:
          v60 = open(v57, v55, 420, v54);
          goto LABEL_93;
        }
LABEL_97:
        if ( getrlimit(7, (struct rlimit *)rlimits)
          || *(_DWORD *)rlimits <= 1u
          || (v61 = *(_DWORD *)rlimits - 1, (unsigned int)(*(_DWORD *)rlimits - 1) <= 2) )
        {
LABEL_108:
          setpgid(0, 0);
          v65 = getgid();
          v66 = setgid(v65);
          v67 = _errno_location();
          v68 = v67;
          if ( !v66 )
          {
            v69 = *(_DWORD *)(a1 + 4);
            if ( (v69 & 2) != 0 )
            {
              if ( ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 )
              {
                v120 = (const char *)sub_792D8(*v68);
                sub_709D0("TRACEME: %s", v120);
                exit(-1);
              }
              v69 = *(_DWORD *)(a1 + 4);
            }
            if ( (v69 & 0x202) != 0 )
            {
              execv(s, v124);
              v70 = (const char *)sub_792D8(*v68);
              sub_709D0("execv%s(%s): %s\n", &byte_8DEAC, s, v70);
            }
            execvp(s, v124);
            v71 = (const char *)sub_792D8(*v68);
            sub_709D0("execv%s(%s): %s\n", "p", s, v71);
            exit(1);
          }
          v121 = (const char *)sub_792D8(*v67);
          sub_709D0("setgid: %s\n", v121);
          exit(-*v68);
        }
        while ( 1 )
        {
          if ( v61 > 9 || !v130 )
            goto LABEL_106;
          v62 = v129;
          if ( *(_DWORD *)v129 != v61 )
            break;
LABEL_107:
          if ( --v61 == 2 )
            goto LABEL_108;
        }
        v63 = 0;
        while ( v130 != ++v63 )
        {
          v64 = v62[7];
          v62 += 7;
          if ( v61 == v64 )
            goto LABEL_107;
        }
LABEL_106:
        close(v61);
        goto LABEL_107;
      }
      v80 = v127;
      v81 = 1;
      v82 = (void *)v127;
      v83 = (void *)v127;
      if ( v127 )
      {
        v83 = sub_77E84(v127);
        memcpy(v83, src, v80);
        v85 = v133;
        v81 = v133 + 1;
        if ( v133 + 1 <= v134 )
        {
          v84 = (char *)ptr;
          goto LABEL_149;
        }
        v82 = ptr;
      }
      v84 = (char *)sub_77EB0((int)&ptr, v82, v81, 0xCu);
      v85 = v133;
      ptr = v84;
LABEL_149:
      v86 = &v84[12 * v85];
      *(_DWORD *)v86 = v83;
      *((_DWORD *)v86 + 1) = v80;
      v87 = v133;
      *((_DWORD *)v86 + 2) = v80;
      v122 = v87 + 1;
      v133 = v87 + 1;
      if ( !v24 || !*v24 )
        goto LABEL_48;
      memset(rlimits, 0, sizeof(rlimits));
      *(_DWORD *)rlimits = sub_77EB0((int)rlimits, nullptr, 3u, 1u);
      *(_DWORD *)&rlimits[4] = 3;
      strcpy(*(char **)rlimits, "-c");
      v88 = (char *)ptr;
      if ( ptr > rlimits )
      {
        v90 = v133;
        v89 = v134;
        v91 = v133 + 1;
      }
      else
      {
        v90 = v133;
        v89 = v134;
        v91 = v133 + 1;
        if ( rlimits < (char *)ptr + 12 * v134 )
        {
          v92 = *(_DWORD *)rlimits;
          v93 = *(_QWORD *)&rlimits[4];
          memset(rlimits, 0, sizeof(rlimits));
          if ( v134 < v91 )
          {
            v88 = (char *)sub_77EB0((int)&ptr, ptr, v133 + 1, 0xCu);
            v90 = v133;
            ptr = v88;
          }
          v94 = 12 * v90;
          *(_DWORD *)&v88[v94] = v92;
          *(_QWORD *)&v88[v94 + 4] = v93;
          ++v133;
          if ( *(_DWORD *)rlimits )
          {
            *(_DWORD *)&rlimits[4] = 0;
            sub_77E08(*(void **)rlimits);
          }
          goto LABEL_157;
        }
      }
      if ( v89 < v91 )
      {
        v88 = (char *)sub_77EB0((int)&ptr, ptr, v91, 0xCu);
        v90 = v133;
        ptr = v88;
      }
      v112 = 12 * v90;
      *(_DWORD *)&v88[v112] = *(_DWORD *)rlimits;
      v113 = &v88[v112];
      *((_DWORD *)v113 + 1) = *(_DWORD *)&rlimits[4];
      v114 = v133 + 1;
      *((_DWORD *)v113 + 2) = *(_DWORD *)&rlimits[8];
      v133 = v114;
LABEL_157:
      memset(rlimits, 0, sizeof(rlimits));
      v95 = strlen((const char *)v24);
      *(_DWORD *)rlimits = sub_77EB0((int)rlimits, nullptr, v95 + 1, 1u);
      *(_DWORD *)&rlimits[4] = v95 + 1;
      memmove(*(void **)rlimits, v24, v95);
      *(_BYTE *)(*(_DWORD *)rlimits + v95) = 0;
      v96 = (char *)ptr;
      if ( ptr > rlimits )
      {
        v98 = v133;
        v97 = v134;
        v99 = v133 + 1;
      }
      else
      {
        v98 = v133;
        v97 = v134;
        v99 = v133 + 1;
        if ( rlimits < (char *)ptr + 12 * v134 )
        {
          v100 = *(_DWORD *)rlimits;
          v101 = *(_DWORD *)&rlimits[4];
          v102 = *(_DWORD *)&rlimits[8];
          memset(rlimits, 0, sizeof(rlimits));
          if ( v134 < v99 )
          {
            v96 = (char *)sub_77EB0((int)&ptr, ptr, v133 + 1, 0xCu);
            v98 = v133;
            ptr = v96;
          }
          v103 = 12 * v98;
          *(_DWORD *)&v96[v103] = v100;
          v104 = &v96[v103];
          *((_DWORD *)v104 + 1) = v101;
          *((_DWORD *)v104 + 2) = v102;
          v122 = ++v133;
          if ( *(_DWORD *)rlimits )
          {
            *(_DWORD *)&rlimits[4] = 0;
            sub_77E08(*(void **)rlimits);
            v122 = v133;
          }
          goto LABEL_48;
        }
      }
      if ( v97 < v99 )
      {
        v96 = (char *)sub_77EB0((int)&ptr, ptr, v99, 0xCu);
        v98 = v133;
        ptr = v96;
      }
      v115 = 12 * v98;
      *(_DWORD *)&v96[v115] = *(_DWORD *)rlimits;
      v116 = &v96[v115];
      *((_DWORD *)v116 + 1) = *(_DWORD *)&rlimits[4];
      v117 = v133 + 1;
      v122 = v133 + 1;
      *((_DWORD *)v116 + 2) = *(_DWORD *)&rlimits[8];
      v133 = v117;
      goto LABEL_48;
    }
    sub_799F8();
    goto LABEL_29;
  }
  if ( (v7 & 0x80) != 0 )
  {
    sub_79A48();
    v7 = *(_DWORD *)(a1 + 4);
  }
  if ( (v7 & 0x400) != 0 )
    sub_79FC0((void *(*)(void *))sub_7A534, v6);
LABEL_13:
  if ( src )
  {
    v127 = 0;
    sub_77E08(src);
  }
  return v6;
}
// 7B0D0: variable 'v26' is possibly undefined
// 7B0D0: variable 'v27' is possibly undefined
// 7B0D0: variable 'v28' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
// 8DEAC: using guessed type char byte_8DEAC;
// D5BF8: using guessed type int debug;
// D5C00: using guessed type char under_debugger;
// D5C0C: using guessed type int dword_D5C0C;
