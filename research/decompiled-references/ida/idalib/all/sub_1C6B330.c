__int64 __fastcall sub_1C6B330(_QWORD *a1, int *a2)
{
  _QWORD *v2; // r15
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // r12d
  unsigned __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  unsigned __int8 *v16; // rbx
  __int64 v17; // r13
  _BYTE *v18; // rdx
  __int64 result; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // r12
  void *v26; // rdi
  int v27; // edi
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 *j; // rdx
  __int64 *v33; // r14
  __int64 v34; // rcx
  int v35; // eax
  int v36; // esi
  unsigned int v37; // edx
  _QWORD *v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  _QWORD *v45; // r15
  _QWORD *v46; // rbx
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rax
  _QWORD *v49; // r13
  _QWORD *v50; // rbp
  _QWORD *v51; // rdi
  void *v52; // rdi
  void **v53; // rbp
  void **v54; // r13
  int v55; // esi
  int v56; // r8d
  unsigned int v57; // edi
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *i; // rdx
  __int64 *v63; // r14
  __int64 v64; // rcx
  int v65; // eax
  int v66; // esi
  unsigned int v67; // edx
  _QWORD *v68; // rax
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  _QWORD *v75; // r15
  _QWORD *v76; // rbx
  unsigned __int64 v77; // r12
  unsigned __int64 v78; // rax
  _QWORD *v79; // r13
  _QWORD *v80; // rbp
  _QWORD *v81; // rdi
  void *v82; // rdi
  void **v83; // rbp
  void **v84; // r13
  int v85; // esi
  int v86; // edi
  unsigned int v87; // r8d
  __int64 *v88; // r9
  int v89; // r10d
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 *v92; // rcx
  __int64 *v93; // rdx
  __int64 v94; // rcx
  _QWORD *v95; // rcx
  _QWORD *v96; // rdx
  int v97; // r10d
  _QWORD *v98; // r9
  int v99; // r10d
  _QWORD *v100; // r9
  int v101; // r10d
  __int64 *v103; // [rsp+8h] [rbp-70h]
  unsigned int v104; // [rsp+10h] [rbp-68h]
  __int64 *v105; // [rsp+10h] [rbp-68h]
  __int64 v106; // [rsp+18h] [rbp-60h]
  __int64 v107; // [rsp+20h] [rbp-58h]
  __int64 v108; // [rsp+20h] [rbp-58h]
  __int64 v109; // [rsp+28h] [rbp-50h]
  __int64 v110; // [rsp+28h] [rbp-50h]
  _QWORD *v111; // [rsp+30h] [rbp-48h]
  __int64 v112; // [rsp+30h] [rbp-48h]
  _QWORD *v113; // [rsp+38h] [rbp-40h]

  v2 = a1;
  v3 = sub_168B9E0(a1);
  v7 = a1[2];
  v8 = v3;
  if ( v7 )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 32LL))(a1[2]);
  v9 = *(_DWORD *)(v8 + 16);
  v103 = *(__int64 **)v8;
  if ( v9 )
  {
    v10 = v9 - 1;
    v104 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
    v11 = v10 & v104;
    v12 = (__int64 *)(*(_QWORD *)v8 + 32LL * ((unsigned int)v10 & v104));
    v13 = *v12;
    if ( v7 == *v12 )
    {
LABEL_5:
      v14 = v12[1];
      goto LABEL_6;
    }
    v27 = 1;
    v5 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v5 && v13 == -8192 )
          v5 = v12;
        v6 = (unsigned int)(v27 + 1);
        v11 = v10 & (v27 + v11);
        v12 = &v103[4 * v11];
        v13 = *v12;
        if ( v7 == *v12 )
          goto LABEL_5;
        if ( v13 == -4096 )
          break;
        ++v27;
      }
      if ( v5 )
        v12 = v5;
    }
    v4 = (unsigned int)(*(_DWORD *)(v8 + 8) + 1);
    if ( 4 * (int)v4 < 3 * v9 )
    {
      if ( v9 - *(_DWORD *)(v8 + 12) - (unsigned int)v4 > v9 >> 3 )
      {
LABEL_19:
        v28 = *v12;
        goto LABEL_20;
      }
      v59 = (((((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 8)
          | (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4)
          | (v10 >> 1)
          | v10
          | (((v10 >> 1) | v10) >> 2);
      v60 = ((v59 >> 16) | v59) + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      *(_DWORD *)(v8 + 16) = v60;
      v61 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v60, 8, 64, v4, v5, v6);
      *(_QWORD *)v8 = v61;
      if ( v103 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        v110 = 4LL * v9;
        for ( i = &v61[4 * *(unsigned int *)(v8 + 16)]; i != v61; v61 += 4 )
          *v61 = -4096;
        v108 = v8;
        v63 = v103;
        v112 = v7;
        v113 = v2;
        do
        {
          v64 = *v63;
          if ( *v63 != -8192 && v64 != -4096 )
          {
            v65 = *(_DWORD *)(v108 + 16);
            if ( !v65 )
            {
              *(_QWORD *)&dword_0 = *v63;
              BUG();
            }
            v66 = v65 - 1;
            v67 = (v65 - 1) & (((unsigned int)v64 >> 9) ^ ((unsigned int)v64 >> 4));
            v68 = (_QWORD *)(*(_QWORD *)v108 + 32LL * v67);
            v69 = *v68;
            if ( v64 != *v68 )
            {
              v99 = 1;
              v100 = nullptr;
              if ( v69 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v100 && v69 == -8192 )
                    v100 = v68;
                  v67 = v66 & (v99 + v67);
                  v68 = (_QWORD *)(*(_QWORD *)v108 + 32LL * v67);
                  v69 = *v68;
                  if ( v64 == *v68 )
                    break;
                  if ( v69 == -4096 )
                  {
                    if ( v100 )
                      v68 = v100;
                    break;
                  }
                  ++v99;
                }
              }
            }
            v70 = *v63;
            v68[1] = 0;
            v68[2] = 0;
            v68[3] = 0;
            *v68 = v70;
            v68[1] = v63[1];
            v71 = v63[2];
            v63[1] = 0;
            v72 = v68[2];
            v68[2] = v71;
            v73 = v63[3];
            v63[2] = v72;
            v74 = v68[3];
            v68[3] = v73;
            v75 = (_QWORD *)v63[2];
            v76 = (_QWORD *)v63[1];
            v63[3] = v74;
            ++*(_DWORD *)(v108 + 8);
            if ( v75 != v76 )
            {
              do
              {
                v77 = v76[1];
                if ( v77 )
                {
                  v78 = v76[2];
                  if ( v78 )
                  {
                    if ( v77 < v78 || v77 > v78 + 14848 )
                    {
                      v79 = *(_QWORD **)(v77 + 528);
                      v80 = &v79[8 * (unsigned __int64)*(unsigned int *)(v77 + 536)];
                      if ( v79 != v80 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v80 -= 8;
                            v81 = (_QWORD *)v80[3];
                            if ( v81 == v80 + 5 )
                              break;
                            operator delete(v81);
                            if ( v79 == v80 )
                              goto LABEL_93;
                          }
                        }
                        while ( v79 != v80 );
LABEL_93:
                        v80 = *(_QWORD **)(v77 + 528);
                      }
                      if ( v80 != (_QWORD *)(v77 + 544) )
                        free(v80);
                      v82 = *(void **)(v77 + 416);
                      v83 = (void **)(v77 + 416);
                      if ( v82 != (void *)(v77 + 432) )
                        free(v82);
                      v84 = (void **)(v77 + 96);
                      do
                      {
                        while ( 1 )
                        {
                          v83 -= 4;
                          if ( *v83 == v83 + 2 )
                            break;
                          operator delete(*v83);
                          if ( v83 == v84 )
                            goto LABEL_101;
                        }
                      }
                      while ( v83 != v84 );
LABEL_101:
                      operator delete((void *)v77, 0x3A0u);
                    }
                    else
                    {
                      v90 = *(unsigned int *)(v78 + 14976);
                      *(_DWORD *)(v78 + 14976) = v90 + 1;
                      *(_QWORD *)(v78 + 8 * v90 + 14848) = v77;
                    }
                  }
                }
                v76 += 4;
              }
              while ( v75 != v76 );
              v76 = (_QWORD *)v63[1];
            }
            if ( v76 )
              operator delete(v76);
          }
          v63 += 4;
        }
        while ( &v103[v110] != v63 );
        v8 = v108;
        v7 = v112;
        v2 = v113;
        operator delete(v103, v110 * 8, 8);
        v61 = *(_QWORD **)v108;
        v85 = *(_DWORD *)(v108 + 16);
        LODWORD(v4) = *(_DWORD *)(v108 + 8) + 1;
      }
      else
      {
        v94 = *(unsigned int *)(v8 + 16);
        *(_QWORD *)(v8 + 8) = 0;
        v85 = v94;
        v95 = &v61[4 * v94];
        if ( v61 != v95 )
        {
          v96 = v61;
          do
          {
            *v96 = -4096;
            v96 += 4;
          }
          while ( v95 != v96 );
        }
        LODWORD(v4) = 1;
      }
      if ( v85 )
      {
        v86 = v85 - 1;
        v87 = (v85 - 1) & v104;
        v12 = &v61[4 * v87];
        v28 = *v12;
        if ( v7 == *v12 )
          goto LABEL_20;
        if ( v28 != -4096 )
        {
          v88 = &v61[4 * (v86 & v104)];
          v89 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( !v12 && v28 == -8192 )
              v12 = v88;
            v87 = v86 & (v89 + v87);
            v88 = &v61[4 * v87];
            v28 = *v88;
            if ( v7 == *v88 )
              break;
            if ( v28 == -4096 )
              goto LABEL_155;
            ++v89;
          }
LABEL_116:
          v12 = v88;
LABEL_20:
          *(_DWORD *)(v8 + 8) = v4;
          if ( v28 != -4096 )
            --*(_DWORD *)(v8 + 12);
          goto LABEL_22;
        }
        goto LABEL_69;
      }
LABEL_162:
      ++*(_DWORD *)(v8 + 8);
      BUG();
    }
  }
  v29 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
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
  v30 = ((v29 >> 16) | v29) + 1;
  if ( (unsigned int)v30 < 0x40 )
    LODWORD(v30) = 64;
  *(_DWORD *)(v8 + 16) = v30;
  v31 = (__int64 *)sub_22300B0(32LL * (unsigned int)v30, 8, 64, v4, v5, v6);
  *(_QWORD *)v8 = v31;
  if ( v103 )
  {
    *(_QWORD *)(v8 + 8) = 0;
    v107 = 4LL * v9;
    v105 = &v103[v107];
    for ( j = &v31[4 * *(unsigned int *)(v8 + 16)]; j != v31; v31 += 4 )
      *v31 = -4096;
    if ( v103 != v105 )
    {
      v106 = v8;
      v33 = v103;
      v109 = v7;
      v111 = v2;
      do
      {
        v34 = *v33;
        if ( *v33 != -8192 && v34 != -4096 )
        {
          v35 = *(_DWORD *)(v106 + 16);
          if ( !v35 )
          {
            *(_QWORD *)&dword_0 = *v33;
            BUG();
          }
          v36 = v35 - 1;
          v37 = (v35 - 1) & (((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4));
          v38 = (_QWORD *)(*(_QWORD *)v106 + 32LL * v37);
          v39 = *v38;
          if ( v34 != *v38 )
          {
            v97 = 1;
            v98 = nullptr;
            if ( v39 != -4096 )
            {
              while ( 1 )
              {
                if ( v39 == -8192 && !v98 )
                  v98 = v38;
                v37 = v36 & (v97 + v37);
                v38 = (_QWORD *)(*(_QWORD *)v106 + 32LL * v37);
                v39 = *v38;
                if ( v34 == *v38 )
                  break;
                if ( v39 == -4096 )
                {
                  if ( v98 )
                    v38 = v98;
                  break;
                }
                ++v97;
              }
            }
          }
          v40 = *v33;
          v38[1] = 0;
          v38[2] = 0;
          v38[3] = 0;
          *v38 = v40;
          v38[1] = v33[1];
          v41 = v33[2];
          v33[1] = 0;
          v42 = v38[2];
          v38[2] = v41;
          v43 = v33[3];
          v33[2] = v42;
          v44 = v38[3];
          v38[3] = v43;
          v45 = (_QWORD *)v33[2];
          v46 = (_QWORD *)v33[1];
          v33[3] = v44;
          ++*(_DWORD *)(v106 + 8);
          if ( v45 != v46 )
          {
            do
            {
              v47 = v46[1];
              if ( v47 )
              {
                v48 = v46[2];
                if ( v48 )
                {
                  if ( v47 < v48 || v47 > v48 + 14848 )
                  {
                    v49 = *(_QWORD **)(v47 + 528);
                    v50 = &v49[8 * (unsigned __int64)*(unsigned int *)(v47 + 536)];
                    if ( v49 != v50 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v50 -= 8;
                          v51 = (_QWORD *)v50[3];
                          if ( v51 == v50 + 5 )
                            break;
                          operator delete(v51);
                          if ( v49 == v50 )
                            goto LABEL_50;
                        }
                      }
                      while ( v49 != v50 );
LABEL_50:
                      v50 = *(_QWORD **)(v47 + 528);
                    }
                    if ( v50 != (_QWORD *)(v47 + 544) )
                      free(v50);
                    v52 = *(void **)(v47 + 416);
                    if ( v52 != (void *)(v47 + 432) )
                      free(v52);
                    v53 = (void **)(v47 + 384);
                    v54 = (void **)(v47 + 64);
                    do
                    {
                      while ( *v53 != v53 + 2 )
                      {
                        operator delete(*v53);
                        v53 -= 4;
                        if ( v53 == v54 )
                          goto LABEL_58;
                      }
                      v53 -= 4;
                    }
                    while ( v53 != v54 );
LABEL_58:
                    operator delete((void *)v47, 0x3A0u);
                  }
                  else
                  {
                    v58 = *(unsigned int *)(v48 + 14976);
                    *(_DWORD *)(v48 + 14976) = v58 + 1;
                    *(_QWORD *)(v48 + 8 * v58 + 14848) = v47;
                  }
                }
              }
              v46 += 4;
            }
            while ( v45 != v46 );
            v46 = (_QWORD *)v33[1];
          }
          if ( v46 )
            operator delete(v46);
        }
        v33 += 4;
      }
      while ( v105 != v33 );
      v8 = v106;
      v7 = v109;
      v2 = v111;
    }
    operator delete(v103, v107 * 8, 8);
    v31 = *(__int64 **)v8;
    v55 = *(_DWORD *)(v8 + 16);
    LODWORD(v4) = *(_DWORD *)(v8 + 8) + 1;
  }
  else
  {
    v91 = *(unsigned int *)(v8 + 16);
    *(_QWORD *)(v8 + 8) = 0;
    v55 = v91;
    v92 = &v31[4 * v91];
    if ( v31 != v92 )
    {
      v93 = v31;
      do
      {
        *v93 = -4096;
        v93 += 4;
      }
      while ( v92 != v93 );
    }
    LODWORD(v4) = 1;
  }
  if ( !v55 )
    goto LABEL_162;
  v56 = v55 - 1;
  v57 = (v55 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v12 = &v31[4 * v57];
  v28 = *v12;
  if ( v7 == *v12 )
    goto LABEL_20;
  if ( v28 != -4096 )
  {
    v88 = &v31[4 * (v56 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)))];
    v101 = 1;
    v12 = nullptr;
    while ( 1 )
    {
      if ( v28 == -8192 && !v12 )
        v12 = v88;
      v57 = v56 & (v101 + v57);
      v88 = &v31[4 * v57];
      v28 = *v88;
      if ( v7 == *v88 )
        goto LABEL_116;
      if ( v28 == -4096 )
      {
LABEL_155:
        if ( v12 )
          goto LABEL_19;
        v12 = v88;
        break;
      }
      ++v101;
    }
  }
LABEL_69:
  *(_DWORD *)(v8 + 8) = v4;
LABEL_22:
  *v12 = v7;
  v14 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
LABEL_6:
  v15 = v14 + 32LL * *((unsigned int *)v2 + 32);
  v16 = *(unsigned __int8 **)(v15 + 8);
  v17 = *a2;
  if ( !v16 )
  {
    v20 = *(_QWORD *)(v15 + 16);
    v21 = *(_DWORD *)(v20 + 14976);
    if ( v21 )
    {
      v22 = (unsigned int)(v21 - 1);
      *(_DWORD *)(v20 + 14976) = v22;
      v16 = *(unsigned __int8 **)(v20 + 8 * v22 + 14848);
      v23 = *((unsigned int *)v16 + 134);
      *v16 = 0;
      v24 = *((_QWORD *)v16 + 66);
      *((_DWORD *)v16 + 106) = 0;
      v25 = v24 + (v23 << 6);
      while ( v24 != v25 )
      {
        while ( 1 )
        {
          v25 -= 64;
          v26 = *(void **)(v25 + 24);
          if ( v26 == (void *)(v25 + 40) )
            break;
          operator delete(v26);
          if ( v24 == v25 )
            goto LABEL_15;
        }
      }
LABEL_15:
      *((_DWORD *)v16 + 134) = 0;
    }
    else
    {
      v16 = (unsigned __int8 *)operator new(0x3A0u);
      *v16 = 0;
      *((_QWORD *)v16 + 12) = v16 + 112;
      *((_QWORD *)v16 + 16) = v16 + 144;
      *((_QWORD *)v16 + 20) = v16 + 176;
      *((_QWORD *)v16 + 24) = v16 + 208;
      *((_QWORD *)v16 + 28) = v16 + 240;
      *((_QWORD *)v16 + 32) = v16 + 272;
      *((_QWORD *)v16 + 36) = v16 + 304;
      *((_QWORD *)v16 + 40) = v16 + 336;
      *((_QWORD *)v16 + 44) = v16 + 368;
      *((_QWORD *)v16 + 48) = v16 + 400;
      *((_QWORD *)v16 + 52) = v16 + 432;
      *((_QWORD *)v16 + 13) = 0;
      v16[112] = 0;
      *((_QWORD *)v16 + 17) = 0;
      v16[144] = 0;
      *((_QWORD *)v16 + 21) = 0;
      v16[176] = 0;
      *((_QWORD *)v16 + 25) = 0;
      v16[208] = 0;
      *((_QWORD *)v16 + 29) = 0;
      v16[240] = 0;
      *((_QWORD *)v16 + 33) = 0;
      v16[272] = 0;
      *((_QWORD *)v16 + 37) = 0;
      v16[304] = 0;
      *((_QWORD *)v16 + 41) = 0;
      v16[336] = 0;
      *((_QWORD *)v16 + 45) = 0;
      v16[368] = 0;
      *((_QWORD *)v16 + 49) = 0;
      v16[400] = 0;
      *((_QWORD *)v16 + 53) = 0x800000000LL;
      *((_QWORD *)v16 + 66) = v16 + 544;
      *((_QWORD *)v16 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v15 + 8) = v16;
  }
  v16[*v16 + 1] = 2;
  v18 = *(_BYTE **)(v15 + 8);
  result = (unsigned __int8)*v18;
  *v18 = result + 1;
  *(_QWORD *)&v18[8 * result + 16] = v17;
  return result;
}
