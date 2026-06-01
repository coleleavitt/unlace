__int64 __fastcall sub_793C30(__int64 a1, int a2, int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  char **v5; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  char **v9; // rbp
  char **v10; // rbp
  __int64 **v11; // r13
  __int64 result; // rax
  unsigned int **v13; // rbx
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r15
  int *v18; // rax
  int v19; // esi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(); // rax
  unsigned int *v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rbp
  unsigned __int64 v26; // rdx
  void **v27; // r12
  unsigned int v28; // r12d
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int v31; // r14d
  unsigned int *v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r14
  unsigned int ***v35; // rbx
  unsigned __int64 *v36; // rax
  _QWORD *v37; // r15
  unsigned int **v38; // r12
  unsigned int *v39; // rax
  __int64 v40; // rbp
  void **v41; // r13
  __int64 v42; // r13
  unsigned int v43; // r12d
  unsigned int v44; // edx
  size_t v45; // rsi
  unsigned int v46; // r14d
  unsigned int *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // r13
  unsigned __int64 **v50; // rbp
  unsigned __int64 **v51; // r15
  unsigned int **v52; // r13
  unsigned __int64 *v53; // r12
  __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  int v60; // r10d
  unsigned __int64 *v61; // r14
  __int64 v62; // r9
  unsigned int v63; // r11d
  __int64 v64; // rcx
  int v65; // edi
  __int64 v66; // rax
  unsigned __int64 *v67; // rsi
  unsigned __int64 *v68; // rax
  unsigned __int64 *v69; // r9
  unsigned __int64 *v70; // rax
  unsigned __int64 *v71; // rcx
  int *v72; // rax
  int v73; // eax
  _QWORD *v74; // rax
  unsigned int v75; // esi
  __int64 v76; // rdi
  int v77; // esi
  _QWORD *v78; // rdi
  unsigned int *v79; // rax
  void **v80; // r12
  unsigned int v81; // edx
  size_t v82; // rsi
  unsigned int v83; // r14d
  unsigned int *v84; // rax
  unsigned int v85; // eax
  __int64 v86; // rax
  unsigned int v87; // edx
  _QWORD *v88; // r12
  __int64 v89; // rax
  _QWORD *v90; // rax
  unsigned int v91; // esi
  __int64 v92; // rdi
  int v93; // esi
  _QWORD *v94; // rdi
  __int64 v95; // rbp
  char *v96; // rax
  char *v97; // rdi
  unsigned __int64 v98; // rax
  __int64 v99; // rcx
  unsigned int v100; // ebp
  unsigned int v101; // eax
  unsigned int *v102; // rax
  __int64 v103; // rax
  int v104; // esi
  unsigned __int64 *v105; // rax
  unsigned __int64 *v106; // r10
  __int64 v107; // rdx
  unsigned __int64 *v108; // rsi
  __int64 v109; // rsi
  _OWORD *v110; // rax
  unsigned int *v111; // rdx
  _QWORD *v112; // rcx
  __int64 v113; // r14
  unsigned __int64 v114; // rax
  void **v115; // rdx
  unsigned int v116; // edx
  size_t v117; // rsi
  unsigned int *v118; // rax
  unsigned int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rdx
  unsigned int v122; // ebp
  unsigned int v123; // eax
  unsigned int *v124; // rax
  __int64 v125; // rax
  int v126; // esi
  _QWORD *v127; // rax
  unsigned int v128; // esi
  __int64 v129; // rdi
  int v130; // esi
  _QWORD *v131; // rdi
  unsigned int v132; // ebp
  unsigned int v133; // eax
  unsigned int *v134; // rax
  __int64 v135; // rax
  int v136; // esi
  _QWORD *v137; // rax
  unsigned int v138; // esi
  __int64 v139; // rdi
  int v140; // esi
  _QWORD *v141; // rdi
  unsigned __int64 v142; // rax
  __int64 v143; // rsi
  _QWORD *v144; // rax
  _QWORD *v145; // rax
  _QWORD *v146; // rcx
  unsigned int v147; // r14d
  unsigned int v148; // edx
  unsigned int *v149; // rdx
  __int64 v150; // rdx
  int v151; // esi
  _QWORD *v152; // rax
  _QWORD *v153; // rax
  int v154; // [rsp+0h] [rbp-158h]
  __int64 v155; // [rsp+8h] [rbp-150h]
  __int64 v156; // [rsp+10h] [rbp-148h]
  _QWORD *v157; // [rsp+18h] [rbp-140h]
  unsigned __int64 *v158; // [rsp+18h] [rbp-140h]
  unsigned __int64 *v159; // [rsp+18h] [rbp-140h]
  __int64 v160; // [rsp+20h] [rbp-138h]
  __int64 v161; // [rsp+20h] [rbp-138h]
  unsigned int v162; // [rsp+20h] [rbp-138h]
  __int64 v163; // [rsp+20h] [rbp-138h]
  unsigned __int64 v164; // [rsp+20h] [rbp-138h]
  unsigned __int64 v165; // [rsp+20h] [rbp-138h]
  unsigned __int64 v166; // [rsp+20h] [rbp-138h]
  unsigned __int64 v167; // [rsp+20h] [rbp-138h]
  __int64 **v168; // [rsp+28h] [rbp-130h]
  unsigned __int64 v169; // [rsp+28h] [rbp-130h]
  unsigned __int64 v170; // [rsp+28h] [rbp-130h]
  unsigned int v171; // [rsp+28h] [rbp-130h]
  _QWORD *v172; // [rsp+28h] [rbp-130h]
  char *v173; // [rsp+30h] [rbp-128h]
  __int64 v174; // [rsp+38h] [rbp-120h]
  unsigned int v175; // [rsp+38h] [rbp-120h]
  int v176; // [rsp+40h] [rbp-118h]
  unsigned __int64 v177; // [rsp+40h] [rbp-118h]
  __int64 v178; // [rsp+40h] [rbp-118h]
  __int64 v179; // [rsp+40h] [rbp-118h]
  int v180; // [rsp+48h] [rbp-110h]
  char *v181; // [rsp+48h] [rbp-110h]
  unsigned int v182; // [rsp+48h] [rbp-110h]
  int v183; // [rsp+50h] [rbp-108h]
  int v184; // [rsp+58h] [rbp-100h]
  int v185; // [rsp+60h] [rbp-F8h]
  int v186; // [rsp+68h] [rbp-F0h]
  __int64 v187; // [rsp+70h] [rbp-E8h] BYREF
  int v188; // [rsp+78h] [rbp-E0h]
  int v189; // [rsp+80h] [rbp-D8h]
  int v190; // [rsp+88h] [rbp-D0h]
  void *ptr; // [rsp+90h] [rbp-C8h]
  __int64 v192; // [rsp+98h] [rbp-C0h]
  _BYTE v193[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v11 = *(__int64 ***)(a1 + 1768);
  LODWORD(v156) = a1;
  v173 = v193;
  ptr = v193;
  result = 0x1000000000LL;
  LODWORD(v174) = a2;
  LODWORD(v155) = a3;
  v192 = 0x1000000000LL;
  if ( !v11 )
    return result;
  result = (__int64)&v11[*((unsigned int *)v11 - 1)];
  LODWORD(v168) = (_DWORD)v11 + 8 * *((_DWORD *)v11 - 1);
  if ( v11 == (__int64 **)result )
    return result;
  do
  {
    v13 = (unsigned int **)*v11;
    v160 = **v11;
    v17 = sub_15D1F10(v160);
    v18 = *(int **)(v17 + 24);
    if ( v18 )
      v19 = *v18;
    else
      v19 = -1;
    v20 = sub_7CEC70(
            v156,
            v19,
            0,
            v14,
            v15,
            v16,
            v154,
            v155,
            v156,
            (_DWORD)v157,
            v160,
            (_DWORD)v168,
            (_DWORD)v173,
            v174,
            v176,
            v180,
            v183,
            v184,
            v185,
            v186,
            v187,
            v188,
            v189,
            v190,
            (_DWORD)ptr,
            v192);
    if ( !v20 )
    {
      v79 = *v13;
      v24 = *(_QWORD **)(v155 + 56);
      if ( v24 && (v25 = *v79, (unsigned int)v25 < *((_DWORD *)v24 - 1)) && (v26 = v24[v25]) != 0 )
      {
        v80 = (void **)(v26 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v26 <= 7 )
          goto LABEL_24;
        if ( *v80 )
          sub_186B220(*v80);
        sub_186B220(v80);
        v79 = *v13;
        v24 = *(_QWORD **)(v155 + 56);
      }
      else
      {
        v26 = *(_QWORD *)(v155 + 64);
        if ( v26 )
        {
          v128 = *(_DWORD *)(v26 - 4);
          if ( v128 == *(_DWORD *)(v26 - 8) )
          {
            v132 = (3 * v128 + 1) >> 1;
            v133 = 8 * v132 + 8;
            if ( 8 * v128 + 8 >= v133 || v128 >= v132 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v187, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v187);
              sub_233E40((__int64)&v187);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v134 = (unsigned int *)sub_186B300((void *)(v26 - 8), v133);
            v26 = (unsigned __int64)(v134 + 2);
            *v134 = v132;
            v135 = v134[1];
            v136 = v135;
            v131 = (_QWORD *)(v26 + 8 * v135);
            v79 = *v13;
            *(_QWORD *)(v155 + 64) = v26;
            v130 = v136 + 1;
            v24 = *(_QWORD **)(v155 + 56);
          }
          else
          {
            v129 = v128;
            v130 = v128 + 1;
            v131 = (_QWORD *)(v26 + 8 * v129);
          }
        }
        else
        {
          v152 = (_QWORD *)sub_186B270(0x18u);
          v130 = 1;
          *v152 = 2;
          v26 = (unsigned __int64)(v152 + 1);
          v79 = *v13;
          *(_QWORD *)(v155 + 64) = v26;
          v131 = (_QWORD *)v26;
          v24 = *(_QWORD **)(v155 + 56);
        }
        *v131 = v13;
        *(_DWORD *)(v26 - 4) = v130;
      }
      v25 = *v79;
      if ( v24 )
      {
        LODWORD(v157) = *((_DWORD *)v24 - 1);
        if ( (unsigned int)v25 < (unsigned int)v157 )
          goto LABEL_24;
        v28 = v25 + 1;
        if ( (unsigned int)v157 >= (int)v25 + 1 )
        {
LABEL_104:
          *((_DWORD *)v24 - 1) = v28;
          goto LABEL_24;
        }
      }
      else
      {
        v28 = v25 + 1;
        if ( (_DWORD)v25 == -1 )
          goto LABEL_138;
        v127 = (_QWORD *)sub_186B270(0x18u);
        v24 = v127 + 1;
        *v127 = 2;
        LODWORD(v157) = 0;
        *(_QWORD *)(v155 + 56) = v127 + 1;
      }
      while ( 1 )
      {
        v85 = *((_DWORD *)v24 - 2);
        if ( v85 >= v28 )
          break;
        v81 = (3 * v85 + 1) >> 1;
        v82 = 8 * v81 + 8;
        v83 = v81;
        if ( 8 * v85 + 8 >= (unsigned int)v82 || v85 >= v81 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v187, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, &v187);
          sub_233E40((__int64)&v187);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v84 = (unsigned int *)sub_186B300(v24 - 1, v82);
        v24 = v84 + 2;
        *v84 = v83;
        *(_QWORD *)(v155 + 56) = v84 + 2;
      }
      *((_DWORD *)v24 - 1) = v28;
      v26 = 8LL * v28;
      v86 = 8LL * (unsigned int)v157;
      if ( v86 != v26 )
      {
        v157 = v24;
        memset(&v24[(unsigned __int64)v86 / 8], 0, v26 - v86);
        v24 = v157;
      }
      goto LABEL_24;
    }
    v21 = v20 + 32;
    v22 = *(__int64 (__fastcall **)())(*(_QWORD *)(v20 + 32) + 24LL);
    if ( v22 == sub_7965D0 )
    {
      v23 = *v13;
      v24 = *(_QWORD **)(v155 + 56);
      if ( v24 && (v25 = *v23, (unsigned int)v25 < *((_DWORD *)v24 - 1)) && (v26 = v24[v25]) != 0 )
      {
        v27 = (void **)(v26 & 0xFFFFFFFFFFFFFFF8LL);
        if ( v26 <= 7 )
          goto LABEL_24;
        if ( *v27 )
          sub_186B220(*v27);
        sub_186B220(v27);
        v23 = *v13;
        v24 = *(_QWORD **)(v155 + 56);
      }
      else
      {
        v26 = *(_QWORD *)(v155 + 64);
        if ( v26 )
        {
          v91 = *(_DWORD *)(v26 - 4);
          if ( v91 == *(_DWORD *)(v26 - 8) )
          {
            v122 = (3 * v91 + 1) >> 1;
            v123 = 8 * v122 + 8;
            if ( 8 * v91 + 8 >= v123 || v91 >= v122 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v187, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, &v187);
              sub_233E40((__int64)&v187);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v124 = (unsigned int *)sub_186B300((void *)(v26 - 8), v123);
            v26 = (unsigned __int64)(v124 + 2);
            *v124 = v122;
            v125 = v124[1];
            v126 = v125;
            v94 = (_QWORD *)(v26 + 8 * v125);
            v23 = *v13;
            *(_QWORD *)(v155 + 64) = v26;
            v93 = v126 + 1;
            v24 = *(_QWORD **)(v155 + 56);
          }
          else
          {
            v92 = v91;
            v93 = v91 + 1;
            v94 = (_QWORD *)(v26 + 8 * v92);
          }
        }
        else
        {
          v145 = (_QWORD *)sub_186B270(0x18u);
          v93 = 1;
          *v145 = 2;
          v26 = (unsigned __int64)(v145 + 1);
          v23 = *v13;
          *(_QWORD *)(v155 + 64) = v26;
          v94 = (_QWORD *)v26;
          v24 = *(_QWORD **)(v155 + 56);
        }
        *v94 = v13;
        *(_DWORD *)(v26 - 4) = v93;
      }
      v25 = *v23;
      if ( v24 )
      {
        LODWORD(v157) = *((_DWORD *)v24 - 1);
        if ( (unsigned int)v25 >= (unsigned int)v157 )
        {
          v28 = v25 + 1;
          if ( (unsigned int)v157 >= (int)v25 + 1 )
            goto LABEL_104;
LABEL_21:
          while ( 1 )
          {
            v33 = *((_DWORD *)v24 - 2);
            if ( v33 >= v28 )
              break;
            v29 = (3 * v33 + 1) >> 1;
            v30 = 8 * v29 + 8;
            v31 = v29;
            if ( 8 * v33 + 8 >= (unsigned int)v30 || v33 >= v29 )
            {
              v6 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v187, "Overflow encountered when expanding vector");
              *v6 = (char *)off_1C63128;
              sub_2333C0(v6 + 1, &v187);
              sub_233E40((__int64)&v187);
              __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v32 = (unsigned int *)sub_186B300(v24 - 1, v30);
            v24 = v32 + 2;
            *v32 = v31;
            *(_QWORD *)(v155 + 56) = v32 + 2;
          }
          *((_DWORD *)v24 - 1) = v28;
          v26 = 8LL * v28;
          v34 = 8LL * (unsigned int)v157;
          if ( v34 != v26 )
          {
            v157 = v24;
            memset(&v24[(unsigned __int64)v34 / 8], 0, v26 - v34);
            v24 = v157;
          }
        }
LABEL_24:
        v24[v25] = 1;
        goto LABEL_25;
      }
      v28 = v25 + 1;
      if ( (_DWORD)v25 != -1 )
      {
        v90 = (_QWORD *)sub_186B270(0x18u);
        LODWORD(v157) = 0;
        *v90 = 2;
        v24 = v90 + 1;
        *(_QWORD *)(v155 + 56) = v90 + 1;
        goto LABEL_21;
      }
LABEL_138:
      v25 = 0xFFFFFFFFLL;
      goto LABEL_24;
    }
    if ( !((unsigned __int8 (__fastcall *)(__int64, unsigned int **, __int64))v22)(v21, v13, v155) )
    {
      v87 = v192;
      if ( (unsigned int)v192 >= HIDWORD(v192) )
      {
        v95 = (unsigned int)(2 * HIDWORD(v192));
        v96 = (char *)sub_186B270(8 * v95);
        v87 = v192;
        v97 = (char *)ptr;
        v88 = v96;
        if ( (_DWORD)v192 )
        {
          if ( (unsigned int)(v192 - 1) <= 2 || v96 == (char *)ptr + 8 )
          {
            v142 = 0;
            v143 = 8LL * (unsigned int)v192;
            do
            {
              v88[v142 / 8] = *(_QWORD *)&v97[v142];
              v142 += 8LL;
            }
            while ( v143 != v142 );
          }
          else
          {
            v98 = 0;
            v99 = 16LL * ((unsigned int)v192 >> 1);
            do
            {
              *(__m128i *)&v88[v98 / 8] = _mm_loadu_si128((const __m128i *)&v97[v98]);
              v98 += 16LL;
            }
            while ( v98 != v99 );
            if ( (v87 & 1) != 0 )
              v88[v87 & 0xFFFFFFFE] = *(_QWORD *)&v97[8 * (v87 & 0xFFFFFFFE)];
          }
        }
        if ( v97 != v173 && v97 )
        {
          sub_186B220(v97);
          v87 = v192;
        }
        ptr = v88;
        HIDWORD(v192) = v95;
      }
      else
      {
        v88 = ptr;
      }
      v89 = v87;
      LODWORD(v26) = v87 + 1;
      v88[v89] = v13;
      LODWORD(v192) = v26;
    }
LABEL_25:
    if ( v13 == (unsigned int **)v13[8] )
    {
      v72 = *(int **)(v17 + 24);
      if ( !v72 || (v73 = *v72, v73 == -1) || v73 == 4 )
      {
        if ( (unsigned __int8)sub_15D26C0(*(_QWORD *)(v156 + 144), v161) )
          sub_1371D70(v174 + 32, v161);
      }
    }
    ++v11;
  }
  while ( v168 != v11 );
  v35 = (unsigned int ***)ptr;
  v36 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v192);
  v158 = v36;
  if ( v36 == ptr )
    goto LABEL_80;
  v37 = *(_QWORD **)(v155 + 56);
  while ( 2 )
  {
    v38 = *v35;
    *((_BYTE *)v38 + 8) = 1;
    v39 = *v38;
    if ( v37 && (v40 = *v39, (unsigned int)v40 < *((_DWORD *)v37 - 1)) && (v26 = v37[v40]) != 0 )
    {
      v41 = (void **)(v26 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v26 > 7 )
      {
        if ( *v41 )
          sub_186B220(*v41);
        sub_186B220(v41);
        v39 = *v38;
        v37 = *(_QWORD **)(v155 + 56);
        goto LABEL_36;
      }
    }
    else
    {
      v26 = *(_QWORD *)(v155 + 64);
      if ( v26 )
      {
        v75 = *(_DWORD *)(v26 - 4);
        if ( v75 == *(_DWORD *)(v26 - 8) )
        {
          v100 = (3 * v75 + 1) >> 1;
          v101 = 8 * v100 + 8;
          if ( 8 * v75 + 8 >= v101 || v75 >= v100 )
          {
            v8 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v187, "Overflow encountered when expanding vector");
            *v8 = (char *)off_1C63128;
            sub_2333C0(v8 + 1, &v187);
            sub_233E40((__int64)&v187);
            __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v102 = (unsigned int *)sub_186B300((void *)(v26 - 8), v101);
          v26 = (unsigned __int64)(v102 + 2);
          *v102 = v100;
          v103 = v102[1];
          v104 = v103;
          v78 = (_QWORD *)(v26 + 8 * v103);
          v39 = *v38;
          *(_QWORD *)(v155 + 64) = v26;
          v37 = *(_QWORD **)(v155 + 56);
          v77 = v104 + 1;
        }
        else
        {
          v76 = v75;
          v77 = v75 + 1;
          v78 = (_QWORD *)(v26 + 8 * v76);
        }
      }
      else
      {
        v144 = (_QWORD *)sub_186B270(0x18u);
        v77 = 1;
        *v144 = 2;
        v26 = (unsigned __int64)(v144 + 1);
        v39 = *v38;
        *(_QWORD *)(v155 + 64) = v26;
        v37 = *(_QWORD **)(v155 + 56);
        v78 = (_QWORD *)v26;
      }
      *v78 = v38;
      *(_DWORD *)(v26 - 4) = v77;
LABEL_36:
      v40 = *v39;
      if ( v37 )
      {
        v42 = *((unsigned int *)v37 - 1);
        if ( (unsigned int)v40 < (unsigned int)v42 )
          goto LABEL_46;
        v43 = v40 + 1;
        if ( (unsigned int)v42 >= (int)v40 + 1 )
        {
          *((_DWORD *)v37 - 1) = v43;
          goto LABEL_46;
        }
      }
      else
      {
        v43 = v40 + 1;
        if ( (_DWORD)v40 == -1 )
        {
          v40 = 0xFFFFFFFFLL;
          goto LABEL_46;
        }
        v74 = (_QWORD *)sub_186B270(0x18u);
        v37 = v74 + 1;
        v42 = 0;
        *v74 = 2;
        *(_QWORD *)(v155 + 56) = v74 + 1;
      }
      while ( 1 )
      {
        v48 = *((_DWORD *)v37 - 2);
        if ( v48 >= v43 )
          break;
        v44 = (3 * v48 + 1) >> 1;
        v45 = 8 * v44 + 8;
        v46 = v44;
        if ( 8 * v48 + 8 >= (unsigned int)v45 || v48 >= v44 )
        {
          v10 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v187, "Overflow encountered when expanding vector");
          *v10 = (char *)off_1C63128;
          sub_2333C0(v10 + 1, &v187);
          sub_233E40((__int64)&v187);
          __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v47 = (unsigned int *)sub_186B300(v37 - 1, v45);
        v37 = v47 + 2;
        *v47 = v46;
        *(_QWORD *)(v155 + 56) = v47 + 2;
      }
      v49 = 8 * v42;
      *((_DWORD *)v37 - 1) = v43;
      v26 = 8LL * v43;
      if ( v49 != v26 )
        memset(&v37[(unsigned __int64)v49 / 8], 0, v26 - v49);
    }
LABEL_46:
    v37[v40] = 1;
    if ( v158 != (unsigned __int64 *)++v35 )
      continue;
    break;
  }
  v35 = (unsigned int ***)ptr;
  v36 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v192);
  v159 = v36;
  if ( v36 == ptr )
    goto LABEL_80;
  while ( 2 )
  {
    v50 = *(unsigned __int64 ***)(v156 + 1768);
    while ( 1 )
    {
      if ( !v50 )
        goto LABEL_77;
      v51 = &v50[*((unsigned int *)v50 - 1)];
      if ( v51 != v50 )
        break;
      if ( v159 == (unsigned __int64 *)++v35 )
        goto LABEL_77;
    }
    v52 = *v35;
    while ( 2 )
    {
      v53 = *v50;
      if ( v53 != (unsigned __int64 *)v53[8] )
        goto LABEL_52;
      v54 = sub_15D1F10(*v53);
      if ( v54 != sub_15D1F10(*v52) || *((_BYTE *)v53 + 8) )
        goto LABEL_52;
      v55 = *(_QWORD *)(v155 + 56);
      if ( !v55
        || (v56 = **v52, (unsigned int)v56 >= *(_DWORD *)(v55 - 4))
        || (v57 = *(_QWORD *)(v55 + 8 * v56), v58 = v57 & 0xFFFFFFFFFFFFFFF8LL, v57 <= 7) )
      {
        v163 = sub_186B270(0x18u);
        v110 = (_OWORD *)sub_186B270(0x40u);
        v58 = v163;
        v111 = *v52;
        v110[3] = 0;
        *(_QWORD *)v163 = v110;
        *v110 = 0;
        v110[1] = 0;
        v110[2] = 0;
        *(_QWORD *)(v163 + 8) = 8;
        v112 = *(_QWORD **)(v155 + 56);
        *(_DWORD *)(v163 + 16) = 0;
        if ( v112 && (v113 = *v111, (unsigned int)v113 < *((_DWORD *)v112 - 1)) && (v114 = v112[v113]) != 0 )
        {
          v115 = (void **)(v114 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v114 <= 7 )
          {
            v179 = v163 | 1;
            goto LABEL_176;
          }
          if ( *v115 )
          {
            v170 = v114 & 0xFFFFFFFFFFFFFFF8LL;
            sub_186B220(*v115);
            v115 = (void **)v170;
            v58 = v163;
          }
          v164 = v58;
          sub_186B220(v115);
          v111 = *v52;
          v58 = v164;
          v112 = *(_QWORD **)(v155 + 56);
        }
        else
        {
          v137 = *(_QWORD **)(v155 + 64);
          if ( v137 )
          {
            v138 = *((_DWORD *)v137 - 1);
            if ( v138 == *((_DWORD *)v137 - 2) )
            {
              v147 = (3 * v138 + 1) >> 1;
              v148 = 8 * v147 + 8;
              if ( 8 * v138 + 8 >= v148 || v138 >= v147 )
              {
                v3 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v187, "Overflow encountered when expanding vector");
                *v3 = (char *)off_1C63128;
                sub_2333C0(v3 + 1, &v187);
                sub_233E40((__int64)&v187);
                __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v149 = (unsigned int *)sub_186B300(v137 - 1, v148);
              v137 = v149 + 2;
              v58 = v163;
              *v149 = v147;
              v150 = v149[1];
              *(_QWORD *)(v155 + 64) = v137;
              v112 = *(_QWORD **)(v155 + 56);
              v151 = v150;
              v141 = &v137[v150];
              v111 = *v52;
              v140 = v151 + 1;
            }
            else
            {
              v139 = v138;
              v140 = v138 + 1;
              v141 = &v137[v139];
            }
          }
          else
          {
            v153 = (_QWORD *)sub_186B270(0x18u);
            *v153 = 2;
            v137 = v153 + 1;
            v140 = 1;
            v111 = *v52;
            v58 = v163;
            v141 = v137;
            *(_QWORD *)(v155 + 64) = v137;
            v112 = *(_QWORD **)(v155 + 56);
          }
          *v141 = v52;
          *((_DWORD *)v137 - 1) = v140;
        }
        v113 = *v111;
        v179 = v58 | 1;
        if ( v112 )
        {
          v182 = *((_DWORD *)v112 - 1);
          if ( (unsigned int)v113 < v182 )
          {
LABEL_176:
            v112[v113] = v179;
            goto LABEL_59;
          }
          v175 = v113 + 1;
          if ( v182 >= (int)v113 + 1 )
          {
            *((_DWORD *)v112 - 1) = v113 + 1;
            goto LABEL_176;
          }
        }
        else
        {
          v175 = v113 + 1;
          if ( (_DWORD)v113 == -1 )
          {
            v113 = 0xFFFFFFFFLL;
            goto LABEL_176;
          }
          v167 = v58;
          v146 = (_QWORD *)sub_186B270(0x18u);
          *v146 = 2;
          v112 = v146 + 1;
          v182 = 0;
          v58 = v167;
          *(_QWORD *)(v155 + 56) = v112;
        }
        while ( 1 )
        {
          v119 = *((_DWORD *)v112 - 2);
          if ( v119 >= v175 )
            break;
          v116 = (3 * v119 + 1) >> 1;
          v117 = 8 * v116 + 8;
          if ( 8 * v119 + 8 >= (unsigned int)v117 || v119 >= v116 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v187, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, &v187);
            sub_233E40((__int64)&v187);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v171 = (3 * v119 + 1) >> 1;
          v165 = v58;
          v118 = (unsigned int *)sub_186B300(v112 - 1, v117);
          v112 = v118 + 2;
          v58 = v165;
          *(_QWORD *)(v155 + 56) = v118 + 2;
          *v118 = v171;
        }
        *((_DWORD *)v112 - 1) = v175;
        v120 = 8LL * v175;
        v121 = 8LL * v182;
        if ( v121 != v120 )
        {
          v172 = v112;
          v166 = v58;
          memset(&v112[(unsigned __int64)v121 / 8], 0, v120 - v121);
          v58 = v166;
          v112 = v172;
        }
        goto LABEL_176;
      }
LABEL_59:
      v59 = *(unsigned int *)(v58 + 8);
      v60 = *(_DWORD *)(v58 + 16);
      v162 = 2 * v59;
      LODWORD(v26) = 4 * (v60 + *(_DWORD *)(v58 + 12));
      if ( 3 * (int)v59 < (unsigned int)v26 )
      {
        v177 = v58;
        v61 = (unsigned __int64 *)sub_186B270(8LL * v162);
        v62 = 8LL * v162;
        v58 = v177;
        if ( v162 )
        {
          memset(v61, 0, 8LL * v162);
          v58 = v177;
          v62 = 8LL * v162;
        }
        v105 = *(unsigned __int64 **)v58;
        v26 = *(unsigned int *)(v58 + 8);
        v106 = (unsigned __int64 *)(*(_QWORD *)v58 + 8 * v26);
        v63 = v162 - 1;
        v64 = (__int64)v61 + v62;
        if ( *(unsigned __int64 **)v58 != v106 )
        {
          do
          {
            while ( 1 )
            {
              v26 = *v105;
              if ( *v105 > 1 )
                break;
              if ( v106 == ++v105 )
                goto LABEL_150;
            }
            v107 = 8LL * (**(_DWORD **)v26 & v63);
            v108 = &v61[(unsigned __int64)v107 / 8];
            if ( v62 == v107 )
            {
LABEL_154:
              if ( v61 == v108 )
              {
LABEL_188:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v26 = (unsigned __int64)v61;
              while ( *(_QWORD *)v26 )
              {
                v26 += 8LL;
                if ( v108 == (unsigned __int64 *)v26 )
                  goto LABEL_188;
              }
            }
            else
            {
              v26 = (unsigned __int64)&v61[(unsigned __int64)v107 / 8];
              while ( *(_QWORD *)v26 )
              {
                v26 += 8LL;
                if ( v64 == v26 )
                  goto LABEL_154;
              }
            }
            v109 = *v105++;
            *(_QWORD *)v26 = v109;
          }
          while ( v106 != v105 );
LABEL_150:
          v106 = *(unsigned __int64 **)v58;
        }
        if ( v106 )
        {
          v181 = (char *)v61 + v62;
          v178 = v62;
          v169 = v58;
          sub_186B220(v106);
          v64 = (__int64)v181;
          v62 = v178;
          v63 = v162 - 1;
          v58 = v169;
        }
        *(_QWORD *)v58 = v61;
        v60 = 0;
        *(_DWORD *)(v58 + 16) = 0;
        *(_DWORD *)(v58 + 8) = v162;
      }
      else
      {
        v61 = *(unsigned __int64 **)v58;
        v62 = 8 * v59;
        v63 = v59 - 1;
        v64 = *(_QWORD *)v58 + 8 * v59;
      }
      v65 = *(_DWORD *)*v53;
      v66 = 8LL * (v65 & v63);
      v67 = &v61[(unsigned __int64)v66 / 8];
      if ( v66 == v62 )
      {
        v69 = nullptr;
        while ( 1 )
        {
LABEL_72:
          if ( v67 == v61 )
          {
            sub_1872CE0("");
            sub_1873130(114, 405);
          }
          v70 = (unsigned __int64 *)*v61;
          if ( *v61 > 1 )
          {
            v26 = *v70;
            if ( *(_DWORD *)*v70 == v65 && v53 == v70 )
            {
              *v61 = (unsigned __int64)v53;
              goto LABEL_52;
            }
          }
          else
          {
            if ( !v70 )
            {
              if ( v69 )
                *(_DWORD *)(v58 + 16) = v60 - 1;
              else
                v69 = v61;
              goto LABEL_182;
            }
            v69 = v61;
          }
          ++v61;
        }
      }
      v68 = &v61[(unsigned __int64)v66 / 8];
      v69 = nullptr;
      while ( 2 )
      {
        v26 = *v68;
        if ( *v68 > 1 )
        {
          if ( **(_DWORD **)v26 == v65 && v53 == (unsigned __int64 *)v26 )
          {
            *v68 = (unsigned __int64)v53;
            goto LABEL_52;
          }
          goto LABEL_65;
        }
        if ( v26 )
        {
          v69 = v68;
LABEL_65:
          if ( ++v68 == (unsigned __int64 *)v64 )
            goto LABEL_72;
          continue;
        }
        break;
      }
      if ( v69 )
        *(_DWORD *)(v58 + 16) = v60 - 1;
      else
        v69 = v68;
LABEL_182:
      *v69 = (unsigned __int64)v53;
      ++*(_DWORD *)(v58 + 12);
LABEL_52:
      if ( v51 != ++v50 )
        continue;
      break;
    }
    if ( ++v35 != (unsigned int ***)v159 )
      continue;
    break;
  }
LABEL_77:
  v35 = (unsigned int ***)ptr;
  LODWORD(v36) = v192;
  v71 = (unsigned __int64 *)((char *)ptr + 8 * (unsigned int)v192);
  if ( v71 != ptr )
  {
    v36 = (unsigned __int64 *)ptr;
    do
    {
      v26 = *v36++;
      *(_BYTE *)(v26 + 8) = 0;
    }
    while ( v71 != v36 );
  }
LABEL_80:
  LOBYTE(v36) = v35 == nullptr;
  LOBYTE(v26) = v35 == (unsigned int ***)v173;
  result = (unsigned int)v26 | (unsigned int)v36;
  if ( !(_BYTE)result )
    return sub_186B220(v35);
  return result;
}

