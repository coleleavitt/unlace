void __fastcall sub_13749D0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v10; // r13
  int v11; // r12d
  unsigned int v12; // r12d
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r13
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // r11
  __int64 v23; // r9
  _QWORD *i; // rdx
  __int64 v25; // r14
  __int64 v26; // r15
  unsigned __int64 v27; // rax
  int v28; // edx
  unsigned __int64 v29; // rsi
  __int64 v30; // rcx
  int v31; // ecx
  int v32; // edx
  __int64 v33; // r10
  unsigned int v34; // ecx
  __int64 v35; // r8
  unsigned __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 v38; // rdi
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  _QWORD *v41; // rbx
  int v42; // eax
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  int v46; // eax
  int v47; // eax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rsi
  unsigned int v51; // eax
  __int64 v52; // r15
  unsigned __int64 *v53; // rdx
  unsigned __int64 v54; // rdi
  __int64 v55; // r8
  unsigned __int64 v56; // r12
  __int64 v57; // rax
  _QWORD *v58; // r14
  char v59; // dl
  __int64 v60; // rdx
  int v61; // esi
  _QWORD *v62; // rcx
  _QWORD *v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // rdx
  unsigned __int64 v66; // rdi
  int v67; // edi
  int v68; // esi
  int v69; // r10d
  unsigned __int64 *v70; // r9
  unsigned int v71; // edi
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r11
  __int64 v74; // r13
  __int64 v75; // r13
  __int64 *v76; // rdi
  __int64 v77; // rcx
  _DWORD *v78; // rax
  _DWORD *v79; // rdx
  unsigned int v80; // r12d
  unsigned __int64 v81; // rax
  void *v82; // r9
  unsigned int v83; // r10d
  void *v84; // rax
  void *v85; // rdx
  unsigned __int64 v86; // rsi
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // r11
  __int64 v91; // r9
  _QWORD *j; // rdx
  __int64 v93; // r14
  __int64 v94; // r15
  unsigned __int64 v95; // rax
  int v96; // edx
  unsigned __int64 v97; // rcx
  __int64 v98; // rcx
  unsigned __int64 v99; // rsi
  int v100; // ecx
  int v101; // edx
  __int64 v102; // r10
  unsigned int v103; // ecx
  __int64 v104; // r8
  unsigned __int64 v105; // rsi
  __int64 v106; // rdi
  __int64 v107; // rdi
  unsigned __int64 v108; // rax
  void *v109; // r9
  unsigned int v110; // r10d
  void *v111; // rax
  void *v112; // rdx
  int v113; // esi
  unsigned __int64 v114; // rdx
  __int64 v115; // rdx
  unsigned __int64 v116; // rdi
  int v117; // edi
  int v118; // r9d
  unsigned int v119; // edi
  unsigned __int64 v120; // r8
  int v121; // r11d
  unsigned __int64 *v122; // r10
  unsigned __int64 v123; // r8
  __int64 v124; // r13
  __int64 v125; // r13
  __int64 v126; // rdx
  _QWORD *v127; // rcx
  _QWORD *v128; // rdx
  unsigned __int64 v129; // rdi
  unsigned __int64 v130; // r9
  unsigned __int64 v131; // rdi
  unsigned __int64 v132; // r8
  int v133; // eax
  int v134; // eax
  unsigned __int64 v135; // rsi
  unsigned __int64 v136; // rcx
  unsigned __int64 v137; // rsi
  unsigned __int64 v138; // rdi
  size_t v139; // rdx
  const void *v140; // rsi
  const void *v141; // rcx
  size_t v142; // rdx
  const void *v143; // rsi
  const void *v144; // rcx
  int v145; // [rsp+0h] [rbp-68h]
  __int64 v146; // [rsp+0h] [rbp-68h]
  int v147; // [rsp+0h] [rbp-68h]
  __int64 v148; // [rsp+0h] [rbp-68h]
  unsigned int v149; // [rsp+0h] [rbp-68h]
  __int64 v150; // [rsp+0h] [rbp-68h]
  unsigned int v151; // [rsp+0h] [rbp-68h]
  __int64 v152; // [rsp+0h] [rbp-68h]
  unsigned __int64 v153; // [rsp+8h] [rbp-60h]
  unsigned __int64 v154; // [rsp+8h] [rbp-60h]
  unsigned __int64 v155; // [rsp+8h] [rbp-60h]
  unsigned __int64 v156; // [rsp+8h] [rbp-60h]
  __int64 v157; // [rsp+8h] [rbp-60h]
  unsigned int v158; // [rsp+8h] [rbp-60h]
  __int64 v159; // [rsp+8h] [rbp-60h]
  unsigned int v160; // [rsp+8h] [rbp-60h]
  void *v161; // [rsp+10h] [rbp-58h]
  void *v162; // [rsp+10h] [rbp-58h]
  __int64 v163; // [rsp+18h] [rbp-50h]
  __int64 v164; // [rsp+18h] [rbp-50h]
  __int64 v165; // [rsp+18h] [rbp-50h]
  __int64 v166; // [rsp+18h] [rbp-50h]
  char v167[57]; // [rsp+2Fh] [rbp-39h] BYREF

  if ( !a9 )
    return;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = a2;
  if ( a2 < 0 )
  {
    v47 = sub_10212A0(*(_QWORD *)(a1 + 8), a2);
    v10 = *(_QWORD *)(a1 + 8);
    v11 = v47;
  }
  if ( v11 )
  {
    v42 = sub_1021680(v10, v11);
    if ( v42 && v42 != 3 )
      return;
    v10 = *(_QWORD *)(a1 + 8);
    v12 = v11 & 0x7FFFFFFF;
    if ( v12 < *(_DWORD *)(v10 + 476) )
      goto LABEL_53;
  }
  else
  {
    v12 = 0;
    if ( *(_DWORD *)(v10 + 476) )
      goto LABEL_53;
  }
  if ( v12 < *(_DWORD *)(v10 + 480) )
  {
    v13 = *(_DWORD *)(v10 + 472);
    goto LABEL_8;
  }
LABEL_53:
  v13 = sub_101D590(v10, v12);
LABEL_8:
  v167[0] = 0;
  if ( (unsigned int)(v13 + 1) <= 1 )
    return;
  if ( v13 < 0 )
  {
    v56 = (unsigned int)(-2 - v13);
    v57 = *(_QWORD *)(*(_QWORD *)(v10 + 320) + 8LL * ((unsigned int)(-2 - v13) >> 6));
    if ( _bittest64(&v57, v56) )
    {
      v58 = (_QWORD *)(*(_QWORD *)(v10 + 272) + 8 * ((unsigned __int64)(int)v56 >> 5));
      if ( *v58 )
      {
        v14 = *v58 + 24 * (v56 & 0x1F);
        goto LABEL_11;
      }
      v76 = (__int64 *)(*(_QWORD *)(v10 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v77 = *v76;
      v76[10] += 768;
      v78 = (_DWORD *)((v77 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v76[1] >= (unsigned __int64)(v78 + 192) && v77 )
        *v76 = (__int64)(v78 + 192);
      else
        v78 = (_DWORD *)sub_986170((__int64)v76, 768, 768, 3, a5, a6);
      *v58 = v78;
      v79 = v78 + 192;
      do
      {
        *v78 = 0;
        v78 += 6;
        *((_OWORD *)v78 - 1) = 0;
        *((_QWORD *)v78 - 1) = 0;
      }
      while ( v78 != v79 );
      v80 = v56 & 0x1F;
      v59 = v167[0];
      a4 = 3LL * v80;
      v14 = *v58 + 24LL * v80;
    }
    else
    {
      v14 = sub_101F930(v10, v56, v167);
      v59 = v167[0];
    }
    if ( v59 )
      return;
  }
  else
  {
    v14 = *(_QWORD *)(v10 + 184) + 24LL * (unsigned int)v13;
  }
LABEL_11:
  if ( !v14 )
    return;
  if ( *(char *)(v14 + 3) < 0 )
    return;
  v15 = *(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  v16 = *(_QWORD *)(v15 + 8);
  if ( !v16 )
    return;
  v17 = *(unsigned int *)(a1 + 56);
  v18 = *(_QWORD *)(a1 + 40);
  if ( !(_DWORD)v17 )
  {
LABEL_15:
    v19 = (((((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
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
    v20 = ((v19 >> 16) | v19) + 1;
    if ( (unsigned int)v20 < 0x40 )
      LODWORD(v20) = 64;
    *(_DWORD *)(a1 + 56) = v20;
    v21 = (_QWORD *)sub_22300B0(72LL * (unsigned int)v20, 8, 64, a4, a5, a6);
    *(_QWORD *)(a1 + 40) = v21;
    if ( v18 )
    {
      *(_QWORD *)(a1 + 48) = 0;
      v22 = 72 * v17;
      v23 = v18 + 72 * v17;
      for ( i = &v21[9 * *(unsigned int *)(a1 + 56)]; i != v21; v21 += 9 )
        *v21 = -4096;
      if ( v18 != v23 )
      {
        v25 = v18;
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
LABEL_29:
                v31 = -1916529075;
                goto LABEL_30;
              }
              v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v30 & 4) == 0 )
                break;
              if ( !v29 )
                goto LABEL_29;
            }
            v135 = HIDWORD(v29);
            v136 = 0x9DDFEA08EB382D69LL * (v135 ^ (((8 * v30) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
            v31 = -348639895
                * (((unsigned int)((0x9DDFEA08EB382D69LL * (v136 ^ v135 ^ (v136 >> 47))) >> 32) >> 15)
                 ^ (-348639895 * (v136 ^ v135 ^ (v136 >> 47))));
LABEL_30:
            v32 = v28 - 1;
            v145 = 1;
            v33 = 0;
            v34 = v32 & v31;
            v35 = *(_QWORD *)(a1 + 40) + 72LL * v34;
            v36 = *(_QWORD *)v35;
            if ( v27 != *(_QWORD *)v35 )
            {
              while ( v36 != -4096 )
              {
                if ( v36 == -8192 )
                {
                  if ( !v33 )
                    v33 = v35;
                }
                else
                {
                  v153 = *(_QWORD *)v25;
                  do
                  {
                    v37 = *(_QWORD *)(v153 + 8);
                    if ( !v37 )
                      break;
                    v153 = v37 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v37 & 4) == 0 )
                      break;
                  }
                  while ( (v37 & 0xFFFFFFFFFFFFFFF8LL) != 0 );
                  v154 = v37 & 0xFFFFFFFFFFFFFFF8LL;
                  do
                  {
                    v38 = *(_QWORD *)(v36 + 8);
                    if ( !v38 )
                      break;
                    v36 = v38 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v38 & 4) == 0 )
                      break;
                  }
                  while ( v36 );
                  if ( v154 == (v38 & 0xFFFFFFFFFFFFFFF8LL) )
                    goto LABEL_119;
                }
                v34 = v32 & (v145 + v34);
                v35 = *(_QWORD *)(a1 + 40) + 72LL * v34;
                v36 = *(_QWORD *)v35;
                if ( v27 == *(_QWORD *)v35 )
                  goto LABEL_119;
                ++v145;
              }
              if ( v33 )
                v35 = v33;
            }
LABEL_119:
            v81 = *(_QWORD *)v25;
            v82 = (void *)(v25 + 24);
            *(_QWORD *)(v35 + 16) = 0x600000000LL;
            v83 = *(_DWORD *)(v25 + 16);
            *(_QWORD *)v35 = v81;
            v84 = (void *)(v35 + 24);
            *(_QWORD *)(v35 + 8) = v35 + 24;
            if ( !v83 )
            {
              v85 = *(void **)(v25 + 8);
              goto LABEL_121;
            }
            v85 = *(void **)(v25 + 8);
            if ( v35 + 8 == v25 + 8 )
              goto LABEL_121;
            if ( v85 == v82 )
            {
              if ( v83 <= 6uLL )
              {
                v139 = 8LL * v83;
                v140 = (const void *)(v25 + 24);
                goto LABEL_209;
              }
              v165 = v22;
              v159 = v35;
              v151 = v83;
              sub_2237220(v35 + 8, v35 + 24, v83, 8);
              v35 = v159;
              v141 = *(const void **)(v25 + 8);
              v83 = v151;
              v139 = 8LL * *(unsigned int *)(v25 + 16);
              v84 = *(void **)(v159 + 8);
              v82 = (void *)(v25 + 24);
              v140 = v141;
              v22 = v165;
              if ( v139 )
              {
LABEL_209:
                v163 = v22;
                v161 = v82;
                v157 = v35;
                v149 = v83;
                memcpy(v84, v140, v139);
                v141 = *(const void **)(v25 + 8);
                v22 = v163;
                v82 = v161;
                v35 = v157;
                v83 = v149;
              }
              *(_DWORD *)(v35 + 16) = v83;
              v85 = (void *)v141;
              *(_DWORD *)(v25 + 16) = 0;
LABEL_121:
              ++*(_DWORD *)(a1 + 48);
              if ( v85 != v82 )
              {
                v146 = v22;
                free(v85);
                v22 = v146;
              }
              goto LABEL_123;
            }
            *(_DWORD *)(v35 + 16) = v83;
            v133 = *(_DWORD *)(v25 + 20);
            *(_QWORD *)(v35 + 8) = v85;
            *(_DWORD *)(v35 + 20) = v133;
            *(_QWORD *)(v25 + 8) = v82;
            *(_DWORD *)(v25 + 20) = 0;
            *(_DWORD *)(v25 + 16) = 0;
            ++*(_DWORD *)(a1 + 48);
          }
LABEL_123:
          v25 += 72;
        }
        while ( v26 != v25 );
      }
      operator delete(v18, v22, 8);
      v21 = *(_QWORD **)(a1 + 40);
      v61 = *(_DWORD *)(a1 + 56);
      LODWORD(a4) = *(_DWORD *)(a1 + 48) + 1;
    }
    else
    {
      v60 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 48) = 0;
      v61 = v60;
      v62 = &v21[9 * v60];
      if ( v21 != v62 )
      {
        v63 = v21;
        do
        {
          *v63 = -4096;
          v63 += 9;
        }
        while ( v62 != v63 );
      }
      LODWORD(a4) = 1;
    }
    if ( v61 )
    {
      v64 = v16;
      while ( 1 )
      {
        v65 = *(_QWORD *)(v64 + 8);
        if ( !v65 )
        {
LABEL_88:
          v67 = -1916529075;
          goto LABEL_89;
        }
        v66 = v65 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v65 & 4) == 0 )
          break;
        v64 = v65 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v66 )
          goto LABEL_88;
      }
      v129 = HIDWORD(v66);
      v130 = 0x9DDFEA08EB382D69LL * (v129 ^ (((8 * v65) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
      v67 = -348639895
          * ((-348639895 * ((v130 >> 47) ^ v129 ^ v130))
           ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v130 >> 47) ^ v129 ^ v130)) >> 32) >> 15));
LABEL_89:
      v68 = v61 - 1;
      v69 = 1;
      v70 = nullptr;
      v71 = v68 & v67;
      v53 = &v21[9 * v71];
      v72 = *v53;
      if ( *v53 != v16 )
      {
        while ( 1 )
        {
          if ( v16 == -4096 || v16 == -8192 )
          {
            if ( v72 == -4096 )
            {
LABEL_217:
              if ( v70 )
              {
                v86 = *v70;
                v53 = v70;
                goto LABEL_126;
              }
LABEL_233:
              *(_DWORD *)(a1 + 48) = a4;
              goto LABEL_104;
            }
            if ( v72 == -8192 )
            {
LABEL_238:
              if ( !v70 )
                v70 = v53;
            }
          }
          else
          {
            if ( v72 == -4096 )
              goto LABEL_217;
            if ( v72 == -8192 )
              goto LABEL_238;
            v73 = v16;
            do
            {
              v74 = *(_QWORD *)(v73 + 8);
              if ( !v74 )
              {
                v73 = 0;
                break;
              }
              v73 = v74 & 0xFFFFFFFFFFFFFFF8LL;
            }
            while ( (v74 & 4) != 0 && v73 );
            while ( 1 )
            {
              v75 = *(_QWORD *)(v72 + 8);
              if ( !v75 )
                break;
              v72 = v75 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v75 & 4) == 0 || !v72 )
                goto LABEL_101;
            }
            v72 = 0;
LABEL_101:
            if ( v72 == v73 )
              goto LABEL_102;
          }
          v71 = v68 & (v69 + v71);
          v53 = &v21[9 * v71];
          v72 = *v53;
          if ( *v53 == v16 )
            break;
          ++v69;
        }
      }
LABEL_204:
      v86 = v16;
      goto LABEL_126;
    }
LABEL_125:
    v86 = 0x10102464C457FLL;
    v53 = nullptr;
    goto LABEL_126;
  }
  v43 = *(_QWORD *)(v15 + 8);
  while ( 1 )
  {
    v44 = *(_QWORD *)(v43 + 8);
    if ( !v44 )
    {
LABEL_58:
      v46 = -1916529075;
      goto LABEL_60;
    }
    v45 = v44 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v44 & 4) == 0 )
      break;
    v43 = v44 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v45 )
      goto LABEL_58;
  }
  v48 = HIDWORD(v45);
  v49 = 0x9DDFEA08EB382D69LL * (v48 ^ (((8 * v44) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v46 = -348639895
      * (((unsigned int)((0x9DDFEA08EB382D69LL * (v49 ^ v48 ^ (v49 >> 47))) >> 32) >> 15)
       ^ (-348639895 * (v49 ^ v48 ^ (v49 >> 47))));
LABEL_60:
  v50 = (unsigned int)(v17 - 1);
  a6 = 1;
  v51 = v50 & v46;
  v52 = v18 + 72LL * v51;
  v53 = nullptr;
  v39 = *(_QWORD *)v52;
  if ( *(_QWORD *)v52 == v16 )
  {
LABEL_46:
    v40 = *(unsigned int *)(v52 + 16);
    v41 = (_QWORD *)(v52 + 8);
    if ( *(unsigned int *)(v52 + 20) < (unsigned __int64)(v40 + 1) )
    {
      sub_2237220(v52 + 8, v52 + 24, v40 + 1, 8);
      v40 = *(unsigned int *)(v52 + 16);
    }
    goto LABEL_48;
  }
  while ( v16 != -4096 && v16 != -8192 )
  {
    if ( v39 == -4096 )
      goto LABEL_129;
    if ( v39 == -8192 )
      goto LABEL_107;
    v54 = v16;
    do
    {
      v55 = *(_QWORD *)(v54 + 8);
      if ( !v55 )
      {
        v54 = 0;
        break;
      }
      v54 = v55 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v55 & 4) != 0 && v54 );
    while ( 1 )
    {
      a5 = *(_QWORD *)(v39 + 8);
      if ( !a5 )
        break;
      v39 = a5 & 0xFFFFFFFFFFFFFFF8LL;
      a5 &= 4u;
      if ( !(_DWORD)a5 || !v39 )
        goto LABEL_45;
    }
    v39 = 0;
LABEL_45:
    if ( v39 == v54 )
      goto LABEL_46;
LABEL_109:
    v51 = v50 & (a6 + v51);
    v52 = v18 + 72LL * v51;
    v39 = *(_QWORD *)v52;
    if ( *(_QWORD *)v52 == v16 )
      goto LABEL_46;
    a6 = (unsigned int)(a6 + 1);
  }
  if ( v39 != -4096 )
  {
    if ( v39 != -8192 )
      goto LABEL_109;
LABEL_107:
    if ( !v53 )
      v53 = (unsigned __int64 *)v52;
    goto LABEL_109;
  }
LABEL_129:
  if ( !v53 )
    v53 = (unsigned __int64 *)v52;
  a4 = (unsigned int)(*(_DWORD *)(a1 + 48) + 1);
  if ( 4 * (int)a4 >= (unsigned int)(3 * v17) )
    goto LABEL_15;
  if ( (int)v17 - *(_DWORD *)(a1 + 52) - (int)a4 > (unsigned int)v17 >> 3 )
  {
    v86 = *v53;
    goto LABEL_126;
  }
  v87 = (((v50 >> 1) | v50 | (((v50 >> 1) | v50) >> 2)) >> 4) | (v50 >> 1) | v50 | (((v50 >> 1) | v50) >> 2);
  v88 = ((((v87 >> 8) | v87) >> 16) | (v87 >> 8) | v87) + 1;
  if ( (unsigned int)v88 < 0x40 )
    LODWORD(v88) = 64;
  *(_DWORD *)(a1 + 56) = v88;
  v89 = (_QWORD *)sub_22300B0(72LL * (unsigned int)v88, 8, 64, a4, a5, a6);
  *(_QWORD *)(a1 + 40) = v89;
  if ( v18 )
  {
    *(_QWORD *)(a1 + 48) = 0;
    v90 = 72 * v17;
    v91 = v18 + 72 * v17;
    for ( j = &v89[9 * *(unsigned int *)(a1 + 56)]; j != v89; v89 += 9 )
      *v89 = -4096;
    v93 = v18;
    v94 = v91;
    while ( 1 )
    {
      v95 = *(_QWORD *)v93;
      if ( *(_QWORD *)v93 != -4096 && v95 != -8192 )
      {
        v96 = *(_DWORD *)(a1 + 56);
        if ( !v96 )
        {
          *(_QWORD *)&dword_0 = *(_QWORD *)v93;
          BUG();
        }
        v97 = *(_QWORD *)v93;
        while ( 1 )
        {
          v98 = *(_QWORD *)(v97 + 8);
          if ( !v98 )
          {
LABEL_147:
            v100 = -1916529075;
            goto LABEL_148;
          }
          v99 = v98 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v98 & 4) == 0 )
            break;
          v97 = v98 & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v99 )
            goto LABEL_147;
        }
        v137 = HIDWORD(v99);
        v138 = 0x9DDFEA08EB382D69LL * (v137 ^ (((8 * v98) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
        v100 = -348639895
             * ((-348639895 * ((v138 >> 47) ^ v137 ^ v138))
              ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v138 >> 47) ^ v137 ^ v138)) >> 32) >> 15));
LABEL_148:
        v101 = v96 - 1;
        v147 = 1;
        v102 = 0;
        v103 = v101 & v100;
        v104 = *(_QWORD *)(a1 + 40) + 72LL * v103;
        v105 = *(_QWORD *)v104;
        if ( *(_QWORD *)v104 != v95 )
        {
          while ( v105 != -4096 )
          {
            if ( v105 == -8192 )
            {
              if ( !v102 )
                v102 = v104;
            }
            else
            {
              v155 = *(_QWORD *)v93;
              do
              {
                v106 = *(_QWORD *)(v155 + 8);
                if ( !v106 )
                  break;
                v155 = v106 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v106 & 4) == 0 )
                  break;
              }
              while ( (v106 & 0xFFFFFFFFFFFFFFF8LL) != 0 );
              v156 = v106 & 0xFFFFFFFFFFFFFFF8LL;
              do
              {
                v107 = *(_QWORD *)(v105 + 8);
                if ( !v107 )
                  break;
                v105 = v107 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v107 & 4) == 0 )
                  break;
              }
              while ( v105 );
              if ( v156 == (v107 & 0xFFFFFFFFFFFFFFF8LL) )
                goto LABEL_164;
            }
            v103 = v101 & (v147 + v103);
            v104 = *(_QWORD *)(a1 + 40) + 72LL * v103;
            v105 = *(_QWORD *)v104;
            if ( *(_QWORD *)v104 == v95 )
              goto LABEL_164;
            ++v147;
          }
          if ( v102 )
            v104 = v102;
        }
LABEL_164:
        v108 = *(_QWORD *)v93;
        v109 = (void *)(v93 + 24);
        *(_QWORD *)(v104 + 16) = 0x600000000LL;
        v110 = *(_DWORD *)(v93 + 16);
        *(_QWORD *)v104 = v108;
        v111 = (void *)(v104 + 24);
        *(_QWORD *)(v104 + 8) = v104 + 24;
        if ( !v110 )
        {
          v112 = *(void **)(v93 + 8);
          goto LABEL_166;
        }
        v112 = *(void **)(v93 + 8);
        if ( v104 + 8 == v93 + 8 )
          goto LABEL_166;
        if ( v112 == v109 )
        {
          if ( v110 <= 6uLL )
          {
            v142 = 8LL * v110;
            v143 = (const void *)(v93 + 24);
            goto LABEL_213;
          }
          v166 = v90;
          v160 = v110;
          v152 = v104;
          sub_2237220(v104 + 8, v104 + 24, v110, 8);
          v104 = v152;
          v144 = *(const void **)(v93 + 8);
          v110 = v160;
          v142 = 8LL * *(unsigned int *)(v93 + 16);
          v111 = *(void **)(v152 + 8);
          v109 = (void *)(v93 + 24);
          v143 = v144;
          v90 = v166;
          if ( v142 )
          {
LABEL_213:
            v164 = v90;
            v162 = v109;
            v158 = v110;
            v150 = v104;
            memcpy(v111, v143, v142);
            v144 = *(const void **)(v93 + 8);
            v90 = v164;
            v109 = v162;
            v110 = v158;
            v104 = v150;
          }
          *(_DWORD *)(v104 + 16) = v110;
          v112 = (void *)v144;
          *(_DWORD *)(v93 + 16) = 0;
LABEL_166:
          ++*(_DWORD *)(a1 + 48);
          if ( v112 != v109 )
          {
            v148 = v90;
            free(v112);
            v90 = v148;
          }
          goto LABEL_168;
        }
        *(_DWORD *)(v104 + 16) = v110;
        v134 = *(_DWORD *)(v93 + 20);
        *(_QWORD *)(v104 + 8) = v112;
        *(_DWORD *)(v104 + 20) = v134;
        *(_QWORD *)(v93 + 8) = v109;
        *(_DWORD *)(v93 + 20) = 0;
        *(_DWORD *)(v93 + 16) = 0;
        ++*(_DWORD *)(a1 + 48);
      }
LABEL_168:
      v93 += 72;
      if ( v94 == v93 )
      {
        operator delete(v18, v90, 8);
        v89 = *(_QWORD **)(a1 + 40);
        v113 = *(_DWORD *)(a1 + 56);
        LODWORD(a4) = *(_DWORD *)(a1 + 48) + 1;
        goto LABEL_170;
      }
    }
  }
  v126 = *(unsigned int *)(a1 + 56);
  *(_QWORD *)(a1 + 48) = 0;
  v113 = v126;
  v127 = &v89[9 * v126];
  if ( v89 != v127 )
  {
    v128 = v89;
    do
    {
      *v128 = -4096;
      v128 += 9;
    }
    while ( v127 != v128 );
  }
  LODWORD(a4) = 1;
LABEL_170:
  if ( !v113 )
    goto LABEL_125;
  v114 = v16;
  while ( 1 )
  {
    v115 = *(_QWORD *)(v114 + 8);
    if ( !v115 )
    {
LABEL_175:
      v117 = -1916529075;
      goto LABEL_176;
    }
    v116 = v115 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v115 & 4) == 0 )
      break;
    v114 = v115 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v116 )
      goto LABEL_175;
  }
  v131 = HIDWORD(v116);
  v132 = 0x9DDFEA08EB382D69LL * (v131 ^ (((8 * v115) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
  v117 = -348639895
       * ((-348639895 * ((v132 >> 47) ^ v132 ^ v131))
        ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v132 >> 47) ^ v132 ^ v131)) >> 32) >> 15));
LABEL_176:
  v118 = v113 - 1;
  v119 = (v113 - 1) & v117;
  v53 = &v89[9 * v119];
  v120 = *v53;
  if ( *v53 == v16 )
    goto LABEL_204;
  v86 = *v53;
  v121 = 1;
  v122 = nullptr;
  while ( v16 != -4096 && v16 != -8192 )
  {
    if ( v86 == -4096 )
      goto LABEL_221;
    if ( v86 == -8192 )
      goto LABEL_230;
    v123 = v16;
    do
    {
      v124 = *(_QWORD *)(v123 + 8);
      if ( !v124 )
      {
        v123 = 0;
        break;
      }
      v123 = v124 & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( (v124 & 4) != 0 && v123 );
    while ( 1 )
    {
      v125 = *(_QWORD *)(v86 + 8);
      if ( !v125 )
        break;
      v86 = v125 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v125 & 4) == 0 || !v86 )
        goto LABEL_189;
    }
    v86 = 0;
LABEL_189:
    if ( v86 == v123 )
    {
LABEL_102:
      *(_DWORD *)(a1 + 48) = a4;
LABEL_103:
      --*(_DWORD *)(a1 + 52);
      goto LABEL_104;
    }
LABEL_190:
    v119 = v118 & (v121 + v119);
    v53 = &v89[9 * v119];
    v86 = *v53;
    v120 = *v53;
    if ( v16 == *v53 )
      goto LABEL_126;
    ++v121;
  }
  if ( v120 != -4096 )
  {
    if ( v120 != -8192 )
      goto LABEL_190;
LABEL_230:
    if ( !v122 )
      v122 = v53;
    goto LABEL_190;
  }
LABEL_221:
  if ( !v122 )
    goto LABEL_233;
  v86 = *v122;
  v53 = v122;
LABEL_126:
  *(_DWORD *)(a1 + 48) = a4;
  if ( v86 != -4096 )
    goto LABEL_103;
LABEL_104:
  *v53 = v16;
  v41 = v53 + 1;
  v53[1] = (unsigned __int64)(v53 + 3);
  v53[2] = 0x600000000LL;
  v40 = 0;
LABEL_48:
  *(_QWORD *)(*v41 + 8 * v40) = a9;
  ++*((_DWORD *)v41 + 2);
}
