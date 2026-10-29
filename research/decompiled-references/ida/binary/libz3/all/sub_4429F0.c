__int64 __fastcall sub_4429F0(_QWORD *a1, unsigned __int64 a2, int a3)
{
  char **v3; // r13
  char **v4; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // r13
  char **exception; // rbp
  char **v10; // rbp
  char **v11; // rbp
  char **v12; // rbp
  __int64 v16; // rdi
  unsigned int v17; // eax
  unsigned int v18; // r12d
  __int16 v19; // ax
  _QWORD *v20; // rdx
  __int64 v21; // r12
  unsigned int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 *v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // edx
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  unsigned __int64 *v33; // rdx
  _QWORD *v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // ebp
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  int v41; // eax
  int v42; // r14d
  __int64 v43; // r12
  _QWORD *v44; // rdx
  unsigned int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  _QWORD *v48; // rcx
  __int64 v49; // rax
  int v50; // edx
  __int64 v51; // rdx
  unsigned __int8 v53; // dl
  __int64 v54; // rax
  int v55; // r13d
  int v56; // r15d
  _QWORD *v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r13d
  size_t v61; // rsi
  unsigned int *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r14
  unsigned int v66; // r12d
  size_t v67; // rsi
  unsigned int *v68; // rax
  __int64 v69; // rdx
  unsigned __int8 v70; // cl
  unsigned int v71; // ecx
  size_t v72; // rsi
  unsigned int *v73; // rax
  _QWORD *v74; // rax
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  unsigned int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  __int64 *v80; // rcx
  __int64 v81; // rax
  int v82; // edx
  __int64 v83; // rax
  __int64 v84; // rbp
  _QWORD *v85; // rdx
  unsigned int v86; // eax
  __int64 v87; // rcx
  int v88; // eax
  __int64 *v89; // rcx
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  unsigned int v92; // r12d
  unsigned int v93; // ecx
  unsigned int *v94; // rax
  __int64 v95; // rcx
  unsigned int v96; // r12d
  unsigned int v97; // ecx
  unsigned int *v98; // rax
  __int64 v99; // rcx
  unsigned int v100; // r13d
  unsigned int v101; // ecx
  unsigned int *v102; // rax
  __int64 v103; // rsi
  unsigned int v104; // r13d
  unsigned int v105; // ecx
  unsigned int *v106; // rax
  __int64 v107; // rcx
  _QWORD *v108; // rdx
  _QWORD *v109; // rdx
  _QWORD *v110; // rax
  _QWORD *v111; // rdx
  unsigned int v112; // [rsp+Ch] [rbp-6Ch]
  __int64 v113; // [rsp+18h] [rbp-60h] BYREF
  __int64 v114[11]; // [rsp+20h] [rbp-58h] BYREF

  v16 = a1[18];
  v113 = 0;
  v17 = sub_4415C0(v16, a2, &v113);
  if ( (_BYTE)v17 )
  {
    v43 = v113;
    if ( v113 )
      ++*(_DWORD *)(v113 + 8);
    v44 = (_QWORD *)a1[7];
    if ( v44 )
    {
      v45 = *((_DWORD *)v44 - 1);
      if ( v45 == *((_DWORD *)v44 - 2) )
      {
        v60 = (3 * v45 + 1) >> 1;
        v61 = 8 * v60 + 8;
        if ( 8 * v45 + 8 >= (unsigned int)v61 || v45 >= v60 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v114, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v114);
          sub_233E40((__int64)v114);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v62 = (unsigned int *)sub_186B300(v44 - 1, v61);
        v63 = v62[1];
        v44 = v62 + 2;
        *v62 = v60;
        a1[7] = v62 + 2;
        LODWORD(v62) = v63;
        v48 = &v44[v63];
        v47 = (_DWORD)v62 + 1;
      }
      else
      {
        v46 = v45;
        v47 = v45 + 1;
        v48 = &v44[v46];
      }
    }
    else
    {
      v90 = (_QWORD *)sub_186B270(0x18u);
      v44 = v90 + 1;
      *v90 = 2;
      v47 = 1;
      a1[7] = v44;
      v48 = v44;
    }
    *v48 = v43;
    *((_DWORD *)v44 - 1) = v47;
    if ( v43 != a2 )
    {
      v49 = a1[5];
      if ( v49 )
      {
        v50 = *(_DWORD *)(v49 - 4);
        if ( v50 )
          *(_BYTE *)(v49 + 16LL * (unsigned int)(v50 - 1) + 8) |= 2u;
      }
    }
    v34 = (_QWORD *)a1[11];
    if ( v34 )
    {
      v35 = *((_DWORD *)v34 - 1);
      if ( v35 == *((_DWORD *)v34 - 2) )
      {
        v36 = (3 * v35 + 1) >> 1;
        v37 = 8 * v36 + 8;
        if ( 8 * v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v114, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v114);
          sub_233E40((__int64)v114);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_25;
      }
LABEL_42:
      v51 = v35;
      v41 = v35 + 1;
      v40 = &v34[v51];
      goto LABEL_43;
    }
LABEL_79:
    v75 = (_QWORD *)sub_186B270(0x18u);
    v34 = v75 + 1;
    *v75 = 2;
    v41 = 1;
    a1[11] = v34;
    v40 = v34;
    goto LABEL_43;
  }
  if ( a3 )
  {
    v18 = v17;
    v19 = *(_WORD *)(a2 + 4);
    if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
    {
      v42 = 0;
    }
    else
    {
      if ( v19 )
      {
        if ( v19 != 2 )
        {
          if ( v19 != 1 )
          {
LABEL_30:
            sub_1872CE0("");
            sub_1873130(114, 226);
          }
LABEL_64:
          sub_441F90(a1, a2);
          return 1;
        }
      }
      else if ( !*(_DWORD *)(a2 + 24) )
      {
        v20 = (_QWORD *)a1[7];
LABEL_8:
        v21 = a1[1];
        *(_DWORD *)(a2 + 8) += 2;
        if ( v20 )
        {
          v22 = *((_DWORD *)v20 - 1);
          if ( v22 == *((_DWORD *)v20 - 2) )
          {
            v104 = (3 * v22 + 1) >> 1;
            v105 = 8 * v104 + 8;
            if ( 8 * v22 + 8 >= v105 || v22 >= v104 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v114, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v106 = (unsigned int *)sub_186B300(v20 - 1, v105);
            v107 = v106[1];
            v20 = v106 + 2;
            *v106 = v104;
            a1[7] = v106 + 2;
            LODWORD(v106) = v107;
            v25 = &v20[v107];
            v24 = (_DWORD)v106 + 1;
          }
          else
          {
            v23 = v22;
            v24 = v22 + 1;
            v25 = &v20[v23];
          }
        }
        else
        {
          v111 = (_QWORD *)sub_186B270(0x18u);
          *v111 = 2;
          v24 = 1;
          v20 = v111 + 1;
          a1[7] = v20;
          v25 = v20;
        }
        *v25 = a2;
        *((_DWORD *)v20 - 1) = v24;
        v26 = a1[11];
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 - 4);
          if ( v27 == *(_DWORD *)(v26 - 8) )
          {
            v100 = (3 * v27 + 1) >> 1;
            v101 = 8 * v100 + 8;
            if ( 8 * v27 + 8 >= v101 || v27 >= v100 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v114, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v102 = (unsigned int *)sub_186B300((void *)(v26 - 8), v101);
            v103 = v102[1];
            *v102 = v100;
            a1[11] = v102 + 2;
            *(_QWORD *)&v102[2 * v103 + 2] = 0;
            v102[1] = v103 + 1;
          }
          else
          {
            *(_QWORD *)(v26 + 8LL * v27) = 0;
            *(_DWORD *)(v26 - 4) = v27 + 1;
          }
        }
        else
        {
          v110 = (_QWORD *)sub_186B270(0x18u);
          v110[1] = 0;
          a1[11] = v110 + 1;
          *v110 = 0x100000002LL;
        }
        if ( (*(_DWORD *)(a2 + 8))-- == 1 )
          sub_15D7BC0(v21, a2);
        return 1;
      }
      v64 = sub_1680FB0(a1[4], a2, 0);
      v65 = v64;
      if ( v64 )
      {
        v76 = (_QWORD *)a1[7];
        ++*(_DWORD *)(v64 + 8);
        if ( v76 )
        {
          v77 = *((_DWORD *)v76 - 1);
          if ( v77 == *((_DWORD *)v76 - 2) )
          {
            v92 = (3 * v77 + 1) >> 1;
            v93 = 8 * v92 + 8;
            if ( 8 * v77 + 8 >= v93 || v77 >= v92 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v114, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v94 = (unsigned int *)sub_186B300(v76 - 1, v93);
            v95 = v94[1];
            v76 = v94 + 2;
            *v94 = v92;
            a1[7] = v94 + 2;
            LODWORD(v94) = v95;
            v80 = &v76[v95];
            v79 = (_DWORD)v94 + 1;
          }
          else
          {
            v78 = v77;
            v79 = v77 + 1;
            v80 = &v76[v78];
          }
        }
        else
        {
          v108 = (_QWORD *)sub_186B270(0x18u);
          *v108 = 2;
          v79 = 1;
          v76 = v108 + 1;
          a1[7] = v76;
          v80 = v76;
        }
        *v80 = v65;
        *((_DWORD *)v76 - 1) = v79;
        if ( a2 != v65 )
        {
          v81 = a1[5];
          if ( v81 )
          {
            v82 = *(_DWORD *)(v81 - 4);
            if ( v82 )
              *(_BYTE *)(v81 + 16LL * (unsigned int)(v82 - 1) + 8) |= 2u;
          }
        }
        v83 = sub_1680FB0(a1[9], a2, 0);
        v84 = v83;
        if ( v83 )
          ++*(_DWORD *)(v83 + 8);
        v85 = (_QWORD *)a1[11];
        if ( v85 )
        {
          v86 = *((_DWORD *)v85 - 1);
          if ( v86 == *((_DWORD *)v85 - 2) )
          {
            v96 = (3 * v86 + 1) >> 1;
            v97 = 8 * v96 + 8;
            if ( 8 * v86 + 8 >= v97 || v86 >= v96 )
            {
              v7 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v114, "Overflow encountered when expanding vector");
              *v7 = (char *)off_1C63128;
              sub_2333C0(v7 + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v98 = (unsigned int *)sub_186B300(v85 - 1, v97);
            v99 = v98[1];
            v85 = v98 + 2;
            *v98 = v96;
            a1[11] = v98 + 2;
            LODWORD(v98) = v99;
            v89 = &v85[v99];
            v88 = (_DWORD)v98 + 1;
          }
          else
          {
            v87 = v86;
            v88 = v86 + 1;
            v89 = &v85[v87];
          }
        }
        else
        {
          v109 = (_QWORD *)sub_186B270(0x18u);
          *v109 = 2;
          v88 = 1;
          v85 = v109 + 1;
          a1[11] = v85;
          v89 = v85;
        }
        *v89 = v84;
        *((_DWORD *)v85 - 1) = v88;
        return 1;
      }
      v19 = *(_WORD *)(a2 + 4);
      v42 = 1;
    }
    if ( v19 != 1 )
    {
      if ( v19 == 2 )
      {
        v53 = 3;
        if ( a3 != 3 )
          v53 = (a3 - 1) & 3;
        v54 = a1[7];
        v55 = v53;
        if ( v54 )
          v56 = *(_DWORD *)(v54 - 4);
        else
          v56 = 0;
        v57 = (_QWORD *)a1[5];
        if ( v57 )
        {
          v58 = *((unsigned int *)v57 - 1);
          if ( (_DWORD)v58 == *((_DWORD *)v57 - 2) )
          {
            v71 = (unsigned int)(3 * v58 + 1) >> 1;
            v72 = 16 * v71 + 8;
            if ( 16 * (int)v58 + 8 >= (unsigned int)v72 || (unsigned int)v58 >= v71 )
            {
              v12 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v114, "Overflow encountered when expanding vector");
              *v12 = (char *)off_1C63128;
              sub_2333C0(v12 + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_77;
          }
LABEL_52:
          v59 = (__int64)&v57[2 * v58];
LABEL_53:
          *(_QWORD *)v59 = a2;
          *(_DWORD *)(v59 + 12) = v56;
          *(_DWORD *)(v59 + 8) = v42 | (16 * v55);
          ++*((_DWORD *)v57 - 1);
          return v18;
        }
      }
      else
      {
        if ( v19 )
          goto LABEL_30;
        v20 = (_QWORD *)a1[7];
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_8;
        v70 = 3;
        if ( a3 != 3 )
          v70 = (a3 - 1) & 3;
        v55 = v70;
        if ( v20 )
          v56 = *((_DWORD *)v20 - 1);
        else
          v56 = 0;
        v57 = (_QWORD *)a1[5];
        if ( v57 )
        {
          v58 = *((unsigned int *)v57 - 1);
          if ( (_DWORD)v58 == *((_DWORD *)v57 - 2) )
          {
            v71 = (unsigned int)(3 * v58 + 1) >> 1;
            v72 = 16 * v71 + 8;
            if ( 16 * (int)v58 + 8 >= (unsigned int)v72 || (unsigned int)v58 >= v71 )
            {
              v11 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v114, "Overflow encountered when expanding vector");
              *v11 = (char *)off_1C63128;
              sub_2333C0(v11 + 1, v114);
              sub_233E40((__int64)v114);
              __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_77:
            v112 = v71;
            v73 = (unsigned int *)sub_186B300(v57 - 1, v72);
            v57 = v73 + 2;
            a1[5] = v73 + 2;
            *v73 = v112;
            v59 = (__int64)&v73[4 * v73[1] + 2];
            goto LABEL_53;
          }
          goto LABEL_52;
        }
      }
      v91 = (_QWORD *)sub_186B270(0x28u);
      v57 = v91 + 1;
      *v91 = 2;
      a1[5] = v91 + 1;
      v59 = (__int64)(v91 + 1);
      goto LABEL_53;
    }
    goto LABEL_64;
  }
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v29 = (_QWORD *)a1[7];
  if ( v29 )
  {
    v30 = *((_DWORD *)v29 - 1);
    if ( v30 == *((_DWORD *)v29 - 2) )
    {
      v66 = (3 * v30 + 1) >> 1;
      v67 = 8 * v66 + 8;
      if ( 8 * v30 + 8 >= (unsigned int)v67 || v30 >= v66 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v114, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v114);
        sub_233E40((__int64)v114);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v68 = (unsigned int *)sub_186B300(v29 - 1, v67);
      v69 = v68[1];
      v29 = v68 + 2;
      *v68 = v66;
      a1[7] = v68 + 2;
      LODWORD(v68) = v69;
      v33 = &v29[v69];
      v32 = (_DWORD)v68 + 1;
    }
    else
    {
      v31 = v30;
      v32 = v30 + 1;
      v33 = &v29[v31];
    }
  }
  else
  {
    v74 = (_QWORD *)sub_186B270(0x18u);
    v29 = v74 + 1;
    *v74 = 2;
    v32 = 1;
    a1[7] = v29;
    v33 = v29;
  }
  *v33 = a2;
  *((_DWORD *)v29 - 1) = v32;
  v34 = (_QWORD *)a1[11];
  if ( !v34 )
    goto LABEL_79;
  v35 = *((_DWORD *)v34 - 1);
  if ( v35 != *((_DWORD *)v34 - 2) )
    goto LABEL_42;
  v36 = (3 * v35 + 1) >> 1;
  v37 = 8 * v36 + 8;
  if ( 8 * v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
  {
    v4 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v114, "Overflow encountered when expanding vector");
    *v4 = (char *)off_1C63128;
    sub_2333C0(v4 + 1, v114);
    sub_233E40((__int64)v114);
    __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
LABEL_25:
  v38 = (unsigned int *)sub_186B300(v34 - 1, v37);
  v39 = v38[1];
  v34 = v38 + 2;
  a1[11] = v38 + 2;
  *v38 = v36;
  LODWORD(v38) = v39;
  v40 = &v34[v39];
  v41 = (_DWORD)v38 + 1;
LABEL_43:
  *v40 = 0;
  *((_DWORD *)v34 - 1) = v41;
  return 1;
}

