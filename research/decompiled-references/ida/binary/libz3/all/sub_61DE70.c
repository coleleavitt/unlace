_QWORD *__fastcall sub_61DE70(__int64 a1, __int64 *a2, double a3)
{
  char **v3; // r13
  char **v4; // r13
  char **v5; // r13
  char **v6; // r13
  char **exception; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // r9d
  int v12; // eax
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r12
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // ecx
  _QWORD *v24; // rbx
  size_t v25; // r14
  unsigned int v26; // r8d
  int v27; // ecx
  __int64 v28; // r8
  _QWORD *v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // ebx
  unsigned int v35; // ecx
  unsigned int *v36; // rax
  unsigned __int64 v37; // r14
  _QWORD *v38; // rbx
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // r13
  unsigned int v42; // r15d
  unsigned int v43; // r12d
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned int v46; // edx
  int v47; // esi
  __int64 *v48; // r9
  __int64 v49; // rdx
  __int64 *v50; // rdi
  __int64 *i; // rax
  __int64 v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  _QWORD *v56; // rdx
  _QWORD *v57; // rcx
  unsigned int v58; // eax
  __int64 v59; // rdx
  _QWORD *v60; // rsi
  int v61; // eax
  _BYTE *v62; // rdx
  __int64 v63; // r13
  unsigned __int64 v64; // r12
  unsigned __int64 v65; // rdx
  _QWORD *v66; // rax
  unsigned __int64 v67; // rdx
  int v68; // eax
  unsigned __int64 *v69; // rcx
  _DWORD *v70; // rdi
  unsigned int v71; // eax
  __int64 v72; // rdx
  _DWORD *v73; // rcx
  int v74; // eax
  _BYTE *v75; // rdx
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned int v78; // eax
  _BYTE *v79; // rax
  unsigned int v80; // r13d
  unsigned __int64 v81; // r12
  bool v82; // zf
  int v83; // r9d
  int v84; // edx
  __int64 v85; // rax
  __int64 v86; // r12
  unsigned int v87; // ecx
  size_t v88; // rsi
  unsigned int *v89; // rax
  unsigned int v90; // edx
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 *v93; // r13
  unsigned __int64 v94; // r15
  __int64 v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rax
  _QWORD *v98; // rax
  unsigned __int64 v99; // r13
  __int64 *v100; // r15
  __int64 v101; // rsi
  unsigned int v103; // r13d
  unsigned int *v104; // rax
  __int64 v105; // rdx
  unsigned int v106; // edx
  unsigned int v107; // ecx
  unsigned int *v108; // rax
  __int64 v109; // r15
  _QWORD *v110; // rax
  int v111; // ecx
  char *v112; // r13
  char *v113; // r15
  __int64 v114; // rax
  _QWORD *v115; // rdx
  _QWORD *v116; // rsi
  _QWORD *v117; // rax
  __int64 v118; // rdx
  _QWORD *v119; // rax
  int v120; // [rsp-8h] [rbp-D8h]
  int v121; // [rsp+0h] [rbp-D0h]
  int v122; // [rsp+0h] [rbp-D0h]
  int v123; // [rsp+8h] [rbp-C8h]
  __int64 *v124; // [rsp+8h] [rbp-C8h]
  int v125; // [rsp+10h] [rbp-C0h]
  int v126; // [rsp+10h] [rbp-C0h]
  __int64 v127; // [rsp+10h] [rbp-C0h]
  int v128; // [rsp+18h] [rbp-B8h]
  __int64 v129; // [rsp+18h] [rbp-B8h]
  int v130; // [rsp+20h] [rbp-B0h]
  int v131; // [rsp+20h] [rbp-B0h]
  __int64 v132; // [rsp+20h] [rbp-B0h]
  int v133[2]; // [rsp+28h] [rbp-A8h]
  char v134; // [rsp+28h] [rbp-A8h]
  int v135[2]; // [rsp+28h] [rbp-A8h]
  char v136; // [rsp+30h] [rbp-A0h]
  int v137; // [rsp+30h] [rbp-A0h]
  __int64 v138; // [rsp+30h] [rbp-A0h]
  int v139; // [rsp+38h] [rbp-98h]
  int v140; // [rsp+38h] [rbp-98h]
  unsigned __int64 v141; // [rsp+38h] [rbp-98h]
  int v142; // [rsp+38h] [rbp-98h]
  int v143; // [rsp+40h] [rbp-90h]
  int v144; // [rsp+40h] [rbp-90h]
  unsigned __int64 v145; // [rsp+40h] [rbp-90h]
  unsigned int v146; // [rsp+40h] [rbp-90h]
  unsigned int v147; // [rsp+40h] [rbp-90h]
  unsigned int v148; // [rsp+40h] [rbp-90h]
  unsigned int v149; // [rsp+40h] [rbp-90h]
  void *ptr; // [rsp+48h] [rbp-88h]
  void *ptrb; // [rsp+48h] [rbp-88h]
  _QWORD *ptra; // [rsp+48h] [rbp-88h]
  int v153; // [rsp+50h] [rbp-80h]
  unsigned int v154; // [rsp+50h] [rbp-80h]
  __int64 v155; // [rsp+50h] [rbp-80h]
  __int64 v156; // [rsp+58h] [rbp-78h]
  __int64 v157; // [rsp+58h] [rbp-78h]
  __int64 v158; // [rsp+60h] [rbp-70h]
  __int64 v159; // [rsp+60h] [rbp-70h]
  int v160; // [rsp+60h] [rbp-70h]
  int v161; // [rsp+68h] [rbp-68h]
  _QWORD *v162; // [rsp+68h] [rbp-68h]
  _QWORD *v163; // [rsp+68h] [rbp-68h]
  int v164; // [rsp+68h] [rbp-68h]
  int v165; // [rsp+68h] [rbp-68h]
  int v166; // [rsp+70h] [rbp-60h]
  int v167; // [rsp+78h] [rbp-58h]
  int v168[10]; // [rsp+80h] [rbp-50h] BYREF
  void *v169; // [rsp+A8h] [rbp-28h]
  int v170; // [rsp+B0h] [rbp-20h]
  __int64 v171; // [rsp+B8h] [rbp-18h]

  v8 = *a2;
  v156 = a2[1];
  ptr = (void *)sub_186B270(0xF8u);
  sub_63D370(ptr, v8);
  v9 = a2[3];
  if ( v9 )
    v153 = *(_DWORD *)(v9 - 4);
  else
    v153 = 0;
  *(_QWORD *)v133 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(*(_QWORD *)v133 + 840LL);
  sub_180C5A0(v168, "Q");
  v11 = v10;
  LODWORD(v10) = v133[0];
  v12 = sub_15E3D10(
          v133[0],
          (int)v168,
          (int)&qword_18D6CD0,
          0,
          0,
          v11,
          1,
          v120,
          v121,
          (int)v168,
          v125,
          (int)a2,
          v130,
          v133[0],
          v136,
          v139,
          v143,
          (int)ptr,
          v153,
          v156,
          a1,
          v161,
          v166,
          v167,
          v168[0],
          v168[2],
          v168[4],
          v168[6],
          v168[8],
          v169,
          v170,
          v171);
  v15 = sub_15DC610(v10, v12, 0, 0, v13, v14, v122, v123, v126, v128, v131, v134, v137, v140, v144, ptrb);
  v132 = v15;
  if ( v15 )
    ++*(_DWORD *)(v15 + 8);
  v16 = *(_QWORD *)(v15 + 16);
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v17 = (_QWORD *)ptra[29];
  if ( v17 )
  {
    v18 = *((_DWORD *)v17 - 1);
    if ( v18 == *((_DWORD *)v17 - 2) )
    {
      v34 = (3 * v18 + 1) >> 1;
      v35 = 8 * v34 + 8;
      if ( 8 * v18 + 8 >= v35 || v18 >= v34 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v124, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v124);
        sub_233E40((__int64)v124);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v36 = (unsigned int *)sub_186B300(v17 - 1, v35);
      v17 = v36 + 2;
      *v36 = v34;
      ptra[29] = v36 + 2;
      LODWORD(v36) = v36[1];
      v21 = &v17[(unsigned int)v36];
      v20 = (_DWORD)v36 + 1;
    }
    else
    {
      v19 = v18;
      v20 = v18 + 1;
      v21 = &v17[v19];
    }
  }
  else
  {
    v119 = (_QWORD *)sub_186B270(0x18u);
    *v119 = 2;
    v17 = v119 + 1;
    ptra[29] = v119 + 1;
    v21 = v119 + 1;
    v20 = 1;
  }
  *v21 = v16;
  *((_DWORD *)v17 - 1) = v20;
  v22 = *((unsigned int *)ptra + 40);
  v23 = 2 * v22;
  if ( 3 * (int)v22 < (unsigned int)(4 * (*((_DWORD *)ptra + 41) + *((_DWORD *)ptra + 42))) )
  {
    v164 = 2 * v22;
    v25 = 8LL * v23;
    v109 = v23;
    v110 = (_QWORD *)sub_186B270(v25);
    v111 = v164;
    v24 = v110;
    if ( v164 )
    {
      memset(v110, 0, 8 * v109);
      v111 = v164;
    }
    v26 = v111 - 1;
    v112 = (char *)ptra[19];
    v113 = &v112[8 * *((unsigned int *)ptra + 40)];
    v162 = &v24[v25 / 8];
    if ( v112 != v113 )
    {
      do
      {
        while ( *(_QWORD *)v112 <= 1u )
        {
          v112 += 8;
          if ( v113 == v112 )
            goto LABEL_151;
        }
        v114 = 8LL * (*(_DWORD *)(*(_QWORD *)v112 + 12LL) & v26);
        v115 = &v24[(unsigned __int64)v114 / 8];
        if ( v25 == v114 )
        {
LABEL_155:
          if ( v24 == v115 )
          {
LABEL_163:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v116 = v162;
          v117 = v24;
          while ( *v117 )
          {
            if ( v115 == ++v117 )
              goto LABEL_163;
          }
        }
        else
        {
          v116 = v162;
          v117 = &v24[(unsigned __int64)v114 / 8];
          while ( *v117 )
          {
            if ( v162 == ++v117 )
              goto LABEL_155;
          }
        }
        v118 = *(_QWORD *)v112;
        v112 += 8;
        v162 = v116;
        *v117 = v118;
      }
      while ( v113 != v112 );
LABEL_151:
      v113 = (char *)ptra[19];
    }
    if ( v113 )
    {
      v142 = v111;
      v149 = v111 - 1;
      sub_186B220(v113);
      v26 = v149;
      v111 = v142;
    }
    ptra[19] = v24;
    *((_DWORD *)ptra + 40) = v111;
    *((_DWORD *)ptra + 42) = 0;
  }
  else
  {
    v24 = (_QWORD *)ptra[19];
    v25 = 8 * v22;
    v26 = v22 - 1;
    v162 = &v24[v22];
  }
  v27 = *(_DWORD *)(v16 + 12);
  v28 = v27 & v26;
  v29 = &v24[v28];
  if ( 8 * v28 != v25 )
  {
    v30 = &v24[v28];
    v31 = nullptr;
    while ( 1 )
    {
      v32 = *v30;
      if ( *v30 > 1u )
      {
        if ( *(_DWORD *)(v32 + 12) == v27 && v16 == v32 )
        {
          *v30 = v16;
          goto LABEL_31;
        }
      }
      else
      {
        if ( !v32 )
        {
          if ( v31 )
            goto LABEL_161;
          v31 = v30;
          goto LABEL_162;
        }
        v31 = v30;
      }
      if ( ++v30 == v162 )
        goto LABEL_23;
    }
  }
  v31 = nullptr;
  while ( 1 )
  {
LABEL_23:
    if ( v29 == v24 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v33 = *v24;
    if ( *v24 <= 1u )
      break;
    if ( *(_DWORD *)(v33 + 12) == v27 && v16 == v33 )
    {
      *v24 = v16;
      goto LABEL_31;
    }
LABEL_22:
    ++v24;
  }
  if ( v33 )
  {
    v31 = v24;
    goto LABEL_22;
  }
  if ( v31 )
LABEL_161:
    --*((_DWORD *)ptra + 42);
  else
    v31 = v24;
LABEL_162:
  *v31 = v16;
  ++*((_DWORD *)ptra + 41);
LABEL_31:
  sub_6511B0(*(_QWORD *)(v158 + 32), *(_QWORD *)(v132 + 16), 0);
  if ( !v154 )
  {
    v165 = *(_DWORD *)(v132 + 8);
    *(_DWORD *)(v132 + 8) = v165 - 1;
    if ( v165 == 1 )
      sub_15D7BC0(*(_QWORD *)v135, v132);
    return ptra;
  }
  v37 = 0;
  v38 = nullptr;
  v138 = 0;
  v127 = 8LL * v154;
  v163 = nullptr;
  v159 = 0;
  while ( 2 )
  {
    if ( v163 )
      *((_DWORD *)v163 - 1) = 0;
    v39 = *(_QWORD *)(*(_QWORD *)(v129 + 24) + v138);
    v40 = *(__int64 **)(v129 + 152);
    v41 = *(_QWORD *)(v39 + 40);
    v42 = *(_DWORD *)(v39 + 68);
    v155 = v39;
    v43 = *(_DWORD *)(v39 + 56);
    v44 = *(unsigned int *)(v129 + 160);
    v45 = *(_QWORD *)(v41 + 16);
    v46 = v44 - 1;
    v44 *= 8;
    v47 = *(_DWORD *)(v45 + 12);
    v48 = (__int64 *)((char *)v40 + v44);
    v49 = 8LL * (v47 & v46);
    v50 = &v40[(unsigned __int64)v49 / 8];
    if ( v49 != v44 )
    {
      for ( i = &v40[(unsigned __int64)v49 / 8]; v48 != i; ++i )
      {
        v52 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v52 + 12) == v47 && v45 == v52 )
            goto LABEL_49;
        }
        else if ( !v52 )
        {
          goto LABEL_42;
        }
      }
    }
    if ( v40 == v50 )
    {
LABEL_42:
      ++*(_DWORD *)(v41 + 8);
      if ( !v38 )
        goto LABEL_112;
      goto LABEL_43;
    }
    while ( 2 )
    {
      v96 = *v40;
      if ( (unsigned __int64)*v40 > 1 )
      {
        if ( *(_DWORD *)(v96 + 12) == v47 && v45 == v96 )
          goto LABEL_49;
LABEL_108:
        if ( v50 == ++v40 )
          goto LABEL_111;
        continue;
      }
      break;
    }
    if ( v96 )
      goto LABEL_108;
LABEL_111:
    ++*(_DWORD *)(v41 + 8);
    if ( v38 )
    {
LABEL_43:
      v53 = *((_DWORD *)v38 - 1);
      if ( v53 == *((_DWORD *)v38 - 2) )
      {
        v106 = (3 * v53 + 1) >> 1;
        v107 = 8 * v106 + 8;
        if ( 8 * v53 + 8 >= v107 || v53 >= v106 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v124, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v124);
          sub_233E40((__int64)v124);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v148 = (3 * v53 + 1) >> 1;
        v108 = (unsigned int *)sub_186B300(v38 - 1, v107);
        v38 = v108 + 2;
        *v108 = v148;
        LODWORD(v108) = v108[1];
        v56 = &v38[(unsigned int)v108];
        v55 = (_DWORD)v108 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = &v38[v54];
      }
      v57 = v163;
      *v56 = v41;
      *((_DWORD *)v38 - 1) = v55;
      if ( v163 )
        goto LABEL_46;
LABEL_113:
      v98 = (_QWORD *)sub_186B270(0xAu);
      *v98 = 2;
      v163 = v98 + 1;
      v62 = v98 + 1;
      v60 = v98 + 1;
      v61 = 1;
      goto LABEL_48;
    }
LABEL_112:
    v97 = sub_186B270(0x18u);
    v57 = v163;
    *(_QWORD *)v97 = 2;
    v38 = (_QWORD *)(v97 + 8);
    *(_QWORD *)(v97 + 8) = v41;
    *(_DWORD *)(v97 + 4) = 1;
    if ( !v163 )
      goto LABEL_113;
LABEL_46:
    v58 = *((_DWORD *)v57 - 1);
    if ( v58 == *((_DWORD *)v57 - 2) )
    {
      v103 = (3 * v58 + 1) >> 1;
      if ( v58 + 8 >= v103 + 8 || v58 >= v103 )
      {
        v3 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v124, "Overflow encountered when expanding vector");
        *v3 = (char *)off_1C63128;
        sub_2333C0(v3 + 1, v124);
        sub_233E40((__int64)v124);
        __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v104 = (unsigned int *)sub_186B300(v163 - 1, v103 + 8);
      v105 = v104[1];
      v60 = v104 + 2;
      *v104 = v103;
      v163 = v60;
      LODWORD(v104) = v105;
      v62 = (char *)v60 + v105;
      v61 = (_DWORD)v104 + 1;
    }
    else
    {
      v59 = v58;
      v60 = v57;
      v61 = v58 + 1;
      v62 = (char *)v57 + v59;
    }
LABEL_48:
    *v62 = 0;
    *((_DWORD *)v60 - 1) = v61;
LABEL_49:
    if ( v42 < v43 )
    {
      v63 = v155 + 8LL * v42;
      v64 = v155 + 8 * (v43 - 1 - v42 + (unsigned __int64)v42) + 8;
      v65 = *(_QWORD *)(v63 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v63 + 80) > 7u )
        ++*(_DWORD *)(v65 + 8);
      if ( v38 )
        goto LABEL_60;
      v145 = v65;
      v66 = (_QWORD *)sub_186B270(0x18u);
      v67 = v145;
      *v66 = 2;
      v38 = v66 + 1;
      v68 = 1;
      v69 = v38;
LABEL_54:
      v70 = v163;
      *v69 = v67;
      *((_DWORD *)v38 - 1) = v68;
      if ( v163 )
      {
LABEL_55:
        v71 = *(v70 - 1);
        if ( v71 == *(v70 - 2) )
        {
          v90 = (3 * v71 + 1) >> 1;
          v91 = v90 + 8;
          if ( v71 + 8 >= (unsigned int)v91 || v71 >= v90 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v124, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v124);
            sub_233E40((__int64)v124);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v147 = (3 * v71 + 1) >> 1;
          v92 = (unsigned int *)sub_186B300(v70 - 2, v91);
          v73 = v92 + 2;
          v163 = v92 + 2;
          *v92 = v147;
          LODWORD(v92) = v92[1];
          v75 = (char *)v73 + (unsigned int)v92;
          v74 = (_DWORD)v92 + 1;
        }
        else
        {
          v72 = v71;
          v73 = v70;
          v74 = v71 + 1;
          v75 = (char *)v70 + v72;
        }
        v63 += 8;
        *v75 = 0;
        *(v73 - 1) = v74;
        if ( v64 != v63 )
          goto LABEL_58;
      }
      else
      {
        while ( 1 )
        {
          v79 = (_BYTE *)(sub_186B270(0xAu) + 8);
          v63 += 8;
          *((_QWORD *)v79 - 1) = 2;
          v163 = v79;
          *v79 = 0;
          *((_DWORD *)v79 - 1) = 1;
          if ( v64 == v63 )
            break;
LABEL_58:
          v76 = *(_QWORD *)(v63 + 80);
          v65 = 0;
          if ( v76 > 7 )
          {
            v77 = v76 & 0xFFFFFFFFFFFFFFF8LL;
            ++*(_DWORD *)(v77 + 8);
            v65 = v77;
          }
LABEL_60:
          v78 = *((_DWORD *)v38 - 1);
          if ( v78 == *((_DWORD *)v38 - 2) )
          {
            v87 = (3 * v78 + 1) >> 1;
            v88 = 8 * v87 + 8;
            if ( 8 * v78 + 8 >= (unsigned int)v88 || v78 >= v87 )
            {
              v5 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v124, "Overflow encountered when expanding vector");
              *v5 = (char *)off_1C63128;
              sub_2333C0(v5 + 1, v124);
              sub_233E40((__int64)v124);
              __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v141 = v65;
            v146 = (3 * v78 + 1) >> 1;
            v89 = (unsigned int *)sub_186B300(v38 - 1, v88);
            v38 = v89 + 2;
            v67 = v141;
            *v89 = v146;
            LODWORD(v89) = v89[1];
            v69 = &v38[(unsigned int)v89];
            v68 = (_DWORD)v89 + 1;
            goto LABEL_54;
          }
          v70 = v163;
          v38[v78] = v65;
          *((_DWORD *)v38 - 1) = v78 + 1;
          if ( v163 )
            goto LABEL_55;
        }
      }
    }
    v80 = 0;
    while ( 2 )
    {
      if ( v42 != v80 )
        goto LABEL_64;
      if ( !v80 )
      {
        if ( !v42 )
        {
          if ( v132 != v37 )
          {
            if ( v37 )
            {
              v82 = (*(_DWORD *)(v37 + 8))-- == 1;
              if ( v82 )
                sub_15D7BC0(*(_QWORD *)v135, v37);
            }
            ++*(_DWORD *)(v132 + 8);
            v37 = v132;
            v83 = v155 + 72;
            if ( !v38 )
            {
LABEL_86:
              v84 = 0;
              goto LABEL_72;
            }
LABEL_71:
            v84 = *((_DWORD *)v38 - 1);
LABEL_72:
            v85 = sub_62C680(v157, v37, v84, (_DWORD)v38, (_DWORD)v163, v83, 1);
            v86 = v85;
            if ( v85 )
              sub_62A000(v157, v85);
            if ( v159 )
              sub_62A410(v157, v159);
            sub_63DAD0(ptra, v86, a3);
            if ( v42 < ++v80 )
              goto LABEL_94;
            v159 = v86;
            continue;
          }
LABEL_70:
          v83 = v155 + 72;
          if ( !v38 )
            goto LABEL_86;
          goto LABEL_71;
        }
LABEL_64:
        v81 = *(_QWORD *)(v155 + 8LL * v80 + 80) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v155 + 8LL * v80 + 80) > 7u )
          ++*(_DWORD *)(v81 + 8);
        if ( v37 )
        {
          v82 = (*(_DWORD *)(v37 + 8))-- == 1;
          if ( v82 )
            sub_15D7BC0(*(_QWORD *)v135, v37);
        }
        v37 = v81;
        goto LABEL_70;
      }
      break;
    }
    v86 = v159;
LABEL_94:
    v138 += 8;
    if ( v138 != v127 )
    {
      if ( v38 )
      {
        v93 = v38;
        v94 = (unsigned __int64)&v38[*((unsigned int *)v38 - 1)];
        if ( (unsigned __int64)v38 < v94 )
        {
          do
          {
            while ( 1 )
            {
              v95 = *v93;
              if ( *v93 )
              {
                v82 = (*(_DWORD *)(v95 + 8))-- == 1;
                if ( v82 )
                  break;
              }
              if ( (unsigned __int64)++v93 >= v94 )
                goto LABEL_102;
            }
            sub_15D7BC0(*(_QWORD *)v135, v95);
            ++v93;
          }
          while ( (unsigned __int64)v93 < v94 );
        }
LABEL_102:
        *((_DWORD *)v38 - 1) = 0;
      }
      v159 = v86;
      continue;
    }
    break;
  }
  v160 = *(_DWORD *)(v132 + 8);
  *(_DWORD *)(v132 + 8) = v160 - 1;
  if ( v160 == 1 )
    sub_15D7BC0(*(_QWORD *)v135, v132);
  if ( v163 )
    sub_186B220(v163 - 1);
  if ( v37 )
  {
    v82 = (*(_DWORD *)(v37 + 8))-- == 1;
    if ( v82 )
      sub_15D7BC0(*(_QWORD *)v135, v37);
  }
  if ( v38 )
  {
    v99 = (unsigned __int64)&v38[*((unsigned int *)v38 - 1)];
    if ( (unsigned __int64)v38 < v99 )
    {
      v100 = v38;
      do
      {
        while ( 1 )
        {
          v101 = *v100;
          if ( *v100 )
          {
            v82 = (*(_DWORD *)(v101 + 8))-- == 1;
            if ( v82 )
              break;
          }
          if ( (unsigned __int64)++v100 >= v99 )
            goto LABEL_128;
        }
        sub_15D7BC0(*(_QWORD *)v135, v101);
        ++v100;
      }
      while ( (unsigned __int64)v100 < v99 );
    }
LABEL_128:
    sub_186B220(v38 - 1);
  }
  if ( v86 )
    sub_62A410(v157, v86);
  return ptra;
}

