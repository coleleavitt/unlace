__int64 *__fastcall sub_5E23F0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  char **v5; // r15
  char **v6; // r15
  char **exception; // r14
  char **v8; // r15
  char **v9; // r15
  char **v10; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r10
  __int64 v19; // r9
  int v20; // edi
  unsigned int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rax
  int v26; // edx
  unsigned int v27; // edx
  __int64 v28; // r15
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  int v31; // eax
  _QWORD *v32; // rdx
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // rdx
  int v36; // eax
  unsigned int v37; // ecx
  size_t v38; // rsi
  _DWORD *v39; // rax
  __int64 v40; // rdx
  int v41; // edx
  __int64 v42; // rax
  unsigned int v43; // r13d
  __int64 v44; // r15
  _QWORD *v45; // rax
  int v46; // esi
  bool v47; // dl
  bool *v48; // rax
  __int64 v49; // r15
  unsigned __int64 v50; // rdi
  bool *v51; // r13
  unsigned __int64 v52; // r8
  unsigned int v53; // eax
  _QWORD *v54; // rsi
  int v55; // edx
  __int64 v56; // rax
  unsigned int v57; // esi
  unsigned int v58; // eax
  unsigned int *v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r15
  __int64 v62; // rsi
  _DWORD *v63; // rdi
  __int64 *v64; // r12
  unsigned __int64 v65; // r15
  __int64 v66; // rsi
  unsigned int v69; // r8d
  unsigned int *v70; // rax
  __int64 v71; // rax
  int v72; // esi
  unsigned int v73; // edx
  size_t v74; // rsi
  unsigned int *v75; // rax
  __int64 v76; // rdx
  unsigned int v77; // edx
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rdx
  unsigned int v81; // r13d
  __int64 v82; // r15
  _QWORD *v83; // rax
  bool *v84; // rdx
  unsigned __int64 v85; // rsi
  bool v86; // r8
  __int64 v87; // r15
  int i; // eax
  unsigned __int64 v89; // r8
  int v90; // eax
  unsigned int v91; // edi
  _QWORD *v92; // rsi
  __int64 v93; // rax
  unsigned int v94; // edx
  int v95; // eax
  unsigned int v96; // eax
  _QWORD *v97; // rsi
  __int64 v98; // rax
  unsigned int v99; // r9d
  size_t v100; // rsi
  unsigned int *v101; // rax
  __int64 v102; // rdx
  unsigned int v103; // edx
  size_t v104; // rsi
  unsigned int *v105; // rax
  __int64 v106; // rdx
  unsigned int v107; // edx
  size_t v108; // rsi
  unsigned int *v109; // rax
  __int64 v110; // rdx
  unsigned int v111; // eax
  unsigned int v112; // eax
  unsigned int v113; // r15d
  unsigned int v114; // edx
  unsigned int *v115; // rax
  __int64 v116; // rcx
  unsigned int v117; // r15d
  unsigned int *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  _QWORD *v121; // rax
  int v122; // [rsp+0h] [rbp-C0h]
  int v123; // [rsp+8h] [rbp-B8h]
  int v124; // [rsp+10h] [rbp-B0h]
  __int64 v125; // [rsp+10h] [rbp-B0h]
  int v126; // [rsp+18h] [rbp-A8h]
  __int64 v127; // [rsp+18h] [rbp-A8h]
  int v128[2]; // [rsp+20h] [rbp-A0h]
  int v129[2]; // [rsp+20h] [rbp-A0h]
  int v130[2]; // [rsp+28h] [rbp-98h]
  bool v131; // [rsp+28h] [rbp-98h]
  unsigned int v132; // [rsp+28h] [rbp-98h]
  bool v133; // [rsp+28h] [rbp-98h]
  unsigned __int64 v134; // [rsp+28h] [rbp-98h]
  __int64 v135; // [rsp+30h] [rbp-90h]
  unsigned int v136; // [rsp+30h] [rbp-90h]
  unsigned int v137; // [rsp+30h] [rbp-90h]
  unsigned int v138; // [rsp+30h] [rbp-90h]
  __int64 v139; // [rsp+38h] [rbp-88h]
  __int64 v140; // [rsp+38h] [rbp-88h]
  int v141; // [rsp+40h] [rbp-80h]
  __int64 *v142; // [rsp+40h] [rbp-80h]
  void *v143; // [rsp+48h] [rbp-78h]
  __int64 v144; // [rsp+48h] [rbp-78h]
  __int64 v145; // [rsp+48h] [rbp-78h]
  __int64 v147; // [rsp+58h] [rbp-68h]
  __int64 v148; // [rsp+58h] [rbp-68h]
  _DWORD *v149; // [rsp+58h] [rbp-68h]
  int v150; // [rsp+58h] [rbp-68h]
  __int64 v151[10]; // [rsp+70h] [rbp-50h] BYREF

  v14 = *(_QWORD *)(a2 + 24);
  v141 = (int)a1;
  *a1 = 0;
  a1[1] = v14 + 656;
  v15 = a4;
  v16 = *(_QWORD *)(a2 + 120);
  v126 = v15;
  v147 = *(_QWORD *)(a3 + 8 * v15 + 80);
  v17 = *(unsigned int *)(a2 + 128);
  v18 = v147 & 0xFFFFFFFFFFFFFFF8LL;
  v19 = *(_QWORD *)((v147 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v20 = (((a5 - v19) ^ ((_DWORD)v19 << 8) ^ (((_DWORD)v19 - ((a5 - (_DWORD)v19) ^ ((_DWORD)v19 << 8))) << 16))
       + ((a5 - v19) ^ ((_DWORD)v19 << 8))
       - v19)
      ^ (((_DWORD)v19 - ((a5 - (_DWORD)v19) ^ ((_DWORD)v19 << 8))) << 10);
  v21 = v17 - 1;
  v17 *= 32;
  v22 = v16 + v17;
  v23 = 32LL * (v20 & v21);
  v24 = v16 + v23;
  if ( v23 == v17 )
  {
LABEL_19:
    while ( v24 != v16 )
    {
      v36 = *(_DWORD *)(v16 + 4);
      if ( v36 == 2 )
      {
        if ( v20 == *(_DWORD *)v16 && v19 == *(_QWORD *)(v16 + 8) && a5 == *(_DWORD *)(v16 + 16) )
        {
          v25 = v16;
          goto LABEL_9;
        }
      }
      else if ( !v36 )
      {
        break;
      }
      v16 += 32;
    }
LABEL_138:
    BUG();
  }
  v25 = v16 + v23;
  while ( 1 )
  {
    v26 = *(_DWORD *)(v25 + 4);
    if ( v26 != 2 )
    {
      if ( !v26 )
        goto LABEL_138;
      goto LABEL_4;
    }
    if ( v20 == *(_DWORD *)v25 && v19 == *(_QWORD *)(v25 + 8) && a5 == *(_DWORD *)(v25 + 16) )
      break;
LABEL_4:
    v25 += 32;
    if ( v22 == v25 )
      goto LABEL_19;
  }
LABEL_9:
  v27 = *(_DWORD *)(v18 + 24);
  *(_QWORD *)v130 = *(_QWORD *)(v25 + 24);
  if ( v27 )
  {
    v148 = 0;
    v28 = v27;
    v29 = nullptr;
    do
    {
      if ( a5 != (_DWORD)v148 )
      {
        v19 = *(_QWORD *)(v18 + 8 * v148 + 32);
        if ( !v29 )
        {
          v139 = *(_QWORD *)(v18 + 8 * v148 + 32);
          v143 = (void *)v18;
          v30 = (_QWORD *)sub_186B270(0x18u);
          v18 = (unsigned __int64)v143;
          v19 = v139;
          *v30 = 2;
          v29 = v30 + 1;
          v31 = 1;
          v32 = v29;
          goto LABEL_14;
        }
        while ( 1 )
        {
          v34 = *((_DWORD *)v29 - 1);
          if ( v34 == *((_DWORD *)v29 - 2) )
          {
            v37 = (3 * v34 + 1) >> 1;
            v38 = 8 * v37 + 8;
            if ( 8 * v34 + 8 >= (unsigned int)v38 || v34 >= v37 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v151, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v151);
              sub_233E40((__int64)v151);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v135 = v19;
            LODWORD(v139) = (3 * v34 + 1) >> 1;
            v143 = (void *)v18;
            v39 = (_DWORD *)sub_186B300(v29 - 1, v38);
            v40 = (unsigned int)v39[1];
            v29 = v39 + 2;
            v18 = (unsigned __int64)v143;
            v19 = v135;
            *v39 = v139;
            LODWORD(v39) = v40;
            v32 = &v29[v40];
            v31 = (_DWORD)v39 + 1;
          }
          else
          {
            v35 = v34;
            v31 = v34 + 1;
            v32 = &v29[v35];
          }
LABEL_14:
          *v32 = v19;
          *((_DWORD *)v29 - 1) = v31;
          v33 = v148 + 1;
          if ( v148 + 1 == v28 )
            break;
          if ( a5 == (_DWORD)v33 )
          {
            v148 += 2;
            if ( v148 == v28 )
              goto LABEL_35;
            if ( a5 == (_DWORD)v148 )
              goto LABEL_34;
            v19 = *(_QWORD *)(v18 + 8 * v148 + 32);
          }
          else
          {
            ++v148;
            v19 = *(_QWORD *)(v18 + 8 * v33 + 32);
          }
        }
        *(_QWORD *)v128 = *(_QWORD *)(a2 + 32);
        goto LABEL_36;
      }
LABEL_34:
      ++v148;
    }
    while ( v148 != v28 );
LABEL_35:
    v41 = 0;
    *(_QWORD *)v128 = *(_QWORD *)(a2 + 32);
    if ( !v29 )
      goto LABEL_37;
LABEL_36:
    v41 = *((_DWORD *)v29 - 1);
LABEL_37:
    v42 = sub_15DC610(
            v128[0],
            v130[0],
            v41,
            (int)v29,
            v24,
            v19,
            v122,
            v123,
            v124,
            v126,
            v128[0],
            v130[0],
            v135,
            v139,
            v141,
            v143);
  }
  else
  {
    v29 = nullptr;
    v42 = sub_15DC610(
            *(_QWORD *)(a2 + 32),
            v130[0],
            0,
            0,
            v24,
            v19,
            v122,
            v123,
            v124,
            v126,
            *(_QWORD *)(a2 + 32),
            v130[0],
            v135,
            v139,
            v141,
            v143);
  }
  v140 = v42;
  if ( !v42 )
  {
    v81 = *(_DWORD *)(a3 + 56);
    v125 = *(_QWORD *)(a2 + 32);
    if ( v81 )
    {
      v82 = *(_QWORD *)(a3 + 80);
      v83 = (_QWORD *)sub_186B270(0xAu);
      v84 = (bool *)(v83 + 1);
      v85 = *(_QWORD *)(a3 + 80);
      v145 = v81;
      v51 = (bool *)(v83 + 1);
      v149 = nullptr;
      v86 = (v82 & 7) == 1;
      v87 = 0;
      *v83 = 2;
      for ( i = 1; ; i = (_DWORD)v101 + 1 )
      {
        *v84 = v86;
        *((_DWORD *)v51 - 1) = i;
        if ( a4 != (_DWORD)v87 )
          break;
        while ( 1 )
        {
          if ( (v85 & 7) == 1 )
            goto LABEL_92;
          if ( v149 )
          {
            v96 = *(v149 - 1);
            if ( v96 == *(v149 - 2) )
            {
              v107 = (3 * v96 + 1) >> 1;
              v108 = 8 * v107 + 8;
              if ( 8 * v96 + 8 >= (unsigned int)v108 || (v138 = (3 * v96 + 1) >> 1, v96 >= v107) )
              {
LABEL_142:
                v10 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v151, "Overflow encountered when expanding vector");
                *v10 = (char *)off_1C63128;
                sub_2333C0(v10 + 1, v151);
                sub_233E40((__int64)v151);
                __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v109 = (unsigned int *)sub_186B300(v149 - 2, v108);
              v149 = v109 + 2;
              *v109 = v138;
              v110 = v109[1];
              v98 = (__int64)(v109 + 2);
              v97 = (_QWORD *)(v98 + 8 * v110);
              v55 = v110 + 1;
            }
            else
            {
              v97 = &v149[2 * v96];
              v55 = v96 + 1;
              v98 = (__int64)v149;
            }
          }
          else
          {
            v98 = sub_186B270(0x18u) + 8;
            v55 = 1;
            *(_QWORD *)(v98 - 8) = 2;
            v97 = (_QWORD *)v98;
            v149 = (_DWORD *)v98;
          }
          *v97 = 0;
          *(_DWORD *)(v98 - 4) = v55;
LABEL_98:
          if ( ++v87 == v145 )
            goto LABEL_55;
          v85 = *(_QWORD *)(a3 + 8 * v87 + 80);
          v94 = *((_DWORD *)v51 - 2);
          v95 = *((_DWORD *)v51 - 1);
          if ( v94 == v95 )
            break;
          v51[v95] = (*(_QWORD *)(a3 + 8 * v87 + 80) & 7LL) == 1;
          *((_DWORD *)v51 - 1) = v95 + 1;
          if ( a4 != (_DWORD)v87 )
            goto LABEL_92;
        }
        v133 = (*(_QWORD *)(a3 + 8 * v87 + 80) & 7LL) == 1;
        v99 = (3 * v94 + 1) >> 1;
        v100 = v99 + 8;
        if ( v94 + 8 >= (unsigned int)v100 || (v137 = (3 * v94 + 1) >> 1, v94 >= v99) )
        {
LABEL_141:
          v9 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v151, "Overflow encountered when expanding vector");
          *v9 = (char *)off_1C63128;
          sub_2333C0(v9 + 1, v151);
          sub_233E40((__int64)v151);
          __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v101 = (unsigned int *)sub_186B300(v51 - 8, v100);
        v102 = v101[1];
        v51 = (bool *)(v101 + 2);
        v85 = *(_QWORD *)(a3 + 8 * v87 + 80);
        v86 = v133;
        *v101 = v137;
        LODWORD(v101) = v102;
        v84 = &v51[v102];
      }
LABEL_92:
      v89 = v85 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v85 > 7 )
        ++*(_DWORD *)(v89 + 8);
      if ( v149 )
      {
        v90 = *(v149 - 1);
        v91 = *(v149 - 2);
        if ( v91 == v90 )
        {
          v134 = v85 & 0xFFFFFFFFFFFFFFF8LL;
          v103 = (3 * v91 + 1) >> 1;
          v104 = 8 * v103 + 8;
          if ( 8 * v91 + 8 >= (unsigned int)v104 || v91 >= v103 )
            goto LABEL_140;
          v105 = (unsigned int *)sub_186B300(v149 - 2, v104);
          v89 = v134;
          v149 = v105 + 2;
          *v105 = (3 * v91 + 1) >> 1;
          v106 = v105[1];
          v93 = (__int64)(v105 + 2);
          v92 = (_QWORD *)(v93 + 8 * v106);
          v55 = v106 + 1;
        }
        else
        {
          v92 = &v149[2 * v90];
          v55 = v90 + 1;
          v93 = (__int64)v149;
        }
      }
      else
      {
        v93 = sub_186B270(0x18u) + 8;
        v55 = 1;
        v89 = v85 & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)(v93 - 8) = 2;
        v92 = (_QWORD *)v93;
        v149 = (_DWORD *)v93;
      }
      *v92 = v89;
      *(_DWORD *)(v93 - 4) = v55;
      goto LABEL_98;
    }
    goto LABEL_122;
  }
  ++*(_DWORD *)(v42 + 8);
  v43 = *(_DWORD *)(a3 + 56);
  v125 = *(_QWORD *)(a2 + 32);
  if ( !v43 )
  {
LABEL_122:
    if ( (*(_QWORD *)(a3 + 8 * v127 + 80) & 7LL) == 1 )
    {
      v120 = sub_186B270(0xAu);
      *(_BYTE *)(v120 + 8) = 1;
      v51 = (bool *)(v120 + 8);
      *(_QWORD *)v120 = 0x100000002LL;
      if ( v140 )
        ++*(_DWORD *)(v140 + 8);
      v121 = (_QWORD *)sub_186B270(0x18u);
      *v121 = 0x100000002LL;
      v149 = v121 + 1;
      v121[1] = v140;
      v60 = sub_62C680(
              *(_DWORD *)(a2 + 24) + 656,
              *(_QWORD *)(a3 + 40),
              1,
              (int)v121 + 8,
              (_DWORD)v51,
              (unsigned int)&qword_18D6CD0,
              1);
    }
    else
    {
      v149 = nullptr;
      v51 = nullptr;
      v60 = sub_62C680(
              (unsigned int)*(_QWORD *)(a2 + 24) + 656,
              *(_QWORD *)(a3 + 40),
              0,
              0,
              0,
              (unsigned int)&qword_18D6CD0,
              1);
    }
    goto LABEL_57;
  }
  v44 = *(_QWORD *)(a3 + 80);
  v45 = (_QWORD *)sub_186B270(0xAu);
  v149 = nullptr;
  v144 = v43;
  v46 = 1;
  *v45 = 2;
  v47 = (v44 & 7) == 1;
  v48 = (bool *)(v45 + 1);
  v49 = 0;
  v50 = *(_QWORD *)(a3 + 80);
  v51 = v48;
  while ( 1 )
  {
    *v48 = v47;
    *((_DWORD *)v51 - 1) = v46;
    if ( a4 != (_DWORD)v49 )
      break;
    while ( 1 )
    {
      if ( (v50 & 7) == 1 )
        goto LABEL_42;
      ++*(_DWORD *)(v140 + 8);
      if ( v149 )
      {
        v58 = *(v149 - 1);
        if ( v58 == *(v149 - 2) )
        {
          v77 = (3 * v58 + 1) >> 1;
          v78 = 8 * v77 + 8;
          if ( 8 * v58 + 8 >= (unsigned int)v78 || v58 >= v77 )
            goto LABEL_142;
          v136 = (3 * v58 + 1) >> 1;
          v79 = (unsigned int *)sub_186B300(v149 - 2, v78);
          v149 = v79 + 2;
          *v79 = v136;
          v80 = v79[1];
          v59 = &v79[2 * v80 + 2];
          v55 = v80 + 1;
        }
        else
        {
          v59 = &v149[2 * v58];
          v55 = v58 + 1;
        }
      }
      else
      {
        v119 = sub_186B270(0x18u) + 8;
        v55 = 1;
        *(_QWORD *)(v119 - 8) = 2;
        v59 = (unsigned int *)v119;
        v149 = (_DWORD *)v119;
      }
      ++v49;
      *(_QWORD *)v59 = v140;
      *(v149 - 1) = v55;
      if ( v144 == v49 )
        goto LABEL_55;
LABEL_48:
      v50 = *(_QWORD *)(a3 + 8 * v49 + 80);
      v57 = *((_DWORD *)v51 - 1);
      if ( v57 == *((_DWORD *)v51 - 2) )
        break;
      v51[v57] = (*(_QWORD *)(a3 + 8 * v49 + 80) & 7LL) == 1;
      *((_DWORD *)v51 - 1) = v57 + 1;
      if ( a4 != (_DWORD)v49 )
        goto LABEL_42;
    }
    v69 = (3 * v57 + 1) >> 1;
    if ( v57 + 8 >= v69 + 8 || v57 >= v69 )
      goto LABEL_141;
    v131 = (*(_QWORD *)(a3 + 8 * v49 + 80) & 7LL) == 1;
    v70 = (unsigned int *)sub_186B300(v51 - 8, v69 + 8);
    v51 = (bool *)(v70 + 2);
    v50 = *(_QWORD *)(a3 + 8 * v49 + 80);
    v47 = v131;
    *v70 = (3 * v57 + 1) >> 1;
    v71 = v70[1];
    v72 = v71;
    v48 = &v51[v71];
    v46 = v72 + 1;
  }
LABEL_42:
  v52 = v50 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v50 > 7 )
    ++*(_DWORD *)(v52 + 8);
  if ( v149 )
  {
    v53 = *(v149 - 1);
    if ( v53 != *(v149 - 2) )
    {
      v54 = &v149[2 * v53];
      v55 = v53 + 1;
      v56 = (__int64)v149;
      goto LABEL_47;
    }
    v73 = (3 * v53 + 1) >> 1;
    v74 = 8 * v73 + 8;
    if ( 8 * v53 + 8 < (unsigned int)v74 && v53 < v73 )
    {
      v132 = (3 * v53 + 1) >> 1;
      v75 = (unsigned int *)sub_186B300(v149 - 2, v74);
      v52 = v50 & 0xFFFFFFFFFFFFFFF8LL;
      v149 = v75 + 2;
      *v75 = v132;
      v76 = v75[1];
      v56 = (__int64)(v75 + 2);
      v54 = (_QWORD *)(v56 + 8 * v76);
      v55 = v76 + 1;
      goto LABEL_47;
    }
LABEL_140:
    v8 = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v151, "Overflow encountered when expanding vector");
    *v8 = (char *)off_1C63128;
    sub_2333C0(v8 + 1, v151);
    sub_233E40((__int64)v151);
    __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v56 = sub_186B270(0x18u) + 8;
  v55 = 1;
  v52 = v50 & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(v56 - 8) = 2;
  v54 = (_QWORD *)v56;
  v149 = (_DWORD *)v56;
LABEL_47:
  *v54 = v52;
  ++v49;
  *(_DWORD *)(v56 - 4) = v55;
  if ( v144 != v49 )
    goto LABEL_48;
LABEL_55:
  if ( (*(_QWORD *)(a3 + 8 * v127 + 80) & 7LL) == 1 )
  {
    v111 = *((_DWORD *)v51 - 1);
    if ( v111 == *((_DWORD *)v51 - 2) )
    {
      v117 = (3 * v111 + 1) >> 1;
      if ( v111 + 8 >= v117 + 8 || v111 >= v117 )
      {
        v5 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v151, "Overflow encountered when expanding vector");
        *v5 = (char *)off_1C63128;
        sub_2333C0(v5 + 1, v151);
        sub_233E40((__int64)v151);
        __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v118 = (unsigned int *)sub_186B300(v51 - 8, v117 + 8);
      *v118 = v117;
      v51 = (bool *)(v118 + 2);
      v111 = v118[1];
    }
    v51[v111] = 1;
    *((_DWORD *)v51 - 1) = v111 + 1;
    if ( v140 )
      ++*(_DWORD *)(v140 + 8);
    v112 = *(v149 - 1);
    if ( v112 != *(v149 - 2) )
    {
      *(_QWORD *)&v149[2 * v112] = v140;
      v55 = v112 + 1;
      *(v149 - 1) = v112 + 1;
      goto LABEL_56;
    }
    v113 = (3 * v112 + 1) >> 1;
    v114 = 8 * v113 + 8;
    if ( 8 * v112 + 8 >= v114 || v112 >= v113 )
    {
      v6 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v151, "Overflow encountered when expanding vector");
      *v6 = (char *)off_1C63128;
      sub_2333C0(v6 + 1, v151);
      sub_233E40((__int64)v151);
      __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v115 = (unsigned int *)sub_186B300(v149 - 2, v114);
    v116 = v115[1];
    *v115 = v113;
    v149 = v115 + 2;
    *(_QWORD *)&v115[2 * v116 + 2] = v140;
    v115[1] = v116 + 1;
    v60 = sub_62C680(
            *(_DWORD *)(a2 + 24) + 656,
            *(_QWORD *)(a3 + 40),
            (int)v116 + 1,
            (int)v115 + 8,
            (_DWORD)v51,
            (unsigned int)&qword_18D6CD0,
            1);
  }
  else
  {
LABEL_56:
    v60 = sub_62C680(
            *(_DWORD *)(a2 + 24) + 656,
            *(_QWORD *)(a3 + 40),
            v55,
            (_DWORD)v149,
            (_DWORD)v51,
            (unsigned int)&qword_18D6CD0,
            1);
  }
LABEL_57:
  v61 = v60;
  if ( v60 )
    sub_62A000(v142[1], v60);
  if ( *v142 )
    sub_62A410(v142[1], *v142);
  v62 = *(_QWORD *)(a2 + 24);
  *v142 = v61;
  sub_629AF0(v61, v62);
  sub_630200(*(_QWORD *)(a2 + 24) + 656LL, v142, 1);
  v63 = v149;
  if ( v149 )
  {
    v64 = (__int64 *)v149;
    v65 = (unsigned __int64)&v149[2 * *(v149 - 1)];
    if ( (unsigned __int64)v149 < v65 )
    {
      do
      {
        while ( 1 )
        {
          v66 = *v64;
          if ( *v64 )
          {
            if ( (*(_DWORD *)(v66 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v64 >= v65 )
            goto LABEL_68;
        }
        ++v64;
        sub_15D7BC0(v125, v66);
      }
      while ( (unsigned __int64)v64 < v65 );
LABEL_68:
      v63 = v149;
    }
    sub_186B220(v63 - 2);
  }
  if ( v51 )
    sub_186B220(v51 - 8);
  if ( v140 )
  {
    v150 = *(_DWORD *)(v140 + 8);
    *(_DWORD *)(v140 + 8) = v150 - 1;
    if ( v150 == 1 )
      sub_15D7BC0(*(_QWORD *)v129, v140);
  }
  if ( v29 )
    sub_186B220(v29 - 1);
  return v142;
}

