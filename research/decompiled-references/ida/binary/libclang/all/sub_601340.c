__int64 __fastcall sub_601340(_QWORD *a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 *v7; // r14
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // r13d
  unsigned int v12; // edi
  __int64 *v13; // rax
  __int64 v14; // rsi
  unsigned __int64 *v15; // r15
  __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // r13
  __int64 v21; // r14
  int v22; // eax
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  __int64 result; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r13
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  __int64 v42; // r13
  __int64 *v43; // r15
  __int64 v44; // r9
  __int64 v45; // rax
  int v46; // esi
  int v47; // esi
  int v48; // r11d
  _QWORD *v49; // r10
  __int64 v50; // rcx
  _QWORD *v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  unsigned __int64 v55; // rax
  int v56; // eax
  unsigned int v57; // eax
  unsigned __int64 v58; // rdi
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  _QWORD *v63; // rdx
  __int64 v64; // r9
  __int64 *v65; // r8
  __int64 v66; // rax
  __int64 *v67; // r15
  __int64 *v68; // rbx
  __int64 v69; // r8
  __int64 v70; // rax
  int v71; // esi
  int v72; // esi
  unsigned int v73; // ecx
  _QWORD *v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  int v79; // eax
  int v80; // eax
  int v81; // r9d
  unsigned int v82; // r13d
  __int64 v83; // rdx
  void **v84; // rdx
  __int64 v85; // rax
  void **v86; // rax
  __int64 v87; // rdx
  void **v88; // rdx
  __int64 v89; // rax
  void **v90; // rax
  _QWORD *v91; // r11
  int v92; // r10d
  __int64 v93; // r9
  unsigned __int64 v94; // [rsp+0h] [rbp-58h]
  unsigned __int64 v95; // [rsp+0h] [rbp-58h]
  void **v96; // [rsp+0h] [rbp-58h]
  __int64 v97; // [rsp+0h] [rbp-58h]
  unsigned __int64 v98; // [rsp+0h] [rbp-58h]
  unsigned __int64 v99; // [rsp+0h] [rbp-58h]
  void **v100; // [rsp+0h] [rbp-58h]
  __int64 v101; // [rsp+0h] [rbp-58h]
  int v102; // [rsp+0h] [rbp-58h]
  void **v103; // [rsp+8h] [rbp-50h]
  __int64 v104; // [rsp+8h] [rbp-50h]
  __int64 v105; // [rsp+8h] [rbp-50h]
  void **v106; // [rsp+8h] [rbp-50h]
  __int64 v107; // [rsp+8h] [rbp-50h]
  __int64 v108; // [rsp+8h] [rbp-50h]
  __int64 v109; // [rsp+8h] [rbp-50h]
  __int64 v110; // [rsp+10h] [rbp-48h]
  __int64 v111; // [rsp+10h] [rbp-48h]
  __int64 v112; // [rsp+10h] [rbp-48h]
  __int64 v113; // [rsp+10h] [rbp-48h]
  __int64 v114; // [rsp+18h] [rbp-40h]

  if ( (*(_BYTE *)(a2 + 3) & 2) == 0 )
    return 0;
  v2 = 0;
  v4 = a2;
  v5 = a1[211];
  v6 = *(unsigned int *)(v5 + 16);
  v7 = *(__int64 **)v5;
  if ( !(_DWORD)v6 )
    goto LABEL_66;
  v8 = (unsigned int)(v6 - 1);
  v9 = 1;
  v10 = 0;
  v11 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v12 = v8 & v11;
  v13 = &v7[2 * ((unsigned int)v8 & v11)];
  v14 = *v13;
  if ( v4 != *v13 )
  {
    while ( v14 != -4096 )
    {
      if ( v14 == -8192 && !v10 )
        v10 = (__int64)v13;
      v12 = v8 & (v9 + v12);
      v13 = &v7[2 * v12];
      v14 = *v13;
      if ( v4 == *v13 )
        goto LABEL_4;
      v9 = (unsigned int)(v9 + 1);
    }
    if ( !v10 )
      v10 = (__int64)v13;
    v14 = (unsigned int)(*(_DWORD *)(v5 + 8) + 1);
    v2 = 2 * v6;
    v9 = (unsigned int)(4 * v14);
    if ( (unsigned int)v9 < 3 * (int)v6 )
    {
      if ( (unsigned int)v6 >> 3 < (int)v6 - *(_DWORD *)(v5 + 12) - (int)v14 )
      {
LABEL_87:
        *(_DWORD *)(v5 + 8) = v14;
        if ( *(_QWORD *)v10 != -4096 )
          --*(_DWORD *)(v5 + 12);
        *(_QWORD *)v10 = v4;
        v15 = (unsigned __int64 *)(v10 + 8);
        v17 = 0;
        *(_QWORD *)(v10 + 8) = 0;
        goto LABEL_7;
      }
      v59 = (((((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
             | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
             | ((v8 | (v8 >> 1)) >> 2)
             | v8
             | (v8 >> 1)) >> 16)
           | ((((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4) | ((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 8)
           | ((((v8 | (v8 >> 1)) >> 2) | v8 | (v8 >> 1)) >> 4)
           | ((v8 | (v8 >> 1)) >> 2)
           | v8
           | (v8 >> 1))
          + 1;
      if ( (unsigned int)v59 < 0x40 )
        LODWORD(v59) = 64;
      *(_DWORD *)(v5 + 16) = v59;
      v60 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v59, 8);
      v61 = *(unsigned int *)(v5 + 16);
      *(_QWORD *)v5 = v60;
      v62 = 16 * v61;
      v63 = &v60[(unsigned __int64)v62 / 8];
      if ( v7 )
      {
        *(_QWORD *)(v5 + 8) = 0;
        v64 = 16 * v6;
        v65 = &v7[2 * v6];
        if ( v62 )
        {
          if ( (v62 & 0x10) == 0 || (*v60 = -4096, v60 += 2, v60 != v63) )
          {
            do
            {
              *v60 = -4096;
              v60 += 4;
              *(v60 - 2) = -4096;
            }
            while ( v60 != v63 );
          }
        }
        v66 = v4;
        v67 = v7;
        v68 = v65;
        v69 = v66;
        do
        {
          v70 = *v67;
          if ( *v67 != -4096 && v70 != -8192 )
          {
            v71 = *(_DWORD *)(v5 + 16);
            if ( !v71 )
            {
              *(_QWORD *)&dword_0 = *v67;
              BUG();
            }
            v72 = v71 - 1;
            v73 = v72 & (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4));
            v74 = (_QWORD *)(*(_QWORD *)v5 + 16LL * v73);
            v75 = *v74;
            if ( v70 != *v74 )
            {
              v102 = 1;
              v91 = nullptr;
              while ( v75 != -4096 )
              {
                if ( v75 == -8192 && !v91 )
                  v91 = v74;
                v73 = v72 & (v102 + v73);
                v74 = (_QWORD *)(*(_QWORD *)v5 + 16LL * v73);
                v75 = *v74;
                if ( v70 == *v74 )
                  goto LABEL_114;
                ++v102;
              }
              if ( v91 )
                v74 = v91;
            }
LABEL_114:
            *v74 = v70;
            v76 = v67[1];
            v67[1] = 0;
            v74[1] = v76;
            ++*(_DWORD *)(v5 + 8);
            v77 = v67[1];
            if ( v77 )
            {
              if ( (v77 & 4) != 0 )
              {
                v78 = v77 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v78 )
                {
                  v87 = *(_QWORD *)(v78 + 24);
                  if ( v87 )
                  {
                    if ( (v87 & 4) != 0 )
                    {
                      v88 = (void **)(v87 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v88 )
                      {
                        if ( *v88 != v88 + 2 )
                        {
                          v114 = v69;
                          v111 = v64;
                          v106 = v88;
                          v98 = v78;
                          free(*v88);
                          v69 = v114;
                          v64 = v111;
                          v88 = v106;
                          v78 = v98;
                        }
                        v112 = v69;
                        v107 = v64;
                        v99 = v78;
                        operator delete(v88, 0x30u);
                        v69 = v112;
                        v64 = v107;
                        v78 = v99;
                      }
                    }
                  }
                  v89 = *(_QWORD *)(v78 + 8);
                  if ( v89 )
                  {
                    if ( (v89 & 4) != 0 )
                    {
                      v90 = (void **)(v89 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v90 )
                      {
                        if ( *v90 != v90 + 2 )
                        {
                          v113 = v69;
                          v108 = v64;
                          v100 = v90;
                          free(*v90);
                          v69 = v113;
                          v64 = v108;
                          v90 = v100;
                        }
                        v109 = v69;
                        v101 = v64;
                        operator delete(v90, 0x30u);
                        v69 = v109;
                        v64 = v101;
                      }
                    }
                  }
                }
              }
            }
          }
          v67 += 2;
        }
        while ( v68 != v67 );
        v4 = v69;
        operator delete();
      }
      else
      {
        *(_QWORD *)(v5 + 8) = 0;
        if ( v60 != v63 )
        {
          if ( (v62 & 0x10) == 0 || (*v60 = -4096, v60 += 2, v60 != v63) )
          {
            do
            {
              *v60 = -4096;
              v60 += 4;
              *(v60 - 2) = -4096;
            }
            while ( v60 != v63 );
          }
        }
      }
      v79 = *(_DWORD *)(v5 + 16);
      v14 = (unsigned int)(*(_DWORD *)(v5 + 8) + 1);
      if ( v79 )
      {
        v80 = v79 - 1;
        v81 = 1;
        v9 = 0;
        v82 = v80 & v11;
        v10 = *(_QWORD *)v5 + 16LL * v82;
        v8 = *(_QWORD *)v10;
        if ( v4 != *(_QWORD *)v10 )
        {
          while ( v8 != -4096 )
          {
            if ( !v9 && v8 == -8192 )
              v9 = v10;
            v82 = v80 & (v81 + v82);
            v10 = *(_QWORD *)v5 + 16LL * v82;
            v8 = *(_QWORD *)v10;
            if ( v4 == *(_QWORD *)v10 )
              goto LABEL_87;
            ++v81;
          }
          if ( v9 )
            v10 = v9;
        }
        goto LABEL_87;
      }
LABEL_200:
      ++*(_DWORD *)(v5 + 8);
      BUG();
    }
LABEL_66:
    v35 = (unsigned int)(v2 - 1) | ((unsigned __int64)(unsigned int)(v2 - 1) >> 1);
    v36 = (((v35 >> 2) | v35) >> 4) | (v35 >> 2) | v35;
    v37 = ((((v36 >> 8) | v36) >> 16) | (v36 >> 8) | v36) + 1;
    if ( (unsigned int)v37 < 0x40 )
      LODWORD(v37) = 64;
    *(_DWORD *)(v5 + 16) = v37;
    v38 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v37, 8);
    v39 = *(unsigned int *)(v5 + 16);
    *(_QWORD *)v5 = v38;
    v40 = 16 * v39;
    v41 = &v38[(unsigned __int64)v40 / 8];
    if ( v7 )
    {
      *(_QWORD *)(v5 + 8) = 0;
      v42 = 2LL * (unsigned int)v6;
      if ( v40 )
      {
        if ( (v40 & 0x10) == 0 || (*v38 = -4096, v38 += 2, v38 != v41) )
        {
          do
          {
            *v38 = -4096;
            v38 += 4;
            *(v38 - 2) = -4096;
          }
          while ( v38 != v41 );
        }
      }
      v43 = v7;
      if ( v7 != &v7[v42] )
      {
        v44 = v4;
        do
        {
          v45 = *v43;
          if ( *v43 != -4096 && v45 != -8192 )
          {
            v46 = *(_DWORD *)(v5 + 16);
            if ( !v46 )
            {
              *(_QWORD *)&dword_0 = *v43;
              BUG();
            }
            v47 = v46 - 1;
            v48 = 1;
            v49 = nullptr;
            LODWORD(v50) = v47 & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
            v51 = (_QWORD *)(*(_QWORD *)v5 + 16LL * (unsigned int)v50);
            v52 = *v51;
            if ( v45 != *v51 )
            {
              while ( v52 != -4096 )
              {
                if ( v52 == -8192 && !v49 )
                  v49 = v51;
                v50 = v47 & (unsigned int)(v50 + v48);
                v51 = (_QWORD *)(*(_QWORD *)v5 + 16 * v50);
                v52 = *v51;
                if ( v45 == *v51 )
                  goto LABEL_79;
                ++v48;
              }
              if ( v49 )
                v51 = v49;
            }
LABEL_79:
            *v51 = v45;
            v53 = v43[1];
            v43[1] = 0;
            v51[1] = v53;
            ++*(_DWORD *)(v5 + 8);
            v54 = v43[1];
            if ( v54 )
            {
              if ( (v54 & 4) != 0 )
              {
                v55 = v54 & 0xFFFFFFFFFFFFFFF8LL;
                if ( v55 )
                {
                  v83 = *(_QWORD *)(v55 + 24);
                  if ( v83 )
                  {
                    if ( (v83 & 4) != 0 )
                    {
                      v84 = (void **)(v83 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v84 )
                      {
                        if ( *v84 != v84 + 2 )
                        {
                          v110 = v44;
                          v103 = v84;
                          v94 = v55;
                          free(*v84);
                          v44 = v110;
                          v84 = v103;
                          v55 = v94;
                        }
                        v104 = v44;
                        v95 = v55;
                        operator delete(v84, 0x30u);
                        v44 = v104;
                        v55 = v95;
                      }
                    }
                  }
                  v85 = *(_QWORD *)(v55 + 8);
                  if ( v85 )
                  {
                    if ( (v85 & 4) != 0 )
                    {
                      v86 = (void **)(v85 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v86 )
                      {
                        if ( *v86 != v86 + 2 )
                        {
                          v105 = v44;
                          v96 = v86;
                          free(*v86);
                          v44 = v105;
                          v86 = v96;
                        }
                        v97 = v44;
                        operator delete(v86, 0x30u);
                        v44 = v97;
                      }
                    }
                  }
                }
              }
            }
          }
          v43 += 2;
        }
        while ( &v7[v42] != v43 );
        v4 = v44;
      }
      operator delete();
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0;
      if ( v38 != v41 )
      {
        if ( (v40 & 0x10) == 0 || (*v38 = -4096, v38 += 2, v38 != v41) )
        {
          do
          {
            *v38 = -4096;
            v38 += 4;
            *(v38 - 2) = -4096;
          }
          while ( v38 != v41 );
        }
      }
    }
    v56 = *(_DWORD *)(v5 + 16);
    v14 = (unsigned int)(*(_DWORD *)(v5 + 8) + 1);
    if ( v56 )
    {
      v8 = (unsigned int)(v56 - 1);
      v9 = *(_QWORD *)v5;
      v57 = v8 & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
      v10 = *(_QWORD *)v5 + 16LL * v57;
      v58 = *(_QWORD *)v10;
      if ( v4 != *(_QWORD *)v10 )
      {
        v92 = 1;
        v93 = 0;
        while ( v58 != -4096 )
        {
          if ( v58 == -8192 && !v93 )
            v93 = v10;
          v57 = v8 & (v92 + v57);
          v10 = v9 + 16LL * v57;
          v58 = *(_QWORD *)v10;
          if ( v4 == *(_QWORD *)v10 )
            goto LABEL_87;
          ++v92;
        }
        if ( v93 )
          v10 = v93;
      }
      goto LABEL_87;
    }
    goto LABEL_200;
  }
LABEL_4:
  v15 = (unsigned __int64 *)(v13 + 1);
  v16 = v13[1];
  if ( v16 )
  {
    v17 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v16 & 4) == 0 )
      goto LABEL_36;
    if ( v17 )
    {
      do
      {
        v17 = *(_QWORD *)v17;
LABEL_36:
        ;
      }
      while ( v17 && (*(_BYTE *)(v17 + 12) & 3) == 2 );
    }
  }
  else
  {
    v17 = 0;
  }
LABEL_7:
  if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 )
  {
    v14 = v4;
    sub_11F4EC0(a1, v4, v10, v8, v9);
    if ( (*(_BYTE *)(v4 + 3) & 2) != 0 )
      goto LABEL_9;
    if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 )
      goto LABEL_59;
LABEL_61:
    v21 = 0;
    goto LABEL_62;
  }
  if ( (*(_BYTE *)(v4 + 3) & 2) == 0 )
    goto LABEL_61;
LABEL_9:
  v18 = a1[7];
  v10 = *(unsigned __int8 *)(v18 + 18);
  if ( (v10 & 0x80u) == 0LL && (*(_BYTE *)(v18 + 20) & 0x20) == 0 )
  {
    v21 = 0;
    if ( (*(_BYTE *)(v4 + 4) & 0x10) == 0 )
      goto LABEL_21;
    goto LABEL_59;
  }
  v8 = *(unsigned int *)(a1[211] + 48LL);
  if ( (_DWORD)v8 )
  {
    v19 = *v15;
    if ( !*v15 || (v19 & 4) == 0 || (v20 = v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v30 = a1[16];
      a1[26] += 32LL;
      v20 = (v30 + 15) & 0xFFFFFFFFFFFFFFF0LL;
      v10 = v20 + 32;
      if ( a1[17] >= v20 + 32 && v30 )
      {
        a1[16] = v10;
      }
      else
      {
        v14 = 32;
        v20 = sub_5F8390((__int64)(a1 + 16), 32, 4);
      }
      v31 = *v15;
      *(_QWORD *)(v20 + 8) = 0;
      *(_DWORD *)(v20 + 16) = 0;
      *(_BYTE *)(v20 + 20) = 0;
      *(_QWORD *)v20 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      *(_QWORD *)(v20 + 24) = 0;
      *v15 = v20 | 4;
      v8 = *(unsigned int *)(a1[211] + 48LL);
    }
    if ( *(_DWORD *)(v20 + 16) != (_DWORD)v8 )
    {
      v14 = v4;
      sub_11D0740(a1, v4, v20, v8, v9);
    }
    v21 = *(unsigned __int8 *)(v20 + 20);
    if ( (*(_BYTE *)(v4 + 4) & 0x10) == 0 )
      goto LABEL_18;
    goto LABEL_60;
  }
  v21 = 0;
  if ( (*(_BYTE *)(v4 + 4) & 0x10) != 0 )
  {
LABEL_59:
    v21 = 0;
LABEL_60:
    v14 = v4;
    sub_11F4EC0(a1, v4, v10, v8, v9);
LABEL_18:
    if ( (*(_BYTE *)(v4 + 3) & 2) == 0 )
    {
LABEL_62:
      if ( v17 )
      {
        if ( (*(_BYTE *)(v17 + 12) & 3) == 0 )
        {
          v26 = (4 * v21) | v17 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v26 > 7 )
            goto LABEL_32;
        }
      }
      return 0;
    }
    v18 = a1[7];
    v10 = *(unsigned __int8 *)(v18 + 18);
  }
  if ( (v10 & 0x80u) != 0LL )
    goto LABEL_22;
LABEL_21:
  if ( (*(_BYTE *)(v18 + 20) & 0x20) == 0 )
    goto LABEL_62;
LABEL_22:
  v22 = *(_DWORD *)(a1[211] + 48LL);
  if ( !v22 )
    goto LABEL_62;
  v23 = *v15;
  if ( !*v15 || (v23 & 4) == 0 || (v24 = v23 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v28 = a1[16];
    a1[26] += 32LL;
    v24 = (v28 + 15) & 0xFFFFFFFFFFFFFFF0LL;
    v10 = v24 + 32;
    if ( a1[17] >= v24 + 32 && v28 )
    {
      a1[16] = v10;
    }
    else
    {
      v14 = 32;
      v24 = sub_5F8390((__int64)(a1 + 16), 32, 4);
    }
    v29 = *v15;
    *(_QWORD *)(v24 + 8) = 0;
    *(_DWORD *)(v24 + 16) = 0;
    *(_BYTE *)(v24 + 20) = 0;
    *(_QWORD *)v24 = v29 & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(v24 + 24) = 0;
    *v15 = v24 | 4;
    v22 = *(_DWORD *)(a1[211] + 48LL);
  }
  if ( *(_DWORD *)(v24 + 16) != v22 )
  {
    v14 = v4;
    sub_11D0740(a1, v4, v24, v8, v9);
  }
  v25 = *(_QWORD *)(v24 + 8);
  if ( v25 <= 7 )
  {
    if ( v17 )
    {
      if ( (*(_BYTE *)(v17 + 12) & 3) == 0 )
      {
        v26 = (4 * v21) | v17 & 0xFFFFFFFFFFFFFFFBLL;
        if ( v26 > 7 )
          goto LABEL_32;
      }
    }
    return 0;
  }
  if ( (v25 & 4) == 0 )
  {
    v33 = v24 + 8;
    if ( !v17 )
      return *(_QWORD *)(*(_QWORD *)v33 + 16LL);
    v34 = 1;
    goto LABEL_55;
  }
  v32 = v25 & 0xFFFFFFFFFFFFFFF8LL;
  v33 = *(_QWORD *)v32;
  v34 = *(unsigned int *)(v32 + 8);
  if ( !v17 || (*(_BYTE *)(v17 + 12) & 3) != 0 || (v26 = (4 * v21) | v17 & 0xFFFFFFFFFFFFFFFBLL, v26 <= 7) )
  {
    if ( !v34 )
      return 0;
    goto LABEL_55;
  }
  if ( v34 )
  {
LABEL_55:
    v33 = v33 + 8 * v34 - 8;
    return *(_QWORD *)(*(_QWORD *)v33 + 16LL);
  }
LABEL_32:
  result = sub_1181E10(v26 & 0xFFFFFFFFFFFFFFF8LL, v14, v10, v8, v9);
  if ( result )
    return *(_QWORD *)(result + 16);
  return result;
}

