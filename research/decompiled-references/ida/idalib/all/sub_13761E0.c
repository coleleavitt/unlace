void __fastcall sub_13761E0(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ebp
  __int64 v9; // r13
  unsigned int v10; // ebp
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r13
  __int64 *v18; // r14
  __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // r11
  _QWORD *k; // rdx
  __int64 v25; // r13
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  int v28; // edx
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  unsigned __int64 v31; // rsi
  int v32; // ecx
  int v33; // edx
  int v34; // r11d
  __int64 v35; // rdi
  unsigned int v36; // ecx
  __int64 v37; // r8
  unsigned __int64 v38; // rsi
  __int64 v39; // r9
  __int64 v40; // r9
  int v41; // eax
  int v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  int v46; // ecx
  unsigned __int64 v47; // rdi
  int v48; // r10d
  unsigned int v49; // ecx
  __int64 v50; // r15
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned __int64 *v56; // rbx
  unsigned __int64 v57; // rbp
  __int64 v58; // rax
  _QWORD *v59; // r14
  unsigned __int64 v60; // rcx
  unsigned __int64 v61; // rax
  char v62; // dl
  bool v63; // zf
  unsigned __int64 v64; // rdx
  __int64 *v65; // rdi
  __int64 v66; // rcx
  _DWORD *v67; // rax
  _DWORD *v68; // rdx
  unsigned __int64 v69; // rax
  void *v70; // r9
  unsigned int v71; // r10d
  void *v72; // rdi
  unsigned __int64 v73; // rax
  __int64 v74; // rax
  _QWORD *v75; // rax
  __int64 v76; // r11
  _QWORD *j; // rdx
  __int64 v78; // r13
  __int64 v79; // r15
  unsigned __int64 v80; // rax
  int v81; // ecx
  unsigned __int64 v82; // rdx
  __int64 v83; // rdx
  unsigned __int64 v84; // rsi
  int v85; // edx
  int v86; // ecx
  __int64 v87; // r9
  int v88; // r11d
  __int64 v89; // rdi
  unsigned int v90; // edx
  __int64 v91; // r8
  unsigned __int64 v92; // rsi
  unsigned __int64 v93; // r14
  __int64 v94; // r10
  unsigned __int64 v95; // r14
  __int64 v96; // r10
  unsigned __int64 v97; // rax
  void *v98; // r9
  unsigned int v99; // r10d
  void *v100; // rdi
  __int64 v101; // rdx
  _QWORD *m; // rdx
  __int64 v103; // rdx
  _QWORD *i; // rdx
  void *v105; // rax
  void *v106; // rax
  unsigned __int64 v107; // rsi
  unsigned __int64 v108; // rdi
  unsigned __int64 v109; // rsi
  unsigned __int64 v110; // rdx
  size_t v111; // rdx
  size_t v112; // rdx
  __int64 v113; // [rsp+0h] [rbp-68h]
  unsigned __int64 v114; // [rsp+8h] [rbp-60h]
  unsigned __int64 v115; // [rsp+8h] [rbp-60h]
  __int64 *v116; // [rsp+8h] [rbp-60h]
  __int64 v117; // [rsp+8h] [rbp-60h]
  __int64 v118; // [rsp+8h] [rbp-60h]
  unsigned int v119; // [rsp+8h] [rbp-60h]
  __int64 v120; // [rsp+8h] [rbp-60h]
  unsigned int v121; // [rsp+10h] [rbp-58h]
  unsigned int v122; // [rsp+10h] [rbp-58h]
  unsigned int v123; // [rsp+10h] [rbp-58h]
  void *v124; // [rsp+18h] [rbp-50h]
  void *v125; // [rsp+18h] [rbp-50h]
  __int64 v126; // [rsp+18h] [rbp-50h]
  unsigned __int64 v127; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v128[8]; // [rsp+28h] [rbp-40h] BYREF

  if ( !a5 )
    return;
  v7 = a2;
  v9 = *(_QWORD *)(a1 + 8);
  if ( a2 < 0 )
  {
    v42 = sub_10212A0(*(_QWORD *)(a1 + 8), a2);
    v9 = *(_QWORD *)(a1 + 8);
    v7 = v42;
  }
  if ( v7 )
  {
    v41 = sub_1021680(v9, v7);
    if ( v41 != 3 && v41 )
      return;
    v9 = *(_QWORD *)(a1 + 8);
    v10 = v7 & 0x7FFFFFFF;
    if ( v10 < *(_DWORD *)(v9 + 476) )
      goto LABEL_49;
  }
  else
  {
    v10 = 0;
    if ( *(_DWORD *)(v9 + 476) )
      goto LABEL_49;
  }
  if ( v10 < *(_DWORD *)(v9 + 480) )
  {
    v11 = *(_DWORD *)(v9 + 472);
    goto LABEL_8;
  }
LABEL_49:
  v11 = sub_101D590(v9, v10);
LABEL_8:
  LOBYTE(v128[0]) = 0;
  if ( (unsigned int)(v11 + 1) <= 1 )
    return;
  if ( v11 < 0 )
  {
    v57 = (unsigned int)(-2 - v11);
    v58 = *(_QWORD *)(*(_QWORD *)(v9 + 320) + 8LL * ((unsigned int)(-2 - v11) >> 6));
    if ( _bittest64(&v58, v57) )
    {
      v59 = (_QWORD *)(*(_QWORD *)(v9 + 272) + 8 * ((unsigned __int64)(int)v57 >> 5));
      if ( *v59 )
      {
        v12 = *v59 + 24 * (v57 & 0x1F);
        goto LABEL_11;
      }
      v65 = (__int64 *)(*(_QWORD *)(v9 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v66 = *v65;
      v65[10] += 768;
      v67 = (_DWORD *)((v66 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v65[1] >= (unsigned __int64)(v67 + 192) && v66 )
        *v65 = (__int64)(v67 + 192);
      else
        v67 = (_DWORD *)sub_986170((__int64)v65, 768, 768, 3, a5, a6);
      *v59 = v67;
      v68 = v67 + 192;
      do
      {
        *v67 = 0;
        v67 += 6;
        *((_OWORD *)v67 - 1) = 0;
        *((_QWORD *)v67 - 1) = 0;
      }
      while ( v67 != v68 );
      v62 = (char)v128[0];
      v12 = *v59 + 24 * (v57 & 0x1F);
    }
    else
    {
      v12 = sub_101F930(v9, v57, v128);
      v62 = (char)v128[0];
    }
    if ( v62 )
      return;
    goto LABEL_11;
  }
  v12 = *(_QWORD *)(v9 + 184) + 24LL * (unsigned int)v11;
LABEL_11:
  if ( v12 )
  {
    if ( *(char *)(v12 + 3) >= 0 )
    {
      v127 = *(_QWORD *)((*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( v127 )
      {
        v14 = sub_13FC270(*(_QWORD *)(a1 + 16) + 632LL, a5);
        if ( v14 )
        {
          v17 = *(unsigned int *)(a1 + 56);
          v18 = (__int64 *)(a1 + 40);
          v19 = *(_QWORD *)(a1 + 40);
          if ( !(_DWORD)v17 )
          {
            v128[0] = nullptr;
            goto LABEL_17;
          }
          v43 = v127;
          while ( 1 )
          {
            v44 = *(_QWORD *)(v43 + 8);
            if ( !v44 )
            {
LABEL_56:
              v46 = -1916529075;
              goto LABEL_57;
            }
            v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            if ( (v44 & 4) == 0 )
              break;
            v43 = v44 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v45 )
              goto LABEL_56;
          }
          v60 = HIDWORD(v45);
          v61 = 0x9DDFEA08EB382D69LL * (v60 ^ (((8 * v44) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
          v46 = -348639895
              * ((-348639895 * (v61 ^ v60 ^ (v61 >> 47)))
               ^ ((unsigned int)((0x9DDFEA08EB382D69LL * (v61 ^ v60 ^ (v61 >> 47))) >> 32) >> 15));
LABEL_57:
          v47 = (unsigned int)(v17 - 1);
          v48 = 1;
          v49 = v47 & v46;
          v50 = v19 + 72LL * v49;
          v51 = nullptr;
          v52 = *(_QWORD *)v50;
          if ( v127 == *(_QWORD *)v50 )
          {
LABEL_73:
            v55 = *(unsigned int *)(v50 + 16);
            v56 = (unsigned __int64 *)(v50 + 8);
            if ( *(unsigned int *)(v50 + 20) < (unsigned __int64)(v55 + 1) )
            {
              sub_2237220(v50 + 8, v50 + 24, v55 + 1, 8);
              v55 = *(unsigned int *)(v50 + 16);
            }
LABEL_75:
            *(_QWORD *)(*v56 + 8 * v55) = v14;
            ++*((_DWORD *)v56 + 2);
            return;
          }
          while ( 1 )
          {
            if ( v127 == -4096 || v127 == -8192 )
            {
              if ( v52 == -4096 )
              {
LABEL_83:
                if ( !v51 )
                  v51 = (unsigned __int64 *)v50;
                v13 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
                v128[0] = v51;
                if ( 4 * (int)v13 < (unsigned int)(3 * v17) )
                {
                  if ( (int)v17 - *(_DWORD *)(a1 + 52) - (int)v13 > (unsigned int)v17 >> 3 )
                    goto LABEL_87;
                  v73 = (v47 >> 1) | v47 | (((v47 >> 1) | v47) >> 2);
                  v74 = ((((((v73 >> 4) | v73) >> 8) | (v73 >> 4) | v73) >> 16)
                       | (((v73 >> 4) | v73) >> 8)
                       | (v73 >> 4)
                       | v73)
                      + 1;
                  if ( (unsigned int)v74 < 0x40 )
                    LODWORD(v74) = 64;
                  *(_DWORD *)(a1 + 56) = v74;
                  v75 = (_QWORD *)sub_22300B0(72LL * (unsigned int)v74, 8, 64, v13, v15, v16);
                  *(_QWORD *)(a1 + 40) = v75;
                  if ( !v19 )
                  {
                    v103 = *(unsigned int *)(a1 + 56);
                    *(_QWORD *)(a1 + 48) = 0;
                    for ( i = &v75[9 * v103]; i != v75; v75 += 9 )
                      *v75 = -4096;
LABEL_104:
                    sub_13747F0(v18, &v127, v128);
                    LODWORD(v13) = *(_DWORD *)(a1 + 48) + 1;
                    v51 = v128[0];
LABEL_87:
                    v63 = *v51 == -4096;
                    *(_DWORD *)(a1 + 48) = v13;
                    if ( !v63 )
                      --*(_DWORD *)(a1 + 52);
                    v64 = v127;
                    v56 = v51 + 1;
                    v51[2] = 0x600000000LL;
                    *v51 = v64;
                    v51[1] = (unsigned __int64)(v51 + 3);
                    v55 = 0;
                    goto LABEL_75;
                  }
                  *(_QWORD *)(a1 + 48) = 0;
                  v113 = 72 * v17;
                  v76 = v19 + 72 * v17;
                  for ( j = &v75[9 * *(unsigned int *)(a1 + 56)]; j != v75; v75 += 9 )
                    *v75 = -4096;
                  v78 = v19;
                  v79 = v76;
                  while ( 2 )
                  {
                    v80 = *(_QWORD *)v78;
                    if ( *(_QWORD *)v78 != -4096 && v80 != -8192 )
                    {
                      v81 = *(_DWORD *)(a1 + 56);
                      if ( !v81 )
                      {
                        *(_QWORD *)&dword_0 = *(_QWORD *)v78;
                        BUG();
                      }
                      v82 = *(_QWORD *)v78;
                      while ( 1 )
                      {
                        v83 = *(_QWORD *)(v82 + 8);
                        if ( !v83 )
                        {
LABEL_120:
                          v85 = -1916529075;
                          goto LABEL_121;
                        }
                        v84 = v83 & 0xFFFFFFFFFFFFFFF8LL;
                        if ( (v83 & 4) == 0 )
                          break;
                        v82 = v83 & 0xFFFFFFFFFFFFFFF8LL;
                        if ( !v84 )
                          goto LABEL_120;
                      }
                      v109 = HIDWORD(v84);
                      v110 = 0x9DDFEA08EB382D69LL * (v109 ^ (((8 * v83) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
                      v85 = -348639895
                          * (((unsigned int)((0x9DDFEA08EB382D69LL * (v110 ^ v109 ^ (v110 >> 47))) >> 32) >> 15)
                           ^ (-348639895 * (v110 ^ v109 ^ (v110 >> 47))));
LABEL_121:
                      v86 = v81 - 1;
                      v87 = *(_QWORD *)(a1 + 40);
                      v88 = 1;
                      v89 = 0;
                      v90 = v86 & v85;
                      v91 = v87 + 72LL * v90;
                      v92 = *(_QWORD *)v91;
                      if ( *(_QWORD *)v91 != v80 )
                      {
                        v116 = v18;
                        while ( v92 != -4096 )
                        {
                          if ( v92 == -8192 )
                          {
                            if ( !v89 )
                              v89 = v91;
                          }
                          else
                          {
                            v93 = *(_QWORD *)v78;
                            do
                            {
                              v94 = *(_QWORD *)(v93 + 8);
                              if ( !v94 )
                                break;
                              v93 = v94 & 0xFFFFFFFFFFFFFFF8LL;
                              if ( (v94 & 4) == 0 )
                                break;
                            }
                            while ( v93 );
                            v95 = v94 & 0xFFFFFFFFFFFFFFF8LL;
                            do
                            {
                              v96 = *(_QWORD *)(v92 + 8);
                              if ( !v96 )
                                break;
                              v92 = v96 & 0xFFFFFFFFFFFFFFF8LL;
                              if ( (v96 & 4) == 0 )
                                break;
                            }
                            while ( v92 );
                            if ( v95 == (v96 & 0xFFFFFFFFFFFFFFF8LL) )
                            {
LABEL_134:
                              v18 = v116;
                              goto LABEL_135;
                            }
                          }
                          v90 = v86 & (v88 + v90);
                          v91 = v87 + 72LL * v90;
                          v92 = *(_QWORD *)v91;
                          if ( v80 == *(_QWORD *)v91 )
                            goto LABEL_134;
                          ++v88;
                        }
                        v18 = v116;
                        if ( v89 )
                          v91 = v89;
                      }
LABEL_135:
                      v97 = *(_QWORD *)v78;
                      v98 = (void *)(v78 + 24);
                      *(_QWORD *)(v91 + 8) = v91 + 24;
                      *(_QWORD *)v91 = v97;
                      *(_QWORD *)(v91 + 16) = 0x600000000LL;
                      v99 = *(_DWORD *)(v78 + 16);
                      if ( !v99 )
                      {
                        v100 = *(void **)(v78 + 8);
                        goto LABEL_137;
                      }
                      v106 = *(void **)(v78 + 8);
                      v100 = v106;
                      if ( v91 + 8 == v78 + 8 )
                        goto LABEL_137;
                      if ( v106 == v98 )
                      {
                        if ( v99 > 6uLL )
                        {
                          v123 = *(_DWORD *)(v78 + 16);
                          v120 = v91;
                          sub_2237220(v91 + 8, v91 + 24, v99, 8);
                          v106 = *(void **)(v78 + 8);
                          v98 = (void *)(v78 + 24);
                          v99 = v123;
                          v91 = v120;
                        }
                        v112 = 8LL * *(unsigned int *)(v78 + 16);
                        if ( v112 )
                        {
                          v125 = v98;
                          v122 = v99;
                          v118 = v91;
                          memcpy(*(void **)(v91 + 8), v106, v112);
                          v106 = *(void **)(v78 + 8);
                          v98 = v125;
                          v99 = v122;
                          v91 = v118;
                        }
                        *(_DWORD *)(v91 + 16) = v99;
                        v100 = v106;
                        *(_DWORD *)(v78 + 16) = 0;
LABEL_137:
                        ++*(_DWORD *)(a1 + 48);
                        if ( v100 != v98 )
                          free(v100);
                      }
                      else
                      {
                        *(_QWORD *)(v91 + 8) = v106;
                        *(_DWORD *)(v91 + 16) = v99;
                        *(_DWORD *)(v91 + 20) = *(_DWORD *)(v78 + 20);
                        *(_QWORD *)(v78 + 8) = v98;
                        *(_DWORD *)(v78 + 20) = 0;
                        *(_DWORD *)(v78 + 16) = 0;
                        ++*(_DWORD *)(a1 + 48);
                      }
                    }
                    v78 += 72;
                    if ( v79 == v78 )
                      goto LABEL_103;
                    continue;
                  }
                }
LABEL_17:
                v20 = (((((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                        | (unsigned int)(2 * v17 - 1)
                        | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
                      | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v17 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 8)
                    | (((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                      | (unsigned int)(2 * v17 - 1)
                      | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
                    | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v17 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1);
                v21 = ((v20 >> 16) | v20) + 1;
                if ( (unsigned int)v21 < 0x40 )
                  LODWORD(v21) = 64;
                *(_DWORD *)(a1 + 56) = v21;
                v22 = (_QWORD *)sub_22300B0(72LL * (unsigned int)v21, 8, 64, v13, v15, v16);
                *(_QWORD *)(a1 + 40) = v22;
                if ( v19 )
                {
                  *(_QWORD *)(a1 + 48) = 0;
                  v113 = 72 * v17;
                  v23 = v19 + 72 * v17;
                  for ( k = &v22[9 * *(unsigned int *)(a1 + 56)]; k != v22; v22 += 9 )
                    *v22 = -4096;
                  if ( v19 != v23 )
                  {
                    v25 = v19;
                    v26 = v23;
                    do
                    {
                      v27 = *(_QWORD *)v25;
                      if ( *(_QWORD *)v25 != -4096 && v27 != -8192 )
                      {
                        v28 = *(_DWORD *)(a1 + 56);
                        if ( !v28 )
                        {
                          *(_QWORD *)&dword_0 = *(_QWORD *)v25;
                          BUG();
                        }
                        v29 = *(_QWORD *)v25;
                        while ( 1 )
                        {
                          v30 = *(_QWORD *)(v29 + 8);
                          if ( !v30 )
                          {
LABEL_31:
                            v32 = -1916529075;
                            goto LABEL_32;
                          }
                          v31 = v30 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( (v30 & 4) == 0 )
                            break;
                          v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
                          if ( !v31 )
                            goto LABEL_31;
                        }
                        v107 = HIDWORD(v31);
                        v108 = 0x9DDFEA08EB382D69LL * (v107 ^ (((8 * v30) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
                        v32 = -348639895
                            * ((-348639895 * ((v108 >> 47) ^ v107 ^ v108))
                             ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v108 >> 47) ^ v107 ^ v108)) >> 32) >> 15));
LABEL_32:
                        v33 = v28 - 1;
                        v34 = 1;
                        v35 = 0;
                        v36 = v33 & v32;
                        v37 = *(_QWORD *)(a1 + 40) + 72LL * v36;
                        v38 = *(_QWORD *)v37;
                        if ( v27 != *(_QWORD *)v37 )
                        {
                          while ( v38 != -4096 )
                          {
                            if ( v38 == -8192 )
                            {
                              if ( !v35 )
                                v35 = v37;
                            }
                            else
                            {
                              v114 = *(_QWORD *)v25;
                              do
                              {
                                v39 = *(_QWORD *)(v114 + 8);
                                if ( !v39 )
                                  break;
                                v114 = v39 & 0xFFFFFFFFFFFFFFF8LL;
                                if ( (v39 & 4) == 0 )
                                  break;
                              }
                              while ( (v39 & 0xFFFFFFFFFFFFFFF8LL) != 0 );
                              v115 = v39 & 0xFFFFFFFFFFFFFFF8LL;
                              do
                              {
                                v40 = *(_QWORD *)(v38 + 8);
                                if ( !v40 )
                                  break;
                                v38 = v40 & 0xFFFFFFFFFFFFFFF8LL;
                                if ( (v40 & 4) == 0 )
                                  break;
                              }
                              while ( v38 );
                              if ( v115 == (v40 & 0xFFFFFFFFFFFFFFF8LL) )
                                goto LABEL_98;
                            }
                            v36 = v33 & (v34 + v36);
                            v37 = *(_QWORD *)(a1 + 40) + 72LL * v36;
                            v38 = *(_QWORD *)v37;
                            if ( v27 == *(_QWORD *)v37 )
                              goto LABEL_98;
                            ++v34;
                          }
                          if ( v35 )
                            v37 = v35;
                        }
LABEL_98:
                        v69 = *(_QWORD *)v25;
                        v70 = (void *)(v25 + 24);
                        *(_QWORD *)(v37 + 8) = v37 + 24;
                        *(_QWORD *)v37 = v69;
                        *(_QWORD *)(v37 + 16) = 0x600000000LL;
                        v71 = *(_DWORD *)(v25 + 16);
                        if ( !v71 )
                        {
                          v72 = *(void **)(v25 + 8);
LABEL_100:
                          ++*(_DWORD *)(a1 + 48);
                          if ( v72 != v70 )
                            free(v72);
                          goto LABEL_102;
                        }
                        v105 = *(void **)(v25 + 8);
                        v72 = v105;
                        if ( v37 + 8 == v25 + 8 )
                          goto LABEL_100;
                        if ( v70 == v105 )
                        {
                          if ( v71 > 6uLL )
                          {
                            v126 = v37;
                            v119 = *(_DWORD *)(v25 + 16);
                            sub_2237220(v37 + 8, v37 + 24, v71, 8);
                            v105 = *(void **)(v25 + 8);
                            v37 = v126;
                            v70 = (void *)(v25 + 24);
                            v71 = v119;
                          }
                          v111 = 8LL * *(unsigned int *)(v25 + 16);
                          if ( v111 )
                          {
                            v124 = v70;
                            v121 = v71;
                            v117 = v37;
                            memcpy(*(void **)(v37 + 8), v105, v111);
                            v105 = *(void **)(v25 + 8);
                            v70 = v124;
                            v71 = v121;
                            v37 = v117;
                          }
                          *(_DWORD *)(v37 + 16) = v71;
                          v72 = v105;
                          *(_DWORD *)(v25 + 16) = 0;
                          goto LABEL_100;
                        }
                        *(_QWORD *)(v37 + 8) = v105;
                        *(_DWORD *)(v37 + 16) = v71;
                        *(_DWORD *)(v37 + 20) = *(_DWORD *)(v25 + 20);
                        *(_QWORD *)(v25 + 8) = v70;
                        *(_DWORD *)(v25 + 20) = 0;
                        *(_DWORD *)(v25 + 16) = 0;
                        ++*(_DWORD *)(a1 + 48);
                      }
LABEL_102:
                      v25 += 72;
                    }
                    while ( v26 != v25 );
                  }
LABEL_103:
                  operator delete(v19, v113, 8);
                }
                else
                {
                  v101 = *(unsigned int *)(a1 + 56);
                  *(_QWORD *)(a1 + 48) = 0;
                  for ( m = &v22[9 * v101]; m != v22; v22 += 9 )
                    *v22 = -4096;
                }
                goto LABEL_104;
              }
              if ( v52 == -8192 )
              {
LABEL_143:
                if ( !v51 )
                  v51 = (unsigned __int64 *)v50;
              }
            }
            else
            {
              if ( v52 == -4096 )
                goto LABEL_83;
              if ( v52 == -8192 )
                goto LABEL_143;
              v53 = v127;
              do
              {
                v54 = *(_QWORD *)(v53 + 8);
                if ( !v54 )
                {
                  v53 = 0;
                  break;
                }
                v53 = v54 & 0xFFFFFFFFFFFFFFF8LL;
              }
              while ( (v54 & 4) != 0 && v53 );
              while ( 1 )
              {
                v16 = *(_QWORD *)(v52 + 8);
                if ( !v16 )
                  break;
                v52 = v16 & 0xFFFFFFFFFFFFFFF8LL;
                v16 &= 4u;
                if ( !(_DWORD)v16 || !v52 )
                  goto LABEL_69;
              }
              v52 = 0;
LABEL_69:
              if ( v53 == v52 )
                goto LABEL_73;
            }
            v15 = (unsigned int)(v48 + 1);
            v49 = v47 & (v48 + v49);
            v50 = v19 + 72LL * v49;
            v52 = *(_QWORD *)v50;
            if ( v127 == *(_QWORD *)v50 )
              goto LABEL_73;
            ++v48;
          }
        }
      }
    }
  }
}
