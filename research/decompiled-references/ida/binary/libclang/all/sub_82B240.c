__int64 __fastcall sub_82B240(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  char v5; // al
  unsigned int v8; // r14d
  __int64 v10; // rbp
  __int64 v11; // r13
  int v12; // edi
  unsigned int v13; // edx
  __int64 v14; // r11
  unsigned __int64 v15; // rsi
  int v16; // r10d
  unsigned int v17; // r8d
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r13
  unsigned __int64 v23; // rdx
  __int64 v24; // r13
  int v25; // edi
  unsigned int v26; // edx
  __int64 v27; // r11
  unsigned __int64 v28; // rsi
  int v29; // r10d
  _QWORD *v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rdi
  unsigned __int8 **v34; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  int v39; // eax
  unsigned __int64 v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rcx
  int v43; // edi
  __int64 v44; // rcx
  _QWORD *v45; // rsi
  __int64 *v46; // r10
  __int64 *v47; // rax
  __int64 v48; // r14
  __int64 v49; // rdx
  int v50; // esi
  int v51; // esi
  __int64 v52; // rbp
  unsigned int v53; // ecx
  __int64 *v54; // r8
  __int64 v55; // r9
  int v56; // edx
  __int64 v57; // rdi
  __int64 v58; // r8
  int v59; // r11d
  _QWORD *v60; // r10
  unsigned __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rcx
  int v64; // esi
  __int64 v65; // rcx
  _QWORD *v66; // rdi
  __int64 *v67; // r10
  __int64 *v68; // rax
  __int64 v69; // r14
  __int64 v70; // rdx
  int v71; // r8d
  int v72; // r8d
  __int64 v73; // rbp
  unsigned int v74; // edi
  _QWORD *v75; // rcx
  __int64 v76; // r9
  int v77; // edx
  __int64 v78; // rsi
  __int64 v79; // r8
  int v80; // r11d
  _QWORD *v81; // r10
  unsigned __int64 v82; // rax
  __int64 v83; // rax
  _QWORD *v84; // rax
  __int64 v85; // rcx
  unsigned int v86; // r9d
  int v87; // edi
  __int64 v88; // rcx
  _QWORD *v89; // rsi
  __int64 *v90; // r10
  __int64 *v91; // rax
  __int64 v92; // rsi
  int v93; // r8d
  int v94; // r8d
  __int64 v95; // rbp
  unsigned int v96; // ecx
  _QWORD *v97; // rdx
  __int64 v98; // r11
  int v99; // edi
  int v100; // r11d
  __int64 v101; // rdx
  __int64 v102; // r8
  unsigned __int64 v103; // rax
  __int64 v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rcx
  unsigned int v107; // r9d
  int v108; // esi
  __int64 v109; // rcx
  _QWORD *v110; // rdi
  __int64 *v111; // r10
  __int64 *v112; // rax
  __int64 v113; // r8
  int v114; // ecx
  int v115; // ecx
  __int64 v116; // rbp
  unsigned int v117; // edx
  __int64 *v118; // rdi
  __int64 v119; // r11
  int v120; // esi
  int v121; // r11d
  __int64 v122; // rdx
  __int64 v123; // r8
  int v124; // [rsp+8h] [rbp-60h]
  __int64 *v126; // [rsp+10h] [rbp-58h]
  unsigned int v127; // [rsp+10h] [rbp-58h]
  __int64 *v128; // [rsp+10h] [rbp-58h]
  unsigned int v129; // [rsp+10h] [rbp-58h]
  __int64 *v130; // [rsp+10h] [rbp-58h]
  unsigned int v131; // [rsp+10h] [rbp-58h]
  __int64 *v132; // [rsp+10h] [rbp-58h]
  unsigned int v133; // [rsp+10h] [rbp-58h]
  unsigned int v134; // [rsp+18h] [rbp-50h]
  unsigned int v135; // [rsp+18h] [rbp-50h]
  unsigned int v136; // [rsp+18h] [rbp-50h]
  __int64 v137; // [rsp+18h] [rbp-50h]
  unsigned int v138; // [rsp+18h] [rbp-50h]
  __int64 v139; // [rsp+18h] [rbp-50h]
  _QWORD *v140; // [rsp+18h] [rbp-50h]
  __int64 *v141; // [rsp+18h] [rbp-50h]
  int v142; // [rsp+20h] [rbp-48h]
  int v143; // [rsp+20h] [rbp-48h]
  _QWORD *v144; // [rsp+20h] [rbp-48h]
  __int64 *v145; // [rsp+20h] [rbp-48h]
  int v146; // [rsp+28h] [rbp-40h]
  int v147; // [rsp+28h] [rbp-40h]

  v124 = *(_DWORD *)(a3 + 56);
  if ( a5 != v124 )
  {
    v5 = *(_BYTE *)(a3 + 24);
    if ( (v5 & 1) != 0 )
      return 0;
    if ( (*(_BYTE *)(a3 + 128) & 1) != 0 )
    {
      v34 = (unsigned __int8 **)sub_A2E240(a1, a2, 2259, 0);
      if ( !v34 )
      {
LABEL_27:
        *(_BYTE *)(a3 + 24) |= 1u;
        *(_DWORD *)(a3 + 56) = 0;
        return 0;
      }
LABEL_26:
      sub_823450(v34, 1);
      goto LABEL_27;
    }
    if ( (v5 & 2) != 0 )
    {
LABEL_166:
      v34 = (unsigned __int8 **)sub_A2E240(a1, a2, 2264, 0);
      if ( !v34 )
        goto LABEL_27;
      goto LABEL_26;
    }
    if ( (v124 != 1 || (v5 & 4) == 0) && (v5 & 8) != 0 )
    {
      v8 = a5;
      if ( *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * ((*(_DWORD *)(a3 + 24) >> 4) - 1)) != *(_QWORD *)(a3 + 32) )
        goto LABEL_15;
      goto LABEL_166;
    }
    v8 = a5;
    while ( 1 )
    {
LABEL_15:
      if ( *(char *)(a4 + 28) < 0 )
        return 0;
      v22 = sub_AB4240(*(_QWORD *)(a1 + 16), a4);
      v23 = *(_QWORD *)(*(_QWORD *)(a3 + 48) + 8LL * v8);
      a4 = v23 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v23 <= 7 )
      {
        a4 = 0;
      }
      else if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 57 >= 3 )
      {
        a4 = 0;
      }
      v10 = *(_QWORD *)(a4 + 128);
      if ( (v23 & 4) != 0 )
      {
        if ( v10
          || (sub_8226C0((__int64 *)(*(_QWORD *)(a4 + 104) + 96LL), *(_QWORD *)(a4 + 104)),
              (v10 = *(_QWORD *)(a4 + 128)) != 0) )
        {
          v10 = *(_QWORD *)(v10 + 88);
        }
        v11 = *(_QWORD *)(v22 + 72);
        v12 = 0;
        v13 = *(_DWORD *)(v11 + 104);
        v14 = *(_QWORD *)(v11 + 88);
        if ( !v13 )
          goto LABEL_70;
        v15 = v13 - 1;
        v16 = 1;
        v17 = v15 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        v18 = (_QWORD *)(v14 + 24LL * v17);
        v19 = nullptr;
        v20 = *v18;
        if ( v10 != *v18 )
        {
          while ( v20 != -4096 )
          {
            if ( v20 == -8192 && !v19 )
              v19 = v18;
            v17 = v15 & (v16 + v17);
            v18 = (_QWORD *)(v14 + 24LL * v17);
            v20 = *v18;
            if ( v10 == *v18 )
              goto LABEL_13;
            ++v16;
          }
          if ( !v19 )
            v19 = v18;
          v38 = *(_DWORD *)(v11 + 96) + 1;
          v12 = 2 * v13;
          if ( 4 * v38 < 3 * v13 )
          {
            if ( v13 >> 3 >= v13 - *(_DWORD *)(v11 + 100) - v38 )
            {
              v138 = *(_DWORD *)(v11 + 104);
              v132 = *(__int64 **)(v11 + 88);
              v103 = ((((v15 | (v15 >> 1)) >> 2) | v15 | (v15 >> 1)) >> 4)
                   | ((v15 | (v15 >> 1)) >> 2)
                   | v15
                   | (v15 >> 1);
              v104 = ((((v103 >> 8) | v103) >> 16) | (v103 >> 8) | v103) + 1;
              if ( (unsigned int)v104 < 0x40 )
                LODWORD(v104) = 64;
              *(_DWORD *)(v11 + 104) = v104;
              v105 = (_QWORD *)sub_25CC9C0(24LL * (unsigned int)v104, 8);
              v106 = *(unsigned int *)(v11 + 104);
              v107 = ((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4);
              *(_QWORD *)(v11 + 88) = v105;
              v108 = v106;
              v109 = 24 * v106;
              v110 = &v105[(unsigned __int64)v109 / 8];
              if ( v132 )
              {
                *(_QWORD *)(v11 + 96) = 0;
                v111 = &v132[3 * v138];
                if ( v109 )
                {
                  if ( (v109 & 8) == 0 || (*v105 = -4096, v105 += 3, v105 != v110) )
                  {
                    do
                    {
                      *v105 = -4096;
                      v105 += 6;
                      *(v105 - 3) = -4096;
                    }
                    while ( v105 != v110 );
                  }
                }
                v139 = v10;
                v112 = v132;
                do
                {
                  v113 = *v112;
                  if ( *v112 != -4096 && v113 != -8192 )
                  {
                    v114 = *(_DWORD *)(v11 + 104);
                    if ( !v114 )
                    {
                      *(_QWORD *)&dword_0 = *v112;
                      BUG();
                    }
                    v115 = v114 - 1;
                    v116 = *(_QWORD *)(v11 + 88);
                    v117 = v115 & (((unsigned int)v113 >> 9) ^ ((unsigned int)v113 >> 4));
                    v118 = (__int64 *)(v116 + 24LL * v117);
                    v119 = *v118;
                    if ( v113 != *v118 )
                    {
                      v147 = 1;
                      v145 = nullptr;
                      while ( v119 != -4096 )
                      {
                        if ( v119 == -8192 )
                        {
                          if ( v145 )
                            v118 = v145;
                          v145 = v118;
                        }
                        v117 = v115 & (v147 + v117);
                        v118 = (__int64 *)(v116 + 24LL * v117);
                        v119 = *v118;
                        if ( v113 == *v118 )
                          goto LABEL_155;
                        ++v147;
                      }
                      if ( v145 )
                        v118 = v145;
                    }
LABEL_155:
                    *v118 = v113;
                    *(__m128i *)(v118 + 1) = _mm_loadu_si128((const __m128i *)(v112 + 1));
                    ++*(_DWORD *)(v11 + 96);
                  }
                  v112 += 3;
                }
                while ( v111 != v112 );
                v10 = v139;
                v133 = v107;
                operator delete();
                v110 = *(_QWORD **)(v11 + 88);
                v108 = *(_DWORD *)(v11 + 104);
                v107 = v133;
                v38 = *(_DWORD *)(v11 + 96) + 1;
              }
              else
              {
                *(_QWORD *)(v11 + 96) = 0;
                if ( v105 == v110 )
                {
                  v38 = 1;
                }
                else
                {
                  if ( (v109 & 8) == 0 || (*v105 = -4096, v105 += 3, v105 != v110) )
                  {
                    do
                    {
                      *v105 = -4096;
                      v105 += 6;
                      *(v105 - 3) = -4096;
                    }
                    while ( v105 != v110 );
                  }
                  v110 = *(_QWORD **)(v11 + 88);
                  v108 = *(_DWORD *)(v11 + 104);
                  v38 = *(_DWORD *)(v11 + 96) + 1;
                }
              }
              if ( !v108 )
              {
LABEL_249:
                *(_DWORD *)(v11 + 96) = v38;
                BUG();
              }
              v120 = v108 - 1;
              v121 = 1;
              v60 = nullptr;
              LODWORD(v122) = v120 & v107;
              v19 = &v110[3 * (v120 & v107)];
              v123 = *v19;
              if ( v10 != *v19 )
              {
                while ( v123 != -4096 )
                {
                  if ( v123 == -8192 && !v60 )
                    v60 = v19;
                  v122 = v120 & (unsigned int)(v122 + v121);
                  v19 = &v110[3 * v122];
                  v123 = *v19;
                  if ( v10 == *v19 )
                    goto LABEL_49;
                  ++v121;
                }
                goto LABEL_92;
              }
            }
            goto LABEL_49;
          }
LABEL_70:
          v134 = *(_DWORD *)(v11 + 104);
          v126 = *(__int64 **)(v11 + 88);
          v40 = ((((((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                     | (unsigned int)(v12 - 1)
                     | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
                   | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                   | (unsigned int)(v12 - 1)
                   | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
                 | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                   | (unsigned int)(v12 - 1)
                   | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                 | (unsigned int)(v12 - 1)
                 | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 16)
               | (((((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                   | (unsigned int)(v12 - 1)
                   | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                 | (unsigned int)(v12 - 1)
                 | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 8)
               | (((((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
                 | (unsigned int)(v12 - 1)
                 | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 4)
               | (((unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1)) >> 2)
               | (unsigned int)(v12 - 1)
               | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1))
              + 1;
          if ( (unsigned int)v40 < 0x40 )
            LODWORD(v40) = 64;
          *(_DWORD *)(v11 + 104) = v40;
          v41 = (_QWORD *)sub_25CC9C0(24LL * (unsigned int)v40, 8);
          v42 = *(unsigned int *)(v11 + 104);
          *(_QWORD *)(v11 + 88) = v41;
          v43 = v42;
          v44 = 24 * v42;
          v45 = &v41[(unsigned __int64)v44 / 8];
          if ( v126 )
          {
            *(_QWORD *)(v11 + 96) = 0;
            v46 = &v126[3 * v134];
            if ( v44 )
            {
              if ( (v44 & 8) == 0 || (*v41 = -4096, v41 += 3, v41 != v45) )
              {
                do
                {
                  *v41 = -4096;
                  v41 += 6;
                  *(v41 - 3) = -4096;
                }
                while ( v41 != v45 );
              }
            }
            v47 = v126;
            if ( v126 != v46 )
            {
              v127 = v8;
              v48 = v10;
              do
              {
                v49 = *v47;
                if ( *v47 != -4096 && v49 != -8192 )
                {
                  v50 = *(_DWORD *)(v11 + 104);
                  if ( !v50 )
                  {
                    *(_QWORD *)&dword_0 = *v47;
                    BUG();
                  }
                  v51 = v50 - 1;
                  v52 = *(_QWORD *)(v11 + 88);
                  v53 = v51 & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
                  v54 = (__int64 *)(v52 + 24LL * v53);
                  v55 = *v54;
                  if ( v49 != *v54 )
                  {
                    v143 = 1;
                    v141 = nullptr;
                    while ( v55 != -4096 )
                    {
                      if ( v55 == -8192 )
                      {
                        if ( v141 )
                          v54 = v141;
                        v141 = v54;
                      }
                      v53 = v51 & (v143 + v53);
                      v54 = (__int64 *)(v52 + 24LL * v53);
                      v55 = *v54;
                      if ( v49 == *v54 )
                        goto LABEL_83;
                      ++v143;
                    }
                    if ( v141 )
                      v54 = v141;
                  }
LABEL_83:
                  *v54 = v49;
                  *(__m128i *)(v54 + 1) = _mm_loadu_si128((const __m128i *)(v47 + 1));
                  ++*(_DWORD *)(v11 + 96);
                }
                v47 += 3;
              }
              while ( v46 != v47 );
              v10 = v48;
              v8 = v127;
            }
            operator delete();
LABEL_87:
            v45 = *(_QWORD **)(v11 + 88);
            v43 = *(_DWORD *)(v11 + 104);
            v38 = *(_DWORD *)(v11 + 96) + 1;
          }
          else
          {
            *(_QWORD *)(v11 + 96) = 0;
            if ( v41 != v45 )
            {
              if ( (v44 & 8) == 0 || (*v41 = -4096, v41 += 3, v41 != v45) )
              {
                do
                {
                  *v41 = -4096;
                  v41 += 6;
                  *(v41 - 3) = -4096;
                }
                while ( v41 != v45 );
              }
              goto LABEL_87;
            }
            v38 = 1;
          }
          if ( !v43 )
            goto LABEL_249;
          v56 = v43 - 1;
          LODWORD(v57) = (v43 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
          v19 = &v45[3 * (unsigned int)v57];
          v58 = *v19;
          if ( v10 != *v19 )
          {
            v59 = 1;
            v60 = nullptr;
            while ( v58 != -4096 )
            {
              if ( v58 == -8192 && !v60 )
                v60 = v19;
              v57 = v56 & (unsigned int)(v57 + v59);
              v19 = &v45[3 * v57];
              v58 = *v19;
              if ( v10 == *v19 )
                goto LABEL_49;
              ++v59;
            }
LABEL_92:
            if ( v60 )
              v19 = v60;
          }
LABEL_49:
          *(_DWORD *)(v11 + 96) = v38;
          if ( *v19 != -4096 )
            --*(_DWORD *)(v11 + 100);
          *v19 = v10;
          v21 = 0;
          v19[1] = 0;
          *((_BYTE *)v19 + 16) = 0;
          goto LABEL_14;
        }
LABEL_13:
        v21 = v18[1];
      }
      else
      {
        if ( v10
          || (sub_8226C0((__int64 *)(*(_QWORD *)(a4 + 104) + 96LL), *(_QWORD *)(a4 + 104)),
              (v10 = *(_QWORD *)(a4 + 128)) != 0) )
        {
          v10 = *(_QWORD *)(v10 + 88);
        }
        v24 = *(_QWORD *)(v22 + 72);
        v25 = 0;
        v26 = *(_DWORD *)(v24 + 80);
        v27 = *(_QWORD *)(v24 + 64);
        if ( !v26 )
          goto LABEL_95;
        v28 = v26 - 1;
        v29 = 1;
        v30 = nullptr;
        LODWORD(v31) = v28 & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
        v32 = (_QWORD *)(v27 + 16LL * (unsigned int)v31);
        v33 = *v32;
        if ( v10 != *v32 )
        {
          while ( v33 != -4096 )
          {
            if ( v33 == -8192 && !v30 )
              v30 = v32;
            v31 = (unsigned int)v28 & ((_DWORD)v31 + v29);
            v32 = (_QWORD *)(v27 + 16 * v31);
            v33 = *v32;
            if ( v10 == *v32 )
              goto LABEL_24;
            ++v29;
          }
          v25 = 2 * v26;
          if ( !v30 )
            v30 = v32;
          v39 = *(_DWORD *)(v24 + 72) + 1;
          if ( 4 * v39 < 3 * v26 )
          {
            if ( v26 >> 3 >= v26 - *(_DWORD *)(v24 + 76) - v39 )
            {
              v136 = *(_DWORD *)(v24 + 80);
              v130 = *(__int64 **)(v24 + 64);
              v82 = ((((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1)) >> 4) | ((v28 | (v28 >> 1)) >> 2) | v28 | (v28 >> 1);
              v83 = ((((v82 >> 8) | v82) >> 16) | (v82 >> 8) | v82) + 1;
              if ( (unsigned int)v83 < 0x40 )
                LODWORD(v83) = 64;
              *(_DWORD *)(v24 + 80) = v83;
              v84 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v83, 8);
              v85 = *(unsigned int *)(v24 + 80);
              v86 = ((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4);
              *(_QWORD *)(v24 + 64) = v84;
              v87 = v85;
              v88 = 16 * v85;
              v89 = &v84[(unsigned __int64)v88 / 8];
              if ( v130 )
              {
                *(_QWORD *)(v24 + 72) = 0;
                v90 = &v130[2 * v136];
                if ( v88 )
                {
                  if ( (v88 & 0x10) == 0 || (*v84 = -4096, v84 += 2, v84 != v89) )
                  {
                    do
                    {
                      *v84 = -4096;
                      v84 += 4;
                      *(v84 - 2) = -4096;
                    }
                    while ( v84 != v89 );
                  }
                }
                v137 = v10;
                v91 = v130;
                do
                {
                  v92 = *v91;
                  if ( *v91 != -4096 && v92 != -8192 )
                  {
                    v93 = *(_DWORD *)(v24 + 80);
                    if ( !v93 )
                    {
                      *(_QWORD *)&dword_0 = *v91;
                      BUG();
                    }
                    v94 = v93 - 1;
                    v95 = *(_QWORD *)(v24 + 64);
                    v96 = v94 & (((unsigned int)v92 >> 9) ^ ((unsigned int)v92 >> 4));
                    v97 = (_QWORD *)(v95 + 16LL * v96);
                    v98 = *v97;
                    if ( *v97 != v92 )
                    {
                      v146 = 1;
                      v144 = nullptr;
                      while ( v98 != -4096 )
                      {
                        if ( v98 == -8192 )
                        {
                          if ( v144 )
                            v97 = v144;
                          v144 = v97;
                        }
                        v96 = v94 & (v146 + v96);
                        v97 = (_QWORD *)(v95 + 16LL * v96);
                        v98 = *v97;
                        if ( v92 == *v97 )
                          goto LABEL_132;
                        ++v146;
                      }
                      if ( v144 )
                        v97 = v144;
                    }
LABEL_132:
                    *v97 = v92;
                    v97[1] = v91[1];
                    ++*(_DWORD *)(v24 + 72);
                  }
                  v91 += 2;
                }
                while ( v90 != v91 );
                v131 = v86;
                v10 = v137;
                operator delete();
                v89 = *(_QWORD **)(v24 + 64);
                v87 = *(_DWORD *)(v24 + 80);
                v86 = v131;
                v39 = *(_DWORD *)(v24 + 72) + 1;
              }
              else
              {
                *(_QWORD *)(v24 + 72) = 0;
                if ( v84 == v89 )
                {
                  v39 = 1;
                }
                else
                {
                  if ( (v88 & 0x10) == 0 || (*v84 = -4096, v84 += 2, v84 != v89) )
                  {
                    do
                    {
                      *v84 = -4096;
                      v84 += 4;
                      *(v84 - 2) = -4096;
                    }
                    while ( v84 != v89 );
                  }
                  v89 = *(_QWORD **)(v24 + 64);
                  v87 = *(_DWORD *)(v24 + 80);
                  v39 = *(_DWORD *)(v24 + 72) + 1;
                }
              }
              if ( !v87 )
              {
LABEL_246:
                *(_DWORD *)(v24 + 72) = v39;
                BUG();
              }
              v99 = v87 - 1;
              v100 = 1;
              v81 = nullptr;
              LODWORD(v101) = v99 & v86;
              v30 = &v89[2 * (v99 & v86)];
              v102 = *v30;
              if ( v10 != *v30 )
              {
                while ( v102 != -4096 )
                {
                  if ( !v81 && v102 == -8192 )
                    v81 = v30;
                  v101 = v99 & (unsigned int)(v101 + v100);
                  v30 = &v89[2 * v101];
                  v102 = *v30;
                  if ( v10 == *v30 )
                    goto LABEL_62;
                  ++v100;
                }
                goto LABEL_117;
              }
            }
            goto LABEL_62;
          }
LABEL_95:
          v135 = *(_DWORD *)(v24 + 80);
          v128 = *(__int64 **)(v24 + 64);
          v61 = ((((((((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                     | (unsigned int)(v25 - 1)
                     | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
                   | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                   | (unsigned int)(v25 - 1)
                   | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 8)
                 | (((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                   | (unsigned int)(v25 - 1)
                   | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                 | (unsigned int)(v25 - 1)
                 | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 16)
               | (((((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                   | (unsigned int)(v25 - 1)
                   | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
                 | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                 | (unsigned int)(v25 - 1)
                 | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 8)
               | (((((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
                 | (unsigned int)(v25 - 1)
                 | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 4)
               | (((unsigned int)(v25 - 1) | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1)) >> 2)
               | (unsigned int)(v25 - 1)
               | ((unsigned __int64)(unsigned int)(v25 - 1) >> 1))
              + 1;
          if ( (unsigned int)v61 < 0x40 )
            LODWORD(v61) = 64;
          *(_DWORD *)(v24 + 80) = v61;
          v62 = (_QWORD *)sub_25CC9C0(16LL * (unsigned int)v61, 8);
          v63 = *(unsigned int *)(v24 + 80);
          *(_QWORD *)(v24 + 64) = v62;
          v64 = v63;
          v65 = 16 * v63;
          v66 = &v62[(unsigned __int64)v65 / 8];
          if ( v128 )
          {
            *(_QWORD *)(v24 + 72) = 0;
            v67 = &v128[2 * v135];
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
            v68 = v128;
            if ( v128 != v67 )
            {
              v129 = v8;
              v69 = v10;
              do
              {
                v70 = *v68;
                if ( *v68 != -4096 && v70 != -8192 )
                {
                  v71 = *(_DWORD *)(v24 + 80);
                  if ( !v71 )
                  {
                    *(_QWORD *)&dword_0 = *v68;
                    BUG();
                  }
                  v72 = v71 - 1;
                  v73 = *(_QWORD *)(v24 + 64);
                  v74 = v72 & (((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4));
                  v75 = (_QWORD *)(v73 + 16LL * v74);
                  v76 = *v75;
                  if ( v70 != *v75 )
                  {
                    v142 = 1;
                    v140 = nullptr;
                    while ( v76 != -4096 )
                    {
                      if ( v76 == -8192 )
                      {
                        if ( v140 )
                          v75 = v140;
                        v140 = v75;
                      }
                      v74 = v72 & (v142 + v74);
                      v75 = (_QWORD *)(v73 + 16LL * v74);
                      v76 = *v75;
                      if ( v70 == *v75 )
                        goto LABEL_108;
                      ++v142;
                    }
                    if ( v140 )
                      v75 = v140;
                  }
LABEL_108:
                  *v75 = v70;
                  v75[1] = v68[1];
                  ++*(_DWORD *)(v24 + 72);
                }
                v68 += 2;
              }
              while ( v67 != v68 );
              v10 = v69;
              v8 = v129;
            }
            operator delete();
LABEL_112:
            v66 = *(_QWORD **)(v24 + 64);
            v64 = *(_DWORD *)(v24 + 80);
            v39 = *(_DWORD *)(v24 + 72) + 1;
          }
          else
          {
            *(_QWORD *)(v24 + 72) = 0;
            if ( v62 != v66 )
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
              goto LABEL_112;
            }
            v39 = 1;
          }
          if ( !v64 )
            goto LABEL_246;
          v77 = v64 - 1;
          LODWORD(v78) = (v64 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
          v30 = &v66[2 * (unsigned int)v78];
          v79 = *v30;
          if ( *v30 != v10 )
          {
            v80 = 1;
            v81 = nullptr;
            while ( v79 != -4096 )
            {
              if ( !v81 && v79 == -8192 )
                v81 = v30;
              v78 = v77 & (unsigned int)(v78 + v80);
              v30 = &v66[2 * v78];
              v79 = *v30;
              if ( v10 == *v30 )
                goto LABEL_62;
              ++v80;
            }
LABEL_117:
            if ( v81 )
              v30 = v81;
          }
LABEL_62:
          *(_DWORD *)(v24 + 72) = v39;
          if ( *v30 != -4096 )
            --*(_DWORD *)(v24 + 76);
          *v30 = v10;
          v21 = 0;
          v30[1] = 0;
          goto LABEL_14;
        }
LABEL_24:
        v21 = v32[1];
      }
LABEL_14:
      ++v8;
      *(_QWORD *)(a3 + 16) -= v21;
      if ( v124 == v8 )
      {
        v36 = *(unsigned int *)(a3 + 56);
        if ( a5 != v36 )
        {
          if ( a5 >= v36 )
          {
            if ( *(unsigned int *)(a3 + 60) < (unsigned __int64)a5 )
            {
              sub_25D6060(a3 + 48, a3 + 64, a5, 8);
              v36 = *(unsigned int *)(a3 + 56);
            }
            v37 = 8 * v36;
            if ( v37 != 8LL * a5 )
              memset((void *)(v37 + *(_QWORD *)(a3 + 48)), 0, 8LL * a5 - v37);
          }
          *(_DWORD *)(a3 + 56) = a5;
        }
        return 1;
      }
    }
  }
  return 1;
}

