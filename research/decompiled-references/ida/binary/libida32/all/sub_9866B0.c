__int64 __fastcall sub_9866B0(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 *a5, __int64 a6)
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
  int v27; // r10d
  __int64 *v28; // r9
  _QWORD *v29; // rcx
  __int64 *v30; // rdx
  int j; // r15d
  __int64 v32; // rcx
  unsigned int v33; // r8d
  __int64 v34; // rdi
  __int64 v35; // r11
  int v36; // ecx
  int v37; // esi
  int v38; // r8d
  __int64 v39; // rsi
  unsigned int v40; // edi
  __int64 v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  _QWORD *v44; // rdx
  int v45; // r9d
  _QWORD *v46; // rcx
  __int64 *v47; // rdx
  int v48; // r11d
  __int64 v49; // rcx
  unsigned int v50; // edi
  __int64 v51; // rsi
  __int64 v52; // r10
  int v53; // ecx
  int v54; // esi
  int v55; // edi
  unsigned int v56; // r14d
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  int v61; // r10d
  __int64 *v62; // r9
  _QWORD *v63; // rcx
  __int64 *v64; // rdx
  int i; // r15d
  __int64 v66; // rcx
  unsigned int v67; // r8d
  __int64 v68; // rdi
  __int64 v69; // r11
  int v70; // ecx
  int v71; // esi
  int v72; // r8d
  unsigned int v73; // edi
  __int64 v74; // r9
  int v75; // esi
  __int64 *v76; // r10
  unsigned __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  _QWORD *v80; // rdx
  int v81; // r11d
  _QWORD *v82; // rcx
  __int64 *v83; // rdx
  int v84; // r10d
  __int64 v85; // rcx
  unsigned int v86; // r9d
  __int64 v87; // rsi
  __int64 v88; // rdi
  int v89; // ecx
  int v90; // esi
  int v91; // edi
  unsigned int v92; // r14d
  __int64 v93; // r8
  int v94; // esi
  __int64 *v95; // r9
  __int64 v96; // rcx
  _QWORD *v97; // rcx
  _QWORD *v98; // rdx
  __int64 v99; // rcx
  _QWORD *v100; // rcx
  _QWORD *v101; // rdx
  __int64 v102; // rcx
  _QWORD *v103; // rcx
  _QWORD *v104; // rdx
  __int64 v105; // rcx
  _QWORD *v106; // rcx
  _QWORD *v107; // rdx
  __int64 v108; // r14
  __int64 v109; // r14
  __int64 *v110; // r10
  int v111; // esi
  __int64 *v112; // r8
  int v113; // r9d
  int v114; // [rsp+8h] [rbp-50h]
  __int64 v115; // [rsp+8h] [rbp-50h]
  int v116; // [rsp+8h] [rbp-50h]
  __int64 v117; // [rsp+8h] [rbp-50h]
  int v118; // [rsp+10h] [rbp-48h]
  int v119; // [rsp+10h] [rbp-48h]

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
      v77 = (((v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2)) >> 4) | (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2);
      v78 = ((((v77 >> 8) | v77) >> 16) | (v77 >> 8) | v77) + 1;
      if ( (unsigned int)v78 < 0x40 )
        LODWORD(v78) = 64;
      *(_DWORD *)(a1 + 32) = v78;
      result = sub_220C370(16LL * (unsigned int)v78, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 16) = result;
      if ( v18 )
      {
        v79 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v80 = (_QWORD *)result;
        v81 = v79;
        v82 = (_QWORD *)(result + 16 * v79);
        if ( (_QWORD *)result != v82 )
        {
          do
          {
            *v80 = -4096;
            v80 += 2;
          }
          while ( v82 != v80 );
        }
        v83 = v18;
        v84 = v81 - 1;
        do
        {
          v85 = *v83;
          if ( *v83 != -8192 && v85 != -4096 )
          {
            if ( !v81 )
            {
              *(_QWORD *)&dword_0 = *v83;
              BUG();
            }
            v86 = v84 & (((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4));
            v87 = result + 16LL * v86;
            v88 = *(_QWORD *)v87;
            if ( v85 != *(_QWORD *)v87 && v88 != -4096 )
            {
              v119 = 1;
              v117 = 0;
              while ( 1 )
              {
                if ( !v117 )
                {
                  if ( v88 != -8192 )
                    v87 = 0;
                  v117 = v87;
                }
                v86 = v84 & (v119 + v86);
                v87 = result + 16LL * v86;
                v88 = *(_QWORD *)v87;
                if ( v85 == *(_QWORD *)v87 )
                  break;
                if ( v88 == -4096 )
                {
                  if ( v117 )
                    v87 = v117;
                  break;
                }
                ++v119;
              }
            }
            *(_QWORD *)v87 = v85;
            v89 = *((_DWORD *)v83 + 2);
            ++*(_DWORD *)(a1 + 24);
            *(_DWORD *)(v87 + 8) = v89;
          }
          v83 += 2;
        }
        while ( &v18[2 * v17] != v83 );
        operator delete();
        result = *(_QWORD *)(a1 + 16);
        v90 = *(_DWORD *)(a1 + 32);
        LODWORD(a4) = *(_DWORD *)(a1 + 24) + 1;
      }
      else
      {
        v105 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v90 = v105;
        v106 = (_QWORD *)(result + 16 * v105);
        if ( (_QWORD *)result != v106 )
        {
          v107 = (_QWORD *)result;
          do
          {
            *v107 = -4096;
            v107 += 2;
          }
          while ( v106 != v107 );
        }
        LODWORD(a4) = 1;
      }
      if ( v90 )
      {
        v91 = v90 - 1;
        v22 = v8;
        v92 = v91 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v15 = (__int64 *)(result + 16LL * v92);
        v93 = *v15;
        if ( *v15 == v8 )
          goto LABEL_11;
        v94 = 1;
        v95 = nullptr;
        if ( v93 != -4096 )
        {
          while ( 1 )
          {
            if ( !v95 && v93 == -8192 )
              v95 = v15;
            v92 = v91 & (v94 + v92);
            v15 = (__int64 *)(result + 16LL * v92);
            v93 = *v15;
            if ( *v15 == v8 )
              break;
            if ( v93 == -4096 )
            {
              if ( !v95 )
                goto LABEL_68;
              v22 = *v95;
              v15 = v95;
              goto LABEL_11;
            }
            ++v94;
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
      v57 = (((((((2 * v17 - 1) | ((unsigned __int64)(2 * v17 - 1) >> 1)) >> 2)
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
      v58 = ((v57 >> 16) | v57) + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(a1 + 32) = v58;
      result = sub_220C370(16LL * (unsigned int)v58, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 16) = result;
      if ( v18 )
      {
        v59 = *(unsigned int *)(a1 + 32);
        v60 = (_QWORD *)result;
        *(_QWORD *)(a1 + 24) = 0;
        v61 = v59;
        v62 = &v18[2 * v17];
        v63 = (_QWORD *)(result + 16 * v59);
        if ( (_QWORD *)result != v63 )
        {
          do
          {
            *v60 = -4096;
            v60 += 2;
          }
          while ( v63 != v60 );
        }
        v64 = v18;
        for ( i = v61 - 1; v62 != v64; v64 += 2 )
        {
          v66 = *v64;
          if ( *v64 != -8192 && v66 != -4096 )
          {
            if ( !v61 )
            {
              *(_QWORD *)&dword_0 = *v64;
              BUG();
            }
            v67 = i & (((unsigned int)v66 >> 9) ^ ((unsigned int)v66 >> 4));
            v68 = result + 16LL * v67;
            v69 = *(_QWORD *)v68;
            if ( *(_QWORD *)v68 != v66 && v69 != -4096 )
            {
              v116 = 1;
              v109 = 0;
              while ( 1 )
              {
                if ( v69 == -8192 && !v109 )
                  v109 = v68;
                v67 = i & (v116 + v67);
                v68 = result + 16LL * v67;
                v69 = *(_QWORD *)v68;
                if ( v66 == *(_QWORD *)v68 )
                  break;
                if ( v69 == -4096 )
                {
                  if ( v109 )
                    v68 = v109;
                  break;
                }
                ++v116;
              }
            }
            *(_QWORD *)v68 = v66;
            v70 = *((_DWORD *)v64 + 2);
            ++*(_DWORD *)(a1 + 24);
            *(_DWORD *)(v68 + 8) = v70;
          }
        }
        operator delete();
        result = *(_QWORD *)(a1 + 16);
        v71 = *(_DWORD *)(a1 + 32);
        LODWORD(a4) = *(_DWORD *)(a1 + 24) + 1;
      }
      else
      {
        v102 = *(unsigned int *)(a1 + 32);
        *(_QWORD *)(a1 + 24) = 0;
        v71 = v102;
        v103 = (_QWORD *)(result + 16 * v102);
        if ( (_QWORD *)result != v103 )
        {
          v104 = (_QWORD *)result;
          do
          {
            *v104 = -4096;
            v104 += 2;
          }
          while ( v103 != v104 );
        }
        LODWORD(a4) = 1;
      }
      if ( v71 )
      {
        v72 = v71 - 1;
        v22 = v8;
        v73 = v72 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
        v15 = (__int64 *)(result + 16LL * v73);
        v74 = *v15;
        if ( *v15 == v8 )
          goto LABEL_11;
        v75 = 1;
        v76 = nullptr;
        if ( v74 != -4096 )
        {
          while ( 1 )
          {
            if ( !v76 && v74 == -8192 )
              v76 = v15;
            v73 = v72 & (v75 + v73);
            v15 = (__int64 *)(result + 16LL * v73);
            v74 = *v15;
            if ( *v15 == v8 )
              goto LABEL_89;
            if ( v74 == -4096 )
            {
              if ( !v76 )
                break;
              v22 = *v76;
              v15 = v76;
              goto LABEL_11;
            }
            ++v75;
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
        v39 = *v15;
        goto LABEL_29;
      }
      v42 = (((((((((((unsigned __int64)v11 >> 1) | v11) >> 2) | ((unsigned __int64)v11 >> 1) | v11) >> 4)
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
      if ( (unsigned int)v42 < 0x40 )
        LODWORD(v42) = 64;
      *(_DWORD *)(a1 + 56) = v42;
      result = sub_220C370(16LL * (unsigned int)v42, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 40) = result;
      if ( v10 )
      {
        v43 = *(unsigned int *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = 0;
        v44 = (_QWORD *)result;
        v45 = v43;
        v46 = (_QWORD *)(result + 16 * v43);
        if ( (_QWORD *)result != v46 )
        {
          do
          {
            *v44 = -4096;
            v44 += 2;
          }
          while ( v46 != v44 );
        }
        v47 = v10;
        v48 = v45 - 1;
        do
        {
          v49 = *v47;
          if ( *v47 != -8192 && v49 != -4096 )
          {
            if ( !v45 )
            {
              *(_QWORD *)&dword_0 = *v47;
              BUG();
            }
            v50 = v48 & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
            v51 = result + 16LL * v50;
            v52 = *(_QWORD *)v51;
            if ( v49 != *(_QWORD *)v51 && v52 != -4096 )
            {
              v118 = 1;
              v115 = 0;
              while ( 1 )
              {
                if ( !v115 )
                {
                  if ( v52 != -8192 )
                    v51 = 0;
                  v115 = v51;
                }
                v50 = v48 & (v118 + v50);
                v51 = result + 16LL * v50;
                v52 = *(_QWORD *)v51;
                if ( v49 == *(_QWORD *)v51 )
                  break;
                if ( v52 == -4096 )
                {
                  if ( v115 )
                    v51 = v115;
                  break;
                }
                ++v118;
              }
            }
            *(_QWORD *)v51 = v49;
            v53 = *((_DWORD *)v47 + 2);
            ++*(_DWORD *)(a1 + 48);
            *(_DWORD *)(v51 + 8) = v53;
          }
          v47 += 2;
        }
        while ( &v10[2 * v9] != v47 );
        operator delete();
        result = *(_QWORD *)(a1 + 40);
        v54 = *(_DWORD *)(a1 + 56);
        LODWORD(a4) = *(_DWORD *)(a1 + 48) + 1;
      }
      else
      {
        v99 = *(unsigned int *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = 0;
        v54 = v99;
        v100 = (_QWORD *)(result + 16 * v99);
        if ( (_QWORD *)result != v100 )
        {
          v101 = (_QWORD *)result;
          do
          {
            *v101 = -4096;
            v101 += 2;
          }
          while ( v100 != v101 );
        }
        LODWORD(a4) = 1;
      }
      if ( v54 )
      {
        v55 = v54 - 1;
        v56 = (v54 - 1) & v13;
        v15 = (__int64 *)(result + 16LL * v56);
        v39 = *v15;
        if ( v8 == *v15 )
        {
LABEL_29:
          *(_DWORD *)(a1 + 48) = a4;
          if ( v39 != -4096 )
            --*(_DWORD *)(a1 + 52);
          goto LABEL_13;
        }
        if ( v39 != -4096 )
        {
          v112 = (__int64 *)(result + 16LL * v56);
          v113 = 1;
          v15 = nullptr;
          while ( 1 )
          {
            if ( v39 == -8192 && !v15 )
              v15 = v112;
            v56 = v55 & (v113 + v56);
            v112 = (__int64 *)(result + 16LL * v56);
            v39 = *v112;
            if ( *v112 == v8 )
            {
              v39 = v8;
              v15 = (__int64 *)(result + 16LL * v56);
              goto LABEL_29;
            }
            if ( v39 == -4096 )
              break;
            ++v113;
          }
          if ( v15 )
            goto LABEL_34;
          v15 = (__int64 *)(result + 16LL * v56);
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
    result = sub_220C370(16LL * (unsigned int)v24, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 40) = result;
    if ( v10 )
    {
      v25 = *(unsigned int *)(a1 + 56);
      v26 = (_QWORD *)result;
      *(_QWORD *)(a1 + 48) = 0;
      v27 = v25;
      v28 = &v10[2 * v9];
      v29 = (_QWORD *)(result + 16 * v25);
      if ( (_QWORD *)result != v29 )
      {
        do
        {
          *v26 = -4096;
          v26 += 2;
        }
        while ( v29 != v26 );
      }
      v30 = v10;
      for ( j = v27 - 1; v28 != v30; v30 += 2 )
      {
        v32 = *v30;
        if ( *v30 != -4096 && v32 != -8192 )
        {
          if ( !v27 )
          {
            *(_QWORD *)&dword_0 = *v30;
            BUG();
          }
          v33 = j & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
          v34 = result + 16LL * v33;
          v35 = *(_QWORD *)v34;
          if ( v32 != *(_QWORD *)v34 && v35 != -4096 )
          {
            v114 = 1;
            v108 = 0;
            while ( 1 )
            {
              if ( !v108 && v35 == -8192 )
                v108 = v34;
              v33 = j & (v114 + v33);
              v34 = result + 16LL * v33;
              v35 = *(_QWORD *)v34;
              if ( v32 == *(_QWORD *)v34 )
                break;
              if ( v35 == -4096 )
              {
                if ( v108 )
                  v34 = v108;
                break;
              }
              ++v114;
            }
          }
          *(_QWORD *)v34 = v32;
          v36 = *((_DWORD *)v30 + 2);
          ++*(_DWORD *)(a1 + 48);
          *(_DWORD *)(v34 + 8) = v36;
        }
      }
      operator delete();
      result = *(_QWORD *)(a1 + 40);
      v37 = *(_DWORD *)(a1 + 56);
      LODWORD(a4) = *(_DWORD *)(a1 + 48) + 1;
    }
    else
    {
      v96 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v37 = v96;
      v97 = (_QWORD *)(result + 16 * v96);
      if ( (_QWORD *)result != v97 )
      {
        v98 = (_QWORD *)result;
        do
        {
          *v98 = -4096;
          v98 += 2;
        }
        while ( v97 != v98 );
      }
      LODWORD(a4) = 1;
    }
    if ( v37 )
    {
      v38 = v37 - 1;
      v39 = v8;
      v40 = v38 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
      v15 = (__int64 *)(result + 16LL * v40);
      v41 = *v15;
      if ( *v15 == v8 )
        goto LABEL_29;
      if ( v41 != -4096 )
      {
        v110 = (__int64 *)(result + 16LL * (v38 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4))));
        v111 = 1;
        v15 = nullptr;
        while ( 1 )
        {
          if ( !v15 && v41 == -8192 )
            v15 = v110;
          v40 = v38 & (v111 + v40);
          v110 = (__int64 *)(result + 16LL * v40);
          v41 = *v110;
          if ( *v110 == v8 )
          {
            v39 = v8;
            v15 = (__int64 *)(result + 16LL * v40);
            goto LABEL_29;
          }
          if ( v41 == -4096 )
            break;
          ++v111;
        }
        if ( v15 )
          goto LABEL_34;
        v15 = (__int64 *)(result + 16LL * v40);
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

