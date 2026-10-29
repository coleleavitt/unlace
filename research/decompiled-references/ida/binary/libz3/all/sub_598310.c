void *__fastcall sub_598310(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  char **v6; // r15
  char **v7; // r13
  char **v8; // r15
  char **v9; // r15
  char **v10; // r15
  char **v11; // r15
  char **v12; // r13
  char **v13; // r13
  char **v14; // r13
  char **exception; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r12
  unsigned int *v20; // r13
  unsigned int *v21; // rdx
  __int64 v22; // rbx
  unsigned int v23; // r14d
  _QWORD *v24; // rax
  unsigned int *v25; // rax
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned int v28; // edi
  unsigned int *v29; // rax
  __int64 v30; // rax
  unsigned int v31; // ecx
  unsigned int v33; // r9d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // r10d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // ecx
  __int64 v41; // r13
  unsigned int *v42; // r14
  _DWORD *v43; // rax
  unsigned int *v44; // r13
  _DWORD *v45; // rdx
  int v46; // esi
  int v47; // r9d
  __int64 v48; // rax
  unsigned int v49; // edi
  unsigned int v50; // r10d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rax
  int v54; // r14d
  __int64 v55; // rax
  unsigned int v56; // r13d
  _QWORD *v57; // rax
  _DWORD *v58; // rcx
  unsigned int v59; // edx
  size_t v60; // rsi
  unsigned int v61; // r15d
  unsigned int *v62; // rax
  unsigned int v63; // eax
  _DWORD *v64; // rcx
  __int64 v65; // r13
  __int64 v66; // rax
  __int64 v67; // r14
  unsigned int v68; // edx
  unsigned int v69; // r15d
  size_t v70; // rsi
  unsigned int *v71; // rax
  char *v72; // rdi
  char *v73; // rdx
  _DWORD *v74; // rax
  unsigned int *v75; // rcx
  _DWORD *v76; // rdx
  int v77; // esi
  int v78; // r8d
  __int64 v79; // rax
  unsigned int v80; // edi
  unsigned int v81; // r14d
  size_t v82; // rsi
  unsigned int *v83; // rax
  __int64 v84; // rax
  __int64 v85; // r8
  __int64 v86; // r13
  __int64 v87; // r13
  _QWORD *v88; // rax
  _QWORD *v89; // rcx
  __int64 v90; // r14
  _QWORD *v91; // r8
  _QWORD *v92; // rdx
  unsigned int v93; // eax
  __int64 v94; // rcx
  unsigned int v95; // ecx
  size_t v96; // rsi
  unsigned int *v97; // rax
  _QWORD *v98; // r14
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 i; // r13
  __int64 v102; // rsi
  int v103; // eax
  unsigned int *v104; // rdi
  unsigned int v105; // eax
  unsigned int v106; // r8d
  size_t v107; // rsi
  unsigned int *v108; // rax
  __int64 v109; // rsi
  _QWORD *v110; // rax
  unsigned int *v111; // r14
  unsigned int *v112; // r13
  unsigned int *v113; // rax
  __int64 v114; // r8
  __int64 v115; // rax
  unsigned int *v116; // rax
  unsigned int v117; // r8d
  __int64 v118; // rax
  unsigned int v119; // r9d
  size_t v120; // rsi
  unsigned int *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned int v124; // r9d
  size_t v125; // rsi
  unsigned int *v126; // rax
  _QWORD *v127; // rax
  _BYTE *v128; // r13
  __int64 v129; // rax
  __int64 v130; // rcx
  unsigned int v131; // r13d
  _BYTE *v132; // r14
  _QWORD *v133; // rdx
  unsigned int v134; // eax
  __int64 v135; // rsi
  int v136; // eax
  _BYTE *v137; // rsi
  _QWORD *v138; // rax
  unsigned int v139; // r15d
  size_t v140; // rsi
  unsigned int *v141; // rax
  __int64 v142; // rsi
  __int64 v143; // rax
  _QWORD *v144; // rax
  _QWORD *v145; // rax
  _BYTE *v146; // rdx
  unsigned int v147; // r9d
  __int64 v148; // rsi
  unsigned int v149; // eax
  __int64 v150; // rdx
  unsigned int v151; // edx
  size_t v152; // rsi
  unsigned int *v153; // rax
  __int64 v154; // rdx
  _QWORD *v155; // rax
  _QWORD *v156; // [rsp+0h] [rbp-C0h]
  __int64 v157; // [rsp+8h] [rbp-B8h]
  unsigned int *v161; // [rsp+28h] [rbp-98h]
  unsigned int *v162; // [rsp+28h] [rbp-98h]
  unsigned int v163; // [rsp+28h] [rbp-98h]
  unsigned int v164; // [rsp+28h] [rbp-98h]
  unsigned int *v165; // [rsp+30h] [rbp-90h]
  unsigned int v166; // [rsp+30h] [rbp-90h]
  unsigned int *v167; // [rsp+30h] [rbp-90h]
  unsigned int v168; // [rsp+30h] [rbp-90h]
  int v169; // [rsp+30h] [rbp-90h]
  unsigned int v170; // [rsp+30h] [rbp-90h]
  _QWORD *v171; // [rsp+30h] [rbp-90h]
  int v172; // [rsp+30h] [rbp-90h]
  _QWORD *ptr; // [rsp+38h] [rbp-88h]
  void *ptra; // [rsp+38h] [rbp-88h]
  void *ptrb; // [rsp+38h] [rbp-88h]
  __int64 v177; // [rsp+40h] [rbp-80h]
  _QWORD *v178; // [rsp+40h] [rbp-80h]
  __int64 v179; // [rsp+40h] [rbp-80h]
  unsigned int v180; // [rsp+40h] [rbp-80h]
  unsigned int *v181; // [rsp+48h] [rbp-78h]
  _QWORD *v182; // [rsp+48h] [rbp-78h]
  unsigned int *v183; // [rsp+48h] [rbp-78h]
  _QWORD *v184; // [rsp+48h] [rbp-78h]
  unsigned int v185; // [rsp+48h] [rbp-78h]
  unsigned int v186; // [rsp+48h] [rbp-78h]
  unsigned int *v187; // [rsp+48h] [rbp-78h]
  __int64 v188; // [rsp+48h] [rbp-78h]
  unsigned int v189; // [rsp+48h] [rbp-78h]
  _QWORD *v190; // [rsp+50h] [rbp-70h]
  int v191; // [rsp+58h] [rbp-68h]
  _QWORD *v192; // [rsp+58h] [rbp-68h]
  __int64 v193[10]; // [rsp+70h] [rbp-50h] BYREF

  v17 = a2[1];
  v190 = a3;
  v18 = a3[1];
  if ( a1 != v17 && a1 != v18 )
    return nullptr;
  v191 = *(_DWORD *)(v18 + 32);
  if ( *(_DWORD *)(v17 + 32) == 4 )
  {
    ptrb = (void *)a2[8];
    if ( *(_DWORD *)(v18 + 32) == 4 )
    {
      v156 = v190;
      v157 = v190[8];
      if ( !a4 )
        goto LABEL_115;
    }
    else
    {
      v157 = (__int64)v190;
      v156 = nullptr;
      if ( !a4 )
        goto LABEL_115;
    }
    v19 = 0;
    v111 = a6;
    v112 = a5;
    v22 = 0;
    v187 = &a5[a4];
    while ( 1 )
    {
      v117 = *(_DWORD *)(a2[5] + 4LL * *v112);
      if ( v117 != -1 )
      {
        if ( v191 != 4 )
        {
          if ( !v19 )
            goto LABEL_127;
          goto LABEL_109;
        }
        if ( *(_DWORD *)(v156[5] + 4LL * *v111) != -1 )
        {
          if ( !v19 )
          {
LABEL_127:
            v170 = *(_DWORD *)(a2[5] + 4LL * *v112);
            v127 = (_QWORD *)sub_186B270(0x10u);
            v19 = (__int64)(v127 + 1);
            *v127 = 2;
            v117 = v170;
            v113 = (unsigned int *)(v127 + 1);
LABEL_99:
            *v113 = v117;
            ++*(_DWORD *)(v19 - 4);
            v114 = *v111;
            if ( v191 == 4 )
              LODWORD(v114) = *(_DWORD *)(v156[5] + 4 * v114);
            if ( v22 )
            {
              v115 = *(unsigned int *)(v22 - 4);
              if ( (_DWORD)v115 == *(_DWORD *)(v22 - 8) )
              {
                v124 = (unsigned int)(3 * v115 + 1) >> 1;
                v125 = 4 * v124 + 8;
                if ( 4 * (int)v115 + 8 >= (unsigned int)v125 || (unsigned int)v115 >= v124 )
                {
LABEL_178:
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v193, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v193);
                  sub_233E40((__int64)v193);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v164 = (unsigned int)(3 * v115 + 1) >> 1;
                v169 = v114;
                v126 = (unsigned int *)sub_186B300((void *)(v22 - 8), v125);
                v22 = (__int64)(v126 + 2);
                LODWORD(v114) = v169;
                *v126 = v164;
                v116 = &v126[v126[1] + 2];
              }
              else
              {
                v116 = (unsigned int *)(v22 + 4 * v115);
              }
            }
            else
            {
              v172 = v114;
              v138 = (_QWORD *)sub_186B270(0x10u);
              v22 = (__int64)(v138 + 1);
              *v138 = 2;
              LODWORD(v114) = v172;
              v116 = (unsigned int *)(v138 + 1);
            }
            *v116 = v114;
            ++*(_DWORD *)(v22 - 4);
            goto LABEL_105;
          }
LABEL_109:
          v118 = *(unsigned int *)(v19 - 4);
          if ( (_DWORD)v118 == *(_DWORD *)(v19 - 8) )
          {
            v119 = (unsigned int)(3 * v118 + 1) >> 1;
            v120 = 4 * v119 + 8;
            if ( 4 * (int)v118 + 8 >= (unsigned int)v120 || (unsigned int)v118 >= v119 )
            {
LABEL_176:
              v13 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v193, "Overflow encountered when expanding vector");
              *v13 = (char *)off_1C63128;
              sub_2333C0(v13 + 1, v193);
              sub_233E40((__int64)v193);
              __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v163 = (unsigned int)(3 * v118 + 1) >> 1;
            v168 = *(_DWORD *)(a2[5] + 4LL * *v112);
            v121 = (unsigned int *)sub_186B300((void *)(v19 - 8), v120);
            v19 = (__int64)(v121 + 2);
            v117 = v168;
            *v121 = v163;
            v113 = &v121[v121[1] + 2];
          }
          else
          {
            v113 = (unsigned int *)(v19 + 4 * v118);
          }
          goto LABEL_99;
        }
      }
LABEL_105:
      ++v112;
      ++v111;
      if ( v112 == v187 )
        goto LABEL_32;
    }
  }
  if ( v191 == 4 )
  {
    ptr = v190;
    v157 = v190[8];
    if ( a4 )
      goto LABEL_7;
    ptrb = a2;
LABEL_115:
    v19 = 0;
    v22 = 0;
    v40 = 0;
    v39 = *(_QWORD *)(a1 + 24);
    goto LABEL_34;
  }
  if ( !a4 )
  {
    ptrb = a2;
    v157 = (__int64)v190;
    goto LABEL_115;
  }
  ptr = nullptr;
  v157 = (__int64)v190;
LABEL_7:
  v19 = 0;
  v20 = a5;
  v21 = a6;
  v22 = 0;
  v181 = &a6[a4];
  if ( v191 == 4 )
    goto LABEL_20;
LABEL_8:
  v23 = *v20;
  if ( !v19 )
  {
    v165 = v21;
    v24 = (_QWORD *)sub_186B270(0x10u);
    v19 = (__int64)(v24 + 1);
    v21 = v165;
    *v24 = 2;
    v25 = (unsigned int *)(v24 + 1);
    goto LABEL_10;
  }
  while ( 1 )
  {
    v30 = *(unsigned int *)(v19 - 4);
    v31 = *(_DWORD *)(v19 - 8);
    if ( v31 == (_DWORD)v30 )
    {
      v162 = v21;
      v36 = (3 * v31 + 1) >> 1;
      v37 = 4 * v36 + 8;
      if ( 4 * v31 + 8 >= (unsigned int)v37 )
        goto LABEL_176;
      v166 = (3 * v31 + 1) >> 1;
      if ( v31 >= v36 )
        goto LABEL_176;
      v38 = (unsigned int *)sub_186B300((void *)(v19 - 8), v37);
      v19 = (__int64)(v38 + 2);
      v21 = v162;
      *v38 = v166;
      v25 = &v38[v38[1] + 2];
    }
    else
    {
      v25 = (unsigned int *)(v19 + 4 * v30);
    }
LABEL_10:
    *v25 = v23;
    ++*(_DWORD *)(v19 - 4);
    v26 = *v21;
    if ( v191 == 4 )
      v26 = *(_DWORD *)(ptr[5] + 4LL * v26);
    if ( v22 )
    {
      v27 = *(unsigned int *)(v22 - 4);
      v28 = *(_DWORD *)(v22 - 8);
      if ( v28 == (_DWORD)v27 )
      {
        v161 = v21;
        v33 = (3 * v28 + 1) >> 1;
        v34 = 4 * v33 + 8;
        if ( 4 * v28 + 8 >= (unsigned int)v34 || v28 >= v33 )
          goto LABEL_178;
        v35 = (unsigned int *)sub_186B300((void *)(v22 - 8), v34);
        v22 = (__int64)(v35 + 2);
        v21 = v161;
        *v35 = (3 * v28 + 1) >> 1;
        v29 = &v35[v35[1] + 2];
      }
      else
      {
        v29 = (unsigned int *)(v22 + 4 * v27);
      }
    }
    else
    {
      v167 = v21;
      v110 = (_QWORD *)sub_186B270(0x10u);
      v22 = (__int64)(v110 + 1);
      *v110 = 2;
      v21 = v167;
      v29 = (unsigned int *)(v110 + 1);
    }
    *v29 = v26;
    ++v21;
    ++v20;
    ++*(_DWORD *)(v22 - 4);
    if ( v181 == v21 )
      break;
    if ( v191 == 4 )
    {
LABEL_20:
      while ( *(_DWORD *)(ptr[5] + 4LL * *v21) == -1 )
      {
        ++v21;
        ++v20;
        if ( v21 == v181 )
          goto LABEL_31;
      }
      goto LABEL_8;
    }
    v23 = *v20;
  }
LABEL_31:
  ptrb = a2;
LABEL_32:
  v39 = *(_QWORD *)(a1 + 24);
  if ( v19 )
    v40 = *(_DWORD *)(v19 - 4);
  else
    v40 = 0;
LABEL_34:
  ptra = (void *)sub_4C4750(v39, (__int64)ptrb, v157, v40, v19, v22, 0);
  if ( ptra )
  {
    v41 = a4;
    v192 = (_QWORD *)sub_186B270(0x48u);
    *v192 = qword_1C666F0;
    v192[1] = 0;
    v192[2] = 0;
    if ( a4 )
    {
      v42 = a5;
      v43 = (_DWORD *)(sub_186B270(0x10u) + 8);
      v177 = a4;
      v44 = &a5[v41];
      *((_QWORD *)v43 - 1) = 2;
      v45 = v43;
      v192[2] = v43;
      while ( 1 )
      {
        v46 = *v42++;
        *v43 = v46;
        v47 = *(v45 - 1);
        v48 = (unsigned int)(v47 + 1);
        *(v45 - 1) = v48;
        if ( v44 == v42 )
          break;
        v49 = *(v45 - 2);
        if ( v49 == (_DWORD)v48 )
        {
          v50 = (3 * v49 + 1) >> 1;
          v51 = 4 * v50 + 8;
          if ( 4 * v47 + 12 >= (unsigned int)v51 || v49 >= v50 )
          {
            v9 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v193, "Overflow encountered when expanding vector");
            *v9 = (char *)off_1C63128;
            sub_2333C0(v9 + 1, v193);
            sub_233E40((__int64)v193);
            __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (unsigned int *)sub_186B300(v45 - 2, v51);
          v45 = v52 + 2;
          *v52 = (3 * v49 + 1) >> 1;
          v53 = v52[1];
          v192[2] = v45;
          v43 = &v45[v53];
        }
        else
        {
          v43 = &v45[v48];
        }
      }
      v192[3] = 0;
      v74 = (_DWORD *)(sub_186B270(0x10u) + 8);
      v75 = a6;
      *((_QWORD *)v74 - 1) = 2;
      v76 = v74;
      v192[3] = v74;
      while ( 1 )
      {
        v77 = *v75++;
        *v74 = v77;
        v78 = *(v76 - 1);
        v79 = (unsigned int)(v78 + 1);
        *(v76 - 1) = v79;
        if ( &a6[v177] == v75 )
          break;
        v80 = *(v76 - 2);
        if ( v80 == (_DWORD)v79 )
        {
          v81 = (3 * v80 + 1) >> 1;
          v82 = 4 * v81 + 8;
          if ( 4 * v78 + 12 >= (unsigned int)v82 || v80 >= v81 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v193, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v193);
            sub_233E40((__int64)v193);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v183 = v75;
          v83 = (unsigned int *)sub_186B300(v76 - 2, v82);
          v76 = v83 + 2;
          *v83 = v81;
          v84 = v83[1];
          v192[3] = v76;
          v75 = v183;
          v74 = &v76[v84];
        }
        else
        {
          v74 = &v76[v79];
        }
      }
    }
    else
    {
      v192[3] = 0;
    }
    v85 = a2[2];
    if ( v85 && (v86 = *(unsigned int *)(v85 - 4), v184 = (_QWORD *)a2[2], (_DWORD)v86) )
    {
      v87 = 8 * v86;
      v88 = (_QWORD *)sub_186B270(0x18u);
      v89 = v88 + 1;
      *v88 = 2;
      v90 = 0;
      v91 = v184;
      v92 = v88 + 1;
      v192[1] = v88 + 1;
      v93 = 1;
      while ( 1 )
      {
        v90 += 8;
        *v89 = *v91;
        *((_DWORD *)v92 - 1) = v93;
        if ( v87 == v90 )
          break;
        v91 = (_QWORD *)(v90 + a2[2]);
        if ( *((_DWORD *)v92 - 2) == v93 )
        {
          v95 = (3 * v93 + 1) >> 1;
          v96 = 8 * v95 + 8;
          if ( 8 * v93 + 8 >= (unsigned int)v96 || v93 >= v95 )
          {
            v14 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v193, "Overflow encountered when expanding vector");
            *v14 = (char *)off_1C63128;
            sub_2333C0(v14 + 1, v193);
            sub_233E40((__int64)v193);
            __cxa_throw(v14, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v178 = (_QWORD *)(v90 + a2[2]);
          v185 = (3 * v93 + 1) >> 1;
          v97 = (unsigned int *)sub_186B300(v92 - 1, v96);
          v92 = v97 + 2;
          v91 = v178;
          v192[1] = v97 + 2;
          *v97 = v185;
          LODWORD(v97) = v97[1];
          v89 = &v92[(unsigned int)v97];
          v93 = (_DWORD)v97 + 1;
        }
        else
        {
          v94 = v93++;
          v89 = &v92[v94];
        }
      }
      v98 = (_QWORD *)v190[2];
      if ( v98 )
      {
        v99 = *((unsigned int *)v98 - 1);
        if ( (_DWORD)v99 )
        {
          v100 = 8 * v99;
          for ( i = 0; ; v98 = (_QWORD *)(i + v190[2]) )
          {
            v105 = *((_DWORD *)v92 - 1);
            if ( v105 == *((_DWORD *)v92 - 2) )
            {
              v106 = (3 * v105 + 1) >> 1;
              v107 = 8 * v106 + 8;
              if ( 8 * v105 + 8 >= (unsigned int)v107 || v105 >= v106 )
              {
                v12 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v193, "Overflow encountered when expanding vector");
                *v12 = (char *)off_1C63128;
                sub_2333C0(v12 + 1, v193);
                sub_233E40((__int64)v193);
                __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v179 = v100;
              v186 = (3 * v105 + 1) >> 1;
              v108 = (unsigned int *)sub_186B300(v92 - 1, v107);
              v109 = v108[1];
              v92 = v108 + 2;
              *v108 = v186;
              v104 = &v108[2 * v109 + 2];
              v192[1] = v108 + 2;
              v103 = v109 + 1;
              v100 = v179;
            }
            else
            {
              v102 = v105;
              v103 = v105 + 1;
              v104 = (unsigned int *)&v92[v102];
            }
LABEL_88:
            i += 8;
            *(_QWORD *)v104 = *v98;
            *((_DWORD *)v92 - 1) = v103;
            if ( i == v100 )
              break;
          }
        }
      }
    }
    else
    {
      v98 = (_QWORD *)v190[2];
      if ( v98 )
      {
        v143 = *((unsigned int *)v98 - 1);
        if ( (_DWORD)v143 )
        {
          v188 = 8 * v143;
          v144 = (_QWORD *)sub_186B270(0x18u);
          v92 = v144 + 1;
          *v144 = 2;
          i = 0;
          v100 = v188;
          v104 = (unsigned int *)(v144 + 1);
          v192[1] = v144 + 1;
          v103 = 1;
          goto LABEL_88;
        }
      }
    }
    *v192 = &off_1C51E90;
    v192[5] = 0;
    v192[4] = a1;
    v192[6] = 0;
    v192[7] = 0;
    v192[8] = ptra;
    v54 = *(_DWORD *)(v190[1] + 32LL);
    if ( *(_DWORD *)(a2[1] + 32LL) != 4 )
    {
      if ( v54 == 4 )
      {
        v129 = a2[2];
        if ( !v129 )
          goto LABEL_134;
        v56 = *(_DWORD *)(v129 - 4);
        if ( !v56 )
          goto LABEL_134;
        v182 = v190;
        goto LABEL_48;
      }
      v55 = a2[2];
      if ( v55 )
      {
        v56 = *(_DWORD *)(v55 - 4);
        if ( v56 )
        {
          v182 = nullptr;
LABEL_48:
          v57 = (_QWORD *)sub_186B270(0xAu);
          v58 = v57 + 1;
          *v57 = 2;
          for ( v192[7] = v57 + 1; ; v192[7] = v62 + 2 )
          {
            v63 = *(v58 - 2);
            if ( v63 >= v56 )
              break;
            v59 = (3 * v63 + 1) >> 1;
            v60 = v59 + 8;
            v61 = v59;
            if ( v63 + 8 >= (unsigned int)v60 || v63 >= v59 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v193, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, v193);
              sub_233E40((__int64)v193);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v62 = (unsigned int *)sub_186B300(v58 - 2, v60);
            v58 = v62 + 2;
            *v62 = v61;
          }
          *(v58 - 1) = v56;
          v64 = memset(v58, 1, v56);
          if ( v54 != 4 )
            goto LABEL_54;
          v190 = v182;
          goto LABEL_134;
        }
      }
LABEL_118:
      v122 = v190[2];
      if ( !v122 )
        goto LABEL_62;
      LODWORD(v67) = *(_DWORD *)(v122 - 4);
      if ( !(_DWORD)v67 )
        goto LABEL_62;
      v123 = sub_186B270(0xAu);
      v64 = (_DWORD *)(v123 + 8);
      v68 = 2;
      LODWORD(v65) = 0;
      *(_QWORD *)v123 = 2;
      v192[7] = v123 + 8;
      if ( (unsigned int)v67 > 2 )
        goto LABEL_57;
      *(_DWORD *)(v123 + 4) = v67;
      v72 = (char *)(v123 + 8);
      v73 = (char *)v64 + (unsigned int)v67;
      goto LABEL_61;
    }
    if ( v54 == 4 )
    {
      v128 = (_BYTE *)a2[4];
      if ( !v128 || !*((_DWORD *)v128 - 1) )
        goto LABEL_134;
      v171 = v190;
    }
    else
    {
      v128 = (_BYTE *)a2[4];
      if ( !v128 )
        goto LABEL_118;
      v171 = nullptr;
      if ( !*((_DWORD *)v128 - 1) )
        goto LABEL_118;
    }
    v145 = (_QWORD *)sub_186B270(0xAu);
    v146 = v145 + 1;
    *v145 = 2;
    v147 = 0;
    v148 = a2[4];
    v64 = v145 + 1;
    v192[7] = v145 + 1;
    v149 = 1;
    while ( 1 )
    {
      ++v147;
      *v146 = *v128;
      *(v64 - 1) = v149;
      if ( !v148 || v147 >= *(_DWORD *)(v148 - 4) )
        break;
      v128 = (_BYTE *)(v148 + v147);
      if ( *(v64 - 2) == v149 )
      {
        v151 = (3 * v149 + 1) >> 1;
        v152 = v151 + 8;
        if ( v149 + 8 >= (unsigned int)v152 || v149 >= v151 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v193, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, v193);
          sub_233E40((__int64)v193);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v180 = (3 * v149 + 1) >> 1;
        v189 = v147;
        v153 = (unsigned int *)sub_186B300(v64 - 2, v152);
        v64 = v153 + 2;
        v148 = a2[4];
        v147 = v189;
        *v153 = v180;
        v154 = v153[1];
        v192[7] = v153 + 2;
        LODWORD(v153) = v154;
        v146 = (char *)v64 + v154;
        v149 = (_DWORD)v153 + 1;
      }
      else
      {
        v150 = v149++;
        v146 = (char *)v64 + v150;
      }
    }
    if ( v54 != 4 )
    {
LABEL_54:
      v65 = (unsigned int)*(v64 - 1);
      v66 = v190[2];
      if ( v66 )
      {
        v67 = (unsigned int)(*(_DWORD *)(v66 - 4) + v65);
        if ( (unsigned int)v65 < (unsigned int)v67 )
        {
          v68 = *(v64 - 2);
          if ( v68 < (unsigned int)v67 )
          {
            do
            {
LABEL_57:
              v69 = (3 * v68 + 1) >> 1;
              v70 = v69 + 8;
              if ( v68 + 8 >= (unsigned int)v70 || v68 >= v69 )
              {
                v8 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v193, "Overflow encountered when expanding vector");
                *v8 = (char *)off_1C63128;
                sub_2333C0(v8 + 1, v193);
                sub_233E40((__int64)v193);
                __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v71 = (unsigned int *)sub_186B300(v64 - 2, v70);
              v64 = v71 + 2;
              *v71 = v69;
              v68 = v69;
              v192[7] = v71 + 2;
            }
            while ( v69 < (unsigned int)v67 );
            v71[1] = v67;
            v72 = (char *)v64 + (unsigned int)v65;
            v73 = (char *)v64 + (unsigned int)v67;
            if ( (_DWORD)v67 == (_DWORD)v65 )
              goto LABEL_62;
            goto LABEL_61;
          }
          *(v64 - 1) = v67;
          v72 = (char *)v64 + v65;
          v73 = (char *)v64 + v67;
LABEL_61:
          memset(v72, 1, v73 - v72);
LABEL_62:
          ptra = v192;
          goto LABEL_63;
        }
        LODWORD(v65) = *(_DWORD *)(v66 - 4) + v65;
      }
      *(v64 - 1) = v65;
      goto LABEL_62;
    }
    v190 = v171;
LABEL_134:
    v130 = v190[4];
    if ( v130 )
    {
      v131 = 0;
      do
      {
        if ( v131 >= *(_DWORD *)(v130 - 4) )
          break;
        v132 = (_BYTE *)(v130 + v131);
        v133 = (_QWORD *)v192[7];
        if ( v133 )
        {
          v134 = *((_DWORD *)v133 - 1);
          if ( v134 == *((_DWORD *)v133 - 2) )
          {
            v139 = (3 * v134 + 1) >> 1;
            v140 = v139 + 8;
            if ( v134 + 8 >= (unsigned int)v140 || v134 >= v139 )
            {
              v11 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v193, "Overflow encountered when expanding vector");
              *v11 = (char *)off_1C63128;
              sub_2333C0(v11 + 1, v193);
              sub_233E40((__int64)v193);
              __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v141 = (unsigned int *)sub_186B300(v133 - 1, v140);
            v133 = v141 + 2;
            v142 = v141[1];
            *v141 = v139;
            v192[7] = v141 + 2;
            LODWORD(v141) = v142;
            v137 = (char *)v133 + v142;
            v136 = (_DWORD)v141 + 1;
            v130 = v190[4];
          }
          else
          {
            v135 = v134;
            v136 = v134 + 1;
            v137 = (char *)v133 + v135;
          }
        }
        else
        {
          v155 = (_QWORD *)sub_186B270(0xAu);
          v133 = v155 + 1;
          *v155 = 2;
          v137 = v155 + 1;
          v130 = v190[4];
          v192[7] = v155 + 1;
          v136 = 1;
        }
        ++v131;
        *v137 = *v132;
        *((_DWORD *)v133 - 1) = v136;
      }
      while ( v130 );
    }
    goto LABEL_62;
  }
LABEL_63:
  if ( v22 )
    sub_186B220((void *)(v22 - 8));
  if ( v19 )
    sub_186B220((void *)(v19 - 8));
  return ptra;
}

