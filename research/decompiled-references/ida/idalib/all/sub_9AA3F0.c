__int64 __fastcall sub_9AA3F0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v8; // rbp
  unsigned int v9; // r15d
  __int64 *v10; // r13
  unsigned int v11; // edi
  __int64 result; // rax
  int v13; // r14d
  unsigned int v14; // esi
  __int64 *v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r15d
  __int64 *v18; // r13
  unsigned __int64 v19; // rsi
  unsigned int v20; // ecx
  int v21; // edi
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rdx
  __int64 v27; // rsi
  int v28; // r10d
  __int64 *v29; // r9
  _QWORD *v30; // rcx
  __int64 *v31; // rdx
  int j; // r15d
  __int64 v33; // rcx
  unsigned int v34; // r8d
  __int64 v35; // rdi
  __int64 v36; // r11
  int v37; // ecx
  int v38; // esi
  int v39; // r8d
  __int64 v40; // rsi
  unsigned int v41; // edi
  __int64 v42; // r9
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  int v46; // r9d
  __int64 v47; // r15
  _QWORD *v48; // rcx
  __int64 *v49; // rdx
  int v50; // r11d
  __int64 v51; // rcx
  unsigned int v52; // edi
  __int64 v53; // rsi
  __int64 v54; // r10
  int v55; // ecx
  int v56; // esi
  int v57; // edi
  unsigned int v58; // r14d
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  _QWORD *v62; // rdx
  __int64 v63; // rsi
  int v64; // r10d
  __int64 *v65; // r9
  _QWORD *v66; // rcx
  __int64 *v67; // rdx
  int i; // r15d
  __int64 v69; // rcx
  unsigned int v70; // r8d
  __int64 v71; // rdi
  __int64 v72; // r11
  int v73; // ecx
  int v74; // esi
  int v75; // r8d
  unsigned int v76; // edi
  __int64 v77; // r9
  int v78; // esi
  __int64 *v79; // r10
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  _QWORD *v83; // rdx
  int v84; // r11d
  __int64 v85; // r15
  _QWORD *v86; // rcx
  __int64 *v87; // rdx
  int v88; // r10d
  __int64 v89; // rcx
  unsigned int v90; // r9d
  __int64 v91; // rsi
  __int64 v92; // rdi
  int v93; // ecx
  int v94; // esi
  int v95; // edi
  unsigned int v96; // r14d
  __int64 v97; // r8
  int v98; // esi
  __int64 *v99; // r9
  __int64 v100; // rcx
  _QWORD *v101; // rcx
  _QWORD *v102; // rdx
  __int64 v103; // rcx
  _QWORD *v104; // rcx
  _QWORD *v105; // rdx
  __int64 v106; // rcx
  _QWORD *v107; // rcx
  _QWORD *v108; // rdx
  __int64 v109; // rcx
  _QWORD *v110; // rcx
  _QWORD *v111; // rdx
  __int64 v112; // r14
  __int64 v113; // r14
  __int64 *v114; // r10
  int v115; // esi
  __int64 *v116; // r8
  int v117; // r9d
  int v118; // [rsp+8h] [rbp-50h]
  __int64 v119; // [rsp+8h] [rbp-50h]
  int v120; // [rsp+8h] [rbp-50h]
  __int64 v121; // [rsp+8h] [rbp-50h]
  int v122; // [rsp+10h] [rbp-48h]
  int v123; // [rsp+10h] [rbp-48h]

  v8 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)a2 == 4 )
  {
    v17 = *(_DWORD *)(a1 + 32);
    v18 = *(__int64 **)(a1 + 16);
    if ( !v17 )
      goto LABEL_52;
    v19 = v17 - 1;
    v20 = v19 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v15 = &v18[2 * v20];
    result = *v15;
    if ( *v15 == v8 )
      goto LABEL_4;
    v21 = 1;
    a5 = nullptr;
    if ( result != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && result == -8192 )
          a5 = v15;
        a6 = (unsigned int)(v21 + 1);
        v20 = v19 & (v21 + v20);
        v15 = &v18[2 * v20];
        result = *v15;
        if ( *v15 == v8 )
          goto LABEL_4;
        if ( result == -4096 )
          break;
        ++v21;
      }
      if ( a5 )
        v15 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(a1 + 24) + 1);
    if ( 4 * (int)a4 < 3 * v17 )
    {
      result = v17 - *(_DWORD *)(a1 + 28) - (unsigned int)a4;
      if ( (unsigned int)result > v17 >> 3 )
      {
        v22 = *v15;
        goto LABEL_11;
      }
      v80 = (((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4) | (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2);
      v81 = ((((v80 >> 8) | v80) >> 16) | (v80 >> 8) | v80) + 1;
      if ( (unsigned int)v81 < 0x40 )
        LODWORD(v81) = 64;
      *(_DWORD *)(a1 + 32) = v81;
      result = sub_22300B0(16LL * (unsigned int)v81, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 16) = result;
      if ( v18 )
      {
        v82 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v83 = (_QWORD *)result;
        v84 = v82;
        v85 = 2LL * v17;
        v86 = (_QWORD *)(result + 16 * v82);
        if ( (_QWORD *)result != v86 )
        {
          do
          {
            *v83 = -4096;
            v83 += 2;
          }
          while ( v86 != v83 );
        }
        v87 = v18;
        v88 = v84 - 1;
        do
        {
          v89 = *v87;
          if ( *v87 != -8192 && v89 != -4096 )
          {
            if ( !v84 )
            {
              *(_QWORD *)&dword_0 = *v87;
              BUG();
            }
            v90 = v88 & (((unsigned int)v89 >> 9) ^ ((unsigned int)v89 >> 4));
            v91 = result + 16LL * v90;
            v92 = *(_QWORD *)v91;
            if ( v89 != *(_QWORD *)v91 && v92 != -4096 )
            {
              v123 = 1;
              v121 = 0;
              while ( 1 )
              {
                if ( !v121 )
                {
                  if ( v92 != -8192 )
                    v91 = 0;
                  v121 = v91;
                }
                v90 = v88 & (v123 + v90);
                v91 = result + 16LL * v90;
                v92 = *(_QWORD *)v91;
                if ( v89 == *(_QWORD *)v91 )
                  break;
                if ( v92 == -4096 )
                {
                  if ( v121 )
                    v91 = v121;
                  break;
                }
                ++v123;
              }
            }
            *(_QWORD *)v91 = v89;
            v93 = *((_DWORD *)v87 + 2);
            ++*(_DWORD *)(a1 + 24);
            *(_DWORD *)(v91 + 8) = v93;
          }
          v87 += 2;
        }
        while ( &v18[v85] != v87 );
        operator delete(v18, v85 * 8, 8);
        result = *(_QWORD *)(a1 + 16);
        v94 = *(_DWORD *)(a1 + 32);
        LODWORD(a4) = *(_DWORD *)(a1 + 24) + 1;
      }
      else
      {
        v109 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v94 = v109;
        v110 = (_QWORD *)(result + 16 * v109);
        if ( (_QWORD *)result != v110 )
        {
          v111 = (_QWORD *)result;
          do
          {
            *v111 = -4096;
            v111 += 2;
          }
          while ( v110 != v111 );
        }
        LODWORD(a4) = 1;
      }
      if ( v94 )
      {
        v95 = v94 - 1;
        v22 = v8;
        v96 = v95 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v15 = (__int64 *)(result + 16LL * v96);
        v97 = *v15;
        if ( *v15 == v8 )
          goto LABEL_11;
        v98 = 1;
        v99 = nullptr;
        if ( v97 != -4096 )
        {
          while ( 1 )
          {
            if ( !v99 && v97 == -8192 )
              v99 = v15;
            v96 = v95 & (v98 + v96);
            v15 = (__int64 *)(result + 16LL * v96);
            v97 = *v15;
            if ( *v15 == v8 )
              break;
            if ( v97 == -4096 )
            {
              if ( !v99 )
                goto LABEL_68;
              v22 = *v99;
              v15 = v99;
              goto LABEL_11;
            }
            ++v98;
          }
LABEL_89:
          v22 = v8;
LABEL_11:
          *(_DWORD *)(a1 + 24) = a4;
          if ( v22 != -4096 )
            --*(_DWORD *)(a1 + 28);
          goto LABEL_13;
        }
        goto LABEL_68;
      }
    }
    else
    {
LABEL_52:
      v59 = (((((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
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
      v60 = ((v59 >> 16) | v59) + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      *(_DWORD *)(a1 + 32) = v60;
      result = sub_22300B0(16LL * (unsigned int)v60, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 16) = result;
      if ( v18 )
      {
        v61 = *(unsigned int *)(a1 + 32);
        v62 = (_QWORD *)result;
        v63 = 2LL * v17;
        *(_QWORD *)(a1 + 24) = 0;
        v64 = v61;
        v65 = &v18[v63];
        v66 = (_QWORD *)(result + 16 * v61);
        if ( (_QWORD *)result != v66 )
        {
          do
          {
            *v62 = -4096;
            v62 += 2;
          }
          while ( v66 != v62 );
        }
        v67 = v18;
        for ( i = v64 - 1; v65 != v67; v67 += 2 )
        {
          v69 = *v67;
          if ( *v67 != -8192 && v69 != -4096 )
          {
            if ( !v64 )
            {
              *(_QWORD *)&dword_0 = *v67;
              BUG();
            }
            v70 = i & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
            v71 = result + 16LL * v70;
            v72 = *(_QWORD *)v71;
            if ( *(_QWORD *)v71 != v69 && v72 != -4096 )
            {
              v120 = 1;
              v113 = 0;
              while ( 1 )
              {
                if ( v72 == -8192 && !v113 )
                  v113 = v71;
                v70 = i & (v120 + v70);
                v71 = result + 16LL * v70;
                v72 = *(_QWORD *)v71;
                if ( v69 == *(_QWORD *)v71 )
                  break;
                if ( v72 == -4096 )
                {
                  if ( v113 )
                    v71 = v113;
                  break;
                }
                ++v120;
              }
            }
            *(_QWORD *)v71 = v69;
            v73 = *((_DWORD *)v67 + 2);
            ++*(_DWORD *)(a1 + 24);
            *(_DWORD *)(v71 + 8) = v73;
          }
        }
        operator delete(v18, v63 * 8, 8);
        result = *(_QWORD *)(a1 + 16);
        v74 = *(_DWORD *)(a1 + 32);
        LODWORD(a4) = *(_DWORD *)(a1 + 24) + 1;
      }
      else
      {
        v106 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v74 = v106;
        v107 = (_QWORD *)(result + 16 * v106);
        if ( (_QWORD *)result != v107 )
        {
          v108 = (_QWORD *)result;
          do
          {
            *v108 = -4096;
            v108 += 2;
          }
          while ( v107 != v108 );
        }
        LODWORD(a4) = 1;
      }
      if ( v74 )
      {
        v75 = v74 - 1;
        v22 = v8;
        v76 = v75 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v15 = (__int64 *)(result + 16LL * v76);
        v77 = *v15;
        if ( *v15 == v8 )
          goto LABEL_11;
        v78 = 1;
        v79 = nullptr;
        if ( v77 != -4096 )
        {
          while ( 1 )
          {
            if ( !v79 && v77 == -8192 )
              v79 = v15;
            v76 = v75 & (v78 + v76);
            v15 = (__int64 *)(result + 16LL * v76);
            v77 = *v15;
            if ( *v15 == v8 )
              goto LABEL_89;
            if ( v77 == -4096 )
            {
              if ( !v79 )
                break;
              v22 = *v79;
              v15 = v79;
              goto LABEL_11;
            }
            ++v78;
          }
        }
LABEL_68:
        *(_DWORD *)(a1 + 24) = a4;
        goto LABEL_13;
      }
    }
    ++*(_DWORD *)(a1 + 24);
    BUG();
  }
  v9 = *(_DWORD *)(a1 + 56);
  v10 = *(__int64 **)(a1 + 40);
  if ( !v9 )
    goto LABEL_14;
  v11 = v9 - 1;
  result = (unsigned int)v8 >> 9;
  v13 = result ^ ((unsigned int)v8 >> 4);
  v14 = (v9 - 1) & v13;
  v15 = &v10[2 * v14];
  v16 = *v15;
  if ( *v15 != v8 )
  {
    result = 1;
    a5 = nullptr;
    if ( v16 != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && v16 == -8192 )
          a5 = v15;
        a6 = (unsigned int)(result + 1);
        v14 = v11 & (result + v14);
        v15 = &v10[2 * v14];
        v16 = *v15;
        if ( *v15 == v8 )
          goto LABEL_4;
        if ( v16 == -4096 )
          break;
        result = (unsigned int)a6;
      }
      if ( a5 )
        v15 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
    if ( 4 * (int)a4 < 3 * v9 )
    {
      result = v9 - *(_DWORD *)(a1 + 52) - (unsigned int)a4;
      if ( (unsigned int)result > v9 >> 3 )
      {
LABEL_34:
        v40 = *v15;
        goto LABEL_29;
      }
      v43 = (((((((((((unsigned __int64)v11 >> 1) | v11) >> 2) | ((unsigned __int64)v11 >> 1) | v11) >> 4)
               | ((((unsigned __int64)v11 >> 1) | v11) >> 2)
               | ((unsigned __int64)v11 >> 1)
               | v11) >> 8)
             | ((((((unsigned __int64)v11 >> 1) | v11) >> 2) | ((unsigned __int64)v11 >> 1) | v11) >> 4)
             | ((((unsigned __int64)v11 >> 1) | v11) >> 2)
             | ((unsigned __int64)v11 >> 1)
             | v11) >> 16)
           | ((((((((unsigned __int64)v11 >> 1) | v11) >> 2) | ((unsigned __int64)v11 >> 1) | v11) >> 4)
             | ((((unsigned __int64)v11 >> 1) | v11) >> 2)
             | ((unsigned __int64)v11 >> 1)
             | v11) >> 8)
           | ((((((unsigned __int64)v11 >> 1) | v11) >> 2) | ((unsigned __int64)v11 >> 1) | v11) >> 4)
           | ((((unsigned __int64)v11 >> 1) | v11) >> 2)
           | ((unsigned __int64)v11 >> 1)
           | v11)
          + 1;
      if ( (unsigned int)v43 < 0x40 )
        LODWORD(v43) = 64;
      *(_DWORD *)(a1 + 56) = v43;
      result = sub_22300B0(16LL * (unsigned int)v43, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 40) = result;
      if ( v10 )
      {
        v44 = *(unsigned int *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = 0;
        v45 = (_QWORD *)result;
        v46 = v44;
        v47 = 2LL * v9;
        v48 = (_QWORD *)(result + 16 * v44);
        if ( (_QWORD *)result != v48 )
        {
          do
          {
            *v45 = -4096;
            v45 += 2;
          }
          while ( v48 != v45 );
        }
        v49 = v10;
        v50 = v46 - 1;
        do
        {
          v51 = *v49;
          if ( *v49 != -8192 && v51 != -4096 )
          {
            if ( !v46 )
            {
              *(_QWORD *)&dword_0 = *v49;
              BUG();
            }
            v52 = v50 & (((unsigned int)v51 >> 9) ^ ((unsigned int)v51 >> 4));
            v53 = result + 16LL * v52;
            v54 = *(_QWORD *)v53;
            if ( v51 != *(_QWORD *)v53 && v54 != -4096 )
            {
              v122 = 1;
              v119 = 0;
              while ( 1 )
              {
                if ( !v119 )
                {
                  if ( v54 != -8192 )
                    v53 = 0;
                  v119 = v53;
                }
                v52 = v50 & (v122 + v52);
                v53 = result + 16LL * v52;
                v54 = *(_QWORD *)v53;
                if ( v51 == *(_QWORD *)v53 )
                  break;
                if ( v54 == -4096 )
                {
                  if ( v119 )
                    v53 = v119;
                  break;
                }
                ++v122;
              }
            }
            *(_QWORD *)v53 = v51;
            v55 = *((_DWORD *)v49 + 2);
            ++*(_DWORD *)(a1 + 48);
            *(_DWORD *)(v53 + 8) = v55;
          }
          v49 += 2;
        }
        while ( &v10[v47] != v49 );
        operator delete(v10, v47 * 8, 8);
        result = *(_QWORD *)(a1 + 40);
        v56 = *(_DWORD *)(a1 + 56);
        LODWORD(a4) = *(_DWORD *)(a1 + 48) + 1;
      }
      else
      {
        v103 = *(unsigned int *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = 0;
        v56 = v103;
        v104 = (_QWORD *)(result + 16 * v103);
        if ( (_QWORD *)result != v104 )
        {
          v105 = (_QWORD *)result;
          do
          {
            *v105 = -4096;
            v105 += 2;
          }
          while ( v104 != v105 );
        }
        LODWORD(a4) = 1;
      }
      if ( v56 )
      {
        v57 = v56 - 1;
        v58 = (v56 - 1) & v13;
        v15 = (__int64 *)(result + 16LL * v58);
        v40 = *v15;
        if ( v8 == *v15 )
        {
LABEL_29:
          *(_DWORD *)(a1 + 48) = a4;
          if ( v40 != -4096 )
            --*(_DWORD *)(a1 + 52);
          goto LABEL_13;
        }
        if ( v40 != -4096 )
        {
          v116 = (__int64 *)(result + 16LL * v58);
          v117 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v40 == -8192 && !v15 )
              v15 = v116;
            v58 = v57 & (v117 + v58);
            v116 = (__int64 *)(result + 16LL * v58);
            v40 = *v116;
            if ( *v116 == v8 )
            {
              v40 = v8;
              v15 = (__int64 *)(result + 16LL * v58);
              goto LABEL_29;
            }
            if ( v40 == -4096 )
              break;
            ++v117;
          }
          if ( v15 )
            goto LABEL_34;
          v15 = (__int64 *)(result + 16LL * v58);
        }
        goto LABEL_51;
      }
      goto LABEL_212;
    }
LABEL_14:
    v23 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
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
    v24 = ((v23 >> 16) | v23) + 1;
    if ( (unsigned int)v24 < 0x40 )
      LODWORD(v24) = 64;
    *(_DWORD *)(a1 + 56) = v24;
    result = sub_22300B0(16LL * (unsigned int)v24, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 40) = result;
    if ( v10 )
    {
      v25 = *(unsigned int *)(a1 + 56);
      v26 = (_QWORD *)result;
      v27 = 2LL * v9;
      *(_QWORD *)(a1 + 48) = 0;
      v28 = v25;
      v29 = &v10[v27];
      v30 = (_QWORD *)(result + 16 * v25);
      if ( (_QWORD *)result != v30 )
      {
        do
        {
          *v26 = -4096;
          v26 += 2;
        }
        while ( v30 != v26 );
      }
      v31 = v10;
      for ( j = v28 - 1; v29 != v31; v31 += 2 )
      {
        v33 = *v31;
        if ( *v31 != -4096 && v33 != -8192 )
        {
          if ( !v28 )
          {
            *(_QWORD *)&dword_0 = *v31;
            BUG();
          }
          v34 = j & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
          v35 = result + 16LL * v34;
          v36 = *(_QWORD *)v35;
          if ( v33 != *(_QWORD *)v35 && v36 != -4096 )
          {
            v118 = 1;
            v112 = 0;
            while ( 1 )
            {
              if ( !v112 && v36 == -8192 )
                v112 = v35;
              v34 = j & (v118 + v34);
              v35 = result + 16LL * v34;
              v36 = *(_QWORD *)v35;
              if ( v33 == *(_QWORD *)v35 )
                break;
              if ( v36 == -4096 )
              {
                if ( v112 )
                  v35 = v112;
                break;
              }
              ++v118;
            }
          }
          *(_QWORD *)v35 = v33;
          v37 = *((_DWORD *)v31 + 2);
          ++*(_DWORD *)(a1 + 48);
          *(_DWORD *)(v35 + 8) = v37;
        }
      }
      operator delete(v10, v27 * 8, 8);
      result = *(_QWORD *)(a1 + 40);
      v38 = *(_DWORD *)(a1 + 56);
      LODWORD(a4) = *(_DWORD *)(a1 + 48) + 1;
    }
    else
    {
      v100 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v38 = v100;
      v101 = (_QWORD *)(result + 16 * v100);
      if ( (_QWORD *)result != v101 )
      {
        v102 = (_QWORD *)result;
        do
        {
          *v102 = -4096;
          v102 += 2;
        }
        while ( v101 != v102 );
      }
      LODWORD(a4) = 1;
    }
    if ( v38 )
    {
      v39 = v38 - 1;
      v40 = v8;
      v41 = v39 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
      v15 = (__int64 *)(result + 16LL * v41);
      v42 = *v15;
      if ( *v15 == v8 )
        goto LABEL_29;
      if ( v42 != -4096 )
      {
        v114 = (__int64 *)(result + 16LL * (v39 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4))));
        v115 = 1;
        v15 = nullptr;
        while ( 1 )
        {
          if ( !v15 && v42 == -8192 )
            v15 = v114;
          v41 = v39 & (v115 + v41);
          v114 = (__int64 *)(result + 16LL * v41);
          v42 = *v114;
          if ( *v114 == v8 )
          {
            v40 = v8;
            v15 = (__int64 *)(result + 16LL * v41);
            goto LABEL_29;
          }
          if ( v42 == -4096 )
            break;
          ++v115;
        }
        if ( v15 )
          goto LABEL_34;
        v15 = (__int64 *)(result + 16LL * v41);
      }
LABEL_51:
      *(_DWORD *)(a1 + 48) = a4;
LABEL_13:
      *v15 = v8;
      *((_DWORD *)v15 + 2) = 0;
      goto LABEL_4;
    }
LABEL_212:
    ++*(_DWORD *)(a1 + 48);
    BUG();
  }
LABEL_4:
  *((_DWORD *)v15 + 2) = a3;
  return result;
}
