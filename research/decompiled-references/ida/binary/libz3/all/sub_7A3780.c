__int64 __fastcall sub_7A3780(_QWORD *a1, int a2, int *a3)
{
  char **v3; // r12
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  char **v7; // r12
  char **v8; // r12
  char **v9; // r12
  char **v10; // rbx
  char **exception; // rbx
  char **v12; // r12
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r12d
  int *v17; // r13
  int *v18; // r15
  int v19; // r14d
  _QWORD *v20; // rax
  int *v21; // rax
  int v22; // r14d
  int *v23; // rbx
  int v24; // edi
  __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  int *v36; // rdx
  _QWORD *v37; // rcx
  unsigned int v38; // eax
  unsigned int v39; // edx
  size_t v40; // rsi
  unsigned int v41; // r15d
  unsigned int *v42; // rax
  unsigned int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r15
  int *v46; // rdx
  __int64 v47; // rax
  int *v48; // rax
  int v49; // r13d
  unsigned int v50; // r15d
  __int64 v51; // rax
  __int64 v52; // r13
  unsigned int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  int *v56; // rdx
  _QWORD *v57; // rcx
  unsigned int v58; // eax
  unsigned int v59; // edx
  size_t v60; // rsi
  unsigned int v61; // r14d
  unsigned int *v62; // rax
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rax
  _QWORD *v66; // rdx
  __int64 v67; // rax
  int v68; // r12d
  __int64 v69; // rax
  int *v70; // rax
  __int64 v71; // rdi
  int v72; // edx
  __int64 result; // rax
  unsigned int v74; // edx
  __int64 v75; // rsi
  _QWORD *v76; // rcx
  unsigned int v77; // r12d
  __int64 v78; // r13
  _QWORD *v79; // rax
  unsigned int v80; // edx
  size_t v81; // rsi
  unsigned int v82; // r14d
  unsigned int *v83; // rax
  unsigned int v84; // eax
  __int64 v85; // r14
  unsigned __int64 v86; // rax
  unsigned int v87; // eax
  unsigned int v88; // edx
  unsigned int v89; // edx
  unsigned int v90; // r15d
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rax
  unsigned int v94; // r15d
  size_t v95; // rsi
  unsigned int *v96; // rax
  __int64 v97; // rdx
  _QWORD *v98; // rax
  _QWORD *v99; // rax
  _QWORD *v100; // rax
  int *v101; // rax
  __int64 v102; // rax
  int *v103; // rax
  unsigned int v104; // r14d
  unsigned int v105; // edx
  unsigned int *v106; // rax
  __int64 v107; // rdx
  int *v108; // rbp
  unsigned __int64 v109; // r12
  __int64 v110; // rsi
  unsigned int v112; // r13d
  unsigned int v113; // ecx
  unsigned int *v114; // rax
  __int64 v115; // rax
  unsigned int v116; // r14d
  unsigned int v117; // ecx
  unsigned int *v118; // rax
  __int64 v119; // rax
  unsigned int v120; // r13d
  unsigned int v121; // edx
  unsigned int *v122; // rax
  __int64 v123; // rax
  _QWORD *v124; // rax
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  _QWORD *v128; // rbx
  unsigned int v129; // [rsp+0h] [rbp-A8h]
  unsigned int v130; // [rsp+0h] [rbp-A8h]
  unsigned int v131; // [rsp+0h] [rbp-A8h]
  _QWORD *v132; // [rsp+0h] [rbp-A8h]
  unsigned int v133; // [rsp+0h] [rbp-A8h]
  _QWORD *v134; // [rsp+0h] [rbp-A8h]
  unsigned int v135; // [rsp+8h] [rbp-A0h]
  _QWORD *v136; // [rsp+8h] [rbp-A0h]
  unsigned __int64 v137; // [rsp+8h] [rbp-A0h]
  __int64 v138; // [rsp+10h] [rbp-98h]
  __int64 v141; // [rsp+28h] [rbp-80h]
  _QWORD v142[2]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v143[11]; // [rsp+50h] [rbp-58h] BYREF

  v141 = a1[18];
  v142[1] = v141;
  v14 = a1[3];
  v142[0] = 0;
  v15 = *(_QWORD *)(v14 + 3296);
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  v17 = *((int **)a3 + 5);
  v18 = &v17[a3[8]];
  if ( v17 == v18 )
  {
    v23 = nullptr;
    if ( a2 == -2 )
      goto LABEL_12;
    v124 = (_QWORD *)sub_186B270(0x10u);
    *v124 = 2;
    v23 = (int *)(v124 + 1);
    v142[0] = v124 + 1;
    v101 = (int *)(v124 + 1);
  }
  else
  {
    v19 = *v17;
    v20 = (_QWORD *)sub_186B270(0x10u);
    *v20 = 2;
    v21 = (int *)(v20 + 1);
    v22 = v19 ^ 1;
    v142[0] = v21;
    v23 = v21;
    while ( 1 )
    {
      *v21 = v22;
      v24 = *(v23 - 1);
      ++v17;
      v25 = (unsigned int)(v24 + 1);
      *(v23 - 1) = v25;
      if ( v18 == v17 )
        break;
      v26 = *(v23 - 2);
      v22 = *v17 ^ 1;
      if ( v26 == (_DWORD)v25 )
      {
        v27 = (3 * v26 + 1) >> 1;
        v28 = 4 * v27 + 8;
        if ( 4 * v24 + 12 >= (unsigned int)v28 || v26 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v143, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v143);
          sub_233E40((__int64)v143);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v129 = (3 * v26 + 1) >> 1;
        v29 = (unsigned int *)sub_186B300(v23 - 2, v28);
        v23 = (int *)(v29 + 2);
        v142[0] = v29 + 2;
        *v29 = v129;
        v21 = (int *)&v29[v29[1] + 2];
      }
      else
      {
        v21 = &v23[v25];
      }
    }
    if ( a2 == -2 )
      goto LABEL_12;
    if ( (_DWORD)v25 == *(v23 - 2) )
    {
      v120 = (unsigned int)(3 * v25 + 1) >> 1;
      v121 = 4 * v120 + 8;
      if ( 4 * v24 + 12 >= v121 || (unsigned int)v25 >= v120 )
      {
        v10 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v143, "Overflow encountered when expanding vector");
        *v10 = (char *)off_1C63128;
        sub_2333C0(v10 + 1, v143);
        sub_233E40((__int64)v143);
        __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v122 = (unsigned int *)sub_186B300(v23 - 2, v121);
      v23 = (int *)(v122 + 2);
      *v122 = v120;
      v123 = v122[1];
      v142[0] = v23;
      v101 = &v23[v123];
    }
    else
    {
      v101 = &v23[v25];
    }
  }
  *v101 = a2;
  ++*(v23 - 1);
LABEL_12:
  v30 = *((_QWORD *)a3 + 6);
  v138 = v30 + 16LL * (unsigned int)a3[9];
  if ( v138 == v30 )
  {
    v49 = *a3;
    if ( *a3 == -2 || v49 == a2 )
    {
      v23 = nullptr;
      goto LABEL_35;
    }
    if ( !v23 )
    {
      v125 = (_QWORD *)sub_186B270(0x10u);
      *v125 = 2;
      v46 = (int *)(v125 + 1);
      v142[0] = v125 + 1;
      v103 = (int *)(v125 + 1);
      goto LABEL_88;
    }
    v46 = v23;
    v23 = nullptr;
LABEL_86:
    v102 = (unsigned int)*(v46 - 1);
    if ( (_DWORD)v102 == *(v46 - 2) )
    {
      v116 = (unsigned int)(3 * v102 + 1) >> 1;
      v117 = 4 * v116 + 8;
      if ( 4 * (int)v102 + 8 >= v117 || (unsigned int)v102 >= v116 )
      {
        v7 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v143, "Overflow encountered when expanding vector");
        *v7 = (char *)off_1C63128;
        sub_2333C0(v7 + 1, v143);
        sub_233E40((__int64)v143);
        __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v118 = (unsigned int *)sub_186B300(v46 - 2, v117);
      v46 = (int *)(v118 + 2);
      *v118 = v116;
      v119 = v118[1];
      v142[0] = v46;
      v103 = &v46[v119];
    }
    else
    {
      v103 = &v46[v102];
    }
LABEL_88:
    *v103 = v49;
    ++*(v46 - 1);
    if ( !*((_QWORD *)a3 + 1) )
      goto LABEL_89;
LABEL_36:
    v50 = v16 + 1;
    v51 = sub_15E1B70(a1[18]);
    v52 = v51;
    if ( v51 )
      ++*(_DWORD *)(v51 + 8);
    if ( v23 )
    {
      v53 = *(v23 - 1);
      if ( v53 == *(v23 - 2) )
      {
        v104 = (3 * v53 + 1) >> 1;
        v105 = 8 * v104 + 8;
        if ( 8 * v53 + 8 >= v105 || v53 >= v104 )
        {
          v12 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v143, "Overflow encountered when expanding vector");
          *v12 = (char *)off_1C63128;
          sub_2333C0(v12 + 1, v143);
          sub_233E40((__int64)v143);
          __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v106 = (unsigned int *)sub_186B300(v23 - 2, v105);
        v107 = v106[1];
        v23 = (int *)(v106 + 2);
        *v106 = v104;
        LODWORD(v106) = v107;
        v56 = &v23[2 * v107];
        v55 = (_DWORD)v106 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = &v23[2 * v54];
      }
    }
    else
    {
      v128 = (_QWORD *)sub_186B270(0x18u);
      *v128 = 2;
      v55 = 1;
      v23 = (int *)(v128 + 1);
      v56 = v23;
    }
    v57 = (_QWORD *)a1[291];
    *(_QWORD *)v56 = v52;
    *(v23 - 1) = v55;
    if ( v57 )
    {
      v58 = *((_DWORD *)v57 - 1);
      v131 = v58;
      if ( v16 < v58 )
      {
LABEL_51:
        v66 = (_QWORD *)v142[0];
        v67 = v16;
        v68 = 2 * v16;
        v57[v67] = v52;
        if ( v66 )
        {
          v69 = *((unsigned int *)v66 - 1);
          if ( (_DWORD)v69 == *((_DWORD *)v66 - 2) )
          {
            v112 = (unsigned int)(3 * v69 + 1) >> 1;
            v113 = 4 * v112 + 8;
            if ( 4 * (int)v69 + 8 >= v113 || (unsigned int)v69 >= v112 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v143, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v143);
              sub_233E40((__int64)v143);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v114 = (unsigned int *)sub_186B300(v66 - 1, v113);
            v66 = v114 + 2;
            *v114 = v112;
            v115 = v114[1];
            v142[0] = v66;
            v70 = (int *)v66 + v115;
          }
          else
          {
            v70 = (int *)v66 + v69;
          }
        }
        else
        {
          v127 = (_QWORD *)sub_186B270(0x10u);
          *v127 = 2;
          v66 = v127 + 1;
          v142[0] = v127 + 1;
          v70 = (int *)(v127 + 1);
        }
        *v70 = v68;
        ++*((_DWORD *)v66 - 1);
        goto LABEL_55;
      }
      if ( v58 >= v50 )
      {
        *((_DWORD *)v57 - 1) = v50;
        goto LABEL_51;
      }
    }
    else
    {
      if ( v16 == -1 )
        goto LABEL_51;
      v126 = (_QWORD *)sub_186B270(0x18u);
      v57 = v126 + 1;
      *v126 = 2;
      a1[291] = v126 + 1;
      v131 = 0;
    }
    while ( 1 )
    {
      v63 = *((_DWORD *)v57 - 2);
      if ( v63 >= v50 )
        break;
      v59 = (3 * v63 + 1) >> 1;
      v60 = 8 * v59 + 8;
      v61 = v59;
      if ( 8 * v63 + 8 >= (unsigned int)v60 || v63 >= v59 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v143, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v143);
        sub_233E40((__int64)v143);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v62 = (unsigned int *)sub_186B300(v57 - 1, v60);
      v57 = v62 + 2;
      *v62 = v61;
      a1[291] = v62 + 2;
    }
    *((_DWORD *)v57 - 1) = v50;
    v64 = 8LL * v50;
    v65 = 8LL * v131;
    if ( v65 != v64 )
    {
      v132 = v57;
      memset(&v57[(unsigned __int64)v65 / 8], 0, v64 - v65);
      v57 = v132;
    }
    goto LABEL_51;
  }
  v23 = nullptr;
  do
  {
    v130 = v16++;
    v31 = sub_15E1B70(a1[18]);
    v32 = v31;
    if ( v31 )
      ++*(_DWORD *)(v31 + 8);
    if ( v23 )
    {
      v33 = *(v23 - 1);
      if ( v33 == *(v23 - 2) )
      {
        v94 = (3 * v33 + 1) >> 1;
        v95 = 8 * v94 + 8;
        if ( 8 * v33 + 8 >= (unsigned int)v95 || v33 >= v94 )
        {
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v143, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v143);
          sub_233E40((__int64)v143);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v96 = (unsigned int *)sub_186B300(v23 - 2, v95);
        v97 = v96[1];
        v23 = (int *)(v96 + 2);
        *v96 = v94;
        LODWORD(v96) = v97;
        v36 = &v23[2 * v97];
        v35 = (_DWORD)v96 + 1;
      }
      else
      {
        v34 = v33;
        v35 = v33 + 1;
        v36 = &v23[2 * v34];
      }
    }
    else
    {
      v100 = (_QWORD *)sub_186B270(0x18u);
      v36 = (int *)(v100 + 1);
      *v100 = 2;
      v35 = 1;
      v23 = v36;
    }
    v37 = (_QWORD *)a1[291];
    *(_QWORD *)v36 = v32;
    *(v23 - 1) = v35;
    if ( v37 )
    {
      v38 = *((_DWORD *)v37 - 1);
      v135 = v38;
      if ( v130 < v38 )
        goto LABEL_29;
      if ( v38 >= v16 )
      {
        *((_DWORD *)v37 - 1) = v16;
        goto LABEL_29;
      }
    }
    else
    {
      if ( !v16 )
        goto LABEL_29;
      v98 = (_QWORD *)sub_186B270(0x18u);
      v135 = 0;
      *v98 = 2;
      v37 = v98 + 1;
      a1[291] = v98 + 1;
    }
    while ( 1 )
    {
      v43 = *((_DWORD *)v37 - 2);
      if ( v43 >= v16 )
        break;
      v39 = (3 * v43 + 1) >> 1;
      v40 = 8 * v39 + 8;
      v41 = v39;
      if ( 8 * v43 + 8 >= (unsigned int)v40 || v43 >= v39 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v143, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v143);
        sub_233E40((__int64)v143);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B300(v37 - 1, v40);
      v37 = v42 + 2;
      *v42 = v41;
      a1[291] = v42 + 2;
    }
    *((_DWORD *)v37 - 1) = v16;
    v44 = 8LL * v16;
    v45 = 8LL * v135;
    if ( v45 != v44 )
    {
      v136 = v37;
      memset(&v37[(unsigned __int64)v45 / 8], 0, v44 - v45);
      v37 = v136;
    }
LABEL_29:
    v46 = (int *)v142[0];
    v37[v130] = v32;
    if ( v46 )
    {
      v47 = (unsigned int)*(v46 - 1);
      if ( (_DWORD)v47 == *(v46 - 2) )
      {
        v90 = (unsigned int)(3 * v47 + 1) >> 1;
        v91 = 4 * v90 + 8;
        if ( 4 * (int)v47 + 8 >= (unsigned int)v91 || (unsigned int)v47 >= v90 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v143, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v143);
          sub_233E40((__int64)v143);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v92 = (unsigned int *)sub_186B300(v46 - 2, v91);
        v46 = (int *)(v92 + 2);
        *v92 = v90;
        v93 = v92[1];
        v142[0] = v46;
        v48 = &v46[v93];
      }
      else
      {
        v48 = &v46[v47];
      }
    }
    else
    {
      v99 = (_QWORD *)sub_186B270(0x10u);
      v46 = (int *)(v99 + 1);
      *v99 = 2;
      v142[0] = v99 + 1;
      v48 = (int *)(v99 + 1);
    }
    *v48 = (2 * v16 - 2) ^ 1;
    v30 += 16;
    ++*(v46 - 1);
  }
  while ( v138 != v30 );
  v49 = *a3;
  if ( *a3 != -2 && a2 != v49 )
    goto LABEL_86;
LABEL_35:
  if ( *((_QWORD *)a3 + 1) )
    goto LABEL_36;
LABEL_89:
  v50 = v16;
LABEL_55:
  v71 = a1[3] + 552LL;
  v72 = *(_DWORD *)(*((_QWORD *)a3 - 1) + 12LL);
  v143[1] = *((_QWORD *)a3 + 3);
  LODWORD(v143[0]) = 1;
  HIDWORD(v143[0]) = v72;
  sub_11F1890(v71, v142, v143);
  result = *(_QWORD *)(a1[3] + 3296LL);
  if ( result )
    v74 = *(_DWORD *)(result - 4);
  else
    v74 = 0;
  if ( v74 < v50 )
  {
    v75 = v74 + 1;
    v76 = (_QWORD *)a1[291];
    v77 = v74 + 1;
    v78 = 8 * v75;
    v137 = 8 * (v74 - v75);
    if ( v76 )
    {
      v87 = v74 + 1;
      v77 = v74;
      goto LABEL_68;
    }
    v79 = (_QWORD *)sub_186B270(0x18u);
    v76 = v79 + 1;
    *v79 = 2;
    a1[291] = v79 + 1;
    v133 = 0;
    while ( 1 )
    {
LABEL_63:
      while ( 1 )
      {
        v84 = *((_DWORD *)v76 - 2);
        if ( v84 >= v77 )
          break;
        v80 = (3 * v84 + 1) >> 1;
        v81 = 8 * v80 + 8;
        v82 = v80;
        if ( 8 * v84 + 8 >= (unsigned int)v81 || v84 >= v80 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v143, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v143);
          sub_233E40((__int64)v143);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v83 = (unsigned int *)sub_186B300(v76 - 1, v81);
        v76 = v83 + 2;
        *v83 = v82;
        a1[291] = v83 + 2;
      }
      *((_DWORD *)v76 - 1) = v77;
      v85 = 8LL * v133;
      if ( v85 == v78 )
      {
        v86 = v137;
      }
      else
      {
        v134 = v76;
        memset(&v76[(unsigned __int64)v85 / 8], 0, v78 - v85);
        v86 = v137;
        v76 = v134;
      }
      result = (__int64)v76 + v86;
      *(_QWORD *)(result + v78) = 0;
      v78 += 8;
      if ( v77 == v50 )
        break;
      v87 = v77 + 1;
LABEL_68:
      v88 = v77;
      v77 = v87;
      result = *((unsigned int *)v76 - 1);
      v133 = result;
      if ( v88 < (unsigned int)result )
      {
        while ( 1 )
        {
          v76[v137 / 8 + (unsigned __int64)v78 / 8] = 0;
          v78 += 8;
          if ( v50 == v77 )
            goto LABEL_93;
          v89 = v77++;
          if ( v89 >= (unsigned int)result )
            goto LABEL_63;
        }
      }
    }
  }
LABEL_93:
  if ( v23 )
  {
    v108 = v23;
    v109 = (unsigned __int64)&v23[2 * *(v23 - 1)];
    if ( (unsigned __int64)v23 < v109 )
    {
      do
      {
        while ( 1 )
        {
          v110 = *(_QWORD *)v108;
          if ( *(_QWORD *)v108 )
          {
            if ( (*(_DWORD *)(v110 + 8))-- == 1 )
              break;
          }
          v108 += 2;
          if ( (unsigned __int64)v108 >= v109 )
            goto LABEL_100;
        }
        v108 += 2;
        sub_15D7BC0(v141, v110);
      }
      while ( (unsigned __int64)v108 < v109 );
    }
LABEL_100:
    result = sub_186B220(v23 - 2);
  }
  if ( v142[0] )
    return sub_186B220((void *)(v142[0] - 8LL));
  return result;
}

