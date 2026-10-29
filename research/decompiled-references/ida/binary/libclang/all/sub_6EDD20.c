bool __fastcall sub_6EDD20(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rbp
  int v8; // eax
  unsigned int v9; // edx
  __int64 *v10; // r15
  unsigned __int64 v11; // rsi
  int v12; // r10d
  __int64 *v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rbp
  __int64 v20; // rbp
  int v21; // eax
  __int64 v22; // r15
  __int64 *v23; // r13
  unsigned __int64 v24; // rcx
  int v25; // r8d
  __int64 *v26; // rdx
  unsigned int v27; // edi
  __int64 *v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  int v32; // edi
  int v33; // esi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  int v40; // edi
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 *v43; // r9
  __int64 *j; // rax
  __int64 v45; // rdx
  int v46; // edi
  int v47; // edi
  __int64 v48; // r11
  int v49; // r15d
  _QWORD *v50; // r12
  __int64 v51; // r8
  _QWORD *v52; // rcx
  __int64 v53; // r10
  int v54; // edi
  unsigned int v55; // eax
  __int64 v56; // r8
  int v57; // r10d
  __int64 *v58; // r9
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rcx
  int v64; // esi
  __int64 v65; // rcx
  _QWORD *v66; // r9
  __int64 *v67; // r8
  __int64 *i; // rax
  __int64 v69; // rdx
  int v70; // r9d
  int v71; // r9d
  __int64 v72; // r11
  unsigned int v73; // edi
  _QWORD *v74; // rcx
  __int64 v75; // r10
  int v76; // esi
  unsigned int v77; // eax
  __int64 v78; // rdx
  int v79; // r10d
  __int64 *v80; // r8
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  int v84; // edi
  __int64 v85; // rdx
  _QWORD *v86; // rcx
  __int64 *v87; // r8
  __int64 *v88; // rax
  __int64 v89; // rdx
  int v90; // r9d
  int v91; // r9d
  __int64 v92; // r11
  unsigned int v93; // edi
  _QWORD *v94; // rcx
  __int64 v95; // r10
  int v96; // edi
  int v97; // r9d
  __int64 *v98; // r8
  unsigned int v99; // r12d
  __int64 v100; // rax
  unsigned __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  _QWORD *v105; // rdi
  int v106; // esi
  __int64 v107; // rcx
  _QWORD *v108; // rax
  __int64 *v109; // r11
  __int64 *v110; // rax
  __int64 v111; // rdx
  int v112; // edi
  int v113; // edi
  __int64 v114; // r10
  unsigned int v115; // r8d
  _QWORD *v116; // rcx
  __int64 v117; // r9
  int v118; // esi
  int v119; // r9d
  unsigned int v120; // r14d
  __int64 v121; // rdx
  _QWORD *v122; // r14
  _QWORD *v123; // r15
  unsigned int v124; // [rsp+0h] [rbp-48h]
  unsigned int v125; // [rsp+0h] [rbp-48h]
  int v126; // [rsp+0h] [rbp-48h]
  _QWORD *v127; // [rsp+0h] [rbp-48h]
  int v128; // [rsp+0h] [rbp-48h]
  int v129; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD *)(a3 + 128);
  v6 = *a1;
  if ( v5
    || (sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104)),
        (v5 = *(_QWORD *)(a3 + 128)) != 0) )
  {
    v5 = *(_QWORD *)(v5 + 88);
  }
  v7 = *(_QWORD *)(v6 + 72);
  v8 = 0;
  v9 = *(_DWORD *)(v7 + 80);
  v10 = *(__int64 **)(v7 + 64);
  if ( !v9 )
    goto LABEL_73;
  v11 = v9 - 1;
  v12 = 1;
  v13 = nullptr;
  LODWORD(v14) = v11 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
  v15 = &v10[2 * (unsigned int)v14];
  v16 = *v15;
  if ( v5 != *v15 )
  {
    while ( v16 != -4096 )
    {
      if ( !v13 && v16 == -8192 )
        v13 = v15;
      v14 = (unsigned int)v11 & ((_DWORD)v14 + v12);
      v15 = &v10[2 * v14];
      v16 = *v15;
      if ( v5 == *v15 )
        goto LABEL_5;
      ++v12;
    }
    if ( !v13 )
      v13 = v15;
    v32 = *(_DWORD *)(v7 + 72) + 1;
    v8 = 2 * v9;
    if ( 4 * v32 < 3 * v9 )
    {
      if ( v9 >> 3 < v9 - *(_DWORD *)(v7 + 76) - v32 )
        goto LABEL_21;
      v125 = *(_DWORD *)(v7 + 80);
      v101 = ((((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1)) >> 4) | ((v11 | (v11 >> 1)) >> 2) | v11 | (v11 >> 1);
      v102 = ((((v101 >> 8) | v101) >> 16) | (v101 >> 8) | v101) + 1;
      if ( (unsigned int)v102 < 0x40 )
        LODWORD(v102) = 64;
      *(_DWORD *)(v7 + 80) = v102;
      v103 = sub_25CC9C0(16LL * (unsigned int)v102, 8);
      v104 = *(unsigned int *)(v7 + 80);
      *(_QWORD *)(v7 + 64) = v103;
      v105 = (_QWORD *)v103;
      v106 = v104;
      v107 = 16 * v104;
      v108 = (_QWORD *)(v103 + v107);
      if ( v10 )
      {
        *(_QWORD *)(v7 + 72) = 0;
        v109 = &v10[2 * v125];
        if ( v107 )
        {
          if ( (((_BYTE)v108 - (_BYTE)v105) & 0x10) == 0 || (*v105 = -4096, v105 += 2, v105 != v108) )
          {
            do
            {
              *v105 = -4096;
              v105 += 4;
              *(v105 - 2) = -4096;
            }
            while ( v105 != v108 );
          }
        }
        v110 = v10;
        do
        {
          v111 = *v110;
          if ( *v110 != -4096 && v111 != -8192 )
          {
            v112 = *(_DWORD *)(v7 + 80);
            if ( !v112 )
            {
              *(_QWORD *)&dword_0 = *v110;
              BUG();
            }
            v113 = v112 - 1;
            v114 = *(_QWORD *)(v7 + 64);
            v115 = v113 & (((unsigned int)v111 >> 9) ^ ((unsigned int)v111 >> 4));
            v116 = (_QWORD *)(v114 + 16LL * v115);
            v117 = *v116;
            if ( *v116 != v111 )
            {
              v129 = 1;
              v127 = nullptr;
              while ( v117 != -4096 )
              {
                if ( !v127 )
                {
                  if ( v117 != -8192 )
                    v116 = nullptr;
                  v127 = v116;
                }
                v115 = v113 & (v129 + v115);
                v116 = (_QWORD *)(v114 + 16LL * v115);
                v117 = *v116;
                if ( v111 == *v116 )
                  goto LABEL_130;
                ++v129;
              }
              if ( v127 )
                v116 = v127;
            }
LABEL_130:
            *v116 = v111;
            v116[1] = v110[1];
            ++*(_DWORD *)(v7 + 72);
          }
          v110 += 2;
        }
        while ( v109 != v110 );
        operator delete();
      }
      else
      {
        *(_QWORD *)(v7 + 72) = 0;
        if ( v105 == v108 )
        {
          v32 = 1;
LABEL_134:
          if ( v106 )
          {
            v118 = v106 - 1;
            v119 = 1;
            v80 = nullptr;
            v120 = v118 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
            v13 = &v108[2 * v120];
            v121 = *v13;
            if ( v5 == *v13 )
              goto LABEL_21;
            while ( v121 != -4096 )
            {
              if ( v121 == -8192 && !v80 )
                v80 = v13;
              v120 = v118 & (v119 + v120);
              v13 = &v108[2 * v120];
              v121 = *v13;
              if ( v5 == *v13 )
                goto LABEL_21;
              ++v119;
            }
LABEL_93:
            if ( v80 )
              v13 = v80;
LABEL_21:
            *(_DWORD *)(v7 + 72) = v32;
            if ( *v13 != -4096 )
              --*(_DWORD *)(v7 + 76);
            *v13 = v5;
            v18 = 0;
            v13[1] = 0;
            v17 = *(_QWORD *)(a2 + 128);
            v19 = *a1;
            if ( v17 )
              goto LABEL_6;
LABEL_24:
            sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104));
            v17 = *(_QWORD *)(a2 + 128);
            if ( !v17 )
              goto LABEL_7;
            goto LABEL_6;
          }
          goto LABEL_213;
        }
        if ( (((_BYTE)v108 - (_BYTE)v105) & 0x10) == 0 || (*v105 = -4096, v105 += 2, v105 != v108) )
        {
          do
          {
            *v105 = -4096;
            v105 += 4;
            *(v105 - 2) = -4096;
          }
          while ( v105 != v108 );
        }
      }
      v108 = *(_QWORD **)(v7 + 64);
      v106 = *(_DWORD *)(v7 + 80);
      v32 = *(_DWORD *)(v7 + 72) + 1;
      goto LABEL_134;
    }
LABEL_73:
    v124 = *(_DWORD *)(v7 + 80);
    v59 = (unsigned int)(v8 - 1) | ((unsigned __int64)(unsigned int)(v8 - 1) >> 1);
    v60 = (((v59 >> 2) | v59) >> 4) | (v59 >> 2) | v59;
    v61 = ((((v60 >> 8) | v60) >> 16) | (v60 >> 8) | v60) + 1;
    if ( (unsigned int)v61 < 0x40 )
      LODWORD(v61) = 64;
    *(_DWORD *)(v7 + 80) = v61;
    v62 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v61, 8);
    v63 = *(unsigned int *)(v7 + 80);
    *(_QWORD *)(v7 + 64) = v62;
    v64 = v63;
    v65 = 16 * v63;
    v66 = &v62[(unsigned __int64)v65 / 8];
    if ( v10 )
    {
      *(_QWORD *)(v7 + 72) = 0;
      v67 = &v10[2 * v124];
      if ( v65 )
      {
        if ( (v65 & 0x10) == 0 || (*v62 = -4096, v62 += 2, v62 != v66) )
        {
          do
          {
            *v62 = -4096;
            v62 += 4;
            *(v62 - 2) = -4096;
          }
          while ( v62 != v66 );
        }
      }
      for ( i = v10; v67 != i; i += 2 )
      {
        v69 = *i;
        if ( *i != -4096 && v69 != -8192 )
        {
          v70 = *(_DWORD *)(v7 + 80);
          if ( !v70 )
          {
            *(_QWORD *)&dword_0 = *i;
            BUG();
          }
          v71 = v70 - 1;
          v72 = *(_QWORD *)(v7 + 64);
          v73 = v71 & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
          v74 = (_QWORD *)(v72 + 16LL * v73);
          v75 = *v74;
          if ( v69 != *v74 )
          {
            v126 = 1;
            v122 = nullptr;
            while ( v75 != -4096 )
            {
              if ( !v122 && v75 == -8192 )
                v122 = v74;
              v73 = v71 & (v126 + v73);
              v74 = (_QWORD *)(v72 + 16LL * v73);
              v75 = *v74;
              if ( v69 == *v74 )
                goto LABEL_85;
              ++v126;
            }
            if ( v122 )
              v74 = v122;
          }
LABEL_85:
          *v74 = v69;
          v74[1] = i[1];
          ++*(_DWORD *)(v7 + 72);
        }
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v7 + 72) = 0;
      if ( v62 == v66 )
      {
        v32 = 1;
LABEL_89:
        if ( v64 )
        {
          v76 = v64 - 1;
          v77 = v76 & (((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4));
          v13 = &v66[2 * v77];
          v78 = *v13;
          if ( v5 == *v13 )
            goto LABEL_21;
          v79 = 1;
          v80 = nullptr;
          while ( v78 != -4096 )
          {
            if ( v78 == -8192 && !v80 )
              v80 = v13;
            v77 = v76 & (v79 + v77);
            v13 = &v66[2 * v77];
            v78 = *v13;
            if ( v5 == *v13 )
              goto LABEL_21;
            ++v79;
          }
          goto LABEL_93;
        }
LABEL_213:
        *(_DWORD *)(v7 + 72) = v32;
        BUG();
      }
      if ( (v65 & 0x10) == 0 || (*v62 = -4096, v62 += 2, v62 != v66) )
      {
        do
        {
          *v62 = -4096;
          v62 += 4;
          *(v62 - 2) = -4096;
        }
        while ( v62 != v66 );
      }
    }
    v66 = *(_QWORD **)(v7 + 64);
    v64 = *(_DWORD *)(v7 + 80);
    v32 = *(_DWORD *)(v7 + 72) + 1;
    goto LABEL_89;
  }
LABEL_5:
  v17 = *(_QWORD *)(a2 + 128);
  v18 = v15[1];
  v19 = *a1;
  if ( !v17 )
    goto LABEL_24;
LABEL_6:
  v17 = *(_QWORD *)(v17 + 88);
LABEL_7:
  v20 = *(_QWORD *)(v19 + 72);
  v21 = 0;
  v22 = *(unsigned int *)(v20 + 80);
  v23 = *(__int64 **)(v20 + 64);
  if ( !(_DWORD)v22 )
    goto LABEL_41;
  v24 = (unsigned int)(v22 - 1);
  v25 = 1;
  v26 = nullptr;
  v27 = v24 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
  v28 = &v23[2 * v27];
  v29 = *v28;
  if ( v17 == *v28 )
  {
LABEL_9:
    v30 = v28[1];
    return v18 > v30;
  }
  while ( v29 != -4096 )
  {
    if ( v29 == -8192 && !v26 )
      v26 = v28;
    v27 = v24 & (v25 + v27);
    v28 = &v23[2 * v27];
    v29 = *v28;
    if ( v17 == *v28 )
      goto LABEL_9;
    ++v25;
  }
  if ( !v26 )
    v26 = v28;
  v33 = *(_DWORD *)(v20 + 72) + 1;
  v21 = 2 * v22;
  if ( 4 * v33 >= (unsigned int)(3 * v22) )
  {
LABEL_41:
    v35 = (unsigned int)(v21 - 1) | ((unsigned __int64)(unsigned int)(v21 - 1) >> 1);
    v36 = (((v35 >> 2) | v35) >> 4) | (v35 >> 2) | v35;
    v37 = ((((v36 >> 8) | v36) >> 16) | (v36 >> 8) | v36) + 1;
    if ( (unsigned int)v37 < 0x40 )
      LODWORD(v37) = 64;
    *(_DWORD *)(v20 + 80) = v37;
    v38 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v37, 8);
    v39 = *(unsigned int *)(v20 + 80);
    *(_QWORD *)(v20 + 64) = v38;
    v40 = v39;
    v41 = 16 * v39;
    v42 = &v38[(unsigned __int64)v41 / 8];
    if ( v23 )
    {
      *(_QWORD *)(v20 + 72) = 0;
      v43 = &v23[2 * (unsigned int)v22];
      if ( v41 )
      {
        if ( (v41 & 0x10) == 0 || (*v38 = -4096, v38 += 2, v38 != v42) )
        {
          do
          {
            *v38 = -4096;
            v38 += 4;
            *(v38 - 2) = -4096;
          }
          while ( v38 != v42 );
        }
      }
      for ( j = v23; v43 != j; j += 2 )
      {
        v45 = *j;
        if ( *j != -4096 && v45 != -8192 )
        {
          v46 = *(_DWORD *)(v20 + 80);
          if ( !v46 )
          {
            *(_QWORD *)&dword_0 = *j;
            BUG();
          }
          v47 = v46 - 1;
          v48 = *(_QWORD *)(v20 + 64);
          v49 = 1;
          v50 = nullptr;
          LODWORD(v51) = v47 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
          v52 = (_QWORD *)(v48 + 16LL * (unsigned int)v51);
          v53 = *v52;
          if ( v45 != *v52 )
          {
            while ( v53 != -4096 )
            {
              if ( v53 == -8192 && !v50 )
                v50 = v52;
              v51 = v47 & (unsigned int)(v51 + v49);
              v52 = (_QWORD *)(v48 + 16 * v51);
              v53 = *v52;
              if ( v45 == *v52 )
                goto LABEL_53;
              ++v49;
            }
            if ( v50 )
              v52 = v50;
          }
LABEL_53:
          *v52 = v45;
          v52[1] = j[1];
          ++*(_DWORD *)(v20 + 72);
        }
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v20 + 72) = 0;
      if ( v38 == v42 )
      {
        v33 = 1;
LABEL_57:
        if ( v40 )
        {
          v54 = v40 - 1;
          v55 = v54 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v26 = &v42[2 * v55];
          v56 = *v26;
          if ( v17 != *v26 )
          {
            v57 = 1;
            v58 = nullptr;
            while ( v56 != -4096 )
            {
              if ( !v58 && v56 == -8192 )
                v58 = v26;
              v55 = v54 & (v57 + v55);
              v26 = &v42[2 * v55];
              v56 = *v26;
              if ( v17 == *v26 )
                goto LABEL_36;
              ++v57;
            }
            if ( v58 )
              v26 = v58;
          }
          goto LABEL_36;
        }
        goto LABEL_212;
      }
      if ( (v41 & 0x10) == 0 || (*v38 = -4096, v38 += 2, v38 != v42) )
      {
        do
        {
          *v38 = -4096;
          v38 += 4;
          *(v38 - 2) = -4096;
        }
        while ( v38 != v42 );
      }
    }
    v42 = *(_QWORD **)(v20 + 64);
    v40 = *(_DWORD *)(v20 + 80);
    v33 = *(_DWORD *)(v20 + 72) + 1;
    goto LABEL_57;
  }
  if ( (unsigned int)v22 >> 3 >= (int)v22 - *(_DWORD *)(v20 + 76) - v33 )
  {
    v81 = (((((((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4) | ((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 8)
           | ((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4)
           | ((v24 | (v24 >> 1)) >> 2)
           | v24
           | (v24 >> 1)) >> 16)
         | ((((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4) | ((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 8)
         | ((((v24 | (v24 >> 1)) >> 2) | v24 | (v24 >> 1)) >> 4)
         | ((v24 | (v24 >> 1)) >> 2)
         | v24
         | (v24 >> 1))
        + 1;
    if ( (unsigned int)v81 < 0x40 )
      LODWORD(v81) = 64;
    *(_DWORD *)(v20 + 80) = v81;
    v82 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v81, 8);
    v83 = *(unsigned int *)(v20 + 80);
    *(_QWORD *)(v20 + 64) = v82;
    v84 = v83;
    v85 = 16 * v83;
    v86 = &v82[(unsigned __int64)v85 / 8];
    if ( v23 )
    {
      *(_QWORD *)(v20 + 72) = 0;
      v87 = &v23[2 * v22];
      if ( v85 )
      {
        if ( (v85 & 0x10) == 0 || (*v82 = -4096, v82 += 2, v82 != v86) )
        {
          do
          {
            *v82 = -4096;
            v82 += 4;
            *(v82 - 2) = -4096;
          }
          while ( v82 != v86 );
        }
      }
      v88 = v23;
      do
      {
        v89 = *v88;
        if ( *v88 != -8192 && v89 != -4096 )
        {
          v90 = *(_DWORD *)(v20 + 80);
          if ( !v90 )
          {
            *(_QWORD *)&dword_0 = *v88;
            BUG();
          }
          v91 = v90 - 1;
          v92 = *(_QWORD *)(v20 + 64);
          v93 = v91 & (((unsigned int)v89 >> 9) ^ ((unsigned int)v89 >> 4));
          v94 = (_QWORD *)(v92 + 16LL * v93);
          v95 = *v94;
          if ( *v94 != v89 )
          {
            v128 = 1;
            v123 = nullptr;
            while ( v95 != -4096 )
            {
              if ( !v123 && v95 == -8192 )
                v123 = v94;
              v93 = v91 & (v128 + v93);
              v94 = (_QWORD *)(v92 + 16LL * v93);
              v95 = *v94;
              if ( v89 == *v94 )
                goto LABEL_108;
              ++v128;
            }
            if ( v123 )
              v94 = v123;
          }
LABEL_108:
          *v94 = v89;
          v94[1] = v88[1];
          ++*(_DWORD *)(v20 + 72);
        }
        v88 += 2;
      }
      while ( v87 != v88 );
      operator delete();
    }
    else
    {
      *(_QWORD *)(v20 + 72) = 0;
      if ( v82 == v86 )
      {
        v33 = 1;
LABEL_112:
        if ( v84 )
        {
          v96 = v84 - 1;
          v97 = 1;
          v98 = nullptr;
          v99 = v96 & (((unsigned int)v17 >> 9) ^ ((unsigned int)v17 >> 4));
          v26 = &v86[2 * v99];
          v100 = *v26;
          if ( v17 != *v26 )
          {
            while ( v100 != -4096 )
            {
              if ( !v98 && v100 == -8192 )
                v98 = v26;
              v99 = v96 & (v97 + v99);
              v26 = &v86[2 * v99];
              v100 = *v26;
              if ( v17 == *v26 )
                goto LABEL_36;
              ++v97;
            }
            if ( v98 )
              v26 = v98;
          }
          goto LABEL_36;
        }
LABEL_212:
        *(_DWORD *)(v20 + 72) = v33;
        BUG();
      }
      if ( (v85 & 0x10) == 0 || (*v82 = -4096, v82 += 2, v82 != v86) )
      {
        do
        {
          *v82 = -4096;
          v82 += 4;
          *(v82 - 2) = -4096;
        }
        while ( v82 != v86 );
      }
    }
    v86 = *(_QWORD **)(v20 + 64);
    v84 = *(_DWORD *)(v20 + 80);
    v33 = *(_DWORD *)(v20 + 72) + 1;
    goto LABEL_112;
  }
LABEL_36:
  *(_DWORD *)(v20 + 72) = v33;
  if ( *v26 != -4096 )
    --*(_DWORD *)(v20 + 76);
  *v26 = v17;
  v30 = 0;
  v26[1] = 0;
  return v18 > v30;
}

