__int64 __fastcall sub_68B9E0(const char *a1, __int64 a2, __int64 a3, __int64 a4, const void *a5, size_t a6)
{
  const char *v6; // r12
  _DWORD *v7; // rax
  _QWORD *v8; // rbx
  unsigned int v9; // ebx
  _QWORD *v11; // rdi
  int v12; // ebp
  unsigned int v13; // r14d
  char *v16; // r15
  char *v17; // rax
  __int64 v18; // rcx
  int v19; // r8d
  unsigned int v20; // edx
  unsigned __int64 v21; // rsi
  unsigned int v22; // r9d
  int *v23; // rdi
  int v24; // r8d
  _QWORD *v25; // rdi
  __int64 v26; // r12
  std::_V2 *v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // edx
  int *v30; // rbx
  __int64 v31; // r15
  int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned int v34; // esi
  std::_V2 *v35; // rax
  int v36; // r9d
  int v37; // r10d
  int v38; // esi
  int v39; // r10d
  int *v40; // rax
  int v41; // edi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  __int64 v44; // rax
  _DWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r8
  _DWORD *v48; // rcx
  int *v49; // rdi
  int *v50; // rax
  int v51; // edx
  int v52; // r8d
  int v53; // r8d
  int v54; // r15d
  int *v55; // r13
  __int64 v56; // r11
  __int64 v57; // r9
  int *v58; // rcx
  int v59; // r10d
  unsigned __int64 v60; // rax
  _DWORD *v61; // rax
  __int64 v62; // rsi
  _DWORD *v63; // rdi
  int *v64; // r10
  int *i; // rax
  int v66; // edx
  int v67; // edi
  int v68; // r11d
  __int64 v69; // r9
  unsigned int v70; // esi
  int *v71; // rdi
  int v72; // r8d
  unsigned int v73; // eax
  __int64 v74; // rax
  __int64 v75; // rcx
  _DWORD *v76; // rdi
  __int64 v77; // rcx
  _DWORD *v78; // rax
  int *v79; // rax
  int v80; // edx
  int v81; // edi
  int v82; // edi
  __int64 v83; // r10
  unsigned int v84; // r8d
  int *v85; // rcx
  int v86; // r9d
  unsigned int v87; // eax
  _DWORD *v88; // rax
  int v89; // r11d
  __int64 v90; // rdi
  __int64 v91; // rdi
  _DWORD *v92; // rsi
  int *v93; // rax
  int v94; // edx
  int v95; // esi
  int v96; // r8d
  __int64 v97; // r10
  unsigned int v98; // r11d
  int *v99; // rsi
  int v100; // edi
  int v101; // eax
  int v102; // edx
  __int64 v103; // r8
  unsigned int v104; // eax
  int v105; // ecx
  int v106; // r10d
  std::_V2 *v107; // r9
  int v108; // edx
  int v109; // edx
  __int64 v110; // r8
  unsigned int v111; // r11d
  int v112; // esi
  int v113; // r9d
  int *v114; // r10
  int v115; // eax
  int v116; // eax
  __int64 v117; // rcx
  int v118; // r9d
  std::_V2 *v119; // r8
  unsigned int v120; // r13d
  int v121; // edx
  int v122; // edx
  int v123; // edx
  __int64 v124; // r8
  int v125; // r9d
  unsigned int v126; // r11d
  int v127; // esi
  int v128; // edi
  int v129; // r14d
  int *v130; // r15
  int v131; // ecx
  unsigned int v132; // [rsp+0h] [rbp-78h]
  unsigned int v133; // [rsp+0h] [rbp-78h]
  unsigned int v134; // [rsp+0h] [rbp-78h]
  __int64 v135; // [rsp+8h] [rbp-70h]
  __int64 v136; // [rsp+8h] [rbp-70h]
  int *v137; // [rsp+10h] [rbp-68h]
  int v138; // [rsp+18h] [rbp-60h]
  __int64 v139; // [rsp+18h] [rbp-60h]
  unsigned int v140; // [rsp+20h] [rbp-58h]
  __int64 v141; // [rsp+20h] [rbp-58h]
  int *v142; // [rsp+20h] [rbp-58h]
  unsigned int v143; // [rsp+2Ch] [rbp-4Ch]
  int v144; // [rsp+2Ch] [rbp-4Ch]
  int *v145; // [rsp+30h] [rbp-48h]
  int v146; // [rsp+38h] [rbp-40h]

  v6 = a1;
  v132 = a3;
  if ( a6 <= 0x10000 )
  {
    v11 = *((_QWORD **)a1 + 3);
    v12 = a2;
    v13 = a4;
    v16 = (char *)v11[5];
    v11[15] += a6 + 1;
    v17 = &v16[a6 + 1];
    if ( v11[6] >= (unsigned __int64)v17 && v16 )
      v11[5] = v17;
    else
      v16 = (char *)sub_689820((__int64)(v11 + 5), a6 + 1, 0);
    memcpy(v16, a5, a6);
    v16[a6] = 0;
    v18 = *((_QWORD *)v6 + 3);
    v19 = 0;
    v20 = *(_DWORD *)(v18 + 200);
    v137 = *(int **)(v18 + 184);
    if ( !v20 )
      goto LABEL_50;
    v21 = v20 - 1;
    v138 = 8 * v12;
    v22 = v21 & (37 * v12);
    v23 = &v137[4 * v22];
    v24 = *v23;
    if ( *v23 == v12 )
    {
LABEL_13:
      v25 = v23 + 2;
LABEL_14:
      *v25 = v16;
      v26 = *((_QWORD *)v6 + 3);
      v27 = (std::_V2 *)(v26 + 240);
      v28 = sub_C7DF40(v26 + 240, a5, a6, v132, v13);
      v29 = *(_DWORD *)(v26 + 1064);
      v30 = *(int **)(v26 + 1048);
      v31 = v28;
      v32 = 0;
      if ( !v29 )
        goto LABEL_36;
      v33 = v29 - 1;
      v34 = v33 & (v12 + 4 * (v12 + v138));
      v35 = (std::_V2 *)&v30[4 * v34];
      v36 = *(_DWORD *)v35;
      if ( *(_DWORD *)v35 == v12 )
      {
LABEL_16:
        v9 = 0;
        std::_V2::system_category(v27);
        return v9;
      }
      v37 = 1;
      v27 = nullptr;
      while ( v36 != -1 )
      {
        if ( v36 == -2 && !v27 )
          v27 = v35;
        v34 = v33 & (v37 + v34);
        v35 = (std::_V2 *)&v30[4 * v34];
        v36 = *(_DWORD *)v35;
        if ( *(_DWORD *)v35 == v12 )
          goto LABEL_16;
        ++v37;
      }
      if ( !v27 )
        v27 = v35;
      v38 = *(_DWORD *)(v26 + 1056) + 1;
      v32 = 2 * v29;
      if ( 4 * v38 < 3 * v29 )
      {
        if ( v29 >> 3 < v29 - *(_DWORD *)(v26 + 1060) - v38 )
        {
LABEL_24:
          *(_DWORD *)(v26 + 1056) = v38;
          if ( *(_DWORD *)v27 != -1 )
            --*(_DWORD *)(v26 + 1060);
          *(_DWORD *)v27 = v12;
          *((_QWORD *)v27 + 1) = v31;
          goto LABEL_16;
        }
        v134 = *(_DWORD *)(v26 + 1064);
        v73 = (((((((((v33 | (v33 >> 1)) >> 2) | v33 | (v33 >> 1)) >> 4) | ((v33 | (v33 >> 1)) >> 2) | v33 | (v33 >> 1)) >> 8)
               | ((((v33 | (v33 >> 1)) >> 2) | v33 | (v33 >> 1)) >> 4)
               | ((v33 | (v33 >> 1)) >> 2)
               | v33
               | (v33 >> 1)) >> 16)
             | ((((((v33 | (v33 >> 1)) >> 2) | v33 | (v33 >> 1)) >> 4) | ((v33 | (v33 >> 1)) >> 2) | v33 | (v33 >> 1)) >> 8)
             | ((((v33 | (v33 >> 1)) >> 2) | v33 | (v33 >> 1)) >> 4)
             | ((v33 | (v33 >> 1)) >> 2)
             | v33
             | (v33 >> 1))
            + 1;
        if ( v73 < 0x40 )
          v73 = 64;
        *(_DWORD *)(v26 + 1064) = v73;
        v74 = sub_25CC9C0(16LL * v73, 8);
        v75 = *(unsigned int *)(v26 + 1064);
        *(_QWORD *)(v26 + 1048) = v74;
        v76 = (_DWORD *)v74;
        v77 = 16 * v75;
        v78 = (_DWORD *)(v74 + v77);
        if ( v30 )
        {
          *(_QWORD *)(v26 + 1056) = 0;
          if ( v77 )
          {
            if ( (((_BYTE)v78 - (_BYTE)v76) & 0x10) == 0 || (*v76 = -1, v76 += 4, v76 != v78) )
            {
              do
              {
                *v76 = -1;
                v76 += 8;
                *(v76 - 4) = -1;
              }
              while ( v76 != v78 );
            }
          }
          v79 = v30;
          v136 = v31;
          do
          {
            v80 = *v79;
            if ( (unsigned int)*v79 <= 0xFFFFFFFD )
            {
              v81 = *(_DWORD *)(v26 + 1064);
              if ( !v81 )
              {
                dword_0 = 0;
                BUG();
              }
              v82 = v81 - 1;
              v83 = *(_QWORD *)(v26 + 1048);
              v84 = v82 & (37 * v80);
              v85 = (int *)(v83 + 16LL * v84);
              v86 = *v85;
              if ( *v85 != v80 )
              {
                v129 = 1;
                v130 = nullptr;
                while ( v86 != -1 )
                {
                  if ( !v130 && v86 == -2 )
                    v130 = v85;
                  v131 = v129++;
                  v84 = v82 & (v131 + v84);
                  v85 = (int *)(v83 + 16LL * v84);
                  v86 = *v85;
                  if ( v80 == *v85 )
                    goto LABEL_76;
                }
                if ( v130 )
                  v85 = v130;
              }
LABEL_76:
              *v85 = v80;
              *((_QWORD *)v85 + 1) = *((_QWORD *)v79 + 1);
              ++*(_DWORD *)(v26 + 1056);
            }
            v79 += 4;
          }
          while ( &v30[4 * v134] != v79 );
          v31 = v136;
          operator delete();
        }
        else
        {
          *(_QWORD *)(v26 + 1056) = 0;
          if ( v76 != v78 )
          {
            if ( (((_BYTE)v78 - (_BYTE)v76) & 0x10) == 0 || (*v76 = -1, v76 += 4, v76 != v78) )
            {
              do
              {
                *v76 = -1;
                v76 += 8;
                *(v76 - 4) = -1;
              }
              while ( v76 != v78 );
            }
          }
        }
        v115 = *(_DWORD *)(v26 + 1064);
        v38 = *(_DWORD *)(v26 + 1056) + 1;
        if ( v115 )
        {
          v116 = v115 - 1;
          v117 = *(_QWORD *)(v26 + 1048);
          v118 = 1;
          v119 = nullptr;
          v120 = v116 & (v12 + 4 * (v12 + v138));
          v27 = (std::_V2 *)(v117 + 16LL * v120);
          v121 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 != v12 )
          {
            while ( v121 != -1 )
            {
              if ( !v119 && v121 == -2 )
                v119 = v27;
              v120 = v116 & (v118 + v120);
              v27 = (std::_V2 *)(v117 + 16LL * v120);
              v121 = *(_DWORD *)v27;
              if ( *(_DWORD *)v27 == v12 )
                goto LABEL_24;
              ++v118;
            }
            if ( v119 )
              v27 = v119;
          }
          goto LABEL_24;
        }
      }
      else
      {
LABEL_36:
        v133 = *(_DWORD *)(v26 + 1064);
        v42 = (unsigned int)(v32 - 1) | ((unsigned __int64)(unsigned int)(v32 - 1) >> 1);
        v43 = (((v42 >> 2) | v42) >> 4) | (v42 >> 2) | v42;
        v44 = ((((v43 >> 8) | v43) >> 16) | (v43 >> 8) | v43) + 1;
        if ( (unsigned int)v44 < 0x40 )
          LODWORD(v44) = 64;
        *(_DWORD *)(v26 + 1064) = v44;
        v45 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v44, 8);
        v46 = *(unsigned int *)(v26 + 1064);
        *(_QWORD *)(v26 + 1048) = v45;
        v47 = 16 * v46;
        v48 = &v45[(unsigned __int64)v47 / 4];
        if ( v30 )
        {
          *(_QWORD *)(v26 + 1056) = 0;
          v49 = &v30[4 * v133];
          if ( v47 )
          {
            if ( (v47 & 0x10) == 0 || (*v45 = -1, v45 += 4, v45 != v48) )
            {
              do
              {
                *v45 = -1;
                v45 += 8;
                *(v45 - 4) = -1;
              }
              while ( v45 != v48 );
            }
          }
          v50 = v30;
          if ( v30 != v49 )
          {
            v135 = v31;
            do
            {
              v51 = *v50;
              if ( (unsigned int)*v50 <= 0xFFFFFFFD )
              {
                v52 = *(_DWORD *)(v26 + 1064);
                if ( !v52 )
                {
                  dword_0 = 0;
                  BUG();
                }
                v53 = v52 - 1;
                v54 = 1;
                v55 = nullptr;
                v56 = *(_QWORD *)(v26 + 1048);
                LODWORD(v57) = v53 & (37 * v51);
                v58 = (int *)(v56 + 16LL * (unsigned int)v57);
                v59 = *v58;
                if ( v51 != *v58 )
                {
                  while ( v59 != -1 )
                  {
                    if ( v59 == -2 && !v55 )
                      v55 = v58;
                    v57 = v53 & (unsigned int)(v57 + v54);
                    v58 = (int *)(v56 + 16 * v57);
                    v59 = *v58;
                    if ( v51 == *v58 )
                      goto LABEL_49;
                    ++v54;
                  }
                  if ( v55 )
                    v58 = v55;
                }
LABEL_49:
                *v58 = v51;
                *((_QWORD *)v58 + 1) = *((_QWORD *)v50 + 1);
                ++*(_DWORD *)(v26 + 1056);
              }
              v50 += 4;
            }
            while ( v49 != v50 );
            v31 = v135;
          }
          operator delete();
        }
        else
        {
          *(_QWORD *)(v26 + 1056) = 0;
          if ( v45 != v48 )
          {
            if ( (v47 & 0x10) == 0 || (*v45 = -1, v45 += 4, v45 != v48) )
            {
              do
              {
                *v45 = -1;
                v45 += 8;
                *(v45 - 4) = -1;
              }
              while ( v45 != v48 );
            }
          }
        }
        v101 = *(_DWORD *)(v26 + 1064);
        v38 = *(_DWORD *)(v26 + 1056) + 1;
        if ( v101 )
        {
          v102 = v101 - 1;
          v103 = *(_QWORD *)(v26 + 1048);
          v104 = (v101 - 1) & (v12 + 4 * (v12 + v138));
          v27 = (std::_V2 *)(v103 + 16LL * v104);
          v105 = *(_DWORD *)v27;
          if ( *(_DWORD *)v27 != v12 )
          {
            v106 = 1;
            v107 = nullptr;
            while ( v105 != -1 )
            {
              if ( !v107 && v105 == -2 )
                v107 = v27;
              v104 = v102 & (v106 + v104);
              v27 = (std::_V2 *)(v103 + 16LL * v104);
              v105 = *(_DWORD *)v27;
              if ( *(_DWORD *)v27 == v12 )
                goto LABEL_24;
              ++v106;
            }
            if ( v107 )
              v27 = v107;
          }
          goto LABEL_24;
        }
      }
      ++*(_DWORD *)(v26 + 1056);
      BUG();
    }
    v39 = 1;
    v40 = nullptr;
    while ( v24 != -1 )
    {
      if ( v24 == -2 && !v40 )
        v40 = v23;
      v128 = v39++;
      v22 = v21 & (v128 + v22);
      v23 = &v137[4 * v22];
      v24 = *v23;
      if ( *v23 == v12 )
        goto LABEL_13;
    }
    v19 = 2 * v20;
    if ( !v40 )
      v40 = v23;
    v41 = *(_DWORD *)(v18 + 192) + 1;
    if ( 4 * v41 < 3 * v20 )
    {
      if ( v20 >> 3 < v20 - *(_DWORD *)(v18 + 196) - v41 )
      {
LABEL_33:
        *(_DWORD *)(v18 + 192) = v41;
        if ( *v40 != -1 )
          --*(_DWORD *)(v18 + 196);
        *v40 = v12;
        v25 = v40 + 2;
        *((_QWORD *)v40 + 1) = 0;
        goto LABEL_14;
      }
      v143 = *(_DWORD *)(v18 + 200);
      v141 = *((_QWORD *)v6 + 3);
      v87 = (((((((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4) | ((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 8)
             | ((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
             | ((v21 | (v21 >> 1)) >> 2)
             | v21
             | (v21 >> 1)) >> 16)
           | ((((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4) | ((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 8)
           | ((((v21 | (v21 >> 1)) >> 2) | v21 | (v21 >> 1)) >> 4)
           | ((v21 | (v21 >> 1)) >> 2)
           | v21
           | (v21 >> 1))
          + 1;
      if ( v87 < 0x40 )
        v87 = 64;
      *(_DWORD *)(v18 + 200) = v87;
      v88 = (_DWORD *)sub_25CC9C0(16LL * v87, 8);
      v18 = v141;
      v89 = 37 * v12;
      v90 = *(unsigned int *)(v141 + 200);
      *(_QWORD *)(v141 + 184) = v88;
      v91 = 16 * v90;
      v92 = &v88[(unsigned __int64)v91 / 4];
      if ( v137 )
      {
        *(_QWORD *)(v141 + 192) = 0;
        if ( v91 )
        {
          if ( (v91 & 0x10) == 0 || (*v88 = -1, v88 += 4, v88 != v92) )
          {
            do
            {
              *v88 = -1;
              v88 += 8;
              *(v88 - 4) = -1;
            }
            while ( v88 != v92 );
          }
        }
        v93 = v137;
        do
        {
          v94 = *v93;
          if ( (unsigned int)*v93 <= 0xFFFFFFFD )
          {
            v95 = *(_DWORD *)(v141 + 200);
            if ( !v95 )
            {
              dword_0 = 0;
              BUG();
            }
            v96 = v95 - 1;
            v97 = *(_QWORD *)(v141 + 184);
            v98 = (v95 - 1) & (37 * v94);
            v99 = (int *)(v97 + 16LL * v98);
            v100 = *v99;
            if ( *v99 != v94 )
            {
              v146 = 1;
              v145 = nullptr;
              while ( v100 != -1 )
              {
                if ( v100 == -2 )
                {
                  if ( v145 )
                    v99 = v145;
                  v145 = v99;
                }
                v98 = v96 & (v146 + v98);
                v99 = (int *)(v97 + 16LL * v98);
                v100 = *v99;
                if ( v94 == *v99 )
                  goto LABEL_89;
                ++v146;
              }
              if ( v145 )
                v99 = v145;
            }
LABEL_89:
            *v99 = v94;
            *((_QWORD *)v99 + 1) = *((_QWORD *)v93 + 1);
            ++*(_DWORD *)(v141 + 192);
          }
          v93 += 4;
        }
        while ( &v137[4 * v143] != v93 );
        operator delete();
        v18 = v141;
        v89 = 37 * v12;
      }
      else
      {
        *(_QWORD *)(v141 + 192) = 0;
        if ( v88 != v92 )
        {
          if ( (v91 & 0x10) == 0 || (*v88 = -1, v88 += 4, v88 != v92) )
          {
            do
            {
              *v88 = -1;
              v88 += 8;
              *(v88 - 4) = -1;
            }
            while ( v88 != v92 );
          }
        }
      }
      v122 = *(_DWORD *)(v18 + 200);
      v41 = *(_DWORD *)(v18 + 192) + 1;
      if ( v122 )
      {
        v123 = v122 - 1;
        v124 = *(_QWORD *)(v18 + 184);
        v125 = 1;
        v114 = nullptr;
        v126 = v123 & v89;
        v40 = (int *)(v124 + 16LL * v126);
        v127 = *v40;
        if ( *v40 == v12 )
          goto LABEL_33;
        while ( v127 != -1 )
        {
          if ( v127 == -2 && !v114 )
            v114 = v40;
          v126 = v123 & (v125 + v126);
          v40 = (int *)(v124 + 16LL * v126);
          v127 = *v40;
          if ( *v40 == v12 )
            goto LABEL_33;
          ++v125;
        }
        goto LABEL_104;
      }
    }
    else
    {
LABEL_50:
      v140 = *(_DWORD *)(v18 + 200);
      v139 = *((_QWORD *)v6 + 3);
      v60 = ((((((((((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
                 | (unsigned int)(v19 - 1)
                 | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 4)
               | (((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
               | (unsigned int)(v19 - 1)
               | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 8)
             | (((((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
               | (unsigned int)(v19 - 1)
               | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 4)
             | (((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
             | (unsigned int)(v19 - 1)
             | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 16)
           | (((((((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
               | (unsigned int)(v19 - 1)
               | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 4)
             | (((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
             | (unsigned int)(v19 - 1)
             | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
             | (unsigned int)(v19 - 1)
             | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 4)
           | (((unsigned int)(v19 - 1) | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1)) >> 2)
           | (unsigned int)(v19 - 1)
           | ((unsigned __int64)(unsigned int)(v19 - 1) >> 1))
          + 1;
      if ( (unsigned int)v60 < 0x40 )
        LODWORD(v60) = 64;
      *(_DWORD *)(v18 + 200) = v60;
      v61 = (_DWORD *)sub_25CC9C0(16LL * (unsigned int)v60, 8);
      v18 = v139;
      v62 = *(unsigned int *)(v139 + 200);
      *(_QWORD *)(v139 + 184) = v61;
      v63 = &v61[4 * v62];
      if ( v137 )
      {
        *(_QWORD *)(v139 + 192) = 0;
        v64 = &v137[4 * v140];
        if ( 16 * v62 )
        {
          if ( ((16 * (_BYTE)v62) & 0x10) == 0 || (*v61 = -1, v61 += 4, v61 != v63) )
          {
            do
            {
              *v61 = -1;
              v61 += 8;
              *(v61 - 4) = -1;
            }
            while ( v61 != v63 );
          }
        }
        for ( i = v137; v64 != i; i += 4 )
        {
          v66 = *i;
          if ( (unsigned int)*i <= 0xFFFFFFFD )
          {
            v67 = *(_DWORD *)(v139 + 200);
            if ( !v67 )
            {
              dword_0 = 0;
              BUG();
            }
            v68 = v67 - 1;
            v69 = *(_QWORD *)(v139 + 184);
            v70 = (v67 - 1) & (37 * v66);
            v71 = (int *)(v69 + 16LL * v70);
            v72 = *v71;
            if ( v66 != *v71 )
            {
              v144 = 1;
              v142 = nullptr;
              while ( v72 != -1 )
              {
                if ( v72 == -2 )
                {
                  if ( v142 )
                    v71 = v142;
                  v142 = v71;
                }
                v70 = v68 & (v144 + v70);
                v71 = (int *)(v69 + 16LL * v70);
                v72 = *v71;
                if ( v66 == *v71 )
                  goto LABEL_63;
                ++v144;
              }
              if ( v142 )
                v71 = v142;
            }
LABEL_63:
            *v71 = v66;
            *((_QWORD *)v71 + 1) = *((_QWORD *)i + 1);
            ++*(_DWORD *)(v139 + 192);
          }
        }
        operator delete();
        v18 = v139;
      }
      else
      {
        *(_QWORD *)(v139 + 192) = 0;
        if ( v61 != v63 )
        {
          if ( ((16 * (_BYTE)v62) & 0x10) == 0 || (*v61 = -1, v61 += 4, v61 != v63) )
          {
            do
            {
              *v61 = -1;
              v61 += 8;
              *(v61 - 4) = -1;
            }
            while ( v61 != v63 );
          }
        }
      }
      v108 = *(_DWORD *)(v18 + 200);
      v41 = *(_DWORD *)(v18 + 192) + 1;
      if ( v108 )
      {
        v109 = v108 - 1;
        v110 = *(_QWORD *)(v18 + 184);
        v138 = 8 * v12;
        v111 = v109 & (37 * v12);
        v40 = (int *)(v110 + 16LL * v111);
        v112 = *v40;
        if ( *v40 == v12 )
          goto LABEL_33;
        v113 = 1;
        v114 = nullptr;
        while ( v112 != -1 )
        {
          if ( !v114 && v112 == -2 )
            v114 = v40;
          v111 = v109 & (v113 + v111);
          v40 = (int *)(v110 + 16LL * v111);
          v112 = *v40;
          if ( *v40 == v12 )
            goto LABEL_33;
          ++v113;
        }
LABEL_104:
        if ( v114 )
          v40 = v114;
        goto LABEL_33;
      }
    }
    ++*(_DWORD *)(v18 + 192);
    BUG();
  }
  v7 = *((_DWORD **)a1 + 1);
  if ( v7 )
    *v7 = 3;
  v8 = *((_QWORD **)a1 + 2);
  if ( v8 )
  {
    a1 = "Out-of-bounds string in filename";
    a2 = 32;
    *v8 = sub_6905C0("Out-of-bounds string in filename", 0x20u);
    v8[1] = a3;
  }
  v9 = 13;
  sub_10DF5B0(a1, a2, a3, a4, a5, a6);
  return v9;
}

