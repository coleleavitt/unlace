__int64 __fastcall sub_7224C0(_QWORD *a1, __int64 *a2, __int64 a3, char a4)
{
  __int64 *v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned int v8; // r13d
  __int64 v9; // r14
  int v10; // eax
  _DWORD *v11; // rdx
  int v12; // eax
  _DWORD *v13; // rdx
  _QWORD *v15; // rax
  unsigned int v16; // edx
  __int64 v17; // rcx
  int v18; // edx
  _QWORD *v19; // rcx
  __int64 *v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // r14
  __int64 v25; // r14
  _QWORD *v26; // rax
  _QWORD *v27; // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r14
  int v31; // edx
  _DWORD *v32; // rax
  unsigned int v33; // r14d
  unsigned int v34; // ecx
  unsigned int *v35; // rdx
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // r15
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r14
  int v44; // edx
  _DWORD *v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  _QWORD *v48; // r15
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // r14
  int v52; // edx
  _DWORD *v53; // rax
  unsigned int v54; // ecx
  unsigned int v55; // edx
  _QWORD *v56; // rax
  unsigned int v57; // edx
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  unsigned int v60; // r14d
  unsigned int v61; // ecx
  unsigned int *v62; // rdx
  _QWORD *v63; // rax
  __int64 v64; // r10
  unsigned int k; // r8d
  unsigned int v66; // eax
  unsigned int v67; // edx
  size_t v68; // rsi
  unsigned int *v69; // rax
  _QWORD *v70; // rax
  unsigned int v71; // ecx
  void *v72; // rdi
  int v73; // edx
  __int64 v74; // r8
  unsigned int i; // ecx
  __int64 v76; // rdx
  _QWORD *v77; // rdx
  unsigned int v78; // eax
  unsigned int v79; // edx
  size_t v80; // rsi
  unsigned int *v81; // rax
  unsigned int v82; // r15d
  unsigned int v83; // ecx
  unsigned int *v84; // rdx
  __int64 v85; // rcx
  unsigned int v86; // r14d
  unsigned int v87; // edx
  unsigned int *v88; // rdx
  _QWORD *v89; // rax
  _QWORD *v90; // r15
  __int64 v91; // r8
  unsigned int j; // ecx
  __int64 v93; // rdx
  _QWORD *v94; // rdx
  unsigned int v95; // eax
  unsigned int v96; // edx
  size_t v97; // rsi
  unsigned int *v98; // rax
  _QWORD *v99; // rax
  unsigned int v100; // r15d
  unsigned int v101; // ecx
  unsigned int *v102; // rdx
  _QWORD *v103; // rax
  _QWORD *v104; // r15
  _QWORD *v105; // r15
  char **v106; // rbx
  char **v107; // rbp
  char **v108; // rbp
  char **exception; // rbp
  char **v110; // rbp
  _QWORD *v111; // [rsp+0h] [rbp-108h]
  _QWORD *v114; // [rsp+18h] [rbp-F0h]
  _QWORD *v115; // [rsp+20h] [rbp-E8h]
  __int64 v116; // [rsp+38h] [rbp-D0h]
  __int64 v117; // [rsp+38h] [rbp-D0h]
  __int64 v118; // [rsp+38h] [rbp-D0h]
  __int64 v119; // [rsp+40h] [rbp-C8h]
  __int64 v120; // [rsp+40h] [rbp-C8h]
  unsigned int v121; // [rsp+40h] [rbp-C8h]
  unsigned int v123; // [rsp+4Ch] [rbp-BCh]
  unsigned int v124; // [rsp+4Ch] [rbp-BCh]
  unsigned int v125; // [rsp+4Ch] [rbp-BCh]
  __int64 v126; // [rsp+50h] [rbp-B8h]
  unsigned int v127; // [rsp+50h] [rbp-B8h]
  unsigned int v128; // [rsp+50h] [rbp-B8h]
  __int64 v129; // [rsp+58h] [rbp-B0h]
  __int64 v130; // [rsp+58h] [rbp-B0h]
  __int64 v131[4]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v132[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v133; // [rsp+A0h] [rbp-68h]
  void *v134; // [rsp+A8h] [rbp-60h]
  __int64 v135; // [rsp+B8h] [rbp-50h]
  void *ptr; // [rsp+C0h] [rbp-48h]

  v4 = *(__int64 **)a3;
  v5 = *(_QWORD *)a3 + 8LL * *(unsigned int *)(a3 + 8);
  if ( *(_QWORD *)a3 == v5 )
    return 1;
  while ( (unsigned __int64)*v4 <= 1 )
  {
    if ( (__int64 *)v5 == ++v4 )
      return 1;
  }
  if ( (__int64 *)v5 == v4 )
    return 1;
  v6 = *v4;
  v111 = a2 + 4;
  v114 = a1 + 15;
LABEL_7:
  if ( !(unsigned __int8)sub_168D740(v111, v6) )
    goto LABEL_21;
  v7 = *a2;
  v8 = sub_15D37A0(v114, v6);
  if ( (_BYTE)v8 )
    goto LABEL_21;
  sub_15D0A90(v114, v6, 1);
  v9 = *(_QWORD *)(v6 + 16);
  v115 = a1 + 22;
  v10 = sub_15F0200(a1 + 22);
  v11 = *(_DWORD **)(v9 + 24);
  if ( v11 && v10 == *v11 && v11[1] == 1 )
  {
    if ( v7 == *(_QWORD *)(v6 + 32) )
    {
LABEL_17:
      ++*(_DWORD *)(v6 + 8);
      v15 = (_QWORD *)a1[2];
      if ( !v15 )
      {
        v58 = (_QWORD *)sub_186B270(0x18u);
        v18 = 1;
        *v58 = 2;
        v15 = v58 + 1;
        a1[2] = v15;
        v19 = v15;
        goto LABEL_20;
      }
      v16 = *((_DWORD *)v15 - 1);
      if ( v16 != *((_DWORD *)v15 - 2) )
        goto LABEL_19;
      v33 = (3 * v16 + 1) >> 1;
      v34 = 8 * v33 + 8;
      if ( 8 * v16 + 8 >= v34 || v16 >= v33 )
        goto LABEL_182;
      v35 = (unsigned int *)sub_186B300(v15 - 1, v34);
      v15 = v35 + 2;
      a1[2] = v35 + 2;
      goto LABEL_57;
    }
  }
  else
  {
    v12 = sub_15F0200(v115);
    v13 = *(_DWORD **)(v9 + 24);
    if ( v13 && v12 == *v13 && v13[1] == 2 && v7 == *(_QWORD *)(v6 + 32) )
      goto LABEL_17;
  }
  if ( *(_WORD *)(v6 + 4) )
    return v8;
  v21 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( !v21 || *v21 || v21[1] != 2 )
    return v8;
  v22 = *(_QWORD *)(v6 + 40);
  v23 = *(_QWORD *)(v6 + 32);
  v116 = v22;
  if ( (unsigned __int8)sub_168D740(v111, v22) )
  {
    v24 = *(_QWORD *)(v6 + 40);
    v117 = *(_QWORD *)(v6 + 32);
    if ( (unsigned __int8)sub_168D740(v111, v117) )
      goto LABEL_35;
    if ( a4 )
    {
LABEL_34:
      if ( (unsigned __int8)sub_71EAF0(a1, a2, v24, v117, *(_QWORD *)(*a1 + 856LL)) )
      {
        ++*(_DWORD *)(v6 + 8);
        v56 = (_QWORD *)a1[8];
        if ( !v56 )
        {
          v63 = (_QWORD *)sub_186B270(0x18u);
          v57 = 0;
          *v63 = 2;
          v56 = v63 + 1;
          a1[8] = v56;
          goto LABEL_96;
        }
        v57 = *((_DWORD *)v56 - 1);
        if ( v57 != *((_DWORD *)v56 - 2) )
          goto LABEL_96;
        v60 = (3 * v57 + 1) >> 1;
        v61 = 8 * v60 + 8;
        if ( 8 * v57 + 8 < v61 && v57 < v60 )
        {
          v62 = (unsigned int *)sub_186B300(v56 - 1, v61);
          v56 = v62 + 2;
          *v62 = v60;
          v57 = v62[1];
          a1[8] = v56;
          goto LABEL_96;
        }
        goto LABEL_182;
      }
      goto LABEL_35;
    }
    goto LABEL_72;
  }
  if ( !a4 )
  {
    v133 = 0;
    v134 = nullptr;
    v135 = 0;
    v38 = *a2;
    ptr = nullptr;
    v119 = v38;
    v132[0] = (__int64)&off_1C62200;
    v39 = (_QWORD *)sub_186B270(0x18u);
    v39[1] = v23;
    v40 = v39 + 1;
    *v39 = 0x100000002LL;
    v41 = 1;
    while ( v41 )
    {
      while ( 1 )
      {
        v42 = (unsigned int)(v41 - 1);
        v43 = v40[v42];
        *((_DWORD *)v40 - 1) = v42;
        if ( !(unsigned __int8)sub_15D37A0(v132, v43) )
        {
          sub_15D0A90(v132, v43, 1);
          if ( !*(_WORD *)(v43 + 4) )
          {
            if ( v119 == v43 )
            {
              v131[0] = v116;
              if ( v116 )
                ++*(_DWORD *)(v116 + 8);
              sub_71E9D0(a1 + 6, v131);
              v132[0] = (__int64)&off_1C62200;
              if ( ptr )
              {
                sub_186B220(ptr);
                if ( v134 )
                  sub_186B220(v134);
                sub_186B220(v40 - 1);
              }
              else
              {
                v105 = v40 - 1;
                if ( v134 )
                  sub_186B220(v134);
                sub_186B220(v105);
              }
              ++*(_DWORD *)(v6 + 8);
              v15 = (_QWORD *)a1[10];
              if ( v15 )
              {
                v16 = *((_DWORD *)v15 - 1);
                if ( v16 == *((_DWORD *)v15 - 2) )
                {
                  v82 = (3 * v16 + 1) >> 1;
                  v83 = 8 * v82 + 8;
                  if ( 8 * v16 + 8 >= v83 || v16 >= v82 )
                    goto LABEL_182;
                  v84 = (unsigned int *)sub_186B300(v15 - 1, v83);
                  v15 = v84 + 2;
                  a1[10] = v84 + 2;
                  v85 = v84[1];
                  *v84 = v82;
                  LODWORD(v84) = v85;
                  v19 = &v15[v85];
                  v18 = (_DWORD)v84 + 1;
                  goto LABEL_20;
                }
LABEL_19:
                v17 = v16;
                v18 = v16 + 1;
                v19 = &v15[v17];
              }
              else
              {
                v99 = (_QWORD *)sub_186B270(0x18u);
                v18 = 1;
                *v99 = 2;
                v15 = v99 + 1;
                a1[10] = v15;
                v19 = v15;
              }
LABEL_20:
              *v19 = v6;
              *((_DWORD *)v15 - 1) = v18;
              goto LABEL_21;
            }
            v44 = sub_15F0200(v115);
            if ( !*(_WORD *)(v43 + 4) )
            {
              v45 = *(_DWORD **)(*(_QWORD *)(v43 + 16) + 24LL);
              if ( v45 )
              {
                if ( v44 == *v45 && !v45[1] && *(_DWORD *)(v43 + 24) )
                  break;
              }
            }
          }
        }
        v41 = *((_DWORD *)v40 - 1);
        if ( !v41 )
          goto LABEL_67;
      }
      v74 = *(_QWORD *)(v43 + 32);
      for ( i = 0; ; v74 = *(_QWORD *)(v43 + 8LL * i + 32) )
      {
        v78 = *((_DWORD *)v40 - 1);
        if ( v78 == *((_DWORD *)v40 - 2) )
        {
          v79 = (3 * v78 + 1) >> 1;
          v80 = 8 * v79 + 8;
          if ( 8 * v78 + 8 >= (unsigned int)v80 || v78 >= v79 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v131, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v131);
            sub_233E40((__int64)v131);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v129 = v74;
          v127 = (3 * v78 + 1) >> 1;
          v124 = i;
          v81 = (unsigned int *)sub_186B300(v40 - 1, v80);
          v40 = v81 + 2;
          i = v124;
          v74 = v129;
          *v81 = v127;
          LODWORD(v81) = v81[1];
          v77 = &v40[(unsigned int)v81];
          v41 = (_DWORD)v81 + 1;
        }
        else
        {
          v76 = v78;
          v41 = v78 + 1;
          v77 = &v40[v76];
        }
        *v77 = v74;
        ++i;
        *((_DWORD *)v40 - 1) = v41;
        if ( i >= *(_DWORD *)(v43 + 24) )
          break;
      }
    }
LABEL_67:
    v132[0] = (__int64)&off_1C62200;
    if ( ptr )
      sub_186B220(ptr);
    if ( v134 )
      sub_186B220(v134);
    sub_186B220(v40 - 1);
    v24 = *(_QWORD *)(v6 + 40);
    v117 = *(_QWORD *)(v6 + 32);
    if ( (unsigned __int8)sub_168D740(v111, v117) )
      goto LABEL_35;
LABEL_72:
    v133 = 0;
    v134 = nullptr;
    v135 = 0;
    v46 = *a2;
    ptr = nullptr;
    v120 = v46;
    v132[0] = (__int64)&off_1C62200;
    v47 = (_QWORD *)sub_186B270(0x18u);
    v47[1] = v24;
    v48 = v47 + 1;
    *v47 = 0x100000002LL;
    v49 = 1;
    while ( v49 )
    {
      while ( 1 )
      {
        v50 = (unsigned int)(v49 - 1);
        v51 = v48[v50];
        *((_DWORD *)v48 - 1) = v50;
        if ( !(unsigned __int8)sub_15D37A0(v132, v51) )
        {
          sub_15D0A90(v132, v51, 1);
          if ( !*(_WORD *)(v51 + 4) )
          {
            if ( v120 == v51 )
            {
              v131[0] = v117;
              if ( v117 )
                ++*(_DWORD *)(v117 + 8);
              sub_71E9D0(a1 + 6, v131);
              v132[0] = (__int64)&off_1C62200;
              if ( ptr )
              {
                sub_186B220(ptr);
                if ( v134 )
                  sub_186B220(v134);
                sub_186B220(v48 - 1);
              }
              else
              {
                v104 = v48 - 1;
                if ( v134 )
                  sub_186B220(v134);
                sub_186B220(v104);
              }
              ++*(_DWORD *)(v6 + 8);
              v56 = (_QWORD *)a1[10];
              if ( v56 )
              {
                v57 = *((_DWORD *)v56 - 1);
                if ( v57 != *((_DWORD *)v56 - 2) )
                  goto LABEL_96;
                v100 = (3 * v57 + 1) >> 1;
                v101 = 8 * v100 + 8;
                if ( 8 * v57 + 8 < v101 && v57 < v100 )
                {
                  v102 = (unsigned int *)sub_186B300(v56 - 1, v101);
                  v56 = v102 + 2;
                  *v102 = v100;
                  v57 = v102[1];
                  a1[10] = v56;
                  goto LABEL_96;
                }
LABEL_182:
                v106 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v132, "Overflow encountered when expanding vector");
                *v106 = (char *)off_1C63128;
                sub_2333C0(v106 + 1, v132);
                sub_233E40((__int64)v132);
                __cxa_throw(v106, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v103 = (_QWORD *)sub_186B270(0x18u);
              v57 = 0;
              *v103 = 2;
              v56 = v103 + 1;
              a1[10] = v56;
LABEL_96:
              v56[v57] = v6;
              *((_DWORD *)v56 - 1) = v57 + 1;
LABEL_21:
              v20 = v4 + 1;
              if ( (__int64 *)v5 == v4 + 1 )
                return 1;
              while ( 1 )
              {
                v6 = *v20;
                v4 = v20;
                if ( (unsigned __int64)*v20 > 1 )
                  break;
                if ( (__int64 *)v5 == ++v20 )
                  return 1;
              }
              if ( (__int64 *)v5 == v20 )
                return 1;
              goto LABEL_7;
            }
            v52 = sub_15F0200(v115);
            if ( !*(_WORD *)(v51 + 4) )
            {
              v53 = *(_DWORD **)(*(_QWORD *)(v51 + 16) + 24LL);
              if ( v53 )
              {
                if ( v52 == *v53 && !v53[1] && *(_DWORD *)(v51 + 24) )
                  break;
              }
            }
          }
        }
        v49 = *((_DWORD *)v48 - 1);
        if ( !v49 )
          goto LABEL_81;
      }
      v91 = *(_QWORD *)(v51 + 32);
      for ( j = 0; ; v91 = *(_QWORD *)(v51 + 8LL * j + 32) )
      {
        v95 = *((_DWORD *)v48 - 1);
        if ( v95 == *((_DWORD *)v48 - 2) )
        {
          v96 = (3 * v95 + 1) >> 1;
          v97 = 8 * v96 + 8;
          if ( 8 * v95 + 8 >= (unsigned int)v97 || v95 >= v96 )
          {
            v107 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v131, "Overflow encountered when expanding vector");
            *v107 = (char *)off_1C63128;
            sub_2333C0(v107 + 1, v131);
            sub_233E40((__int64)v131);
            __cxa_throw(v107, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v130 = v91;
          v128 = (3 * v95 + 1) >> 1;
          v125 = j;
          v98 = (unsigned int *)sub_186B300(v48 - 1, v97);
          v48 = v98 + 2;
          j = v125;
          v91 = v130;
          *v98 = v128;
          LODWORD(v98) = v98[1];
          v94 = &v48[(unsigned int)v98];
          v49 = (_DWORD)v98 + 1;
        }
        else
        {
          v93 = v95;
          v49 = v95 + 1;
          v94 = &v48[v93];
        }
        *v94 = v91;
        ++j;
        *((_DWORD *)v48 - 1) = v49;
        if ( j >= *(_DWORD *)(v51 + 24) )
          break;
      }
    }
LABEL_81:
    v132[0] = (__int64)&off_1C62200;
    if ( ptr )
      sub_186B220(ptr);
    if ( v134 )
      sub_186B220(v134);
    sub_186B220(v48 - 1);
    goto LABEL_35;
  }
  if ( (unsigned __int8)sub_71EAF0(a1, a2, v23, v22, *(_QWORD *)(*a1 + 856LL)) )
  {
    ++*(_DWORD *)(v6 + 8);
    v15 = (_QWORD *)a1[8];
    if ( !v15 )
    {
      v59 = (_QWORD *)sub_186B270(0x18u);
      v18 = 1;
      *v59 = 2;
      v15 = v59 + 1;
      a1[8] = v15;
      v19 = v15;
      goto LABEL_20;
    }
    v16 = *((_DWORD *)v15 - 1);
    v54 = *((_DWORD *)v15 - 2);
    if ( v16 != v54 )
      goto LABEL_19;
    v33 = (3 * v54 + 1) >> 1;
    v55 = 8 * v33 + 8;
    if ( 8 * v54 + 8 >= v55 || v54 >= v33 )
      goto LABEL_182;
    v35 = (unsigned int *)sub_186B300(v15 - 1, v55);
    v15 = v35 + 2;
    a1[8] = v35 + 2;
LABEL_57:
    v36 = v35[1];
    *v35 = v33;
    v37 = v36;
    v19 = &v15[v36];
    v18 = v37 + 1;
    goto LABEL_20;
  }
  v24 = *(_QWORD *)(v6 + 40);
  v117 = *(_QWORD *)(v6 + 32);
  if ( !(unsigned __int8)sub_168D740(v111, v117) )
    goto LABEL_34;
LABEL_35:
  v25 = *(_QWORD *)(v6 + 32);
  v118 = *a2;
  if ( v25 == *a2 )
  {
    v25 = *(_QWORD *)(v6 + 40);
  }
  else if ( *(_QWORD *)(v6 + 40) != *a2 )
  {
    return v8;
  }
  if ( !(unsigned __int8)sub_168D740(v111, v25) )
    return v8;
  v133 = 0;
  v134 = nullptr;
  v132[0] = (__int64)&off_1C62200;
  v135 = 0;
  ptr = nullptr;
  v26 = (_QWORD *)sub_186B270(0x18u);
  v26[1] = v25;
  v27 = v26 + 1;
  *v26 = 0x100000002LL;
  v28 = 1;
  do
  {
    v29 = (unsigned int)(v28 - 1);
    v30 = v27[v29];
    *((_DWORD *)v27 - 1) = v29;
    if ( !(unsigned __int8)sub_15D37A0(v132, v30) )
    {
      sub_15D0A90(v132, v30, 1);
      if ( !*(_WORD *)(v30 + 4) )
      {
        if ( v118 == v30 )
        {
          ++*(_DWORD *)(v6 + 8);
          v70 = (_QWORD *)a1[12];
          if ( v70 )
          {
            v71 = *((_DWORD *)v70 - 2);
            if ( *((_DWORD *)v70 - 1) == v71 )
            {
              v86 = (3 * v71 + 1) >> 1;
              v87 = 8 * v86 + 8;
              if ( 8 * v71 + 8 >= v87 || v71 >= v86 )
              {
                v108 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v131, "Overflow encountered when expanding vector");
                *v108 = (char *)off_1C63128;
                sub_2333C0(v108 + 1, v131);
                sub_233E40((__int64)v131);
                __cxa_throw(v108, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v88 = (unsigned int *)sub_186B300(v70 - 1, v87);
              v70 = v88 + 2;
              *v88 = v86;
              a1[12] = v88 + 2;
            }
          }
          else
          {
            v89 = (_QWORD *)sub_186B270(0x18u);
            *v89 = 2;
            v70 = v89 + 1;
            a1[12] = v70;
          }
          v72 = ptr;
          v73 = *((_DWORD *)v70 - 1);
          v70[v73] = v6;
          *((_DWORD *)v70 - 1) = v73 + 1;
          v132[0] = (__int64)&off_1C62200;
          if ( v72 )
          {
            sub_186B220(v72);
            if ( v134 )
              sub_186B220(v134);
            sub_186B220(v27 - 1);
          }
          else
          {
            v90 = v27 - 1;
            if ( v134 )
              sub_186B220(v134);
            sub_186B220(v90);
          }
          goto LABEL_21;
        }
        v31 = sub_15F0200(v115);
        if ( !*(_WORD *)(v30 + 4) )
        {
          v32 = *(_DWORD **)(*(_QWORD *)(v30 + 16) + 24LL);
          if ( v32 )
          {
            if ( v31 == *v32 && !v32[1] && *(_DWORD *)(v30 + 24) )
            {
              v64 = *(_QWORD *)(v30 + 32);
              for ( k = 0; ; v64 = *(_QWORD *)(v30 + 8LL * k + 32) )
              {
                v66 = *((_DWORD *)v27 - 1);
                if ( v66 == *((_DWORD *)v27 - 2) )
                {
                  v67 = (3 * v66 + 1) >> 1;
                  v68 = 8 * v67 + 8;
                  if ( 8 * v66 + 8 >= (unsigned int)v68 || v66 >= v67 )
                  {
                    v110 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v131, "Overflow encountered when expanding vector");
                    *v110 = (char *)off_1C63128;
                    sub_2333C0(v110 + 1, v131);
                    sub_233E40((__int64)v131);
                    __cxa_throw(
                      v110,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v126 = v64;
                  v123 = (3 * v66 + 1) >> 1;
                  v121 = k;
                  v69 = (unsigned int *)sub_186B300(v27 - 1, v68);
                  v27 = v69 + 2;
                  k = v121;
                  v64 = v126;
                  *v69 = v123;
                  v66 = v69[1];
                }
                ++k;
                v27[v66] = v64;
                *((_DWORD *)v27 - 1) = v66 + 1;
                if ( k >= *(_DWORD *)(v30 + 24) )
                  break;
              }
            }
          }
        }
      }
    }
    v28 = *((_DWORD *)v27 - 1);
  }
  while ( v28 );
  v132[0] = (__int64)&off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v134 )
    sub_186B220(v134);
  sub_186B220(v27 - 1);
  return v8;
}

