__int64 __fastcall sub_D48FF0(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r12
  int v8; // eax
  _QWORD *v9; // rdx
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // r13
  _QWORD *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdi
  bool v23; // zf
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // edx
  int v28; // r13d
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // rdx
  _QWORD *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  _QWORD *v39; // rdx
  unsigned __int8 v40; // dl
  __int64 v41; // rax
  int v42; // r12d
  int v43; // r14d
  _QWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r12d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r13
  unsigned int v53; // ebx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rdx
  unsigned __int8 v57; // dl
  __int64 v58; // rax
  unsigned int v59; // r15d
  size_t v60; // rsi
  unsigned int *v61; // rax
  unsigned int v62; // eax
  _QWORD *v63; // rax
  unsigned int v64; // edx
  _QWORD *v65; // rdx
  unsigned int v66; // eax
  __int64 v67; // rcx
  int v68; // eax
  __int64 *v69; // rcx
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // rax
  __int64 v73; // rbx
  _QWORD *v74; // rdx
  unsigned int v75; // eax
  __int64 v76; // rcx
  int v77; // eax
  __int64 *v78; // rcx
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // rax
  unsigned int v82; // r12d
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  unsigned int v86; // r12d
  unsigned int v87; // ecx
  unsigned int *v88; // rax
  __int64 v89; // rcx
  unsigned int v90; // r14d
  unsigned int v91; // ecx
  unsigned int *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r13
  _QWORD *v96; // rdx
  unsigned int v97; // eax
  unsigned int v98; // r14d
  unsigned int v99; // ecx
  unsigned int *v100; // rax
  __int64 v101; // rcx
  unsigned int v102; // r14d
  unsigned int v103; // ecx
  unsigned int *v104; // rax
  _QWORD *v105; // rdx
  _QWORD *v106; // rdx
  _QWORD *v107; // rdx
  _QWORD *v108; // rdx
  unsigned int v109; // r13d
  unsigned int v110; // ecx
  unsigned int *v111; // rdx
  unsigned int v112; // r13d
  unsigned int v113; // ecx
  unsigned int *v114; // rax
  _QWORD *v115; // rdx
  _QWORD *v116; // rax
  _QWORD *v117; // rdx
  char **v118; // rbx
  char **exception; // r13
  char **v120; // r13
  char **v121; // r13
  char **v122; // r13
  char **v123; // r13
  __int64 v124[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v30 = (_QWORD *)a1[7];
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v47 = (3 * v31 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v48 || v31 >= v47 )
          goto LABEL_131;
        v49 = (unsigned int *)sub_186B300(v30 - 1, v48);
        v50 = v49[1];
        v30 = v49 + 2;
        *v49 = v47;
        a1[7] = v49 + 2;
        LODWORD(v49) = v50;
        v34 = &v30[v50];
        v33 = (_DWORD)v49 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v30[v32];
      }
    }
    else
    {
      v80 = (_QWORD *)sub_186B270(0x18u);
      v30 = v80 + 1;
      *v80 = 2;
      v33 = 1;
      a1[7] = v30;
      v34 = v30;
    }
    *v34 = a2;
    *((_DWORD *)v30 - 1) = v33;
    v35 = (_QWORD *)a1[11];
    if ( v35 )
    {
      v36 = *((_DWORD *)v35 - 1);
      if ( v36 == *((_DWORD *)v35 - 2) )
      {
        v53 = (3 * v36 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v36 + 8 >= (unsigned int)v54 || v36 >= v53 )
          goto LABEL_131;
        v55 = (unsigned int *)sub_186B300(v35 - 1, v54);
        v56 = v55[1];
        v35 = v55 + 2;
        *v55 = v53;
        a1[11] = v55 + 2;
        LODWORD(v55) = v56;
        v39 = &v35[v56];
        v38 = (_DWORD)v55 + 1;
      }
      else
      {
        v37 = v36;
        v38 = v36 + 1;
        v39 = &v35[v37];
      }
    }
    else
    {
      v79 = (_QWORD *)sub_186B270(0x18u);
      v35 = v79 + 1;
      *v79 = 2;
      v38 = 1;
      a1[11] = v35;
      v39 = v35;
    }
    *v39 = 0;
    *((_DWORD *)v35 - 1) = v38;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v28 = 0;
    goto LABEL_29;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
LABEL_32:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_53;
    }
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_6:
    v7 = a1[1];
    ++*(_DWORD *)(a2 + 8);
    v8 = sub_D48360(a1[18], *(_QWORD *)(a2 + 16), 0, 0, a1 + 60, (__int64)(a1 + 62));
    v9 = (_QWORD *)a1[7];
    if ( v8 == 5 )
    {
      ++*(_DWORD *)(a2 + 8);
      if ( v9 )
      {
        v62 = *((_DWORD *)v9 - 1);
        if ( v62 == *((_DWORD *)v9 - 2) )
        {
          v112 = (3 * v62 + 1) >> 1;
          v113 = 8 * v112 + 8;
          if ( 8 * v62 + 8 >= v113 || v62 >= v112 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_D47290(v124, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v124);
            sub_233E40((__int64)v124);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v114 = (unsigned int *)sub_186B300(v9 - 1, v113);
          v9 = v114 + 2;
          *v114 = v112;
          v62 = v114[1];
          a1[7] = v9;
        }
      }
      else
      {
        v117 = (_QWORD *)sub_186B270(0x18u);
        *v117 = 2;
        v62 = 0;
        v9 = v117 + 1;
        a1[7] = v9;
      }
      v9[v62] = a2;
      *((_DWORD *)v9 - 1) = v62 + 1;
      v63 = (_QWORD *)a1[11];
      if ( v63 )
      {
        v64 = *((_DWORD *)v63 - 1);
        if ( v64 == *((_DWORD *)v63 - 2) )
        {
          v109 = (3 * v64 + 1) >> 1;
          v110 = 8 * v109 + 8;
          if ( 8 * v64 + 8 >= v110 || v64 >= v109 )
          {
            v120 = (char **)__cxa_allocate_exception(0x28u);
            sub_D47290(v124, "Overflow encountered when expanding vector");
            *v120 = (char *)off_1C63128;
            sub_2333C0(v120 + 1, v124);
            sub_233E40((__int64)v124);
            __cxa_throw(v120, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v111 = (unsigned int *)sub_186B300(v63 - 1, v110);
          v63 = v111 + 2;
          *v111 = v109;
          v64 = v111[1];
          a1[11] = v63;
        }
      }
      else
      {
        v116 = (_QWORD *)sub_186B270(0x18u);
        *v116 = 2;
        v63 = v116 + 1;
        v64 = 0;
        a1[11] = v63;
      }
      v63[v64] = 0;
      *((_DWORD *)v63 - 1) = v64 + 1;
    }
    else
    {
      v10 = a1[60];
      if ( v10 )
        ++*(_DWORD *)(v10 + 8);
      if ( v9 )
      {
        v11 = *((_DWORD *)v9 - 1);
        if ( v11 == *((_DWORD *)v9 - 2) )
        {
          v90 = (3 * v11 + 1) >> 1;
          v91 = 8 * v90 + 8;
          if ( 8 * v11 + 8 >= v91 || v11 >= v90 )
          {
            v121 = (char **)__cxa_allocate_exception(0x28u);
            sub_D47290(v124, "Overflow encountered when expanding vector");
            *v121 = (char *)off_1C63128;
            sub_2333C0(v121 + 1, v124);
            sub_233E40((__int64)v124);
            __cxa_throw(v121, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v92 = (unsigned int *)sub_186B300(v9 - 1, v91);
          v93 = v92[1];
          v9 = v92 + 2;
          *v92 = v90;
          a1[7] = v92 + 2;
          LODWORD(v92) = v93;
          v14 = &v9[v93];
          v13 = (_DWORD)v92 + 1;
        }
        else
        {
          v12 = v11;
          v13 = v11 + 1;
          v14 = &v9[v12];
        }
      }
      else
      {
        v107 = (_QWORD *)sub_186B270(0x18u);
        *v107 = 2;
        v13 = 1;
        v9 = v107 + 1;
        a1[7] = v9;
        v14 = v9;
      }
      *v14 = v10;
      v15 = a1[62];
      *((_DWORD *)v9 - 1) = v13;
      if ( v15 )
      {
        v16 = (_QWORD *)a1[11];
        ++*(_DWORD *)(v15 + 8);
        if ( v16 )
        {
          v17 = *((_DWORD *)v16 - 1);
          if ( v17 == *((_DWORD *)v16 - 2) )
          {
            v98 = (3 * v17 + 1) >> 1;
            v99 = 8 * v98 + 8;
            if ( 8 * v17 + 8 >= v99 || v17 >= v98 )
            {
              v123 = (char **)__cxa_allocate_exception(0x28u);
              sub_D47290(v124, "Overflow encountered when expanding vector");
              *v123 = (char *)off_1C63128;
              sub_2333C0(v123 + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v100 = (unsigned int *)sub_186B300(v16 - 1, v99);
            v101 = v100[1];
            v16 = v100 + 2;
            *v100 = v98;
            a1[11] = v100 + 2;
            LODWORD(v100) = v101;
            v20 = &v16[v101];
            v19 = (_DWORD)v100 + 1;
          }
          else
          {
            v18 = v17;
            v19 = v17 + 1;
            v20 = &v16[v18];
          }
        }
        else
        {
          v108 = (_QWORD *)sub_186B270(0x18u);
          *v108 = 2;
          v19 = 1;
          v16 = v108 + 1;
          a1[11] = v16;
          v20 = v16;
        }
        *v20 = v15;
        *((_DWORD *)v16 - 1) = v19;
      }
      else
      {
        v94 = sub_15DE370(a1[1]);
        v95 = v94;
        if ( v94 )
          ++*(_DWORD *)(v94 + 8);
        v96 = (_QWORD *)a1[11];
        if ( v96 )
        {
          v97 = *((_DWORD *)v96 - 1);
          if ( v97 == *((_DWORD *)v96 - 2) )
          {
            v102 = (3 * v97 + 1) >> 1;
            v103 = 8 * v102 + 8;
            if ( 8 * v97 + 8 >= v103 || v97 >= v102 )
            {
              v122 = (char **)__cxa_allocate_exception(0x28u);
              sub_D47290(v124, "Overflow encountered when expanding vector");
              *v122 = (char *)off_1C63128;
              sub_2333C0(v122 + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(v122, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v104 = (unsigned int *)sub_186B300(v96 - 1, v103);
            v96 = v104 + 2;
            *v104 = v102;
            v97 = v104[1];
            a1[11] = v96;
          }
        }
        else
        {
          v115 = (_QWORD *)sub_186B270(0x18u);
          *v115 = 2;
          v97 = 0;
          v96 = v115 + 1;
          a1[11] = v96;
        }
        v96[v97] = v95;
        *((_DWORD *)v96 - 1) = v97 + 1;
      }
      v21 = a1[62];
      if ( v21 )
      {
        v22 = a1[63];
        v23 = (*(_DWORD *)(v21 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v22, v21);
      }
      v24 = a1[60];
      a1[62] = 0;
      if ( v24 )
      {
        v25 = a1[61];
        v23 = (*(_DWORD *)(v24 + 8))-- == 1;
        if ( v23 )
          sub_15D7BC0(v25, v24);
      }
      a1[60] = 0;
      v26 = a1[5];
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 - 4);
        if ( v27 )
          *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
      }
    }
    v23 = (*(_DWORD *)(a2 + 8))-- == 1;
    if ( v23 )
      sub_15D7BC0(v7, a2);
    return 1;
  }
  v51 = sub_1680FB0(a1[4], a2, 0);
  v52 = v51;
  if ( v51 )
  {
    v65 = (_QWORD *)a1[7];
    ++*(_DWORD *)(v51 + 8);
    if ( v65 )
    {
      v66 = *((_DWORD *)v65 - 1);
      if ( v66 == *((_DWORD *)v65 - 2) )
      {
        v82 = (3 * v66 + 1) >> 1;
        v83 = 8 * v82 + 8;
        if ( 8 * v66 + 8 >= v83 || v66 >= v82 )
          goto LABEL_131;
        v84 = (unsigned int *)sub_186B300(v65 - 1, v83);
        v85 = v84[1];
        v65 = v84 + 2;
        *v84 = v82;
        a1[7] = v84 + 2;
        LODWORD(v84) = v85;
        v69 = &v65[v85];
        v68 = (_DWORD)v84 + 1;
      }
      else
      {
        v67 = v66;
        v68 = v66 + 1;
        v69 = &v65[v67];
      }
    }
    else
    {
      v105 = (_QWORD *)sub_186B270(0x18u);
      *v105 = 2;
      v68 = 1;
      v65 = v105 + 1;
      a1[7] = v65;
      v69 = v65;
    }
    *v69 = v52;
    *((_DWORD *)v65 - 1) = v68;
    if ( a2 != v52 )
    {
      v70 = a1[5];
      if ( v70 )
      {
        v71 = *(_DWORD *)(v70 - 4);
        if ( v71 )
          *(_BYTE *)(v70 + 16LL * (unsigned int)(v71 - 1) + 8) |= 2u;
      }
    }
    v72 = sub_1680FB0(a1[9], a2, 0);
    v73 = v72;
    if ( v72 )
      ++*(_DWORD *)(v72 + 8);
    v74 = (_QWORD *)a1[11];
    if ( v74 )
    {
      v75 = *((_DWORD *)v74 - 1);
      if ( v75 == *((_DWORD *)v74 - 2) )
      {
        v86 = (3 * v75 + 1) >> 1;
        v87 = 8 * v86 + 8;
        if ( 8 * v75 + 8 >= v87 || v75 >= v86 )
          goto LABEL_131;
        v88 = (unsigned int *)sub_186B300(v74 - 1, v87);
        v89 = v88[1];
        v74 = v88 + 2;
        *v88 = v86;
        a1[11] = v88 + 2;
        LODWORD(v88) = v89;
        v78 = &v74[v89];
        v77 = (_DWORD)v88 + 1;
      }
      else
      {
        v76 = v75;
        v77 = v75 + 1;
        v78 = &v74[v76];
      }
    }
    else
    {
      v106 = (_QWORD *)sub_186B270(0x18u);
      *v106 = 2;
      v77 = 1;
      v74 = v106 + 1;
      a1[11] = v74;
      v78 = v74;
    }
    *v78 = v73;
    *((_DWORD *)v74 - 1) = v77;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  v28 = 1;
LABEL_29:
  if ( v5 == 1 )
  {
LABEL_53:
    sub_D489F0(a1, a2);
    return 1;
  }
  if ( v5 == 2 )
  {
    v40 = 3;
    if ( a3 != 3 )
      v40 = (a3 - 1) & 3;
    v41 = a1[7];
    v42 = v40;
    if ( v41 )
      v43 = *(_DWORD *)(v41 - 4);
    else
      v43 = 0;
    v44 = (_QWORD *)a1[5];
    if ( !v44 )
    {
LABEL_97:
      v81 = (_QWORD *)sub_186B270(0x28u);
      v44 = v81 + 1;
      *v81 = 2;
      a1[5] = v81 + 1;
      v46 = (__int64)(v81 + 1);
      goto LABEL_50;
    }
    v45 = *((unsigned int *)v44 - 1);
    if ( (_DWORD)v45 != *((_DWORD *)v44 - 2) )
      goto LABEL_49;
    v59 = (unsigned int)(3 * v45 + 1) >> 1;
    v60 = 16 * v59 + 8;
    if ( 16 * (int)v45 + 8 < (unsigned int)v60 && (unsigned int)v45 < v59 )
    {
LABEL_74:
      v61 = (unsigned int *)sub_186B300(v44 - 1, v60);
      v44 = v61 + 2;
      a1[5] = v61 + 2;
      *v61 = v59;
      v46 = (__int64)&v61[4 * v61[1] + 2];
      goto LABEL_50;
    }
LABEL_131:
    v118 = (char **)__cxa_allocate_exception(0x28u);
    sub_D47290(v124, "Overflow encountered when expanding vector");
    *v118 = (char *)off_1C63128;
    sub_2333C0(v118 + 1, v124);
    sub_233E40((__int64)v124);
    __cxa_throw(v118, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_32;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v57 = 3;
  if ( a3 != 3 )
    v57 = (a3 - 1) & 3;
  v58 = a1[7];
  v42 = v57;
  if ( v58 )
    v43 = *(_DWORD *)(v58 - 4);
  else
    v43 = 0;
  v44 = (_QWORD *)a1[5];
  if ( !v44 )
    goto LABEL_97;
  v45 = *((unsigned int *)v44 - 1);
  if ( (_DWORD)v45 == *((_DWORD *)v44 - 2) )
  {
    v59 = (unsigned int)(3 * v45 + 1) >> 1;
    v60 = 16 * v59 + 8;
    if ( 16 * (int)v45 + 8 >= (unsigned int)v60 || (unsigned int)v45 >= v59 )
      goto LABEL_131;
    goto LABEL_74;
  }
LABEL_49:
  v46 = (__int64)&v44[2 * v45];
LABEL_50:
  *(_QWORD *)v46 = a2;
  *(_DWORD *)(v46 + 12) = v43;
  *(_DWORD *)(v46 + 8) = v28 | (16 * v42);
  ++*((_DWORD *)v44 - 1);
  return 0;
}

