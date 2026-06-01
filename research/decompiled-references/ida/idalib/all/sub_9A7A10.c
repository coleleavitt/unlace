void __fastcall sub_9A7A10(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, unsigned __int64 a6)
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
  int *v48; // r10
  int *v49; // rdi
  _DWORD *j; // rdx
  int *v51; // r15
  __int64 v52; // rbp
  int *v53; // rbx
  int v54; // eax
  int v55; // edx
  int v56; // r9d
  __int64 v57; // r10
  unsigned int v58; // ecx
  int *v59; // r13
  int v60; // edx
  void *v61; // rax
  void *v62; // r12
  unsigned int v63; // r14d
  void *v64; // rsi
  __int64 v65; // rax
  _DWORD *v66; // rax
  int *v67; // r10
  int v68; // r11d
  int *v69; // rdi
  _DWORD *i; // rdx
  int *v71; // r15
  __int64 v72; // rbp
  int *v73; // rbx
  int v74; // eax
  int v75; // edx
  int v76; // r9d
  __int64 v77; // r11
  unsigned int v78; // edx
  int *v79; // r13
  int v80; // ecx
  void *v81; // rax
  void *v82; // r12
  unsigned int v83; // r14d
  void *v84; // rsi
  int v85; // esi
  int v86; // r10d
  __int64 v87; // rdi
  int v88; // ecx
  int v89; // r9d
  _DWORD *v90; // r8
  int v91; // esi
  int v92; // r10d
  __int64 v93; // r9
  int v94; // ecx
  int v95; // r8d
  _DWORD *v96; // rdi
  int v97; // eax
  int v98; // eax
  int v99; // eax
  int v100; // eax
  __int64 v101; // rdx
  _DWORD *v102; // rcx
  _DWORD *v103; // rdx
  __int64 v104; // rdx
  _DWORD *v105; // rcx
  _DWORD *v106; // rdx
  size_t v107; // rcx
  size_t v108; // rcx
  int v109; // edi
  int *v110; // rsi
  int v111; // edi
  int *v112; // rsi
  unsigned int v113; // [rsp+8h] [rbp-130h]
  int *v114; // [rsp+8h] [rbp-130h]
  __int64 v115; // [rsp+8h] [rbp-130h]
  int *v116; // [rsp+8h] [rbp-130h]
  __int64 v117; // [rsp+8h] [rbp-130h]
  unsigned __int64 v118; // [rsp+8h] [rbp-130h]
  int v119; // [rsp+14h] [rbp-124h]
  int v120; // [rsp+14h] [rbp-124h]
  int *v121; // [rsp+18h] [rbp-120h]
  int *v122; // [rsp+18h] [rbp-120h]
  __int64 v123; // [rsp+20h] [rbp-118h]
  __int64 v124; // [rsp+20h] [rbp-118h]
  int v125; // [rsp+28h] [rbp-110h]
  void *ptr; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v127; // [rsp+48h] [rbp-F0h]
  _BYTE v128[48]; // [rsp+50h] [rbp-E8h] BYREF
  int v129; // [rsp+80h] [rbp-B8h]
  void *v130; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v131; // [rsp+98h] [rbp-A0h]
  _BYTE v132[152]; // [rsp+A0h] [rbp-98h] BYREF

  v6 = a2;
  v7 = a1;
  v8 = *(unsigned int *)(a1 + 64);
  v130 = v132;
  v9 = (unsigned int)(v8 + 63) >> 6;
  v131 = 0xB00000000LL;
  ptr = v128;
  v127 = 0x600000000LL;
  if ( v9 > 6 )
  {
    v113 = v8;
    sub_2237220(&ptr, v128, v9, 8);
    memset(ptr, 0, 8LL * v9);
    LODWORD(v127) = v9;
    v8 = v113;
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
        *(_QWORD *)&v128[v41] = 0;
      }
      while ( v40 < 8 * v9 );
    }
    LODWORD(v127) = (unsigned int)(v8 + 63) >> 6;
  }
  v10 = *(unsigned int *)(a1 + 88);
  v11 = *(_DWORD *)(a2 + 48);
  v129 = v8;
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
        v118 = v44;
        sub_2237220(v17, v17 + 4, v22, 8);
        v16 = (unsigned int)v17[2];
        v44 = v118;
        v18 = v17[16];
        v21 = (unsigned int)(v16 + v118);
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
      v116 = *(int **)(a1 + 72);
      v65 = (((((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
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
      if ( (unsigned int)v65 < 0x40 )
        LODWORD(v65) = 64;
      *(_DWORD *)(a1 + 88) = v65;
      v66 = (_DWORD *)sub_22300B0(80LL * (unsigned int)v65, 8, 64, a4, v8, a6);
      v67 = v116;
      v68 = 37 * v11;
      *(_QWORD *)(a1 + 72) = v66;
      if ( v116 )
      {
        *(_QWORD *)(a1 + 80) = 0;
        v117 = 80 * v10;
        v69 = &v67[20 * v10];
        for ( i = &v66[20 * *(unsigned int *)(v7 + 88)]; i != v66; v66 += 20 )
          *v66 = -1;
        v71 = v67;
        v72 = v7;
        v73 = v69;
        v120 = v11;
        v122 = v67;
        v124 = v6;
        v125 = 37 * v11;
        while ( 1 )
        {
          v74 = *v71;
          if ( (unsigned int)(*v71 + 2) > 1 )
          {
            v75 = *(_DWORD *)(v72 + 88);
            if ( !v75 )
            {
              dword_0 = 0;
              BUG();
            }
            v76 = v75 - 1;
            v77 = *(_QWORD *)(v72 + 72);
            v78 = (v75 - 1) & (37 * v74);
            v79 = (int *)(v77 + 80LL * v78);
            v80 = *v79;
            if ( v74 != *v79 )
            {
              v111 = 1;
              v112 = nullptr;
              if ( v80 != -1 )
              {
                while ( 1 )
                {
                  if ( v80 == -2 && !v112 )
                    v112 = v79;
                  v78 = v76 & (v111 + v78);
                  v79 = (int *)(v77 + 80LL * v78);
                  v80 = *v79;
                  if ( v74 == *v79 )
                    break;
                  if ( v80 == -1 )
                  {
                    if ( v112 )
                      v79 = v112;
                    break;
                  }
                  ++v111;
                }
              }
            }
            *v79 = v74;
            v81 = v79 + 6;
            v82 = v71 + 6;
            *((_QWORD *)v79 + 2) = 0x600000000LL;
            v83 = v71[4];
            *((_QWORD *)v79 + 1) = v79 + 6;
            if ( !v83 )
            {
              v84 = *((void **)v71 + 1);
LABEL_77:
              v79[18] = v71[18];
              ++*(_DWORD *)(v72 + 80);
              if ( v82 != v84 )
                free(v84);
              goto LABEL_71;
            }
            v84 = *((void **)v71 + 1);
            if ( v79 + 2 == v71 + 2 )
              goto LABEL_77;
            if ( v82 == v84 )
            {
              v108 = 8LL * v83;
              if ( v83 <= 6uLL
                || (sub_2237220(v79 + 2, v79 + 6, v83, 8),
                    v81 = *((void **)v79 + 1),
                    v84 = *((void **)v71 + 1),
                    (v108 = 8LL * (unsigned int)v71[4]) != 0) )
              {
                memcpy(v81, v84, v108);
                v84 = *((void **)v71 + 1);
              }
              v79[4] = v83;
              v71[4] = 0;
              goto LABEL_77;
            }
            v79[4] = v83;
            v99 = v71[5];
            *((_QWORD *)v79 + 1) = v84;
            v79[5] = v99;
            v100 = v71[18];
            *((_QWORD *)v71 + 1) = v82;
            v71[5] = 0;
            v71[4] = 0;
            v79[18] = v100;
            ++*(_DWORD *)(v72 + 80);
          }
LABEL_71:
          v71 += 20;
          if ( v73 == v71 )
          {
            v7 = v72;
            v11 = v120;
            v6 = v124;
            operator delete(v122, v117, 8);
            v66 = *(_DWORD **)(v72 + 72);
            v91 = *(_DWORD *)(v72 + 88);
            v68 = v125;
            v42 = *(_DWORD *)(v72 + 80) + 1;
            goto LABEL_97;
          }
        }
      }
      v104 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0;
      v91 = v104;
      v105 = &v66[20 * v104];
      if ( v66 != v105 )
      {
        v106 = v66;
        do
        {
          *v106 = -1;
          v106 += 20;
        }
        while ( v105 != v106 );
      }
      v42 = 1;
LABEL_97:
      if ( v91 )
      {
        v92 = v91 - 1;
        v93 = (v91 - 1) & (unsigned int)v68;
        v14 = &v66[20 * v93];
        v94 = *v14;
        if ( v11 != *v14 )
        {
          v95 = 1;
          v96 = nullptr;
          if ( v94 != -1 )
          {
            while ( 1 )
            {
              if ( !v96 && v94 == -2 )
                v96 = v14;
              v93 = v92 & (unsigned int)(v93 + v95);
              v14 = &v66[20 * v93];
              v94 = *v14;
              if ( v11 == *v14 )
                break;
              if ( v94 == -1 )
              {
                if ( v96 )
                  v14 = v96;
                goto LABEL_44;
              }
              ++v95;
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
  v114 = *(int **)(a1 + 72);
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
  v47 = (_DWORD *)sub_22300B0(80LL * (unsigned int)v46, 8, 64, a4, v8, a6);
  v48 = v114;
  *(_QWORD *)(a1 + 72) = v47;
  if ( v114 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    v115 = 80 * v10;
    v49 = &v48[20 * v10];
    for ( j = &v47[20 * *(unsigned int *)(v7 + 88)]; j != v47; v47 += 20 )
      *v47 = -1;
    v51 = v48;
    if ( v48 != v49 )
    {
      v52 = v7;
      v53 = v49;
      v119 = v11;
      v121 = v48;
      v123 = v6;
      while ( 1 )
      {
        v54 = *v51;
        if ( (unsigned int)(*v51 + 2) > 1 )
        {
          v55 = *(_DWORD *)(v52 + 88);
          if ( !v55 )
          {
            dword_0 = 0;
            BUG();
          }
          v56 = v55 - 1;
          v57 = *(_QWORD *)(v52 + 72);
          v58 = (v55 - 1) & (37 * v54);
          v59 = (int *)(v57 + 80LL * v58);
          v60 = *v59;
          if ( *v59 != v54 )
          {
            v109 = 1;
            v110 = nullptr;
            if ( v60 != -1 )
            {
              while ( 1 )
              {
                if ( v60 == -2 && !v110 )
                  v110 = v59;
                v58 = v56 & (v109 + v58);
                v59 = (int *)(v57 + 80LL * v58);
                v60 = *v59;
                if ( v54 == *v59 )
                  break;
                if ( v60 == -1 )
                {
                  if ( v110 )
                    v59 = v110;
                  break;
                }
                ++v109;
              }
            }
          }
          *v59 = v54;
          v61 = v59 + 6;
          v62 = v51 + 6;
          *((_QWORD *)v59 + 2) = 0x600000000LL;
          v63 = v51[4];
          *((_QWORD *)v59 + 1) = v59 + 6;
          if ( !v63 )
          {
            v64 = *((void **)v51 + 1);
LABEL_63:
            v59[18] = v51[18];
            ++*(_DWORD *)(v52 + 80);
            if ( v64 != v62 )
              free(v64);
            goto LABEL_57;
          }
          v64 = *((void **)v51 + 1);
          if ( v59 + 2 == v51 + 2 )
            goto LABEL_63;
          if ( v64 == v62 )
          {
            v107 = 8LL * v63;
            if ( v63 <= 6uLL
              || (sub_2237220(v59 + 2, v59 + 6, v63, 8),
                  v61 = *((void **)v59 + 1),
                  v64 = *((void **)v51 + 1),
                  (v107 = 8LL * (unsigned int)v51[4]) != 0) )
            {
              memcpy(v61, v64, v107);
              v64 = *((void **)v51 + 1);
            }
            v59[4] = v63;
            v51[4] = 0;
            goto LABEL_63;
          }
          v59[4] = v63;
          v97 = v51[5];
          *((_QWORD *)v59 + 1) = v64;
          v59[5] = v97;
          v98 = v51[18];
          *((_QWORD *)v51 + 1) = v62;
          v51[5] = 0;
          v51[4] = 0;
          v59[18] = v98;
          ++*(_DWORD *)(v52 + 80);
        }
LABEL_57:
        v51 += 20;
        if ( v53 == v51 )
        {
          v7 = v52;
          v11 = v119;
          v48 = v121;
          v6 = v123;
          break;
        }
      }
    }
    operator delete(v48, v115, 8);
    v47 = *(_DWORD **)(v7 + 72);
    v85 = *(_DWORD *)(v7 + 88);
    v42 = *(_DWORD *)(v7 + 80) + 1;
  }
  else
  {
    v101 = *(unsigned int *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = 0;
    v85 = v101;
    v102 = &v47[20 * v101];
    if ( v47 != v102 )
    {
      v103 = v47;
      do
      {
        *v103 = -1;
        v103 += 20;
      }
      while ( v102 != v103 );
    }
    v42 = 1;
  }
  if ( !v85 )
    goto LABEL_166;
  v86 = v85 - 1;
  LODWORD(v87) = (v85 - 1) & (37 * v11);
  v14 = &v47[20 * (unsigned int)v87];
  v88 = *v14;
  if ( v11 != *v14 )
  {
    v89 = 1;
    v90 = nullptr;
    if ( v88 != -1 )
    {
      while ( 1 )
      {
        if ( v88 == -2 && !v90 )
          v90 = v14;
        v87 = v86 & (unsigned int)(v87 + v89);
        v14 = &v47[20 * v87];
        v88 = *v14;
        if ( v11 == *v14 )
          break;
        if ( v88 == -1 )
        {
          if ( v90 )
            v14 = v90;
          break;
        }
        ++v89;
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
  v24 = (unsigned int)v131;
  v25 = (unsigned int)v131 + 1LL;
  if ( v25 > HIDWORD(v131) )
  {
    sub_2237220(&v130, v132, v25, 8);
    v24 = (unsigned int)v131;
  }
  v26 = 1;
  *((_QWORD *)v130 + v24) = v6;
  v27 = (char *)ptr;
  v28 = (char *)v130;
  LODWORD(v24) = v131 + 1;
  LODWORD(v131) = v24;
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
      LODWORD(v131) = v24;
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
            if ( v24 + 1 > (unsigned __int64)HIDWORD(v131) )
            {
              sub_2237220(&v130, v132, v24 + 1, 8);
              v24 = (unsigned int)v131;
            }
            *((_QWORD *)v130 + v24) = v39;
            v24 = (unsigned int)(v131 + 1);
            LODWORD(v131) = v131 + 1;
          }
          v37 += 2;
        }
        while ( v37 != v38 );
        v27 = (char *)ptr;
        v28 = (char *)v130;
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
    LODWORD(v131) = 0;
  }
LABEL_30:
  if ( v27 != v128 )
  {
    free(v27);
    v28 = (char *)v130;
  }
  if ( v28 != v132 )
    free(v28);
}
