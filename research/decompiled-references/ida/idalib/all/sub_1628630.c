__int64 __fastcall sub_1628630(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
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
  _BYTE *v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // r13
  __int64 v24; // r12
  void *v25; // rdi
  int v26; // edi
  __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rax
  __int64 *j; // rdx
  __int64 *v32; // r14
  __int64 v33; // rcx
  int v34; // eax
  int v35; // esi
  unsigned int v36; // edx
  _QWORD *v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdx
  _QWORD *v44; // r15
  _QWORD *v45; // rbx
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // rax
  _QWORD *v48; // r13
  _QWORD *v49; // rbp
  _QWORD *v50; // rdi
  void *v51; // rdi
  void **v52; // rbp
  void **v53; // r13
  int v54; // esi
  int v55; // r8d
  unsigned int v56; // edi
  __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  _QWORD *i; // rdx
  __int64 *v62; // r14
  __int64 v63; // rcx
  int v64; // eax
  int v65; // esi
  unsigned int v66; // edx
  _QWORD *v67; // rax
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // rdx
  _QWORD *v74; // r15
  _QWORD *v75; // rbx
  unsigned __int64 v76; // r12
  unsigned __int64 v77; // rax
  _QWORD *v78; // r13
  _QWORD *v79; // rbp
  _QWORD *v80; // rdi
  void *v81; // rdi
  void **v82; // rbp
  void **v83; // r13
  int v84; // esi
  int v85; // edi
  unsigned int v86; // r8d
  __int64 *v87; // r9
  int v88; // r10d
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 *v91; // rcx
  __int64 *v92; // rdx
  __int64 v93; // rcx
  _QWORD *v94; // rcx
  _QWORD *v95; // rdx
  int v96; // r10d
  _QWORD *v97; // r9
  int v98; // r10d
  _QWORD *v99; // r9
  int v100; // r10d
  __int64 *v102; // [rsp+8h] [rbp-70h]
  unsigned int v103; // [rsp+10h] [rbp-68h]
  __int64 *v104; // [rsp+10h] [rbp-68h]
  __int64 v105; // [rsp+18h] [rbp-60h]
  __int64 v106; // [rsp+20h] [rbp-58h]
  __int64 v107; // [rsp+20h] [rbp-58h]
  __int64 v108; // [rsp+28h] [rbp-50h]
  __int64 v109; // [rsp+28h] [rbp-50h]
  __int64 v110; // [rsp+30h] [rbp-48h]
  __int64 v111; // [rsp+30h] [rbp-48h]
  __int64 v112; // [rsp+38h] [rbp-40h]

  v2 = a1;
  v3 = sub_168B9E0(a1);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = v3;
  if ( v7 )
    v7 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 32LL))(*(_QWORD *)(a1 + 16));
  v9 = *(_DWORD *)(v8 + 16);
  v102 = *(__int64 **)v8;
  if ( v9 )
  {
    v10 = v9 - 1;
    v103 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
    v11 = v10 & v103;
    v12 = (__int64 *)(*(_QWORD *)v8 + 32LL * ((unsigned int)v10 & v103));
    v13 = *v12;
    if ( v7 == *v12 )
    {
LABEL_5:
      v14 = v12[1];
      goto LABEL_6;
    }
    v26 = 1;
    v5 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v5 && v13 == -8192 )
          v5 = v12;
        v6 = (unsigned int)(v26 + 1);
        v11 = v10 & (v26 + v11);
        v12 = &v102[4 * v11];
        v13 = *v12;
        if ( v7 == *v12 )
          goto LABEL_5;
        if ( v13 == -4096 )
          break;
        ++v26;
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
        v27 = *v12;
        goto LABEL_20;
      }
      v58 = (((((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 8)
          | (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4)
          | (v10 >> 1)
          | v10
          | (((v10 >> 1) | v10) >> 2);
      v59 = ((v58 >> 16) | v58) + 1;
      if ( (unsigned int)v59 < 0x40 )
        LODWORD(v59) = 64;
      *(_DWORD *)(v8 + 16) = v59;
      v60 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v59, 8, 64, v4, v5, v6);
      *(_QWORD *)v8 = v60;
      if ( v102 )
      {
        *(_QWORD *)(v8 + 8) = 0;
        v109 = 4LL * v9;
        for ( i = &v60[4 * *(unsigned int *)(v8 + 16)]; i != v60; v60 += 4 )
          *v60 = -4096;
        v107 = v8;
        v62 = v102;
        v111 = v7;
        v112 = v2;
        do
        {
          v63 = *v62;
          if ( *v62 != -8192 && v63 != -4096 )
          {
            v64 = *(_DWORD *)(v107 + 16);
            if ( !v64 )
            {
              *(_QWORD *)&dword_0 = *v62;
              BUG();
            }
            v65 = v64 - 1;
            v66 = (v64 - 1) & (((unsigned int)v63 >> 9) ^ ((unsigned int)v63 >> 4));
            v67 = (_QWORD *)(*(_QWORD *)v107 + 32LL * v66);
            v68 = *v67;
            if ( v63 != *v67 )
            {
              v98 = 1;
              v99 = nullptr;
              if ( v68 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v99 && v68 == -8192 )
                    v99 = v67;
                  v66 = v65 & (v98 + v66);
                  v67 = (_QWORD *)(*(_QWORD *)v107 + 32LL * v66);
                  v68 = *v67;
                  if ( v63 == *v67 )
                    break;
                  if ( v68 == -4096 )
                  {
                    if ( v99 )
                      v67 = v99;
                    break;
                  }
                  ++v98;
                }
              }
            }
            v69 = *v62;
            v67[1] = 0;
            v67[2] = 0;
            v67[3] = 0;
            *v67 = v69;
            v67[1] = v62[1];
            v70 = v62[2];
            v62[1] = 0;
            v71 = v67[2];
            v67[2] = v70;
            v72 = v62[3];
            v62[2] = v71;
            v73 = v67[3];
            v67[3] = v72;
            v74 = (_QWORD *)v62[2];
            v75 = (_QWORD *)v62[1];
            v62[3] = v73;
            ++*(_DWORD *)(v107 + 8);
            if ( v74 != v75 )
            {
              do
              {
                v76 = v75[1];
                if ( v76 )
                {
                  v77 = v75[2];
                  if ( v77 )
                  {
                    if ( v76 < v77 || v76 > v77 + 14848 )
                    {
                      v78 = *(_QWORD **)(v76 + 528);
                      v79 = &v78[8 * (unsigned __int64)*(unsigned int *)(v76 + 536)];
                      if ( v78 != v79 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v79 -= 8;
                            v80 = (_QWORD *)v79[3];
                            if ( v80 == v79 + 5 )
                              break;
                            operator delete(v80);
                            if ( v78 == v79 )
                              goto LABEL_93;
                          }
                        }
                        while ( v78 != v79 );
LABEL_93:
                        v79 = *(_QWORD **)(v76 + 528);
                      }
                      if ( v79 != (_QWORD *)(v76 + 544) )
                        free(v79);
                      v81 = *(void **)(v76 + 416);
                      v82 = (void **)(v76 + 416);
                      if ( v81 != (void *)(v76 + 432) )
                        free(v81);
                      v83 = (void **)(v76 + 96);
                      do
                      {
                        while ( 1 )
                        {
                          v82 -= 4;
                          if ( *v82 == v82 + 2 )
                            break;
                          operator delete(*v82);
                          if ( v82 == v83 )
                            goto LABEL_101;
                        }
                      }
                      while ( v82 != v83 );
LABEL_101:
                      operator delete((void *)v76, 0x3A0u);
                    }
                    else
                    {
                      v89 = *(unsigned int *)(v77 + 14976);
                      *(_DWORD *)(v77 + 14976) = v89 + 1;
                      *(_QWORD *)(v77 + 8 * v89 + 14848) = v76;
                    }
                  }
                }
                v75 += 4;
              }
              while ( v74 != v75 );
              v75 = (_QWORD *)v62[1];
            }
            if ( v75 )
              operator delete(v75);
          }
          v62 += 4;
        }
        while ( &v102[v109] != v62 );
        v8 = v107;
        v7 = v111;
        v2 = v112;
        operator delete(v102, v109 * 8, 8);
        v60 = *(_QWORD **)v107;
        v84 = *(_DWORD *)(v107 + 16);
        LODWORD(v4) = *(_DWORD *)(v107 + 8) + 1;
      }
      else
      {
        v93 = *(unsigned int *)(v8 + 16);
        *(_QWORD *)(v8 + 8) = 0;
        v84 = v93;
        v94 = &v60[4 * v93];
        if ( v60 != v94 )
        {
          v95 = v60;
          do
          {
            *v95 = -4096;
            v95 += 4;
          }
          while ( v94 != v95 );
        }
        LODWORD(v4) = 1;
      }
      if ( v84 )
      {
        v85 = v84 - 1;
        v86 = (v84 - 1) & v103;
        v12 = &v60[4 * v86];
        v27 = *v12;
        if ( v7 == *v12 )
          goto LABEL_20;
        if ( v27 != -4096 )
        {
          v87 = &v60[4 * (v85 & v103)];
          v88 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( !v12 && v27 == -8192 )
              v12 = v87;
            v86 = v85 & (v88 + v86);
            v87 = &v60[4 * v86];
            v27 = *v87;
            if ( v7 == *v87 )
              break;
            if ( v27 == -4096 )
              goto LABEL_155;
            ++v88;
          }
LABEL_116:
          v12 = v87;
LABEL_20:
          *(_DWORD *)(v8 + 8) = v4;
          if ( v27 != -4096 )
            --*(_DWORD *)(v8 + 12);
          goto LABEL_22;
        }
        goto LABEL_69;
      }
LABEL_164:
      JUMPOUT(0x2E913B);
    }
  }
  v28 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
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
  v29 = ((v28 >> 16) | v28) + 1;
  if ( (unsigned int)v29 < 0x40 )
    LODWORD(v29) = 64;
  *(_DWORD *)(v8 + 16) = v29;
  v30 = (__int64 *)sub_22300B0(32LL * (unsigned int)v29, 8, 64, v4, v5, v6);
  *(_QWORD *)v8 = v30;
  if ( v102 )
  {
    *(_QWORD *)(v8 + 8) = 0;
    v106 = 4LL * v9;
    v104 = &v102[v106];
    for ( j = &v30[4 * *(unsigned int *)(v8 + 16)]; j != v30; v30 += 4 )
      *v30 = -4096;
    if ( v102 != v104 )
    {
      v105 = v8;
      v32 = v102;
      v108 = v7;
      v110 = v2;
      do
      {
        v33 = *v32;
        if ( *v32 != -8192 && v33 != -4096 )
        {
          v34 = *(_DWORD *)(v105 + 16);
          if ( !v34 )
          {
            *(_QWORD *)&dword_0 = *v32;
            BUG();
          }
          v35 = v34 - 1;
          v36 = (v34 - 1) & (((unsigned int)v33 >> 9) ^ ((unsigned int)v33 >> 4));
          v37 = (_QWORD *)(*(_QWORD *)v105 + 32LL * v36);
          v38 = *v37;
          if ( v33 != *v37 )
          {
            v96 = 1;
            v97 = nullptr;
            if ( v38 != -4096 )
            {
              while ( 1 )
              {
                if ( v38 == -8192 && !v97 )
                  v97 = v37;
                v36 = v35 & (v96 + v36);
                v37 = (_QWORD *)(*(_QWORD *)v105 + 32LL * v36);
                v38 = *v37;
                if ( v33 == *v37 )
                  break;
                if ( v38 == -4096 )
                {
                  if ( v97 )
                    v37 = v97;
                  break;
                }
                ++v96;
              }
            }
          }
          v39 = *v32;
          v37[1] = 0;
          v37[2] = 0;
          v37[3] = 0;
          *v37 = v39;
          v37[1] = v32[1];
          v40 = v32[2];
          v32[1] = 0;
          v41 = v37[2];
          v37[2] = v40;
          v42 = v32[3];
          v32[2] = v41;
          v43 = v37[3];
          v37[3] = v42;
          v44 = (_QWORD *)v32[2];
          v45 = (_QWORD *)v32[1];
          v32[3] = v43;
          ++*(_DWORD *)(v105 + 8);
          if ( v44 != v45 )
          {
            do
            {
              v46 = v45[1];
              if ( v46 )
              {
                v47 = v45[2];
                if ( v47 )
                {
                  if ( v46 < v47 || v46 > v47 + 14848 )
                  {
                    v48 = *(_QWORD **)(v46 + 528);
                    v49 = &v48[8 * (unsigned __int64)*(unsigned int *)(v46 + 536)];
                    if ( v48 != v49 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v49 -= 8;
                          v50 = (_QWORD *)v49[3];
                          if ( v50 == v49 + 5 )
                            break;
                          operator delete(v50);
                          if ( v48 == v49 )
                            goto LABEL_50;
                        }
                      }
                      while ( v48 != v49 );
LABEL_50:
                      v49 = *(_QWORD **)(v46 + 528);
                    }
                    if ( v49 != (_QWORD *)(v46 + 544) )
                      free(v49);
                    v51 = *(void **)(v46 + 416);
                    if ( v51 != (void *)(v46 + 432) )
                      free(v51);
                    v52 = (void **)(v46 + 384);
                    v53 = (void **)(v46 + 64);
                    do
                    {
                      while ( *v52 != v52 + 2 )
                      {
                        operator delete(*v52);
                        v52 -= 4;
                        if ( v52 == v53 )
                          goto LABEL_58;
                      }
                      v52 -= 4;
                    }
                    while ( v52 != v53 );
LABEL_58:
                    operator delete((void *)v46, 0x3A0u);
                  }
                  else
                  {
                    v57 = *(unsigned int *)(v47 + 14976);
                    *(_DWORD *)(v47 + 14976) = v57 + 1;
                    *(_QWORD *)(v47 + 8 * v57 + 14848) = v46;
                  }
                }
              }
              v45 += 4;
            }
            while ( v44 != v45 );
            v45 = (_QWORD *)v32[1];
          }
          if ( v45 )
            operator delete(v45);
        }
        v32 += 4;
      }
      while ( v104 != v32 );
      v8 = v105;
      v7 = v108;
      v2 = v110;
    }
    operator delete(v102, v106 * 8, 8);
    v30 = *(__int64 **)v8;
    v54 = *(_DWORD *)(v8 + 16);
    LODWORD(v4) = *(_DWORD *)(v8 + 8) + 1;
  }
  else
  {
    v90 = *(unsigned int *)(v8 + 16);
    *(_QWORD *)(v8 + 8) = 0;
    v54 = v90;
    v91 = &v30[4 * v90];
    if ( v30 != v91 )
    {
      v92 = v30;
      do
      {
        *v92 = -4096;
        v92 += 4;
      }
      while ( v91 != v92 );
    }
    LODWORD(v4) = 1;
  }
  if ( !v54 )
    goto LABEL_164;
  v55 = v54 - 1;
  v56 = (v54 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v12 = &v30[4 * v56];
  v27 = *v12;
  if ( v7 == *v12 )
    goto LABEL_20;
  if ( v27 != -4096 )
  {
    v87 = &v30[4 * (v55 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)))];
    v100 = 1;
    v12 = nullptr;
    while ( 1 )
    {
      if ( v27 == -8192 && !v12 )
        v12 = v87;
      v56 = v55 & (v100 + v56);
      v87 = &v30[4 * v56];
      v27 = *v87;
      if ( v7 == *v87 )
        goto LABEL_116;
      if ( v27 == -4096 )
      {
LABEL_155:
        if ( v12 )
          goto LABEL_19;
        v12 = v87;
        break;
      }
      ++v100;
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
  v15 = v14 + 32LL * *(unsigned int *)(v2 + 128);
  v16 = *(unsigned __int8 **)(v15 + 8);
  if ( !v16 )
  {
    v19 = *(_QWORD *)(v15 + 16);
    v20 = *(_DWORD *)(v19 + 14976);
    if ( v20 )
    {
      v21 = (unsigned int)(v20 - 1);
      *(_DWORD *)(v19 + 14976) = v21;
      v16 = *(unsigned __int8 **)(v19 + 8 * v21 + 14848);
      v22 = *((unsigned int *)v16 + 134);
      *v16 = 0;
      v23 = *((_QWORD *)v16 + 66);
      *((_DWORD *)v16 + 106) = 0;
      v24 = v23 + (v22 << 6);
      while ( v23 != v24 )
      {
        while ( 1 )
        {
          v24 -= 64;
          v25 = *(void **)(v24 + 24);
          if ( v25 == (void *)(v24 + 40) )
            break;
          operator delete(v25);
          if ( v23 == v24 )
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
  v16[*v16 + 1] = 1;
  v17 = *(_BYTE **)(v15 + 8);
  result = (unsigned __int8)*v17;
  *v17 = result + 1;
  *(_QWORD *)&v17[8 * result + 16] = a2;
  return result;
}
