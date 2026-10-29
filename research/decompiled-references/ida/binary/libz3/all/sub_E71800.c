__int64 __fastcall sub_E71800(__int64 a1, unsigned int *a2, __int64 a3, int a4)
{
  __int64 v5; // r13
  unsigned int *v6; // rbx
  __int64 v7; // rax
  int v8; // esi
  unsigned int v9; // ecx
  int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r12
  void *v18; // rbx
  __int64 v19; // rsi
  void *v20; // rdi
  unsigned int v21; // eax
  __int64 v22; // r12
  __int64 v23; // rsi
  _QWORD *v24; // rsi
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  void *v29; // r15
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int **v32; // rdi
  unsigned int v33; // ecx
  __int64 v34; // rdx
  size_t v35; // rdi
  __int64 v36; // rax
  int *v37; // r15
  _DWORD *v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rdx
  int *v41; // rax
  int *v42; // rdi
  int v43; // ecx
  char v44; // r8
  __int64 v45; // rcx
  char v46; // r8
  __int64 v47; // rcx
  __int64 v48; // rax
  int *v49; // rbx
  int *v50; // r15
  void *v51; // r12
  int *v52; // rsi
  __int64 v53; // r12
  unsigned int v54; // eax
  __int64 v55; // r15
  void *v56; // rdi
  void *v57; // r15
  unsigned int v58; // ecx
  __int64 v59; // r15
  __int64 v60; // rax
  __int64 v61; // rdx
  _QWORD *v62; // rsi
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  unsigned int v69; // r14d
  __int64 v70; // r8
  __int64 v71; // r12
  char v72; // r15
  int *v73; // rdx
  char v74; // r15
  __int64 v75; // rsi
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // r12
  void *v79; // r13
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r12
  int *v88; // rax
  unsigned int v89; // eax
  int v90; // edi
  int v91; // eax
  _QWORD *v92; // rdx
  __int64 v93; // rax
  unsigned int v94; // r14d
  size_t v95; // rsi
  unsigned int *v96; // rax
  __int64 v97; // rax
  size_t v98; // rdi
  __int64 v99; // rax
  char *v100; // rdi
  _DWORD *v101; // r8
  __int64 v102; // rax
  _QWORD *v103; // rdx
  char *v104; // r9
  char *i; // rax
  int v106; // ecx
  char v107; // r10
  __int64 v108; // rcx
  char v109; // r10
  __int64 v110; // rcx
  __int64 v111; // rax
  char *v112; // r15
  char *v113; // rbx
  char *v114; // rdi
  unsigned int v115; // esi
  __int64 v116; // rdx
  __int64 v117; // r15
  __int64 j; // rdi
  int v119; // ecx
  int v120; // eax
  char v121; // al
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rsi
  int v125; // eax
  unsigned int *v126; // rbx
  unsigned int *v127; // r14
  __int64 v128; // rax
  __m128i v129; // xmm0
  __int64 v130; // rdx
  __int64 v131; // r8
  unsigned int v132; // eax
  unsigned int v133; // esi
  unsigned int v134; // ecx
  int v135; // edi
  __int64 v136; // r9
  __int64 v137; // rbx
  _QWORD *v139; // rax
  _QWORD *v140; // rax
  void *v141; // rdi
  _QWORD *v142; // rax
  unsigned int *v143; // rsi
  char **v144; // r14
  char **exception; // r14
  char **v146; // r14
  unsigned int *v147; // [rsp+0h] [rbp-160h]
  __int64 v148; // [rsp+8h] [rbp-158h]
  unsigned int *v149; // [rsp+8h] [rbp-158h]
  _DWORD *v150; // [rsp+10h] [rbp-150h]
  _DWORD *v151; // [rsp+10h] [rbp-150h]
  _DWORD *v152; // [rsp+10h] [rbp-150h]
  _DWORD *v153; // [rsp+10h] [rbp-150h]
  _QWORD *v154; // [rsp+18h] [rbp-148h]
  bool v155; // [rsp+2Fh] [rbp-131h]
  unsigned int v156; // [rsp+30h] [rbp-130h]
  unsigned int v157; // [rsp+30h] [rbp-130h]
  unsigned int *v158; // [rsp+30h] [rbp-130h]
  unsigned int v159; // [rsp+30h] [rbp-130h]
  unsigned int v160; // [rsp+30h] [rbp-130h]
  __int64 v161; // [rsp+38h] [rbp-128h]
  __int64 v162; // [rsp+38h] [rbp-128h]
  unsigned int *v163; // [rsp+58h] [rbp-108h]
  int v165; // [rsp+68h] [rbp-F8h]
  _QWORD v166[4]; // [rsp+70h] [rbp-F0h] BYREF
  _QWORD v167[4]; // [rsp+90h] [rbp-D0h] BYREF
  int v168; // [rsp+B0h] [rbp-B0h] BYREF
  char v169; // [rsp+B4h] [rbp-ACh]
  __int64 v170; // [rsp+B8h] [rbp-A8h]
  int v171; // [rsp+C0h] [rbp-A0h] BYREF
  char v172; // [rsp+C4h] [rbp-9Ch]
  __int64 v173; // [rsp+C8h] [rbp-98h]
  int v174[8]; // [rsp+D0h] [rbp-90h] BYREF
  int v175; // [rsp+F0h] [rbp-70h] BYREF
  char v176; // [rsp+F4h] [rbp-6Ch]
  __int64 v177; // [rsp+F8h] [rbp-68h]
  int v178; // [rsp+100h] [rbp-60h] BYREF
  char v179; // [rsp+104h] [rbp-5Ch]
  __int64 v180; // [rsp+108h] [rbp-58h]
  __int64 v181; // [rsp+110h] [rbp-50h] BYREF
  __int64 v182; // [rsp+118h] [rbp-48h]
  __int64 v183; // [rsp+120h] [rbp-40h] BYREF
  __int64 v184; // [rsp+128h] [rbp-38h]

  v5 = a1;
  v6 = a2;
  v7 = a2[2];
  v8 = *(_DWORD *)(a3 + 4);
  v166[0] = 0;
  v9 = v6[1];
  v166[1] = 0;
  v166[2] = 1;
  v10 = *(_DWORD *)(a3 + 8) + v7 + (v8 & 0x1FFFFFFF);
  v166[3] = 0;
  v167[0] = 0;
  *(_DWORD *)(a1 + 752) += (v9 & 0x1FFFFFFF) + v10;
  v167[1] = 0;
  v167[2] = 1;
  v167[3] = 0;
  if ( !(_DWORD)v7 )
  {
LABEL_6:
    sub_1872CE0("");
    sub_1873130(114, 1893);
  }
  v11 = 0;
  while ( a4 != *(_DWORD *)(*((_QWORD *)v6 + 3) + 4 * v11) )
  {
    if ( ++v11 == v7 )
      goto LABEL_6;
  }
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v166, (int *)(*((_QWORD *)v6 + 4) + 32 * v11));
  v12 = *(unsigned int *)(a3 + 8);
  if ( !(_DWORD)v12 )
  {
LABEL_12:
    sub_1872CE0("");
    sub_1873130(114, 1893);
  }
  v13 = 0;
  while ( a4 != *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4 * v13) )
  {
    if ( ++v13 == v12 )
      goto LABEL_12;
  }
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v167, (int *)(*(_QWORD *)(a3 + 32) + 32 * v13));
  sub_1831620(qword_1C7F2C0, v166);
  v14 = *(_QWORD *)(a1 + 800);
  if ( v14 )
    *(_DWORD *)(v14 - 4) = 0;
  v15 = *(_QWORD *)(a1 + 808);
  if ( v15 )
  {
    v16 = *(unsigned int *)(v15 - 4);
    if ( (_DWORD)v16 )
    {
      v163 = v6;
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
      v6 = v163;
      v15 = *(_QWORD *)(a1 + 808);
    }
    *(_DWORD *)(v15 - 4) = 0;
  }
  sub_3EBE30((__int64)&v175, a3 + 40, (__int64)v166);
  sub_3EBE30((__int64)v174, (__int64)(v6 + 10), (__int64)v167);
  v181 = 0;
  v182 = 0;
  v183 = 1;
  v184 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v181, v174);
  v20 = qword_1C7F2C0;
  if ( v175 )
  {
    if ( (_DWORD)v181 )
    {
      if ( (v183 & 0x100000000LL) != 0 || (_DWORD)v183 != 1 || (v179 & 1) != 0 || v178 != 1 )
      {
        sub_1851D20(qword_1C7F2C0, &v181, &v175, &v181);
      }
      else
      {
        sub_1831A80(qword_1C7F2C0, &v181, &v175, &v181);
        sub_182CBA0(v20, &v183);
        BYTE4(v183) &= ~1u;
        LODWORD(v183) = 1;
      }
    }
    else
    {
      sub_27B950((__int64)qword_1C7F2C0, (__int64)&v181, &v175);
    }
  }
  else
  {
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v181, (int *)&v181);
  }
  v168 = 0;
  v169 &= 0xFCu;
  v172 &= 0xFCu;
  v170 = 0;
  v171 = 1;
  v173 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v168, (int *)&v181);
  sub_25A130((char *)&v181);
  sub_25A130((char *)v174);
  sub_25A130((char *)&v175);
  v155 = 1;
  if ( (*((_BYTE *)v6 + 7) & 0x20) == 0 )
    v155 = (*(_BYTE *)(a3 + 7) & 0x20) != 0;
  v21 = v6[2];
  v22 = 0;
  if ( v21 )
  {
    while ( 1 )
    {
      v30 = *(unsigned int *)(*((_QWORD *)v6 + 3) + 4 * v22);
      if ( (_DWORD)v30 != a4 )
        break;
LABEL_35:
      if ( (unsigned int)++v22 >= v21 )
        goto LABEL_52;
    }
    v31 = *(_QWORD *)(v5 + 800);
    v32 = (unsigned int **)(v5 + 800);
    v33 = 0;
    if ( v31 )
    {
      v33 = *(_DWORD *)(v31 - 4);
      v34 = v33;
      if ( v33 != *(_DWORD *)(v31 - 8) )
      {
LABEL_31:
        *(_DWORD *)(v31 + 4 * v34) = v30;
        ++*(_DWORD *)(v31 - 4);
        v23 = *((_QWORD *)v6 + 4) + 32 * v22;
        *(_DWORD *)(*(_QWORD *)(v5 + 664) + 4 * v30) = v33;
        sub_3EBE30((__int64)&v175, v23, (__int64)v167);
        v24 = *(_QWORD **)(v5 + 808);
        if ( v24 )
        {
          v25 = *((unsigned int *)v24 - 1);
          if ( (_DWORD)v25 == *((_DWORD *)v24 - 2) )
          {
            v157 = (unsigned int)(3 * v25 + 1) >> 1;
            v35 = 32 * v157 + 8;
            if ( 32 * (int)v25 + 8 >= (unsigned int)v35 || (unsigned int)v25 >= (unsigned int)(3 * v25 + 1) >> 1 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_E65BE0(&v181, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v181);
              sub_233E40((__int64)&v181);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v36 = sub_186B270(v35);
            v37 = *(int **)(v5 + 808);
            v38 = (_DWORD *)v36;
            v24 = (_QWORD *)(v36 + 8);
            if ( v37 )
            {
              v39 = (unsigned int)*(v37 - 1);
              v40 = v36 + 8;
              *(_DWORD *)(v36 + 4) = v39;
              v41 = v37;
              v42 = &v37[8 * v39];
              if ( v37 != v42 )
              {
                do
                {
                  v43 = *v41;
                  v44 = *((_BYTE *)v41 + 4);
                  v41 += 8;
                  v40 += 32;
                  *(_DWORD *)(v40 - 32) = v43;
                  *(_BYTE *)(v40 - 28) = v44 & 3 | *(_BYTE *)(v40 - 28) & 0xFC;
                  v45 = *((_QWORD *)v41 - 3);
                  *((_QWORD *)v41 - 3) = 0;
                  *(_QWORD *)(v40 - 24) = v45;
                  v46 = *((_BYTE *)v41 - 12);
                  *(_DWORD *)(v40 - 16) = *(v41 - 4);
                  *(_BYTE *)(v40 - 12) = v46 & 3 | *(_BYTE *)(v40 - 12) & 0xFC;
                  v47 = *((_QWORD *)v41 - 1);
                  *((_QWORD *)v41 - 1) = 0;
                  *(_QWORD *)(v40 - 8) = v47;
                }
                while ( v42 != v41 );
              }
              v48 = (unsigned int)*(v37 - 1);
              if ( (_DWORD)v48 )
              {
                v154 = v24;
                v150 = v38;
                v148 = v22;
                v147 = v6;
                v49 = v37;
                v50 = &v37[8 * v48];
                do
                {
                  v51 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, v49);
                  v52 = v49 + 4;
                  v49 += 8;
                  sub_182CBA0(v51, v52);
                }
                while ( v49 != v50 );
                v24 = v154;
                v38 = v150;
                v22 = v148;
                v6 = v147;
                v37 = *(int **)(v5 + 808);
              }
              v151 = v38;
              sub_186B220(v37 - 2);
              v38 = v151;
              v26 = &v24[4 * (unsigned int)v151[1]];
            }
            else
            {
              *(_DWORD *)(v36 + 4) = 0;
              v26 = (_QWORD *)(v36 + 8);
            }
            *(_QWORD *)(v5 + 808) = v24;
            *v38 = v157;
          }
          else
          {
            v26 = &v24[4 * v25];
          }
        }
        else
        {
          v140 = (_QWORD *)sub_186B270(0x48u);
          v24 = v140 + 1;
          *v140 = 2;
          *(_QWORD *)(v5 + 808) = v140 + 1;
          v26 = v140 + 1;
        }
        *(_DWORD *)v26 = v175;
        *((_BYTE *)v26 + 4) = v176 & 3 | *((_BYTE *)v26 + 4) & 0xFC;
        v27 = v177;
        v177 = 0;
        v26[1] = v27;
        *((_DWORD *)v26 + 4) = v178;
        *((_BYTE *)v26 + 20) = v179 & 3 | *((_BYTE *)v26 + 20) & 0xFC;
        v28 = v180;
        v180 = 0;
        v26[3] = v28;
        ++*((_DWORD *)v24 - 1);
        v29 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v175);
        sub_182CBA0(v29, &v178);
        v21 = v6[2];
        goto LABEL_35;
      }
      v32 = (unsigned int **)(v5 + 800);
    }
    v156 = v33;
    sub_2FD3F0(v32);
    v31 = *(_QWORD *)(v5 + 800);
    v33 = v156;
    v34 = *(unsigned int *)(v31 - 4);
    goto LABEL_31;
  }
LABEL_52:
  v53 = 0;
  v54 = *(_DWORD *)(a3 + 8);
  if ( v54 )
  {
    do
    {
      while ( 1 )
      {
        v58 = *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4 * v53);
        if ( v58 != a4 )
          break;
LABEL_60:
        if ( (unsigned int)++v53 >= v54 )
          goto LABEL_69;
      }
      v59 = *(unsigned int *)(*(_QWORD *)(v5 + 664) + 4LL * v58);
      if ( (_DWORD)v59 != -1 )
      {
        sub_3EBE30((__int64)&v181, *(_QWORD *)(a3 + 32) + 32 * v53, (__int64)v166);
        v55 = *(_QWORD *)(v5 + 808) + 32 * v59;
        v56 = qword_1C7F2C0;
        if ( (_DWORD)v181 )
        {
          if ( *(_DWORD *)v55 )
          {
            if ( (*(_BYTE *)(v55 + 20) & 1) != 0
              || *(_DWORD *)(v55 + 16) != 1
              || (v183 & 0x100000000LL) != 0
              || (_DWORD)v183 != 1 )
            {
              sub_1851D20(qword_1C7F2C0, v55, &v181, v55);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, v55, &v181, v55);
              sub_182CBA0(v56, v55 + 16);
              *(_BYTE *)(v55 + 20) &= ~1u;
              *(_DWORD *)(v55 + 16) = 1;
            }
          }
          else
          {
            sub_27B950((__int64)qword_1C7F2C0, v55, (int *)&v181);
          }
        }
        else
        {
          sub_27B950((__int64)qword_1C7F2C0, v55, (int *)v55);
        }
        v57 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v181);
        sub_182CBA0(v57, &v183);
        v54 = *(_DWORD *)(a3 + 8);
        goto LABEL_60;
      }
      v60 = *(_QWORD *)(v5 + 800);
      if ( !v60 || (v61 = *(unsigned int *)(v60 - 4), (_DWORD)v61 == *(_DWORD *)(v60 - 8)) )
      {
        v159 = *(_DWORD *)(*(_QWORD *)(a3 + 24) + 4 * v53);
        sub_2FD3F0((unsigned int **)(v5 + 800));
        v60 = *(_QWORD *)(v5 + 800);
        v58 = v159;
        v61 = *(unsigned int *)(v60 - 4);
      }
      *(_DWORD *)(v60 + 4 * v61) = v58;
      ++*(_DWORD *)(v60 - 4);
      sub_3EBE30((__int64)&v175, *(_QWORD *)(a3 + 32) + 32 * v53, (__int64)v166);
      v62 = *(_QWORD **)(v5 + 808);
      if ( v62 )
      {
        v63 = *((unsigned int *)v62 - 1);
        if ( (_DWORD)v63 == *((_DWORD *)v62 - 2) )
        {
          v160 = (unsigned int)(3 * v63 + 1) >> 1;
          v98 = 32 * v160 + 8;
          if ( 32 * (int)v63 + 8 >= (unsigned int)v98 || (unsigned int)v63 >= (unsigned int)(3 * v63 + 1) >> 1 )
          {
            v146 = (char **)__cxa_allocate_exception(0x28u);
            sub_E65BE0(&v181, "Overflow encountered when expanding vector");
            *v146 = (char *)off_1C63128;
            sub_2333C0(v146 + 1, &v181);
            sub_233E40((__int64)&v181);
            __cxa_throw(v146, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v99 = sub_186B270(v98);
          v100 = *(char **)(v5 + 808);
          v101 = (_DWORD *)v99;
          v62 = (_QWORD *)(v99 + 8);
          if ( v100 )
          {
            v102 = *((unsigned int *)v100 - 1);
            v103 = v62;
            v101[1] = v102;
            v104 = &v100[32 * v102];
            for ( i = v100; v104 != i; *(v103 - 1) = v110 )
            {
              v106 = *(_DWORD *)i;
              v107 = i[4];
              i += 32;
              v103 += 4;
              *((_DWORD *)v103 - 8) = v106;
              *((_BYTE *)v103 - 28) = v107 & 3 | *((_BYTE *)v103 - 28) & 0xFC;
              v108 = *((_QWORD *)i - 3);
              *((_QWORD *)i - 3) = 0;
              *(v103 - 3) = v108;
              v109 = *(i - 12);
              *((_DWORD *)v103 - 4) = *((_DWORD *)i - 4);
              *((_BYTE *)v103 - 12) = v109 & 3 | *((_BYTE *)v103 - 12) & 0xFC;
              v110 = *((_QWORD *)i - 1);
              *((_QWORD *)i - 1) = 0;
            }
            v111 = *((unsigned int *)v100 - 1);
            v112 = &v100[32 * v111];
            if ( (_DWORD)v111 )
            {
              v152 = v101;
              v149 = v6;
              v113 = v100;
              do
              {
                v114 = v113;
                v113 += 32;
                sub_25A130(v114);
              }
              while ( v113 != v112 );
              v101 = v152;
              v6 = v149;
              v100 = *(char **)(v5 + 808);
            }
            v153 = v101;
            sub_186B220(v100 - 8);
            v101 = v153;
            v64 = &v62[4 * (unsigned int)v153[1]];
          }
          else
          {
            *(_DWORD *)(v99 + 4) = 0;
            v64 = (_QWORD *)(v99 + 8);
          }
          *(_QWORD *)(v5 + 808) = v62;
          *v101 = v160;
        }
        else
        {
          v64 = &v62[4 * v63];
        }
      }
      else
      {
        v142 = (_QWORD *)sub_186B270(0x48u);
        v62 = v142 + 1;
        *v142 = 2;
        *(_QWORD *)(v5 + 808) = v142 + 1;
        v64 = v142 + 1;
      }
      ++v53;
      *(_DWORD *)v64 = v175;
      *((_BYTE *)v64 + 4) = v176 & 3 | *((_BYTE *)v64 + 4) & 0xFC;
      v65 = v177;
      v177 = 0;
      v64[1] = v65;
      *((_DWORD *)v64 + 4) = v178;
      *((_BYTE *)v64 + 20) = v179 & 3 | *((_BYTE *)v64 + 20) & 0xFC;
      v66 = v180;
      v180 = 0;
      v64[3] = v66;
      ++*((_DWORD *)v62 - 1);
      sub_25A130((char *)&v175);
      v54 = *(_DWORD *)(a3 + 8);
    }
    while ( (unsigned int)v53 < v54 );
  }
LABEL_69:
  v67 = *(_QWORD *)(v5 + 800);
  v68 = *(_QWORD *)(v5 + 808);
  if ( v67 )
  {
    v69 = *(_DWORD *)(v67 - 4);
    if ( !v69 )
    {
      v74 = v155;
LABEL_78:
      *(_DWORD *)(v67 - 4) = v69;
      goto LABEL_79;
    }
    v70 = v69;
    v71 = 0;
    v69 = 0;
    v72 = 1;
    do
    {
      v73 = (int *)(v68 + 32 * v71);
      if ( *v73 )
      {
        v72 &= *(_BYTE *)(*(_QWORD *)(v5 + 608) + *(unsigned int *)(v67 + 4 * v71)) != 0;
        if ( v69 != (_DWORD)v71 )
        {
          v161 = v70;
          *(_DWORD *)(v67 + 4LL * v69) = *(_DWORD *)(v67 + 4 * v71);
          sub_27B950((__int64)qword_1C7F2C0, v68 + 32LL * v69, v73);
          v67 = *(_QWORD *)(v5 + 800);
          v68 = *(_QWORD *)(v5 + 808);
          v70 = v161;
        }
        ++v69;
      }
      ++v71;
    }
    while ( v70 != v71 );
    v74 = v155 & v72;
    if ( v67 )
      goto LABEL_78;
  }
  else
  {
    v74 = v155;
    v69 = 0;
  }
LABEL_79:
  if ( v68 )
  {
    v75 = 32LL * v69;
    v76 = 32LL * *(unsigned int *)(v68 - 4);
    if ( v75 != v76 )
    {
      v162 = v5;
      v158 = v6;
      v77 = v68 + v75;
      v78 = v68 + v76;
      do
      {
        v79 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v77);
        v80 = v77 + 16;
        v77 += 32;
        sub_182CBA0(v79, v80);
      }
      while ( v78 != v77 );
      v5 = v162;
      v6 = v158;
      v68 = *(_QWORD *)(v162 + 808);
    }
    *(_DWORD *)(v68 - 4) = v69;
  }
  if ( v74 )
  {
    v175 = 0;
    v176 &= 0xFCu;
    v179 &= 0xFCu;
    v177 = 0;
    v178 = 1;
    v180 = 0;
    sub_27B950((__int64)qword_1C7F2C0, (__int64)&v175, &v168);
    LODWORD(v181) = 1;
    BYTE4(v181) &= 0xFCu;
    v141 = qword_1C7F2C0;
    v182 = 0;
    LODWORD(v183) = 1;
    BYTE4(v183) &= 0xFCu;
    v184 = 0;
    if ( (v172 & 1) != 0 || v171 != 1 )
    {
      sub_1852000(qword_1C7F2C0, &v168, &v181);
    }
    else
    {
      sub_1832A70(qword_1C7F2C0, &v168, &v181);
      sub_182CBA0(v141, &v171);
      v172 &= ~1u;
      v171 = 1;
    }
    sub_25A130((char *)&v175);
    v155 = 0;
  }
  if ( v6[2] )
  {
    v81 = *((_QWORD *)v6 + 3);
    v82 = *(_QWORD *)(v5 + 664);
    v83 = 0;
    do
    {
      v84 = *(unsigned int *)(v81 + 4 * v83++);
      *(_DWORD *)(v82 + 4 * v84) = -1;
    }
    while ( (unsigned int)v83 < v6[2] );
  }
  v85 = *(_QWORD *)(v5 + 800);
  if ( (!v85 || !*(_DWORD *)(v85 - 4)) && (v168 > 0 || !v155 && !v168) )
    goto LABEL_198;
  v86 = *(_QWORD *)(v5 + 816);
  if ( v86 )
    *(_DWORD *)(v86 - 4) = 0;
  v87 = 0;
  if ( (v6[1] & 0x1FFFFFFF) != 0 )
  {
    do
    {
      v90 = *(_DWORD *)(*((_QWORD *)v6 + 2) + 4 * v87);
      v91 = -v90;
      if ( v90 > 0 )
        v91 = *(_DWORD *)(*((_QWORD *)v6 + 2) + 4 * v87);
      *(_BYTE *)(*(_QWORD *)(v5 + 576) + v91) = (v90 >> 31) | 1;
      v92 = *(_QWORD **)(v5 + 816);
      if ( v92 )
      {
        v93 = *((unsigned int *)v92 - 1);
        if ( (_DWORD)v93 == *((_DWORD *)v92 - 2) )
        {
          v94 = (unsigned int)(3 * v93 + 1) >> 1;
          v95 = 4 * v94 + 8;
          if ( 4 * (int)v93 + 8 >= (unsigned int)v95 || (unsigned int)v93 >= v94 )
          {
            v144 = (char **)__cxa_allocate_exception(0x28u);
            sub_E65BE0(&v181, "Overflow encountered when expanding vector");
            *v144 = (char *)off_1C63128;
            sub_2333C0(v144 + 1, &v181);
            sub_233E40((__int64)&v181);
            __cxa_throw(v144, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v96 = (unsigned int *)sub_186B300(v92 - 1, v95);
          v92 = v96 + 2;
          *v96 = v94;
          v97 = v96[1];
          *(_QWORD *)(v5 + 816) = v92;
          v88 = (int *)v92 + v97;
        }
        else
        {
          v88 = (int *)v92 + v93;
        }
      }
      else
      {
        v139 = (_QWORD *)sub_186B270(0x10u);
        v92 = v139 + 1;
        *v139 = 2;
        *(_QWORD *)(v5 + 816) = v139 + 1;
        v88 = (int *)(v139 + 1);
      }
      *v88 = v90;
      ++v87;
      ++*((_DWORD *)v92 - 1);
      v89 = v6[1] & 0x1FFFFFFF;
    }
    while ( (unsigned int)v87 < v89 );
    v115 = *(_DWORD *)(a3 + 4) & 0x1FFFFFFF;
    if ( !v115 )
    {
      if ( !v89 )
        goto LABEL_142;
      goto LABEL_186;
    }
  }
  else
  {
    v115 = *(_DWORD *)(a3 + 4) & 0x1FFFFFFF;
    if ( !v115 )
      goto LABEL_142;
  }
  v116 = *(_QWORD *)(v5 + 576);
  v117 = 0;
  for ( j = *(_QWORD *)(a3 + 16); ; j = *(_QWORD *)(a3 + 16) )
  {
    while ( 1 )
    {
      v119 = *(_DWORD *)(j + 4 * v117);
      v120 = -v119;
      if ( v119 > 0 )
        v120 = *(_DWORD *)(j + 4 * v117);
      v121 = *(_BYTE *)(v116 + v120);
      if ( !v121 )
        break;
      if ( v121 == 1 )
      {
        v119 = (unsigned int)v119 >> 31;
        if ( (int)v117 + 1 >= v115 )
          goto LABEL_162;
      }
      else
      {
        if ( v121 != -1 )
        {
          sub_1872CE0("");
          sub_1873130(114, 2005);
        }
        LOBYTE(v119) = v119 >= 0;
        if ( (int)v117 + 1 >= v115 )
        {
LABEL_162:
          if ( (v6[1] & 0x1FFFFFFF) != 0 )
            goto LABEL_136;
          goto LABEL_141;
        }
      }
      ++v117;
      if ( (_BYTE)v119 )
      {
        if ( (v6[1] & 0x1FFFFFFF) == 0 )
          goto LABEL_198;
        goto LABEL_136;
      }
    }
    v122 = *(_QWORD *)(v5 + 816);
    if ( !v122 || (v123 = *(unsigned int *)(v122 - 4), (_DWORD)v123 == *(_DWORD *)(v122 - 8)) )
    {
      v165 = *(_DWORD *)(j + 4 * v117);
      sub_313C10((unsigned int **)(v5 + 816));
      v122 = *(_QWORD *)(v5 + 816);
      v119 = v165;
      v123 = *(unsigned int *)(v122 - 4);
    }
    *(_DWORD *)(v122 + 4 * v123) = v119;
    ++*(_DWORD *)(v122 - 4);
    v115 = *(_DWORD *)(a3 + 4) & 0x1FFFFFFF;
    if ( (int)v117 + 1 >= v115 )
      break;
    v116 = *(_QWORD *)(v5 + 576);
    ++v117;
  }
  if ( (v6[1] & 0x1FFFFFFF) == 0 )
    goto LABEL_142;
LABEL_186:
  v116 = *(_QWORD *)(v5 + 576);
  LOBYTE(v119) = 0;
LABEL_136:
  v124 = 0;
  while ( 1 )
  {
    v125 = -*(_DWORD *)(*((_QWORD *)v6 + 2) + 4 * v124);
    if ( *(int *)(*((_QWORD *)v6 + 2) + 4 * v124) > 0 )
      v125 = *(_DWORD *)(*((_QWORD *)v6 + 2) + 4 * v124);
    ++v124;
    *(_BYTE *)(v116 + v125) = 0;
    if ( (unsigned int)v124 >= (v6[1] & 0x1FFFFFFF) )
      break;
    v116 = *(_QWORD *)(v5 + 576);
  }
LABEL_141:
  if ( (_BYTE)v119 )
    goto LABEL_198;
LABEL_142:
  v126 = *((unsigned int **)v6 + 9);
  v127 = *(unsigned int **)(a3 + 72);
  if ( v126 )
  {
    if ( v127 != v126 && v127 )
    {
      v128 = sub_17E9C90(*(_QWORD *)(*(_QWORD *)v5 + 656LL), 24);
      v129 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v126, (__m128i)(unsigned __int64)v127);
      *v126 = (*v126 + 1) & 0x3FFFFFFF | *v126 & 0xC0000000;
      v126 = (unsigned int *)v128;
      *v127 = (*v127 + 1) & 0x3FFFFFFF | *v127 & 0xC0000000;
      *(_QWORD *)v128 = 0;
      *(__m128i *)(v128 + 8) = v129;
    }
  }
  else
  {
    v126 = *(unsigned int **)(a3 + 72);
  }
  v130 = *(_QWORD *)(v5 + 816);
  v131 = *(_QWORD *)(v5 + 800);
  if ( !v130 )
  {
    if ( v131 )
    {
      v134 = *(_DWORD *)(v131 - 4);
      if ( v134 )
      {
        v135 = v155;
        v136 = *(_QWORD *)(v5 + 808);
        v133 = 0;
        goto LABEL_152;
      }
    }
    goto LABEL_154;
  }
  v132 = *(_DWORD *)(v130 - 4);
  v133 = v132;
  if ( v132 )
  {
    v135 = v155;
    v136 = *(_QWORD *)(v5 + 808);
    if ( v131 )
      v134 = *(_DWORD *)(v131 - 4);
    else
      v134 = 0;
    goto LABEL_152;
  }
  if ( !v131 || (v134 = *(_DWORD *)(v131 - 4)) == 0 )
  {
LABEL_154:
    if ( v168 >= 0 && (v168 || !v155) )
    {
      v135 = v155;
      v136 = *(_QWORD *)(v5 + 808);
      v134 = 0;
      if ( v131 )
        v134 = *(_DWORD *)(v131 - 4);
      if ( !v130 )
      {
        v133 = 0;
        goto LABEL_152;
      }
      v132 = *(_DWORD *)(v130 - 4);
      goto LABEL_151;
    }
    *(_BYTE *)(v5 + 756) = 1;
    if ( v126 )
      *v126 = (*v126 + 1) & 0x3FFFFFFF | *v126 & 0xC0000000;
    v143 = *(unsigned int **)(v5 + 760);
    if ( v143 )
      sub_234C20((__int64 *)(*(_QWORD *)(v5 + 768) + 648LL), v143);
    *(_QWORD *)(v5 + 760) = v126;
LABEL_198:
    v137 = 0;
    goto LABEL_153;
  }
  v135 = v155;
  v136 = *(_QWORD *)(v5 + 808);
LABEL_151:
  v133 = v132;
LABEL_152:
  v137 = sub_E68740(v5, v133, v130, v134, v131, v136, (__int64)&v168, v135, v126);
LABEL_153:
  sub_25A130((char *)&v168);
  sub_25A130((char *)v167);
  sub_25A130((char *)v166);
  return v137;
}

