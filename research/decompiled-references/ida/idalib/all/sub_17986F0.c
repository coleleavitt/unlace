void __fastcall sub_17986F0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  _QWORD *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // r15
  _QWORD *v49; // r15
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r14
  unsigned __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r14
  unsigned __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r14
  _QWORD *v71; // r12
  unsigned __int64 v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // r14
  __int64 *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  __int64 *v84; // rax
  unsigned __int64 v85; // rbx
  int v86; // esi
  int v87; // eax
  __int64 *v88; // rax
  __int64 *v89; // rax
  __int64 *v90; // rax
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 *v95; // rax
  __int64 v96; // rcx
  __int64 *v97; // rax
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  unsigned __int64 v101; // rcx
  __int64 *v102; // rax
  unsigned __int64 *v103; // rax
  __int64 *v104; // rdx
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rax
  unsigned __int64 *v107; // rax
  __int64 *v108; // rdx
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // rax
  __int64 *v111; // rax
  __int64 v112; // rdx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // rcx
  __int64 *v116; // rax
  __int64 *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rcx
  __int64 *v122; // rax
  __int64 *v123; // rax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  __int64 v127; // rcx
  __int64 *v128; // rax
  __int64 **v129; // rax
  __int64 *i; // rax
  __int64 v131; // rcx
  unsigned __int64 *v132; // rax
  __int64 *v133; // rax
  unsigned __int64 *v134; // rax
  unsigned __int64 v135; // rcx
  unsigned __int64 v136; // rax
  unsigned __int64 *v137; // rax
  unsigned __int64 v138; // rcx
  unsigned __int64 v139; // rax
  unsigned __int64 *v140; // rax
  unsigned __int64 *v141; // rcx
  unsigned __int64 v142; // rax
  unsigned __int64 *v143; // rax
  unsigned __int64 *v144; // rcx
  unsigned __int64 v145; // rax
  __int64 *v146; // rax
  __int64 v147; // rcx
  __int64 *v148; // rax
  __int64 v149; // rcx
  __int64 *v150; // rax
  __int64 v151; // r8
  __int64 v152; // r9
  __int64 v153; // rdx
  unsigned __int64 v154; // rcx
  __int64 *v155; // rax
  __int64 *v156; // rax
  __int64 v157; // r8
  __int64 v158; // r9
  __int64 v159; // rdx
  unsigned __int64 v160; // rcx
  __int64 *v161; // rax
  unsigned __int64 *v162; // rax
  __int64 *v163; // rdx
  unsigned __int64 v164; // rcx
  unsigned __int64 v165; // rax
  __int64 *j; // rax
  __int64 v167; // rcx
  __int64 *k; // rax
  __int64 v169; // rcx
  __int64 *m; // rax
  __int64 v171; // rcx
  unsigned __int8 *v172; // r13
  __int64 v173; // r15
  unsigned __int8 *v174; // rdx
  __int64 v175; // rax
  unsigned __int64 *v176; // rax
  unsigned __int64 *v177; // rax
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // r13
  __int64 v184; // r14
  unsigned int v185; // esi
  unsigned int v186; // r15d
  unsigned int v187; // ecx
  __int64 *v188; // rdx
  __int64 v189; // r10
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r14
  unsigned __int8 *v193; // r13
  _BYTE *v194; // rdx
  __int64 v195; // rax
  __int64 v196; // rdx
  int v197; // eax
  __int64 v198; // rdx
  int v199; // eax
  __int64 v200; // rax
  __int64 v201; // r14
  __int64 v202; // rdx
  __int64 v203; // r14
  void *v204; // rdi
  __int64 v205; // rax
  __int64 v206; // r15
  __int64 v207; // rdx
  __int64 v208; // r15
  void *v209; // rdi
  int v210; // r11d
  __int64 *v211; // rax
  __int64 v212; // rcx
  bool v213; // zf
  int v214; // edx
  int v215; // edx
  int v216; // esi
  __int64 *v217; // rcx
  unsigned int ii; // r15d
  __int64 v219; // rdi
  int v220; // esi
  int v221; // esi
  int v222; // edi
  unsigned int n; // edx
  __int64 v224; // r8
  unsigned int v225; // edx
  unsigned int v226; // r15d
  _QWORD *v227; // [rsp+8h] [rbp-E0h]
  __int64 v228; // [rsp+8h] [rbp-E0h]
  __int64 v229; // [rsp+8h] [rbp-E0h]
  __int64 v230; // [rsp+8h] [rbp-E0h]
  __int64 v231; // [rsp+10h] [rbp-D8h]
  unsigned __int64 v232; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD *v233; // [rsp+20h] [rbp-C8h] BYREF
  __int64 *v234; // [rsp+28h] [rbp-C0h] BYREF
  __int64 v235; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v236; // [rsp+40h] [rbp-A8h]
  __int64 v237; // [rsp+48h] [rbp-A0h]
  char v238; // [rsp+98h] [rbp-50h]
  unsigned int v239; // [rsp+A0h] [rbp-48h]
  char v240; // [rsp+A4h] [rbp-44h]

  v7 = *(_DWORD *)(a1 + 72);
  v232 = a2;
  if ( v7 )
  {
    v8 = a2;
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v88 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
      v15 = *v88;
      v16 = (__int64 *)(*v88 + 8LL * *((unsigned int *)v88 + 2));
      if ( *v88 >= (unsigned __int64)v16 )
      {
        v19 = v232;
        v8 = v232;
        if ( (__int64 *)v15 != v16 )
        {
          if ( *(_WORD *)(*v16 + 36) == 165 )
            goto LABEL_4;
          v129 = (__int64 **)(v16 + 1);
          while ( (__int64 **)v15 != v129 )
          {
            v16 = *v129++;
            if ( *((_WORD *)v16 + 18) == 165 )
              goto LABEL_4;
          }
        }
      }
      else
      {
        v89 = (__int64 *)*v88;
        while ( 1 )
        {
          v15 = *v89;
          if ( *(_WORD *)(*v89 + 36) == 165 )
            break;
          if ( v16 == ++v89 )
          {
            v8 = v232;
            goto LABEL_3;
          }
        }
        v19 = v232;
        v8 = v232;
        if ( v16 != v89 )
          goto LABEL_4;
      }
    }
LABEL_3:
    v9 = sub_168B6C0(a1);
    v10 = sub_B32290(v9, 0, 0);
    sub_B8CC60(v8, v10, v11, v12, v13, v14);
    v8 = v232;
    v19 = v232;
LABEL_4:
    if ( (*(_BYTE *)(v19 + 29) & 1) == 0 )
    {
LABEL_5:
      v20 = sub_168B6C0(a1);
      v21 = sub_B32320(v20, 0, 0);
      sub_B8CC60(v8, v21, v22, v23, v24, v25);
      return;
    }
    v107 = sub_B8C3D0(v8, v19, v15, (__int64)v16, v17, v18);
    v108 = (__int64 *)*v107;
    v109 = *v107 + 8LL * *((unsigned int *)v107 + 2);
    if ( *v107 >= v109 )
    {
      if ( v108 != (__int64 *)v109 )
      {
        if ( *(_WORD *)(*(_QWORD *)v109 + 36LL) == 160 )
          return;
        for ( i = (__int64 *)(v109 + 8); v108 != i; ++i )
        {
          v131 = *i;
          if ( *(_WORD *)(v131 + 36) == 160 )
            return;
        }
      }
    }
    else
    {
      v110 = *v107;
      while ( *(_WORD *)(*(_QWORD *)v110 + 36LL) != 160 )
      {
        v110 += 8LL;
        if ( v109 == v110 )
          goto LABEL_11;
      }
      if ( v109 != v110 )
        return;
    }
LABEL_11:
    v8 = v232;
    goto LABEL_5;
  }
  if ( *(char *)(sub_168B6E0(a1) + 89) >= 0 )
    goto LABEL_13;
  v31 = v232;
  if ( (*(_BYTE *)(v232 + 29) & 1) == 0 )
  {
LABEL_9:
    if ( sub_B77A30(v31) || (unsigned __int8)sub_B77A80(v232) )
    {
LABEL_10:
      v32 = v232;
      v33 = sub_168B6C0(a1);
      v34 = sub_B32290(v33, 0, 0);
      sub_B8CC60(v32, v34, v35, v36, v37, v38);
      goto LABEL_11;
    }
    goto LABEL_13;
  }
  v90 = sub_B8C3D0(v232, a2, v27, v28, v29, v30);
  v93 = *v90;
  v94 = *v90 + 8LL * *((unsigned int *)v90 + 2);
  if ( *v90 < v94 )
  {
    v133 = (__int64 *)*v90;
    while ( 1 )
    {
      v93 = *v133;
      if ( *(_WORD *)(*v133 + 36) == 165 )
        break;
      if ( (__int64 *)v94 == ++v133 )
        goto LABEL_61;
    }
    if ( (__int64 *)v94 != v133 )
      goto LABEL_13;
  }
  else if ( v93 != v94 )
  {
    if ( *(_WORD *)(*(_QWORD *)v94 + 36LL) == 165 )
      goto LABEL_13;
    v95 = (__int64 *)(v94 + 8);
    while ( 1 )
    {
      v94 = (unsigned __int64)v95;
      if ( (__int64 *)v93 == v95 )
        break;
      v96 = *v95++;
      if ( *(_WORD *)(v96 + 36) == 165 )
        goto LABEL_13;
    }
  }
LABEL_61:
  v31 = v232;
  if ( (*(_BYTE *)(v232 + 29) & 1) == 0 )
    goto LABEL_9;
  v97 = sub_B8C3D0(v232, a2, v93, v94, v91, v92);
  v100 = *v97;
  v101 = *v97 + 8LL * *((unsigned int *)v97 + 2);
  if ( *v97 >= v101 )
  {
    if ( v100 != v101 )
    {
      if ( *(_WORD *)(*(_QWORD *)v101 + 36LL) == 160 )
        goto LABEL_13;
      v146 = (__int64 *)(v101 + 8);
      while ( 1 )
      {
        v101 = (unsigned __int64)v146;
        if ( (__int64 *)v100 == v146 )
          break;
        v147 = *v146++;
        if ( *(_WORD *)(v147 + 36) == 160 )
          goto LABEL_13;
      }
    }
  }
  else
  {
    v102 = (__int64 *)*v97;
    while ( 1 )
    {
      v100 = *v102;
      if ( *(_WORD *)(*v102 + 36) == 160 )
        break;
      if ( (__int64 *)v101 == ++v102 )
        goto LABEL_66;
    }
    if ( (__int64 *)v101 != v102 )
      goto LABEL_13;
  }
LABEL_66:
  v31 = v232;
  if ( (*(_BYTE *)(v232 + 29) & 1) == 0 )
    goto LABEL_9;
  v103 = sub_B8C3D0(v232, a2, v100, v101, v98, v99);
  v104 = (__int64 *)*v103;
  v105 = *v103 + 8LL * *((unsigned int *)v103 + 2);
  if ( *v103 >= v105 )
  {
    if ( v104 == (__int64 *)v105 )
    {
LABEL_71:
      v31 = v232;
      goto LABEL_9;
    }
    if ( *(_WORD *)(*(_QWORD *)v105 + 36LL) != 163 )
    {
      v148 = (__int64 *)(v105 + 8);
      while ( v104 != v148 )
      {
        v149 = *v148++;
        if ( *(_WORD *)(v149 + 36) == 163 )
          goto LABEL_13;
      }
      goto LABEL_71;
    }
  }
  else
  {
    v106 = *v103;
    while ( *(_WORD *)(*(_QWORD *)v106 + 36LL) != 163 )
    {
      v106 += 8LL;
      if ( v105 == v106 )
        goto LABEL_71;
    }
    if ( v105 == v106 )
      goto LABEL_71;
  }
LABEL_13:
  if ( (*(_BYTE *)(sub_168B6E0(a1) + 89) & 0x10) == 0
    || (*(_BYTE *)(v232 + 84) & 3) == 0
    || sub_B748A0(v232, a2, v39, v40) )
  {
    return;
  }
  if ( (*(_BYTE *)(v232 + 29) & 1) != 0 )
  {
    v150 = sub_B8C3D0(v232, a2, v41, v42, v43, v44);
    v153 = *v150;
    v154 = *v150 + 8LL * *((unsigned int *)v150 + 2);
    if ( *v150 >= v154 )
    {
      if ( v153 != v154 )
      {
        if ( *(_WORD *)(*(_QWORD *)v154 + 36LL) == 165 )
          return;
        for ( j = (__int64 *)(v154 + 8); ; ++j )
        {
          v154 = (unsigned __int64)j;
          if ( (__int64 *)v153 == j )
            break;
          v167 = *j;
          if ( *(_WORD *)(v167 + 36) == 165 )
            return;
        }
      }
    }
    else
    {
      v155 = (__int64 *)*v150;
      while ( 1 )
      {
        v153 = *v155;
        if ( *(_WORD *)(*v155 + 36) == 165 )
          break;
        if ( (__int64 *)v154 == ++v155 )
          goto LABEL_179;
      }
      if ( (__int64 *)v154 != v155 )
        return;
    }
LABEL_179:
    if ( (*(_BYTE *)(v232 + 29) & 1) != 0 )
    {
      v156 = sub_B8C3D0(v232, a2, v153, v154, v151, v152);
      v159 = *v156;
      v160 = *v156 + 8LL * *((unsigned int *)v156 + 2);
      if ( *v156 >= v160 )
      {
        if ( v159 != v160 )
        {
          if ( *(_WORD *)(*(_QWORD *)v160 + 36LL) == 160 )
            return;
          for ( k = (__int64 *)(v160 + 8); ; ++k )
          {
            v160 = (unsigned __int64)k;
            if ( (__int64 *)v159 == k )
              break;
            v169 = *k;
            if ( *(_WORD *)(v169 + 36) == 160 )
              return;
          }
        }
      }
      else
      {
        v161 = (__int64 *)*v156;
        while ( 1 )
        {
          v159 = *v161;
          if ( *(_WORD *)(*v161 + 36) == 160 )
            break;
          if ( (__int64 *)v160 == ++v161 )
            goto LABEL_184;
        }
        if ( (__int64 *)v160 != v161 )
          return;
      }
LABEL_184:
      if ( (*(_BYTE *)(v232 + 29) & 1) != 0 )
      {
        v162 = sub_B8C3D0(v232, a2, v159, v160, v157, v158);
        v163 = (__int64 *)*v162;
        v164 = *v162 + 8LL * *((unsigned int *)v162 + 2);
        if ( *v162 >= v164 )
        {
          if ( v163 != (__int64 *)v164 )
          {
            if ( *(_WORD *)(*(_QWORD *)v164 + 36LL) == 163 )
              return;
            for ( m = (__int64 *)(v164 + 8); v163 != m; ++m )
            {
              v171 = *m;
              if ( *(_WORD *)(v171 + 36) == 163 )
                return;
            }
          }
        }
        else
        {
          v165 = *v162;
          while ( *(_WORD *)(*(_QWORD *)v165 + 36LL) != 163 )
          {
            v165 += 8LL;
            if ( v164 == v165 )
              goto LABEL_17;
          }
          if ( v164 != v165 )
            return;
        }
      }
    }
  }
LABEL_17:
  v45 = *(unsigned int *)(a3 + 16);
  v46 = *(_QWORD **)(a3 + 8);
  v233 = (_QWORD *)a1;
  v45 *= 8;
  v227 = (_QWORD *)((char *)v46 + v45);
  v234 = (__int64 *)&v232;
  v47 = v45 >> 3;
  v48 = v45 >> 5;
  if ( !v48 )
    goto LABEL_202;
  v49 = &v46[4 * v48];
  do
  {
    v71 = v46;
    v72 = *v46 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v72 + 28) & 0x7Fu) - 53 <= 1 )
      v72 = *(_QWORD *)(v72 + 64);
    v73 = sub_B8BF30(v72);
    v78 = v73;
    if ( !v73 || (*(_BYTE *)(v73 + 29) & 1) == 0 )
      goto LABEL_19;
    v79 = sub_B8C3D0(v73, a2, v74, v75, v76, v77);
    v83 = *v79;
    a2 = *v79 + 8LL * *((unsigned int *)v79 + 2);
    if ( *v79 >= a2 )
    {
      if ( v83 == a2 )
        goto LABEL_19;
      while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 160 )
      {
        a2 += 8LL;
        if ( v83 == a2 )
          goto LABEL_19;
      }
    }
    else
    {
      v84 = (__int64 *)*v79;
      while ( 1 )
      {
        v83 = *v84;
        if ( *(_WORD *)(*v84 + 36) == 160 )
          break;
        if ( (__int64 *)a2 == ++v84 )
          goto LABEL_19;
      }
      if ( (__int64 *)a2 == v84 )
        goto LABEL_19;
    }
    if ( (*(_BYTE *)(v78 + 29) & 1) != 0 )
    {
      v134 = sub_B8C3D0(v78, a2, v80, v83, v81, v82);
      v135 = *v134;
      a2 = *v134 + 8LL * *((unsigned int *)v134 + 2);
      if ( *v134 >= a2 )
      {
        if ( v135 != a2 )
        {
          while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 165 )
          {
            a2 += 8LL;
            if ( v135 == a2 )
              goto LABEL_42;
          }
          goto LABEL_19;
        }
      }
      else
      {
        v136 = *v134;
        while ( *(_WORD *)(*(_QWORD *)v136 + 36LL) != 165 )
        {
          v136 += 8LL;
          if ( a2 == v136 )
            goto LABEL_42;
        }
        if ( a2 != v136 )
          goto LABEL_19;
      }
    }
LABEL_42:
    a2 = *v234;
    if ( !(unsigned __int8)sub_1BDCB50(*v233, *v234, v78, 0, 0) )
      goto LABEL_43;
LABEL_19:
    v50 = v46[1] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v50 + 28) & 0x7Fu) - 53 <= 1 )
      v50 = *(_QWORD *)(v50 + 64);
    v51 = sub_B8BF30(v50);
    v56 = v51;
    if ( !v51 || (*(_BYTE *)(v51 + 29) & 1) == 0 )
      goto LABEL_23;
    v111 = sub_B8C3D0(v51, a2, v52, v53, v54, v55);
    v115 = *v111;
    a2 = *v111 + 8LL * *((unsigned int *)v111 + 2);
    if ( *v111 >= a2 )
    {
      if ( v115 == a2 )
        goto LABEL_23;
      while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 160 )
      {
        a2 += 8LL;
        if ( v115 == a2 )
          goto LABEL_23;
      }
    }
    else
    {
      v116 = (__int64 *)*v111;
      while ( 1 )
      {
        v115 = *v116;
        if ( *(_WORD *)(*v116 + 36) == 160 )
          break;
        if ( (__int64 *)a2 == ++v116 )
          goto LABEL_23;
      }
      if ( (__int64 *)a2 == v116 )
        goto LABEL_23;
    }
    if ( (*(_BYTE *)(v56 + 29) & 1) != 0 )
    {
      v137 = sub_B8C3D0(v56, a2, v112, v115, v113, v114);
      v138 = *v137;
      a2 = *v137 + 8LL * *((unsigned int *)v137 + 2);
      if ( *v137 >= a2 )
      {
        if ( v138 != a2 )
        {
          while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 165 )
          {
            a2 += 8LL;
            if ( v138 == a2 )
              goto LABEL_84;
          }
          goto LABEL_23;
        }
      }
      else
      {
        v139 = *v137;
        while ( *(_WORD *)(*(_QWORD *)v139 + 36LL) != 165 )
        {
          v139 += 8LL;
          if ( a2 == v139 )
            goto LABEL_84;
        }
        if ( a2 != v139 )
          goto LABEL_23;
      }
    }
LABEL_84:
    a2 = *v234;
    if ( !(unsigned __int8)sub_1BDCB50(*v233, *v234, v56, 0, 0) )
    {
      ++v46;
      goto LABEL_43;
    }
LABEL_23:
    v46 += 2;
    v57 = *v46 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v57 + 28) & 0x7Fu) - 53 <= 1 )
      v57 = *(_QWORD *)(v57 + 64);
    v58 = sub_B8BF30(v57);
    v63 = v58;
    if ( !v58 || (*(_BYTE *)(v58 + 29) & 1) == 0 )
      goto LABEL_27;
    v117 = sub_B8C3D0(v58, a2, v59, v60, v61, v62);
    v121 = *v117;
    a2 = *v117 + 8LL * *((unsigned int *)v117 + 2);
    if ( *v117 >= a2 )
    {
      if ( v121 == a2 )
        goto LABEL_27;
      while ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 160 )
      {
        a2 += 8LL;
        if ( v121 == a2 )
          goto LABEL_27;
      }
    }
    else
    {
      v122 = (__int64 *)*v117;
      while ( 1 )
      {
        v121 = *v122;
        if ( *(_WORD *)(*v122 + 36) == 160 )
          break;
        if ( (__int64 *)a2 == ++v122 )
          goto LABEL_27;
      }
      if ( (__int64 *)a2 == v122 )
        goto LABEL_27;
    }
    if ( (*(_BYTE *)(v63 + 29) & 1) != 0 )
    {
      v140 = sub_B8C3D0(v63, a2, v118, v121, v119, v120);
      v141 = (unsigned __int64 *)*v140;
      a2 = *v140 + 8LL * *((unsigned int *)v140 + 2);
      if ( *v140 >= a2 )
      {
        if ( v141 != (unsigned __int64 *)a2 )
        {
          if ( *(_WORD *)(*(_QWORD *)a2 + 36LL) == 165 )
            goto LABEL_27;
          v176 = (unsigned __int64 *)(a2 + 8);
          while ( v141 != v176 )
          {
            a2 = *v176++;
            if ( *(_WORD *)(a2 + 36) == 165 )
              goto LABEL_27;
          }
        }
      }
      else
      {
        v142 = *v140;
        while ( *(_WORD *)(*(_QWORD *)v142 + 36LL) != 165 )
        {
          v142 += 8LL;
          if ( a2 == v142 )
            goto LABEL_92;
        }
        if ( a2 != v142 )
          goto LABEL_27;
      }
    }
LABEL_92:
    a2 = *v234;
    if ( !(unsigned __int8)sub_1BDCB50(*v233, *v234, v63, 0, 0) )
      goto LABEL_43;
LABEL_27:
    v46 = v71 + 3;
    v64 = v71[3] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_BYTE *)(v64 + 28) & 0x7Fu) - 53 <= 1 )
      v64 = *(_QWORD *)(v64 + 64);
    v65 = sub_B8BF30(v64);
    v70 = v65;
    if ( !v65 || (*(_BYTE *)(v65 + 29) & 1) == 0 )
      goto LABEL_31;
    v123 = sub_B8C3D0(v65, a2, v66, v67, v68, v69);
    v127 = *v123;
    a2 = *v123 + 8LL * *((unsigned int *)v123 + 2);
    if ( *v123 >= a2 )
    {
      if ( v127 == a2 )
        goto LABEL_31;
      if ( *(_WORD *)(*(_QWORD *)a2 + 36LL) != 160 )
      {
        v132 = (unsigned __int64 *)(a2 + 8);
        do
        {
          a2 = (unsigned __int64)v132;
          if ( (unsigned __int64 *)v127 == v132 )
            goto LABEL_31;
          a2 = *v132++;
        }
        while ( *(_WORD *)(a2 + 36) != 160 );
      }
    }
    else
    {
      v128 = (__int64 *)*v123;
      while ( 1 )
      {
        v127 = *v128;
        if ( *(_WORD *)(*v128 + 36) == 160 )
          break;
        if ( (__int64 *)a2 == ++v128 )
          goto LABEL_31;
      }
      if ( (__int64 *)a2 == v128 )
        goto LABEL_31;
    }
    if ( (*(_BYTE *)(v70 + 29) & 1) != 0 )
    {
      v143 = sub_B8C3D0(v70, a2, v124, v127, v125, v126);
      v144 = (unsigned __int64 *)*v143;
      a2 = *v143 + 8LL * *((unsigned int *)v143 + 2);
      if ( *v143 >= a2 )
      {
        if ( v144 != (unsigned __int64 *)a2 )
        {
          if ( *(_WORD *)(*(_QWORD *)a2 + 36LL) == 165 )
            goto LABEL_31;
          v177 = (unsigned __int64 *)(a2 + 8);
          while ( v144 != v177 )
          {
            a2 = *v177++;
            if ( *(_WORD *)(a2 + 36) == 165 )
              goto LABEL_31;
          }
        }
      }
      else
      {
        v145 = *v143;
        while ( *(_WORD *)(*(_QWORD *)v145 + 36LL) != 165 )
        {
          v145 += 8LL;
          if ( a2 == v145 )
            goto LABEL_100;
        }
        if ( a2 != v145 )
          goto LABEL_31;
      }
    }
LABEL_100:
    a2 = *v234;
    if ( !(unsigned __int8)sub_1BDCB50(*v233, *v234, v70, 0, 0) )
      goto LABEL_43;
LABEL_31:
    v46 = v71 + 4;
  }
  while ( v49 != v71 + 4 );
  v47 = v227 - v46;
LABEL_202:
  if ( v47 == 2 )
    goto LABEL_253;
  if ( v47 != 3 )
  {
    if ( v47 != 1 )
      goto LABEL_205;
    goto LABEL_255;
  }
  if ( !(unsigned __int8)sub_178E0E0(&v233, &v234, *v46 & 0xFFFFFFFFFFFFFFF8LL) )
  {
    ++v46;
LABEL_253:
    if ( !(unsigned __int8)sub_178E0E0(&v233, &v234, *v46 & 0xFFFFFFFFFFFFFFF8LL) )
    {
      ++v46;
LABEL_255:
      if ( !(unsigned __int8)sub_178E0E0(&v233, &v234, *v46 & 0xFFFFFFFFFFFFFFF8LL) )
LABEL_205:
        v46 = v227;
    }
  }
LABEL_43:
  if ( v46 == (_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL * *(unsigned int *)(a3 + 16)) )
    goto LABEL_10;
  v85 = *v46 & 0xFFFFFFFFFFFFFFF8LL;
  v86 = *(_DWORD *)(v85 + 24);
  if ( v86 )
  {
    v87 = sub_1021680(*(_QWORD *)(*(_QWORD *)a1 + 272LL), v86);
    if ( v87 )
    {
      if ( v87 != 3 )
        return;
    }
  }
  sub_168B9F0((__int64)&v233, (__int64 *)a1, *(_DWORD *)(v232 + 24), 0xDF1u, 0);
  if ( v238 )
  {
    v172 = v236;
    v173 = v232;
    if ( !v236 )
    {
      v196 = v237;
      v197 = *(_DWORD *)(v237 + 14976);
      if ( v197 )
      {
        v200 = (unsigned int)(v197 - 1);
        *(_DWORD *)(v237 + 14976) = v200;
        v172 = *(unsigned __int8 **)(v196 + 8 * v200 + 14848);
        v201 = *((unsigned int *)v172 + 134);
        *v172 = 0;
        v202 = *((_QWORD *)v172 + 66);
        *((_DWORD *)v172 + 106) = 0;
        v203 = v202 + (v201 << 6);
        while ( v202 != v203 )
        {
          while ( 1 )
          {
            v203 -= 64;
            v204 = *(void **)(v203 + 24);
            if ( v204 == (void *)(v203 + 40) )
              break;
            v229 = v202;
            operator delete(v204);
            v202 = v229;
            if ( v229 == v203 )
              goto LABEL_275;
          }
        }
LABEL_275:
        *((_DWORD *)v172 + 134) = 0;
      }
      else
      {
        v172 = (unsigned __int8 *)operator new(0x3A0u);
        *v172 = 0;
        *((_QWORD *)v172 + 12) = v172 + 112;
        *((_QWORD *)v172 + 16) = v172 + 144;
        *((_QWORD *)v172 + 20) = v172 + 176;
        *((_QWORD *)v172 + 24) = v172 + 208;
        *((_QWORD *)v172 + 28) = v172 + 240;
        *((_QWORD *)v172 + 32) = v172 + 272;
        *((_QWORD *)v172 + 36) = v172 + 304;
        *((_QWORD *)v172 + 40) = v172 + 336;
        *((_QWORD *)v172 + 44) = v172 + 368;
        *((_QWORD *)v172 + 48) = v172 + 400;
        *((_QWORD *)v172 + 52) = v172 + 432;
        v172[112] = 0;
        *((_QWORD *)v172 + 13) = 0;
        *((_QWORD *)v172 + 17) = 0;
        v172[144] = 0;
        *((_QWORD *)v172 + 21) = 0;
        v172[176] = 0;
        *((_QWORD *)v172 + 25) = 0;
        v172[208] = 0;
        *((_QWORD *)v172 + 29) = 0;
        v172[240] = 0;
        *((_QWORD *)v172 + 33) = 0;
        v172[272] = 0;
        *((_QWORD *)v172 + 37) = 0;
        v172[304] = 0;
        *((_QWORD *)v172 + 41) = 0;
        v172[336] = 0;
        *((_QWORD *)v172 + 45) = 0;
        v172[368] = 0;
        *((_QWORD *)v172 + 49) = 0;
        v172[400] = 0;
        *((_QWORD *)v172 + 53) = 0x800000000LL;
        *((_QWORD *)v172 + 66) = v172 + 544;
        *((_QWORD *)v172 + 67) = 0x600000000LL;
      }
      v236 = v172;
    }
    v172[*v172 + 1] = 10;
    v174 = v236;
    v175 = *v236;
    *v236 = v175 + 1;
    *(_QWORD *)&v174[8 * v175 + 16] = v173;
    goto LABEL_49;
  }
  if ( !v240 )
    goto LABEL_49;
  v178 = sub_168B9E0(&v233);
  v183 = v235;
  v184 = v178;
  if ( v235 )
    v183 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v235 + 32LL))(v235);
  v185 = *(_DWORD *)(v184 + 16);
  if ( !v185 )
    goto LABEL_292;
  v181 = v185 - 1;
  v186 = ((unsigned int)v183 >> 9) ^ ((unsigned int)v183 >> 4);
  v187 = v181 & v186;
  v188 = (__int64 *)(*(_QWORD *)v184 + 32LL * ((unsigned int)v181 & v186));
  v189 = *v188;
  if ( v183 == *v188 )
  {
LABEL_246:
    v190 = v188[1];
    goto LABEL_247;
  }
  v210 = 1;
  v211 = nullptr;
  if ( v189 == -4096 )
    goto LABEL_282;
  while ( 1 )
  {
    if ( v189 == -8192 && !v211 )
      v211 = v188;
    v182 = (unsigned int)(v210 + 1);
    v187 = v181 & (v210 + v187);
    v188 = (__int64 *)(*(_QWORD *)v184 + 32LL * v187);
    v189 = *v188;
    if ( v183 == *v188 )
      goto LABEL_246;
    if ( v189 == -4096 )
      break;
    ++v210;
  }
  if ( !v211 )
LABEL_282:
    v211 = v188;
  v180 = 3 * v185;
  v179 = (unsigned int)(*(_DWORD *)(v184 + 8) + 1);
  if ( 4 * (int)v179 >= (unsigned int)v180 )
  {
LABEL_292:
    sub_1587800(v184, 2 * v185, v179, v180, v181, v182);
    v220 = *(_DWORD *)(v184 + 16);
    if ( v220 )
    {
      v221 = v220 - 1;
      v222 = 1;
      v217 = nullptr;
      for ( n = v221 & (((unsigned int)v183 >> 9) ^ ((unsigned int)v183 >> 4)); ; n = v221 & v225 )
      {
        v211 = (__int64 *)(*(_QWORD *)v184 + 32LL * n);
        v224 = *v211;
        if ( v183 == *v211 )
          break;
        if ( v224 == -4096 )
        {
LABEL_296:
          LODWORD(v179) = *(_DWORD *)(v184 + 8) + 1;
          if ( v217 )
            v211 = v217;
          goto LABEL_285;
        }
        if ( v224 != -8192 || v217 )
          v211 = v217;
        v225 = v222 + n;
        v217 = v211;
        ++v222;
      }
      goto LABEL_291;
    }
LABEL_316:
    ++*(_DWORD *)(v184 + 8);
    BUG();
  }
  v212 = v185 - *(_DWORD *)(v184 + 12) - (unsigned int)v179;
  if ( (unsigned int)v212 <= v185 >> 3 )
  {
    sub_1587800(v184, v185, v179, v212, v181, v182);
    v214 = *(_DWORD *)(v184 + 16);
    if ( v214 )
    {
      v215 = v214 - 1;
      v216 = 1;
      v217 = nullptr;
      for ( ii = v215 & v186; ; ii = v215 & v226 )
      {
        v211 = (__int64 *)(*(_QWORD *)v184 + 32LL * ii);
        v219 = *v211;
        if ( v183 == *v211 )
          break;
        if ( v219 == -4096 )
          goto LABEL_296;
        if ( v219 != -8192 || v217 )
          v211 = v217;
        v226 = v216 + ii;
        v217 = v211;
        ++v216;
      }
LABEL_291:
      LODWORD(v179) = *(_DWORD *)(v184 + 8) + 1;
      goto LABEL_285;
    }
    goto LABEL_316;
  }
LABEL_285:
  v213 = *v211 == -4096;
  *(_DWORD *)(v184 + 8) = v179;
  if ( !v213 )
    --*(_DWORD *)(v184 + 12);
  *v211 = v183;
  v190 = 0;
  v211[1] = 0;
  v211[2] = 0;
  v211[3] = 0;
LABEL_247:
  v191 = v232;
  v192 = v190 + 32LL * v239;
  v193 = *(unsigned __int8 **)(v192 + 8);
  if ( !v193 )
  {
    v198 = *(_QWORD *)(v192 + 16);
    v199 = *(_DWORD *)(v198 + 14976);
    if ( v199 )
    {
      v205 = (unsigned int)(v199 - 1);
      *(_DWORD *)(v198 + 14976) = v205;
      v193 = *(unsigned __int8 **)(v198 + 8 * v205 + 14848);
      v206 = *((unsigned int *)v193 + 134);
      *v193 = 0;
      v207 = *((_QWORD *)v193 + 66);
      *((_DWORD *)v193 + 106) = 0;
      v208 = v207 + (v206 << 6);
      while ( v207 != v208 )
      {
        while ( 1 )
        {
          v208 -= 64;
          v209 = *(void **)(v208 + 24);
          if ( v209 == (void *)(v208 + 40) )
            break;
          v231 = v207;
          v230 = v191;
          operator delete(v209);
          v207 = v231;
          v191 = v230;
          if ( v231 == v208 )
            goto LABEL_280;
        }
      }
LABEL_280:
      *((_DWORD *)v193 + 134) = 0;
    }
    else
    {
      v228 = v232;
      v193 = (unsigned __int8 *)operator new(0x3A0u);
      *v193 = 0;
      *((_QWORD *)v193 + 12) = v193 + 112;
      *((_QWORD *)v193 + 16) = v193 + 144;
      *((_QWORD *)v193 + 20) = v193 + 176;
      *((_QWORD *)v193 + 24) = v193 + 208;
      *((_QWORD *)v193 + 28) = v193 + 240;
      *((_QWORD *)v193 + 32) = v193 + 272;
      *((_QWORD *)v193 + 36) = v193 + 304;
      *((_QWORD *)v193 + 40) = v193 + 336;
      *((_QWORD *)v193 + 44) = v193 + 368;
      *((_QWORD *)v193 + 48) = v193 + 400;
      *((_QWORD *)v193 + 52) = v193 + 432;
      v193[112] = 0;
      *((_QWORD *)v193 + 13) = 0;
      *((_QWORD *)v193 + 17) = 0;
      v193[144] = 0;
      *((_QWORD *)v193 + 21) = 0;
      v193[176] = 0;
      *((_QWORD *)v193 + 25) = 0;
      v193[208] = 0;
      *((_QWORD *)v193 + 29) = 0;
      v193[240] = 0;
      *((_QWORD *)v193 + 33) = 0;
      v193[272] = 0;
      *((_QWORD *)v193 + 37) = 0;
      v193[304] = 0;
      *((_QWORD *)v193 + 41) = 0;
      v193[336] = 0;
      *((_QWORD *)v193 + 45) = 0;
      v193[368] = 0;
      *((_QWORD *)v193 + 49) = 0;
      v193[400] = 0;
      *((_QWORD *)v193 + 53) = 0x800000000LL;
      v191 = v228;
      *((_QWORD *)v193 + 66) = v193 + 544;
      *((_QWORD *)v193 + 67) = 0x600000000LL;
    }
    *(_QWORD *)(v192 + 8) = v193;
  }
  v193[*v193 + 1] = 10;
  v194 = *(_BYTE **)(v192 + 8);
  v195 = (unsigned __int8)*v194;
  *v194 = v195 + 1;
  *(_QWORD *)&v194[8 * v195 + 16] = v191;
LABEL_49:
  sub_15F7200(&v233);
  sub_168B9F0((__int64)&v233, (__int64 *)a1, *(_DWORD *)(v85 + 24), 0x16E5u, 0);
  sub_15F7200(&v233);
}
