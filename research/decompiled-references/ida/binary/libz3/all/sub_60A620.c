__int64 __fastcall sub_60A620(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r10
  __int64 v8; // r13
  int v9; // edi
  int v10; // r9d
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 *v15; // rsi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 *v24; // rcx
  __int64 v25; // rax
  unsigned int v26; // edx
  int v28; // r13d
  _QWORD *v30; // rdi
  unsigned int v31; // eax
  __int64 v32; // rdx
  int v33; // eax
  __int64 *v34; // rdx
  _QWORD *v35; // rdi
  unsigned int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  _QWORD *v39; // rdx
  unsigned __int8 v40; // dl
  __int64 v41; // rax
  int v42; // r12d
  int v43; // r14d
  _QWORD *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r12d
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // r13
  unsigned int v53; // ebx
  size_t v54; // rsi
  unsigned int *v55; // rax
  __int64 v56; // rdx
  unsigned __int8 v57; // dl
  __int64 v58; // rax
  unsigned int v59; // r15d
  size_t v60; // rsi
  char **exception; // rbx
  unsigned int *v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rdx
  unsigned int v65; // eax
  __int64 v66; // rcx
  int v67; // eax
  __int64 *v68; // rcx
  __int64 v69; // rax
  int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rbx
  _QWORD *v73; // rdx
  unsigned int v74; // eax
  __int64 v75; // rcx
  int v76; // eax
  __int64 *v77; // rcx
  _QWORD *v78; // rax
  _QWORD *v79; // rax
  _QWORD *v80; // rax
  __int64 v81; // r12
  _QWORD *v82; // rdx
  unsigned int v83; // eax
  __int64 v84; // rsi
  int v85; // eax
  _QWORD *v86; // rsi
  __int64 v87; // rax
  int v88; // edi
  unsigned int v89; // r10d
  _QWORD *v90; // r14
  __int64 v91; // r8
  unsigned int v92; // r9d
  _QWORD *v93; // r15
  int v94; // esi
  __int64 v95; // r9
  _QWORD *v96; // r10
  _QWORD *v97; // rax
  _QWORD *v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rax
  unsigned int v101; // r12d
  unsigned int v102; // ecx
  unsigned int *v103; // rax
  __int64 v104; // rcx
  unsigned int v105; // r12d
  unsigned int v106; // ecx
  unsigned int *v107; // rax
  __int64 v108; // rcx
  unsigned int v109; // r13d
  unsigned int v110; // ecx
  unsigned int *v111; // rax
  __int64 v112; // rsi
  unsigned int v113; // r13d
  unsigned int v114; // ecx
  unsigned int *v115; // rax
  __int64 v116; // rcx
  unsigned int v117; // r14d
  size_t v118; // rsi
  unsigned int *v119; // rax
  __int64 v120; // rsi
  __int64 v121; // r15
  _QWORD *v122; // rax
  int v123; // r10d
  char *v124; // rdi
  char *v125; // r11
  char *v126; // rax
  __int64 v127; // rdx
  _QWORD *v128; // rsi
  _QWORD *v129; // rdx
  _QWORD *v130; // rdx
  _QWORD *v131; // rdx
  _QWORD *v132; // rdx
  _QWORD *v133; // rax
  _QWORD *v134; // rdx
  char **v135; // r13
  char **v136; // r13
  char **v137; // r13
  __int64 v138; // [rsp+8h] [rbp-90h]
  size_t v139; // [rsp+10h] [rbp-88h]
  __int64 v140; // [rsp+10h] [rbp-88h]
  int v141; // [rsp+18h] [rbp-80h]
  unsigned int v142; // [rsp+18h] [rbp-80h]
  int v143; // [rsp+20h] [rbp-78h]
  __int64 v144[11]; // [rsp+40h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v30 = (_QWORD *)a1[7];
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 - 1);
      if ( v31 == *((_DWORD *)v30 - 2) )
      {
        v47 = (3 * v31 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v31 + 8 >= (unsigned int)v48 || v31 >= v47 )
          goto LABEL_64;
        v49 = (unsigned int *)sub_186B300(v30 - 1, v48);
        v50 = v49[1];
        v30 = v49 + 2;
        *v49 = v47;
        a1[7] = v49 + 2;
        LODWORD(v49) = v50;
        v34 = &v30[v50];
        v33 = (_DWORD)v49 + 1;
      }
      else
      {
        v32 = v31;
        v33 = v31 + 1;
        v34 = &v30[v32];
      }
    }
    else
    {
      v79 = (_QWORD *)sub_186B270(0x18u);
      v30 = v79 + 1;
      *v79 = 2;
      v33 = 1;
      a1[7] = v30;
      v34 = v30;
    }
    *v34 = a2;
    *((_DWORD *)v30 - 1) = v33;
    v35 = (_QWORD *)a1[11];
    if ( v35 )
    {
      v36 = *((_DWORD *)v35 - 1);
      if ( v36 == *((_DWORD *)v35 - 2) )
      {
        v53 = (3 * v36 + 1) >> 1;
        v54 = 8 * v53 + 8;
        if ( 8 * v36 + 8 >= (unsigned int)v54 || v36 >= v53 )
          goto LABEL_64;
        v55 = (unsigned int *)sub_186B300(v35 - 1, v54);
        v56 = v55[1];
        v35 = v55 + 2;
        *v55 = v53;
        a1[11] = v55 + 2;
        LODWORD(v55) = v56;
        v39 = &v35[v56];
        v38 = (_DWORD)v55 + 1;
      }
      else
      {
        v37 = v36;
        v38 = v36 + 1;
        v39 = &v35[v37];
      }
    }
    else
    {
      v78 = (_QWORD *)sub_186B270(0x18u);
      v35 = v78 + 1;
      *v78 = 2;
      v38 = 1;
      a1[11] = v35;
      v39 = v35;
    }
    *v39 = 0;
    *((_DWORD *)v35 - 1) = v38;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v28 = 0;
    goto LABEL_22;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
LABEL_25:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_46;
    }
    goto LABEL_50;
  }
  if ( *(_DWORD *)(a2 + 24) )
  {
LABEL_50:
    v51 = sub_1680FB0(a1[4], a2, 0);
    v52 = v51;
    if ( v51 )
    {
      v64 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v51 + 8);
      if ( v64 )
      {
        v65 = *((_DWORD *)v64 - 1);
        if ( v65 == *((_DWORD *)v64 - 2) )
        {
          v101 = (3 * v65 + 1) >> 1;
          v102 = 8 * v101 + 8;
          if ( 8 * v65 + 8 >= v102 || v65 >= v101 )
            goto LABEL_64;
          v103 = (unsigned int *)sub_186B300(v64 - 1, v102);
          v104 = v103[1];
          v64 = v103 + 2;
          *v103 = v101;
          a1[7] = v103 + 2;
          LODWORD(v103) = v104;
          v68 = &v64[v104];
          v67 = (_DWORD)v103 + 1;
        }
        else
        {
          v66 = v65;
          v67 = v65 + 1;
          v68 = &v64[v66];
        }
      }
      else
      {
        v130 = (_QWORD *)sub_186B270(0x18u);
        *v130 = 2;
        v67 = 1;
        v64 = v130 + 1;
        a1[7] = v64;
        v68 = v64;
      }
      *v68 = v52;
      *((_DWORD *)v64 - 1) = v67;
      if ( a2 != v52 )
      {
        v69 = a1[5];
        if ( v69 )
        {
          v70 = *(_DWORD *)(v69 - 4);
          if ( v70 )
            *(_BYTE *)(v69 + 16LL * (unsigned int)(v70 - 1) + 8) |= 2u;
        }
      }
      v71 = sub_1680FB0(a1[9], a2, 0);
      v72 = v71;
      if ( v71 )
        ++*(_DWORD *)(v71 + 8);
      v73 = (_QWORD *)a1[11];
      if ( v73 )
      {
        v74 = *((_DWORD *)v73 - 1);
        if ( v74 == *((_DWORD *)v73 - 2) )
        {
          v105 = (3 * v74 + 1) >> 1;
          v106 = 8 * v105 + 8;
          if ( 8 * v74 + 8 >= v106 || v74 >= v105 )
            goto LABEL_64;
          v107 = (unsigned int *)sub_186B300(v73 - 1, v106);
          v108 = v107[1];
          v73 = v107 + 2;
          *v107 = v105;
          a1[11] = v107 + 2;
          LODWORD(v107) = v108;
          v77 = &v73[v108];
          v76 = (_DWORD)v107 + 1;
        }
        else
        {
          v75 = v74;
          v76 = v74 + 1;
          v77 = &v73[v75];
        }
      }
      else
      {
        v131 = (_QWORD *)sub_186B270(0x18u);
        *v131 = 2;
        v76 = 1;
        v73 = v131 + 1;
        a1[11] = v73;
        v77 = v73;
      }
      *v77 = v72;
      *((_DWORD *)v73 - 1) = v76;
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v28 = 1;
LABEL_22:
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
      {
        if ( v5 )
          goto LABEL_25;
        if ( !*(_DWORD *)(a2 + 24) )
          goto LABEL_6;
        v57 = 3;
        if ( a3 != 3 )
          v57 = (a3 - 1) & 3;
        v58 = a1[7];
        v42 = v57;
        if ( v58 )
          v43 = *(_DWORD *)(v58 - 4);
        else
          v43 = 0;
        v44 = (_QWORD *)a1[5];
        if ( v44 )
        {
          v45 = *((unsigned int *)v44 - 1);
          if ( (_DWORD)v45 == *((_DWORD *)v44 - 2) )
          {
            v59 = (unsigned int)(3 * v45 + 1) >> 1;
            v60 = 16 * v59 + 8;
            if ( 16 * (int)v45 + 8 >= (unsigned int)v60 || (unsigned int)v45 >= v59 )
              goto LABEL_64;
            goto LABEL_67;
          }
LABEL_42:
          v46 = (__int64)&v44[2 * v45];
LABEL_43:
          *(_QWORD *)v46 = a2;
          *(_DWORD *)(v46 + 12) = v43;
          *(_DWORD *)(v46 + 8) = v28 | (16 * v42);
          ++*((_DWORD *)v44 - 1);
          return 0;
        }
LABEL_93:
        v80 = (_QWORD *)sub_186B270(0x28u);
        v44 = v80 + 1;
        *v80 = 2;
        a1[5] = v80 + 1;
        v46 = (__int64)(v80 + 1);
        goto LABEL_43;
      }
      v40 = 3;
      if ( a3 != 3 )
        v40 = (a3 - 1) & 3;
      v41 = a1[7];
      v42 = v40;
      if ( v41 )
        v43 = *(_DWORD *)(v41 - 4);
      else
        v43 = 0;
      v44 = (_QWORD *)a1[5];
      if ( !v44 )
        goto LABEL_93;
      v45 = *((unsigned int *)v44 - 1);
      if ( (_DWORD)v45 != *((_DWORD *)v44 - 2) )
        goto LABEL_42;
      v59 = (unsigned int)(3 * v45 + 1) >> 1;
      v60 = 16 * v59 + 8;
      if ( 16 * (int)v45 + 8 < (unsigned int)v60 && (unsigned int)v45 < v59 )
      {
LABEL_67:
        v62 = (unsigned int *)sub_186B300(v44 - 1, v60);
        v44 = v62 + 2;
        a1[5] = v62 + 2;
        *v62 = v59;
        v46 = (__int64)&v62[4 * v62[1] + 2];
        goto LABEL_43;
      }
LABEL_64:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v144, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v144);
      sub_233E40((__int64)v144);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
LABEL_46:
    sub_609FF0(a1, a2);
    return 1;
  }
LABEL_6:
  v7 = a1[18];
  v8 = *(_QWORD *)(a2 + 16);
  v138 = a1[1];
  v9 = *(_DWORD *)(v8 + 12);
  v10 = *(_DWORD *)(a2 + 8) + 1;
  v11 = *(_QWORD *)(v7 + 120);
  *(_DWORD *)(a2 + 8) = v10;
  v12 = *(__int64 **)(v11 + 152);
  v13 = *(unsigned int *)(v11 + 160);
  v14 = v13 - 1;
  v13 *= 8;
  v15 = (__int64 *)((char *)v12 + v13);
  v16 = 8LL * (v9 & v14);
  v17 = &v12[(unsigned __int64)v16 / 8];
  if ( v16 == v13 )
  {
LABEL_68:
    if ( v12 == v17 )
      goto LABEL_13;
    while ( 1 )
    {
      v63 = *v12;
      if ( (unsigned __int64)*v12 > 1 )
      {
        if ( *(_DWORD *)(v63 + 12) == v9 && v8 == v63 )
          goto LABEL_94;
      }
      else if ( !v63 )
      {
        goto LABEL_13;
      }
      if ( v17 == ++v12 )
        goto LABEL_13;
    }
  }
  v18 = &v12[(unsigned __int64)v16 / 8];
  while ( 1 )
  {
    v19 = *v18;
    if ( (unsigned __int64)*v18 <= 1 )
    {
      if ( !v19 )
        goto LABEL_13;
      goto LABEL_10;
    }
    if ( *(_DWORD *)(v19 + 12) == v9 && v8 == v19 )
      break;
LABEL_10:
    if ( v15 == ++v18 )
      goto LABEL_68;
  }
LABEL_94:
  v81 = *(_QWORD *)(v7 + 128);
  ++*(_DWORD *)(v8 + 8);
  v82 = *(_QWORD **)(v81 + 232);
  if ( v82 )
  {
    v83 = *((_DWORD *)v82 - 1);
    if ( v83 == *((_DWORD *)v82 - 2) )
    {
      v117 = (3 * v83 + 1) >> 1;
      v118 = 8 * v117 + 8;
      if ( 8 * v83 + 8 >= (unsigned int)v118 || v83 >= v117 )
      {
        v136 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v144, "Overflow encountered when expanding vector");
        *v136 = (char *)off_1C63128;
        sub_2333C0(v136 + 1, v144);
        sub_233E40((__int64)v144);
        __cxa_throw(v136, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v119 = (unsigned int *)sub_186B300(v82 - 1, v118);
      v120 = v119[1];
      v82 = v119 + 2;
      *(_QWORD *)(v81 + 232) = v119 + 2;
      *v119 = v117;
      LODWORD(v119) = v120;
      v86 = &v82[v120];
      v85 = (_DWORD)v119 + 1;
    }
    else
    {
      v84 = v83;
      v85 = v83 + 1;
      v86 = &v82[v84];
    }
  }
  else
  {
    v134 = (_QWORD *)sub_186B270(0x18u);
    *v134 = 2;
    v85 = 1;
    v82 = v134 + 1;
    *(_QWORD *)(v81 + 232) = v82;
    v86 = v82;
  }
  *v86 = v8;
  *((_DWORD *)v82 - 1) = v85;
  v87 = *(unsigned int *)(v81 + 160);
  v88 = *(_DWORD *)(v81 + 168);
  v89 = 2 * v87;
  if ( 3 * (int)v87 < (unsigned int)(4 * (v88 + *(_DWORD *)(v81 + 164))) )
  {
    v121 = v89;
    v141 = 2 * v87;
    v139 = 8LL * v89;
    v122 = (_QWORD *)sub_186B270(v139);
    v123 = v141;
    v91 = v139;
    v90 = v122;
    if ( v141 )
    {
      memset(v122, 0, 8 * v121);
      v91 = v139;
      v123 = v141;
    }
    v124 = *(char **)(v81 + 152);
    v92 = v123 - 1;
    v93 = (_QWORD *)((char *)v90 + v91);
    v125 = &v124[8 * *(unsigned int *)(v81 + 160)];
    v126 = v124;
    if ( v124 != v125 )
    {
      do
      {
        if ( *(_QWORD *)v126 > 1u )
        {
          v127 = 8LL * (*(_DWORD *)(*(_QWORD *)v126 + 12LL) & v92);
          v128 = &v90[(unsigned __int64)v127 / 8];
          if ( v91 == v127 )
          {
LABEL_141:
            if ( v90 == v128 )
            {
LABEL_153:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v129 = v90;
            while ( *v129 )
            {
              if ( v128 == ++v129 )
                goto LABEL_153;
            }
          }
          else
          {
            v129 = &v90[(unsigned __int64)v127 / 8];
            while ( *v129 )
            {
              if ( v93 == ++v129 )
                goto LABEL_141;
            }
          }
          *v129 = *(_QWORD *)v126;
        }
        v126 += 8;
      }
      while ( v125 != v126 );
      v124 = *(char **)(v81 + 152);
    }
    if ( v124 )
    {
      v143 = v123;
      v142 = v123 - 1;
      v140 = v91;
      sub_186B220(v124);
      v123 = v143;
      v92 = v142;
      v91 = v140;
    }
    *(_QWORD *)(v81 + 152) = v90;
    v88 = 0;
    *(_DWORD *)(v81 + 160) = v123;
    *(_DWORD *)(v81 + 168) = 0;
  }
  else
  {
    v90 = *(_QWORD **)(v81 + 152);
    v91 = 8 * v87;
    v92 = v87 - 1;
    v93 = &v90[v87];
  }
  v94 = *(_DWORD *)(v8 + 12);
  v95 = 8LL * (v94 & v92);
  v96 = &v90[(unsigned __int64)v95 / 8];
  if ( v95 != v91 )
  {
    v97 = &v90[(unsigned __int64)v95 / 8];
    v98 = nullptr;
    while ( 1 )
    {
      v99 = *v97;
      if ( *v97 > 1u )
      {
        if ( *(_DWORD *)(v99 + 12) == v94 && v8 == v99 )
        {
          *v97 = v8;
          v10 = *(_DWORD *)(a2 + 8);
          goto LABEL_13;
        }
      }
      else
      {
        if ( !v99 )
        {
          if ( v98 )
            goto LABEL_151;
          v98 = v97;
          goto LABEL_152;
        }
        v98 = v97;
      }
      if ( ++v97 == v93 )
        goto LABEL_110;
    }
  }
  v98 = nullptr;
LABEL_110:
  while ( 2 )
  {
    if ( v96 == v90 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v100 = *v90;
    if ( *v90 > 1u )
    {
      if ( *(_DWORD *)(v100 + 12) == v94 && v8 == v100 )
      {
        *v90 = v8;
        v10 = *(_DWORD *)(a2 + 8);
        goto LABEL_13;
      }
      goto LABEL_109;
    }
    if ( v100 )
    {
      v98 = v90;
LABEL_109:
      ++v90;
      continue;
    }
    break;
  }
  if ( v98 )
LABEL_151:
    *(_DWORD *)(v81 + 168) = v88 - 1;
  else
    v98 = v90;
LABEL_152:
  *v98 = v8;
  v10 = *(_DWORD *)(a2 + 8);
  ++*(_DWORD *)(v81 + 164);
LABEL_13:
  v20 = (_QWORD *)a1[7];
  *(_DWORD *)(a2 + 8) = v10 + 1;
  if ( v20 )
  {
    v21 = *((_DWORD *)v20 - 1);
    if ( v21 == *((_DWORD *)v20 - 2) )
    {
      v113 = (3 * v21 + 1) >> 1;
      v114 = 8 * v113 + 8;
      if ( 8 * v21 + 8 >= v114 || v21 >= v113 )
      {
        v137 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v144, "Overflow encountered when expanding vector");
        *v137 = (char *)off_1C63128;
        sub_2333C0(v137 + 1, v144);
        sub_233E40((__int64)v144);
        __cxa_throw(v137, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v115 = (unsigned int *)sub_186B300(v20 - 1, v114);
      v116 = v115[1];
      v20 = v115 + 2;
      *v115 = v113;
      a1[7] = v115 + 2;
      LODWORD(v115) = v116;
      v24 = &v20[v116];
      v23 = (_DWORD)v115 + 1;
    }
    else
    {
      v22 = v21;
      v23 = v21 + 1;
      v24 = &v20[v22];
    }
  }
  else
  {
    v132 = (_QWORD *)sub_186B270(0x18u);
    *v132 = 2;
    v23 = 1;
    v20 = v132 + 1;
    a1[7] = v20;
    v24 = v20;
  }
  *v24 = a2;
  *((_DWORD *)v20 - 1) = v23;
  v25 = a1[11];
  if ( v25 )
  {
    v26 = *(_DWORD *)(v25 - 4);
    if ( v26 == *(_DWORD *)(v25 - 8) )
    {
      v109 = (3 * v26 + 1) >> 1;
      v110 = 8 * v109 + 8;
      if ( 8 * v26 + 8 >= v110 || v26 >= v109 )
      {
        v135 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v144, "Overflow encountered when expanding vector");
        *v135 = (char *)off_1C63128;
        sub_2333C0(v135 + 1, v144);
        sub_233E40((__int64)v144);
        __cxa_throw(v135, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v111 = (unsigned int *)sub_186B300((void *)(v25 - 8), v110);
      v112 = v111[1];
      *v111 = v109;
      a1[11] = v111 + 2;
      *(_QWORD *)&v111[2 * v112 + 2] = 0;
      v111[1] = v112 + 1;
    }
    else
    {
      *(_QWORD *)(v25 + 8LL * v26) = 0;
      *(_DWORD *)(v25 - 4) = v26 + 1;
    }
  }
  else
  {
    v133 = (_QWORD *)sub_186B270(0x18u);
    v133[1] = 0;
    a1[11] = v133 + 1;
    *v133 = 0x100000002LL;
  }
  if ( (*(_DWORD *)(a2 + 8))-- == 1 )
    sub_15D7BC0(v138, a2);
  return 1;
}

