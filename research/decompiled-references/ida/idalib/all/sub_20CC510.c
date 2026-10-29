void __fastcall sub_20CC510(unsigned __int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5, __int64 a6)
{
  unsigned __int64 v7; // r12
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // r15
  unsigned int v12; // edi
  unsigned int v13; // r14d
  unsigned int v14; // esi
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 *v19; // rdx
  __int64 *v20; // rsi
  int v21; // edx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // r12
  _QWORD *v24; // rdx
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  unsigned int v30; // ecx
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 *v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r15
  _QWORD *v41; // rdx
  __int64 *v42; // r8
  int v43; // r14d
  _QWORD *v44; // rcx
  __int64 *v45; // rdx
  __int64 v46; // rcx
  unsigned int v47; // edi
  _QWORD *v48; // rsi
  __int64 v49; // r9
  int v50; // edi
  int v51; // esi
  int v52; // r9d
  unsigned int v53; // edi
  unsigned __int64 v54; // rcx
  int v55; // eax
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rdx
  __int64 *v61; // r9
  int v62; // r15d
  _QWORD *v63; // rcx
  __int64 *v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // edi
  _QWORD *v67; // rsi
  __int64 v68; // r8
  int v69; // edi
  int v70; // r8d
  unsigned int v71; // r14d
  int v72; // edi
  unsigned __int64 *v73; // r9
  int v74; // edi
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // r15
  _QWORD *v81; // rdx
  __int64 *v82; // r11
  int v83; // r14d
  _QWORD *v84; // rcx
  __int64 *v85; // rsi
  __int64 v86; // rcx
  unsigned int v87; // edi
  _QWORD *v88; // rdx
  __int64 v89; // r8
  int v90; // esi
  int v91; // r10d
  unsigned int v92; // edi
  int v93; // r9d
  unsigned __int64 *v94; // r8
  unsigned __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // r15
  _QWORD *v100; // rdx
  int v101; // r11d
  _QWORD *v102; // rcx
  __int64 *v103; // rsi
  __int64 v104; // rcx
  unsigned int v105; // edi
  _QWORD *v106; // rdx
  __int64 v107; // r8
  _QWORD *v108; // rdi
  int v109; // edx
  int v110; // r9d
  unsigned int v111; // r14d
  int v112; // r8d
  unsigned __int64 *v113; // rax
  __int64 v114; // rcx
  _QWORD *v115; // rcx
  _QWORD *v116; // rdx
  __int64 v117; // rcx
  _QWORD *v118; // rcx
  _QWORD *v119; // rdx
  __int64 v120; // rdi
  _QWORD *v121; // rcx
  __int64 v122; // rdx
  _QWORD *v123; // rdx
  _QWORD *v124; // rcx
  int v125; // r11d
  _QWORD *v126; // r10
  int v127; // r8d
  unsigned __int64 *v128; // r10
  int v129; // r10d
  _QWORD *v130; // r9
  int v131; // r10d
  _QWORD *v132; // r9
  int v133; // r11d
  _QWORD *v134; // r10
  int j; // [rsp+8h] [rbp-60h]
  int v136; // [rsp+8h] [rbp-60h]
  int i; // [rsp+8h] [rbp-60h]
  __int64 v138; // [rsp+10h] [rbp-58h]
  int v139; // [rsp+10h] [rbp-58h]
  __m128 v140[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a1[2];
  v8 = **(__int64 ***)(v7 + 8);
  v9 = *v8;
  v10 = *(__int64 **)(*v8 + 2664);
  v11 = *(unsigned int *)(*v8 + 2680);
  if ( (*(_BYTE *)(v7 + 1) & 1) != 0 )
  {
    if ( !(_DWORD)v11 )
      goto LABEL_77;
    v29 = (unsigned int)(v11 - 1);
    v30 = v29 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v31 = (unsigned __int64 *)&v10[2 * v30];
    v32 = *v31;
    if ( v7 == *v31 )
    {
LABEL_24:
      v33 = (unsigned __int64)(v31 + 1);
      v34 = v31[1];
      goto LABEL_25;
    }
    v74 = 1;
    a5 = nullptr;
    if ( v32 != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && v32 == -8192 )
          a5 = v31;
        a6 = (unsigned int)(v74 + 1);
        v30 = v29 & (v74 + v30);
        v31 = (unsigned __int64 *)&v10[2 * v30];
        v32 = *v31;
        if ( v7 == *v31 )
          goto LABEL_24;
        if ( v32 == -4096 )
          break;
        ++v74;
      }
      if ( a5 )
        v31 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(v9 + 2672) + 1);
    if ( 4 * (int)a4 < (unsigned int)(3 * v11) )
    {
      if ( (int)v11 - *(_DWORD *)(v9 + 2676) - (int)a4 > (unsigned int)v11 >> 3 )
      {
        v75 = *v31;
        goto LABEL_74;
      }
      v95 = ((((v29 | (v29 >> 1)) >> 2) | v29 | (v29 >> 1)) >> 4) | ((v29 | (v29 >> 1)) >> 2) | v29 | (v29 >> 1);
      v96 = ((((v95 >> 8) | v95) >> 16) | (v95 >> 8) | v95) + 1;
      if ( (unsigned int)v96 < 0x40 )
        LODWORD(v96) = 64;
      *(_DWORD *)(v9 + 2680) = v96;
      v97 = sub_22300B0(16LL * (unsigned int)v96, 8, 64, a4, a5, a6);
      *(_QWORD *)(v9 + 2664) = v97;
      if ( v10 )
      {
        v98 = *(unsigned int *)(v9 + 2680);
        v99 = 2 * v11;
        v100 = (_QWORD *)v97;
        *(_QWORD *)(v9 + 2672) = 0;
        v101 = v98;
        v102 = (_QWORD *)(v97 + 16 * v98);
        if ( (_QWORD *)v97 != v102 )
        {
          do
          {
            *v100 = -4096;
            v100 += 2;
          }
          while ( v102 != v100 );
        }
        v103 = v10;
        v139 = v101 - 1;
        do
        {
          v104 = *v103;
          if ( *v103 != -8192 && v104 != -4096 )
          {
            if ( !v101 )
            {
              *(_QWORD *)&dword_0 = *v103;
              BUG();
            }
            v105 = v139 & (((unsigned int)v104 >> 9) ^ ((unsigned int)v104 >> 4));
            v106 = (_QWORD *)(v97 + 16LL * v105);
            v107 = *v106;
            if ( v104 != *v106 )
            {
              v129 = 1;
              v130 = nullptr;
              if ( v107 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v130 && v107 == -8192 )
                    v130 = v106;
                  v105 = v139 & (v129 + v105);
                  v106 = (_QWORD *)(v97 + 16LL * v105);
                  v107 = *v106;
                  if ( v104 == *v106 )
                    break;
                  if ( v107 == -4096 )
                  {
                    if ( v130 )
                      v106 = v130;
                    break;
                  }
                  ++v129;
                }
              }
            }
            *v106 = v104;
            v106[1] = v103[1];
            ++*(_DWORD *)(v9 + 2672);
          }
          v103 += 2;
        }
        while ( &v10[v99] != v103 );
        operator delete(v10, v99 * 8, 8);
        v108 = *(_QWORD **)(v9 + 2664);
        v109 = *(_DWORD *)(v9 + 2680);
        LODWORD(a4) = *(_DWORD *)(v9 + 2672) + 1;
      }
      else
      {
        v120 = *(unsigned int *)(v9 + 2680);
        *(_QWORD *)(v9 + 2672) = 0;
        v109 = v120;
        v108 = (_QWORD *)(v97 + 16 * v120);
        if ( (_QWORD *)v97 != v108 )
        {
          v121 = (_QWORD *)v97;
          do
          {
            *v121 = -4096;
            v121 += 2;
          }
          while ( v108 != v121 );
          v108 = (_QWORD *)v97;
        }
        LODWORD(a4) = 1;
      }
      if ( v109 )
      {
        v110 = v109 - 1;
        v111 = (v109 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
        v31 = &v108[2 * v111];
        v75 = *v31;
        if ( v7 != *v31 )
        {
          v112 = 1;
          v113 = nullptr;
          if ( v75 != -4096 )
          {
            while ( 1 )
            {
              if ( v75 == -8192 && !v113 )
                v113 = v31;
              v111 = v110 & (v112 + v111);
              v31 = &v108[2 * v111];
              v75 = *v31;
              if ( v7 == *v31 )
                goto LABEL_74;
              if ( v75 == -4096 )
              {
                if ( !v113 )
                  break;
                v75 = *v113;
                v31 = v113;
                goto LABEL_74;
              }
              ++v112;
            }
          }
LABEL_93:
          *(_DWORD *)(v9 + 2672) = a4;
LABEL_76:
          *v31 = v7;
          v33 = (unsigned __int64)(v31 + 1);
          v31[1] = 0;
          v34 = 0;
LABEL_25:
          a1[1] = v34;
          *(_QWORD *)v33 = a1;
          v35 = (unsigned __int64 *)a1[1];
          *a1 = *a1 & 7 | v33;
          if ( v35 )
            *v35 = *v35 & 7 | (unsigned __int64)(a1 + 1);
          return;
        }
        goto LABEL_74;
      }
    }
    else
    {
LABEL_77:
      v76 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v11 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
      v77 = ((v76 >> 16) | v76) + 1;
      if ( (unsigned int)v77 < 0x40 )
        LODWORD(v77) = 64;
      *(_DWORD *)(v9 + 2680) = v77;
      v78 = sub_22300B0(16LL * (unsigned int)v77, 8, 64, a4, a5, a6);
      *(_QWORD *)(v9 + 2664) = v78;
      if ( v10 )
      {
        v79 = *(unsigned int *)(v9 + 2680);
        v80 = 2 * v11;
        v81 = (_QWORD *)v78;
        *(_QWORD *)(v9 + 2672) = 0;
        v82 = &v10[v80];
        v83 = v79;
        v84 = (_QWORD *)(v78 + 16 * v79);
        if ( (_QWORD *)v78 != v84 )
        {
          do
          {
            *v81 = -4096;
            v81 += 2;
          }
          while ( v84 != v81 );
        }
        v85 = v10;
        for ( i = v83 - 1; v82 != v85; v85 += 2 )
        {
          v86 = *v85;
          if ( *v85 != -8192 && v86 != -4096 )
          {
            if ( !v83 )
            {
              *(_QWORD *)&dword_0 = *v85;
              BUG();
            }
            v87 = i & (((unsigned int)v86 >> 9) ^ ((unsigned int)v86 >> 4));
            v88 = (_QWORD *)(v78 + 16LL * v87);
            v89 = *v88;
            if ( v86 != *v88 )
            {
              v131 = 1;
              v132 = nullptr;
              if ( v89 != -4096 )
              {
                while ( 1 )
                {
                  if ( v89 == -8192 && !v132 )
                    v132 = v88;
                  v87 = i & (v131 + v87);
                  v88 = (_QWORD *)(v78 + 16LL * v87);
                  v89 = *v88;
                  if ( v86 == *v88 )
                    break;
                  if ( v89 == -4096 )
                  {
                    if ( v132 )
                      v88 = v132;
                    break;
                  }
                  ++v131;
                }
              }
            }
            *v88 = v86;
            v88[1] = v85[1];
            ++*(_DWORD *)(v9 + 2672);
          }
        }
        operator delete(v10, v80 * 8, 8);
        v78 = *(_QWORD *)(v9 + 2664);
        v90 = *(_DWORD *)(v9 + 2680);
        LODWORD(a4) = *(_DWORD *)(v9 + 2672) + 1;
      }
      else
      {
        v122 = *(unsigned int *)(v9 + 2680);
        *(_QWORD *)(v9 + 2672) = 0;
        v90 = v122;
        v123 = (_QWORD *)(v78 + 16 * v122);
        if ( (_QWORD *)v78 != v123 )
        {
          v124 = (_QWORD *)v78;
          do
          {
            *v124 = -4096;
            v124 += 2;
          }
          while ( v123 != v124 );
        }
        LODWORD(a4) = 1;
      }
      if ( v90 )
      {
        v91 = v90 - 1;
        v92 = (v90 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
        v31 = (unsigned __int64 *)(v78 + 16LL * v92);
        v75 = *v31;
        if ( v7 != *v31 )
        {
          v93 = 1;
          v94 = nullptr;
          if ( v75 != -4096 )
          {
            while ( 1 )
            {
              if ( !v94 && v75 == -8192 )
                v94 = v31;
              v92 = v91 & (v93 + v92);
              v31 = (unsigned __int64 *)(v78 + 16LL * v92);
              v75 = *v31;
              if ( v7 == *v31 )
                goto LABEL_74;
              if ( v75 == -4096 )
              {
                if ( !v94 )
                  goto LABEL_93;
                v75 = *v94;
                v31 = v94;
                goto LABEL_74;
              }
              ++v93;
            }
          }
          goto LABEL_93;
        }
LABEL_74:
        *(_DWORD *)(v9 + 2672) = a4;
        if ( v75 != -4096 )
          --*(_DWORD *)(v9 + 2676);
        goto LABEL_76;
      }
    }
    ++*(_DWORD *)(v9 + 2672);
    BUG();
  }
  if ( !(_DWORD)v11 )
    goto LABEL_31;
  v12 = v11 - 1;
  v13 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
  v14 = (v11 - 1) & v13;
  v15 = (unsigned __int64 *)&v10[2 * v14];
  v16 = *v15;
  if ( v7 == *v15 )
  {
LABEL_4:
    v17 = (unsigned __int64)(v15 + 1);
    v18 = v15[1];
    goto LABEL_5;
  }
  v55 = 1;
  a5 = nullptr;
  if ( v16 != -4096 )
  {
    while ( 1 )
    {
      if ( !a5 && v16 == -8192 )
        a5 = v15;
      a6 = (unsigned int)(v55 + 1);
      v14 = v12 & (v55 + v14);
      v15 = (unsigned __int64 *)&v10[2 * v14];
      v16 = *v15;
      if ( v7 == *v15 )
        goto LABEL_4;
      if ( v16 == -4096 )
        break;
      ++v55;
    }
    if ( a5 )
      v15 = a5;
  }
  v51 = *(_DWORD *)(v9 + 2672) + 1;
  a4 = (unsigned int)(4 * v51);
  if ( (unsigned int)a4 >= 3 * (int)v11 )
  {
LABEL_31:
    v36 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v11 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v37 = ((v36 >> 16) | v36) + 1;
    if ( (unsigned int)v37 < 0x40 )
      LODWORD(v37) = 64;
    *(_DWORD *)(v9 + 2680) = v37;
    v38 = sub_22300B0(16LL * (unsigned int)v37, 8, 64, a4, a5, a6);
    *(_QWORD *)(v9 + 2664) = v38;
    if ( v10 )
    {
      v39 = *(unsigned int *)(v9 + 2680);
      v40 = 2 * v11;
      v41 = (_QWORD *)v38;
      *(_QWORD *)(v9 + 2672) = 0;
      v42 = &v10[v40];
      v43 = v39;
      v44 = (_QWORD *)(v38 + 16 * v39);
      if ( (_QWORD *)v38 != v44 )
      {
        do
        {
          *v41 = -4096;
          v41 += 2;
        }
        while ( v44 != v41 );
      }
      v45 = v10;
      for ( j = v43 - 1; v42 != v45; v45 += 2 )
      {
        v46 = *v45;
        if ( *v45 != -8192 && v46 != -4096 )
        {
          if ( !v43 )
          {
            *(_QWORD *)&dword_0 = *v45;
            BUG();
          }
          v47 = j & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
          v48 = (_QWORD *)(v38 + 16LL * v47);
          v49 = *v48;
          if ( *v48 != v46 )
          {
            v125 = 1;
            v126 = nullptr;
            if ( v49 != -4096 )
            {
              while ( 1 )
              {
                if ( !v126 && v49 == -8192 )
                  v126 = v48;
                v47 = j & (v125 + v47);
                v48 = (_QWORD *)(v38 + 16LL * v47);
                v49 = *v48;
                if ( v46 == *v48 )
                  break;
                if ( v49 == -4096 )
                {
                  if ( v126 )
                    v48 = v126;
                  break;
                }
                ++v125;
              }
            }
          }
          *v48 = v46;
          v48[1] = v45[1];
          ++*(_DWORD *)(v9 + 2672);
        }
      }
      operator delete(v10, v40 * 8, 8);
      v38 = *(_QWORD *)(v9 + 2664);
      v50 = *(_DWORD *)(v9 + 2680);
      v51 = *(_DWORD *)(v9 + 2672) + 1;
    }
    else
    {
      v114 = *(unsigned int *)(v9 + 2680);
      *(_QWORD *)(v9 + 2672) = 0;
      v50 = v114;
      v115 = (_QWORD *)(v38 + 16 * v114);
      if ( (_QWORD *)v38 != v115 )
      {
        v116 = (_QWORD *)v38;
        do
        {
          *v116 = -4096;
          v116 += 2;
        }
        while ( v115 != v116 );
      }
      v51 = 1;
    }
    if ( v50 )
    {
      v52 = v50 - 1;
      v53 = (v50 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
      v15 = (unsigned __int64 *)(v38 + 16LL * v53);
      v54 = *v15;
      if ( v7 == *v15 )
        goto LABEL_46;
      v127 = 1;
      v128 = nullptr;
      if ( v54 != -4096 )
      {
        while ( 1 )
        {
          if ( v54 == -8192 && !v128 )
            v128 = v15;
          v53 = v52 & (v127 + v53);
          v15 = (unsigned __int64 *)(v38 + 16LL * v53);
          v54 = *v15;
          if ( v7 == *v15 )
            goto LABEL_46;
          if ( v54 == -4096 )
          {
            if ( !v128 )
              goto LABEL_69;
            v54 = *v128;
            v15 = v128;
            goto LABEL_46;
          }
          ++v127;
        }
      }
      goto LABEL_69;
    }
LABEL_223:
    ++*(_DWORD *)(v9 + 2672);
    BUG();
  }
  v56 = (unsigned int)v11 >> 3;
  if ( (int)v11 - *(_DWORD *)(v9 + 2676) - v51 > (unsigned int)v56 )
  {
    v54 = *v15;
    goto LABEL_46;
  }
  v57 = (((((((((((unsigned __int64)v12 >> 1) | v12) >> 2) | ((unsigned __int64)v12 >> 1) | v12) >> 4)
           | ((((unsigned __int64)v12 >> 1) | v12) >> 2)
           | ((unsigned __int64)v12 >> 1)
           | v12) >> 8)
         | ((((((unsigned __int64)v12 >> 1) | v12) >> 2) | ((unsigned __int64)v12 >> 1) | v12) >> 4)
         | ((((unsigned __int64)v12 >> 1) | v12) >> 2)
         | ((unsigned __int64)v12 >> 1)
         | v12) >> 16)
       | ((((((((unsigned __int64)v12 >> 1) | v12) >> 2) | ((unsigned __int64)v12 >> 1) | v12) >> 4)
         | ((((unsigned __int64)v12 >> 1) | v12) >> 2)
         | ((unsigned __int64)v12 >> 1)
         | v12) >> 8)
       | ((((((unsigned __int64)v12 >> 1) | v12) >> 2) | ((unsigned __int64)v12 >> 1) | v12) >> 4)
       | ((((unsigned __int64)v12 >> 1) | v12) >> 2)
       | ((unsigned __int64)v12 >> 1)
       | v12)
      + 1;
  if ( (unsigned int)v57 < 0x40 )
    LODWORD(v57) = 64;
  *(_DWORD *)(v9 + 2680) = v57;
  v58 = sub_22300B0(16LL * (unsigned int)v57, 8, 64, v56, a5, a6);
  *(_QWORD *)(v9 + 2664) = v58;
  if ( v10 )
  {
    v59 = *(unsigned int *)(v9 + 2680);
    v60 = (_QWORD *)v58;
    *(_QWORD *)(v9 + 2672) = 0;
    v138 = 16 * v11;
    v61 = &v10[2 * v11];
    v62 = v59;
    v63 = (_QWORD *)(v58 + 16 * v59);
    if ( (_QWORD *)v58 != v63 )
    {
      do
      {
        *v60 = -4096;
        v60 += 2;
      }
      while ( v63 != v60 );
    }
    v64 = v10;
    v136 = v62 - 1;
    do
    {
      v65 = *v64;
      if ( *v64 != -8192 && v65 != -4096 )
      {
        if ( !v62 )
        {
          *(_QWORD *)&dword_0 = *v64;
          BUG();
        }
        v66 = v136 & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
        v67 = (_QWORD *)(v58 + 16LL * v66);
        v68 = *v67;
        if ( v65 != *v67 )
        {
          v133 = 1;
          v134 = nullptr;
          if ( v68 != -4096 )
          {
            while ( 1 )
            {
              if ( v68 == -8192 && !v134 )
                v134 = v67;
              v66 = v136 & (v133 + v66);
              v67 = (_QWORD *)(v58 + 16LL * v66);
              v68 = *v67;
              if ( v65 == *v67 )
                break;
              if ( v68 == -4096 )
              {
                if ( v134 )
                  v67 = v134;
                break;
              }
              ++v133;
            }
          }
        }
        *v67 = v65;
        v67[1] = v64[1];
        ++*(_DWORD *)(v9 + 2672);
      }
      v64 += 2;
    }
    while ( v61 != v64 );
    operator delete(v10, v138, 8);
    v58 = *(_QWORD *)(v9 + 2664);
    v69 = *(_DWORD *)(v9 + 2680);
    v51 = *(_DWORD *)(v9 + 2672) + 1;
  }
  else
  {
    v117 = *(unsigned int *)(v9 + 2680);
    *(_QWORD *)(v9 + 2672) = 0;
    v69 = v117;
    v118 = (_QWORD *)(v58 + 16 * v117);
    if ( (_QWORD *)v58 != v118 )
    {
      v119 = (_QWORD *)v58;
      do
      {
        *v119 = -4096;
        v119 += 2;
      }
      while ( v118 != v119 );
    }
    v51 = 1;
  }
  if ( !v69 )
    goto LABEL_223;
  v70 = v69 - 1;
  v71 = (v69 - 1) & v13;
  v15 = (unsigned __int64 *)(v58 + 16LL * v71);
  v54 = *v15;
  if ( v7 == *v15 )
  {
LABEL_46:
    *(_DWORD *)(v9 + 2672) = v51;
    if ( v54 != -4096 )
      --*(_DWORD *)(v9 + 2676);
    goto LABEL_48;
  }
  v72 = 1;
  v73 = nullptr;
  if ( v54 != -4096 )
  {
    while ( 1 )
    {
      if ( v54 == -8192 && !v73 )
        v73 = v15;
      v71 = v70 & (v72 + v71);
      v15 = (unsigned __int64 *)(v58 + 16LL * v71);
      v54 = *v15;
      if ( v7 == *v15 )
        goto LABEL_46;
      if ( v54 == -4096 )
      {
        if ( !v73 )
          break;
        v54 = *v73;
        v15 = v73;
        goto LABEL_46;
      }
      ++v72;
    }
  }
LABEL_69:
  *(_DWORD *)(v9 + 2672) = v51;
LABEL_48:
  *v15 = v7;
  v17 = (unsigned __int64)(v15 + 1);
  v15[1] = 0;
  v18 = 0;
LABEL_5:
  a1[1] = v18;
  *(_QWORD *)v17 = a1;
  v19 = (unsigned __int64 *)a1[1];
  *a1 = *a1 & 7 | v17;
  if ( v19 )
    *v19 = (unsigned __int64)(a1 + 1) | *v19 & 7;
  v20 = *(__int64 **)(v9 + 2664);
  *(_BYTE *)(a1[2] + 1) |= 1u;
  if ( v20 > v10 || v10 >= &v20[2 * *(unsigned int *)(v9 + 2680)] )
  {
    v21 = *(_DWORD *)(v9 + 2672);
    if ( v21 != 1 )
    {
      if ( v21 )
        sub_20CC4A0(v140, v20, &v20[2 * *(unsigned int *)(v9 + 2680)], v9 + 2664, 0);
      else
        sub_20CC4A0(v140, &v20[2 * *(unsigned int *)(v9 + 2680)], &v20[2 * *(unsigned int *)(v9 + 2680)], v9 + 2664, 1);
      v23 = v140[0].m128_u64[1];
      v22 = v140[0].m128_u64[0];
      v24 = (_QWORD *)(*(_QWORD *)(v9 + 2664) + 16LL * *(unsigned int *)(v9 + 2680));
      sub_20CC4A0(v140, v24, v24, v9 + 2664, 1);
      v25 = v140[0].m128_u64[0];
      while ( v25 != v22 )
      {
        while ( 1 )
        {
          **(_QWORD **)(v22 + 8) = (v22 + 8) | **(_QWORD **)(v22 + 8) & 7LL;
          if ( v22 + 16 != v23 )
            break;
LABEL_28:
          v22 = v23;
          if ( v25 == v23 )
            return;
        }
        v26 = *(_QWORD *)(v22 + 16);
        if ( v26 == -8192 || v26 == -4096 )
        {
          v27 = (__int64 *)(v22 + 32);
          while ( 1 )
          {
            v22 = (unsigned __int64)v27;
            if ( v27 == (__int64 *)v23 )
              goto LABEL_28;
            v28 = *v27;
            v27 += 2;
            if ( v28 != -8192 && v28 != -4096 )
              goto LABEL_20;
          }
        }
        v22 += 16LL;
LABEL_20:
        ;
      }
    }
  }
}
