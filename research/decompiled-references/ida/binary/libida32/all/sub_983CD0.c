void __fastcall sub_983CD0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r8
  unsigned int v9; // r13d
  __int64 v10; // r15
  int v11; // r13d
  __int64 v12; // r10
  unsigned int v13; // edx
  _DWORD *v14; // rsi
  int v15; // eax
  unsigned __int64 v16; // rdi
  _DWORD *v17; // r15
  int v18; // r13d
  unsigned int v19; // r8d
  int v20; // ecx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rdx
  int v23; // r13d
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  char v26; // r10
  char *v27; // rsi
  char *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned int v31; // ecx
  unsigned __int64 v32; // rdx
  __int64 *v33; // r9
  __int64 v34; // rcx
  char *v35; // r11
  unsigned int v36; // ecx
  __int64 *v37; // rbx
  __int64 *v38; // r14
  __int64 v39; // r13
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // edx
  void *v43; // rdi
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _DWORD *v47; // rax
  int *v48; // rdi
  _DWORD *j; // rdx
  int *v50; // r15
  __int64 v51; // rbp
  int *v52; // rbx
  int v53; // eax
  int v54; // edx
  int v55; // r9d
  __int64 v56; // r10
  unsigned int v57; // ecx
  int *v58; // r13
  int v59; // edx
  void *v60; // rax
  void *v61; // r12
  unsigned int v62; // r14d
  void *v63; // rsi
  __int64 v64; // rax
  _DWORD *v65; // rax
  int v66; // r11d
  int *v67; // rdi
  _DWORD *i; // rdx
  int *v69; // r15
  __int64 v70; // rbp
  int *v71; // rbx
  int v72; // eax
  int v73; // edx
  int v74; // r9d
  __int64 v75; // r11
  unsigned int v76; // edx
  int *v77; // r13
  int v78; // ecx
  void *v79; // rax
  void *v80; // r12
  unsigned int v81; // r14d
  void *v82; // rsi
  int v83; // esi
  int v84; // r10d
  __int64 v85; // rdi
  int v86; // ecx
  int v87; // r9d
  _DWORD *v88; // r8
  int v89; // esi
  int v90; // r10d
  __int64 v91; // r9
  int v92; // ecx
  int v93; // r8d
  _DWORD *v94; // rdi
  int v95; // eax
  int v96; // eax
  int v97; // eax
  int v98; // eax
  __int64 v99; // rdx
  _DWORD *v100; // rcx
  _DWORD *v101; // rdx
  __int64 v102; // rdx
  _DWORD *v103; // rcx
  _DWORD *v104; // rdx
  size_t v105; // rcx
  size_t v106; // rcx
  int v107; // edi
  int *v108; // rsi
  int v109; // edi
  int *v110; // rsi
  unsigned int v111; // [rsp+8h] [rbp-130h]
  int *v112; // [rsp+8h] [rbp-130h]
  int *v113; // [rsp+8h] [rbp-130h]
  unsigned __int64 v114; // [rsp+8h] [rbp-130h]
  int v115; // [rsp+14h] [rbp-124h]
  int v116; // [rsp+14h] [rbp-124h]
  __int64 v117; // [rsp+20h] [rbp-118h]
  __int64 v118; // [rsp+20h] [rbp-118h]
  int v119; // [rsp+28h] [rbp-110h]
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v121; // [rsp+48h] [rbp-F0h]
  _BYTE v122[48]; // [rsp+50h] [rbp-E8h] BYREF
  int v123; // [rsp+80h] [rbp-B8h]
  void *v124; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v125; // [rsp+98h] [rbp-A0h]
  _BYTE v126[152]; // [rsp+A0h] [rbp-98h] BYREF

  v6 = a2;
  v7 = a1;
  v8 = *(unsigned int *)(a1 + 64);
  v124 = v126;
  v9 = (unsigned int)(v8 + 63) >> 6;
  v125 = 0xB00000000LL;
  ptr = v122;
  v121 = 0x600000000LL;
  if ( v9 > 6 )
  {
    v111 = v8;
    sub_22134E0(&ptr, v122, v9, 8);
    memset(ptr, 0, 8LL * v9);
    LODWORD(v121) = v9;
    v8 = v111;
  }
  else
  {
    if ( v9 )
    {
      a4 = 0;
      v40 = 0;
      do
      {
        v41 = v40;
        v40 += 8;
        *(_QWORD *)&v122[v41] = 0;
      }
      while ( v40 < 8 * v9 );
    }
    LODWORD(v121) = (unsigned int)(v8 + 63) >> 6;
  }
  v10 = *(unsigned int *)(a1 + 88);
  v11 = *(_DWORD *)(a2 + 48);
  v123 = v8;
  v12 = *(_QWORD *)(a1 + 72);
  if ( (_DWORD)v10 )
  {
    a4 = (unsigned int)(v10 - 1);
    v13 = a4 & (37 * v11);
    v14 = (_DWORD *)(v12 + 80LL * v13);
    v15 = *v14;
    if ( v11 == *v14 )
      goto LABEL_6;
    v8 = 1;
    a6 = 0;
    if ( v15 == -1 )
      goto LABEL_42;
    while ( 1 )
    {
      if ( a6 || v15 != -2 )
        v14 = (_DWORD *)a6;
      a6 = (unsigned int)(v8 + 1);
      v13 = a4 & (v8 + v13);
      v15 = *(_DWORD *)(v12 + 80LL * v13);
      if ( v11 == v15 )
      {
        v14 = (_DWORD *)(v12 + 80LL * v13);
LABEL_6:
        v16 = (unsigned int)v14[4];
        v17 = v14 + 2;
        v18 = *(_DWORD *)(v7 + 64);
        v19 = v14[4];
        v20 = v14[18] & 0x3F;
        if ( v20 )
          *(_QWORD *)(*((_QWORD *)v14 + 1) + 8 * v16 - 8) &= ~(-1LL << v20);
        v14[18] = v18;
        v21 = (unsigned int)(v18 + 63) >> 6;
        v22 = v21;
        if ( v21 == v16 )
        {
          v21 = v19;
          goto LABEL_11;
        }
        if ( v21 < v16 )
        {
          v14[4] = v21;
          goto LABEL_11;
        }
        v44 = v21 - v16;
        if ( v21 <= (unsigned int)v14[5] )
        {
LABEL_81:
          v43 = (void *)(*(_QWORD *)v17 + 8 * v16);
          if ( !v44 )
            goto LABEL_49;
          goto LABEL_48;
        }
LABEL_80:
        v114 = v44;
        sub_22134E0(v17, v17 + 4, v22, 8);
        v16 = (unsigned int)v17[2];
        v44 = v114;
        v18 = v17[16];
        v21 = (unsigned int)(v16 + v114);
        goto LABEL_81;
      }
      if ( v15 == -1 )
        break;
      v8 = (unsigned int)a6;
      a6 = (unsigned __int64)v14;
      v14 = (_DWORD *)(v12 + 80LL * v13);
    }
    if ( !v14 )
      v14 = (_DWORD *)(v12 + 80LL * v13);
LABEL_42:
    v42 = *(_DWORD *)(a1 + 80) + 1;
    if ( 4 * v42 < (unsigned int)(3 * v10) )
    {
      if ( (int)v10 - *(_DWORD *)(a1 + 84) - v42 > (unsigned int)v10 >> 3 )
        goto LABEL_44;
      v113 = *(int **)(a1 + 72);
      v64 = (((((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
             | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
             | ((a4 | (a4 >> 1)) >> 2)
             | a4
             | (a4 >> 1)) >> 16)
           | ((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
           | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
           | ((a4 | (a4 >> 1)) >> 2)
           | a4
           | (a4 >> 1))
          + 1;
      if ( (unsigned int)v64 < 0x40 )
        LODWORD(v64) = 64;
      *(_DWORD *)(a1 + 88) = v64;
      v65 = (_DWORD *)sub_220C370(80LL * (unsigned int)v64, 8, 64, a4, v8, a6);
      v66 = 37 * v11;
      *(_QWORD *)(a1 + 72) = v65;
      if ( v113 )
      {
        *(_QWORD *)(a1 + 80) = 0;
        v67 = &v113[20 * v10];
        for ( i = &v65[20 * *(unsigned int *)(v7 + 88)]; i != v65; v65 += 20 )
          *v65 = -1;
        v69 = v113;
        v70 = v7;
        v71 = v67;
        v116 = v11;
        v118 = v6;
        v119 = 37 * v11;
        while ( 1 )
        {
          v72 = *v69;
          if ( (unsigned int)(*v69 + 2) > 1 )
          {
            v73 = *(_DWORD *)(v70 + 88);
            if ( !v73 )
            {
              dword_0 = 0;
              BUG();
            }
            v74 = v73 - 1;
            v75 = *(_QWORD *)(v70 + 72);
            v76 = (v73 - 1) & (37 * v72);
            v77 = (int *)(v75 + 80LL * v76);
            v78 = *v77;
            if ( v72 != *v77 )
            {
              v109 = 1;
              v110 = nullptr;
              if ( v78 != -1 )
              {
                while ( 1 )
                {
                  if ( v78 == -2 && !v110 )
                    v110 = v77;
                  v76 = v74 & (v109 + v76);
                  v77 = (int *)(v75 + 80LL * v76);
                  v78 = *v77;
                  if ( v72 == *v77 )
                    break;
                  if ( v78 == -1 )
                  {
                    if ( v110 )
                      v77 = v110;
                    break;
                  }
                  ++v109;
                }
              }
            }
            *v77 = v72;
            v79 = v77 + 6;
            v80 = v69 + 6;
            *((_QWORD *)v77 + 2) = 0x600000000LL;
            v81 = v69[4];
            *((_QWORD *)v77 + 1) = v77 + 6;
            if ( !v81 )
            {
              v82 = *((void **)v69 + 1);
LABEL_77:
              v77[18] = v69[18];
              ++*(_DWORD *)(v70 + 80);
              if ( v80 != v82 )
                free(v82);
              goto LABEL_71;
            }
            v82 = *((void **)v69 + 1);
            if ( v77 + 2 == v69 + 2 )
              goto LABEL_77;
            if ( v80 == v82 )
            {
              v106 = 8LL * v81;
              if ( v81 <= 6uLL
                || (sub_22134E0(v77 + 2, v77 + 6, v81, 8),
                    v79 = *((void **)v77 + 1),
                    v82 = *((void **)v69 + 1),
                    (v106 = 8LL * (unsigned int)v69[4]) != 0) )
              {
                memcpy(v79, v82, v106);
                v82 = *((void **)v69 + 1);
              }
              v77[4] = v81;
              v69[4] = 0;
              goto LABEL_77;
            }
            v77[4] = v81;
            v97 = v69[5];
            *((_QWORD *)v77 + 1) = v82;
            v77[5] = v97;
            v98 = v69[18];
            *((_QWORD *)v69 + 1) = v80;
            v69[5] = 0;
            v69[4] = 0;
            v77[18] = v98;
            ++*(_DWORD *)(v70 + 80);
          }
LABEL_71:
          v69 += 20;
          if ( v71 == v69 )
          {
            v7 = v70;
            v11 = v116;
            v6 = v118;
            operator delete();
            v65 = *(_DWORD **)(v70 + 72);
            v89 = *(_DWORD *)(v70 + 88);
            v66 = v119;
            v42 = *(_DWORD *)(v70 + 80) + 1;
            goto LABEL_97;
          }
        }
      }
      v102 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0;
      v89 = v102;
      v103 = &v65[20 * v102];
      if ( v65 != v103 )
      {
        v104 = v65;
        do
        {
          *v104 = -1;
          v104 += 20;
        }
        while ( v103 != v104 );
      }
      v42 = 1;
LABEL_97:
      if ( v89 )
      {
        v90 = v89 - 1;
        v91 = (v89 - 1) & (unsigned int)v66;
        v14 = &v65[20 * v91];
        v92 = *v14;
        if ( v11 != *v14 )
        {
          v93 = 1;
          v94 = nullptr;
          if ( v92 != -1 )
          {
            while ( 1 )
            {
              if ( !v94 && v92 == -2 )
                v94 = v14;
              v91 = v90 & (unsigned int)(v91 + v93);
              v14 = &v65[20 * v91];
              v92 = *v14;
              if ( v11 == *v14 )
                break;
              if ( v92 == -1 )
              {
                if ( v94 )
                  v14 = v94;
                goto LABEL_44;
              }
              ++v93;
            }
          }
        }
        goto LABEL_44;
      }
LABEL_166:
      ++*(_DWORD *)(v7 + 80);
      BUG();
    }
  }
  v112 = *(int **)(a1 + 72);
  v45 = (((((((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v10 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v10 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v10 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v10 - 1) | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v10 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v10 - 1) >> 1);
  v46 = ((v45 >> 16) | v45) + 1;
  if ( (unsigned int)v46 < 0x40 )
    LODWORD(v46) = 64;
  *(_DWORD *)(a1 + 88) = v46;
  v47 = (_DWORD *)sub_220C370(80LL * (unsigned int)v46, 8, 64, a4, v8, a6);
  *(_QWORD *)(a1 + 72) = v47;
  if ( v112 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    v48 = &v112[20 * v10];
    for ( j = &v47[20 * *(unsigned int *)(v7 + 88)]; j != v47; v47 += 20 )
      *v47 = -1;
    v50 = v112;
    if ( v112 != v48 )
    {
      v51 = v7;
      v52 = v48;
      v115 = v11;
      v117 = v6;
      while ( 1 )
      {
        v53 = *v50;
        if ( (unsigned int)(*v50 + 2) > 1 )
        {
          v54 = *(_DWORD *)(v51 + 88);
          if ( !v54 )
          {
            dword_0 = 0;
            BUG();
          }
          v55 = v54 - 1;
          v56 = *(_QWORD *)(v51 + 72);
          v57 = (v54 - 1) & (37 * v53);
          v58 = (int *)(v56 + 80LL * v57);
          v59 = *v58;
          if ( *v58 != v53 )
          {
            v107 = 1;
            v108 = nullptr;
            if ( v59 != -1 )
            {
              while ( 1 )
              {
                if ( v59 == -2 && !v108 )
                  v108 = v58;
                v57 = v55 & (v107 + v57);
                v58 = (int *)(v56 + 80LL * v57);
                v59 = *v58;
                if ( v53 == *v58 )
                  break;
                if ( v59 == -1 )
                {
                  if ( v108 )
                    v58 = v108;
                  break;
                }
                ++v107;
              }
            }
          }
          *v58 = v53;
          v60 = v58 + 6;
          v61 = v50 + 6;
          *((_QWORD *)v58 + 2) = 0x600000000LL;
          v62 = v50[4];
          *((_QWORD *)v58 + 1) = v58 + 6;
          if ( !v62 )
          {
            v63 = *((void **)v50 + 1);
LABEL_63:
            v58[18] = v50[18];
            ++*(_DWORD *)(v51 + 80);
            if ( v63 != v61 )
              free(v63);
            goto LABEL_57;
          }
          v63 = *((void **)v50 + 1);
          if ( v58 + 2 == v50 + 2 )
            goto LABEL_63;
          if ( v63 == v61 )
          {
            v105 = 8LL * v62;
            if ( v62 <= 6uLL
              || (sub_22134E0(v58 + 2, v58 + 6, v62, 8),
                  v60 = *((void **)v58 + 1),
                  v63 = *((void **)v50 + 1),
                  (v105 = 8LL * (unsigned int)v50[4]) != 0) )
            {
              memcpy(v60, v63, v105);
              v63 = *((void **)v50 + 1);
            }
            v58[4] = v62;
            v50[4] = 0;
            goto LABEL_63;
          }
          v58[4] = v62;
          v95 = v50[5];
          *((_QWORD *)v58 + 1) = v63;
          v58[5] = v95;
          v96 = v50[18];
          *((_QWORD *)v50 + 1) = v61;
          v50[5] = 0;
          v50[4] = 0;
          v58[18] = v96;
          ++*(_DWORD *)(v51 + 80);
        }
LABEL_57:
        v50 += 20;
        if ( v52 == v50 )
        {
          v7 = v51;
          v11 = v115;
          v6 = v117;
          break;
        }
      }
    }
    operator delete();
    v47 = *(_DWORD **)(v7 + 72);
    v83 = *(_DWORD *)(v7 + 88);
    v42 = *(_DWORD *)(v7 + 80) + 1;
  }
  else
  {
    v99 = *(unsigned int *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = 0;
    v83 = v99;
    v100 = &v47[20 * v99];
    if ( v47 != v100 )
    {
      v101 = v47;
      do
      {
        *v101 = -1;
        v101 += 20;
      }
      while ( v100 != v101 );
    }
    v42 = 1;
  }
  if ( !v83 )
    goto LABEL_166;
  v84 = v83 - 1;
  LODWORD(v85) = (v83 - 1) & (37 * v11);
  v14 = &v47[20 * (unsigned int)v85];
  v86 = *v14;
  if ( v11 != *v14 )
  {
    v87 = 1;
    v88 = nullptr;
    if ( v86 != -1 )
    {
      while ( 1 )
      {
        if ( v86 == -2 && !v88 )
          v88 = v14;
        v85 = v84 & (unsigned int)(v85 + v87);
        v14 = &v47[20 * v85];
        v86 = *v14;
        if ( v11 == *v14 )
          break;
        if ( v86 == -1 )
        {
          if ( v88 )
            v14 = v88;
          break;
        }
        ++v87;
      }
    }
  }
LABEL_44:
  *(_DWORD *)(v7 + 80) = v42;
  if ( *v14 != -1 )
    --*(_DWORD *)(v7 + 84);
  *v14 = v11;
  v43 = v14 + 6;
  v17 = v14 + 2;
  *((_QWORD *)v14 + 9) = 0;
  *((_QWORD *)v14 + 2) = 0x600000000LL;
  *(_OWORD *)(v14 + 6) = 0;
  *(_OWORD *)(v14 + 10) = 0;
  *(_OWORD *)(v14 + 14) = 0;
  v18 = *(_DWORD *)(v7 + 64);
  *((_QWORD *)v14 + 1) = v14 + 6;
  v14[18] = v18;
  v21 = (unsigned int)(v18 + 63) >> 6;
  v44 = v21;
  if ( (unsigned int)(v18 + 63) >> 6 )
  {
    v22 = (unsigned int)(v18 + 63) >> 6;
    if ( v14[5] >= (unsigned int)v21 )
    {
LABEL_48:
      memset(v43, 0, 8 * v44);
LABEL_49:
      v17[2] = v21;
      goto LABEL_11;
    }
    goto LABEL_80;
  }
LABEL_11:
  v23 = v18 & 0x3F;
  if ( v23 )
    *(_QWORD *)(*(_QWORD *)v17 + 8 * v21 - 8) &= ~(-1LL << v23);
  v24 = (unsigned int)v125;
  v25 = (unsigned int)v125 + 1LL;
  if ( v25 > HIDWORD(v125) )
  {
    sub_22134E0(&v124, v126, v25, 8);
    v24 = (unsigned int)v125;
  }
  v26 = 1;
  *((_QWORD *)v124 + v24) = v6;
  v27 = (char *)ptr;
  v28 = (char *)v124;
  LODWORD(v24) = v125 + 1;
  LODWORD(v125) = v24;
  if ( (_DWORD)v24 )
  {
    while ( 1 )
    {
      v29 = (unsigned int)v24;
      v24 = (unsigned int)(v24 - 1);
      v30 = *(_QWORD *)&v28[8 * v29 - 8];
      v31 = *(_DWORD *)(v30 + 48);
      v32 = v31 & 0x3F;
      v33 = (__int64 *)&v27[8 * (v31 >> 6)];
      v34 = *v33;
      if ( _bittest64(&v34, v32) )
        break;
LABEL_20:
      LODWORD(v125) = v24;
      *v33 = v34 | (1LL << v32);
      if ( !v26 )
        *(_QWORD *)(*(_QWORD *)v17 + 8LL * (*(_DWORD *)(v30 + 48) >> 6)) |= 1LL << *(_DWORD *)(v30 + 48);
      v37 = *(__int64 **)(v30 + 56);
      v38 = *(__int64 **)(v30 + 64);
      if ( v38 != v37 )
      {
        do
        {
          v39 = *v37;
          if ( *v37 )
          {
            if ( v24 + 1 > (unsigned __int64)HIDWORD(v125) )
            {
              sub_22134E0(&v124, v126, v24 + 1, 8);
              v24 = (unsigned int)v125;
            }
            *((_QWORD *)v124 + v24) = v39;
            v24 = (unsigned int)(v125 + 1);
            LODWORD(v125) = v125 + 1;
          }
          v37 += 2;
        }
        while ( v37 != v38 );
        v27 = (char *)ptr;
        v28 = (char *)v124;
      }
      v26 = 0;
      if ( !(_DWORD)v24 )
        goto LABEL_30;
    }
    v35 = &v28[8 * (unsigned int)v24 - 8];
    while ( (_DWORD)v24 )
    {
      v30 = *(_QWORD *)v35;
      v24 = (unsigned int)(v24 - 1);
      v35 -= 8;
      v36 = *(_DWORD *)(v30 + 48);
      v32 = v36 & 0x3F;
      v33 = (__int64 *)&v27[8 * (v36 >> 6)];
      v34 = *v33;
      if ( !_bittest64(&v34, v32) )
        goto LABEL_20;
    }
    LODWORD(v125) = 0;
  }
LABEL_30:
  if ( v27 != v122 )
  {
    free(v27);
    v28 = (char *)v124;
  }
  if ( v28 != v126 )
    free(v28);
}

