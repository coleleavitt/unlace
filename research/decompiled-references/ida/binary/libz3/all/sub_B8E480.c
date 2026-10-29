__int64 __fastcall sub_B8E480(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int *v3; // r14
  void *v4; // r13
  __int64 v5; // r15
  unsigned int v6; // eax
  void *v7; // r15
  __int64 v8; // r13
  __int64 v9; // r13
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int *v13; // rbx
  unsigned int v14; // r13d
  unsigned int *v15; // r14
  void *v16; // rdi
  __int64 v17; // r15
  int v18; // edx
  int v19; // edx
  __int64 v20; // rdx
  unsigned int v21; // edx
  void *v22; // r15
  __int64 v23; // r15
  char v24; // dl
  __int64 v25; // rax
  __int64 v26; // r13
  int v27; // ecx
  __int64 v28; // rdi
  unsigned int v29; // ecx
  unsigned int *v30; // r13
  __int64 v31; // r14
  int v32; // r15d
  char v33; // al
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rsi
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // ecx
  __int64 v44; // rax
  _DWORD *v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rbx
  __int64 v48; // r14
  __int64 v49; // r13
  void *v50; // r15
  __int64 v51; // r14
  int v52; // eax
  _QWORD *v53; // rsi
  __int64 v54; // rax
  _QWORD *v55; // rax
  void *v56; // r13
  __int64 v57; // rdx
  __int64 v58; // rdx
  unsigned int v59; // edx
  __int64 v60; // rcx
  __int64 v61; // rbx
  unsigned int v62; // r14d
  unsigned int v63; // ebx
  __int64 v64; // rbx
  int v65; // r13d
  __int64 v66; // rax
  __int64 v67; // rsi
  char v68; // al
  void *v69; // rdi
  __int64 v70; // rax
  unsigned int v71; // r15d
  __int64 v72; // r11
  __int64 v73; // rsi
  __int64 v74; // r10
  unsigned __int8 v75; // r15
  __int64 v76; // r10
  __int64 v77; // rdi
  __int64 v78; // r15
  unsigned int *v79; // r13
  int v80; // r9d
  char v81; // al
  __int64 v82; // rax
  __int64 v83; // r13
  __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rsi
  unsigned int v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // r9d
  size_t v90; // rdi
  __int64 v91; // rax
  _DWORD *v92; // r15
  unsigned int v93; // r9d
  _DWORD *v94; // r10
  __int64 v95; // rax
  _QWORD *v96; // rdx
  _DWORD *v97; // rdi
  _DWORD *i; // rax
  int v99; // ecx
  char v100; // r8
  __int64 v101; // rcx
  char v102; // r8
  __int64 v103; // rcx
  __int64 v104; // rax
  _DWORD *v105; // r13
  _DWORD *v106; // rbx
  _QWORD *v107; // r15
  void *v108; // r12
  _DWORD *v109; // rsi
  _QWORD *v110; // rax
  int v111; // eax
  __int64 v112; // rax
  unsigned int *v113; // rdi
  size_t v114; // rdx
  _DWORD *v115; // rax
  int v116; // esi
  _DWORD *v117; // rdx
  unsigned int *v118; // rax
  unsigned int *v119; // rsi
  __int64 v120; // rdx
  __int64 v121; // rbx
  __int64 j; // r13
  __int64 v123; // rsi
  __int64 v124; // rax
  __int64 v125; // r14
  void *v126; // r13
  __int64 v127; // rsi
  unsigned int v128; // ebx
  unsigned int *v130; // rax
  unsigned int *v131; // rsi
  __int64 v132; // rdx
  __int64 v133; // rbx
  __int64 v134; // rax
  __int64 v135; // r14
  void *v136; // r13
  __int64 v137; // rsi
  char **exception; // rbp
  unsigned int *v139; // [rsp+10h] [rbp-118h]
  int v140; // [rsp+10h] [rbp-118h]
  unsigned int v141; // [rsp+10h] [rbp-118h]
  __int64 v142; // [rsp+10h] [rbp-118h]
  void *v143; // [rsp+10h] [rbp-118h]
  int v144; // [rsp+18h] [rbp-110h]
  unsigned int v145; // [rsp+18h] [rbp-110h]
  unsigned int v146; // [rsp+18h] [rbp-110h]
  void *v147; // [rsp+18h] [rbp-110h]
  void *v148; // [rsp+18h] [rbp-110h]
  __int64 v149; // [rsp+18h] [rbp-110h]
  int v150; // [rsp+18h] [rbp-110h]
  int v151; // [rsp+18h] [rbp-110h]
  unsigned int v152; // [rsp+18h] [rbp-110h]
  unsigned int v153; // [rsp+18h] [rbp-110h]
  unsigned int v154; // [rsp+20h] [rbp-108h]
  __int64 v155; // [rsp+20h] [rbp-108h]
  unsigned int v156; // [rsp+20h] [rbp-108h]
  _DWORD *v157; // [rsp+20h] [rbp-108h]
  _DWORD *v158; // [rsp+20h] [rbp-108h]
  __int64 v159; // [rsp+28h] [rbp-100h]
  __int64 v160; // [rsp+28h] [rbp-100h]
  __int64 v161; // [rsp+28h] [rbp-100h]
  unsigned int v162; // [rsp+38h] [rbp-F0h]
  unsigned int v163; // [rsp+38h] [rbp-F0h]
  __int64 v164; // [rsp+38h] [rbp-F0h]
  __int64 v165; // [rsp+40h] [rbp-E8h]
  int v166; // [rsp+4Ch] [rbp-DCh]
  __int64 v167; // [rsp+50h] [rbp-D8h]
  unsigned int **v168; // [rsp+58h] [rbp-D0h]
  unsigned int v169; // [rsp+7Ch] [rbp-ACh] BYREF
  _QWORD v170[2]; // [rsp+80h] [rbp-A8h] BYREF
  _QWORD v171[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v172[4]; // [rsp+A0h] [rbp-88h] BYREF
  unsigned int v173; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v174; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v175; // [rsp+D0h] [rbp-58h]
  __int64 v176; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v177; // [rsp+E0h] [rbp-48h]

  v2 = a1;
  v3 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 56LL * a2);
  v4 = qword_1C7F2C0;
  v165 = *v3;
  v5 = *(_QWORD *)(a1 + 72) + 32 * v165;
  sub_182CEF0(qword_1C7F2C0, v5);
  sub_182CBA0(v4, v5 + 16);
  *(_BYTE *)(v5 + 20) &= ~1u;
  v6 = v3[1];
  *(_DWORD *)(v5 + 16) = 1;
  v7 = qword_1C7F2C0;
  v170[0] = 0;
  v171[0] = 1;
  v8 = *v3;
  v162 = v6;
  v169 = v6;
  v9 = *(_QWORD *)(a1 + 24) + 32 * v8;
  v170[1] = 0;
  v171[1] = 0;
  if ( (*(_BYTE *)(v9 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v170, v9);
  else
    LODWORD(v170[0]) = *(_DWORD *)v9;
  if ( (*(_BYTE *)(v9 + 20) & 1) != 0 )
  {
    sub_182C690(v7, v171, v9 + 16);
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 16);
    BYTE4(v171[0]) &= ~1u;
    LODWORD(v171[0]) = v10;
  }
  v11 = *(_QWORD *)(a1 + 24) + 32LL * v3[1];
  if ( (v171[0] & 0x100000000LL) != 0
    || LODWORD(v171[0]) != 1
    || (*(_BYTE *)(v11 + 20) & 1) != 0
    || *(_DWORD *)(v11 + 16) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v170, v11);
  }
  else
  {
    v143 = qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v170, v11);
    sub_182CBA0(v143, v171);
    BYTE4(v171[0]) &= ~1u;
    LODWORD(v171[0]) = 1;
  }
  sub_2FC4A0((__int64)qword_1C7F2C0, (__int64)v170, (__int64)(v3 + 2), (__int64)v170);
  v159 = v162;
  sub_27B950((__int64)qword_1C7F2C0, 32LL * v162 + *(_QWORD *)(a1 + 72), (int *)v170);
  v168 = (unsigned int **)(a1 + 96);
  *(_BYTE *)(*(_QWORD *)(a1 + 80) + v162) = 2;
  *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4LL * v162) = a2;
  sub_B76360((unsigned int **)(a1 + 96), &v169);
  sub_B8E130(a1, v162, (__int64)v170);
  while ( 1 )
  {
    v12 = *(_QWORD *)(v2 + 80);
    ++*(_DWORD *)v2;
    if ( *(_BYTE *)(v12 + v165) )
      break;
    v13 = *(unsigned int **)(*(_QWORD *)(v2 + 48) + 8 * v159);
    if ( v13 )
    {
      v139 = &v13[*(v13 - 1)];
      if ( v139 != v13 )
      {
        while ( 1 )
        {
          v14 = *v13;
          v15 = (unsigned int *)(*(_QWORD *)(v2 + 40) + 56LL * *v13);
          if ( !*((_BYTE *)v15 + 52) )
            goto LABEL_13;
          v16 = qword_1C7F2C0;
          v17 = *(_QWORD *)(v2 + 24) + 32LL * *v15;
          if ( (*(_BYTE *)(v17 + 4) & 1) != 0 )
          {
            v147 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, v170, *(_QWORD *)(v2 + 24) + 32LL * *v15);
            v16 = v147;
          }
          else
          {
            v18 = *(_DWORD *)v17;
            BYTE4(v170[0]) &= ~1u;
            LODWORD(v170[0]) = v18;
          }
          if ( (*(_BYTE *)(v17 + 20) & 1) != 0 )
          {
            sub_182C690(v16, v171, v17 + 16);
          }
          else
          {
            v19 = *(_DWORD *)(v17 + 16);
            BYTE4(v171[0]) &= ~1u;
            LODWORD(v171[0]) = v19;
          }
          v20 = *(_QWORD *)(v2 + 24) + 32LL * v15[1];
          if ( (v171[0] & 0x100000000LL) != 0
            || LODWORD(v171[0]) != 1
            || (*(_BYTE *)(v20 + 20) & 1) != 0
            || *(_DWORD *)(v20 + 16) != 1 )
          {
            sub_1852000(qword_1C7F2C0, v170, v20);
          }
          else
          {
            v148 = qword_1C7F2C0;
            sub_1832A70(qword_1C7F2C0, v170, v20);
            sub_182CBA0(v148, v171);
            BYTE4(v171[0]) &= ~1u;
            LODWORD(v171[0]) = 1;
          }
          v21 = v15[2];
          v22 = qword_1C7F2C0;
          if ( v21 )
          {
            if ( LODWORD(v170[0]) )
            {
              if ( (v171[0] & 0x100000000LL) != 0 || LODWORD(v171[0]) != 1 || (v15[7] & 1) != 0 || v15[6] != 1 )
              {
                sub_1851D20(qword_1C7F2C0, v170, v15 + 2, v170);
              }
              else
              {
                sub_1831A80(qword_1C7F2C0, v170, v15 + 2, v170);
                sub_182CBA0(v22, v171);
                BYTE4(v171[0]) &= ~1u;
                LODWORD(v171[0]) = 1;
              }
            }
            else
            {
              if ( (v15[3] & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v170, v15 + 2);
              }
              else
              {
                BYTE4(v170[0]) &= ~1u;
                LODWORD(v170[0]) = v21;
              }
              if ( (v15[7] & 1) != 0 )
              {
                sub_182C690(v22, v171, v15 + 6);
              }
              else
              {
                v59 = v15[6];
                BYTE4(v171[0]) &= ~1u;
                LODWORD(v171[0]) = v59;
              }
            }
          }
          else
          {
            if ( (v170[0] & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, v170, v170);
            else
              BYTE4(v170[0]) &= ~1u;
            if ( (v171[0] & 0x100000000LL) != 0 )
              sub_182C690(v22, v171, v171);
            else
              BYTE4(v171[0]) &= ~1u;
          }
          if ( SLODWORD(v170[0]) >= 0 )
            goto LABEL_13;
          v23 = v15[1];
          v24 = *(_BYTE *)(*(_QWORD *)(v2 + 80) + v23);
          v169 = v15[1];
          if ( v24 == 1 )
          {
            if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)v170, *(_QWORD *)(v2 + 72) + 32 * v23) )
            {
              sub_27B950((__int64)qword_1C7F2C0, *(_QWORD *)(v2 + 72) + 32 * v23, (int *)v170);
              v76 = *(_QWORD *)(v2 + 120);
              v77 = *(_QWORD *)(v2 + 112);
              *(_DWORD *)(*(_QWORD *)(v2 + 88) + 4 * v23) = v14;
              v78 = *(unsigned int *)(v76 + 4 * v23);
              v79 = (unsigned int *)(v77 + 4 * v78);
              v80 = (int)v78 >> 1;
              v156 = *v79;
              v161 = *v79;
              if ( (int)v78 >> 1 )
              {
                do
                {
                  v83 = 4LL * (unsigned int)v80;
                  v84 = **(_QWORD **)(v2 + 104);
                  v85 = v84 + 32LL * *(unsigned int *)(v77 + v83);
                  v86 = 32LL * v156 + v84;
                  if ( (*(_BYTE *)(v86 + 20) & 1) != 0
                    || *(_DWORD *)(v86 + 16) != 1
                    || (*(_BYTE *)(v85 + 20) & 1) != 0
                    || *(_DWORD *)(v85 + 16) != 1 )
                  {
                    v150 = v80;
                    v81 = sub_1848D40(qword_1C7F2C0, v86, v85);
                    v77 = *(_QWORD *)(v2 + 112);
                    v76 = *(_QWORD *)(v2 + 120);
                    v80 = v150;
                    if ( !v81 )
                      goto LABEL_108;
                  }
                  else
                  {
                    if ( (*(_BYTE *)(v86 + 4) & 1) != 0 || (*(_BYTE *)(v85 + 4) & 1) != 0 )
                    {
                      v151 = v80;
                      v87 = sub_182C7B0(qword_1C7F2C0, v86, v85);
                      v77 = *(_QWORD *)(v2 + 112);
                      v76 = *(_QWORD *)(v2 + 120);
                      v88 = v87 >> 31;
                      v80 = v151;
                    }
                    else
                    {
                      LOBYTE(v88) = *(_DWORD *)v86 < *(_DWORD *)v85;
                    }
                    if ( !(_BYTE)v88 )
                    {
LABEL_108:
                      v79 = (unsigned int *)(v77 + 4LL * (unsigned int)v78);
                      goto LABEL_109;
                    }
                  }
                  v79 = (unsigned int *)(v77 + v83);
                  v82 = *v79;
                  *(_DWORD *)(v77 + 4LL * (unsigned int)v78) = v82;
                  *(_DWORD *)(v76 + 4 * v82) = v78;
                  LODWORD(v78) = v80;
                  v80 >>= 1;
                }
                while ( v80 );
                LODWORD(v78) = 1;
              }
LABEL_109:
              *v79 = v156;
              *(_DWORD *)(v76 + 4 * v161) = v78;
            }
            goto LABEL_13;
          }
          if ( v24 == 2 )
          {
LABEL_13:
            if ( v139 == ++v13 )
              break;
          }
          else
          {
            if ( v24 )
            {
              sub_1872CE0("");
              sub_1873130(114, 418);
            }
            sub_27B950((__int64)qword_1C7F2C0, *(_QWORD *)(v2 + 72) + 32 * v23, (int *)v170);
            *(_BYTE *)(*(_QWORD *)(v2 + 80) + v23) = 1;
            *(_DWORD *)(*(_QWORD *)(v2 + 88) + 4 * v23) = v14;
            sub_B76360(v168, &v169);
            v173 = v23;
            v25 = *(_QWORD *)(v2 + 112);
            if ( v25 )
            {
              v26 = *(unsigned int *)(v25 - 4);
              v27 = *(_DWORD *)(v25 - 4);
            }
            else
            {
              v27 = 0;
              v26 = 0;
            }
            v144 = v27;
            *(_DWORD *)(*(_QWORD *)(v2 + 120) + 4 * v23) = v27;
            sub_B76360((unsigned int **)(v2 + 112), &v173);
            v28 = *(_QWORD *)(v2 + 112);
            v29 = v144;
            v30 = (unsigned int *)(v28 + 4 * v26);
            v154 = *v30;
            v31 = 32LL * *v30;
            v32 = v144 >> 1;
            v160 = *v30;
            if ( v144 >> 1 )
            {
              while ( 1 )
              {
                v36 = 4LL * (unsigned int)v32;
                v37 = **(_QWORD **)(v2 + 104);
                v38 = v37 + 32LL * *(unsigned int *)(v28 + v36);
                v39 = v31 + v37;
                if ( (*(_BYTE *)(v39 + 20) & 1) != 0
                  || *(_DWORD *)(v39 + 16) != 1
                  || (*(_BYTE *)(v38 + 20) & 1) != 0
                  || *(_DWORD *)(v38 + 16) != 1 )
                {
                  v145 = v29;
                  v33 = sub_1848D40(qword_1C7F2C0, v39, v38);
                  v28 = *(_QWORD *)(v2 + 112);
                  v29 = v145;
                  if ( !v33 )
                    goto LABEL_46;
                }
                else
                {
                  if ( (*(_BYTE *)(v39 + 4) & 1) != 0 || (*(_BYTE *)(v38 + 4) & 1) != 0 )
                  {
                    v146 = v29;
                    v40 = sub_182C7B0(qword_1C7F2C0, v39, v38);
                    v28 = *(_QWORD *)(v2 + 112);
                    v29 = v146;
                    v41 = v40 >> 31;
                  }
                  else
                  {
                    LOBYTE(v41) = *(_DWORD *)v39 < *(_DWORD *)v38;
                  }
                  if ( !(_BYTE)v41 )
                  {
LABEL_46:
                    v30 = (unsigned int *)(v28 + 4LL * v29);
                    goto LABEL_47;
                  }
                }
                v30 = (unsigned int *)(v28 + v36);
                v34 = *v30;
                *(_DWORD *)(v28 + 4LL * v29) = v34;
                v35 = *(_QWORD *)(v2 + 120);
                *(_DWORD *)(v35 + 4 * v34) = v29;
                v29 = v32;
                if ( !(v32 >> 1) )
                  break;
                v32 >>= 1;
              }
              v29 = 1;
            }
            else
            {
LABEL_47:
              v35 = *(_QWORD *)(v2 + 120);
            }
            ++v13;
            *v30 = v154;
            *(_DWORD *)(v35 + 4 * v160) = v29;
            if ( v139 == v13 )
              break;
          }
        }
      }
    }
    v42 = *(_QWORD *)(v2 + 112);
    v43 = *(_DWORD *)(v42 - 4);
    if ( v43 == 1 )
    {
      v130 = *(unsigned int **)(v2 + 96);
      if ( v130 )
      {
        v131 = &v130[*(v130 - 1)];
        if ( v130 == v131 )
          goto LABEL_169;
        do
        {
          v132 = *v130++;
          *(_BYTE *)(*(_QWORD *)(v2 + 80) + v132) = 0;
        }
        while ( v130 != v131 );
        v131 = *(unsigned int **)(v2 + 96);
        if ( v131 )
LABEL_169:
          *(v131 - 1) = 0;
      }
      v133 = *(_QWORD *)(v2 + 32);
      if ( v133 )
      {
        v134 = *(unsigned int *)(v133 - 4);
        if ( (_DWORD)v134 )
        {
          v135 = v133 + 40 * v134;
          do
          {
            v136 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v133 + 8);
            v137 = v133 + 24;
            v133 += 40;
            sub_182CBA0(v136, v137);
          }
          while ( v133 != v135 );
          v133 = *(_QWORD *)(v2 + 32);
        }
        *(_DWORD *)(v133 - 4) = 0;
      }
      v128 = 1;
      goto LABEL_162;
    }
    v44 = *(_QWORD *)(v2 + 120);
    v163 = *(_DWORD *)(v42 + 4);
    v159 = v163;
    v45 = (_DWORD *)(v44 + 4LL * v163);
    if ( v43 == 2 )
    {
      *v45 = 0;
      --*(_DWORD *)(v42 - 4);
    }
    else
    {
      v60 = *(unsigned int *)(v42 + 4LL * (unsigned int)(v43 - 1));
      *(_DWORD *)(v42 + 4) = v60;
      *(_DWORD *)(v44 + 4 * v60) = 1;
      *v45 = 0;
      v61 = *(unsigned int *)(v42 + 4);
      v140 = *(_DWORD *)(v42 - 4) - 1;
      *(_DWORD *)(v42 - 4) = v140;
      v166 = v61;
      v167 = v61;
      if ( v140 > 2 )
      {
        v62 = 1;
        v155 = 32 * v61;
        v63 = 2;
        while ( 1 )
        {
          v69 = qword_1C7F2C0;
          v70 = v63 + 1;
          v71 = v63;
          v72 = **(_QWORD **)(v2 + 104);
          if ( v140 > (int)v70 )
          {
            v73 = v72 + 32LL * *(unsigned int *)(v42 + 4 * v70);
            v74 = v72 + 32LL * *(unsigned int *)(v42 + 4LL * v63);
            if ( (*(_BYTE *)(v73 + 20) & 1) != 0
              || *(_DWORD *)(v73 + 16) != 1
              || (*(_BYTE *)(v74 + 20) & 1) != 0
              || *(_DWORD *)(v74 + 16) != 1 )
            {
              v75 = sub_1848D40(qword_1C7F2C0, v73, v72 + 32LL * *(unsigned int *)(v42 + 4LL * v63));
              v42 = *(_QWORD *)(v2 + 112);
              v69 = qword_1C7F2C0;
              v72 = **(_QWORD **)(v2 + 104);
            }
            else if ( (*(_BYTE *)(v73 + 4) & 1) != 0 || (*(_BYTE *)(v74 + 4) & 1) != 0 )
            {
              v111 = sub_182C7B0(qword_1C7F2C0, v73, v72 + 32LL * *(unsigned int *)(v42 + 4LL * v63));
              v42 = *(_QWORD *)(v2 + 112);
              v69 = qword_1C7F2C0;
              v75 = v111 < 0;
              v72 = **(_QWORD **)(v2 + 104);
            }
            else
            {
              v75 = *(_DWORD *)v73 < *(_DWORD *)v74;
            }
            v71 = v63 + v75;
          }
          v149 = 4LL * v71;
          v64 = *(unsigned int *)(v42 + v149);
          v65 = *(_DWORD *)(v42 + v149);
          v66 = v72 + v155;
          v67 = v72 + 32 * v64;
          if ( (*(_BYTE *)(v67 + 20) & 1) != 0
            || *(_DWORD *)(v67 + 16) != 1
            || (*(_BYTE *)(v66 + 20) & 1) != 0
            || *(_DWORD *)(v66 + 16) != 1 )
          {
            v68 = sub_1848D40(v69, v67, v72 + v155);
            v42 = *(_QWORD *)(v2 + 112);
            if ( !v68 )
              goto LABEL_90;
          }
          else
          {
            if ( (*(_BYTE *)(v67 + 4) & 1) != 0 || (*(_BYTE *)(v66 + 4) & 1) != 0 )
            {
              LODWORD(v66) = sub_182C7B0(v69, v67, v72 + v155);
              v42 = *(_QWORD *)(v2 + 112);
              LODWORD(v66) = (unsigned int)v66 >> 31;
            }
            else
            {
              LOBYTE(v66) = *(_DWORD *)v67 < *(_DWORD *)v66;
            }
            if ( !(_BYTE)v66 )
            {
LABEL_90:
              v71 = v62;
              v149 = 4LL * v62;
              v44 = *(_QWORD *)(v2 + 120);
              goto LABEL_91;
            }
          }
          *(_DWORD *)(v42 + 4LL * v62) = v65;
          v44 = *(_QWORD *)(v2 + 120);
          *(_DWORD *)(v44 + 4 * v64) = v62;
          v63 = 2 * v71;
          if ( v140 <= (int)(2 * v71) )
            goto LABEL_91;
          v62 = v71;
        }
      }
      v149 = 4;
      v71 = 1;
LABEL_91:
      *(_DWORD *)(v42 + v149) = v166;
      *(_DWORD *)(v44 + 4 * v167) = v71;
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 80) + v163) = 2;
    v46 = *(_QWORD *)(v2 + 24);
    v47 = 32LL * v163;
    v48 = *(_QWORD *)(v2 + 72);
    v174 = 0;
    v49 = v47 + v46;
    v50 = qword_1C7F2C0;
    v175 = 0;
    v173 = v163;
    v51 = v47 + v48;
    v176 = 1;
    v177 = 0;
    if ( (*(_BYTE *)(v49 + 4) & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v174, v49);
    else
      LODWORD(v174) = *(_DWORD *)v49;
    if ( (*(_BYTE *)(v49 + 20) & 1) != 0 )
    {
      sub_182C690(v50, &v176, v49 + 16);
      v53 = *(_QWORD **)(v2 + 32);
      if ( !v53 )
      {
LABEL_122:
        v110 = (_QWORD *)sub_186B270(0x58u);
        v53 = v110 + 1;
        *v110 = 2;
        *(_QWORD *)(v2 + 32) = v110 + 1;
        v55 = v110 + 1;
        goto LABEL_58;
      }
    }
    else
    {
      v52 = *(_DWORD *)(v49 + 16);
      v53 = *(_QWORD **)(v2 + 32);
      BYTE4(v176) &= ~1u;
      LODWORD(v176) = v52;
      if ( !v53 )
        goto LABEL_122;
    }
    v54 = *((unsigned int *)v53 - 1);
    if ( (_DWORD)v54 == *((_DWORD *)v53 - 2) )
    {
      v89 = (unsigned int)(3 * v54 + 1) >> 1;
      v90 = 40 * v89 + 8;
      if ( 40 * (int)v54 + 8 >= (unsigned int)v90 || (unsigned int)v54 >= v89 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(v172, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v172);
        sub_233E40((__int64)v172);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v141 = (unsigned int)(3 * v54 + 1) >> 1;
      v91 = sub_186B270(v90);
      v92 = *(_DWORD **)(v2 + 32);
      v93 = v141;
      v94 = (_DWORD *)v91;
      v53 = (_QWORD *)(v91 + 8);
      if ( v92 )
      {
        v95 = (unsigned int)*(v92 - 1);
        v96 = v53;
        v94[1] = v95;
        v97 = &v92[10 * v95];
        for ( i = v92; v97 != i; *(v96 - 1) = v103 )
        {
          v99 = *i;
          i += 10;
          v96 += 5;
          *((_DWORD *)v96 - 10) = v99;
          v100 = *((_BYTE *)i - 28);
          *((_DWORD *)v96 - 8) = *(i - 8);
          *((_BYTE *)v96 - 28) = v100 & 3 | *((_BYTE *)v96 - 28) & 0xFC;
          v101 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *(v96 - 3) = v101;
          v102 = *((_BYTE *)i - 12);
          *((_DWORD *)v96 - 4) = *(i - 4);
          *((_BYTE *)v96 - 12) = v102 & 3 | *((_BYTE *)v96 - 12) & 0xFC;
          v103 = *((_QWORD *)i - 1);
          *((_QWORD *)i - 1) = 0;
        }
        v104 = (unsigned int)*(v92 - 1);
        if ( (_DWORD)v104 )
        {
          v152 = v141;
          v157 = v94;
          v105 = &v92[10 * v104];
          v164 = v2;
          v142 = v47;
          v106 = v92;
          v107 = v53;
          do
          {
            v108 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v106 + 2);
            v109 = v106 + 6;
            v106 += 10;
            sub_182CBA0(v108, v109);
          }
          while ( v106 != v105 );
          v2 = v164;
          v53 = v107;
          v47 = v142;
          v93 = v152;
          v94 = v157;
          v92 = *(_DWORD **)(v164 + 32);
        }
        v158 = v94;
        v153 = v93;
        sub_186B220(v92 - 2);
        v94 = v158;
        v93 = v153;
        v55 = &v53[5 * (unsigned int)v158[1]];
      }
      else
      {
        *(_DWORD *)(v91 + 4) = 0;
        v55 = (_QWORD *)(v91 + 8);
      }
      *(_QWORD *)(v2 + 32) = v53;
      *v94 = v93;
    }
    else
    {
      v55 = &v53[5 * v54];
    }
LABEL_58:
    v56 = qword_1C7F2C0;
    *(_DWORD *)v55 = v173;
    *((_DWORD *)v55 + 2) = v174;
    *((_BYTE *)v55 + 12) = BYTE4(v174) & 3 | *((_BYTE *)v55 + 12) & 0xFC;
    v57 = v175;
    v175 = 0;
    v55[2] = v57;
    *((_DWORD *)v55 + 6) = v176;
    *((_BYTE *)v55 + 28) = BYTE4(v176) & 3 | *((_BYTE *)v55 + 28) & 0xFC;
    v58 = v177;
    v177 = 0;
    v55[4] = v58;
    ++*((_DWORD *)v53 - 1);
    sub_182CBA0(v56, &v174);
    sub_182CBA0(v56, &v176);
    sub_2FC4A0((__int64)qword_1C7F2C0, *(_QWORD *)(v2 + 24) + v47, v51, *(_QWORD *)(v2 + 24) + v47);
  }
  v112 = *(_QWORD *)(v2 + 112);
  if ( !v112 || *(_DWORD *)(v112 - 4) != 1 )
  {
    v113 = *(unsigned int **)(v2 + 120);
    if ( v113 )
      v114 = 4LL * *(v113 - 1);
    else
      v114 = 0;
    memset(v113, 0, v114);
    v115 = *(_DWORD **)(v2 + 112);
    if ( !v115 || (v116 = *(v115 - 2), *(v115 - 1) = 0, v117 = v115, !v116) )
    {
      sub_313C10((unsigned int **)(v2 + 112));
      v115 = *(_DWORD **)(v2 + 112);
      v117 = &v115[*(v115 - 1)];
    }
    *v117 = -1;
    ++*(v115 - 1);
  }
  v118 = *(unsigned int **)(v2 + 96);
  if ( v118 )
  {
    v119 = &v118[*(v118 - 1)];
    if ( v118 == v119 )
      goto LABEL_149;
    do
    {
      v120 = *v118++;
      *(_BYTE *)(*(_QWORD *)(v2 + 80) + v120) = 0;
    }
    while ( v118 != v119 );
    v119 = *(unsigned int **)(v2 + 96);
    if ( v119 )
LABEL_149:
      *(v119 - 1) = 0;
  }
  v121 = *(_QWORD *)(v2 + 32);
  if ( v121 )
  {
    for ( j = v121 + 40LL * *(unsigned int *)(v121 - 4);
          v121 != j;
          sub_27B950((__int64)qword_1C7F2C0, *(_QWORD *)(v2 + 24) + 32 * v123, (int *)(j + 8)) )
    {
      v123 = *(unsigned int *)(j - 40);
      j -= 40;
    }
    v121 = *(_QWORD *)(v2 + 32);
  }
  if ( v121 )
  {
    v124 = *(unsigned int *)(v121 - 4);
    if ( (_DWORD)v124 )
    {
      v125 = v121 + 40 * v124;
      do
      {
        v126 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v121 + 8);
        v127 = v121 + 24;
        v121 += 40;
        sub_182CBA0(v126, v127);
      }
      while ( v121 != v125 );
      v121 = *(_QWORD *)(v2 + 32);
    }
    *(_DWORD *)(v121 - 4) = 0;
  }
  v128 = 0;
LABEL_162:
  sub_25A130((char *)v170);
  return v128;
}

