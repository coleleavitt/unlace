__int64 __fastcall sub_AE78E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char **v5; // r12
  char **v6; // r15
  char **exception; // rbx
  char **v8; // r13
  __int64 v9; // rax
  unsigned int v10; // ebp
  __int64 v14; // rax
  unsigned int v15; // ebx
  size_t v16; // rsi
  unsigned int *v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // ebx
  __int64 *v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // edi
  unsigned int v24; // edx
  __int64 *v25; // rsi
  __int64 v26; // rdx
  __int64 *v27; // r8
  __int64 *v28; // rax
  __int64 v29; // rbp
  __int64 *v30; // rbx
  unsigned __int64 v31; // r12
  __int64 v32; // rsi
  bool v33; // zf
  char *v34; // rbx
  char *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rbx
  unsigned int v38; // eax
  int v39; // ecx
  __int64 v40; // rdi
  __int64 v41; // rbx
  unsigned int v42; // eax
  int v43; // edx
  int v44; // ecx
  int v45; // r8d
  int v46; // r9d
  __int64 v47; // rax
  __int64 v48; // rbp
  _DWORD *v49; // rax
  int v50; // eax
  __int64 *v51; // rbp
  __int64 v52; // rsi
  int v53; // eax
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // r8
  __int64 v61; // r14
  __int64 *v62; // rsi
  int v63; // r10d
  __int64 v64; // rdi
  __int64 *v65; // rcx
  __int64 v66; // r10
  __int64 *v67; // r9
  __int64 *i; // rax
  __int64 v69; // rdx
  __int64 *j; // rax
  __int64 v71; // rdi
  __int64 v72; // r9
  __int64 v73; // rsi
  __int64 *v74; // rcx
  __int64 v75; // rax
  int v76; // edi
  __int64 *v77; // rdx
  __int64 v78; // rdi
  __int64 *v79; // r8
  __int64 *k; // rax
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 v83; // rbp
  unsigned int *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r12
  unsigned int v87; // edi
  unsigned int *v88; // rbp
  __int64 v89; // rcx
  __int64 v90; // rax
  unsigned int v91; // ecx
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rcx
  _QWORD *v95; // rax
  __int64 *v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  _QWORD *v99; // r12
  unsigned int v100; // eax
  __int64 v101; // rdx
  unsigned int v102; // r9d
  size_t v103; // rsi
  unsigned int *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // r14
  __int64 v107; // rdi
  __int64 v108; // rdi
  __int64 v109; // rsi
  __int64 v110; // rax
  __int64 v111; // r14
  __int64 v112; // rdi
  __int64 *v113; // rsi
  unsigned int v114; // eax
  __int64 v115; // rdx
  int v116; // eax
  __int64 *v117; // rdx
  unsigned int v118; // r8d
  unsigned int v119; // edx
  unsigned int *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rax
  char *s; // [rsp+8h] [rbp-120h]
  __int64 v124; // [rsp+18h] [rbp-110h]
  unsigned int v125; // [rsp+20h] [rbp-108h]
  int v126; // [rsp+20h] [rbp-108h]
  unsigned int v127; // [rsp+24h] [rbp-104h]
  __int64 v129; // [rsp+30h] [rbp-F8h]
  __int64 v130; // [rsp+30h] [rbp-F8h]
  int v131; // [rsp+30h] [rbp-F8h]
  __int64 v132; // [rsp+30h] [rbp-F8h]
  unsigned int v133; // [rsp+30h] [rbp-F8h]
  __int64 v134; // [rsp+38h] [rbp-F0h]
  unsigned int v135; // [rsp+40h] [rbp-E8h]
  __int64 *v136; // [rsp+48h] [rbp-E0h]
  __int64 v138; // [rsp+58h] [rbp-D0h]
  int v139; // [rsp+58h] [rbp-D0h]
  __int64 v140; // [rsp+60h] [rbp-C8h]
  unsigned int v142; // [rsp+6Ch] [rbp-BCh]
  __int64 v143; // [rsp+70h] [rbp-B8h]
  _DWORD v144[4]; // [rsp+90h] [rbp-98h] BYREF
  _QWORD v145[4]; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v146[16]; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v147; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v148; // [rsp+D8h] [rbp-50h]

  if ( !a3 )
    return 0;
  v9 = *(_QWORD *)(a4 + 8);
  if ( !v9 || !*(_DWORD *)(v9 - 4) )
    return 0;
  sub_1684300(v144, *a1);
  v140 = *a1;
  v127 = *(_DWORD *)(a2 + 20);
  v145[0] = v140;
  v145[2] = v140;
  if ( !v127 )
  {
    v136 = nullptr;
    v37 = 0;
    s = nullptr;
    goto LABEL_38;
  }
  v14 = sub_186B270(0x18u) + 8;
  *(_QWORD *)(v14 - 8) = 2;
  s = (char *)v14;
  while ( 1 )
  {
    v18 = *(_DWORD *)(v14 - 8);
    v19 = v127;
    if ( v18 >= v127 )
      break;
    v15 = (3 * v18 + 1) >> 1;
    v16 = 8 * v15 + 8;
    if ( 8 * v18 + 8 >= (unsigned int)v16 || v18 >= v15 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(&v147, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, &v147);
      sub_233E40((__int64)&v147);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v17 = (unsigned int *)sub_186B300(s - 8, v16);
    *v17 = v15;
    s = (char *)(v17 + 2);
    v14 = (__int64)(v17 + 2);
  }
  *((_DWORD *)s - 1) = v127;
  memset(s, 0, 8LL * v127);
  v127 = 0;
  v142 = v19 - 1;
  v125 = v19 - 1;
  v136 = nullptr;
  while ( 2 )
  {
    while ( 2 )
    {
      v20 = *(__int64 **)(a3 + 24);
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * v125) + 16LL);
      v124 = *a1;
      v22 = *(unsigned int *)(a3 + 32);
      v23 = *(_DWORD *)(v21 + 12);
      v24 = v22 - 1;
      v22 *= 24;
      v25 = (__int64 *)((char *)v20 + v22);
      v26 = 24LL * (v23 & v24);
      v27 = (__int64 *)((char *)v20 + v26);
      if ( v26 == v22 )
      {
LABEL_71:
        while ( v27 != v20 )
        {
          v56 = *v20;
          if ( (unsigned __int64)*v20 > 1 )
          {
            if ( *(_DWORD *)(v56 + 12) == v23 && v21 == v56 )
            {
              v28 = v20;
              goto LABEL_46;
            }
          }
          else if ( !v56 )
          {
            break;
          }
          v20 += 3;
        }
LABEL_20:
        v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64 *))(*(_QWORD *)a3 + 40LL))(
                a3,
                *(_QWORD *)(v21 + 40),
                v26,
                v20,
                v27);
        if ( v29 )
          goto LABEL_47;
        goto LABEL_21;
      }
      v28 = (__int64 *)((char *)v20 + v26);
      while ( 1 )
      {
        v26 = *v28;
        if ( (unsigned __int64)*v28 > 1 )
          break;
        if ( !v26 )
          goto LABEL_20;
LABEL_17:
        v28 += 3;
        if ( v25 == v28 )
          goto LABEL_71;
      }
      if ( *(_DWORD *)(v26 + 12) != v23 || v21 != v26 )
        goto LABEL_17;
LABEL_46:
      v29 = v28[2];
      if ( !v29 )
        goto LABEL_20;
LABEL_47:
      ++*(_DWORD *)(v29 + 8);
      if ( a5 )
      {
        v40 = a1[8];
        LODWORD(v147) = 0;
        v41 = sub_AC9940(v40, a2, v142 - v125, v29, &v147);
        if ( v41 )
        {
          v42 = v147;
          if ( v127 >= (unsigned int)v147 )
            v42 = v127;
          ++*(_DWORD *)(v41 + 8);
          v33 = (*(_DWORD *)(v29 + 8))-- == 1;
          v127 = v42;
          if ( v33 )
LABEL_52:
            sub_15D7BC0(v124, v29);
          goto LABEL_53;
        }
LABEL_194:
        v33 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v124, v29);
LABEL_21:
        v10 = 0;
        if ( v136 )
        {
LABEL_22:
          v30 = v136;
          v31 = (unsigned __int64)&v136[*((unsigned int *)v136 - 1)];
          if ( (unsigned __int64)v136 < v31 )
          {
            do
            {
              while ( 1 )
              {
                v32 = *v30;
                if ( *v30 )
                {
                  v33 = (*(_DWORD *)(v32 + 8))-- == 1;
                  if ( v33 )
                    break;
                }
                if ( (unsigned __int64)++v30 >= v31 )
                  goto LABEL_28;
              }
              ++v30;
              sub_15D7BC0(v140, v32);
            }
            while ( (unsigned __int64)v30 < v31 );
          }
LABEL_28:
          sub_186B220(v136 - 1);
          goto LABEL_29;
        }
        goto LABEL_30;
      }
      v57 = sub_ADF270((__int64)a1, v29);
      v41 = v57;
      if ( v57 )
      {
        ++*(_DWORD *)(v57 + 8);
        v33 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v33 )
          goto LABEL_52;
      }
      else
      {
        v41 = v29;
      }
LABEL_53:
      if ( (unsigned __int8)sub_ADF5E0((__int64)a1, v41) )
      {
        v47 = sub_AE1C80((__int64)a1, v41, v43, v44, v45, v46);
        v48 = v47;
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        v33 = (*(_DWORD *)(v41 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v124, v41);
        v41 = v48;
      }
      if ( !*(_WORD *)(v41 + 4) )
      {
        v49 = *(_DWORD **)(*(_QWORD *)(v41 + 16) + 24LL);
        if ( v49 )
        {
          if ( v144[0] == *v49 && v49[1] == 13 )
          {
            v58 = sub_1684260(v144, v41);
            v59 = *(unsigned int *)(a3 + 56);
            v60 = *(unsigned int *)(v58 + 12);
            v61 = v58;
            v62 = *(__int64 **)(a3 + 48);
            v63 = v59 - 1;
            v64 = 16 * v59;
            v65 = &v62[(unsigned __int64)v64 / 8];
            v66 = 16LL * ((unsigned int)v60 & v63);
            v67 = &v62[(unsigned __int64)v66 / 8];
            if ( v66 == v64 )
            {
LABEL_95:
              if ( v62 != v67 )
              {
                for ( i = *(__int64 **)(a3 + 48); v67 != i; i += 2 )
                {
                  v69 = *i;
                  if ( (unsigned __int64)*i > 1 )
                  {
                    if ( *(_DWORD *)(v69 + 12) == (_DWORD)v60 && v61 == v69 )
                      goto LABEL_103;
                  }
                  else if ( !v69 )
                  {
                    break;
                  }
                }
              }
            }
            else
            {
              i = &v62[(unsigned __int64)v66 / 8];
              while ( 1 )
              {
                while ( 1 )
                {
                  v69 = *i;
                  if ( (unsigned __int64)*i > 1 )
                    break;
                  if ( !v69 )
                    goto LABEL_62;
                  i += 2;
                  if ( v65 == i )
                    goto LABEL_95;
                }
                if ( *(_DWORD *)(v69 + 12) == (_DWORD)v60 && v61 == v69 )
                  break;
                i += 2;
                if ( v65 == i )
                  goto LABEL_95;
              }
LABEL_103:
              if ( i[1] )
              {
                if ( v66 != v64 )
                {
                  for ( j = &v62[(unsigned __int64)v66 / 8]; v65 != j; j += 2 )
                  {
                    v71 = *j;
                    if ( (unsigned __int64)*j > 1 )
                    {
                      if ( *(_DWORD *)(v71 + 12) == (_DWORD)v60 && v61 == v71 )
                        goto LABEL_131;
                    }
                    else if ( !v71 )
                    {
                      goto LABEL_111;
                    }
                  }
                }
                if ( v62 == v67 )
                {
LABEL_140:
                  v71 = 0;
                }
                else
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      v71 = *v62;
                      if ( (unsigned __int64)*v62 > 1 )
                        break;
                      if ( !v71 )
                        goto LABEL_111;
                      v62 += 2;
                      if ( v67 == v62 )
                        goto LABEL_140;
                    }
                    if ( *(_DWORD *)(v71 + 12) == (_DWORD)v60 && v61 == v71 )
                      break;
                    v62 += 2;
                    if ( v67 == v62 )
                      goto LABEL_140;
                  }
                  j = v62;
LABEL_131:
                  v71 = j[1];
                }
LABEL_111:
                if ( sub_1348CA0(v71, v62, v69, v65, v60, v67) )
                {
                  v73 = *(unsigned int *)(v61 + 12);
                  v74 = *(__int64 **)(a3 + 48);
                  v143 = *a1;
                  v75 = *(unsigned int *)(a3 + 56);
                  v76 = v75 - 1;
                  v75 *= 16;
                  v77 = (__int64 *)((char *)v74 + v75);
                  v78 = 16LL * ((unsigned int)v73 & v76);
                  v79 = &v74[(unsigned __int64)v78 / 8];
                  if ( v78 != v75 )
                  {
                    for ( k = &v74[(unsigned __int64)v78 / 8]; v77 != k; k += 2 )
                    {
                      v81 = *k;
                      if ( (unsigned __int64)*k > 1 )
                      {
                        if ( *(_DWORD *)(v81 + 12) == (_DWORD)v73 && v61 == v81 )
                          goto LABEL_175;
                      }
                      else if ( !v81 )
                      {
                        goto LABEL_119;
                      }
                    }
                  }
                  if ( v74 == v79 )
                  {
LABEL_184:
                    v81 = 0;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v81 = *v74;
                        if ( (unsigned __int64)*v74 > 1 )
                          break;
                        if ( !v81 )
                          goto LABEL_119;
                        v74 += 2;
                        if ( v79 == v74 )
                          goto LABEL_184;
                      }
                      if ( *(_DWORD *)(v81 + 12) == (_DWORD)v73 && v61 == v81 )
                        break;
                      v74 += 2;
                      if ( v79 == v74 )
                        goto LABEL_184;
                    }
                    k = v74;
LABEL_175:
                    v81 = k[1];
                  }
LABEL_119:
                  v82 = sub_1348CA0(v81, v73, v77, v74, v79, v72);
                  v138 = v82;
                  if ( v82 )
                    ++*(_DWORD *)(v82 + 8);
                  if ( (unsigned __int8)sub_ADF5E0((__int64)a1, v82) )
                  {
                    if ( v138 )
                    {
                      v126 = *(_DWORD *)(v138 + 8);
                      *(_DWORD *)(v138 + 8) = v126 - 1;
                      if ( v126 == 1 )
                        sub_15D7BC0(v143, v138);
                    }
                    v29 = v41;
                    goto LABEL_194;
                  }
                  v83 = *(unsigned int *)(v61 + 32);
                  if ( (_DWORD)v83 )
                  {
                    v84 = (unsigned int *)(sub_186B270(0x18u) + 8);
                    v85 = v61 + 8 * v83;
                    v86 = v61;
                    v87 = 1;
                    *((_QWORD *)v84 - 1) = 2;
                    v88 = v84;
                    while ( 1 )
                    {
                      v89 = *(_QWORD *)(v86 + 48);
                      v86 += 8;
                      *(_QWORD *)v84 = v89;
                      *(v88 - 1) = v87;
                      if ( v85 == v86 )
                        break;
                      if ( v87 == *(v88 - 2) )
                      {
                        v91 = (3 * v87 + 1) >> 1;
                        v92 = 8 * v91 + 8;
                        if ( 8 * v87 + 8 >= (unsigned int)v92 || v87 >= v91 )
                        {
                          v5 = (char **)__cxa_allocate_exception(0x28u);
                          sub_24ABB0(&v147, "Overflow encountered when expanding vector");
                          *v5 = (char *)off_1C63128;
                          sub_2333C0(v5 + 1, &v147);
                          sub_233E40((__int64)&v147);
                          __cxa_throw(
                            v5,
                            (struct type_info *)&`typeinfo for'default_exception,
                            (void (*)(void *))sub_230E50);
                        }
                        v129 = v85;
                        v93 = (unsigned int *)sub_186B300(v88 - 2, v92);
                        v88 = v93 + 2;
                        v85 = v129;
                        *v93 = (3 * v87 + 1) >> 1;
                        v94 = v93[1];
                        v84 = &v93[2 * v94 + 2];
                        v87 = v94 + 1;
                      }
                      else
                      {
                        v90 = v87++;
                        v84 = &v88[2 * v90];
                      }
                    }
                    if ( *(_DWORD *)(v61 + 32) )
                    {
                      v95 = (_QWORD *)sub_186B270(0x18u);
                      v96 = v95 + 1;
                      v97 = 0;
                      v98 = 1;
                      v99 = v95 + 1;
                      *v95 = 2;
                      v100 = 1;
                      while ( 1 )
                      {
                        *v96 = v98;
                        ++v97;
                        *((_DWORD *)v99 - 1) = v100;
                        if ( (unsigned int)v97 >= *(_DWORD *)(v61 + 32) )
                          break;
                        v98 = 8 * v97 + 1;
                        if ( v100 == *((_DWORD *)v99 - 2) )
                        {
                          v102 = (3 * v100 + 1) >> 1;
                          v103 = 8 * v102 + 8;
                          if ( 8 * v100 + 8 >= (unsigned int)v103 || v100 >= v102 )
                          {
                            v8 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0(&v147, "Overflow encountered when expanding vector");
                            *v8 = (char *)off_1C63128;
                            sub_2333C0(v8 + 1, &v147);
                            sub_233E40((__int64)&v147);
                            __cxa_throw(
                              v8,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v135 = (3 * v100 + 1) >> 1;
                          v134 = v97;
                          v130 = 8 * v97 + 1;
                          v104 = (unsigned int *)sub_186B300(v99 - 1, v103);
                          v105 = v104[1];
                          v99 = v104 + 2;
                          v98 = v130;
                          v97 = v134;
                          *v104 = v135;
                          LODWORD(v104) = v105;
                          v96 = &v99[v105];
                          v100 = (_DWORD)v104 + 1;
                        }
                        else
                        {
                          v101 = v100++;
                          v96 = &v99[v101];
                        }
                      }
                    }
                    else
                    {
                      v99 = nullptr;
                    }
                  }
                  else
                  {
                    v88 = nullptr;
                    v99 = nullptr;
                  }
                  sub_13A2DE0(v146, *a1, "z3name");
                  sub_AE5290(&v147, a1, v138);
                  v106 = v147;
                  if ( v138 && (v107 = v148, v131 = *(_DWORD *)(v138 + 8), *(_DWORD *)(v138 + 8) = v131 - 1, v131 == 1) )
                  {
                    sub_15D7BC0(v107, v138);
                    v108 = *a1;
                    if ( !v88 )
                      goto LABEL_189;
LABEL_153:
                    v109 = *(v88 - 1);
                  }
                  else
                  {
                    v108 = *a1;
                    if ( v88 )
                      goto LABEL_153;
LABEL_189:
                    v109 = 0;
                  }
                  v110 = sub_15DBD70(v108, v109, v88, v99, v106);
                  v132 = v110;
                  if ( v110 )
                    ++*(_DWORD *)(v110 + 8);
                  if ( v106 )
                  {
                    v33 = (*(_DWORD *)(v106 + 8))-- == 1;
                    if ( v33 )
                      sub_15D7BC0(v143, v106);
                  }
                  sub_13A2E50(&v147, v146, v132, v41);
                  v111 = v147;
                  v147 = v132;
                  if ( v132 )
                  {
                    v112 = v148;
                    v139 = *(_DWORD *)(v132 + 8);
                    *(_DWORD *)(v132 + 8) = v139 - 1;
                    if ( v139 == 1 )
                      sub_15D7BC0(v112, v132);
                  }
                  if ( v111 )
                    ++*(_DWORD *)(v111 + 8);
                  v113 = v136;
                  if ( v136 )
                  {
                    v114 = *((_DWORD *)v136 - 1);
                    if ( v114 == *((_DWORD *)v136 - 2) )
                    {
                      v118 = (3 * v114 + 1) >> 1;
                      v119 = 8 * v118 + 8;
                      if ( 8 * v114 + 8 >= v119 || v114 >= v118 )
                      {
                        v6 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(&v147, "Overflow encountered when expanding vector");
                        *v6 = (char *)off_1C63128;
                        sub_2333C0(v6 + 1, &v147);
                        sub_233E40((__int64)&v147);
                        __cxa_throw(
                          v6,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v133 = (3 * v114 + 1) >> 1;
                      v120 = (unsigned int *)sub_186B300(v136 - 1, v119);
                      v121 = v120[1];
                      v113 = (__int64 *)(v120 + 2);
                      v136 = (__int64 *)(v120 + 2);
                      *v120 = v133;
                      LODWORD(v120) = v121;
                      v117 = &v113[v121];
                      v116 = (_DWORD)v120 + 1;
                    }
                    else
                    {
                      v115 = v114;
                      v116 = v114 + 1;
                      v117 = &v136[v115];
                    }
                  }
                  else
                  {
                    v122 = sub_186B270(0x18u) + 8;
                    *(_QWORD *)(v122 - 8) = 2;
                    v117 = (__int64 *)v122;
                    v136 = (__int64 *)v122;
                    v116 = 1;
                    v113 = v136;
                  }
                  *v117 = v111;
                  *((_DWORD *)v113 - 1) = v116;
                  sub_13A2BD0(v146);
                  if ( v99 )
                    sub_186B220(v99 - 1);
                  if ( v88 )
                    sub_186B220(v88 - 2);
                  if ( v111 )
                  {
                    v33 = (*(_DWORD *)(v111 + 8))-- == 1;
                    if ( v33 )
                      sub_15D7BC0(v143, v111);
                  }
                }
              }
            }
          }
        }
      }
LABEL_62:
      v50 = *(_DWORD *)(v41 + 8);
      v51 = (__int64 *)&s[8 * v125];
      v52 = *v51;
      *(_DWORD *)(v41 + 8) = v50 + 1;
      if ( v52 )
      {
        v33 = (*(_DWORD *)(v52 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v140, v52);
        v53 = *(_DWORD *)(v41 + 8);
        *v51 = v41;
        *(_DWORD *)(v41 + 8) = --v53;
        if ( v53 )
        {
LABEL_66:
          if ( --v125 == -1 )
            goto LABEL_67;
          continue;
        }
      }
      else
      {
        *v51 = v41;
        *(_DWORD *)(v41 + 8) = v50;
        if ( v50 )
          goto LABEL_66;
      }
      break;
    }
    sub_15D7BC0(v124, v41);
    if ( --v125 != -1 )
      continue;
    break;
  }
LABEL_67:
  if ( v136 && (v54 = *((unsigned int *)v136 - 1), (_DWORD)v54) )
  {
    v55 = sub_15EC1C0(v140, v54);
    v37 = v55;
    if ( v55 )
      ++*(_DWORD *)(v55 + 8);
  }
  else
  {
    v37 = 0;
  }
LABEL_38:
  v38 = sub_952CC0((__int64 *)a1[5], a2);
  v39 = v127;
  v145[1] = s;
  if ( v38 >= v127 )
    v39 = v38;
  sub_AE1920((__int64)a1, a2, (__int64)v145, v39, v37);
  if ( v37 )
  {
    v33 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v140, v37);
  }
  v10 = 1;
  if ( v136 )
    goto LABEL_22;
LABEL_29:
  if ( s )
  {
LABEL_30:
    v34 = s;
    v35 = &s[8 * *((unsigned int *)s - 1)];
    if ( s < v35 )
    {
      do
      {
        while ( 1 )
        {
          v36 = *(_QWORD *)v34;
          if ( *(_QWORD *)v34 )
          {
            v33 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v33 )
              break;
          }
          v34 += 8;
          if ( v34 >= v35 )
            goto LABEL_36;
        }
        v34 += 8;
        sub_15D7BC0(v140, v36);
      }
      while ( v34 < v35 );
    }
LABEL_36:
    sub_186B220(s - 8);
  }
  return v10;
}

