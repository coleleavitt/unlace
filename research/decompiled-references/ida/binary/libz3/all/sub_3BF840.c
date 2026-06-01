__int64 __fastcall sub_3BF840(_QWORD *a1, size_t a2, double a3)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdx
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r8d
  unsigned int v10; // ecx
  __int64 v11; // rcx
  __int64 *v12; // r9
  __int64 *i; // r13
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // r12
  unsigned int v19; // ebx
  unsigned int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  double *v23; // rcx
  __int64 v24; // r13
  int v25; // eax
  _DWORD *v26; // rdx
  char v27; // al
  _QWORD *v28; // rax
  __int64 v29; // r14
  unsigned int v30; // r10d
  __int64 v31; // rax
  _QWORD *v32; // r8
  __int64 v33; // rbp
  unsigned int v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // edx
  unsigned int v37; // r12d
  unsigned int *v38; // rax
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // r12
  double *v42; // rax
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdi
  unsigned int v47; // ebp
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rcx
  __int64 *v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rax
  int v54; // r9d
  __int64 *v55; // rcx
  __int64 v56; // r9
  __int64 *v57; // rdi
  __int64 *k; // r12
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rbp
  _QWORD *v62; // rbx
  unsigned int v63; // r12d
  unsigned int *v64; // rax
  unsigned int v65; // eax
  __int64 v66; // rbp
  __int64 v67; // rdx
  __int64 v68; // r12
  unsigned int v69; // ebp
  unsigned int v70; // edx
  __int64 v71; // rax
  double *v72; // r14
  double v73; // xmm0_8
  unsigned int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // r13
  size_t v80; // rdx
  unsigned int v81; // r13d
  unsigned int v82; // edx
  unsigned int v83; // eax
  __int64 v84; // r14
  int v85; // eax
  _DWORD *v86; // rdx
  char v87; // cl
  __int64 v88; // rbp
  __int64 v89; // rax
  unsigned int v90; // eax
  double v91; // xmm5_8
  __int64 v92; // rbp
  __int64 v93; // rax
  unsigned int v94; // r11d
  unsigned int v95; // eax
  __int64 j; // r8
  int v97; // eax
  __int64 v98; // r8
  _DWORD *v99; // rdx
  char v100; // cl
  unsigned int v101; // r9d
  unsigned int v102; // eax
  __int64 v103; // r10
  int v104; // eax
  __int64 v105; // r10
  _DWORD *v106; // rdx
  char v107; // al
  bool v108; // zf
  __int64 v109; // rax
  unsigned int v110; // eax
  unsigned int v111; // ecx
  __int64 v112; // rsi
  int v113; // eax
  _DWORD *v114; // rdx
  char v115; // al
  unsigned int v116; // eax
  int v117; // ecx
  char **exception; // rbx
  char **v119; // rbx
  char **v120; // r14
  __int64 v121; // [rsp+8h] [rbp-110h]
  __int64 v122; // [rsp+8h] [rbp-110h]
  unsigned int v123; // [rsp+10h] [rbp-108h]
  unsigned int v124; // [rsp+10h] [rbp-108h]
  double v125; // [rsp+10h] [rbp-108h]
  unsigned int v126; // [rsp+10h] [rbp-108h]
  __int64 v127; // [rsp+10h] [rbp-108h]
  __int64 v128; // [rsp+10h] [rbp-108h]
  __int64 v129; // [rsp+10h] [rbp-108h]
  unsigned int v130; // [rsp+10h] [rbp-108h]
  unsigned int v131; // [rsp+10h] [rbp-108h]
  unsigned int v132; // [rsp+18h] [rbp-100h]
  __int64 v133; // [rsp+18h] [rbp-100h]
  __int64 v134; // [rsp+18h] [rbp-100h]
  unsigned int v135; // [rsp+20h] [rbp-F8h]
  _QWORD *v136; // [rsp+20h] [rbp-F8h]
  size_t v137; // [rsp+28h] [rbp-F0h]
  unsigned int v138; // [rsp+34h] [rbp-E4h]
  double v139; // [rsp+38h] [rbp-E0h]
  unsigned int v140; // [rsp+40h] [rbp-D8h]
  unsigned int v141; // [rsp+40h] [rbp-D8h]
  __int64 v142; // [rsp+40h] [rbp-D8h]
  unsigned int v143; // [rsp+40h] [rbp-D8h]
  unsigned int v144; // [rsp+48h] [rbp-D0h]
  unsigned int v145; // [rsp+48h] [rbp-D0h]
  unsigned int v146; // [rsp+48h] [rbp-D0h]
  __int64 v147; // [rsp+48h] [rbp-D0h]
  __int64 v148; // [rsp+50h] [rbp-C8h]
  __int64 v149; // [rsp+50h] [rbp-C8h]
  unsigned int v150; // [rsp+50h] [rbp-C8h]
  unsigned int v151; // [rsp+58h] [rbp-C0h]
  unsigned int v152; // [rsp+58h] [rbp-C0h]
  __int64 v153; // [rsp+58h] [rbp-C0h]
  __int64 v154; // [rsp+60h] [rbp-B8h]
  unsigned int v155; // [rsp+60h] [rbp-B8h]
  int v156; // [rsp+7Ch] [rbp-9Ch] BYREF
  _BYTE v157[16]; // [rsp+80h] [rbp-98h] BYREF
  _BYTE v158[32]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v159[2]; // [rsp+B0h] [rbp-68h] BYREF
  char v160[88]; // [rsp+C0h] [rbp-58h] BYREF

  v4 = a1[8];
  v137 = a2;
  if ( v4 )
    *(_DWORD *)(v4 - 4) = 0;
  v132 = 0;
  v5 = *(_QWORD *)(a2 + 24);
  if ( !v5 )
    goto LABEL_47;
LABEL_4:
  if ( v132 >= *(_DWORD *)(v5 - 4) )
    goto LABEL_14;
  do
  {
    v6 = (__int64 *)a1[4];
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 8LL * v132) + 16LL);
    v121 = *(_QWORD *)(v5 + 8LL * v132);
    v8 = *((unsigned int *)a1 + 10);
    v9 = *(_DWORD *)(v7 + 12);
    v10 = v8 - 1;
    v8 *= 16;
    a2 = (size_t)v6 + v8;
    v11 = 16LL * (v9 & v10);
    v12 = &v6[(unsigned __int64)v11 / 8];
    if ( v11 != v8 )
    {
      for ( i = &v6[(unsigned __int64)v11 / 8]; (__int64 *)a2 != i; i += 2 )
      {
        v14 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v14 + 12) == v9 && v7 == v14 )
          {
LABEL_31:
            v29 = 0;
            v30 = *(_DWORD *)(v121 + 24);
            if ( !v30 )
            {
LABEL_12:
              ++v132;
              goto LABEL_13;
            }
            while ( 2 )
            {
              while ( 1 )
              {
                v31 = *(_QWORD *)(v121 + 8LL * (unsigned int)v29 + 32);
                if ( *(_WORD *)(v31 + 4) == 1 )
                  break;
                if ( (unsigned int)++v29 >= v30 )
                  goto LABEL_46;
              }
              v32 = (_QWORD *)a1[8];
              v33 = *(unsigned int *)(v31 + 16);
              if ( v32 )
              {
                v34 = *((_DWORD *)v32 - 1);
                v123 = v34;
                if ( (unsigned int)v33 < v34 )
                  goto LABEL_45;
                v35 = v33 + 1;
                if ( v34 >= (int)v33 + 1 )
                {
                  *((_DWORD *)v32 - 1) = v35;
                  v30 = *(_DWORD *)(v121 + 24);
                  goto LABEL_45;
                }
LABEL_42:
                while ( 1 )
                {
                  v39 = *((_DWORD *)v32 - 2);
                  if ( v39 >= v35 )
                    break;
                  v36 = (3 * v39 + 1) >> 1;
                  a2 = 8 * v36 + 8;
                  v37 = v36;
                  if ( 8 * v39 + 8 >= (unsigned int)a2 || v39 >= v36 )
                  {
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_3BCB70(v159, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v159);
                    sub_233E40((__int64)v159);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v38 = (unsigned int *)sub_186B300(v32 - 1, a2);
                  v32 = v38 + 2;
                  *v38 = v37;
                  a1[8] = v38 + 2;
                }
                *((_DWORD *)v32 - 1) = v35;
                v40 = 8LL * v35;
                v41 = 8LL * v123;
                v30 = *(_DWORD *)(v121 + 24);
                if ( v41 != v40 )
                {
                  a2 = 0;
                  v136 = v32;
                  v124 = *(_DWORD *)(v121 + 24);
                  memset(&v32[(unsigned __int64)v41 / 8], 0, v40 - v41);
                  v32 = v136;
                  v30 = v124;
                }
              }
              else
              {
                v35 = v33 + 1;
                if ( (_DWORD)v33 != -1 )
                {
                  v45 = (_QWORD *)sub_186B270(0x18u);
                  v123 = 0;
                  v32 = v45 + 1;
                  *v45 = 2;
                  a1[8] = v45 + 1;
                  goto LABEL_42;
                }
              }
LABEL_45:
              v42 = (double *)&v32[v33];
              a3 = *v42 + *(double *)(i[1] + 8 * v29++);
              *v42 = a3;
              if ( (unsigned int)v29 >= v30 )
              {
LABEL_46:
                ++v132;
                v5 = *(_QWORD *)(v137 + 24);
                if ( !v5 )
                {
LABEL_47:
                  v138 = 0;
                  goto LABEL_48;
                }
                goto LABEL_4;
              }
              continue;
            }
          }
        }
        else if ( !v14 )
        {
          goto LABEL_12;
        }
      }
    }
    if ( v6 == v12 )
      goto LABEL_12;
    while ( 1 )
    {
      v44 = *v6;
      if ( (unsigned __int64)*v6 <= 1 )
        break;
      if ( *(_DWORD *)(v44 + 12) == v9 && v7 == v44 )
      {
        i = v6;
        goto LABEL_31;
      }
LABEL_54:
      v6 += 2;
      if ( v12 == v6 )
        goto LABEL_12;
    }
    if ( v44 )
      goto LABEL_54;
    ++v132;
LABEL_13:
    ;
  }
  while ( v132 < *(_DWORD *)(v5 - 4) );
LABEL_14:
  v135 = 0;
  v138 = 0;
  v139 = 0.0;
  do
  {
    if ( v135 >= *(_DWORD *)(v5 - 4) )
      break;
    v15 = (_QWORD *)a1[7];
    if ( v15 )
      *((_DWORD *)v15 - 1) = 0;
    v16 = *(_QWORD *)(v5 + 8LL * v135);
    v17 = *(_DWORD *)(v16 + 24);
    v122 = v16;
    if ( v17 )
    {
      v18 = *(_QWORD *)(v16 + 32);
      v19 = 0;
      v156 = 0;
      a3 = 0.0;
      if ( *(_WORD *)(v18 + 4) )
        goto LABEL_20;
      while ( 1 )
      {
        v24 = *(_QWORD *)(v18 + 16);
        v25 = sub_15F0200(a1 + 1);
        v26 = *(_DWORD **)(v24 + 24);
        if ( v26 )
        {
          if ( v25 == *v26 && !v26[1] )
            break;
        }
        v27 = sub_15D26C0(*a1, v18);
        v15 = (_QWORD *)a1[7];
        if ( !v27 )
        {
          a3 = (double)v156;
LABEL_20:
          if ( !v15 )
            goto LABEL_29;
LABEL_21:
          v20 = *((_DWORD *)v15 - 1);
          if ( v20 == *((_DWORD *)v15 - 2) )
          {
            v47 = (3 * v20 + 1) >> 1;
            v48 = 8 * v47 + 8;
            if ( 8 * v20 + 8 >= (unsigned int)v48 || v20 >= v47 )
            {
              v119 = (char **)__cxa_allocate_exception(0x28u);
              sub_3BCB70(v159, "Overflow encountered when expanding vector");
              *v119 = (char *)off_1C63128;
              sub_2333C0(v119 + 1, v159);
              sub_233E40((__int64)v159);
              __cxa_throw(v119, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v49 = (unsigned int *)sub_186B300(v15 - 1, v48);
            v50 = v49[1];
            v15 = v49 + 2;
            *v49 = v47;
            a1[7] = v49 + 2;
            LODWORD(v49) = v50;
            v23 = (double *)&v15[v50];
            v22 = (_DWORD)v49 + 1;
          }
          else
          {
            v21 = v20;
            v22 = v20 + 1;
            v23 = (double *)&v15[v21];
          }
          goto LABEL_23;
        }
        a3 = (double)(v156 + 1);
        if ( v15 )
          goto LABEL_21;
LABEL_29:
        v28 = (_QWORD *)sub_186B270(0x18u);
        v15 = v28 + 1;
        a1[7] = v28 + 1;
        v23 = (double *)(v28 + 1);
        *v28 = 2;
        v22 = 1;
LABEL_23:
        *v23 = a3;
        ++v19;
        *((_DWORD *)v15 - 1) = v22;
        v17 = *(_DWORD *)(v122 + 24);
        if ( v19 >= v17 )
          goto LABEL_65;
        v156 = 0;
        a3 = 0.0;
        v18 = *(_QWORD *)(v122 + 8LL * v19 + 32);
        if ( *(_WORD *)(v18 + 4) )
          goto LABEL_21;
      }
      v81 = 0;
      v82 = v156 + 1;
      v83 = *(_DWORD *)(v18 + 24);
      ++v156;
      if ( !v83 )
      {
LABEL_118:
        a3 = (double)(int)v82;
        v15 = (_QWORD *)a1[7];
        goto LABEL_20;
      }
      while ( 1 )
      {
        if ( v82 > 0x13 )
          goto LABEL_117;
        v84 = *(_QWORD *)(v18 + 8LL * v81 + 32);
        if ( *(_WORD *)(v84 + 4) )
        {
          while ( ++v81 < v83 )
          {
            v84 = *(_QWORD *)(v18 + 8LL * v81 + 32);
            if ( !*(_WORD *)(v84 + 4) )
              goto LABEL_122;
          }
          goto LABEL_118;
        }
LABEL_122:
        v127 = *(_QWORD *)(v84 + 16);
        v85 = sub_15F0200(a1 + 1);
        v86 = *(_DWORD **)(v127 + 24);
        if ( v86 )
        {
          if ( v85 == *v86 && !v86[1] )
            break;
        }
        v87 = sub_15D26C0(*a1, v84);
        v82 = v156;
        v83 = *(_DWORD *)(v18 + 24);
        if ( v87 )
          v82 = ++v156;
LABEL_117:
        if ( ++v81 >= v83 )
          goto LABEL_118;
      }
      v94 = 0;
      v82 = v156 + 1;
      v95 = *(_DWORD *)(v84 + 24);
      ++v156;
      if ( !v95 )
        goto LABEL_139;
LABEL_137:
      if ( v82 > 0x13 )
        goto LABEL_138;
      for ( j = *(_QWORD *)(v84 + 8LL * v94 + 32); *(_WORD *)(j + 4); j = *(_QWORD *)(v84 + 8LL * v94 + 32) )
      {
        if ( ++v94 >= v95 )
          goto LABEL_139;
      }
      v140 = v94;
      v133 = j;
      v128 = *(_QWORD *)(j + 16);
      v97 = sub_15F0200(a1 + 1);
      v98 = v133;
      v94 = v140;
      v99 = *(_DWORD **)(v128 + 24);
      if ( !v99 || v97 != *v99 || v99[1] )
      {
        v100 = sub_15D26C0(*a1, v133);
        v82 = v156;
        v95 = *(_DWORD *)(v84 + 24);
        v94 = v140;
        if ( v100 )
          v82 = ++v156;
        goto LABEL_138;
      }
      v101 = 0;
      v82 = v156 + 1;
      v102 = *(_DWORD *)(v133 + 24);
      ++v156;
      if ( !v102 )
        goto LABEL_151;
      while ( 1 )
      {
        if ( v82 <= 0x13 )
        {
          v103 = *(_QWORD *)(v98 + 8LL * v101 + 32);
          if ( *(_WORD *)(v103 + 4) )
          {
            while ( ++v101 < v102 )
            {
              v103 = *(_QWORD *)(v98 + 8LL * v101 + 32);
              if ( !*(_WORD *)(v103 + 4) )
                goto LABEL_155;
            }
LABEL_151:
            v95 = *(_DWORD *)(v84 + 24);
LABEL_138:
            if ( ++v94 >= v95 )
            {
LABEL_139:
              v83 = *(_DWORD *)(v18 + 24);
              goto LABEL_117;
            }
            goto LABEL_137;
          }
LABEL_155:
          v148 = v98;
          v144 = v94;
          v141 = v101;
          v134 = v103;
          v129 = *(_QWORD *)(v103 + 16);
          v104 = sub_15F0200(a1 + 1);
          v105 = v134;
          v101 = v141;
          v94 = v144;
          v106 = *(_DWORD **)(v129 + 24);
          v98 = v148;
          if ( v106 && v104 == *v106 && !v106[1] )
          {
            v130 = 0;
            v82 = v156 + 1;
            v110 = *(_DWORD *)(v134 + 24);
            ++v156;
            if ( !v110 )
              goto LABEL_164;
            while ( 1 )
            {
              v111 = v130;
              if ( v82 > 0x13 )
                break;
              while ( 1 )
              {
                v112 = *(_QWORD *)(v105 + 8LL * v111 + 32);
                if ( !*(_WORD *)(v112 + 4) )
                  break;
                if ( ++v111 >= v110 )
                  goto LABEL_164;
              }
              v154 = v98;
              v151 = v94;
              v149 = v105;
              v145 = v101;
              v131 = v111;
              v142 = *(_QWORD *)(v112 + 16);
              v113 = sub_15F0200(a1 + 1);
              v101 = v145;
              v105 = v149;
              v94 = v151;
              v114 = *(_DWORD **)(v142 + 24);
              v98 = v154;
              if ( v114 && v113 == *v114 && !v114[1] )
              {
                v82 = v156 + 1;
                v116 = 0;
                v117 = *(_DWORD *)(v112 + 24);
                ++v156;
                if ( v117 )
                {
                  do
                  {
                    v143 = v116;
                    v155 = v101;
                    v153 = v105;
                    v150 = v94;
                    v147 = v98;
                    sub_3BE4D0(a1, *(_QWORD *)(v112 + 8LL * v116 + 32), (unsigned int *)&v156, 0x14u);
                    v98 = v147;
                    v94 = v150;
                    v116 = v143 + 1;
                    v105 = v153;
                    v101 = v155;
                  }
                  while ( v143 + 1 < *(_DWORD *)(v112 + 24) );
                  v110 = *(_DWORD *)(v153 + 24);
                  v82 = v156;
                }
                else
                {
                  v110 = *(_DWORD *)(v149 + 24);
                }
              }
              else
              {
                v152 = v145;
                v146 = v94;
                v115 = sub_15D26C0(*a1, v112);
                v105 = v149;
                v82 = v156;
                v108 = v115 == 0;
                v98 = v154;
                v94 = v146;
                v110 = *(_DWORD *)(v149 + 24);
                v101 = v152;
                if ( !v108 )
                  v82 = ++v156;
              }
              v130 = v131 + 1;
              if ( v130 >= v110 )
                goto LABEL_164;
            }
            if ( v130 + 1 >= v110 )
            {
              v102 = *(_DWORD *)(v98 + 24);
              if ( ++v101 >= v102 )
                goto LABEL_151;
            }
            else
            {
LABEL_164:
              v102 = *(_DWORD *)(v98 + 24);
            }
          }
          else
          {
            v107 = sub_15D26C0(*a1, v134);
            v98 = v148;
            v82 = v156;
            v108 = v107 == 0;
            v94 = v144;
            v101 = v141;
            v102 = *(_DWORD *)(v148 + 24);
            if ( !v108 )
              v82 = ++v156;
          }
        }
        if ( ++v101 >= v102 )
          goto LABEL_151;
      }
    }
LABEL_65:
    v51 = (__int64 *)a1[4];
    v52 = *(_QWORD *)(v122 + 16);
    v53 = *((unsigned int *)a1 + 10);
    a2 = *(unsigned int *)(v52 + 12);
    v54 = v53 - 1;
    v53 *= 16;
    v55 = (__int64 *)((char *)v51 + v53);
    v56 = 16LL * ((unsigned int)a2 & v54);
    v57 = &v51[(unsigned __int64)v56 / 8];
    if ( v56 != v53 )
    {
      for ( k = &v51[(unsigned __int64)v56 / 8]; v55 != k; k += 2 )
      {
        v59 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v59 + 12) == (_DWORD)a2 && v52 == v59 )
          {
LABEL_108:
            v76 = k[1];
            if ( v76 )
            {
              v61 = *(unsigned int *)(v76 - 4);
              v77 = *(unsigned int *)(v76 - 8);
              v57 = (__int64 *)(8 * v77 + 8);
              v126 = v77;
              v78 = sub_186B270((size_t)v57);
              a2 = k[1];
              v79 = v78;
              v62 = (_QWORD *)(v78 + 8);
              *(_QWORD *)&a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v126), _mm_cvtsi32_si128(v61)).m128i_u64[0];
              *(double *)v78 = a3;
              if ( a2 )
              {
                v80 = 8LL * *(unsigned int *)(a2 - 4);
                if ( v80 <= 8 )
                {
                  if ( v80 == 8 )
                  {
                    a3 = *(double *)a2;
                    *(_QWORD *)(v78 + 8) = *(_QWORD *)a2;
                  }
                }
                else
                {
                  v57 = (__int64 *)(v78 + 8);
                  memmove((void *)(v78 + 8), (const void *)a2, v80);
                }
              }
              v17 = *(_DWORD *)(v122 + 24);
              if ( (unsigned int)v61 >= v17 )
              {
                *(_DWORD *)(v79 + 4) = v17;
                goto LABEL_80;
              }
LABEL_77:
              while ( 1 )
              {
                v65 = *((_DWORD *)v62 - 2);
                if ( v65 >= v17 )
                  break;
                v63 = (3 * v65 + 1) >> 1;
                a2 = 8 * v63 + 8;
                if ( 8 * v65 + 8 >= (unsigned int)a2 || v65 >= v63 )
                {
                  v120 = (char **)__cxa_allocate_exception(0x28u);
                  sub_3BCB70(v159, "Overflow encountered when expanding vector");
                  *v120 = (char *)off_1C63128;
                  sub_2333C0(v120 + 1, v159);
                  sub_233E40((__int64)v159);
                  __cxa_throw(v120, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v64 = (unsigned int *)sub_186B300(v62 - 1, a2);
                *v64 = v63;
                v62 = v64 + 2;
              }
              v66 = 8 * v61;
              *((_DWORD *)v62 - 1) = v17;
              v67 = 8LL * v17;
              v57 = &v62[(unsigned __int64)v66 / 8];
              if ( v66 != v67 )
              {
                a2 = 0;
                memset(v57, 0, v67 - v66);
              }
LABEL_80:
              v68 = 0;
              v69 = 0;
              v125 = 0.0;
              v70 = *(_DWORD *)(v122 + 24);
              if ( v70 )
              {
                do
                {
                  while ( 1 )
                  {
                    v57 = (__int64 *)v122;
                    v71 = *(_QWORD *)(v122 + 8LL * v69 + 32);
                    if ( *(_WORD *)(v71 + 4) != 1 )
                      break;
                    ++v69;
                    ++v68;
                    v125 = v125 + *(double *)(a1[8] + 8LL * *(unsigned int *)(v71 + 16));
                    if ( v69 >= v70 )
                      goto LABEL_86;
                  }
                  v72 = (double *)&v62[v68];
                  if ( (unsigned int)sub_180B130(v122) > 1 )
                  {
                    if ( (unsigned __int8)sub_186A530(a3) )
                    {
                      sub_186A4C0(a3);
                      sub_180B150(v122, a2);
                      v72 = (double *)&v62[v68];
                      std::ostream::_M_insert<double>();
                      std::__ostream_insert<char,std::char_traits<char>>();
                      v57 = (__int64 *)std::ostream::_M_insert<double>();
                      a2 = (size_t)"\n";
                      std::__ostream_insert<char,std::char_traits<char>>();
                      sub_186A500(v57, "\n");
                    }
                    else
                    {
                      sub_180B150(v122, a2);
                      v72 = (double *)&v62[v68];
                      std::ostream::_M_insert<double>();
                      std::__ostream_insert<char,std::char_traits<char>>();
                      v57 = (__int64 *)std::ostream::_M_insert<double>();
                      a2 = (size_t)"\n";
                      std::__ostream_insert<char,std::char_traits<char>>();
                    }
                  }
                  ++v69;
                  v73 = *(double *)(a1[7] + v68 * 8);
                  ++v68;
                  a3 = v73 * *v72 + v125;
                  v70 = *(_DWORD *)(v122 + 24);
                  v125 = a3;
                }
                while ( v69 < v70 );
              }
LABEL_86:
              if ( (unsigned int)sub_180B130(v57) <= 1 )
              {
                v74 = v138;
                if ( v125 > v139 )
                  v74 = v135;
                v138 = v74;
                v139 = fmax(v125, v139);
                goto LABEL_90;
              }
LABEL_127:
              if ( (unsigned __int8)sub_186A530(a3) )
              {
                sub_186A4C0(a3);
                v88 = sub_180B150(v57, a2);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v157, v122, *a1, 0, 0, 0);
                sub_160E8B0(v88, v157);
                std::__ostream_insert<char,std::char_traits<char>>();
                a3 = v125;
                v89 = std::ostream::_M_insert<double>();
                a2 = (size_t)"\n";
                sub_3BCC00(v89, "\n");
                sub_18572D0(v158);
                sub_186A500(v158, "\n");
              }
              else
              {
                v92 = sub_180B150(v57, a2);
                std::__ostream_insert<char,std::char_traits<char>>();
                sub_1606360(v159, v122, *a1, 0, 0, 0);
                sub_160E8B0(v92, v159);
                std::__ostream_insert<char,std::char_traits<char>>();
                a3 = v125;
                v93 = std::ostream::_M_insert<double>();
                a2 = (size_t)"\n";
                sub_3BCC00(v93, "\n");
                sub_18572D0(v160);
              }
              v90 = v138;
              v91 = fmax(v125, v139);
              if ( v125 > v139 )
                v90 = v135;
              v138 = v90;
              v139 = v91;
              if ( !v62 )
                goto LABEL_91;
LABEL_90:
              sub_186B220(v62 - 1);
              goto LABEL_91;
            }
LABEL_72:
            if ( !v17 )
              goto LABEL_104;
LABEL_73:
            v60 = (_QWORD *)sub_186B270(0x18u);
            v61 = 0;
            *v60 = 2;
            v62 = v60 + 1;
            goto LABEL_77;
          }
        }
        else if ( !v59 )
        {
          goto LABEL_72;
        }
      }
    }
    if ( v51 == v57 )
      goto LABEL_72;
    while ( 1 )
    {
      v75 = *v51;
      if ( (unsigned __int64)*v51 <= 1 )
        break;
      if ( *(_DWORD *)(v75 + 12) == (_DWORD)a2 && v52 == v75 )
      {
        k = v51;
        goto LABEL_108;
      }
LABEL_100:
      v51 += 2;
      if ( v57 == v51 )
        goto LABEL_72;
    }
    if ( v75 )
      goto LABEL_100;
    if ( v17 )
      goto LABEL_73;
LABEL_104:
    if ( (unsigned int)sub_180B130(v57) > 1 )
    {
      v125 = 0.0;
      v62 = nullptr;
      goto LABEL_127;
    }
    a3 = 0.0;
    if ( v139 < 0.0 )
    {
      v139 = 0.0;
      v138 = v135;
    }
LABEL_91:
    ++v135;
    v5 = *(_QWORD *)(v137 + 24);
  }
  while ( v5 );
LABEL_48:
  if ( (unsigned int)sub_180B130(v5) )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      sub_180B150(v5, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v46 = std::ostream::_M_insert<unsigned long>();
      sub_3BCC00(v46, "\n");
      sub_186A500(v46, "\n");
    }
    else
    {
      sub_180B150(v5, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v109 = std::ostream::_M_insert<unsigned long>();
      sub_3BCC00(v109, "\n");
    }
  }
  return v138;
}

