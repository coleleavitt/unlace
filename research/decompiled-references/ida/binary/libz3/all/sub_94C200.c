void __fastcall sub_94C200(int a1, int **a2, __int64 *a3, unsigned int a4)
{
  char **exception; // r12
  char **v5; // r12
  int *v6; // rdx
  __int64 v8; // r12
  int *v9; // rbp
  void *v10; // r13
  int v11; // eax
  void *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rbp
  int v15; // eax
  __int64 *v16; // rbp
  void *v17; // r13
  __int64 v18; // r12
  unsigned int v19; // r15d
  int v20; // eax
  __int64 v21; // rax
  char v22; // dl
  char v23; // cl
  __int64 v24; // rax
  char v25; // dl
  char v26; // cl
  void *v27; // r12
  int *v28; // rdx
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // r12
  __int64 v32; // r13
  void *v33; // rdi
  void *v34; // r13
  int v35; // eax
  void *v36; // rdi
  __int64 v37; // r12
  void *v38; // r12
  unsigned int v39; // r13d
  int *v40; // rdx
  void *v41; // r15
  __int64 v42; // rax
  __int64 v43; // r13
  __int64 v44; // r12
  void *v45; // rdi
  void *v46; // rdi
  void *v47; // r15
  void *v48; // rdi
  void *v49; // r12
  void *v50; // r12
  __int64 v51; // r13
  void *v52; // rdi
  void *v53; // r12
  void *v54; // r12
  unsigned int v55; // r13d
  __int64 v56; // r12
  void *v57; // r15
  __int64 v58; // r12
  void *v59; // r15
  void *v60; // rdi
  void *v61; // rdi
  void *v62; // r15
  void *v63; // rdi
  void *v64; // r12
  void *v65; // r12
  int *v66; // rsi
  __int64 v67; // rax
  int *v68; // rax
  void *v69; // r12
  __int64 v70; // rdx
  __int64 v71; // rdx
  void *v72; // r12
  void *v73; // r12
  void *v74; // rbp
  void *v75; // rbx
  char v76; // al
  char v77; // al
  __int64 v78; // r12
  void *v79; // r15
  __int64 v80; // r12
  void *v81; // r12
  void *v82; // r12
  int *v83; // r15
  __int64 v84; // rax
  int *v85; // rax
  void *v86; // r12
  __int64 v87; // rdx
  __int64 v88; // rdx
  size_t v89; // rdi
  __int64 v90; // rax
  int *v91; // r12
  _DWORD *v92; // r9
  __int64 v93; // rax
  int *v94; // rdx
  int *v95; // rdi
  int *i; // rax
  int v97; // ecx
  char v98; // si
  __int64 v99; // rcx
  char v100; // si
  __int64 v101; // rcx
  __int64 v102; // rax
  int *v103; // rbp
  int *v104; // r12
  void *v105; // r13
  int *v106; // rsi
  int v107; // eax
  size_t v108; // rdi
  __int64 v109; // rax
  int *v110; // r12
  _DWORD *v111; // r9
  __int64 v112; // rdi
  __int64 v113; // rdx
  int *v114; // rax
  int *v115; // rdi
  int v116; // ecx
  char v117; // r8
  __int64 v118; // rcx
  char v119; // r8
  __int64 v120; // rcx
  __int64 v121; // rax
  int *v122; // rbp
  void *v123; // r13
  int *v124; // rsi
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  unsigned int v128; // [rsp+18h] [rbp-150h]
  void *v129; // [rsp+18h] [rbp-150h]
  void *v130; // [rsp+18h] [rbp-150h]
  unsigned int v131; // [rsp+18h] [rbp-150h]
  void *v132; // [rsp+18h] [rbp-150h]
  void *v133; // [rsp+18h] [rbp-150h]
  void *v134; // [rsp+18h] [rbp-150h]
  void *v135; // [rsp+18h] [rbp-150h]
  void *v136; // [rsp+18h] [rbp-150h]
  unsigned int v137; // [rsp+30h] [rbp-138h]
  _DWORD *v138; // [rsp+30h] [rbp-138h]
  unsigned int v139; // [rsp+30h] [rbp-138h]
  void *v140; // [rsp+30h] [rbp-138h]
  void *v141; // [rsp+30h] [rbp-138h]
  _DWORD *v142; // [rsp+38h] [rbp-130h]
  unsigned int v143; // [rsp+38h] [rbp-130h]
  __int64 *v144; // [rsp+40h] [rbp-128h]
  int *v145; // [rsp+48h] [rbp-120h]
  _DWORD *v146; // [rsp+48h] [rbp-120h]
  _DWORD *v147; // [rsp+50h] [rbp-118h]
  __int64 *v148; // [rsp+58h] [rbp-110h]
  _QWORD v149[2]; // [rsp+70h] [rbp-F8h] BYREF
  _QWORD v150[2]; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v151[2]; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v152[2]; // [rsp+A0h] [rbp-C8h] BYREF
  int v153; // [rsp+B0h] [rbp-B8h] BYREF
  char v154; // [rsp+B4h] [rbp-B4h]
  __int64 v155; // [rsp+B8h] [rbp-B0h]
  int v156; // [rsp+C0h] [rbp-A8h] BYREF
  char v157; // [rsp+C4h] [rbp-A4h]
  __int64 v158; // [rsp+C8h] [rbp-A0h]
  int v159; // [rsp+D0h] [rbp-98h] BYREF
  char v160; // [rsp+D4h] [rbp-94h]
  __int64 v161; // [rsp+D8h] [rbp-90h]
  int v162; // [rsp+E0h] [rbp-88h] BYREF
  char v163; // [rsp+E4h] [rbp-84h]
  __int64 v164; // [rsp+E8h] [rbp-80h]
  int v165; // [rsp+F0h] [rbp-78h] BYREF
  char v166; // [rsp+F4h] [rbp-74h]
  __int64 v167; // [rsp+F8h] [rbp-70h]
  int v168; // [rsp+100h] [rbp-68h] BYREF
  char v169; // [rsp+104h] [rbp-64h]
  __int64 v170; // [rsp+108h] [rbp-60h]
  __int64 v171; // [rsp+110h] [rbp-58h] BYREF
  __int64 v172; // [rsp+118h] [rbp-50h]
  __int64 v173; // [rsp+120h] [rbp-48h] BYREF
  __int64 v174; // [rsp+128h] [rbp-40h]

  v6 = *a2;
  if ( *a2 && a4 < *(v6 - 1) )
  {
    v149[0] = 0;
    v149[1] = 0;
    v8 = 8LL * a4;
    v9 = &v6[v8];
    v10 = qword_1C7F2C0;
    v150[0] = 1;
    v150[1] = 0;
    if ( (v6[v8 + 1] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, v149, &v6[v8]);
      if ( (v9[5] & 1) == 0 )
        goto LABEL_6;
    }
    else
    {
      LODWORD(v149[0]) = *v9;
      if ( (v9[5] & 1) == 0 )
      {
LABEL_6:
        v11 = v9[4];
        BYTE4(v150[0]) &= ~1u;
        LODWORD(v150[0]) = v11;
        goto LABEL_7;
      }
    }
    sub_182C690(v10, v150, v9 + 4);
LABEL_7:
    if ( LODWORD(v149[0]) )
    {
      v12 = qword_1C7F2C0;
      LODWORD(v171) = 0;
      BYTE4(v171) &= 0xFCu;
      v13 = *a3;
      BYTE4(v173) &= 0xFCu;
      v172 = 0;
      LODWORD(v173) = 1;
      v14 = v8 * 4 + v13;
      v174 = 0;
      if ( (*(_BYTE *)(v14 + 4) & 1) != 0 )
        sub_182C690(qword_1C7F2C0, &v171, v14);
      else
        LODWORD(v171) = *(_DWORD *)v14;
      if ( (*(_BYTE *)(v14 + 20) & 1) != 0 )
      {
        sub_182C690(v12, &v173, v14 + 16);
      }
      else
      {
        v15 = *(_DWORD *)(v14 + 16);
        BYTE4(v173) &= ~1u;
        LODWORD(v173) = v15;
      }
      v16 = &v171;
      sub_1831690(qword_1C7F2C0, &v171);
      v17 = qword_1C7F2C0;
      if ( (v171 & 0x100000000LL) != 0 || (_DWORD)v171 != 1 || (v173 & 0x100000000LL) != 0 || (_DWORD)v173 != 1 )
      {
        sub_182CBA0(qword_1C7F2C0, &v171);
        sub_182CBA0(v17, &v173);
        v171 = 0;
        v172 = 0;
        v173 = 1;
        v174 = 0;
        sub_182CBA0(qword_1C7F2C0, &v173);
        v18 = (__int64)&(*a2)[v8];
        v19 = 0;
        BYTE4(v173) &= ~1u;
        LODWORD(v173) = 1;
        v20 = *(_DWORD *)v18;
        *(_DWORD *)v18 = v171;
        LODWORD(v171) = v20;
        v21 = *(_QWORD *)(v18 + 8);
        *(_QWORD *)(v18 + 8) = v172;
        v172 = v21;
        v22 = *(_BYTE *)(v18 + 4);
        *(_BYTE *)(v18 + 4) = BYTE4(v171) & 2 | v22 & 0xFD;
        BYTE4(v171) = v22 & 2 | BYTE4(v171) & 0xFD;
        v23 = *(_BYTE *)(v18 + 4);
        *(_BYTE *)(v18 + 4) = BYTE4(v171) & 1 | v23 & 0xFE;
        BYTE4(v171) = v23 & 1 | BYTE4(v171) & 0xFE;
        LODWORD(v21) = *(_DWORD *)(v18 + 16);
        *(_DWORD *)(v18 + 16) = v173;
        LODWORD(v173) = v21;
        v24 = *(_QWORD *)(v18 + 24);
        *(_QWORD *)(v18 + 24) = v174;
        v174 = v24;
        v25 = *(_BYTE *)(v18 + 20);
        *(_BYTE *)(v18 + 20) = BYTE4(v173) & 2 | v25 & 0xFD;
        BYTE4(v173) = v25 & 2 | BYTE4(v173) & 0xFD;
        v26 = *(_BYTE *)(v18 + 20) & 1;
        *(_BYTE *)(v18 + 20) = BYTE4(v173) & 1 | *(_BYTE *)(v18 + 20) & 0xFE;
        v27 = qword_1C7F2C0;
        BYTE4(v173) = v26 | BYTE4(v173) & 0xFE;
        sub_182CBA0(qword_1C7F2C0, &v171);
        sub_182CBA0(v27, &v173);
        v28 = *a2;
        if ( *a2 )
        {
          while ( 1 )
          {
            v29 = qword_1C7F2C0;
            v30 = *a3;
            if ( v19 >= *(v28 - 1) )
              break;
            v171 = 0;
            v172 = 0;
            v31 = 8LL * v19;
            v173 = 1;
            v32 = v30 + v31 * 4;
            v174 = 0;
            if ( (v149[0] & 0x100000000LL) != 0 )
            {
              v129 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v171, v149);
              v29 = v129;
            }
            else
            {
              LODWORD(v171) = v149[0];
            }
            if ( (v150[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v29, &v173, v150);
            }
            else
            {
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = v150[0];
            }
            if ( (v173 & 0x100000000LL) != 0
              || (_DWORD)v173 != 1
              || (*(_BYTE *)(v32 + 20) & 1) != 0
              || *(_DWORD *)(v32 + 16) != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, &v171, v32);
            }
            else
            {
              v135 = qword_1C7F2C0;
              sub_1831650(qword_1C7F2C0, &v171, v32);
              sub_182CBA0(v135, &v173);
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = 1;
            }
            v166 &= 0xFCu;
            v33 = qword_1C7F2C0;
            v169 &= 0xFCu;
            v165 = 0;
            v167 = 0;
            v168 = 1;
            v170 = 0;
            if ( (v171 & 0x100000000LL) != 0 )
            {
              v130 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v165, &v171);
              v33 = v130;
            }
            else
            {
              v165 = v171;
            }
            if ( (v173 & 0x100000000LL) != 0 )
            {
              sub_182C690(v33, &v168, &v173);
            }
            else
            {
              v169 &= ~1u;
              v168 = v173;
            }
            v34 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v171);
            sub_182CBA0(v34, &v173);
            v35 = v165;
            v36 = qword_1C7F2C0;
            v37 = (__int64)&(*a2)[v31];
            if ( v165 )
            {
              if ( *(_DWORD *)v37 )
              {
                if ( (*(_BYTE *)(v37 + 20) & 1) != 0 || *(_DWORD *)(v37 + 16) != 1 || (v169 & 1) != 0 || v168 != 1 )
                {
                  sub_1851D20(qword_1C7F2C0, v37, &v165, v37);
                }
                else
                {
                  v132 = qword_1C7F2C0;
                  sub_1831A80(qword_1C7F2C0, v37, &v165, v37);
                  sub_182CBA0(v132, v37 + 16);
                  *(_BYTE *)(v37 + 20) &= ~1u;
                  *(_DWORD *)(v37 + 16) = 1;
                }
              }
              else
              {
                if ( (v166 & 1) != 0 )
                {
                  v133 = qword_1C7F2C0;
                  sub_182C690(qword_1C7F2C0, v37, &v165);
                  v36 = v133;
                }
                else
                {
                  *(_BYTE *)(v37 + 4) &= ~1u;
                  *(_DWORD *)v37 = v35;
                }
                if ( (v169 & 1) != 0 )
                {
                  sub_182C690(v36, v37 + 16, &v168);
                }
                else
                {
                  v107 = v168;
                  *(_BYTE *)(v37 + 20) &= ~1u;
                  *(_DWORD *)(v37 + 16) = v107;
                }
              }
            }
            else
            {
              v76 = *(_BYTE *)(v37 + 4);
              if ( (v76 & 1) != 0 )
              {
                v136 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, v37, v37);
                v36 = v136;
              }
              else
              {
                *(_BYTE *)(v37 + 4) = v76 & 0xFE;
              }
              v77 = *(_BYTE *)(v37 + 20);
              if ( (v77 & 1) != 0 )
                sub_182C690(v36, v37 + 16, v37 + 16);
              else
                *(_BYTE *)(v37 + 20) = v77 & 0xFE;
            }
            v38 = qword_1C7F2C0;
            ++v19;
            sub_182CBA0(qword_1C7F2C0, &v165);
            sub_182CBA0(v38, &v168);
            v28 = *a2;
            if ( !*a2 )
              goto LABEL_33;
          }
          v39 = *(v28 - 1);
        }
        else
        {
LABEL_33:
          v39 = 0;
          v30 = *a3;
        }
        v78 = v30;
        if ( v30 )
        {
          do
          {
            v79 = qword_1C7F2C0;
            if ( v39 >= *(_DWORD *)(v78 - 4) )
              break;
            v171 = 0;
            v172 = 0;
            v173 = 1;
            v80 = 32LL * v39 + v78;
            v174 = 0;
            if ( (v149[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v16, v149);
            else
              LODWORD(v171) = v149[0];
            if ( (v150[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v79, &v173, v150);
            }
            else
            {
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = v150[0];
            }
            if ( (v173 & 0x100000000LL) != 0
              || (_DWORD)v173 != 1
              || (*(_BYTE *)(v80 + 20) & 1) != 0
              || *(_DWORD *)(v80 + 16) != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, v16, v80);
            }
            else
            {
              v134 = qword_1C7F2C0;
              sub_1831650(qword_1C7F2C0, v16, v80);
              sub_182CBA0(v134, &v173);
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = 1;
            }
            v166 &= 0xFCu;
            v81 = qword_1C7F2C0;
            v169 &= 0xFCu;
            v165 = 0;
            v167 = 0;
            v168 = 1;
            v170 = 0;
            if ( (v171 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v165, v16);
            else
              v165 = v171;
            if ( (v173 & 0x100000000LL) != 0 )
            {
              sub_182C690(v81, &v168, &v173);
            }
            else
            {
              v169 &= ~1u;
              v168 = v173;
            }
            v82 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v16);
            sub_182CBA0(v82, &v173);
            v83 = *a2;
            if ( *a2 )
            {
              v84 = (unsigned int)*(v83 - 1);
              if ( (_DWORD)v84 == *(v83 - 2) )
              {
                v131 = (unsigned int)(3 * v84 + 1) >> 1;
                v89 = 32 * v131 + 8;
                if ( 32 * (int)v84 + 8 >= (unsigned int)v89 || (unsigned int)v84 >= (unsigned int)(3 * v84 + 1) >> 1 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v16, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v16);
                  sub_233E40((__int64)v16);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v90 = sub_186B270(v89);
                v91 = *a2;
                v92 = (_DWORD *)v90;
                v83 = (int *)(v90 + 8);
                if ( *a2 )
                {
                  v93 = (unsigned int)*(v91 - 1);
                  v94 = v83;
                  v92[1] = v93;
                  v95 = &v91[8 * v93];
                  for ( i = v91; v95 != i; *((_QWORD *)v94 - 1) = v101 )
                  {
                    v97 = *i;
                    v98 = *((_BYTE *)i + 4);
                    i += 8;
                    v94 += 8;
                    *(v94 - 8) = v97;
                    *((_BYTE *)v94 - 28) = v98 & 3 | *(_BYTE *)(v94 - 7) & 0xFC;
                    v99 = *((_QWORD *)i - 3);
                    *((_QWORD *)i - 3) = 0;
                    *((_QWORD *)v94 - 3) = v99;
                    v100 = *((_BYTE *)i - 12);
                    *(v94 - 4) = *(i - 4);
                    *((_BYTE *)v94 - 12) = v100 & 3 | *(_BYTE *)(v94 - 3) & 0xFC;
                    v101 = *((_QWORD *)i - 1);
                    *((_QWORD *)i - 1) = 0;
                  }
                  v102 = (unsigned int)*(v91 - 1);
                  if ( (_DWORD)v102 )
                  {
                    v137 = v39;
                    v142 = v92;
                    v144 = v16;
                    v103 = v91;
                    v104 = &v91[8 * v102];
                    do
                    {
                      v105 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v103);
                      v106 = v103 + 4;
                      v103 += 8;
                      sub_182CBA0(v105, v106);
                    }
                    while ( v104 != v103 );
                    v39 = v137;
                    v92 = v142;
                    v16 = v144;
                    v91 = *a2;
                  }
                  v138 = v92;
                  sub_186B220(v91 - 2);
                  v92 = v138;
                  v85 = &v83[8 * v138[1]];
                }
                else
                {
                  *(_DWORD *)(v90 + 4) = 0;
                  v85 = (int *)(v90 + 8);
                }
                *a2 = v83;
                *v92 = v131;
              }
              else
              {
                v85 = &v83[8 * v84];
              }
            }
            else
            {
              v126 = (_QWORD *)sub_186B270(0x48u);
              v83 = (int *)(v126 + 1);
              *v126 = 2;
              *a2 = (int *)(v126 + 1);
              v85 = (int *)(v126 + 1);
            }
            v86 = qword_1C7F2C0;
            ++v39;
            *v85 = v165;
            *((_BYTE *)v85 + 4) = v166 & 3 | v85[1] & 0xFC;
            v87 = v167;
            v167 = 0;
            *((_QWORD *)v85 + 1) = v87;
            v85[4] = v168;
            *((_BYTE *)v85 + 20) = v169 & 3 | v85[5] & 0xFC;
            v88 = v170;
            v170 = 0;
            *((_QWORD *)v85 + 3) = v88;
            ++*(v83 - 1);
            sub_182CBA0(v86, &v165);
            sub_182CBA0(v86, &v168);
            v78 = *a3;
          }
          while ( *a3 );
        }
      }
      else
      {
        sub_182CBA0(qword_1C7F2C0, &v171);
        sub_182CBA0(v17, &v173);
        if ( *(int *)(*a3 + v8 * 4) <= 0 )
          v151[0] = 0xFFFFFFFFLL;
        else
          v151[0] = 1;
        v151[1] = 0;
        v152[0] = 1;
        v152[1] = 0;
        sub_182CBA0(qword_1C7F2C0, v152);
        v40 = *a2;
        BYTE4(v152[0]) &= ~1u;
        LODWORD(v152[0]) = 1;
        v128 = 0;
        if ( v40 )
        {
          while ( 1 )
          {
            v41 = qword_1C7F2C0;
            v42 = *a3;
            if ( v128 >= *(v40 - 1) )
              break;
            v171 = 0;
            v172 = 0;
            v173 = 1;
            v43 = 8LL * v128;
            v174 = 0;
            v44 = v42 + v43 * 4;
            if ( (v149[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v171, v149);
            else
              LODWORD(v171) = v149[0];
            if ( (v150[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(v41, &v173, v150);
            }
            else
            {
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = v150[0];
            }
            v45 = qword_1C7F2C0;
            if ( (v173 & 0x100000000LL) != 0
              || (_DWORD)v173 != 1
              || (v152[0] & 0x100000000LL) != 0
              || LODWORD(v152[0]) != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, &v171, v151);
            }
            else
            {
              sub_1831650(qword_1C7F2C0, &v171, v151);
              sub_182CBA0(v45, &v173);
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = 1;
            }
            v160 &= 0xFCu;
            v46 = qword_1C7F2C0;
            v163 &= 0xFCu;
            v159 = 0;
            v161 = 0;
            v162 = 1;
            v164 = 0;
            if ( (v171 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v159, &v171);
            else
              v159 = v171;
            if ( (v173 & 0x100000000LL) != 0 )
            {
              sub_182C690(v46, &v162, &v173);
            }
            else
            {
              v163 &= ~1u;
              v162 = v173;
            }
            v47 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v171);
            sub_182CBA0(v47, &v173);
            v48 = qword_1C7F2C0;
            v171 = 0;
            v172 = 0;
            v173 = 1;
            v174 = 0;
            if ( (v160 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v171, &v159);
            else
              LODWORD(v171) = v159;
            if ( (v163 & 1) != 0 )
            {
              sub_182C690(v48, &v173, &v162);
            }
            else
            {
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = v162;
            }
            if ( (v173 & 0x100000000LL) != 0
              || (_DWORD)v173 != 1
              || (*(_BYTE *)(v44 + 20) & 1) != 0
              || *(_DWORD *)(v44 + 16) != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, &v171, v44);
            }
            else
            {
              v141 = qword_1C7F2C0;
              sub_1831650(qword_1C7F2C0, &v171, v44);
              sub_182CBA0(v141, &v173);
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = 1;
            }
            v166 &= 0xFCu;
            v49 = qword_1C7F2C0;
            v169 &= 0xFCu;
            v165 = 0;
            v167 = 0;
            v168 = 1;
            v170 = 0;
            if ( (v171 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v165, &v171);
            else
              v165 = v171;
            if ( (v173 & 0x100000000LL) != 0 )
            {
              sub_182C690(v49, &v168, &v173);
            }
            else
            {
              v169 &= ~1u;
              v168 = v173;
            }
            v50 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v171);
            sub_182CBA0(v50, &v173);
            v51 = (__int64)&(*a2)[v43];
            v52 = qword_1C7F2C0;
            if ( (*(_BYTE *)(v51 + 20) & 1) != 0 || *(_DWORD *)(v51 + 16) != 1 || (v169 & 1) != 0 || v168 != 1 )
            {
              sub_1852000(qword_1C7F2C0, v51, &v165);
            }
            else
            {
              sub_1832A70(qword_1C7F2C0, v51, &v165);
              sub_182CBA0(v52, v51 + 16);
              *(_BYTE *)(v51 + 20) &= ~1u;
              *(_DWORD *)(v51 + 16) = 1;
            }
            v53 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v165);
            sub_182CBA0(v53, &v168);
            v54 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v159);
            sub_182CBA0(v54, &v162);
            v40 = *a2;
            ++v128;
            if ( !*a2 )
              goto LABEL_66;
          }
          v55 = *(v40 - 1);
        }
        else
        {
LABEL_66:
          v55 = 0;
          v42 = *a3;
        }
        v56 = v42;
        if ( v42 )
        {
          do
          {
            v57 = qword_1C7F2C0;
            if ( v55 >= *(_DWORD *)(v56 - 4) )
              break;
            v154 &= 0xFCu;
            v157 &= 0xFCu;
            v153 = 0;
            v58 = 32LL * v55 + v56;
            v155 = 0;
            v156 = 1;
            v158 = 0;
            if ( (v149[0] & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v153, v149);
              if ( (v150[0] & 0x100000000LL) != 0 )
              {
LABEL_178:
                sub_182C690(v57, &v156, v150);
                goto LABEL_72;
              }
            }
            else
            {
              v153 = v149[0];
              if ( (v150[0] & 0x100000000LL) != 0 )
                goto LABEL_178;
            }
            v157 &= ~1u;
            v156 = v150[0];
LABEL_72:
            sub_1831620(qword_1C7F2C0, &v153);
            v171 = 0;
            v59 = qword_1C7F2C0;
            v172 = 0;
            v173 = 1;
            v174 = 0;
            if ( (v154 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, v16, &v153);
            else
              LODWORD(v171) = v153;
            if ( (v157 & 1) != 0 )
            {
              sub_182C690(v59, &v173, &v156);
            }
            else
            {
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = v156;
            }
            v60 = qword_1C7F2C0;
            if ( (v173 & 0x100000000LL) != 0
              || (_DWORD)v173 != 1
              || (v152[0] & 0x100000000LL) != 0
              || LODWORD(v152[0]) != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, v16, v151);
            }
            else
            {
              sub_1831650(qword_1C7F2C0, v16, v151);
              sub_182CBA0(v60, &v173);
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = 1;
            }
            v160 &= 0xFCu;
            v61 = qword_1C7F2C0;
            v163 &= 0xFCu;
            v159 = 0;
            v161 = 0;
            v162 = 1;
            v164 = 0;
            if ( (v171 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v159, v16);
            else
              v159 = v171;
            if ( (v173 & 0x100000000LL) != 0 )
            {
              sub_182C690(v61, &v162, &v173);
            }
            else
            {
              v163 &= ~1u;
              v162 = v173;
            }
            v62 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v16);
            sub_182CBA0(v62, &v173);
            v63 = qword_1C7F2C0;
            v171 = 0;
            v172 = 0;
            v173 = 1;
            v174 = 0;
            if ( (v160 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, v16, &v159);
            else
              LODWORD(v171) = v159;
            if ( (v163 & 1) != 0 )
            {
              sub_182C690(v63, &v173, &v162);
            }
            else
            {
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = v162;
            }
            if ( (v173 & 0x100000000LL) != 0
              || (_DWORD)v173 != 1
              || (*(_BYTE *)(v58 + 20) & 1) != 0
              || *(_DWORD *)(v58 + 16) != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, v16, v58);
            }
            else
            {
              v140 = qword_1C7F2C0;
              sub_1831650(qword_1C7F2C0, v16, v58);
              sub_182CBA0(v140, &v173);
              BYTE4(v173) &= ~1u;
              LODWORD(v173) = 1;
            }
            v166 &= 0xFCu;
            v64 = qword_1C7F2C0;
            v169 &= 0xFCu;
            v165 = 0;
            v167 = 0;
            v168 = 1;
            v170 = 0;
            if ( (v171 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v165, v16);
            else
              v165 = v171;
            if ( (v173 & 0x100000000LL) != 0 )
            {
              sub_182C690(v64, &v168, &v173);
            }
            else
            {
              v169 &= ~1u;
              v168 = v173;
            }
            v65 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v16);
            sub_182CBA0(v65, &v173);
            v66 = *a2;
            if ( *a2 )
            {
              v67 = (unsigned int)*(v66 - 1);
              if ( (_DWORD)v67 == *(v66 - 2) )
              {
                v139 = (unsigned int)(3 * v67 + 1) >> 1;
                v108 = 32 * v139 + 8;
                if ( 32 * (int)v67 + 8 >= (unsigned int)v108 || (unsigned int)v67 >= (unsigned int)(3 * v67 + 1) >> 1 )
                {
                  v5 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v16, "Overflow encountered when expanding vector");
                  *v5 = (char *)off_1C63128;
                  sub_2333C0(v5 + 1, v16);
                  sub_233E40((__int64)v16);
                  __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v109 = sub_186B270(v108);
                v110 = *a2;
                v111 = (_DWORD *)v109;
                v66 = (int *)(v109 + 8);
                if ( *a2 )
                {
                  v112 = (unsigned int)*(v110 - 1);
                  v113 = v109 + 8;
                  *(_DWORD *)(v109 + 4) = v112;
                  v114 = v110;
                  v115 = &v110[8 * v112];
                  if ( v110 != v115 )
                  {
                    do
                    {
                      v116 = *v114;
                      v117 = *((_BYTE *)v114 + 4);
                      v114 += 8;
                      v113 += 32;
                      *(_DWORD *)(v113 - 32) = v116;
                      *(_BYTE *)(v113 - 28) = v117 & 3 | *(_BYTE *)(v113 - 28) & 0xFC;
                      v118 = *((_QWORD *)v114 - 3);
                      *((_QWORD *)v114 - 3) = 0;
                      *(_QWORD *)(v113 - 24) = v118;
                      v119 = *((_BYTE *)v114 - 12);
                      *(_DWORD *)(v113 - 16) = *(v114 - 4);
                      *(_BYTE *)(v113 - 12) = v119 & 3 | *(_BYTE *)(v113 - 12) & 0xFC;
                      v120 = *((_QWORD *)v114 - 1);
                      *((_QWORD *)v114 - 1) = 0;
                      *(_QWORD *)(v113 - 8) = v120;
                    }
                    while ( v115 != v114 );
                  }
                  v121 = (unsigned int)*(v110 - 1);
                  if ( (_DWORD)v121 )
                  {
                    v143 = v55;
                    v145 = v66;
                    v147 = v111;
                    v148 = v16;
                    v122 = &v110[8 * v121];
                    do
                    {
                      v123 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, v110);
                      v124 = v110 + 4;
                      v110 += 8;
                      sub_182CBA0(v123, v124);
                    }
                    while ( v122 != v110 );
                    v55 = v143;
                    v66 = v145;
                    v111 = v147;
                    v16 = v148;
                    v110 = *a2;
                  }
                  v146 = v111;
                  sub_186B220(v110 - 2);
                  v111 = v146;
                  v68 = &v66[8 * v146[1]];
                }
                else
                {
                  *(_DWORD *)(v109 + 4) = 0;
                  v68 = (int *)(v109 + 8);
                }
                *a2 = v66;
                *v111 = v139;
              }
              else
              {
                v68 = &v66[8 * v67];
              }
            }
            else
            {
              v125 = (_QWORD *)sub_186B270(0x48u);
              v66 = (int *)(v125 + 1);
              *v125 = 2;
              *a2 = (int *)(v125 + 1);
              v68 = (int *)(v125 + 1);
            }
            v69 = qword_1C7F2C0;
            ++v55;
            *v68 = v165;
            *((_BYTE *)v68 + 4) = v166 & 3 | v68[1] & 0xFC;
            v70 = v167;
            v167 = 0;
            *((_QWORD *)v68 + 1) = v70;
            v68[4] = v168;
            *((_BYTE *)v68 + 20) = v169 & 3 | v68[5] & 0xFC;
            v71 = v170;
            v170 = 0;
            *((_QWORD *)v68 + 3) = v71;
            ++*(v66 - 1);
            sub_182CBA0(v69, &v165);
            sub_182CBA0(v69, &v168);
            v72 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v159);
            sub_182CBA0(v72, &v162);
            v73 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v153);
            sub_182CBA0(v73, &v156);
            v56 = *a3;
          }
          while ( *a3 );
        }
        v74 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v151);
        sub_182CBA0(v74, v152);
      }
    }
    v75 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v149);
    sub_182CBA0(v75, v150);
  }
}

