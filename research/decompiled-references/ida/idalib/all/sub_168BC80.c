void __fastcall sub_168BC80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v7; // rbx
  __int64 v8; // rbp
  unsigned int v9; // r12d
  unsigned __int64 v10; // rsi
  unsigned int v11; // ecx
  __int64 *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r12
  const __m128i *v15; // rbp
  __int64 v16; // r12
  char *v17; // rbx
  char *v18; // rcx
  __int64 *v19; // r15
  const __m128i *v20; // rbx
  _BYTE *v21; // rsi
  __int64 *v22; // r14
  size_t v23; // r12
  unsigned __int64 v24; // r13
  __int64 v25; // r13
  unsigned __int64 v26; // rdi
  __int64 *v27; // rax
  __int64 *v28; // rdi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int32 v31; // r12d
  _BYTE *v32; // rdi
  char *v33; // rcx
  char *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rdx
  unsigned __int64 v37; // rax
  char *v38; // r13
  char *v39; // rbp
  char *v40; // rdi
  char *v41; // rdi
  void **v42; // rbp
  void **v43; // r13
  __int64 v44; // rsi
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rdx
  int v51; // eax
  __int64 v52; // rdx
  int v53; // edi
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbp
  __int64 v57; // r13
  __int64 v58; // rbp
  void *v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  _QWORD *v62; // rax
  _QWORD *j; // rdx
  __int64 *v64; // r14
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rdi
  int v68; // esi
  unsigned int v69; // edx
  _QWORD *v70; // rax
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rdx
  _QWORD *v77; // r15
  _QWORD *v78; // rbx
  unsigned __int64 v79; // r12
  unsigned __int64 v80; // rax
  _QWORD *v81; // r13
  _QWORD *v82; // rbp
  _QWORD *v83; // rdi
  void *v84; // rdi
  void **v85; // rbp
  void **v86; // r13
  int v87; // esi
  int v88; // r8d
  unsigned int v89; // edi
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // rax
  _QWORD *v93; // rax
  _QWORD *i; // rdx
  __int64 *v95; // r14
  int v96; // eax
  __int64 v97; // rdi
  int v98; // esi
  unsigned int v99; // edx
  _QWORD *v100; // rax
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rdx
  _QWORD *v107; // r15
  _QWORD *v108; // rbx
  unsigned __int64 v109; // r12
  unsigned __int64 v110; // rax
  _QWORD *v111; // r13
  _QWORD *v112; // rbp
  _QWORD *v113; // rdi
  void *v114; // rdi
  void **v115; // rbp
  void **v116; // r13
  int v117; // esi
  int v118; // edi
  unsigned int v119; // r8d
  __int64 *v120; // r9
  int v121; // r10d
  __int64 v122; // rdx
  __int64 v123; // rcx
  _QWORD *v124; // rcx
  _QWORD *v125; // rdx
  __int64 v126; // rcx
  _QWORD *v127; // rcx
  _QWORD *v128; // rdx
  int v129; // r10d
  _QWORD *v130; // r9
  int v131; // r10d
  _QWORD *v132; // r9
  int v133; // r10d
  __int64 *v135; // [rsp+8h] [rbp-70h]
  char *v136; // [rsp+8h] [rbp-70h]
  unsigned int v137; // [rsp+10h] [rbp-68h]
  __int64 *v138; // [rsp+10h] [rbp-68h]
  __int64 v139; // [rsp+18h] [rbp-60h]
  __int64 v140; // [rsp+20h] [rbp-58h]
  __int64 v141; // [rsp+20h] [rbp-58h]
  __int64 v142; // [rsp+28h] [rbp-50h]
  __int64 v143; // [rsp+28h] [rbp-50h]
  __int64 v144; // [rsp+30h] [rbp-48h]
  __int64 v145; // [rsp+30h] [rbp-48h]
  __int64 v146; // [rsp+38h] [rbp-40h]

  v7 = a1[2];
  v8 = *a1;
  if ( v7 )
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
  v9 = *(_DWORD *)(v8 + 536);
  v135 = *(__int64 **)(v8 + 520);
  if ( v9 )
  {
    v10 = v9 - 1;
    v137 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
    v11 = v10 & v137;
    v12 = (__int64 *)(*(_QWORD *)(v8 + 520) + 32LL * ((unsigned int)v10 & v137));
    v13 = *v12;
    if ( v7 == *v12 )
    {
LABEL_5:
      v14 = v12[1];
      goto LABEL_6;
    }
    v53 = 1;
    a5 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !a5 && v13 == -8192 )
          a5 = v12;
        a6 = (unsigned int)(v53 + 1);
        v11 = v10 & (v53 + v11);
        v12 = &v135[4 * v11];
        v13 = *v12;
        if ( v7 == *v12 )
          goto LABEL_5;
        if ( v13 == -4096 )
          break;
        ++v53;
      }
      if ( a5 )
        v12 = a5;
    }
    a4 = (unsigned int)(*(_DWORD *)(v8 + 528) + 1);
    if ( 4 * (int)a4 < 3 * v9 )
    {
      if ( v9 - *(_DWORD *)(v8 + 532) - (unsigned int)a4 > v9 >> 3 )
      {
LABEL_80:
        v54 = *v12;
        goto LABEL_81;
      }
      v91 = (((((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4) | (v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 8)
          | (((v10 >> 1) | v10 | (((v10 >> 1) | v10) >> 2)) >> 4)
          | (v10 >> 1)
          | v10
          | (((v10 >> 1) | v10) >> 2);
      v92 = ((v91 >> 16) | v91) + 1;
      if ( (unsigned int)v92 < 0x40 )
        LODWORD(v92) = 64;
      *(_DWORD *)(v8 + 536) = v92;
      v93 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v92, 8, 64, a4, a5, a6);
      *(_QWORD *)(v8 + 520) = v93;
      if ( v135 )
      {
        *(_QWORD *)(v8 + 528) = 0;
        v143 = 4LL * v9;
        for ( i = &v93[4 * *(unsigned int *)(v8 + 536)]; i != v93; v93 += 4 )
          *v93 = -4096;
        v141 = v8;
        v95 = v135;
        v145 = v7;
        v146 = a2;
        do
        {
          v65 = *v95;
          if ( *v95 != -4096 && v65 != -8192 )
          {
            v96 = *(_DWORD *)(v141 + 536);
            if ( !v96 )
              goto LABEL_229;
            v97 = *(_QWORD *)(v141 + 520);
            v98 = v96 - 1;
            v99 = (v96 - 1) & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
            v100 = (_QWORD *)(v97 + 32LL * v99);
            v101 = *v100;
            if ( v65 != *v100 )
            {
              v131 = 1;
              v132 = nullptr;
              if ( v101 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v132 && v101 == -8192 )
                    v132 = v100;
                  v99 = v98 & (v131 + v99);
                  v100 = (_QWORD *)(v97 + 32LL * v99);
                  v101 = *v100;
                  if ( v65 == *v100 )
                    break;
                  if ( v101 == -4096 )
                  {
                    if ( v132 )
                      v100 = v132;
                    break;
                  }
                  ++v131;
                }
              }
            }
            v102 = *v95;
            v100[2] = 0;
            v100[3] = 0;
            v100[1] = 0;
            *v100 = v102;
            v100[1] = v95[1];
            v103 = v95[2];
            v95[1] = 0;
            v104 = v100[2];
            v100[2] = v103;
            v105 = v95[3];
            v95[2] = v104;
            v106 = v100[3];
            v100[3] = v105;
            v107 = (_QWORD *)v95[2];
            v108 = (_QWORD *)v95[1];
            v95[3] = v106;
            ++*(_DWORD *)(v141 + 528);
            if ( v107 != v108 )
            {
              do
              {
                v109 = v108[1];
                if ( v109 )
                {
                  v110 = v108[2];
                  if ( v110 )
                  {
                    if ( v109 < v110 || v109 > v110 + 14848 )
                    {
                      v111 = *(_QWORD **)(v109 + 528);
                      v112 = &v111[8 * (unsigned __int64)*(unsigned int *)(v109 + 536)];
                      if ( v111 != v112 )
                      {
                        do
                        {
                          while ( 1 )
                          {
                            v112 -= 8;
                            v113 = (_QWORD *)v112[3];
                            if ( v113 == v112 + 5 )
                              break;
                            operator delete(v113);
                            if ( v111 == v112 )
                              goto LABEL_159;
                          }
                        }
                        while ( v111 != v112 );
LABEL_159:
                        v112 = *(_QWORD **)(v109 + 528);
                      }
                      if ( v112 != (_QWORD *)(v109 + 544) )
                        free(v112);
                      v114 = *(void **)(v109 + 416);
                      if ( v114 != (void *)(v109 + 432) )
                        free(v114);
                      v115 = (void **)(v109 + 384);
                      v116 = (void **)(v109 + 64);
                      do
                      {
                        while ( *v115 != v115 + 2 )
                        {
                          operator delete(*v115);
                          v115 -= 4;
                          if ( v116 == v115 )
                            goto LABEL_167;
                        }
                        v115 -= 4;
                      }
                      while ( v116 != v115 );
LABEL_167:
                      operator delete((void *)v109, 0x3A0u);
                    }
                    else
                    {
                      v122 = *(unsigned int *)(v110 + 14976);
                      *(_DWORD *)(v110 + 14976) = v122 + 1;
                      *(_QWORD *)(v110 + 8 * v122 + 14848) = v109;
                    }
                  }
                }
                v108 += 4;
              }
              while ( v107 != v108 );
              v108 = (_QWORD *)v95[1];
            }
            if ( v108 )
              operator delete(v108);
          }
          v95 += 4;
        }
        while ( &v135[v143] != v95 );
        v8 = v141;
        v7 = v145;
        a2 = v146;
        operator delete(v135, v143 * 8, 8);
        v93 = *(_QWORD **)(v141 + 520);
        v117 = *(_DWORD *)(v141 + 536);
        LODWORD(a4) = *(_DWORD *)(v141 + 528) + 1;
      }
      else
      {
        v126 = *(unsigned int *)(v8 + 536);
        *(_QWORD *)(v8 + 528) = 0;
        v117 = v126;
        v127 = &v93[4 * v126];
        if ( v93 != v127 )
        {
          v128 = v93;
          do
          {
            *v128 = -4096;
            v128 += 4;
          }
          while ( v127 != v128 );
        }
        LODWORD(a4) = 1;
      }
      if ( v117 )
      {
        v118 = v117 - 1;
        v119 = (v117 - 1) & v137;
        v12 = &v93[4 * v119];
        v54 = *v12;
        if ( v7 == *v12 )
          goto LABEL_81;
        if ( v54 != -4096 )
        {
          v120 = &v93[4 * (v118 & v137)];
          v121 = 1;
          v12 = nullptr;
          while ( 1 )
          {
            if ( v54 == -8192 && !v12 )
              v12 = v120;
            v119 = v118 & (v121 + v119);
            v120 = &v93[4 * v119];
            v54 = *v120;
            if ( v7 == *v120 )
              break;
            if ( v54 == -4096 )
              goto LABEL_222;
            ++v121;
          }
LABEL_182:
          v12 = v120;
LABEL_81:
          *(_DWORD *)(v8 + 528) = a4;
          if ( v54 != -4096 )
            --*(_DWORD *)(v8 + 532);
          goto LABEL_83;
        }
        goto LABEL_135;
      }
LABEL_230:
      ++*(_DWORD *)(v8 + 528);
      BUG();
    }
  }
  v60 = (((((((2 * v9 - 1) | ((unsigned __int64)(2 * v9 - 1) >> 1)) >> 2)
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
  v61 = ((v60 >> 16) | v60) + 1;
  if ( (unsigned int)v61 < 0x40 )
    LODWORD(v61) = 64;
  *(_DWORD *)(v8 + 536) = v61;
  v62 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v61, 8, 64, a4, a5, a6);
  *(_QWORD *)(v8 + 520) = v62;
  if ( v135 )
  {
    *(_QWORD *)(v8 + 528) = 0;
    v140 = 4LL * v9;
    v138 = &v135[v140];
    for ( j = &v62[4 * *(unsigned int *)(v8 + 536)]; j != v62; v62 += 4 )
      *v62 = -4096;
    if ( v135 != v138 )
    {
      v139 = v8;
      v64 = v135;
      v142 = v7;
      v144 = a2;
      do
      {
        v65 = *v64;
        if ( *v64 != -8192 && v65 != -4096 )
        {
          v66 = *(_DWORD *)(v139 + 536);
          if ( !v66 )
          {
LABEL_229:
            *(_QWORD *)&dword_0 = v65;
            BUG();
          }
          v67 = *(_QWORD *)(v139 + 520);
          v68 = v66 - 1;
          v69 = (v66 - 1) & (((unsigned int)v65 >> 9) ^ ((unsigned int)v65 >> 4));
          v70 = (_QWORD *)(v67 + 32LL * v69);
          v71 = *v70;
          if ( v65 != *v70 )
          {
            v129 = 1;
            v130 = nullptr;
            if ( v71 != -4096 )
            {
              while ( 1 )
              {
                if ( !v130 && v71 == -8192 )
                  v130 = v70;
                v69 = v68 & (v129 + v69);
                v70 = (_QWORD *)(v67 + 32LL * v69);
                v71 = *v70;
                if ( v65 == *v70 )
                  break;
                if ( v71 == -4096 )
                {
                  if ( v130 )
                    v70 = v130;
                  break;
                }
                ++v129;
              }
            }
          }
          v72 = *v64;
          v70[2] = 0;
          v70[3] = 0;
          v70[1] = 0;
          *v70 = v72;
          v70[1] = v64[1];
          v73 = v64[2];
          v64[1] = 0;
          v74 = v70[2];
          v70[2] = v73;
          v75 = v64[3];
          v64[2] = v74;
          v76 = v70[3];
          v70[3] = v75;
          v77 = (_QWORD *)v64[2];
          v78 = (_QWORD *)v64[1];
          v64[3] = v76;
          ++*(_DWORD *)(v139 + 528);
          if ( v77 != v78 )
          {
            do
            {
              v79 = v78[1];
              if ( v79 )
              {
                v80 = v78[2];
                if ( v80 )
                {
                  if ( v79 < v80 || v79 > v80 + 14848 )
                  {
                    v81 = *(_QWORD **)(v79 + 528);
                    v82 = &v81[8 * (unsigned __int64)*(unsigned int *)(v79 + 536)];
                    if ( v81 != v82 )
                    {
                      do
                      {
                        while ( 1 )
                        {
                          v82 -= 8;
                          v83 = (_QWORD *)v82[3];
                          if ( v83 == v82 + 5 )
                            break;
                          operator delete(v83);
                          if ( v81 == v82 )
                            goto LABEL_116;
                        }
                      }
                      while ( v81 != v82 );
LABEL_116:
                      v82 = *(_QWORD **)(v79 + 528);
                    }
                    if ( v82 != (_QWORD *)(v79 + 544) )
                      free(v82);
                    v84 = *(void **)(v79 + 416);
                    if ( v84 != (void *)(v79 + 432) )
                      free(v84);
                    v85 = (void **)(v79 + 384);
                    v86 = (void **)(v79 + 64);
                    do
                    {
                      while ( *v85 != v85 + 2 )
                      {
                        operator delete(*v85);
                        v85 -= 4;
                        if ( v85 == v86 )
                          goto LABEL_124;
                      }
                      v85 -= 4;
                    }
                    while ( v85 != v86 );
LABEL_124:
                    operator delete((void *)v79, 0x3A0u);
                  }
                  else
                  {
                    v90 = *(unsigned int *)(v80 + 14976);
                    *(_DWORD *)(v80 + 14976) = v90 + 1;
                    *(_QWORD *)(v80 + 8 * v90 + 14848) = v79;
                  }
                }
              }
              v78 += 4;
            }
            while ( v77 != v78 );
            v78 = (_QWORD *)v64[1];
          }
          if ( v78 )
            operator delete(v78);
        }
        v64 += 4;
      }
      while ( v138 != v64 );
      v8 = v139;
      v7 = v142;
      a2 = v144;
    }
    operator delete(v135, v140 * 8, 8);
    v62 = *(_QWORD **)(v8 + 520);
    v87 = *(_DWORD *)(v8 + 536);
    LODWORD(a4) = *(_DWORD *)(v8 + 528) + 1;
  }
  else
  {
    v123 = *(unsigned int *)(v8 + 536);
    *(_QWORD *)(v8 + 528) = 0;
    v87 = v123;
    v124 = &v62[4 * v123];
    if ( v62 != v124 )
    {
      v125 = v62;
      do
      {
        *v125 = -4096;
        v125 += 4;
      }
      while ( v124 != v125 );
    }
    LODWORD(a4) = 1;
  }
  if ( !v87 )
    goto LABEL_230;
  v88 = v87 - 1;
  v89 = (v87 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
  v12 = &v62[4 * v89];
  v54 = *v12;
  if ( v7 == *v12 )
    goto LABEL_81;
  if ( v54 != -4096 )
  {
    v120 = &v62[4 * (v88 & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4)))];
    v133 = 1;
    v12 = nullptr;
    while ( 1 )
    {
      if ( v54 == -8192 && !v12 )
        v12 = v120;
      v89 = v88 & (v133 + v89);
      v120 = &v62[4 * v89];
      v54 = *v120;
      if ( v7 == *v120 )
        goto LABEL_182;
      if ( v54 == -4096 )
      {
LABEL_222:
        if ( v12 )
          goto LABEL_80;
        v12 = v120;
        break;
      }
      ++v133;
    }
  }
LABEL_135:
  *(_DWORD *)(v8 + 528) = a4;
LABEL_83:
  *v12 = v7;
  v14 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
LABEL_6:
  v15 = *(const __m128i **)a2;
  v16 = 32LL * *((unsigned int *)a1 + 32) + v14;
  v17 = *(char **)(v16 + 8);
  *(_DWORD *)(v16 + 24) = *(_DWORD *)(a2 + 16);
  if ( v15 )
  {
    if ( v17 )
    {
      v18 = v17 + 96;
    }
    else
    {
      v50 = *(_QWORD *)(v16 + 16);
      v51 = *(_DWORD *)(v50 + 14976);
      if ( v51 )
      {
        v55 = (unsigned int)(v51 - 1);
        *(_DWORD *)(v50 + 14976) = v55;
        v17 = *(char **)(v50 + 8 * v55 + 14848);
        v56 = *((unsigned int *)v17 + 134);
        *v17 = 0;
        v57 = *((_QWORD *)v17 + 66);
        *((_DWORD *)v17 + 106) = 0;
        v58 = v57 + (v56 << 6);
        while ( v57 != v58 )
        {
          while ( 1 )
          {
            v58 -= 64;
            v59 = *(void **)(v58 + 24);
            if ( v59 == (void *)(v58 + 40) )
              break;
            operator delete(v59);
            if ( v57 == v58 )
              goto LABEL_88;
          }
        }
LABEL_88:
        *((_DWORD *)v17 + 134) = 0;
        v18 = v17 + 96;
      }
      else
      {
        v17 = (char *)operator new(0x3A0u);
        *v17 = 0;
        v18 = v17 + 96;
        *((_QWORD *)v17 + 12) = v17 + 112;
        *((_QWORD *)v17 + 16) = v17 + 144;
        *((_QWORD *)v17 + 20) = v17 + 176;
        *((_QWORD *)v17 + 24) = v17 + 208;
        *((_QWORD *)v17 + 28) = v17 + 240;
        *((_QWORD *)v17 + 32) = v17 + 272;
        *((_QWORD *)v17 + 36) = v17 + 304;
        *((_QWORD *)v17 + 40) = v17 + 336;
        *((_QWORD *)v17 + 44) = v17 + 368;
        *((_QWORD *)v17 + 48) = v17 + 400;
        *((_QWORD *)v17 + 52) = v17 + 432;
        *((_QWORD *)v17 + 13) = 0;
        v17[112] = 0;
        *((_QWORD *)v17 + 17) = 0;
        v17[144] = 0;
        *((_QWORD *)v17 + 21) = 0;
        v17[176] = 0;
        *((_QWORD *)v17 + 25) = 0;
        v17[208] = 0;
        *((_QWORD *)v17 + 29) = 0;
        v17[240] = 0;
        *((_QWORD *)v17 + 33) = 0;
        v17[272] = 0;
        *((_QWORD *)v17 + 37) = 0;
        v17[304] = 0;
        *((_QWORD *)v17 + 41) = 0;
        v17[336] = 0;
        *((_QWORD *)v17 + 45) = 0;
        v17[368] = 0;
        *((_QWORD *)v17 + 49) = 0;
        v17[400] = 0;
        *((_QWORD *)v17 + 53) = 0x800000000LL;
        *((_QWORD *)v17 + 66) = v17 + 544;
        *((_QWORD *)v17 + 67) = 0x600000000LL;
      }
      *(_QWORD *)(v16 + 8) = v17;
      v15 = *(const __m128i **)a2;
    }
    *v17 = v15->m128i_i8[0];
    v17[1] = v15->m128i_i8[1];
    v17[2] = v15->m128i_i8[2];
    v17[3] = v15->m128i_i8[3];
    v17[4] = v15->m128i_i8[4];
    v17[5] = v15->m128i_i8[5];
    v17[6] = v15->m128i_i8[6];
    v17[7] = v15->m128i_i8[7];
    v17[8] = v15->m128i_i8[8];
    v17[9] = v15->m128i_i8[9];
    v17[10] = v15->m128i_i8[10];
    if ( v17 + 16 < v15[2].m128i_i8 && &v15[1] < (const __m128i *)v17 + 2 )
    {
      *((_QWORD *)v17 + 2) = v15[1].m128i_i64[0];
      *((_QWORD *)v17 + 3) = v15[1].m128i_i64[1];
      *((_QWORD *)v17 + 4) = v15[2].m128i_i64[0];
      *((_QWORD *)v17 + 5) = v15[2].m128i_i64[1];
      *((_QWORD *)v17 + 6) = v15[3].m128i_i64[0];
      *((_QWORD *)v17 + 7) = v15[3].m128i_i64[1];
      *((_QWORD *)v17 + 8) = v15[4].m128i_i64[0];
      *((_QWORD *)v17 + 9) = v15[4].m128i_i64[1];
      *((_QWORD *)v17 + 10) = v15[5].m128i_i64[0];
      *((_QWORD *)v17 + 11) = v15[5].m128i_i64[1];
    }
    else
    {
      *((__m128i *)v17 + 1) = _mm_loadu_si128(v15 + 1);
      *((__m128i *)v17 + 2) = _mm_loadu_si128(v15 + 2);
      *((__m128i *)v17 + 3) = _mm_loadu_si128(v15 + 3);
      *((__m128i *)v17 + 4) = _mm_loadu_si128(v15 + 4);
      *((__m128i *)v17 + 5) = _mm_loadu_si128(v15 + 5);
    }
    v136 = v17;
    v19 = (__int64 *)(v18 + 16);
    v20 = v15 + 6;
    do
    {
      if ( v20 != (const __m128i *)(v19 - 2) )
      {
        v22 = (__int64 *)*(v19 - 2);
        v23 = v20->m128i_u64[1];
        if ( v22 == v19 )
          v24 = 15;
        else
          v24 = *v19;
        if ( v23 > v24 )
        {
          if ( (v23 & 0x8000000000000000LL) != 0LL )
            std::__throw_length_error("basic_string::_M_create");
          v25 = 2 * v24;
          if ( v23 < v25 )
          {
            v26 = v25 + 1;
            if ( v25 < 0 )
            {
              v26 = 0x8000000000000000LL;
              v25 = 0x7FFFFFFFFFFFFFFFLL;
            }
          }
          else
          {
            v26 = v23 + 1;
            v25 = v20->m128i_i64[1];
          }
          v27 = (__int64 *)operator new(v26);
          v28 = (__int64 *)*(v19 - 2);
          v22 = v27;
          if ( v28 != v19 )
            operator delete(v28);
          *(v19 - 2) = (__int64)v22;
          *v19 = v25;
        }
        if ( v23 )
        {
          v21 = (_BYTE *)v20->m128i_i64[0];
          if ( v23 == 1 )
            *(_BYTE *)v22 = *v21;
          else
            memcpy(v22, v21, v23);
          v22 = (__int64 *)*(v19 - 2);
        }
        *(v19 - 1) = v23;
        *((_BYTE *)v22 + v23) = 0;
      }
      v20 += 2;
      v19 += 4;
    }
    while ( v20 != &v15[26] );
    if ( v136 + 416 != (char *)v20 )
    {
      v29 = v15[26].m128i_u32[2];
      v30 = *((unsigned int *)v136 + 106);
      v31 = v15[26].m128i_i32[2];
      if ( v29 <= v30 )
      {
        if ( v15[26].m128i_i32[2] )
        {
          v44 = *((_QWORD *)v136 + 52);
          v45 = v15[26].m128i_i64[0];
          v46 = 0;
          do
          {
            *(_QWORD *)(v44 + v46) = *(_QWORD *)(v45 + v46);
            *(_BYTE *)(v44 + v46 + 8) = *(_BYTE *)(v45 + v46 + 8);
            v46 += 12;
          }
          while ( 12 * v29 != v46 );
        }
      }
      else
      {
        if ( v29 > *((unsigned int *)v136 + 107) )
        {
          *((_DWORD *)v136 + 106) = 0;
          sub_2237220(v136 + 416, v136 + 432, v29, 12);
          v33 = (char *)v15[26].m128i_i64[0];
          v32 = *((_BYTE **)v136 + 52);
          v35 = 0;
          v29 = v15[26].m128i_u32[2];
          v34 = v33;
        }
        else
        {
          v32 = *((_BYTE **)v136 + 52);
          v33 = (char *)v15[26].m128i_i64[0];
          if ( *((_DWORD *)v136 + 106) )
          {
            v47 = 3 * v30;
            v48 = 0;
            v49 = 4 * v47;
            v35 = v49;
            do
            {
              *(_QWORD *)&v32[v48] = *(_QWORD *)&v33[v48];
              v32[v48 + 8] = v33[v48 + 8];
              v48 += 12;
            }
            while ( v49 != v48 );
            v32 += v49;
            v29 = v15[26].m128i_u32[2];
            v34 = &v33[v49];
          }
          else
          {
            v34 = (char *)v15[26].m128i_i64[0];
            v35 = 0;
          }
        }
        v36 = 12 * v29;
        if ( v34 != &v33[v36] )
          memcpy(v32, v34, v36 - v35);
      }
      *((_DWORD *)v136 + 106) = v31;
    }
    sub_9EED30((__int64)(v136 + 528), v15[33].m128i_i64);
  }
  else if ( v17 )
  {
    v37 = *(_QWORD *)(v16 + 16);
    if ( v37 )
    {
      if ( (unsigned __int64)v17 < v37 || (unsigned __int64)v17 > v37 + 14848 )
      {
        v38 = *((char **)v17 + 66);
        v39 = &v38[64 * (unsigned __int64)*((unsigned int *)v17 + 134)];
        if ( v38 != v39 )
        {
          do
          {
            while ( 1 )
            {
              v39 -= 64;
              v40 = *((char **)v39 + 3);
              if ( v40 == v39 + 40 )
                break;
              operator delete(v40);
              if ( v38 == v39 )
                goto LABEL_48;
            }
          }
          while ( v38 != v39 );
LABEL_48:
          v39 = *((char **)v17 + 66);
        }
        if ( v39 != v17 + 544 )
          free(v39);
        v41 = *((char **)v17 + 52);
        if ( v41 != v17 + 432 )
          free(v41);
        v42 = (void **)(v17 + 384);
        v43 = (void **)(v17 + 64);
        do
        {
          while ( *v42 != v42 + 2 )
          {
            operator delete(*v42);
            v42 -= 4;
            if ( v42 == v43 )
              goto LABEL_56;
          }
          v42 -= 4;
        }
        while ( v42 != v43 );
LABEL_56:
        operator delete(v17, 0x3A0u);
      }
      else
      {
        v52 = *(unsigned int *)(v37 + 14976);
        *(_DWORD *)(v37 + 14976) = v52 + 1;
        *(_QWORD *)(v37 + 8 * v52 + 14848) = v17;
      }
      *(_QWORD *)(v16 + 8) = 0;
    }
  }
}
