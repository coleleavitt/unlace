__int64 __fastcall sub_8D21C0(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  unsigned int *v4; // r13
  void *v5; // r15
  __int64 v6; // r14
  unsigned int v7; // esi
  void *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  int *v12; // r14
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int *v16; // rbp
  __int64 v17; // r13
  unsigned int *v18; // r15
  void *v19; // rdi
  __int64 v20; // rax
  int *v21; // r14
  int v22; // edx
  int v23; // edx
  void *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned int v27; // eax
  void *v28; // r14
  unsigned int *v29; // rdx
  int v30; // eax
  __int64 v31; // r15
  char v32; // dl
  __int64 v33; // rax
  __int64 v34; // r13
  int v35; // r8d
  __int64 v36; // rdx
  unsigned int v37; // r8d
  unsigned int *v38; // r13
  unsigned int v39; // r9d
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // r15
  __int64 v45; // r14
  char v46; // al
  void *v47; // rdi
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rdi
  __int64 v51; // rsi
  _DWORD *v52; // rcx
  __int64 v53; // r13
  __int64 v54; // r14
  __int64 v55; // rbp
  void *v56; // r15
  __int64 v57; // r13
  __int64 v58; // r14
  int v59; // eax
  _QWORD *v60; // rsi
  __int64 v61; // rdx
  _QWORD *v62; // rax
  void *v63; // r13
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rbp
  __int64 v67; // rax
  unsigned int *v68; // rax
  unsigned int *v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // r14
  __int64 v72; // rax
  __int64 v73; // rbp
  __int64 v74; // rax
  __int64 v75; // r13
  __int64 v76; // r14
  void *v77; // r13
  __int64 v78; // rsi
  unsigned int v79; // ebx
  int v81; // eax
  bool v82; // al
  unsigned int v83; // eax
  unsigned int v84; // eax
  unsigned int v85; // eax
  __int64 v86; // r14
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rdx
  unsigned int v90; // r13d
  unsigned int v91; // ebp
  __int64 v92; // r9
  __int64 v93; // rdx
  int v94; // r14d
  __int64 v95; // r13
  __int64 v96; // r8
  char v97; // al
  __int64 v98; // rsi
  unsigned int v99; // r15d
  int v100; // ecx
  char v101; // dl
  void *v102; // rdi
  __int64 v103; // rax
  int v104; // eax
  bool v105; // al
  int v106; // eax
  unsigned int v107; // esi
  unsigned int v108; // eax
  unsigned int v109; // esi
  size_t v110; // rdi
  __int64 v111; // rax
  _DWORD *v112; // r15
  _DWORD *v113; // r9
  __int64 v114; // rax
  _QWORD *v115; // rdx
  __int64 v116; // rdi
  _DWORD *v117; // rax
  _DWORD *v118; // rdi
  int v119; // ecx
  char v120; // r8
  __int64 v121; // rcx
  char v122; // r8
  __int64 v123; // rcx
  __int64 v124; // rax
  _DWORD *v125; // r13
  _DWORD *v126; // rbx
  _QWORD *v127; // r15
  void *v128; // rbp
  _DWORD *v129; // rsi
  int v130; // eax
  int v131; // eax
  _QWORD *v132; // rax
  unsigned int *v133; // rax
  unsigned int *v134; // rsi
  __int64 v135; // rdx
  __int64 v136; // rbp
  __int64 v137; // rax
  __int64 v138; // r14
  void *v139; // r13
  __int64 v140; // rsi
  char **exception; // rbp
  __int64 v142; // rdx
  __int64 v143; // [rsp+10h] [rbp-148h]
  int v144; // [rsp+10h] [rbp-148h]
  unsigned int v145; // [rsp+10h] [rbp-148h]
  void *v146; // [rsp+10h] [rbp-148h]
  unsigned int v147; // [rsp+10h] [rbp-148h]
  int v148; // [rsp+10h] [rbp-148h]
  unsigned int v149; // [rsp+10h] [rbp-148h]
  unsigned int v150; // [rsp+10h] [rbp-148h]
  unsigned int v151; // [rsp+18h] [rbp-140h]
  unsigned int v152; // [rsp+18h] [rbp-140h]
  unsigned int v153; // [rsp+18h] [rbp-140h]
  __int64 v154; // [rsp+18h] [rbp-140h]
  __int64 v155; // [rsp+18h] [rbp-140h]
  _DWORD *v156; // [rsp+18h] [rbp-140h]
  unsigned int v157; // [rsp+18h] [rbp-140h]
  __int64 v158; // [rsp+18h] [rbp-140h]
  unsigned int *v159; // [rsp+20h] [rbp-138h]
  __int64 v160; // [rsp+20h] [rbp-138h]
  __int64 v161; // [rsp+20h] [rbp-138h]
  __int64 v162; // [rsp+20h] [rbp-138h]
  __int64 v163; // [rsp+20h] [rbp-138h]
  _DWORD *v164; // [rsp+20h] [rbp-138h]
  __int64 v165; // [rsp+20h] [rbp-138h]
  __int64 v166; // [rsp+28h] [rbp-130h]
  __int64 v167; // [rsp+28h] [rbp-130h]
  unsigned int v168; // [rsp+30h] [rbp-128h]
  __int64 v169; // [rsp+30h] [rbp-128h]
  __int64 v170; // [rsp+38h] [rbp-120h]
  unsigned int v171; // [rsp+38h] [rbp-120h]
  __int64 v172; // [rsp+40h] [rbp-118h]
  unsigned int v173; // [rsp+40h] [rbp-118h]
  __int64 v174; // [rsp+58h] [rbp-100h]
  __int64 v175; // [rsp+60h] [rbp-F8h]
  int v176; // [rsp+6Ch] [rbp-ECh]
  __int64 v177; // [rsp+70h] [rbp-E8h]
  unsigned int **v178; // [rsp+78h] [rbp-E0h]
  __int64 **v179; // [rsp+88h] [rbp-D0h]
  unsigned int v180; // [rsp+9Ch] [rbp-BCh] BYREF
  __int64 v181[4]; // [rsp+A0h] [rbp-B8h] BYREF
  _QWORD v182[2]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v183[2]; // [rsp+D0h] [rbp-88h] BYREF
  int v184; // [rsp+E0h] [rbp-78h]
  unsigned int v185; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v186; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v187; // [rsp+100h] [rbp-58h]
  __int64 v188; // [rsp+108h] [rbp-50h] BYREF
  __int64 v189; // [rsp+110h] [rbp-48h]
  int v190; // [rsp+118h] [rbp-40h]

  v3 = a1;
  v4 = (unsigned int *)(*(_QWORD *)(a1 + 40) + ((unsigned __int64)a2 << 6));
  v5 = qword_1C7F2C0;
  v175 = *v4;
  v6 = *(_QWORD *)(a1 + 72) + 40 * v175;
  sub_182CEF0(qword_1C7F2C0, v6);
  sub_182CBA0(v5, v6 + 16);
  *(_BYTE *)(v6 + 20) &= ~1u;
  v7 = v4[1];
  *(_DWORD *)(v6 + 16) = 1;
  v8 = qword_1C7F2C0;
  v182[0] = 0;
  v183[0] = 1;
  v9 = *v4;
  *(_DWORD *)(v6 + 32) = 0;
  v10 = 5 * v9;
  v11 = *(_QWORD *)(v3 + 24);
  v180 = v7;
  v12 = (int *)(v11 + 8 * v10);
  v182[1] = 0;
  v183[1] = 0;
  v184 = 0;
  sub_27B950((__int64)v8, (__int64)v182, v12);
  v184 = v12[8];
  v13 = *(_QWORD *)(v3 + 24) + 40LL * v4[1];
  sub_89ABF0((__int64)qword_1C7F2C0, (__int64)v182, v13, (__int64)v182);
  v184 -= *(_DWORD *)(v13 + 32);
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v182, (__int64)(v4 + 2), (__int64)v182);
  v184 += v4[10];
  v170 = v7;
  v14 = *(_QWORD *)(v3 + 72) + 40LL * v7;
  sub_27B950((__int64)qword_1C7F2C0, v14, (int *)v182);
  v178 = (unsigned int **)(v3 + 96);
  *(_DWORD *)(v14 + 32) = v184;
  *(_BYTE *)(*(_QWORD *)(v3 + 80) + v7) = 2;
  *(_DWORD *)(*(_QWORD *)(v3 + 88) + 4LL * v7) = a2;
  sub_893BD0((unsigned int **)(v3 + 96), &v180);
  sub_8D0990(v3, v7, (__int64)v182);
  v15 = *(_QWORD *)(v3 + 80);
  ++*(_DWORD *)v3;
  v179 = (__int64 **)(v3 + 104);
  if ( *(_BYTE *)(v15 + v175) )
  {
LABEL_49:
    sub_8C1E50(v3 + 104);
    v68 = *(unsigned int **)(v3 + 96);
    if ( v68 )
    {
      v69 = &v68[*(v68 - 1)];
      if ( v68 == v69 )
        goto LABEL_53;
      do
      {
        v70 = *v68++;
        *(_BYTE *)(*(_QWORD *)(v3 + 80) + v70) = 0;
      }
      while ( v69 != v68 );
      v69 = *(unsigned int **)(v3 + 96);
      if ( v69 )
LABEL_53:
        *(v69 - 1) = 0;
    }
    v71 = *(_QWORD *)(v3 + 32);
    if ( !v71 )
      goto LABEL_64;
    v72 = *(unsigned int *)(v71 - 4);
    v73 = v71 + 48 * v72;
    if ( v71 != v73 )
    {
      do
      {
        v74 = *(unsigned int *)(v73 - 48);
        v73 -= 48;
        v75 = *(_QWORD *)(v3 + 24) + 40 * v74;
        sub_27B950((__int64)qword_1C7F2C0, v75, (int *)(v73 + 8));
        *(_DWORD *)(v75 + 32) = *(_DWORD *)(v73 + 40);
      }
      while ( v71 != v73 );
      v73 = *(_QWORD *)(v3 + 32);
      if ( !v73 )
      {
LABEL_64:
        v79 = 0;
        goto LABEL_65;
      }
      v72 = *(unsigned int *)(v73 - 4);
    }
    if ( (_DWORD)v72 )
    {
      v76 = v73 + 48 * v72;
      do
      {
        v77 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v73 + 8);
        v78 = v73 + 24;
        v73 += 48;
        sub_182CBA0(v77, v78);
      }
      while ( v73 != v76 );
      v73 = *(_QWORD *)(v3 + 32);
    }
    *(_DWORD *)(v73 - 4) = 0;
    goto LABEL_64;
  }
  while ( 2 )
  {
    v16 = *(unsigned int **)(*(_QWORD *)(v3 + 48) + 8 * v170);
    if ( !v16 )
      goto LABEL_39;
    v159 = &v16[*(v16 - 1)];
    if ( v159 == v16 )
      goto LABEL_39;
    do
    {
      while ( 1 )
      {
        v17 = *v16;
        v18 = (unsigned int *)(*(_QWORD *)(v3 + 40) + (v17 << 6));
        if ( *((_BYTE *)v18 + 56) )
        {
          v19 = qword_1C7F2C0;
          v20 = *(_QWORD *)(v3 + 24);
          v21 = (int *)(v20 + 40LL * *v18);
          if ( (v21[1] & 1) != 0 )
          {
            v146 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v182, v20 + 40LL * *v18);
            v19 = v146;
          }
          else
          {
            v22 = *v21;
            BYTE4(v182[0]) &= ~1u;
            LODWORD(v182[0]) = v22;
          }
          if ( (v21[5] & 1) != 0 )
          {
            sub_182C690(v19, v183, v21 + 4);
          }
          else
          {
            v23 = v21[4];
            BYTE4(v183[0]) &= ~1u;
            LODWORD(v183[0]) = v23;
          }
          v24 = qword_1C7F2C0;
          v184 = v21[8];
          v25 = *(_QWORD *)(v3 + 24);
          v26 = v25 + 40LL * v18[1];
          if ( (v183[0] & 0x100000000LL) != 0
            || LODWORD(v183[0]) != 1
            || (*(_BYTE *)(v26 + 20) & 1) != 0
            || *(_DWORD *)(v26 + 16) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v182, v25 + 40LL * v18[1]);
          }
          else
          {
            sub_1832A70(qword_1C7F2C0, v182, v25 + 40LL * v18[1]);
            sub_182CBA0(v24, v183);
            BYTE4(v183[0]) &= ~1u;
            LODWORD(v183[0]) = 1;
          }
          v184 -= *(_DWORD *)(v26 + 32);
          v27 = v18[2];
          v28 = qword_1C7F2C0;
          if ( v27 )
          {
            v29 = v18 + 2;
            if ( LODWORD(v182[0]) )
            {
              if ( (v183[0] & 0x100000000LL) != 0 || LODWORD(v183[0]) != 1 || (v18[7] & 1) != 0 || v18[6] != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v182, v29, v182);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v182, v29, v182);
                sub_182CBA0(v28, v183);
                BYTE4(v183[0]) &= ~1u;
                LODWORD(v183[0]) = 1;
              }
            }
            else
            {
              if ( (v18[3] & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v182, v29);
              }
              else
              {
                BYTE4(v182[0]) &= ~1u;
                LODWORD(v182[0]) = v27;
              }
              if ( (v18[7] & 1) != 0 )
              {
                sub_182C690(v28, v183, v18 + 6);
              }
              else
              {
                v83 = v18[6];
                BYTE4(v183[0]) &= ~1u;
                LODWORD(v183[0]) = v83;
              }
            }
          }
          else
          {
            if ( (v182[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v182, v182);
            else
              BYTE4(v182[0]) &= ~1u;
            if ( (v183[0] & 0x100000000LL) != 0 )
              sub_182C690(v28, v183, v183);
            else
              BYTE4(v183[0]) &= ~1u;
          }
          v30 = v184 + v18[10];
          v184 = v30;
          if ( SLODWORD(v182[0]) < 0 || !LODWORD(v182[0]) && v30 < 0 )
          {
            v31 = v18[1];
            v32 = *(_BYTE *)(*(_QWORD *)(v3 + 80) + v31);
            v180 = v31;
            if ( v32 == 1 )
            {
              if ( (unsigned __int8)sub_89B840((__int64)v182, 40 * v31 + *(_QWORD *)(v3 + 72)) )
              {
                v86 = *(_QWORD *)(v3 + 72) + 40 * v31;
                sub_27B950((__int64)qword_1C7F2C0, v86, (int *)v182);
                v87 = *(_QWORD *)(v3 + 88);
                *(_DWORD *)(v86 + 32) = v184;
                *(_DWORD *)(v87 + 4 * v31) = v17;
                sub_8D0D00(v179, *(_DWORD *)(*(_QWORD *)(v3 + 120) + 4 * v31));
              }
              goto LABEL_7;
            }
            if ( v32 != 2 )
              break;
          }
        }
LABEL_7:
        if ( v159 == ++v16 )
          goto LABEL_39;
      }
      if ( v32 )
      {
        sub_1872CE0("");
        sub_1873130(114, 418);
      }
      v143 = *(_QWORD *)(v3 + 72) + 40 * v31;
      sub_27B950((__int64)qword_1C7F2C0, v143, (int *)v182);
      *(_DWORD *)(v143 + 32) = v184;
      *(_BYTE *)(*(_QWORD *)(v3 + 80) + v31) = 1;
      *(_DWORD *)(*(_QWORD *)(v3 + 88) + 4 * v31) = v17;
      sub_893BD0(v178, &v180);
      v33 = *(_QWORD *)(v3 + 112);
      v185 = v31;
      if ( v33 )
      {
        v34 = *(unsigned int *)(v33 - 4);
        v35 = *(_DWORD *)(v33 - 4);
      }
      else
      {
        v35 = 0;
        v34 = 0;
      }
      v144 = v35;
      *(_DWORD *)(*(_QWORD *)(v3 + 120) + 4 * v31) = v35;
      sub_893BD0((unsigned int **)(v3 + 112), &v185);
      v36 = *(_QWORD *)(v3 + 112);
      v37 = v144;
      v38 = (unsigned int *)(v36 + 4 * v34);
      v39 = v144 >> 1;
      v171 = *v38;
      v172 = *v38;
      v166 = 40 * v172;
      if ( !(v144 >> 1) )
      {
LABEL_37:
        v41 = *(_QWORD *)(v3 + 120);
        goto LABEL_38;
      }
      do
      {
        v42 = 4LL * v39;
        v43 = **(_QWORD **)(v3 + 104);
        v44 = v43 + 40LL * *(unsigned int *)(v36 + v42);
        v45 = v43 + v166;
        if ( (*(_BYTE *)(v43 + v166 + 20) & 1) != 0
          || *(_DWORD *)(v45 + 16) != 1
          || (*(_BYTE *)(v44 + 20) & 1) != 0
          || *(_DWORD *)(v44 + 16) != 1 )
        {
          v151 = v37;
          v145 = v39;
          v46 = sub_1848D40(qword_1C7F2C0, v43 + v166, v43 + 40LL * *(unsigned int *)(v36 + 4LL * v39));
          v39 = v145;
          v37 = v151;
          if ( v46 )
            goto LABEL_29;
        }
        else
        {
          if ( (*(_BYTE *)(v45 + 4) & 1) != 0 || (*(_BYTE *)(v44 + 4) & 1) != 0 )
          {
            v153 = v37;
            v147 = v39;
            v84 = sub_182C7B0(qword_1C7F2C0, v43 + v166, v43 + 40LL * *(unsigned int *)(v36 + 4LL * v39));
            v39 = v147;
            v37 = v153;
            v85 = v84 >> 31;
          }
          else
          {
            LOBYTE(v85) = *(_DWORD *)v45 < *(_DWORD *)v44;
          }
          if ( (_BYTE)v85 )
            goto LABEL_29;
        }
        v47 = qword_1C7F2C0;
        if ( (*(_BYTE *)(v45 + 4) & 1) != 0 || (*(_BYTE *)(v44 + 4) & 1) != 0 )
        {
          v168 = v37;
          v152 = v39;
          v81 = sub_182C7B0(qword_1C7F2C0, v45, v44);
          v39 = v152;
          v37 = v168;
          if ( v81 )
            goto LABEL_36;
        }
        else if ( *(_DWORD *)v45 != *(_DWORD *)v44 )
        {
          goto LABEL_36;
        }
        if ( (*(_BYTE *)(v45 + 20) & 1) != 0 || (*(_BYTE *)(v44 + 20) & 1) != 0 )
        {
          v157 = v37;
          v150 = v39;
          v130 = sub_182C7B0(v47, v45 + 16, v44 + 16);
          v39 = v150;
          v37 = v157;
          v82 = v130 == 0;
        }
        else
        {
          v82 = *(_DWORD *)(v45 + 16) == *(_DWORD *)(v44 + 16);
        }
        if ( !v82 || *(_DWORD *)(v45 + 32) >= *(_DWORD *)(v44 + 32) )
        {
LABEL_36:
          v38 = (unsigned int *)(*(_QWORD *)(v3 + 112) + 4LL * v37);
          goto LABEL_37;
        }
LABEL_29:
        v36 = *(_QWORD *)(v3 + 112);
        v38 = (unsigned int *)(v36 + v42);
        v40 = *v38;
        *(_DWORD *)(v36 + 4LL * v37) = v40;
        v41 = *(_QWORD *)(v3 + 120);
        *(_DWORD *)(v41 + 4 * v40) = v37;
        v37 = v39;
        v39 = (int)v39 >> 1;
      }
      while ( v39 );
      v37 = 1;
LABEL_38:
      ++v16;
      *v38 = v171;
      *(_DWORD *)(v41 + 4 * v172) = v37;
    }
    while ( v159 != v16 );
LABEL_39:
    v48 = *(_QWORD *)(v3 + 112);
    v49 = *(_DWORD *)(v48 - 4);
    v50 = v48;
    if ( v49 != 1 )
    {
      v51 = *(_QWORD *)(v3 + 120);
      v173 = *(_DWORD *)(v48 + 4);
      v170 = v173;
      v52 = (_DWORD *)(v51 + 4LL * v173);
      if ( v49 == 2 )
      {
        *v52 = 0;
        --*(_DWORD *)(v48 - 4);
        goto LABEL_42;
      }
      v88 = *(unsigned int *)(v48 + 4LL * (unsigned int)(v49 - 1));
      *(_DWORD *)(v48 + 4) = v88;
      *(_DWORD *)(v51 + 4 * v88) = 1;
      *v52 = 0;
      v89 = *(unsigned int *)(v48 + 4);
      v148 = *(_DWORD *)(v48 - 4) - 1;
      *(_DWORD *)(v48 - 4) = v148;
      v176 = v89;
      v177 = v89;
      if ( v148 > 2 )
      {
        v90 = 2;
        v91 = 1;
        v169 = 40 * v89;
        while ( 1 )
        {
          v98 = v90 + 1;
          v99 = v90;
          if ( v148 > (int)v98 )
          {
            v100 = (unsigned __int8)sub_89B840(
                                      **(_QWORD **)(v3 + 104) + 40LL * *(unsigned int *)(v48 + 4 * v98),
                                      **(_QWORD **)(v3 + 104) + 40LL * *(unsigned int *)(v48 + 4LL * v90));
            v48 = *(_QWORD *)(v3 + 112);
            v99 = v100 + v90;
          }
          v92 = *(unsigned int *)(v48 + 4LL * v99);
          v167 = 4LL * v99;
          v93 = **(_QWORD **)(v3 + 104);
          v94 = *(_DWORD *)(v48 + v167);
          v95 = v93 + v169;
          v96 = v93 + 40 * v92;
          if ( (*(_BYTE *)(v96 + 20) & 1) != 0
            || *(_DWORD *)(v96 + 16) != 1
            || (*(_BYTE *)(v95 + 20) & 1) != 0
            || *(_DWORD *)(v95 + 16) != 1 )
          {
            v160 = *(unsigned int *)(v48 + 4LL * v99);
            v154 = v93 + 40 * v92;
            v97 = sub_1848D40(qword_1C7F2C0, v96, v93 + v169);
            v96 = v154;
            v92 = v160;
            if ( !v97 )
            {
              v101 = *(_BYTE *)(v154 + 4);
LABEL_106:
              v102 = qword_1C7F2C0;
              if ( (v101 & 1) != 0 || (*(_BYTE *)(v95 + 4) & 1) != 0 )
              {
                v174 = v92;
                v161 = v96;
                v104 = sub_182C7B0(qword_1C7F2C0, v96, v95);
                v96 = v161;
                v92 = v174;
                if ( v104 )
                  goto LABEL_109;
              }
              else if ( *(_DWORD *)v96 != *(_DWORD *)v95 )
              {
                goto LABEL_109;
              }
              if ( (*(_BYTE *)(v96 + 20) & 1) != 0 || (*(_BYTE *)(v95 + 20) & 1) != 0 )
              {
                v165 = v92;
                v158 = v96;
                v131 = sub_182C7B0(v102, v96 + 16, v95 + 16);
                v96 = v158;
                v92 = v165;
                v105 = v131 == 0;
              }
              else
              {
                v105 = *(_DWORD *)(v96 + 16) == *(_DWORD *)(v95 + 16);
              }
              if ( !v105 || *(_DWORD *)(v96 + 32) >= *(_DWORD *)(v95 + 32) )
              {
LABEL_109:
                v50 = *(_QWORD *)(v3 + 112);
                v51 = *(_QWORD *)(v3 + 120);
                v103 = 4LL * v91;
                goto LABEL_110;
              }
            }
          }
          else
          {
            v101 = *(_BYTE *)(v96 + 4);
            if ( (v101 & 1) == 0 && (*(_BYTE *)(v95 + 4) & 1) == 0 )
            {
              if ( *(_DWORD *)v96 < *(_DWORD *)v95 )
                goto LABEL_102;
              goto LABEL_106;
            }
            v155 = *(unsigned int *)(v48 + 4LL * v99);
            v162 = v96;
            v106 = sub_182C7B0(qword_1C7F2C0, v96, v95);
            v92 = v155;
            if ( v106 >= 0 )
            {
              v96 = v162;
              v101 = *(_BYTE *)(v162 + 4);
              goto LABEL_106;
            }
          }
          v48 = *(_QWORD *)(v3 + 112);
LABEL_102:
          v51 = *(_QWORD *)(v3 + 120);
          v50 = v48;
          v90 = 2 * v99;
          *(_DWORD *)(v48 + 4LL * v91) = v94;
          *(_DWORD *)(v51 + 4 * v92) = v91;
          v91 = v99;
          if ( v148 <= (int)(2 * v99) )
            goto LABEL_148;
        }
      }
      v167 = 4;
      v91 = 1;
LABEL_148:
      v103 = v167;
LABEL_110:
      *(_DWORD *)(v50 + v103) = v176;
      *(_DWORD *)(v51 + 4 * v177) = v91;
LABEL_42:
      *(_BYTE *)(*(_QWORD *)(v3 + 80) + v173) = 2;
      v53 = *(_QWORD *)(v3 + 24);
      v54 = *(_QWORD *)(v3 + 72);
      v186 = 0;
      v55 = 40LL * v173;
      v56 = qword_1C7F2C0;
      v187 = 0;
      v57 = v55 + v53;
      v58 = v55 + v54;
      v185 = v173;
      v188 = 1;
      v189 = 0;
      if ( (*(_BYTE *)(v57 + 4) & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, &v186, v57);
        if ( (*(_BYTE *)(v57 + 20) & 1) != 0 )
          goto LABEL_139;
LABEL_44:
        v59 = *(_DWORD *)(v57 + 16);
        BYTE4(v188) &= ~1u;
        LODWORD(v188) = v59;
      }
      else
      {
        LODWORD(v186) = *(_DWORD *)v57;
        if ( (*(_BYTE *)(v57 + 20) & 1) == 0 )
          goto LABEL_44;
LABEL_139:
        sub_182C690(v56, &v188, v57 + 16);
      }
      v60 = *(_QWORD **)(v3 + 32);
      v190 = *(_DWORD *)(v57 + 32);
      if ( v60 )
      {
        v61 = *((unsigned int *)v60 - 1);
        if ( (_DWORD)v61 == *((_DWORD *)v60 - 2) )
        {
          v107 = 3 * v61 + 1;
          v108 = v107 & 0xFFFFFFFE;
          v109 = v107 >> 1;
          v149 = v109;
          v110 = 16 * (v108 + v109) + 8;
          if ( 48 * (int)v61 + 8 >= (unsigned int)v110 || (unsigned int)v61 >= v109 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_12D192(v181, "Overflow encountered when expanding vector", v142);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v181);
            sub_233E40((__int64)v181);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v111 = sub_186B270(v110);
          v112 = *(_DWORD **)(v3 + 32);
          v113 = (_DWORD *)v111;
          v60 = (_QWORD *)(v111 + 8);
          if ( v112 )
          {
            v114 = (unsigned int)*(v112 - 1);
            v115 = v60;
            v116 = 3 * v114;
            v113[1] = v114;
            v117 = v112;
            v118 = &v112[4 * v116];
            if ( v112 != v118 )
            {
              do
              {
                v119 = *v117;
                v117 += 12;
                v115 += 6;
                *((_DWORD *)v115 - 12) = v119;
                v120 = *((_BYTE *)v117 - 36);
                *((_DWORD *)v115 - 10) = *(v117 - 10);
                *((_BYTE *)v115 - 36) = v120 & 3 | *((_BYTE *)v115 - 36) & 0xFC;
                v121 = *((_QWORD *)v117 - 4);
                *((_QWORD *)v117 - 4) = 0;
                *(v115 - 4) = v121;
                v122 = *((_BYTE *)v117 - 20);
                *((_DWORD *)v115 - 6) = *(v117 - 6);
                *((_BYTE *)v115 - 20) = v122 & 3 | *((_BYTE *)v115 - 20) & 0xFC;
                v123 = *((_QWORD *)v117 - 2);
                *((_QWORD *)v117 - 2) = 0;
                *(v115 - 2) = v123;
                *((_DWORD *)v115 - 2) = *(v117 - 2);
              }
              while ( v118 != v117 );
            }
            v124 = (unsigned int)*(v112 - 1);
            if ( (_DWORD)v124 )
            {
              v156 = v113;
              v163 = v3;
              v125 = &v112[12 * v124];
              v126 = v112;
              v127 = v60;
              do
              {
                v128 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v126 + 2);
                v129 = v126 + 6;
                v126 += 12;
                sub_182CBA0(v128, v129);
              }
              while ( v126 != v125 );
              v3 = v163;
              v60 = v127;
              v113 = v156;
              v55 = 40LL * v173;
              v112 = *(_DWORD **)(v163 + 32);
            }
            v164 = v113;
            sub_186B220(v112 - 2);
            v113 = v164;
            v62 = &v60[6 * (unsigned int)v164[1]];
          }
          else
          {
            *(_DWORD *)(v111 + 4) = 0;
            v62 = (_QWORD *)(v111 + 8);
          }
          *(_QWORD *)(v3 + 32) = v60;
          *v113 = v149;
        }
        else
        {
          v62 = &v60[6 * v61];
        }
      }
      else
      {
        v132 = (_QWORD *)sub_186B270(0x68u);
        v60 = v132 + 1;
        *v132 = 2;
        *(_QWORD *)(v3 + 32) = v132 + 1;
        v62 = v132 + 1;
      }
      v63 = qword_1C7F2C0;
      *(_DWORD *)v62 = v185;
      *((_DWORD *)v62 + 2) = v186;
      *((_BYTE *)v62 + 12) = BYTE4(v186) & 3 | *((_BYTE *)v62 + 12) & 0xFC;
      v64 = v187;
      v187 = 0;
      v62[2] = v64;
      *((_DWORD *)v62 + 6) = v188;
      *((_BYTE *)v62 + 28) = BYTE4(v188) & 3 | *((_BYTE *)v62 + 28) & 0xFC;
      v65 = v189;
      v189 = 0;
      v62[4] = v65;
      *((_DWORD *)v62 + 10) = v190;
      ++*((_DWORD *)v60 - 1);
      sub_182CBA0(v63, &v186);
      sub_182CBA0(v63, &v188);
      v66 = *(_QWORD *)(v3 + 24) + v55;
      sub_2FC4A0((__int64)qword_1C7F2C0, v66, v58, v66);
      *(_DWORD *)(v66 + 32) += *(_DWORD *)(v58 + 32);
      v67 = *(_QWORD *)(v3 + 80);
      ++*(_DWORD *)v3;
      if ( *(_BYTE *)(v67 + v175) )
        goto LABEL_49;
      continue;
    }
    break;
  }
  v133 = *(unsigned int **)(v3 + 96);
  if ( v133 )
  {
    v134 = &v133[*(v133 - 1)];
    if ( v133 == v134 )
      goto LABEL_159;
    do
    {
      v135 = *v133++;
      *(_BYTE *)(*(_QWORD *)(v3 + 80) + v135) = 0;
    }
    while ( v134 != v133 );
    v134 = *(unsigned int **)(v3 + 96);
    if ( v134 )
LABEL_159:
      *(v134 - 1) = 0;
  }
  v136 = *(_QWORD *)(v3 + 32);
  if ( v136 )
  {
    v137 = *(unsigned int *)(v136 - 4);
    if ( (_DWORD)v137 )
    {
      v138 = v136 + 48 * v137;
      do
      {
        v139 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v136 + 8);
        v140 = v136 + 24;
        v136 += 48;
        sub_182CBA0(v139, v140);
      }
      while ( v136 != v138 );
      v136 = *(_QWORD *)(v3 + 32);
    }
    *(_DWORD *)(v136 - 4) = 0;
  }
  v79 = 1;
LABEL_65:
  sub_25A130((char *)v182);
  return v79;
}

