__int64 __fastcall sub_C75180(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r12
  int v7; // edx
  __int64 v8; // rax
  int v9; // edi
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r13
  void *v18; // rbx
  __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // r13
  int v22; // eax
  void *v23; // rdi
  void *v24; // rdi
  _QWORD *v25; // rsi
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  void *v30; // r15
  __int64 v31; // r15
  __int64 v32; // rax
  unsigned int **v33; // rdi
  unsigned int v34; // ecx
  __int64 v35; // rdx
  __int64 v36; // r15
  void *v37; // rdi
  size_t v38; // rdi
  __int64 v39; // rax
  int *v40; // r15
  _DWORD *v41; // r9
  __int64 v42; // rdi
  __int64 v43; // rdx
  int *v44; // rax
  int *v45; // rdi
  int v46; // ecx
  char v47; // r8
  __int64 v48; // rcx
  char v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  int *v52; // rbx
  int *v53; // r15
  void *v54; // r12
  int *v55; // rsi
  unsigned int v56; // eax
  __int64 i; // r13
  __int64 v58; // r15
  void *v59; // rdi
  void *v60; // r15
  unsigned int v61; // ecx
  __int64 v62; // r15
  __int64 v63; // rax
  __int64 v64; // rdx
  _QWORD *v65; // rsi
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // r15d
  __int64 v73; // r9
  __int64 v74; // r13
  char v75; // r8
  int *v76; // rdx
  char v77; // r8
  __int64 v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // rbx
  __int64 v81; // r13
  void *v82; // r12
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // r13
  int *v91; // rax
  unsigned int v92; // eax
  int v93; // eax
  _QWORD *v94; // rdx
  __int64 v95; // rax
  unsigned int v96; // r15d
  size_t v97; // rsi
  unsigned int *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rbx
  size_t v101; // rdi
  __int64 v102; // rax
  int *v103; // r15
  _DWORD *v104; // r9
  __int64 v105; // rax
  _QWORD *v106; // rdx
  int *v107; // rdi
  int *j; // rax
  int v109; // ecx
  char v110; // r8
  __int64 v111; // rcx
  char v112; // r8
  __int64 v113; // rcx
  __int64 v114; // rax
  int *v115; // rbx
  int *v116; // r12
  _QWORD *v117; // r15
  void *v118; // r13
  int *v119; // rsi
  unsigned int v120; // esi
  __int64 v121; // rdx
  __int64 k; // rdi
  int v123; // r15d
  int v124; // eax
  char v125; // al
  _QWORD *v126; // rdx
  __int64 v127; // rax
  int *v128; // rax
  __int64 v129; // rcx
  __int64 v130; // rcx
  int v131; // eax
  unsigned int *v132; // rax
  unsigned int *v133; // r13
  unsigned int *v134; // r14
  __int64 v135; // rax
  __m128i v136; // xmm0
  __int64 v137; // rdx
  __int64 v138; // r8
  unsigned int v139; // eax
  unsigned int v140; // esi
  unsigned int v141; // ecx
  int v142; // edi
  __int64 v143; // r9
  unsigned int v145; // r8d
  size_t v146; // rsi
  unsigned int *v147; // rax
  _QWORD *v148; // rax
  _QWORD *v149; // rax
  void *v150; // rdi
  _QWORD *v151; // rax
  _QWORD *v152; // rax
  unsigned int *v153; // rsi
  char **v154; // r14
  __int64 v155; // rdx
  char **exception; // r14
  __int64 v157; // rdx
  char **v158; // r14
  __int64 v159; // rdx
  char **v160; // r14
  __int64 v161; // rdx
  __int64 v162; // [rsp+8h] [rbp-138h]
  __int64 v163; // [rsp+8h] [rbp-138h]
  __int64 v164; // [rsp+10h] [rbp-130h]
  __int64 v165; // [rsp+10h] [rbp-130h]
  _DWORD *v166; // [rsp+18h] [rbp-128h]
  _DWORD *v167; // [rsp+18h] [rbp-128h]
  _DWORD *v168; // [rsp+18h] [rbp-128h]
  _DWORD *v169; // [rsp+18h] [rbp-128h]
  _QWORD *v170; // [rsp+20h] [rbp-120h]
  __int64 v171; // [rsp+20h] [rbp-120h]
  __int64 v172; // [rsp+30h] [rbp-110h]
  unsigned int v173; // [rsp+30h] [rbp-110h]
  unsigned int v174; // [rsp+30h] [rbp-110h]
  void *v175; // [rsp+48h] [rbp-F8h]
  unsigned int v176; // [rsp+48h] [rbp-F8h]
  unsigned int v177; // [rsp+48h] [rbp-F8h]
  __int64 v178; // [rsp+48h] [rbp-F8h]
  __int64 v179; // [rsp+48h] [rbp-F8h]
  bool v180; // [rsp+5Bh] [rbp-E5h]
  char v182; // [rsp+5Ch] [rbp-E4h]
  char v183; // [rsp+5Ch] [rbp-E4h]
  unsigned int v184; // [rsp+5Ch] [rbp-E4h]
  _QWORD *v185; // [rsp+60h] [rbp-E0h]
  int v186; // [rsp+68h] [rbp-D8h]
  __int64 v187; // [rsp+68h] [rbp-D8h]
  _QWORD v188[4]; // [rsp+70h] [rbp-D0h] BYREF
  _QWORD v189[2]; // [rsp+90h] [rbp-B0h] BYREF
  __int64 v190; // [rsp+A0h] [rbp-A0h]
  __int64 v191; // [rsp+A8h] [rbp-98h]
  int v192[4]; // [rsp+B0h] [rbp-90h] BYREF
  int v193; // [rsp+C0h] [rbp-80h] BYREF
  char v194; // [rsp+C4h] [rbp-7Ch]
  int v195; // [rsp+D0h] [rbp-70h] BYREF
  char v196; // [rsp+D4h] [rbp-6Ch]
  __int64 v197; // [rsp+D8h] [rbp-68h]
  int v198; // [rsp+E0h] [rbp-60h] BYREF
  char v199; // [rsp+E4h] [rbp-5Ch]
  __int64 v200; // [rsp+E8h] [rbp-58h]
  __int64 v201; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v202; // [rsp+F8h] [rbp-48h]
  __int64 v203; // [rsp+100h] [rbp-40h] BYREF
  __int64 v204; // [rsp+108h] [rbp-38h]

  v5 = a2;
  v7 = *(_DWORD *)(a3 + 4);
  v8 = *(unsigned int *)(a2 + 8);
  v188[0] = 0;
  v9 = *(_DWORD *)(a2 + 4);
  v188[1] = 0;
  v10 = *(_DWORD *)(a3 + 8) + v8 + (v7 & 0x1FFFFFFF);
  v188[2] = 1;
  v188[3] = 0;
  v189[0] = 0;
  *(_DWORD *)(a1 + 768) += (v9 & 0x1FFFFFFF) + v10;
  v189[1] = 0;
  v190 = 1;
  v191 = 0;
  if ( !(_DWORD)v8 )
  {
LABEL_6:
    sub_1872CE0("");
    sub_1873130(114, 1313);
  }
  v11 = 0;
  while ( a4 != *(_DWORD *)(*(_QWORD *)(a2 + 24) + 4 * v11) )
  {
    if ( ++v11 == v8 )
      goto LABEL_6;
  }
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v188, (int *)(*(_QWORD *)(a2 + 32) + 32 * v11));
  v12 = *(unsigned int *)(a3 + 8);
  if ( !(_DWORD)v12 )
  {
LABEL_12:
    sub_1872CE0("");
    sub_1873130(114, 1313);
  }
  v13 = 0;
  while ( a4 != *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4 * v13) )
  {
    if ( ++v13 == v12 )
      goto LABEL_12;
  }
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v189, (int *)(*(_QWORD *)(a3 + 32) + 32 * v13));
  sub_1831620(qword_1C7F2C0, v188);
  v14 = *(_QWORD *)(a1 + 816);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = *(_QWORD *)(a1 + 824);
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 )
    {
      v185 = (_QWORD *)a1;
      v17 = v15 + 32 * v16;
      do
      {
        v18 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v15);
        v19 = v15 + 16;
        v15 += 32;
        sub_182CBA0(v18, v19);
      }
      while ( v15 != v17 );
      a1 = (__int64)v185;
      v15 = v185[103];
    }
    *(_DWORD *)(v15 - 4) = 0;
  }
  sub_3EBE30((__int64)&v201, a3 + 40, (__int64)v188);
  sub_3EBE30((__int64)&v195, v5 + 40, (__int64)v189);
  sub_27B340((__int64)v192, (__int64)&v195, (int *)&v201);
  sub_25A130((char *)&v195);
  sub_25A130((char *)&v201);
  v180 = 1;
  if ( (*(_BYTE *)(v5 + 7) & 0x20) == 0 )
    v180 = (*(_BYTE *)(a3 + 7) & 0x20) != 0;
  v20 = *(_DWORD *)(v5 + 8);
  v21 = 0;
  if ( v20 )
  {
    while ( 1 )
    {
      v31 = *(unsigned int *)(*(_QWORD *)(v5 + 24) + 4 * v21);
      if ( (_DWORD)v31 != a4 )
        break;
LABEL_38:
      if ( (unsigned int)++v21 >= v20 )
        goto LABEL_63;
    }
    v32 = *(_QWORD *)(a1 + 816);
    v33 = (unsigned int **)(a1 + 816);
    v34 = 0;
    if ( v32 )
    {
      v34 = *(_DWORD *)(v32 - 4);
      v35 = v34;
      if ( v34 != *(_DWORD *)(v32 - 8) )
        goto LABEL_42;
      v33 = (unsigned int **)(a1 + 816);
    }
    v176 = v34;
    sub_2FD3F0(v33);
    v32 = *(_QWORD *)(a1 + 816);
    v34 = v176;
    v35 = *(unsigned int *)(v32 - 4);
LABEL_42:
    *(_DWORD *)(v32 + 4 * v35) = v31;
    ++*(_DWORD *)(v32 - 4);
    *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4 * v31) = v34;
    v36 = *(_QWORD *)(v5 + 32) + 32 * v21;
    v201 = 0;
    v202 = 0;
    v37 = qword_1C7F2C0;
    v203 = 1;
    v204 = 0;
    if ( (*(_BYTE *)(v36 + 4) & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &v201, v36);
      if ( (*(_BYTE *)(v36 + 20) & 1) != 0 )
        goto LABEL_44;
    }
    else
    {
      LODWORD(v201) = *(_DWORD *)v36;
      if ( (*(_BYTE *)(v36 + 20) & 1) != 0 )
      {
LABEL_44:
        sub_182C690(v37, &v203, v36 + 16);
LABEL_27:
        v23 = qword_1C7F2C0;
        if ( (v203 & 0x100000000LL) != 0 || (_DWORD)v203 != 1 || (v190 & 0x100000000LL) != 0 || (_DWORD)v190 != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v201, v189);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, &v201, v189);
          sub_182CBA0(v23, &v203);
          BYTE4(v203) &= ~1u;
          LODWORD(v203) = 1;
        }
        v196 &= 0xFCu;
        v199 &= 0xFCu;
        v195 = 0;
        v24 = qword_1C7F2C0;
        v197 = 0;
        v198 = 1;
        v200 = 0;
        if ( (v201 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v195, &v201);
        else
          v195 = v201;
        if ( (v203 & 0x100000000LL) != 0 )
        {
          sub_182C690(v24, &v198, &v203);
        }
        else
        {
          v199 &= ~1u;
          v198 = v203;
        }
        v175 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v201);
        sub_182CBA0(v175, &v203);
        v25 = *(_QWORD **)(a1 + 824);
        if ( v25 )
        {
          v26 = *((unsigned int *)v25 - 1);
          if ( (_DWORD)v26 == *((_DWORD *)v25 - 2) )
          {
            v177 = (unsigned int)(3 * v26 + 1) >> 1;
            v38 = 32 * v177 + 8;
            if ( 32 * (int)v26 + 8 >= (unsigned int)v38 || (unsigned int)v26 >= (unsigned int)(3 * v26 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_161886(&v201, "Overflow encountered when expanding vector", v157);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v201);
              sub_233E40((__int64)&v201);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v39 = sub_186B270(v38);
            v40 = *(int **)(a1 + 824);
            v41 = (_DWORD *)v39;
            v25 = (_QWORD *)(v39 + 8);
            if ( v40 )
            {
              v42 = (unsigned int)*(v40 - 1);
              v43 = v39 + 8;
              *(_DWORD *)(v39 + 4) = v42;
              v44 = v40;
              v45 = &v40[8 * v42];
              if ( v40 != v45 )
              {
                do
                {
                  v46 = *v44;
                  v47 = *((_BYTE *)v44 + 4);
                  v44 += 8;
                  v43 += 32;
                  *(_DWORD *)(v43 - 32) = v46;
                  *(_BYTE *)(v43 - 28) = v47 & 3 | *(_BYTE *)(v43 - 28) & 0xFC;
                  v48 = *((_QWORD *)v44 - 3);
                  *((_QWORD *)v44 - 3) = 0;
                  *(_QWORD *)(v43 - 24) = v48;
                  v49 = *((_BYTE *)v44 - 12);
                  *(_DWORD *)(v43 - 16) = *(v44 - 4);
                  *(_BYTE *)(v43 - 12) = v49 & 3 | *(_BYTE *)(v43 - 12) & 0xFC;
                  v50 = *((_QWORD *)v44 - 1);
                  *((_QWORD *)v44 - 1) = 0;
                  *(_QWORD *)(v43 - 8) = v50;
                }
                while ( v44 != v45 );
              }
              v51 = (unsigned int)*(v40 - 1);
              if ( (_DWORD)v51 )
              {
                v170 = v25;
                v166 = v41;
                v162 = v5;
                v164 = a1;
                v52 = v40;
                v53 = &v40[8 * v51];
                do
                {
                  v54 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v52);
                  v55 = v52 + 4;
                  v52 += 8;
                  sub_182CBA0(v54, v55);
                }
                while ( v52 != v53 );
                a1 = v164;
                v25 = v170;
                v41 = v166;
                v5 = v162;
                v40 = *(int **)(v164 + 824);
              }
              v167 = v41;
              sub_186B220(v40 - 2);
              v41 = v167;
              v27 = &v25[4 * (unsigned int)v167[1]];
            }
            else
            {
              *(_DWORD *)(v39 + 4) = 0;
              v27 = (_QWORD *)(v39 + 8);
            }
            *(_QWORD *)(a1 + 824) = v25;
            *v41 = v177;
          }
          else
          {
            v27 = &v25[4 * v26];
          }
        }
        else
        {
          v149 = (_QWORD *)sub_186B270(0x48u);
          v25 = v149 + 1;
          *v149 = 2;
          *(_QWORD *)(a1 + 824) = v149 + 1;
          v27 = v149 + 1;
        }
        *(_DWORD *)v27 = v195;
        *((_BYTE *)v27 + 4) = v196 & 3 | *((_BYTE *)v27 + 4) & 0xFC;
        v28 = v197;
        v197 = 0;
        v27[1] = v28;
        *((_DWORD *)v27 + 4) = v198;
        *((_BYTE *)v27 + 20) = v199 & 3 | *((_BYTE *)v27 + 20) & 0xFC;
        v29 = v200;
        v200 = 0;
        v27[3] = v29;
        ++*((_DWORD *)v25 - 1);
        v30 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v195);
        sub_182CBA0(v30, &v198);
        v20 = *(_DWORD *)(v5 + 8);
        goto LABEL_38;
      }
    }
    v22 = *(_DWORD *)(v36 + 16);
    BYTE4(v203) &= ~1u;
    LODWORD(v203) = v22;
    goto LABEL_27;
  }
LABEL_63:
  v56 = *(_DWORD *)(a3 + 8);
  for ( i = 0; (unsigned int)i < v56; v56 = *(_DWORD *)(a3 + 8) )
  {
    while ( 1 )
    {
      v61 = *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4 * i);
      if ( v61 != a4 )
        break;
LABEL_71:
      if ( (unsigned int)++i >= v56 )
        goto LABEL_80;
    }
    v62 = *(unsigned int *)(*(_QWORD *)(a1 + 656) + 4LL * v61);
    if ( (_DWORD)v62 != -1 )
    {
      sub_3EBE30((__int64)&v201, *(_QWORD *)(a3 + 32) + 32 * i, (__int64)v188);
      v58 = *(_QWORD *)(a1 + 824) + 32 * v62;
      v59 = qword_1C7F2C0;
      if ( (_DWORD)v201 )
      {
        if ( *(_DWORD *)v58 )
        {
          if ( (*(_BYTE *)(v58 + 20) & 1) != 0
            || *(_DWORD *)(v58 + 16) != 1
            || (v203 & 0x100000000LL) != 0
            || (_DWORD)v203 != 1 )
          {
            sub_1851D20(qword_1C7F2C0, v58, &v201, v58);
          }
          else
          {
            sub_1831A80(qword_1C7F2C0, v58, &v201, v58);
            sub_182CBA0(v59, v58 + 16);
            *(_BYTE *)(v58 + 20) &= ~1u;
            *(_DWORD *)(v58 + 16) = 1;
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, v58, (int *)&v201);
        }
      }
      else
      {
        sub_27B950((__int64)qword_1C7F2C0, v58, (int *)v58);
      }
      v60 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v201);
      sub_182CBA0(v60, &v203);
      v56 = *(_DWORD *)(a3 + 8);
      goto LABEL_71;
    }
    v63 = *(_QWORD *)(a1 + 816);
    if ( !v63 || (v64 = *(unsigned int *)(v63 - 4), (_DWORD)v64 == *(_DWORD *)(v63 - 8)) )
    {
      v173 = *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4 * i);
      sub_2FD3F0((unsigned int **)(a1 + 816));
      v63 = *(_QWORD *)(a1 + 816);
      v61 = v173;
      v64 = *(unsigned int *)(v63 - 4);
    }
    *(_DWORD *)(v63 + 4 * v64) = v61;
    ++*(_DWORD *)(v63 - 4);
    sub_3EBE30((__int64)&v195, *(_QWORD *)(a3 + 32) + 32 * i, (__int64)v188);
    v65 = *(_QWORD **)(a1 + 824);
    if ( v65 )
    {
      v66 = *((unsigned int *)v65 - 1);
      if ( (_DWORD)v66 == *((_DWORD *)v65 - 2) )
      {
        v174 = (unsigned int)(3 * v66 + 1) >> 1;
        v101 = 32 * v174 + 8;
        if ( 32 * (int)v66 + 8 >= (unsigned int)v101 || (unsigned int)v66 >= (unsigned int)(3 * v66 + 1) >> 1 )
        {
          v160 = (char **)__cxa_allocate_exception(0x28u);
          sub_161886(&v201, "Overflow encountered when expanding vector", v161);
          *v160 = (char *)off_1C63128;
          sub_2333C0(v160 + 1, &v201);
          sub_233E40((__int64)&v201);
          __cxa_throw(v160, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v102 = sub_186B270(v101);
        v103 = *(int **)(a1 + 824);
        v104 = (_DWORD *)v102;
        v65 = (_QWORD *)(v102 + 8);
        if ( v103 )
        {
          v105 = (unsigned int)*(v103 - 1);
          v106 = v65;
          v104[1] = v105;
          v107 = &v103[8 * v105];
          for ( j = v103; v107 != j; *(v106 - 1) = v113 )
          {
            v109 = *j;
            v110 = *((_BYTE *)j + 4);
            j += 8;
            v106 += 4;
            *((_DWORD *)v106 - 8) = v109;
            *((_BYTE *)v106 - 28) = v110 & 3 | *((_BYTE *)v106 - 28) & 0xFC;
            v111 = *((_QWORD *)j - 3);
            *((_QWORD *)j - 3) = 0;
            *(v106 - 3) = v111;
            v112 = *((_BYTE *)j - 12);
            *((_DWORD *)v106 - 4) = *(j - 4);
            *((_BYTE *)v106 - 12) = v112 & 3 | *((_BYTE *)v106 - 12) & 0xFC;
            v113 = *((_QWORD *)j - 1);
            *((_QWORD *)j - 1) = 0;
          }
          v114 = (unsigned int)*(v103 - 1);
          if ( (_DWORD)v114 )
          {
            v171 = i;
            v168 = v104;
            v165 = a1;
            v115 = &v103[8 * v114];
            v163 = v5;
            v116 = v103;
            v117 = v65;
            do
            {
              v118 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v116);
              v119 = v116 + 4;
              v116 += 8;
              sub_182CBA0(v118, v119);
            }
            while ( v115 != v116 );
            a1 = v165;
            v65 = v117;
            i = v171;
            v104 = v168;
            v5 = v163;
            v103 = *(int **)(v165 + 824);
          }
          v169 = v104;
          sub_186B220(v103 - 2);
          v104 = v169;
          v67 = &v65[4 * (unsigned int)v169[1]];
        }
        else
        {
          *(_DWORD *)(v102 + 4) = 0;
          v67 = (_QWORD *)(v102 + 8);
        }
        *(_QWORD *)(a1 + 824) = v65;
        *v104 = v174;
      }
      else
      {
        v67 = &v65[4 * v66];
      }
    }
    else
    {
      v151 = (_QWORD *)sub_186B270(0x48u);
      v65 = v151 + 1;
      *v151 = 2;
      *(_QWORD *)(a1 + 824) = v151 + 1;
      v67 = v151 + 1;
    }
    ++i;
    *(_DWORD *)v67 = v195;
    *((_BYTE *)v67 + 4) = v196 & 3 | *((_BYTE *)v67 + 4) & 0xFC;
    v68 = v197;
    v197 = 0;
    v67[1] = v68;
    *((_DWORD *)v67 + 4) = v198;
    *((_BYTE *)v67 + 20) = v199 & 3 | *((_BYTE *)v67 + 20) & 0xFC;
    v69 = v200;
    v200 = 0;
    v67[3] = v69;
    ++*((_DWORD *)v65 - 1);
    sub_25A130((char *)&v195);
  }
LABEL_80:
  v70 = *(_QWORD *)(a1 + 816);
  v71 = *(_QWORD *)(a1 + 824);
  if ( v70 )
  {
    v72 = *(_DWORD *)(v70 - 4);
    if ( !v72 )
    {
      v77 = v180;
LABEL_89:
      *(_DWORD *)(v70 - 4) = v72;
      goto LABEL_90;
    }
    v73 = v72;
    v74 = 0;
    v72 = 0;
    v75 = 1;
    do
    {
      v76 = (int *)(v71 + 32 * v74);
      if ( *v76 )
      {
        v75 &= *(_BYTE *)(*(_QWORD *)(a1 + 600) + *(unsigned int *)(v70 + 4 * v74)) != 0;
        if ( v72 != (_DWORD)v74 )
        {
          v178 = v73;
          *(_DWORD *)(v70 + 4LL * v72) = *(_DWORD *)(v70 + 4 * v74);
          v182 = v75;
          sub_27B950((__int64)qword_1C7F2C0, v71 + 32LL * v72, v76);
          v70 = *(_QWORD *)(a1 + 816);
          v71 = *(_QWORD *)(a1 + 824);
          v73 = v178;
          v75 = v182;
        }
        ++v72;
      }
      ++v74;
    }
    while ( v73 != v74 );
    v77 = v180 & v75;
    if ( v70 )
      goto LABEL_89;
  }
  else
  {
    v77 = v180;
    v72 = 0;
  }
LABEL_90:
  if ( v71 )
  {
    v78 = 32LL * v72;
    v79 = 32LL * *(unsigned int *)(v71 - 4);
    if ( v78 != v79 )
    {
      v183 = v77;
      v172 = v5;
      v179 = a1;
      v80 = v71 + v78;
      v81 = v71 + v79;
      do
      {
        v82 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v80);
        v83 = v80 + 16;
        v80 += 32;
        sub_182CBA0(v82, v83);
      }
      while ( v81 != v80 );
      a1 = v179;
      v77 = v183;
      v5 = v172;
      v71 = *(_QWORD *)(v179 + 824);
    }
    *(_DWORD *)(v71 - 4) = v72;
  }
  if ( v77 )
  {
    v195 = 0;
    v196 &= 0xFCu;
    v199 &= 0xFCu;
    v197 = 0;
    v198 = 1;
    v200 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v195, v192);
    LODWORD(v201) = 1;
    BYTE4(v201) &= 0xFCu;
    v150 = qword_1C7F2C0;
    v202 = 0;
    LODWORD(v203) = 1;
    BYTE4(v203) &= 0xFCu;
    v204 = 0;
    if ( (v194 & 1) != 0 || v193 != 1 )
    {
      sub_1852000(qword_1C7F2C0, v192, &v201);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, v192, &v201);
      sub_182CBA0(v150, &v193);
      v194 &= ~1u;
      v193 = 1;
    }
    sub_25A130((char *)&v195);
    v180 = 0;
  }
  if ( *(_DWORD *)(v5 + 8) )
  {
    v84 = *(_QWORD *)(v5 + 24);
    v85 = *(_QWORD *)(a1 + 656);
    v86 = 0;
    do
    {
      v87 = *(unsigned int *)(v84 + 4 * v86++);
      *(_DWORD *)(v85 + 4 * v87) = -1;
    }
    while ( (unsigned int)v86 < *(_DWORD *)(v5 + 8) );
  }
  v88 = *(_QWORD *)(a1 + 816);
  if ( (!v88 || !*(_DWORD *)(v88 - 4)) && (v192[0] > 0 || !v180 && !v192[0]) )
  {
LABEL_119:
    v100 = 0;
    goto LABEL_166;
  }
  v89 = *(_QWORD *)(a1 + 832);
  if ( v89 )
    *(_DWORD *)(v89 - 4) = 0;
  v90 = 0;
  if ( (*(_DWORD *)(v5 + 4) & 0x1FFFFFFF) != 0 )
  {
    do
    {
      v186 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v90);
      v93 = -v186;
      if ( v186 > 0 )
        v93 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v90);
      *(_BYTE *)(*(_QWORD *)(a1 + 568) + v93) = (v186 >> 31) | 1;
      v94 = *(_QWORD **)(a1 + 832);
      if ( v94 )
      {
        v95 = *((unsigned int *)v94 - 1);
        if ( (_DWORD)v95 == *((_DWORD *)v94 - 2) )
        {
          v96 = (unsigned int)(3 * v95 + 1) >> 1;
          v97 = 4 * v96 + 8;
          if ( 4 * (int)v95 + 8 >= (unsigned int)v97 || (unsigned int)v95 >= v96 )
          {
            v158 = (char **)__cxa_allocate_exception(0x28u);
            sub_161886(&v201, "Overflow encountered when expanding vector", v159);
            *v158 = (char *)off_1C63128;
            sub_2333C0(v158 + 1, &v201);
            sub_233E40((__int64)&v201);
            __cxa_throw(v158, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v98 = (unsigned int *)sub_186B300(v94 - 1, v97);
          v94 = v98 + 2;
          *v98 = v96;
          v99 = v98[1];
          *(_QWORD *)(a1 + 832) = v94;
          v91 = (int *)v94 + v99;
        }
        else
        {
          v91 = (int *)v94 + v95;
        }
      }
      else
      {
        v148 = (_QWORD *)sub_186B270(0x10u);
        v94 = v148 + 1;
        *v148 = 2;
        *(_QWORD *)(a1 + 832) = v148 + 1;
        v91 = (int *)(v148 + 1);
      }
      ++v90;
      *v91 = v186;
      ++*((_DWORD *)v94 - 1);
      v92 = *(_DWORD *)(v5 + 4) & 0x1FFFFFFF;
    }
    while ( (unsigned int)v90 < v92 );
    v120 = *(_DWORD *)(a3 + 4) & 0x1FFFFFFF;
    if ( !v120 )
    {
      if ( !v92 )
        goto LABEL_155;
      goto LABEL_197;
    }
  }
  else
  {
    v120 = *(_DWORD *)(a3 + 4) & 0x1FFFFFFF;
    if ( !v120 )
      goto LABEL_155;
  }
  v187 = 0;
  v121 = *(_QWORD *)(a1 + 568);
  for ( k = *(_QWORD *)(a3 + 16); ; k = *(_QWORD *)(a3 + 16) )
  {
    while ( 1 )
    {
      v123 = *(_DWORD *)(k + 4 * v187);
      v124 = -v123;
      if ( v123 > 0 )
        v124 = *(_DWORD *)(k + 4 * v187);
      v125 = *(_BYTE *)(v121 + v124);
      if ( !v125 )
        break;
      if ( v125 == 1 )
      {
        v129 = v187;
        v123 = (unsigned int)v123 >> 31;
        if ( (int)v187 + 1 >= v120 )
          goto LABEL_168;
      }
      else
      {
        if ( v125 != -1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 1425);
        }
        v129 = v187;
        LOBYTE(v123) = v123 >= 0;
        if ( (int)v187 + 1 >= v120 )
        {
LABEL_168:
          if ( (*(_DWORD *)(v5 + 4) & 0x1FFFFFFF) != 0 )
            goto LABEL_149;
          goto LABEL_154;
        }
      }
      v187 = v129 + 1;
      if ( (_BYTE)v123 )
      {
        if ( (*(_DWORD *)(v5 + 4) & 0x1FFFFFFF) == 0 )
          goto LABEL_119;
        goto LABEL_149;
      }
    }
    v126 = *(_QWORD **)(a1 + 832);
    if ( v126 )
    {
      v127 = *((unsigned int *)v126 - 1);
      if ( (_DWORD)v127 == *((_DWORD *)v126 - 2) )
      {
        v145 = (unsigned int)(3 * v127 + 1) >> 1;
        v146 = 4 * v145 + 8;
        if ( 4 * (int)v127 + 8 >= (unsigned int)v146 || (unsigned int)v127 >= v145 )
        {
          v154 = (char **)__cxa_allocate_exception(0x28u);
          sub_161886(&v201, "Overflow encountered when expanding vector", v155);
          *v154 = (char *)off_1C63128;
          sub_2333C0(v154 + 1, &v201);
          sub_233E40((__int64)&v201);
          __cxa_throw(v154, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v184 = (unsigned int)(3 * v127 + 1) >> 1;
        v147 = (unsigned int *)sub_186B300(v126 - 1, v146);
        v126 = v147 + 2;
        *(_QWORD *)(a1 + 832) = v147 + 2;
        *v147 = v184;
        v128 = (int *)&v147[v147[1] + 2];
      }
      else
      {
        v128 = (int *)v126 + v127;
      }
    }
    else
    {
      v152 = (_QWORD *)sub_186B270(0x10u);
      v126 = v152 + 1;
      *v152 = 2;
      *(_QWORD *)(a1 + 832) = v152 + 1;
      v128 = (int *)(v152 + 1);
    }
    *v128 = v123;
    ++*((_DWORD *)v126 - 1);
    v120 = *(_DWORD *)(a3 + 4) & 0x1FFFFFFF;
    if ( (int)v187 + 1 >= v120 )
      break;
    ++v187;
    v121 = *(_QWORD *)(a1 + 568);
  }
  if ( (*(_DWORD *)(v5 + 4) & 0x1FFFFFFF) == 0 )
    goto LABEL_155;
LABEL_197:
  v121 = *(_QWORD *)(a1 + 568);
  LOBYTE(v123) = 0;
LABEL_149:
  v130 = 0;
  while ( 1 )
  {
    v131 = -*(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v130);
    if ( *(int *)(*(_QWORD *)(v5 + 16) + 4 * v130) > 0 )
      v131 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v130);
    ++v130;
    *(_BYTE *)(v121 + v131) = 0;
    if ( (unsigned int)v130 >= (*(_DWORD *)(v5 + 4) & 0x1FFFFFFFu) )
      break;
    v121 = *(_QWORD *)(a1 + 568);
  }
LABEL_154:
  if ( (_BYTE)v123 )
    goto LABEL_119;
LABEL_155:
  v132 = *(unsigned int **)(v5 + 72);
  v133 = *(unsigned int **)(a3 + 72);
  v134 = v132;
  if ( v132 )
  {
    if ( v133 != v132 && v133 )
    {
      v135 = sub_17E9C90(*(_QWORD *)(*(_QWORD *)a1 + 656LL), 24);
      v136 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v134, (__m128i)(unsigned __int64)v133);
      *v134 = (*v134 + 1) & 0x3FFFFFFF | *v134 & 0xC0000000;
      v134 = (unsigned int *)v135;
      *v133 = (*v133 + 1) & 0x3FFFFFFF | *v133 & 0xC0000000;
      *(_QWORD *)v135 = 0;
      *(__m128i *)(v135 + 8) = v136;
    }
  }
  else
  {
    v134 = v133;
  }
  v137 = *(_QWORD *)(a1 + 832);
  v138 = *(_QWORD *)(a1 + 816);
  if ( v137 )
  {
    v139 = *(_DWORD *)(v137 - 4);
    v140 = v139;
    if ( v139 )
    {
      v142 = v180;
      v143 = *(_QWORD *)(a1 + 824);
      if ( v138 )
        v141 = *(_DWORD *)(v138 - 4);
      else
        v141 = 0;
      goto LABEL_165;
    }
    if ( v138 )
    {
      v141 = *(_DWORD *)(v138 - 4);
      if ( v141 )
      {
        v142 = v180;
        v143 = *(_QWORD *)(a1 + 824);
LABEL_164:
        v140 = v139;
LABEL_165:
        v100 = sub_C6F160(a1, v140, v137, v141, v138, v143, (__int64)v192, v142, v134);
        goto LABEL_166;
      }
    }
  }
  else if ( v138 )
  {
    v141 = *(_DWORD *)(v138 - 4);
    if ( v141 )
    {
      v142 = v180;
      v143 = *(_QWORD *)(a1 + 824);
      v140 = 0;
      goto LABEL_165;
    }
  }
  if ( v192[0] >= 0 && (v192[0] || !v180) )
  {
    v142 = v180;
    v143 = *(_QWORD *)(a1 + 824);
    v141 = 0;
    if ( v138 )
      v141 = *(_DWORD *)(v138 - 4);
    if ( !v137 )
    {
      v140 = 0;
      goto LABEL_165;
    }
    v139 = *(_DWORD *)(v137 - 4);
    goto LABEL_164;
  }
  *(_BYTE *)(a1 + 772) = 1;
  if ( v134 )
    *v134 = (*v134 + 1) & 0x3FFFFFFF | *v134 & 0xC0000000;
  v153 = *(unsigned int **)(a1 + 776);
  if ( v153 )
    sub_234C20((__int64 *)(*(_QWORD *)(a1 + 784) + 648LL), v153);
  *(_QWORD *)(a1 + 776) = v134;
  v100 = 0;
LABEL_166:
  sub_25A130((char *)v192);
  sub_25A130((char *)v189);
  sub_25A130((char *)v188);
  return v100;
}

