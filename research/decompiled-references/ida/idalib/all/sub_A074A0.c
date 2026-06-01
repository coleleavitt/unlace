__int64 __fastcall sub_A074A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rcx
  __int64 *v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rbp
  unsigned int v9; // r15d
  __int64 *v10; // r14
  unsigned __int64 v11; // rsi
  unsigned int v12; // ecx
  __int64 *v13; // rdx
  __int64 v14; // rax
  void *v15; // rbx
  unsigned int v17; // r15d
  __int64 *v18; // r14
  unsigned __int64 v19; // rsi
  unsigned int v20; // edx
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 *v27; // r9
  _QWORD *n; // rdx
  __int64 *ii; // rax
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r8d
  __int64 v33; // r11
  unsigned int v34; // edi
  _QWORD *v35; // rcx
  __int64 v36; // r10
  int v37; // esi
  int v38; // r8d
  __int64 v39; // rsi
  unsigned int v40; // edi
  __int64 v41; // r9
  int v42; // edi
  int v43; // edi
  int v44; // edx
  __int64 v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r15
  _QWORD *m; // rdx
  __int64 *v52; // rax
  __int64 v53; // rdx
  int v54; // edi
  int v55; // edi
  __int64 v56; // r10
  unsigned int v57; // esi
  _QWORD *v58; // rcx
  __int64 v59; // r9
  int v60; // esi
  int v61; // edi
  unsigned int v62; // r13d
  __int64 v63; // r8
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 *v69; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v72; // rdx
  int v73; // edi
  int v74; // edi
  __int64 v75; // r11
  unsigned int v76; // r8d
  _QWORD *v77; // rcx
  __int64 v78; // r10
  int v79; // esi
  int v80; // r8d
  unsigned int v81; // edi
  __int64 v82; // r9
  int v83; // esi
  unsigned __int64 v84; // rax
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r15
  _QWORD *i; // rdx
  __int64 *v90; // rax
  __int64 v91; // rdx
  int v92; // edi
  int v93; // edi
  __int64 v94; // r10
  unsigned int v95; // esi
  _QWORD *v96; // rcx
  __int64 v97; // r9
  int v98; // esi
  int v99; // edi
  unsigned int v100; // r13d
  int v101; // r8d
  __int64 v102; // rcx
  _QWORD *v103; // rcx
  _QWORD *v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rcx
  _QWORD *v107; // rdx
  __int64 v108; // rcx
  _QWORD *v109; // rcx
  _QWORD *v110; // rdx
  __int64 v111; // rcx
  _QWORD *v112; // rcx
  _QWORD *v113; // rdx
  int v114; // r15d
  _QWORD *v115; // r13
  _QWORD *v116; // r11
  _QWORD *v117; // r13
  int v118; // r15d
  _QWORD *v119; // r11
  __int64 *v120; // r10
  int v121; // esi
  __int64 *v122; // r9
  int v123; // esi
  int v124; // [rsp+8h] [rbp-50h]
  int v125; // [rsp+8h] [rbp-50h]
  void *v126; // [rsp+18h] [rbp-40h] BYREF

  sub_A06BB0((__int64 (__fastcall ***)())&v126, (_QWORD *)a1, a3);
  v8 = (unsigned __int64)v126;
  if ( !v126 )
  {
    v17 = *(_DWORD *)(a1 + 64);
    v18 = *(__int64 **)(a1 + 48);
    if ( !v17 )
      goto LABEL_56;
    v19 = v17 - 1;
    v20 = v19 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v5 = (unsigned __int64)&v18[2 * v20];
    v21 = *(_QWORD *)v5;
    if ( a2 == *(_QWORD *)v5 )
    {
LABEL_9:
      *(_QWORD *)(v5 + 8) = 0;
      return 1;
    }
    v6 = nullptr;
    v43 = 1;
    if ( v21 != -4096 )
    {
      while ( 1 )
      {
        if ( !v6 && v21 == -8192 )
          v6 = (__int64 *)v5;
        v7 = (unsigned int)(v43 + 1);
        v20 = v19 & (v43 + v20);
        v5 = (unsigned __int64)&v18[2 * v20];
        v21 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 == a2 )
          goto LABEL_9;
        if ( v21 == -4096 )
          break;
        ++v43;
      }
      if ( v6 )
        v5 = (unsigned __int64)v6;
    }
    v44 = *(_DWORD *)(a1 + 56) + 1;
    if ( 4 * v44 < 3 * v17 )
    {
      if ( v17 - *(_DWORD *)(a1 + 60) - v44 > v17 >> 3 )
      {
        v45 = *(_QWORD *)v5;
        goto LABEL_36;
      }
      v84 = (((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4) | (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2);
      v85 = ((((v84 >> 8) | v84) >> 16) | (v84 >> 8) | v84) + 1;
      if ( (unsigned int)v85 < 0x40 )
        LODWORD(v85) = 64;
      *(_DWORD *)(a1 + 64) = v85;
      v86 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v85, 8, 64, v5, v6, v7);
      *(_QWORD *)(a1 + 48) = v86;
      if ( v18 )
      {
        v87 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v88 = 2LL * v17;
        for ( i = &v86[2 * v87]; i != v86; v86 += 2 )
          *v86 = -4096;
        v90 = v18;
        do
        {
          v91 = *v90;
          if ( *v90 != -8192 && v91 != -4096 )
          {
            v92 = *(_DWORD *)(a1 + 64);
            if ( !v92 )
            {
              *(_QWORD *)&dword_0 = *v90;
              BUG();
            }
            v93 = v92 - 1;
            v94 = *(_QWORD *)(a1 + 48);
            v95 = v93 & (((unsigned int)v91 >> 9) ^ ((unsigned int)v91 >> 4));
            v96 = (_QWORD *)(v94 + 16LL * v95);
            v97 = *v96;
            if ( v91 != *v96 && v97 != -4096 )
            {
              v125 = 1;
              v119 = nullptr;
              while ( 1 )
              {
                if ( !v119 && v97 == -8192 )
                  v119 = v96;
                v95 = v93 & (v125 + v95);
                v96 = (_QWORD *)(v94 + 16LL * v95);
                v97 = *v96;
                if ( v91 == *v96 )
                  break;
                if ( v97 == -4096 )
                {
                  if ( v119 )
                    v96 = v119;
                  break;
                }
                ++v125;
              }
            }
            *v96 = v91;
            v96[1] = v90[1];
            ++*(_DWORD *)(a1 + 56);
          }
          v90 += 2;
        }
        while ( &v18[v88] != v90 );
        operator delete(v18, v88 * 8, 8);
        v86 = *(_QWORD **)(a1 + 48);
        v98 = *(_DWORD *)(a1 + 64);
        v44 = *(_DWORD *)(a1 + 56) + 1;
      }
      else
      {
        v111 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v98 = v111;
        v112 = &v86[2 * v111];
        if ( v86 != v112 )
        {
          v113 = v86;
          do
          {
            *v113 = -4096;
            v113 += 2;
          }
          while ( v112 != v113 );
        }
        v44 = 1;
      }
      if ( v98 )
      {
        v99 = v98 - 1;
        v100 = (v98 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v5 = (unsigned __int64)&v86[2 * v100];
        v45 = *(_QWORD *)v5;
        if ( a2 == *(_QWORD *)v5 )
          goto LABEL_36;
        v101 = 1;
        if ( v45 != -4096 )
        {
          while ( 1 )
          {
            if ( v45 == -8192 && !v8 )
              v8 = v5;
            v100 = v99 & (v101 + v100);
            v5 = (unsigned __int64)&v86[2 * v100];
            v45 = *(_QWORD *)v5;
            if ( *(_QWORD *)v5 == a2 )
              break;
            if ( v45 == -4096 )
              goto LABEL_185;
            ++v101;
          }
LABEL_93:
          v45 = a2;
LABEL_36:
          *(_DWORD *)(a1 + 56) = v44;
          if ( v45 != -4096 )
            --*(_DWORD *)(a1 + 60);
          goto LABEL_38;
        }
        goto LABEL_72;
      }
    }
    else
    {
LABEL_56:
      v64 = (((((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
              | (2 * v17 - 1)
              | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 4)
            | (((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
            | (2 * v17 - 1)
            | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 8)
          | (((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
            | (2 * v17 - 1)
            | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 4)
          | (((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
          | (2 * v17 - 1)
          | ((unsigned __int64)(2 * v17 - 1) >> 1);
      v65 = ((v64 >> 16) | v64) + 1;
      if ( (unsigned int)v65 < 0x40 )
        LODWORD(v65) = 64;
      *(_DWORD *)(a1 + 64) = v65;
      v66 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v65, 8, 64, v5, v6, v7);
      *(_QWORD *)(a1 + 48) = v66;
      if ( v18 )
      {
        v67 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v68 = 2LL * v17;
        v69 = &v18[v68];
        for ( j = &v66[2 * v67]; j != v66; v66 += 2 )
          *v66 = -4096;
        for ( k = v18; v69 != k; k += 2 )
        {
          v72 = *k;
          if ( *k != -4096 && v72 != -8192 )
          {
            v73 = *(_DWORD *)(a1 + 64);
            if ( !v73 )
            {
              *(_QWORD *)&dword_0 = *k;
              BUG();
            }
            v74 = v73 - 1;
            v75 = *(_QWORD *)(a1 + 48);
            v76 = v74 & (((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4));
            v77 = (_QWORD *)(v75 + 16LL * v76);
            v78 = *v77;
            if ( v72 != *v77 )
            {
              v117 = nullptr;
              v118 = 1;
              if ( v78 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v117 && v78 == -8192 )
                    v117 = v77;
                  v76 = v74 & (v118 + v76);
                  v77 = (_QWORD *)(v75 + 16LL * v76);
                  v78 = *v77;
                  if ( v72 == *v77 )
                    break;
                  if ( v78 == -4096 )
                  {
                    if ( v117 )
                      v77 = v117;
                    break;
                  }
                  ++v118;
                }
              }
            }
            *v77 = v72;
            v77[1] = k[1];
            ++*(_DWORD *)(a1 + 56);
          }
        }
        operator delete(v18, v68 * 8, 8);
        v66 = *(_QWORD **)(a1 + 48);
        v79 = *(_DWORD *)(a1 + 64);
        v44 = *(_DWORD *)(a1 + 56) + 1;
      }
      else
      {
        v108 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v79 = v108;
        v109 = &v66[2 * v108];
        if ( v66 != v109 )
        {
          v110 = v66;
          do
          {
            *v110 = -4096;
            v110 += 2;
          }
          while ( v109 != v110 );
        }
        v44 = 1;
      }
      if ( v79 )
      {
        v80 = v79 - 1;
        v45 = a2;
        v81 = v80 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v5 = (unsigned __int64)&v66[2 * v81];
        v82 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 == a2 )
          goto LABEL_36;
        v83 = 1;
        if ( v82 != -4096 )
        {
          while ( 1 )
          {
            if ( !v8 && v82 == -8192 )
              v8 = v5;
            v81 = v80 & (v83 + v81);
            v5 = (unsigned __int64)&v66[2 * v81];
            v82 = *(_QWORD *)v5;
            if ( *(_QWORD *)v5 == a2 )
              goto LABEL_93;
            if ( v82 == -4096 )
            {
LABEL_185:
              if ( !v8 )
                break;
              v45 = *(_QWORD *)v8;
              v5 = v8;
              goto LABEL_36;
            }
            ++v83;
          }
        }
LABEL_72:
        *(_DWORD *)(a1 + 56) = v44;
LABEL_38:
        *(_QWORD *)v5 = a2;
        *(_QWORD *)(v5 + 8) = 0;
        goto LABEL_9;
      }
    }
    ++*(_DWORD *)(a1 + 56);
    BUG();
  }
  v9 = *(_DWORD *)(a1 + 64);
  v10 = *(__int64 **)(a1 + 48);
  v126 = nullptr;
  if ( !v9 )
    goto LABEL_10;
  v11 = v9 - 1;
  v12 = v11 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v13 = &v10[2 * v12];
  v14 = *v13;
  if ( *v13 != a2 )
  {
    v42 = 1;
    v6 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v6 )
          v6 = v13;
        v7 = (unsigned int)(v42 + 1);
        v12 = v11 & (v42 + v12);
        v13 = &v10[2 * v12];
        v14 = *v13;
        if ( *v13 == a2 )
          goto LABEL_4;
        if ( v14 == -4096 )
          break;
        ++v42;
      }
      if ( v6 )
        v13 = v6;
    }
    v5 = (unsigned int)(*(_DWORD *)(a1 + 56) + 1);
    if ( 4 * (int)v5 < 3 * v9 )
    {
      if ( v9 - *(_DWORD *)(a1 + 60) - (unsigned int)v5 > v9 >> 3 )
      {
LABEL_31:
        v39 = *v13;
        goto LABEL_25;
      }
      v46 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v47 = ((((v46 >> 8) | v46) >> 16) | (v46 >> 8) | v46) + 1;
      if ( (unsigned int)v47 < 0x40 )
        LODWORD(v47) = 64;
      *(_DWORD *)(a1 + 64) = v47;
      v48 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v47, 8, 64, v5, v6, v7);
      *(_QWORD *)(a1 + 48) = v48;
      if ( v10 )
      {
        v49 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v50 = 2LL * v9;
        for ( m = &v48[2 * v49]; m != v48; v48 += 2 )
          *v48 = -4096;
        v52 = v10;
        do
        {
          v53 = *v52;
          if ( *v52 != -4096 && v53 != -8192 )
          {
            v54 = *(_DWORD *)(a1 + 64);
            if ( !v54 )
            {
              *(_QWORD *)&dword_0 = *v52;
              BUG();
            }
            v55 = v54 - 1;
            v56 = *(_QWORD *)(a1 + 48);
            v57 = v55 & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
            v58 = (_QWORD *)(v56 + 16LL * v57);
            v59 = *v58;
            if ( v53 != *v58 && v59 != -4096 )
            {
              v124 = 1;
              v116 = nullptr;
              while ( 1 )
              {
                if ( !v116 && v59 == -8192 )
                  v116 = v58;
                v57 = v55 & (v124 + v57);
                v58 = (_QWORD *)(v56 + 16LL * v57);
                v59 = *v58;
                if ( v53 == *v58 )
                  break;
                if ( v59 == -4096 )
                {
                  if ( v116 )
                    v58 = v116;
                  break;
                }
                ++v124;
              }
            }
            *v58 = v53;
            v58[1] = v52[1];
            ++*(_DWORD *)(a1 + 56);
          }
          v52 += 2;
        }
        while ( &v10[v50] != v52 );
        operator delete(v10, v50 * 8, 8);
        v48 = *(_QWORD **)(a1 + 48);
        v60 = *(_DWORD *)(a1 + 64);
        LODWORD(v5) = *(_DWORD *)(a1 + 56) + 1;
      }
      else
      {
        v105 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v60 = v105;
        v106 = &v48[2 * v105];
        if ( v48 != v106 )
        {
          v107 = v48;
          do
          {
            *v107 = -4096;
            v107 += 2;
          }
          while ( v106 != v107 );
        }
        LODWORD(v5) = 1;
      }
      if ( v60 )
      {
        v61 = v60 - 1;
        v39 = a2;
        v62 = v61 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v13 = &v48[2 * v62];
        v63 = *v13;
        if ( *v13 == a2 )
        {
LABEL_25:
          *(_DWORD *)(a1 + 56) = v5;
          if ( v39 != -4096 )
            --*(_DWORD *)(a1 + 60);
          goto LABEL_27;
        }
        if ( v63 != -4096 )
        {
          v122 = &v48[2 * v62];
          v123 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v63 == -8192 && !v13 )
              v13 = v122;
            v62 = v61 & (v123 + v62);
            v122 = &v48[2 * v62];
            v63 = *v122;
            if ( *v122 == a2 )
            {
              v39 = a2;
              v13 = &v48[2 * v62];
              goto LABEL_25;
            }
            if ( v63 == -4096 )
              break;
            ++v123;
          }
          if ( v13 )
            goto LABEL_31;
          v13 = &v48[2 * v62];
        }
LABEL_55:
        *(_DWORD *)(a1 + 56) = v5;
LABEL_27:
        *v13 = a2;
        v13[1] = 0;
        goto LABEL_4;
      }
      goto LABEL_204;
    }
LABEL_10:
    v22 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
            | (2 * v9 - 1)
            | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
          | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 8)
        | (((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
          | (2 * v9 - 1)
          | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 4)
        | (((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
        | (2 * v9 - 1)
        | ((unsigned __int64)(2 * v9 - 1) >> 1);
    v23 = ((v22 >> 16) | v22) + 1;
    if ( (unsigned int)v23 < 0x40 )
      LODWORD(v23) = 64;
    *(_DWORD *)(a1 + 64) = v23;
    v24 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v23, 8, 64, v5, v6, v7);
    *(_QWORD *)(a1 + 48) = v24;
    if ( v10 )
    {
      v25 = *(unsigned int *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v26 = 2LL * v9;
      v27 = &v10[v26];
      for ( n = &v24[2 * v25]; n != v24; v24 += 2 )
        *v24 = -4096;
      for ( ii = v10; v27 != ii; ii += 2 )
      {
        v30 = *ii;
        if ( *ii != -8192 && v30 != -4096 )
        {
          v31 = *(_DWORD *)(a1 + 64);
          if ( !v31 )
          {
            *(_QWORD *)&dword_0 = *ii;
            BUG();
          }
          v32 = v31 - 1;
          v33 = *(_QWORD *)(a1 + 48);
          v34 = v32 & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
          v35 = (_QWORD *)(v33 + 16LL * v34);
          v36 = *v35;
          if ( *v35 != v30 )
          {
            v114 = 1;
            v115 = nullptr;
            if ( v36 != -4096 )
            {
              while ( 1 )
              {
                if ( !v115 && v36 == -8192 )
                  v115 = v35;
                v34 = v32 & (v114 + v34);
                v35 = (_QWORD *)(v33 + 16LL * v34);
                v36 = *v35;
                if ( v30 == *v35 )
                  break;
                if ( v36 == -4096 )
                {
                  if ( v115 )
                    v35 = v115;
                  break;
                }
                ++v114;
              }
            }
          }
          *v35 = v30;
          v35[1] = ii[1];
          ++*(_DWORD *)(a1 + 56);
        }
      }
      operator delete(v10, v26 * 8, 8);
      v24 = *(_QWORD **)(a1 + 48);
      v37 = *(_DWORD *)(a1 + 64);
      LODWORD(v5) = *(_DWORD *)(a1 + 56) + 1;
    }
    else
    {
      v102 = *(unsigned int *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v37 = v102;
      v103 = &v24[2 * v102];
      if ( v24 != v103 )
      {
        v104 = v24;
        do
        {
          *v104 = -4096;
          v104 += 2;
        }
        while ( v103 != v104 );
      }
      LODWORD(v5) = 1;
    }
    if ( v37 )
    {
      v38 = v37 - 1;
      v39 = a2;
      v40 = v38 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v13 = &v24[2 * v40];
      v41 = *v13;
      if ( *v13 == a2 )
        goto LABEL_25;
      if ( v41 != -4096 )
      {
        v120 = &v24[2 * (v38 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
        v121 = 1;
        v13 = nullptr;
        while ( 1 )
        {
          if ( !v13 && v41 == -8192 )
            v13 = v120;
          v40 = v38 & (v121 + v40);
          v120 = &v24[2 * v40];
          v41 = *v120;
          if ( *v120 == a2 )
          {
            v39 = a2;
            v13 = &v24[2 * v40];
            goto LABEL_25;
          }
          if ( v41 == -4096 )
            break;
          ++v121;
        }
        if ( v13 )
          goto LABEL_31;
        v13 = &v24[2 * v40];
      }
      goto LABEL_55;
    }
LABEL_204:
    ++*(_DWORD *)(a1 + 56);
    BUG();
  }
LABEL_4:
  v13[1] = v8 | 4;
  v15 = v126;
  if ( v126 )
  {
    sub_A0A960(v126);
    operator delete(v15, 8u);
  }
  return 0;
}
