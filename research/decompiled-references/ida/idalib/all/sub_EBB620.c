__int64 __fastcall sub_EBB620(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 result; // rax
  _DWORD *v8; // r15
  __int64 v9; // r15
  unsigned __int64 v10; // r10
  char v11; // bp
  unsigned __int64 v12; // r13
  int *v13; // r11
  unsigned int *v14; // rbp
  _DWORD *v15; // rsi
  int v16; // edx
  __int64 v17; // r8
  unsigned int *v18; // rax
  unsigned int v19; // edi
  int *v20; // rdi
  __int64 v21; // r11
  __int64 v22; // r10
  unsigned int v23; // ebx
  int v24; // r12d
  __int64 v25; // rcx
  unsigned int v26; // r14d
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r9
  unsigned int *v30; // r14
  int v31; // edx
  unsigned int v32; // esi
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // ebp
  bool v37; // al
  unsigned __int64 v38; // rbp
  unsigned int v39; // r12d
  int v40; // eax
  unsigned int v41; // ecx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rdi
  _DWORD *v46; // rax
  __int64 v47; // rcx
  _DWORD *v48; // r9
  bool v49; // zf
  __int64 v50; // rdx
  _DWORD *m; // rdx
  _DWORD *v52; // r14
  _DWORD *v53; // rax
  int *v54; // r9
  unsigned int v55; // ebp
  _DWORD *v56; // rbx
  int v57; // eax
  _DWORD *v58; // rsi
  int v59; // ecx
  unsigned int v60; // r8d
  int *v61; // rdx
  int v62; // edi
  void *v63; // rdi
  int v64; // esi
  _DWORD *v65; // rsi
  int v66; // ecx
  unsigned int v67; // r8d
  unsigned int v68; // edi
  int v69; // r9d
  unsigned int *v70; // r14
  int v71; // eax
  int v72; // eax
  int v73; // ecx
  int v74; // eax
  __int64 v75; // rax
  int v76; // ecx
  _DWORD *v77; // rax
  __int64 v78; // rcx
  _DWORD *v79; // r9
  __int64 v80; // rdx
  _DWORD *k; // rdx
  _DWORD *v82; // r14
  unsigned int v83; // ebp
  _DWORD *v84; // rbx
  int v85; // eax
  _DWORD *v86; // rsi
  int v87; // ecx
  unsigned int v88; // r8d
  int *v89; // rdx
  int v90; // edi
  void *v91; // rdi
  char v92; // si
  _DWORD *v93; // rsi
  int v94; // ecx
  unsigned int v95; // edi
  unsigned int v96; // r8d
  int v97; // r9d
  int v98; // ecx
  int v99; // ecx
  int v100; // eax
  void **v101; // r14
  int v102; // eax
  int v103; // eax
  int v104; // eax
  __int64 v105; // rdx
  _DWORD *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rdx
  _DWORD *v110; // rdx
  void **i; // rax
  int v112; // edx
  _DWORD *v113; // rdi
  int v114; // esi
  unsigned int v115; // r9d
  int v116; // r8d
  int v117; // esi
  void **v118; // r14
  int v119; // eax
  int v120; // eax
  int v121; // eax
  __int64 v122; // rcx
  char v123; // si
  _DWORD *v124; // rax
  __int64 v125; // rdx
  _DWORD *v126; // rdx
  void **j; // rax
  int v128; // edx
  _DWORD *v129; // rdi
  int v130; // esi
  unsigned int v131; // r8d
  int v132; // r9d
  int v133; // esi
  __int64 v134; // rax
  __int64 v135; // rax
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  __int64 v138; // rcx
  __int64 v139; // rdi
  _DWORD *v140; // [rsp+8h] [rbp-120h]
  int *v141; // [rsp+10h] [rbp-118h]
  __int64 v142; // [rsp+18h] [rbp-110h]
  __int64 v143; // [rsp+20h] [rbp-108h]
  _DWORD *v144; // [rsp+20h] [rbp-108h]
  __int64 v145; // [rsp+20h] [rbp-108h]
  _DWORD *v146; // [rsp+20h] [rbp-108h]
  __int64 v147; // [rsp+20h] [rbp-108h]
  __int64 v148; // [rsp+20h] [rbp-108h]
  __int64 v149; // [rsp+20h] [rbp-108h]
  __int64 v150; // [rsp+28h] [rbp-100h]
  unsigned int v151; // [rsp+28h] [rbp-100h]
  __int64 v152; // [rsp+28h] [rbp-100h]
  __int64 v153; // [rsp+28h] [rbp-100h]
  __int64 v154; // [rsp+28h] [rbp-100h]
  __int64 v155; // [rsp+28h] [rbp-100h]
  int v156; // [rsp+28h] [rbp-100h]
  int v157; // [rsp+28h] [rbp-100h]
  unsigned int v158; // [rsp+28h] [rbp-100h]
  _DWORD *v159; // [rsp+30h] [rbp-F8h]
  __int64 v160; // [rsp+38h] [rbp-F0h]
  __int64 v162; // [rsp+50h] [rbp-D8h]
  int *v163; // [rsp+50h] [rbp-D8h]
  __int64 v164; // [rsp+50h] [rbp-D8h]
  unsigned int *v165; // [rsp+50h] [rbp-D8h]
  __int64 v166; // [rsp+50h] [rbp-D8h]
  int *v167; // [rsp+50h] [rbp-D8h]
  __int64 v168; // [rsp+50h] [rbp-D8h]
  __int64 v169; // [rsp+58h] [rbp-D0h]
  __int64 v170; // [rsp+58h] [rbp-D0h]
  __int64 v171; // [rsp+58h] [rbp-D0h]
  __int64 v172; // [rsp+58h] [rbp-D0h]
  __int64 v173; // [rsp+58h] [rbp-D0h]
  int *v174; // [rsp+58h] [rbp-D0h]
  int v175; // [rsp+58h] [rbp-D0h]
  __int64 v176; // [rsp+58h] [rbp-D0h]
  __int64 v177; // [rsp+60h] [rbp-C8h]
  __int64 v178; // [rsp+68h] [rbp-C0h]
  __int64 v179; // [rsp+68h] [rbp-C0h]
  int v180; // [rsp+68h] [rbp-C0h]
  void *v181[2]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v182; // [rsp+80h] [rbp-A8h]
  void *v183; // [rsp+90h] [rbp-98h] BYREF
  __int64 v184; // [rsp+98h] [rbp-90h]
  int v185; // [rsp+A0h] [rbp-88h]
  _BYTE v186[128]; // [rsp+A8h] [rbp-80h] BYREF

  v6 = a3;
  v159 = (_DWORD *)(a3 + 272);
  result = *(_QWORD *)a1 + 136LL * *(unsigned int *)(a1 + 8);
  v177 = result;
  if ( result != *(_QWORD *)a1 )
  {
    v8 = *(_DWORD **)a1;
    while ( 1 )
    {
      v142 = *((_QWORD *)v8 + 1);
      result = v142 + 56LL * (unsigned int)v8[4];
      v160 = result;
      if ( result != v142 )
        break;
LABEL_45:
      v8 += 34;
      if ( (_DWORD *)v177 == v8 )
        return result;
    }
    v140 = v8;
    v9 = v6;
    while ( 1 )
    {
      if ( *(_DWORD *)(v142 + 8) == 13 )
      {
        sub_C3EB00((__int64)&v183, *(_QWORD *)v142, a2, nullptr, a5, a6);
        if ( (_BYTE)v185 )
        {
          v36 = v184;
          if ( (unsigned int)v184 <= 0x40 )
            v37 = v183 == nullptr;
          else
            v37 = v36 == (unsigned int)sub_2206780(&v183);
          v38 = (-(__int64)!v37 & 0xFFFFFFFFFFFFFFE0LL) + 64;
          v39 = 70 - !v37;
          v40 = sub_20F3F60(v39);
          *(_QWORD *)(*(_QWORD *)v9 + 8LL) |= v38;
          if ( v40 == 1 )
          {
            v135 = *(unsigned int *)(v9 + 224);
            if ( v135 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 228) )
            {
              sub_2237220(v9 + 216, v9 + 232, v135 + 1, 4);
              v135 = *(unsigned int *)(v9 + 224);
            }
            *(_DWORD *)(*(_QWORD *)(v9 + 216) + 4 * v135) = v39;
            ++*(_DWORD *)(v9 + 224);
          }
        }
        else
        {
          v74 = sub_20F3F60(70);
          *(_QWORD *)(*(_QWORD *)v9 + 8LL) |= 0x40uLL;
          if ( v74 == 1 )
          {
            v75 = *(unsigned int *)(v9 + 224);
            if ( v75 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 228) )
            {
              sub_2237220(v9 + 216, v9 + 232, v75 + 1, 4);
              v75 = *(unsigned int *)(v9 + 224);
            }
            *(_DWORD *)(*(_QWORD *)(v9 + 216) + 4 * v75) = 70;
            ++*(_DWORD *)(v9 + 224);
          }
        }
        sub_98E4B0((__int64)&v183);
        goto LABEL_43;
      }
      v182 = 0;
      *(_OWORD *)v181 = 0;
      v10 = *(_QWORD *)v142;
      if ( *(_QWORD *)v142 )
        break;
LABEL_13:
      v12 = v10;
      v13 = *(int **)(v142 + 16);
      v14 = (unsigned int *)v13;
      v141 = &v13[6 * *(unsigned int *)(v142 + 24)];
      if ( v13 != v141 )
      {
        while ( 1 )
        {
          v23 = *v14;
          v21 = *((_QWORD *)v14 + 1);
          v22 = *((_QWORD *)v14 + 2);
          v24 = *v140;
          if ( !v12 )
            goto LABEL_19;
          v25 = *(_BYTE *)(v9 + 264) & 1;
          if ( (*(_BYTE *)(v9 + 264) & 1) != 0 )
          {
            v15 = v159;
            v16 = 3;
          }
          else
          {
            v26 = *(_DWORD *)(v9 + 280);
            v15 = *(_DWORD **)(v9 + 272);
            if ( !v26 )
              goto LABEL_99;
            v16 = v26 - 1;
          }
          v17 = v16 & v23;
          v18 = &v15[6 * v17];
          v19 = *v18;
          if ( v23 == *v18 )
          {
LABEL_17:
            v20 = (int *)(v18 + 2);
            if ( v18[4] > 0x40 )
              goto LABEL_18;
            goto LABEL_37;
          }
          v29 = 1;
          v30 = nullptr;
          if ( v19 != -1 )
          {
            while ( 1 )
            {
              if ( v19 == -2 && !v30 )
                v30 = v18;
              v17 = v16 & (unsigned int)(v29 + v17);
              v18 = &v15[6 * (unsigned int)v17];
              v19 = *v18;
              if ( v23 == *v18 )
                goto LABEL_17;
              if ( v19 == -1 )
                break;
              v29 = (unsigned int)(v29 + 1);
            }
            if ( v30 )
              v18 = v30;
          }
          v31 = (*(_DWORD *)(v9 + 264) >> 1) + 1;
          v32 = 4 * v31;
          if ( (_BYTE)v25 )
          {
            if ( v32 > 0xB )
            {
              v101 = &v183;
              if ( (unsigned int)(*(_DWORD *)(v9 + 272) + 2) > 1 )
              {
                LODWORD(v183) = *(_DWORD *)(v9 + 272);
                v101 = (void **)v186;
                v185 = *(_DWORD *)(v9 + 288);
                v184 = *(_QWORD *)(v9 + 280);
              }
              v102 = *(_DWORD *)(v9 + 296);
              if ( (unsigned int)(v102 + 2) > 1 )
              {
                *(_DWORD *)v101 = v102;
                v101 += 3;
                *((_DWORD *)v101 - 2) = *(_DWORD *)(v9 + 312);
                *(v101 - 2) = *(void **)(v9 + 304);
              }
              v103 = *(_DWORD *)(v9 + 320);
              if ( (unsigned int)(v103 + 2) > 1 )
              {
                *(_DWORD *)v101 = v103;
                v101 += 3;
                *((_DWORD *)v101 - 2) = *(_DWORD *)(v9 + 336);
                *(v101 - 2) = *(void **)(v9 + 328);
              }
              v104 = *(_DWORD *)(v9 + 344);
              v105 = (unsigned int)(v104 + 2);
              if ( (unsigned int)v105 > 1 )
              {
                *(_DWORD *)v101 = v104;
                v101 += 3;
                *((_DWORD *)v101 - 2) = *(_DWORD *)(v9 + 360);
                *(v101 - 2) = *(void **)(v9 + 352);
              }
              v155 = v21;
              *(_BYTE *)(v9 + 264) &= ~1u;
              v147 = v22;
              v106 = (_DWORD *)sub_22300B0(1536, 8, v105, v25, v17, v29);
              v22 = v147;
              v21 = v155;
              *(_DWORD *)(v9 + 280) = 64;
              v107 = *(_QWORD *)(v9 + 264);
              *(_QWORD *)(v9 + 272) = v106;
              v108 = v107 & 1;
              *(_QWORD *)(v9 + 264) = v108;
              v92 = v108 & 1;
              if ( (v108 & 1) != 0 )
              {
                v106 = v159;
                v109 = 24;
              }
              else
              {
                v109 = 384;
              }
              v110 = &v106[v109];
              if ( v110 != v106 )
              {
                do
                {
                  *v106 = -1;
                  v106 += 6;
                }
                while ( v110 != v106 );
                LOBYTE(v108) = *(_BYTE *)(v9 + 264);
                v92 = v108 & 1;
              }
              for ( i = &v183; i != v101; i += 3 )
              {
                v112 = *(_DWORD *)i;
                v92 = v108 & 1;
                if ( (unsigned int)(*(_DWORD *)i + 2) > 1 )
                {
                  if ( v92 )
                  {
                    v113 = v159;
                    v114 = 3;
                  }
                  else
                  {
                    v117 = *(_DWORD *)(v9 + 280);
                    v113 = *(_DWORD **)(v9 + 272);
                    if ( !v117 )
                    {
                      dword_0 = 0;
                      BUG();
                    }
                    v114 = v117 - 1;
                  }
                  v115 = v114 & v112;
                  v108 = (__int64)&v113[6 * (v114 & v112)];
                  v116 = *(_DWORD *)v108;
                  if ( *(_DWORD *)v108 != v112 && v116 != -1 )
                  {
                    v156 = 1;
                    v148 = 0;
                    while ( 1 )
                    {
                      if ( !v148 )
                      {
                        if ( v116 != -2 )
                          v108 = 0;
                        v148 = v108;
                      }
                      v115 = v114 & (v156 + v115);
                      v108 = (__int64)&v113[6 * v115];
                      v116 = *(_DWORD *)v108;
                      if ( v112 == *(_DWORD *)v108 )
                        break;
                      if ( v116 == -1 )
                      {
                        if ( v148 )
                          v108 = v148;
                        break;
                      }
                      ++v156;
                    }
                  }
                  *(_DWORD *)v108 = v112;
                  *(_DWORD *)(v108 + 16) = *((_DWORD *)i + 4);
                  *(_QWORD *)(v108 + 8) = i[1];
                  LODWORD(v108) = (2 * (*(_DWORD *)(v9 + 264) >> 1) + 2) | *(_DWORD *)(v9 + 264) & 1;
                  *(_DWORD *)(v9 + 264) = v108;
                  v92 = v108 & 1;
                }
              }
              goto LABEL_116;
            }
            if ( v31 == 4 - *(_DWORD *)(v9 + 268) )
            {
              v118 = &v183;
              if ( (unsigned int)(*(_DWORD *)(v9 + 272) + 2) > 1 )
              {
                LODWORD(v183) = *(_DWORD *)(v9 + 272);
                v118 = (void **)v186;
                v185 = *(_DWORD *)(v9 + 288);
                v184 = *(_QWORD *)(v9 + 280);
              }
              v119 = *(_DWORD *)(v9 + 296);
              if ( (unsigned int)(v119 + 2) > 1 )
              {
                *(_DWORD *)v118 = v119;
                v118 += 3;
                *((_DWORD *)v118 - 2) = *(_DWORD *)(v9 + 312);
                *(v118 - 2) = *(void **)(v9 + 304);
              }
              v120 = *(_DWORD *)(v9 + 320);
              if ( (unsigned int)(v120 + 2) > 1 )
              {
                *(_DWORD *)v118 = v120;
                v118 += 3;
                *((_DWORD *)v118 - 2) = *(_DWORD *)(v9 + 336);
                *(v118 - 2) = *(void **)(v9 + 328);
              }
              v121 = *(_DWORD *)(v9 + 344);
              if ( (unsigned int)(v121 + 2) > 1 )
              {
                *(_DWORD *)v118 = v121;
                v118 += 3;
                *((_DWORD *)v118 - 2) = *(_DWORD *)(v9 + 360);
                *(v118 - 2) = *(void **)(v9 + 352);
              }
              v122 = *(_QWORD *)(v9 + 264) & 1LL;
              v123 = *(_BYTE *)(v9 + 264) & 1;
              *(_QWORD *)(v9 + 264) = v122;
              v64 = v123 & 1;
              if ( v64 )
              {
                v124 = v159;
                v125 = 24;
              }
              else
              {
                v124 = *(_DWORD **)(v9 + 272);
                v125 = 6LL * *(unsigned int *)(v9 + 280);
              }
              v126 = &v124[v125];
              if ( v126 != v124 )
              {
                do
                {
                  *v124 = -1;
                  v124 += 6;
                }
                while ( v126 != v124 );
                LOBYTE(v122) = *(_BYTE *)(v9 + 264);
                LOBYTE(v64) = v122 & 1;
              }
              for ( j = &v183; j != v118; j += 3 )
              {
                v128 = *(_DWORD *)j;
                LOBYTE(v64) = v122 & 1;
                if ( (unsigned int)(*(_DWORD *)j + 2) > 1 )
                {
                  if ( (_BYTE)v64 )
                  {
                    v129 = v159;
                    v130 = 3;
                  }
                  else
                  {
                    v133 = *(_DWORD *)(v9 + 280);
                    v129 = *(_DWORD **)(v9 + 272);
                    if ( !v133 )
                    {
                      dword_0 = 0;
                      BUG();
                    }
                    v130 = v133 - 1;
                  }
                  v131 = v130 & v128;
                  v122 = (__int64)&v129[6 * (v130 & v128)];
                  v132 = *(_DWORD *)v122;
                  if ( v128 != *(_DWORD *)v122 && v132 != -1 )
                  {
                    v157 = 1;
                    v149 = 0;
                    while ( 1 )
                    {
                      if ( !v149 )
                      {
                        if ( v132 != -2 )
                          v122 = 0;
                        v149 = v122;
                      }
                      v131 = v130 & (v157 + v131);
                      v122 = (__int64)&v129[6 * v131];
                      v132 = *(_DWORD *)v122;
                      if ( v128 == *(_DWORD *)v122 )
                        break;
                      if ( v132 == -1 )
                      {
                        if ( v149 )
                          v122 = v149;
                        break;
                      }
                      ++v157;
                    }
                  }
                  *(_DWORD *)v122 = v128;
                  *(_DWORD *)(v122 + 16) = *((_DWORD *)j + 4);
                  *(_QWORD *)(v122 + 8) = j[1];
                  LODWORD(v122) = (2 * (*(_DWORD *)(v9 + 264) >> 1) + 2) | *(_DWORD *)(v9 + 264) & 1;
                  *(_DWORD *)(v9 + 264) = v122;
                  LOBYTE(v64) = v122 & 1;
                }
              }
LABEL_74:
              if ( (_BYTE)v64 )
              {
                v65 = v159;
                v66 = 3;
              }
              else
              {
                v76 = *(_DWORD *)(v9 + 280);
                v65 = *(_DWORD **)(v9 + 272);
                if ( !v76 )
                  goto LABEL_260;
                v66 = v76 - 1;
              }
              v67 = v66 & v23;
              v31 = (*(_DWORD *)(v9 + 264) >> 1) + 1;
              v18 = &v65[6 * (v66 & v23)];
              v68 = *v18;
              if ( v23 != *v18 )
              {
                v69 = 1;
                v70 = nullptr;
                if ( v68 != -1 )
                {
                  while ( 1 )
                  {
                    if ( v68 == -2 && !v70 )
                      v70 = v18;
                    v67 = v66 & (v69 + v67);
                    v18 = &v65[6 * v67];
                    v68 = *v18;
                    if ( v23 == *v18 )
                      break;
                    if ( v68 == -1 )
                      goto LABEL_83;
                    ++v69;
                  }
                }
              }
            }
          }
          else
          {
            v26 = *(_DWORD *)(v9 + 280);
            v41 = 2 * v26;
            if ( 3 * v26 <= v32 )
            {
              if ( v41 <= 4 )
              {
LABEL_99:
                v77 = *(_DWORD **)(v9 + 272);
                *(_BYTE *)(v9 + 264) |= 1u;
                v78 = v26;
                v146 = v77;
              }
              else
              {
                v136 = (((((v41 - 1) | ((unsigned __int64)(v41 - 1) >> 1)) >> 2)
                       | (v41 - 1)
                       | ((unsigned __int64)(v41 - 1) >> 1)
                       | (((((v41 - 1) | ((unsigned __int64)(v41 - 1) >> 1)) >> 2)
                         | (v41 - 1)
                         | ((unsigned __int64)(v41 - 1) >> 1)) >> 4)) >> 8)
                     | (((v41 - 1) | ((unsigned __int64)(v41 - 1) >> 1)) >> 2)
                     | (v41 - 1)
                     | ((unsigned __int64)(v41 - 1) >> 1)
                     | (((((v41 - 1) | ((unsigned __int64)(v41 - 1) >> 1)) >> 2)
                       | (v41 - 1)
                       | ((unsigned __int64)(v41 - 1) >> 1)) >> 4);
                v137 = (v136 | (v136 >> 16)) + 1;
                v138 = (unsigned int)v137;
                if ( (unsigned int)v137 <= 0x40 )
                {
                  v139 = 1536;
                  v138 = 64;
                  v146 = *(_DWORD **)(v9 + 272);
                }
                else
                {
                  v146 = *(_DWORD **)(v9 + 272);
                  v139 = 24LL * (unsigned int)v137;
                }
                v176 = *((_QWORD *)v14 + 1);
                v168 = *((_QWORD *)v14 + 2);
                v158 = v138;
                v77 = (_DWORD *)sub_22300B0(v139, 8, v136, v138, v17, v29);
                v78 = v158;
                v21 = v176;
                *(_QWORD *)(v9 + 272) = v77;
                v22 = v168;
                *(_DWORD *)(v9 + 280) = v158;
              }
              v79 = &v146[6 * v26];
              v49 = (*(_QWORD *)(v9 + 264) & 1LL) == 0;
              *(_QWORD *)(v9 + 264) &= 1uLL;
              v154 = 24LL * v26;
              if ( v49 )
              {
                v80 = 6 * v78;
              }
              else
              {
                v77 = (_DWORD *)(v9 + 272);
                v80 = 24;
              }
              for ( k = &v77[v80]; k != v77; v77 += 6 )
                *v77 = -1;
              v82 = v146;
              if ( v146 != v79 )
              {
                v165 = v14;
                v83 = v23;
                v84 = v79;
                do
                {
                  while ( 1 )
                  {
                    v85 = *v82;
                    if ( (unsigned int)(*v82 + 2) > 1 )
                    {
                      if ( (*(_BYTE *)(v9 + 264) & 1) != 0 )
                      {
                        v86 = v159;
                        v87 = 3;
                      }
                      else
                      {
                        v98 = *(_DWORD *)(v9 + 280);
                        v86 = *(_DWORD **)(v9 + 272);
                        if ( !v98 )
                        {
                          dword_0 = 0;
                          BUG();
                        }
                        v87 = v98 - 1;
                      }
                      v88 = v87 & v85;
                      v89 = &v86[6 * (v87 & v85)];
                      v90 = *v89;
                      if ( v85 != *v89 && v90 != -1 )
                      {
                        v180 = 1;
                        v174 = nullptr;
                        while ( 1 )
                        {
                          if ( !v174 )
                          {
                            if ( v90 != -2 )
                              v89 = nullptr;
                            v174 = v89;
                          }
                          v88 = v87 & (v180 + v88);
                          v89 = &v86[6 * v88];
                          v90 = *v89;
                          if ( v85 == *v89 )
                            break;
                          if ( v90 == -1 )
                          {
                            if ( v174 )
                              v89 = v174;
                            break;
                          }
                          ++v180;
                        }
                      }
                      *v89 = v85;
                      v89[4] = v82[4];
                      *((_QWORD *)v89 + 1) = *((_QWORD *)v82 + 1);
                      v82[4] = 0;
                      *(_DWORD *)(v9 + 264) = (2 * (*(_DWORD *)(v9 + 264) >> 1) + 2) | *(_DWORD *)(v9 + 264) & 1;
                      if ( v82[4] > 0x40u )
                      {
                        v91 = *((void **)v82 + 1);
                        if ( v91 )
                          break;
                      }
                    }
                    v82 += 6;
                    if ( v84 == v82 )
                      goto LABEL_114;
                  }
                  v82 += 6;
                  v179 = v21;
                  v172 = v22;
                  operator delete[](v91);
                  v21 = v179;
                  v22 = v172;
                }
                while ( v84 != v82 );
LABEL_114:
                v23 = v83;
                v14 = v165;
              }
              v173 = v21;
              v166 = v22;
              operator delete(v146, v154, 8);
              v22 = v166;
              v21 = v173;
              v92 = *(_BYTE *)(v9 + 264) & 1;
LABEL_116:
              if ( v92 )
              {
                v93 = v159;
                v94 = 3;
              }
              else
              {
                v99 = *(_DWORD *)(v9 + 280);
                v93 = *(_DWORD **)(v9 + 272);
                if ( !v99 )
                {
LABEL_260:
                  *(_DWORD *)(v9 + 264) = (2 * (*(_DWORD *)(v9 + 264) >> 1) + 2) | *(_DWORD *)(v9 + 264) & 1;
                  BUG();
                }
                v94 = v99 - 1;
              }
              v95 = v94 & v23;
              v31 = (*(_DWORD *)(v9 + 264) >> 1) + 1;
              v18 = &v93[6 * (v94 & v23)];
              v96 = *v18;
              if ( v23 != *v18 )
              {
                v97 = 1;
                v70 = nullptr;
                if ( v96 != -1 )
                {
                  while ( 1 )
                  {
                    if ( !v70 && v96 == -2 )
                      v70 = v18;
                    v95 = v94 & (v97 + v95);
                    v18 = &v93[6 * v95];
                    v96 = *v18;
                    if ( v23 == *v18 )
                      break;
                    if ( v96 == -1 )
                    {
LABEL_83:
                      if ( v70 )
                        v18 = v70;
                      goto LABEL_34;
                    }
                    ++v97;
                  }
                }
              }
              goto LABEL_34;
            }
            if ( v26 - *(_DWORD *)(v9 + 268) - v31 <= v26 >> 3 )
            {
              if ( v26 <= 4 )
              {
                v46 = *(_DWORD **)(v9 + 272);
                *(_BYTE *)(v9 + 264) |= 1u;
                v47 = v26;
                v144 = v46;
              }
              else
              {
                v42 = ((((((((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                         | (v26 - 1)
                         | ((unsigned __int64)(v26 - 1) >> 1)) >> 4)
                       | (((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                       | (v26 - 1)
                       | ((unsigned __int64)(v26 - 1) >> 1)) >> 8)
                     | (((((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                       | (v26 - 1)
                       | ((unsigned __int64)(v26 - 1) >> 1)) >> 4)
                     | (((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                     | (v26 - 1)
                     | ((unsigned __int64)(v26 - 1) >> 1)) >> 16;
                v43 = (v42
                     | (((((((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                         | (v26 - 1)
                         | ((unsigned __int64)(v26 - 1) >> 1)) >> 4)
                       | (((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                       | (v26 - 1)
                       | ((unsigned __int64)(v26 - 1) >> 1)) >> 8)
                     | (((((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                       | (v26 - 1)
                       | ((unsigned __int64)(v26 - 1) >> 1)) >> 4)
                     | (((v26 - 1) | ((unsigned __int64)(v26 - 1) >> 1)) >> 2)
                     | (v26 - 1)
                     | ((unsigned __int64)(v26 - 1) >> 1))
                    + 1;
                v44 = (unsigned int)v43;
                if ( (unsigned int)v43 > 0x40 )
                {
                  v144 = *(_DWORD **)(v9 + 272);
                  v45 = 24LL * (unsigned int)v43;
                }
                else
                {
                  v45 = 1536;
                  v44 = 64;
                  v144 = *(_DWORD **)(v9 + 272);
                }
                v169 = *((_QWORD *)v14 + 1);
                v162 = *((_QWORD *)v14 + 2);
                v151 = v44;
                v46 = (_DWORD *)sub_22300B0(v45, 8, v42, v44, v17, v29);
                v47 = v151;
                v21 = v169;
                *(_QWORD *)(v9 + 272) = v46;
                v22 = v162;
                *(_DWORD *)(v9 + 280) = v151;
              }
              v48 = &v144[6 * v26];
              v49 = (*(_QWORD *)(v9 + 264) & 1LL) == 0;
              *(_QWORD *)(v9 + 264) &= 1uLL;
              v152 = 24LL * v26;
              if ( v49 )
              {
                v50 = 6 * v47;
              }
              else
              {
                v46 = (_DWORD *)(v9 + 272);
                v50 = 24;
              }
              for ( m = &v46[v50]; m != v46; v46 += 6 )
                *v46 = -1;
              v52 = v144;
              if ( v144 != v48 )
              {
                v53 = v48;
                v54 = (int *)v14;
                v55 = v23;
                v56 = v53;
                do
                {
                  while ( 1 )
                  {
                    v57 = *v52;
                    if ( (unsigned int)(*v52 + 2) > 1 )
                    {
                      if ( (*(_BYTE *)(v9 + 264) & 1) != 0 )
                      {
                        v58 = v159;
                        v59 = 3;
                      }
                      else
                      {
                        v73 = *(_DWORD *)(v9 + 280);
                        v58 = *(_DWORD **)(v9 + 272);
                        if ( !v73 )
                        {
                          dword_0 = 0;
                          BUG();
                        }
                        v59 = v73 - 1;
                      }
                      v60 = v59 & v57;
                      v61 = &v58[6 * (v59 & v57)];
                      v62 = *v61;
                      if ( v57 != *v61 && v62 != -1 )
                      {
                        v175 = 1;
                        v167 = nullptr;
                        while ( 1 )
                        {
                          if ( v62 == -2 )
                          {
                            if ( v167 )
                              v61 = v167;
                            v167 = v61;
                          }
                          v60 = v59 & (v175 + v60);
                          v61 = &v58[6 * v60];
                          v62 = *v61;
                          if ( v57 == *v61 )
                            break;
                          if ( v62 == -1 )
                          {
                            if ( v167 )
                              v61 = v167;
                            break;
                          }
                          ++v175;
                        }
                      }
                      *v61 = v57;
                      v61[4] = v52[4];
                      *((_QWORD *)v61 + 1) = *((_QWORD *)v52 + 1);
                      v52[4] = 0;
                      *(_DWORD *)(v9 + 264) = (2 * (*(_DWORD *)(v9 + 264) >> 1) + 2) | *(_DWORD *)(v9 + 264) & 1;
                      if ( v52[4] > 0x40u )
                      {
                        v63 = *((void **)v52 + 1);
                        if ( v63 )
                          break;
                      }
                    }
                    v52 += 6;
                    if ( v56 == v52 )
                      goto LABEL_72;
                  }
                  v52 += 6;
                  v178 = v21;
                  v170 = v22;
                  v163 = v54;
                  operator delete[](v63);
                  v21 = v178;
                  v22 = v170;
                  v54 = v163;
                }
                while ( v56 != v52 );
LABEL_72:
                v23 = v55;
                v14 = (unsigned int *)v54;
              }
              v171 = v21;
              v164 = v22;
              operator delete(v144, v152, 8);
              v22 = v164;
              v21 = v171;
              LOBYTE(v64) = *(_BYTE *)(v9 + 264) & 1;
              goto LABEL_74;
            }
          }
LABEL_34:
          *(_DWORD *)(v9 + 264) = (2 * v31) | *(_DWORD *)(v9 + 264) & 1;
          if ( *v18 != -1 )
            --*(_DWORD *)(v9 + 268);
          *v18 = v23;
          v20 = (int *)(v18 + 2);
          v18[4] = 1;
          *((_QWORD *)v18 + 1) = 0;
LABEL_37:
          v33 = *(_DWORD *)(v12 + 8);
          if ( v33 > 0x40 )
          {
LABEL_18:
            v150 = v21;
            v143 = v22;
            sub_22056A0(v20, v12);
            v21 = v150;
            v22 = v143;
            goto LABEL_19;
          }
          v34 = *(_QWORD *)v12;
          v20[2] = v33;
          *(_QWORD *)v20 = v34;
LABEL_19:
          if ( v23 == 73 || v23 == 74 )
          {
            v27 = *(unsigned int *)(v9 + 80);
            if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 84) )
            {
              v153 = v21;
              v145 = v22;
              sub_2237220(v9 + 72, v9 + 88, v27 + 1, 16);
              v27 = *(unsigned int *)(v9 + 80);
              v21 = v153;
              v22 = v145;
            }
            v28 = (_QWORD *)(*(_QWORD *)(v9 + 72) + 16 * v27);
            *v28 = v21;
            v28[1] = v22;
            ++*(_DWORD *)(v9 + 80);
          }
          *(_QWORD *)(*(_QWORD *)v9 + 8LL * (v23 >> 6)) |= 1LL << v23;
          if ( v24 == 1 )
          {
            v35 = *(unsigned int *)(v9 + 224);
            if ( v35 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 228) )
            {
              sub_2237220(v9 + 216, v9 + 232, v35 + 1, 4);
              v35 = *(unsigned int *)(v9 + 224);
            }
            v14 += 6;
            *(_DWORD *)(*(_QWORD *)(v9 + 216) + 4 * v35) = v23;
            ++*(_DWORD *)(v9 + 224);
            if ( v141 == (int *)v14 )
              break;
          }
          else
          {
            v14 += 6;
            if ( v141 == (int *)v14 )
              break;
          }
        }
      }
      sub_98E4B0((__int64)v181);
LABEL_43:
      v142 += 56;
      result = v142;
      if ( v160 == v142 )
      {
        v6 = v9;
        v8 = v140;
        goto LABEL_45;
      }
    }
    sub_C3EB00((__int64)&v183, *(_QWORD *)v142, a2, nullptr, a5, a6);
    if ( (_BYTE)v182 )
    {
      v11 = v185;
      if ( (_BYTE)v185 )
      {
        if ( LODWORD(v181[1]) > 0x40 && v181[0] )
        {
          operator delete[](v181[0]);
          v11 = v182;
        }
        v181[0] = v183;
        v100 = v184;
        LODWORD(v184) = 0;
        LODWORD(v181[1]) = v100;
        BYTE4(v181[1]) = BYTE4(v184);
LABEL_12:
        sub_98E4B0((__int64)&v183);
        v10 = (unsigned __int64)v181;
        if ( v11 )
          goto LABEL_13;
        goto LABEL_89;
      }
      LOBYTE(v182) = 0;
      if ( LODWORD(v181[1]) > 0x40 && v181[0] )
      {
        operator delete[](v181[0]);
        v11 = v182;
        goto LABEL_12;
      }
    }
    else if ( (_BYTE)v185 )
    {
      v71 = v184;
      LODWORD(v184) = 0;
      LOBYTE(v182) = 1;
      LODWORD(v181[1]) = v71;
      v181[0] = v183;
      BYTE4(v181[1]) = BYTE4(v184);
      sub_98E4B0((__int64)&v183);
      v10 = (unsigned __int64)v181;
      goto LABEL_13;
    }
    sub_98E4B0((__int64)&v183);
LABEL_89:
    v72 = sub_20F3F60(70);
    *(_QWORD *)(*(_QWORD *)v9 + 8LL) |= 0x40uLL;
    if ( v72 == 1 )
    {
      v134 = *(unsigned int *)(v9 + 224);
      if ( v134 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 228) )
      {
        sub_2237220(v9 + 216, v9 + 232, v134 + 1, 4);
        v134 = *(unsigned int *)(v9 + 224);
      }
      *(_DWORD *)(*(_QWORD *)(v9 + 216) + 4 * v134) = 70;
      ++*(_DWORD *)(v9 + 224);
    }
    v10 = 0;
    goto LABEL_13;
  }
  return result;
}
