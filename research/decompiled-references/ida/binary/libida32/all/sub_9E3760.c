__int64 __fastcall sub_9E3760(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 *v26; // r9
  _QWORD *n; // rdx
  __int64 *ii; // rax
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r8d
  __int64 v32; // r11
  unsigned int v33; // edi
  _QWORD *v34; // rcx
  __int64 v35; // r10
  int v36; // esi
  int v37; // r8d
  __int64 v38; // rsi
  unsigned int v39; // edi
  __int64 v40; // r9
  int v41; // edi
  int v42; // edi
  int v43; // edx
  __int64 v44; // rsi
  unsigned __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  _QWORD *m; // rdx
  __int64 *v50; // rax
  __int64 v51; // rdx
  int v52; // edi
  int v53; // edi
  __int64 v54; // r10
  unsigned int v55; // esi
  _QWORD *v56; // rcx
  __int64 v57; // r9
  int v58; // esi
  int v59; // edi
  unsigned int v60; // r13d
  __int64 v61; // r8
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 *v66; // r9
  _QWORD *j; // rdx
  __int64 *k; // rax
  __int64 v69; // rdx
  int v70; // edi
  int v71; // edi
  __int64 v72; // r11
  unsigned int v73; // r8d
  _QWORD *v74; // rcx
  __int64 v75; // r10
  int v76; // esi
  int v77; // r8d
  unsigned int v78; // edi
  __int64 v79; // r9
  int v80; // esi
  unsigned __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  _QWORD *i; // rdx
  __int64 *v86; // rax
  __int64 v87; // rdx
  int v88; // edi
  int v89; // edi
  __int64 v90; // r10
  unsigned int v91; // esi
  _QWORD *v92; // rcx
  __int64 v93; // r9
  int v94; // esi
  int v95; // edi
  unsigned int v96; // r13d
  int v97; // r8d
  __int64 v98; // rcx
  _QWORD *v99; // rcx
  _QWORD *v100; // rdx
  __int64 v101; // rcx
  _QWORD *v102; // rcx
  _QWORD *v103; // rdx
  __int64 v104; // rcx
  _QWORD *v105; // rcx
  _QWORD *v106; // rdx
  __int64 v107; // rcx
  _QWORD *v108; // rcx
  _QWORD *v109; // rdx
  int v110; // r15d
  _QWORD *v111; // r13
  _QWORD *v112; // r11
  _QWORD *v113; // r13
  int v114; // r15d
  _QWORD *v115; // r11
  __int64 *v116; // r10
  int v117; // esi
  __int64 *v118; // r9
  int v119; // esi
  int v120; // [rsp+8h] [rbp-50h]
  int v121; // [rsp+8h] [rbp-50h]
  void *v122; // [rsp+18h] [rbp-40h] BYREF

  sub_9E2E70((__int64 (__fastcall ***)())&v122, (_QWORD *)a1, a3);
  v8 = (unsigned __int64)v122;
  if ( !v122 )
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
    v42 = 1;
    if ( v21 != -4096 )
    {
      while ( 1 )
      {
        if ( !v6 && v21 == -8192 )
          v6 = (__int64 *)v5;
        v7 = (unsigned int)(v42 + 1);
        v20 = v19 & (v42 + v20);
        v5 = (unsigned __int64)&v18[2 * v20];
        v21 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 == a2 )
          goto LABEL_9;
        if ( v21 == -4096 )
          break;
        ++v42;
      }
      if ( v6 )
        v5 = (unsigned __int64)v6;
    }
    v43 = *(_DWORD *)(a1 + 56) + 1;
    if ( 4 * v43 < 3 * v17 )
    {
      if ( v17 - *(_DWORD *)(a1 + 60) - v43 > v17 >> 3 )
      {
        v44 = *(_QWORD *)v5;
        goto LABEL_36;
      }
      v81 = (((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4) | (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2);
      v82 = ((((v81 >> 8) | v81) >> 16) | (v81 >> 8) | v81) + 1;
      if ( (unsigned int)v82 < 0x40 )
        LODWORD(v82) = 64;
      *(_DWORD *)(a1 + 64) = v82;
      v83 = (_QWORD *)sub_220C370(16LL * (unsigned int)v82, 8, 64, v5, v6, v7);
      *(_QWORD *)(a1 + 48) = v83;
      if ( v18 )
      {
        v84 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        for ( i = &v83[2 * v84]; i != v83; v83 += 2 )
          *v83 = -4096;
        v86 = v18;
        do
        {
          v87 = *v86;
          if ( *v86 != -8192 && v87 != -4096 )
          {
            v88 = *(_DWORD *)(a1 + 64);
            if ( !v88 )
            {
              *(_QWORD *)&dword_0 = *v86;
              BUG();
            }
            v89 = v88 - 1;
            v90 = *(_QWORD *)(a1 + 48);
            v91 = v89 & (((unsigned int)v87 >> 9) ^ ((unsigned int)v87 >> 4));
            v92 = (_QWORD *)(v90 + 16LL * v91);
            v93 = *v92;
            if ( v87 != *v92 && v93 != -4096 )
            {
              v121 = 1;
              v115 = nullptr;
              while ( 1 )
              {
                if ( !v115 && v93 == -8192 )
                  v115 = v92;
                v91 = v89 & (v121 + v91);
                v92 = (_QWORD *)(v90 + 16LL * v91);
                v93 = *v92;
                if ( v87 == *v92 )
                  break;
                if ( v93 == -4096 )
                {
                  if ( v115 )
                    v92 = v115;
                  break;
                }
                ++v121;
              }
            }
            *v92 = v87;
            v92[1] = v86[1];
            ++*(_DWORD *)(a1 + 56);
          }
          v86 += 2;
        }
        while ( &v18[2 * v17] != v86 );
        operator delete();
        v83 = *(_QWORD **)(a1 + 48);
        v94 = *(_DWORD *)(a1 + 64);
        v43 = *(_DWORD *)(a1 + 56) + 1;
      }
      else
      {
        v107 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v94 = v107;
        v108 = &v83[2 * v107];
        if ( v83 != v108 )
        {
          v109 = v83;
          do
          {
            *v109 = -4096;
            v109 += 2;
          }
          while ( v108 != v109 );
        }
        v43 = 1;
      }
      if ( v94 )
      {
        v95 = v94 - 1;
        v96 = (v94 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v5 = (unsigned __int64)&v83[2 * v96];
        v44 = *(_QWORD *)v5;
        if ( a2 == *(_QWORD *)v5 )
          goto LABEL_36;
        v97 = 1;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( v44 == -8192 && !v8 )
              v8 = v5;
            v96 = v95 & (v97 + v96);
            v5 = (unsigned __int64)&v83[2 * v96];
            v44 = *(_QWORD *)v5;
            if ( *(_QWORD *)v5 == a2 )
              break;
            if ( v44 == -4096 )
              goto LABEL_185;
            ++v97;
          }
LABEL_93:
          v44 = a2;
LABEL_36:
          *(_DWORD *)(a1 + 56) = v43;
          if ( v44 != -4096 )
            --*(_DWORD *)(a1 + 60);
          goto LABEL_38;
        }
        goto LABEL_72;
      }
    }
    else
    {
LABEL_56:
      v62 = (((((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
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
      v63 = ((v62 >> 16) | v62) + 1;
      if ( (unsigned int)v63 < 0x40 )
        LODWORD(v63) = 64;
      *(_DWORD *)(a1 + 64) = v63;
      v64 = (_QWORD *)sub_220C370(16LL * (unsigned int)v63, 8, 64, v5, v6, v7);
      *(_QWORD *)(a1 + 48) = v64;
      if ( v18 )
      {
        v65 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v66 = &v18[2 * v17];
        for ( j = &v64[2 * v65]; j != v64; v64 += 2 )
          *v64 = -4096;
        for ( k = v18; v66 != k; k += 2 )
        {
          v69 = *k;
          if ( *k != -4096 && v69 != -8192 )
          {
            v70 = *(_DWORD *)(a1 + 64);
            if ( !v70 )
            {
              *(_QWORD *)&dword_0 = *k;
              BUG();
            }
            v71 = v70 - 1;
            v72 = *(_QWORD *)(a1 + 48);
            v73 = v71 & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
            v74 = (_QWORD *)(v72 + 16LL * v73);
            v75 = *v74;
            if ( v69 != *v74 )
            {
              v113 = nullptr;
              v114 = 1;
              if ( v75 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v113 && v75 == -8192 )
                    v113 = v74;
                  v73 = v71 & (v114 + v73);
                  v74 = (_QWORD *)(v72 + 16LL * v73);
                  v75 = *v74;
                  if ( v69 == *v74 )
                    break;
                  if ( v75 == -4096 )
                  {
                    if ( v113 )
                      v74 = v113;
                    break;
                  }
                  ++v114;
                }
              }
            }
            *v74 = v69;
            v74[1] = k[1];
            ++*(_DWORD *)(a1 + 56);
          }
        }
        operator delete();
        v64 = *(_QWORD **)(a1 + 48);
        v76 = *(_DWORD *)(a1 + 64);
        v43 = *(_DWORD *)(a1 + 56) + 1;
      }
      else
      {
        v104 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v76 = v104;
        v105 = &v64[2 * v104];
        if ( v64 != v105 )
        {
          v106 = v64;
          do
          {
            *v106 = -4096;
            v106 += 2;
          }
          while ( v105 != v106 );
        }
        v43 = 1;
      }
      if ( v76 )
      {
        v77 = v76 - 1;
        v44 = a2;
        v78 = v77 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v5 = (unsigned __int64)&v64[2 * v78];
        v79 = *(_QWORD *)v5;
        if ( *(_QWORD *)v5 == a2 )
          goto LABEL_36;
        v80 = 1;
        if ( v79 != -4096 )
        {
          while ( 1 )
          {
            if ( !v8 && v79 == -8192 )
              v8 = v5;
            v78 = v77 & (v80 + v78);
            v5 = (unsigned __int64)&v64[2 * v78];
            v79 = *(_QWORD *)v5;
            if ( *(_QWORD *)v5 == a2 )
              goto LABEL_93;
            if ( v79 == -4096 )
            {
LABEL_185:
              if ( !v8 )
                break;
              v44 = *(_QWORD *)v8;
              v5 = v8;
              goto LABEL_36;
            }
            ++v80;
          }
        }
LABEL_72:
        *(_DWORD *)(a1 + 56) = v43;
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
  v122 = nullptr;
  if ( !v9 )
    goto LABEL_10;
  v11 = v9 - 1;
  v12 = v11 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v13 = &v10[2 * v12];
  v14 = *v13;
  if ( *v13 != a2 )
  {
    v41 = 1;
    v6 = nullptr;
    if ( v14 != -4096 )
    {
      while ( 1 )
      {
        if ( v14 == -8192 && !v6 )
          v6 = v13;
        v7 = (unsigned int)(v41 + 1);
        v12 = v11 & (v41 + v12);
        v13 = &v10[2 * v12];
        v14 = *v13;
        if ( *v13 == a2 )
          goto LABEL_4;
        if ( v14 == -4096 )
          break;
        ++v41;
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
        v38 = *v13;
        goto LABEL_25;
      }
      v45 = (((v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2)) >> 4) | (v11 >> 1) | v11 | (((v11 >> 1) | v11) >> 2);
      v46 = ((((v45 >> 8) | v45) >> 16) | (v45 >> 8) | v45) + 1;
      if ( (unsigned int)v46 < 0x40 )
        LODWORD(v46) = 64;
      *(_DWORD *)(a1 + 64) = v46;
      v47 = (_QWORD *)sub_220C370(16LL * (unsigned int)v46, 8, 64, v5, v6, v7);
      *(_QWORD *)(a1 + 48) = v47;
      if ( v10 )
      {
        v48 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        for ( m = &v47[2 * v48]; m != v47; v47 += 2 )
          *v47 = -4096;
        v50 = v10;
        do
        {
          v51 = *v50;
          if ( *v50 != -4096 && v51 != -8192 )
          {
            v52 = *(_DWORD *)(a1 + 64);
            if ( !v52 )
            {
              *(_QWORD *)&dword_0 = *v50;
              BUG();
            }
            v53 = v52 - 1;
            v54 = *(_QWORD *)(a1 + 48);
            v55 = v53 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
            v56 = (_QWORD *)(v54 + 16LL * v55);
            v57 = *v56;
            if ( v51 != *v56 && v57 != -4096 )
            {
              v120 = 1;
              v112 = nullptr;
              while ( 1 )
              {
                if ( !v112 && v57 == -8192 )
                  v112 = v56;
                v55 = v53 & (v120 + v55);
                v56 = (_QWORD *)(v54 + 16LL * v55);
                v57 = *v56;
                if ( v51 == *v56 )
                  break;
                if ( v57 == -4096 )
                {
                  if ( v112 )
                    v56 = v112;
                  break;
                }
                ++v120;
              }
            }
            *v56 = v51;
            v56[1] = v50[1];
            ++*(_DWORD *)(a1 + 56);
          }
          v50 += 2;
        }
        while ( &v10[2 * v9] != v50 );
        operator delete();
        v47 = *(_QWORD **)(a1 + 48);
        v58 = *(_DWORD *)(a1 + 64);
        LODWORD(v5) = *(_DWORD *)(a1 + 56) + 1;
      }
      else
      {
        v101 = *(unsigned int *)(a1 + 64);
        *(_QWORD *)(a1 + 56) = 0;
        v58 = v101;
        v102 = &v47[2 * v101];
        if ( v47 != v102 )
        {
          v103 = v47;
          do
          {
            *v103 = -4096;
            v103 += 2;
          }
          while ( v102 != v103 );
        }
        LODWORD(v5) = 1;
      }
      if ( v58 )
      {
        v59 = v58 - 1;
        v38 = a2;
        v60 = v59 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
        v13 = &v47[2 * v60];
        v61 = *v13;
        if ( *v13 == a2 )
        {
LABEL_25:
          *(_DWORD *)(a1 + 56) = v5;
          if ( v38 != -4096 )
            --*(_DWORD *)(a1 + 60);
          goto LABEL_27;
        }
        if ( v61 != -4096 )
        {
          v118 = &v47[2 * v60];
          v119 = 1;
          v13 = nullptr;
          while ( 1 )
          {
            if ( v61 == -8192 && !v13 )
              v13 = v118;
            v60 = v59 & (v119 + v60);
            v118 = &v47[2 * v60];
            v61 = *v118;
            if ( *v118 == a2 )
            {
              v38 = a2;
              v13 = &v47[2 * v60];
              goto LABEL_25;
            }
            if ( v61 == -4096 )
              break;
            ++v119;
          }
          if ( v13 )
            goto LABEL_31;
          v13 = &v47[2 * v60];
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
    v24 = (_QWORD *)sub_220C370(16LL * (unsigned int)v23, 8, 64, v5, v6, v7);
    *(_QWORD *)(a1 + 48) = v24;
    if ( v10 )
    {
      v25 = *(unsigned int *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v26 = &v10[2 * v9];
      for ( n = &v24[2 * v25]; n != v24; v24 += 2 )
        *v24 = -4096;
      for ( ii = v10; v26 != ii; ii += 2 )
      {
        v29 = *ii;
        if ( *ii != -8192 && v29 != -4096 )
        {
          v30 = *(_DWORD *)(a1 + 64);
          if ( !v30 )
          {
            *(_QWORD *)&dword_0 = *ii;
            BUG();
          }
          v31 = v30 - 1;
          v32 = *(_QWORD *)(a1 + 48);
          v33 = v31 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
          v34 = (_QWORD *)(v32 + 16LL * v33);
          v35 = *v34;
          if ( *v34 != v29 )
          {
            v110 = 1;
            v111 = nullptr;
            if ( v35 != -4096 )
            {
              while ( 1 )
              {
                if ( !v111 && v35 == -8192 )
                  v111 = v34;
                v33 = v31 & (v110 + v33);
                v34 = (_QWORD *)(v32 + 16LL * v33);
                v35 = *v34;
                if ( v29 == *v34 )
                  break;
                if ( v35 == -4096 )
                {
                  if ( v111 )
                    v34 = v111;
                  break;
                }
                ++v110;
              }
            }
          }
          *v34 = v29;
          v34[1] = ii[1];
          ++*(_DWORD *)(a1 + 56);
        }
      }
      operator delete();
      v24 = *(_QWORD **)(a1 + 48);
      v36 = *(_DWORD *)(a1 + 64);
      LODWORD(v5) = *(_DWORD *)(a1 + 56) + 1;
    }
    else
    {
      v98 = *(unsigned int *)(a1 + 64);
      *(_QWORD *)(a1 + 56) = 0;
      v36 = v98;
      v99 = &v24[2 * v98];
      if ( v24 != v99 )
      {
        v100 = v24;
        do
        {
          *v100 = -4096;
          v100 += 2;
        }
        while ( v99 != v100 );
      }
      LODWORD(v5) = 1;
    }
    if ( v36 )
    {
      v37 = v36 - 1;
      v38 = a2;
      v39 = v37 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
      v13 = &v24[2 * v39];
      v40 = *v13;
      if ( *v13 == a2 )
        goto LABEL_25;
      if ( v40 != -4096 )
      {
        v116 = &v24[2 * (v37 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4)))];
        v117 = 1;
        v13 = nullptr;
        while ( 1 )
        {
          if ( !v13 && v40 == -8192 )
            v13 = v116;
          v39 = v37 & (v117 + v39);
          v116 = &v24[2 * v39];
          v40 = *v116;
          if ( *v116 == a2 )
          {
            v38 = a2;
            v13 = &v24[2 * v39];
            goto LABEL_25;
          }
          if ( v40 == -4096 )
            break;
          ++v117;
        }
        if ( v13 )
          goto LABEL_31;
        v13 = &v24[2 * v39];
      }
      goto LABEL_55;
    }
LABEL_204:
    ++*(_DWORD *)(a1 + 56);
    BUG();
  }
LABEL_4:
  v13[1] = v8 | 4;
  v15 = v122;
  if ( v122 )
  {
    sub_9E6C20(v122);
    operator delete(v15, 8u);
  }
  return 0;
}

