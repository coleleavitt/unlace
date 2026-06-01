__int64 __fastcall sub_5BA840(__int64 a1, void **a2, __int64 a3, int a4, __m128i a5, __int64 a6, _DWORD *a7)
{
  char **v7; // r12
  char **v8; // r12
  char **v9; // r12
  char **v10; // r13
  char **v11; // r12
  char **v12; // r12
  char **v13; // r12
  char **exception; // r13
  char **v15; // r13
  char **v16; // r12
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r13
  char *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // r12d
  unsigned int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r12
  _QWORD *v27; // rcx
  __int64 v28; // rax
  int v29; // edi
  unsigned int v30; // edx
  _QWORD *v31; // rsi
  __int64 v32; // rdx
  _QWORD *v33; // r8
  _QWORD *i; // rax
  _DWORD *v35; // rdx
  unsigned int *v36; // rcx
  __int64 v37; // rax
  unsigned int *v38; // rax
  __int64 *v39; // r15
  char *v40; // r13
  unsigned int v41; // eax
  __int64 v42; // r12
  unsigned __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // rdx
  int v46; // eax
  __int64 *v47; // rdx
  bool v48; // r12
  unsigned int v49; // eax
  __int64 v50; // rdx
  int v51; // eax
  char *v52; // rdx
  _DWORD **v53; // rax
  _DWORD *v54; // rdx
  unsigned int v55; // r12d
  __int64 v56; // rax
  __int64 v57; // rax
  __m128i *v58; // rsi
  _DWORD *v59; // r14
  __int64 v60; // r12
  unsigned __int64 v61; // xmm3_8
  _DWORD *v62; // rsi
  size_t v63; // rdx
  __int64 v64; // rax
  size_t v65; // rdx
  void **v66; // rcx
  __int64 v67; // rax
  void *v68; // r12
  size_t v69; // rdx
  __int64 v70; // r12
  int v71; // esi
  __int64 v72; // rax
  int v73; // r8d
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rdi
  __int64 v77; // r11
  int v78; // eax
  _DWORD *v79; // rax
  int v80; // eax
  _DWORD *v81; // rax
  __int64 v82; // rdx
  void **v83; // rdx
  __int64 v84; // r12
  __int64 v85; // rax
  unsigned int *v86; // rax
  _DWORD *v87; // rax
  _QWORD *v88; // rax
  unsigned int v89; // r14d
  size_t v90; // rsi
  unsigned int *v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // edi
  size_t v94; // rsi
  unsigned int *v95; // rax
  __int64 v96; // rdx
  unsigned int v97; // edx
  size_t v98; // rsi
  unsigned int *v99; // rax
  unsigned int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rax
  unsigned int v103; // edi
  unsigned int v104; // edx
  unsigned int *v105; // rax
  unsigned int v106; // eax
  unsigned __int64 v107; // rsi
  _QWORD *v108; // rax
  _QWORD *v109; // rax
  unsigned int v110; // r15d
  unsigned int v111; // edx
  unsigned int *v112; // rax
  __int64 v113; // rax
  _QWORD *v114; // rax
  int v115; // eax
  __int64 v116; // rdx
  unsigned int v117; // ecx
  unsigned int v118; // edx
  unsigned int *v119; // rax
  unsigned int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rcx
  _QWORD *v123; // rax
  __int64 v124; // rax
  unsigned int v125; // edx
  unsigned int v126; // eax
  __int64 v127; // r14
  __int64 v128; // rdx
  unsigned __int64 v129; // r12
  __int64 v130; // rcx
  __int64 v131; // rdx
  bool v132; // r8
  unsigned int v133; // eax
  __int64 v134; // rdx
  int v135; // eax
  char *v136; // rdx
  unsigned int v137; // eax
  unsigned int v138; // ecx
  size_t v139; // rsi
  unsigned int *v140; // rax
  unsigned int v141; // edx
  size_t v142; // rsi
  unsigned int *v143; // rax
  __int64 v144; // r14
  unsigned int v145; // eax
  __int64 *v146; // rcx
  int v147; // edx
  unsigned int v148; // eax
  __int64 v149; // rdi
  int v150; // r9d
  __int64 v151; // r12
  __int64 result; // rax
  _QWORD *v153; // rax
  int v154; // eax
  __int64 *v155; // rcx
  _QWORD *v156; // rax
  _QWORD *v157; // rax
  unsigned int v158; // r12d
  unsigned int *v159; // rax
  __int64 v160; // rcx
  unsigned int v161; // r12d
  unsigned int v162; // edx
  unsigned int *v163; // rax
  __int64 v164; // rdx
  __int64 *v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rdx
  _QWORD *v168; // rax
  __int64 v170; // [rsp+0h] [rbp-E0h]
  __int64 v171; // [rsp+8h] [rbp-D8h]
  _DWORD **v172; // [rsp+10h] [rbp-D0h]
  void **src; // [rsp+18h] [rbp-C8h]
  int v174; // [rsp+20h] [rbp-C0h]
  unsigned int v175; // [rsp+24h] [rbp-BCh]
  unsigned int v176; // [rsp+24h] [rbp-BCh]
  __int64 size; // [rsp+28h] [rbp-B8h]
  unsigned int *v178; // [rsp+30h] [rbp-B0h]
  __int64 v179; // [rsp+30h] [rbp-B0h]
  int v180; // [rsp+38h] [rbp-A8h]
  __int64 v181; // [rsp+38h] [rbp-A8h]
  unsigned int v182; // [rsp+40h] [rbp-A0h]
  unsigned int v183; // [rsp+40h] [rbp-A0h]
  __int64 v184; // [rsp+40h] [rbp-A0h]
  unsigned int v185; // [rsp+40h] [rbp-A0h]
  unsigned int v186; // [rsp+40h] [rbp-A0h]
  unsigned int ptr; // [rsp+48h] [rbp-98h]
  __int64 ptra; // [rsp+48h] [rbp-98h]
  void *ptrb; // [rsp+48h] [rbp-98h]
  unsigned int ptrc; // [rsp+48h] [rbp-98h]
  unsigned int ptrd; // [rsp+48h] [rbp-98h]
  bool ptre; // [rsp+48h] [rbp-98h]
  _DWORD *v193; // [rsp+50h] [rbp-90h]
  void *v194; // [rsp+50h] [rbp-90h]
  void *v195; // [rsp+50h] [rbp-90h]
  void *v196; // [rsp+50h] [rbp-90h]
  void *v197; // [rsp+50h] [rbp-90h]
  bool v198; // [rsp+50h] [rbp-90h]
  unsigned int *v199; // [rsp+58h] [rbp-88h]
  unsigned int v200; // [rsp+58h] [rbp-88h]
  char *v203; // [rsp+78h] [rbp-68h] BYREF
  unsigned int *v204; // [rsp+80h] [rbp-60h] BYREF
  unsigned int *v205; // [rsp+88h] [rbp-58h] BYREF
  int *v206[10]; // [rsp+90h] [rbp-50h] BYREF

  src = a2;
  v171 = *(_QWORD *)(a3 + 40);
  v17 = *(unsigned int *)(v171 + 24);
  if ( (_DWORD)v17 )
  {
    v18 = 4 * v17;
    v19 = 0;
    v20 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)((char *)*a2 + v19) == 1 )
        {
          v21 = *(_QWORD *)(v171 + 2 * v19 + 32);
          if ( *(_WORD *)(v21 + 4) == 1 )
            break;
        }
        v19 += 4;
        if ( v19 == v18 )
          goto LABEL_9;
      }
      ptr = *(_DWORD *)(v21 + 16);
      v22 = ptr >> 5;
      if ( !v20 )
        break;
      v23 = v22 + 1;
      v182 = *((_DWORD *)v20 - 1);
      if ( v22 >= v182 )
        goto LABEL_144;
LABEL_8:
      v19 += 4;
      *(_DWORD *)&v20[4 * (ptr >> 5)] |= 1 << ptr;
      if ( v19 == v18 )
        goto LABEL_9;
    }
    v23 = v22 + 1;
    v123 = (_QWORD *)sub_186B270(0x10u);
    v182 = 0;
    *v123 = 2;
    v20 = (char *)(v123 + 1);
LABEL_144:
    while ( 1 )
    {
      v120 = *((_DWORD *)v20 - 2);
      if ( v120 >= v23 )
        break;
      v117 = (3 * v120 + 1) >> 1;
      v118 = 4 * v117 + 8;
      v200 = v117;
      if ( 4 * v120 + 8 >= v118 || v120 >= v117 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v206);
        sub_233E40((__int64)v206);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v119 = (unsigned int *)sub_186B300(v20 - 8, v118);
      v20 = (char *)(v119 + 2);
      *v119 = v200;
    }
    *((_DWORD *)v20 - 1) = v23;
    v121 = 4LL * v23;
    v122 = 4LL * v182;
    if ( v122 != v121 )
      memset(&v20[v122], 0, v121 - v122);
    goto LABEL_8;
  }
  v20 = nullptr;
LABEL_9:
  v24 = *(_DWORD *)(a3 + 68);
  v175 = v24;
  if ( !v24 )
  {
    v178 = nullptr;
    v199 = nullptr;
    goto LABEL_23;
  }
  v178 = nullptr;
  v25 = v24;
  v26 = 0;
  v199 = nullptr;
  do
  {
    a7 = *(_DWORD **)((*(_QWORD *)(a3 + 8 * v26 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v27 = *(_QWORD **)(a1 + 64);
    v28 = *(unsigned int *)(a1 + 72);
    v29 = a7[3];
    v30 = v28 - 1;
    v28 *= 8;
    v31 = (_QWORD *)((char *)v27 + v28);
    v32 = 8LL * (v29 & v30);
    v33 = &v27[(unsigned __int64)v32 / 8];
    if ( v32 != v28 )
    {
      for ( i = &v27[(unsigned __int64)v32 / 8]; v31 != i; ++i )
      {
        v35 = (_DWORD *)*i;
        if ( *i > 1u )
        {
          if ( v35[3] == v29 && a7 == v35 )
          {
LABEL_89:
            if ( v199 )
            {
              v85 = *(v199 - 1);
              if ( (_DWORD)v85 == *(v199 - 2) )
              {
                v103 = (unsigned int)(3 * v85 + 1) >> 1;
                v104 = 4 * v103 + 8;
                if ( 4 * (int)v85 + 8 >= v104 || (unsigned int)v85 >= v103 )
                {
                  v10 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
                  *v10 = (char *)off_1C63128;
                  sub_2333C0(v10 + 1, v206);
                  sub_233E40((__int64)v206);
                  __cxa_throw(v10, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v105 = (unsigned int *)sub_186B300(v199 - 2, v104);
                *v105 = v103;
                v199 = v105 + 2;
                v86 = &v105[v105[1] + 2];
              }
              else
              {
                v86 = &v199[v85];
              }
            }
            else
            {
              v157 = (_QWORD *)sub_186B270(0x10u);
              *v157 = 2;
              v86 = (unsigned int *)(v157 + 1);
              v199 = v86;
            }
            *v86 = v26;
            ++*(v199 - 1);
            goto LABEL_22;
          }
        }
        else if ( !v35 )
        {
          goto LABEL_18;
        }
      }
    }
    if ( v27 == v33 )
    {
LABEL_18:
      v36 = v178;
      if ( !v178 )
        goto LABEL_101;
      goto LABEL_19;
    }
    while ( 1 )
    {
      v87 = (_DWORD *)*v27;
      if ( *v27 <= 1u )
        break;
      if ( v87[3] == v29 && a7 == v87 )
        goto LABEL_89;
LABEL_97:
      if ( v33 == ++v27 )
        goto LABEL_18;
    }
    if ( v87 )
      goto LABEL_97;
    v36 = v178;
    if ( !v178 )
    {
LABEL_101:
      v88 = (_QWORD *)sub_186B270(0x10u);
      *v88 = 2;
      v38 = (unsigned int *)(v88 + 1);
      v178 = v38;
      goto LABEL_21;
    }
LABEL_19:
    v37 = *(v36 - 1);
    if ( (_DWORD)v37 == *(v36 - 2) )
    {
      v110 = (unsigned int)(3 * v37 + 1) >> 1;
      v111 = 4 * v110 + 8;
      if ( 4 * (int)v37 + 8 >= v111 || (unsigned int)v37 >= v110 )
      {
        v15 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
        *v15 = (char *)off_1C63128;
        sub_2333C0(v15 + 1, v206);
        sub_233E40((__int64)v206);
        __cxa_throw(v15, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v112 = (unsigned int *)sub_186B300(v178 - 2, v111);
      *v112 = v110;
      v178 = v112 + 2;
      v38 = &v112[v112[1] + 2];
    }
    else
    {
      v38 = &v36[v37];
    }
LABEL_21:
    *v38 = v26;
    ++*(v178 - 1);
LABEL_22:
    ++v26;
  }
  while ( v25 != v26 );
LABEL_23:
  v39 = nullptr;
  v40 = nullptr;
  if ( v175 )
  {
    while ( 1 )
    {
      v203 = v20;
      v204 = v199;
      v41 = sub_5B7C50(a1, &v204, a3, &v203, *(double *)a5.m128i_i64);
      v42 = v41;
      if ( v41 != -1 )
        break;
      v205 = v178;
      v106 = sub_5B7C50(a1, &v205, a3, &v203, *(double *)a5.m128i_i64);
      v42 = v106;
      if ( v106 == -1 )
      {
        if ( v199 )
        {
          v115 = *(v199 - 1);
          if ( v115 )
          {
            v167 = (unsigned int)(v115 - 1);
            v42 = v199[v167];
            *(v199 - 1) = v167;
            v43 = *(_QWORD *)(a3 + 8LL * (unsigned int)v42 + 80) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_26:
            if ( !v39 )
              goto LABEL_124;
            goto LABEL_27;
          }
        }
        v116 = *(v178 - 1) - 1;
        v42 = v178[v116];
        *(v178 - 1) = v116;
        v107 = *(_QWORD *)(a3 + 8LL * (unsigned int)v42 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v107 = *(_QWORD *)(a3 + 8LL * v106 + 80) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v43 = sub_5B81C0((unsigned int *)a1, v107, (__int64 *)&v203);
      if ( !v39 )
      {
LABEL_124:
        v195 = (void *)v43;
        v108 = (_QWORD *)sub_186B270(0x18u);
        v39 = v108 + 1;
        *v108 = 2;
        v43 = (unsigned __int64)v195;
        v46 = 1;
        v47 = v39;
        goto LABEL_29;
      }
LABEL_27:
      v44 = *((_DWORD *)v39 - 1);
      if ( v44 == *((_DWORD *)v39 - 2) )
      {
        v93 = (3 * v44 + 1) >> 1;
        v94 = 8 * v93 + 8;
        if ( 8 * v44 + 8 >= (unsigned int)v94 || v44 >= v93 )
        {
          v16 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
          *v16 = (char *)off_1C63128;
          sub_2333C0(v16 + 1, v206);
          sub_233E40((__int64)v206);
          __cxa_throw(v16, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v194 = (void *)v43;
        v95 = (unsigned int *)sub_186B300(v39 - 1, v94);
        v96 = v95[1];
        v39 = (__int64 *)(v95 + 2);
        *v95 = v93;
        v43 = (unsigned __int64)v194;
        LODWORD(v95) = v96;
        v47 = &v39[v96];
        v46 = (_DWORD)v95 + 1;
      }
      else
      {
        v45 = v44;
        v46 = v44 + 1;
        v47 = &v39[v45];
      }
LABEL_29:
      *v47 = v43;
      *((_DWORD *)v39 - 1) = v46;
      v48 = (*(_QWORD *)(a3 + 8 * v42 + 80) & 7LL) == 1;
      if ( v40 )
      {
        v49 = *((_DWORD *)v40 - 1);
        if ( v49 == *((_DWORD *)v40 - 2) )
        {
          v89 = (3 * v49 + 1) >> 1;
          v90 = v89 + 8;
          if ( v49 + 8 >= (unsigned int)v90 || v49 >= v89 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v206);
            sub_233E40((__int64)v206);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          ptrb = (void *)v43;
          v91 = (unsigned int *)sub_186B300(v40 - 8, v90);
          v92 = v91[1];
          v40 = (char *)(v91 + 2);
          *v91 = v89;
          v43 = (unsigned __int64)ptrb;
          LODWORD(v91) = v92;
          v52 = &v40[v92];
          v51 = (_DWORD)v91 + 1;
        }
        else
        {
          v50 = v49;
          v51 = v49 + 1;
          v52 = &v40[v50];
        }
      }
      else
      {
        v196 = (void *)v43;
        v114 = (_QWORD *)sub_186B270(0xAu);
        v40 = (char *)(v114 + 1);
        *v114 = 2;
        v43 = (unsigned __int64)v196;
        v51 = 1;
        v52 = v40;
      }
      *v52 = v48;
      *((_DWORD *)v40 - 1) = v51;
      v53 = (_DWORD **)sub_62B3A0(*(_QWORD *)(a1 + 40), v43);
      v54 = *v53;
      v172 = v53;
      if ( !*v53 )
        goto LABEL_46;
      v55 = *(v54 - 1);
      if ( v20 )
      {
        LODWORD(size) = *((_DWORD *)v20 - 1);
        if ( (unsigned int)size >= v55 )
        {
          if ( !v55 )
            goto LABEL_46;
          goto LABEL_36;
        }
        v185 = v55 + 1;
        if ( (unsigned int)size >= v55 + 1 )
        {
          *((_DWORD *)v20 - 1) = v55 + 1;
LABEL_36:
          if ( v55 <= 1 )
            goto LABEL_117;
          goto LABEL_37;
        }
      }
      else
      {
        if ( !v55 )
          goto LABEL_46;
        v185 = v55 + 1;
        if ( v55 == -1 )
        {
          v55 = -1;
          if ( (unsigned __int64)-(__int64)(v54 + 1) <= 8 )
          {
LABEL_132:
            v113 = 0;
            do
            {
              *(_DWORD *)&v20[4 * v113] |= v54[v113];
              ++v113;
            }
            while ( (unsigned int)v113 < v55 );
            goto LABEL_46;
          }
          goto LABEL_39;
        }
        v109 = (_QWORD *)sub_186B270(0x10u);
        LODWORD(size) = 0;
        *v109 = 2;
        v20 = (char *)(v109 + 1);
      }
      while ( 1 )
      {
        v100 = *((_DWORD *)v20 - 2);
        if ( v100 >= v185 )
          break;
        v97 = (3 * v100 + 1) >> 1;
        v98 = 4 * v97 + 8;
        if ( 4 * v100 + 8 >= (unsigned int)v98 || v100 >= v97 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v206);
          sub_233E40((__int64)v206);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ptrc = (3 * v100 + 1) >> 1;
        v99 = (unsigned int *)sub_186B300(v20 - 8, v98);
        v20 = (char *)(v99 + 2);
        *v99 = ptrc;
      }
      *((_DWORD *)v20 - 1) = v185;
      v101 = 4LL * v185;
      v102 = 4LL * (unsigned int)size;
      if ( v102 != v101 )
        memset(&v20[v102], 0, v101 - v102);
      v54 = *v172;
      if ( v55 <= 1 )
      {
LABEL_117:
        *(_DWORD *)v20 |= *v54;
        goto LABEL_46;
      }
LABEL_37:
      if ( (unsigned __int64)(v20 - (char *)(v54 + 1)) <= 8 )
        goto LABEL_132;
      if ( v55 <= 3 )
      {
        LODWORD(v57) = 0;
        goto LABEL_43;
      }
LABEL_39:
      v56 = 0;
      do
      {
        a5 = _mm_or_si128(_mm_loadu_si128((const __m128i *)&v20[v56 * 4]), _mm_loadu_si128((const __m128i *)&v54[v56]));
        *(__m128i *)&v20[v56 * 4] = a5;
        v56 += 4;
      }
      while ( v56 != 4LL * (v55 >> 2) );
      if ( (v55 & 3) == 0 )
        goto LABEL_46;
      v57 = v55 & 0xFFFFFFFC;
      v55 -= v57;
      if ( v55 == 1 )
        goto LABEL_45;
LABEL_43:
      v58 = (__m128i *)&v20[4 * (unsigned int)v57];
      a5.m128i_i64[0] = _mm_or_si128(_mm_loadl_epi64((const __m128i *)&v54[(unsigned int)v57]), _mm_loadl_epi64(v58)).m128i_u64[0];
      v58->m128i_i64[0] = a5.m128i_i64[0];
      if ( (v55 & 1) != 0 )
      {
        v57 = (v55 & 0xFFFFFFFE) + (unsigned int)v57;
LABEL_45:
        *(_DWORD *)&v20[4 * v57] |= v54[v57];
      }
LABEL_46:
      if ( v175 == *((_DWORD *)v39 - 1) )
        goto LABEL_47;
    }
    v43 = *(_QWORD *)(a3 + 8LL * v41 + 80) & 0xFFFFFFFFFFFFFFF8LL;
    goto LABEL_26;
  }
LABEL_47:
  v59 = *src;
  v193 = *(_DWORD **)(v171 + 16);
  if ( *src )
  {
    v183 = *(v59 - 1);
    size = 4LL * (unsigned int)*(v59 - 2) + 8;
    a5 = _mm_cvtsi32_si128(*(v59 - 2));
    v60 = sub_186B270(size);
    v59 = (_DWORD *)(v60 + 8);
    v61 = _mm_unpacklo_epi32(a5, _mm_cvtsi32_si128(v183)).m128i_u64[0];
    *(_QWORD *)v60 = v61;
    LODWORD(v172) = v61;
    v62 = *src;
    if ( *src )
    {
      v63 = 4LL * (unsigned int)*(v62 - 1);
      if ( v63 <= 4 )
      {
        if ( v63 == 4 )
          *(_DWORD *)(v60 + 8) = *v62;
      }
      else
      {
        memmove(v59, v62, v63);
      }
    }
    v64 = sub_186B270(size);
    ptra = v64;
    v65 = 4LL * *(unsigned int *)(v60 + 4);
    *(_QWORD *)v64 = v61;
    v66 = (void **)(v64 + 8);
    if ( v65 <= 4 )
    {
      v180 = v193[3];
      if ( v65 == 4 )
        *(_DWORD *)(v64 + 8) = *(_DWORD *)(v60 + 8);
    }
    else
    {
      v66 = (void **)memcpy((void *)(v64 + 8), v59, v65);
      v180 = v193[3];
    }
    if ( v183 )
    {
      src = v66;
      v67 = sub_186B270(size);
      v68 = (void *)v67;
      v206[0] = (int *)(v67 + 8);
      *(_QWORD *)v67 = v61;
      v69 = 4LL * *(unsigned int *)(ptra + 4);
      if ( v69 <= 4 )
      {
        size = (__int64)src;
        if ( v69 == 4 )
          *(_DWORD *)(v67 + 8) = *(_DWORD *)(ptra + 8);
      }
      else
      {
        size = (__int64)src;
        memcpy((void *)(v67 + 8), src, v69);
      }
      LODWORD(v184) = sub_5B7080(v206, v183);
      sub_186B220(v68);
      v66 = (void **)size;
    }
    else
    {
      LODWORD(v184) = 778;
    }
  }
  else
  {
    ptra = -8;
    v66 = nullptr;
    LODWORD(v184) = 778;
    v180 = *(_DWORD *)(*(_QWORD *)(v171 + 16) + 12LL);
  }
  v70 = *(_QWORD *)(a1 + 96);
  v71 = v180 ^ v184;
  v72 = *(unsigned int *)(a1 + 104);
  v73 = v72 - 1;
  v72 *= 32;
  v74 = v70 + v72;
  v75 = 32LL * ((v180 ^ (unsigned int)v184) & v73);
  v76 = v70 + v75;
  if ( v75 == v72 )
  {
LABEL_72:
    if ( v70 != v76 )
    {
      LODWORD(a7) = (_DWORD)v193;
      do
      {
        v80 = *(_DWORD *)(v70 + 4);
        if ( v80 == 2 )
        {
          if ( v71 == *(_DWORD *)v70 && v193 == *(_DWORD **)(v70 + 8) )
          {
            v81 = *(_DWORD **)(v70 + 16);
            if ( v81 )
            {
              v82 = (unsigned int)*(v81 - 1);
              if ( v66 )
              {
                if ( (_DWORD)v82 == *((_DWORD *)v66 - 1) )
                {
                  v75 = (__int64)&v81[v82];
                  if ( v81 == (_DWORD *)v75 )
                    goto LABEL_86;
                  v83 = v66;
                  while ( *v81 == *(_DWORD *)v83 )
                  {
                    ++v81;
                    v83 = (void **)((char *)v83 + 4);
                    if ( (_DWORD *)v75 == v81 )
                      goto LABEL_86;
                  }
                }
              }
              else if ( !(_DWORD)v82 )
              {
                goto LABEL_87;
              }
            }
            else
            {
              if ( !v66 )
                goto LABEL_87;
              LODWORD(v75) = *((_DWORD *)v66 - 1);
              if ( !(_DWORD)v75 )
                goto LABEL_86;
            }
          }
        }
        else if ( !v80 )
        {
          break;
        }
        v70 += 32;
      }
      while ( v76 != v70 );
    }
LABEL_148:
    if ( v66 )
      sub_186B220((void *)ptra);
    if ( v59 )
      sub_186B220(v59 - 2);
    sub_1872CE0("");
    sub_1873130(114, 264);
  }
  v77 = v70 + v75;
  while ( 2 )
  {
    while ( 2 )
    {
      v78 = *(_DWORD *)(v77 + 4);
      if ( v78 != 2 )
      {
        if ( !v78 )
          goto LABEL_148;
LABEL_60:
        v77 += 32;
        if ( v74 == v77 )
          goto LABEL_72;
        continue;
      }
      break;
    }
    if ( v71 != *(_DWORD *)v77 || v193 != *(_DWORD **)(v77 + 8) )
      goto LABEL_60;
    v79 = *(_DWORD **)(v77 + 16);
    if ( !v79 )
    {
      if ( !v66 )
        goto LABEL_207;
      LODWORD(a7) = *((_DWORD *)v66 - 1);
      if ( !(_DWORD)a7 )
      {
        v70 = v77;
        sub_186B220((void *)ptra);
        goto LABEL_87;
      }
      goto LABEL_60;
    }
    v75 = (unsigned int)*(v79 - 1);
    if ( !v66 )
    {
      if ( !(_DWORD)v75 )
      {
LABEL_207:
        v70 = v77;
        goto LABEL_87;
      }
      goto LABEL_60;
    }
    if ( (_DWORD)v75 != *((_DWORD *)v66 - 1) )
      goto LABEL_60;
    a7 = &v79[v75];
    if ( v79 != a7 )
    {
      v184 = v77;
      v75 = (__int64)v66;
      while ( *v79 == *(_DWORD *)v75 )
      {
        ++v79;
        v75 += 4;
        if ( a7 == v79 )
        {
          v70 = v77;
          goto LABEL_86;
        }
      }
      v77 += 32;
      if ( v74 == v184 + 32 )
        goto LABEL_72;
      continue;
    }
    break;
  }
  v70 = v77;
LABEL_86:
  sub_186B220((void *)ptra);
LABEL_87:
  v84 = *(_QWORD *)(v70 + 24);
  if ( v59 )
    sub_186B220(v59 - 2);
  v124 = sub_15DC610(
           *(_QWORD *)(a1 + 32),
           v84,
           *(_DWORD *)(v84 + 32),
           (int)v171 + 32,
           v75,
           (int)a7,
           a4,
           v171,
           (int)v172,
           (int)src,
           v174,
           size,
           (int)v178,
           v180,
           v184,
           (void *)ptra);
  v181 = v124;
  if ( v39 )
    v125 = *((_DWORD *)v39 - 1);
  else
    v125 = 0;
  sub_5BA060(a1, v124, v125, v39, v40, v170, *(double *)a5.m128i_i64);
  v126 = *(_DWORD *)(a3 + 56);
  if ( v176 < v126 )
  {
    v127 = a3 + 8LL * v176;
    v128 = *(_QWORD *)(v127 + 80);
    v129 = a3 + 8 * (v176 + (unsigned __int64)(v126 - 1 - v176)) + 8;
    v197 = (void *)(v128 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v39 )
      goto LABEL_164;
    v153 = (_QWORD *)sub_186B270(0x18u);
    v39 = v153 + 1;
    *v153 = 2;
    v128 = *(_QWORD *)(v127 + 80);
    v154 = 1;
    v155 = v39;
    while ( 2 )
    {
      v131 = v128 & 7;
      *v155 = (__int64)v197;
      v132 = v131 == 1;
      *((_DWORD *)v39 - 1) = v154;
      if ( v40 )
      {
        v133 = *((_DWORD *)v40 - 1);
        if ( v133 == *((_DWORD *)v40 - 2) )
        {
          v141 = (3 * v133 + 1) >> 1;
          v142 = v141 + 8;
          if ( v133 + 8 >= (unsigned int)v142 || v133 >= v141 )
          {
            v11 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
            *v11 = (char *)off_1C63128;
            sub_2333C0(v11 + 1, v206);
            sub_233E40((__int64)v206);
            __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v186 = (3 * v133 + 1) >> 1;
          ptre = v132;
          v143 = (unsigned int *)sub_186B300(v40 - 8, v142);
          v40 = (char *)(v143 + 2);
          v127 += 8;
          *v143 = v186;
          LODWORD(v143) = v143[1];
          v40[(unsigned int)v143] = ptre;
          *((_DWORD *)v40 - 1) = (_DWORD)v143 + 1;
          if ( v127 == v129 )
            goto LABEL_171;
        }
        else
        {
          v134 = v133;
          v135 = v133 + 1;
          v136 = &v40[v134];
LABEL_162:
          v127 += 8;
          *v136 = v132;
          *((_DWORD *)v40 - 1) = v135;
          if ( v127 == v129 )
            goto LABEL_171;
        }
        v128 = *(_QWORD *)(v127 + 80);
        v197 = (void *)(v128 & 0xFFFFFFFFFFFFFFF8LL);
LABEL_164:
        v137 = *((_DWORD *)v39 - 1);
        if ( v137 == *((_DWORD *)v39 - 2) )
        {
          v138 = (3 * v137 + 1) >> 1;
          v139 = 8 * v138 + 8;
          if ( 8 * v137 + 8 >= (unsigned int)v139 || v137 >= v138 )
          {
            v13 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
            *v13 = (char *)off_1C63128;
            sub_2333C0(v13 + 1, v206);
            sub_233E40((__int64)v206);
            __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          ptrd = (3 * v137 + 1) >> 1;
          v140 = (unsigned int *)sub_186B300(v39 - 1, v139);
          v39 = (__int64 *)(v140 + 2);
          v128 = *(_QWORD *)(v127 + 80);
          *v140 = ptrd;
          LODWORD(v140) = v140[1];
          v155 = &v39[(unsigned int)v140];
          v154 = (_DWORD)v140 + 1;
        }
        else
        {
          v130 = v137;
          v154 = v137 + 1;
          v155 = &v39[v130];
        }
        continue;
      }
      break;
    }
    v198 = v131 == 1;
    v156 = (_QWORD *)sub_186B270(0xAu);
    v40 = (char *)(v156 + 1);
    *v156 = 2;
    v132 = v198;
    v135 = 1;
    v136 = v40;
    goto LABEL_162;
  }
LABEL_171:
  v144 = sub_5B9720(a1, v181);
  if ( v39 )
  {
    v145 = *((_DWORD *)v39 - 1);
    if ( v145 != *((_DWORD *)v39 - 2) )
    {
      v146 = &v39[v145];
      v147 = v145 + 1;
      goto LABEL_174;
    }
    v161 = (3 * v145 + 1) >> 1;
    v162 = 8 * v161 + 8;
    if ( 8 * v145 + 8 >= v162 || v145 >= v161 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, v206);
      sub_233E40((__int64)v206);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v163 = (unsigned int *)sub_186B300(v39 - 1, v162);
    v164 = v163[1];
    v39 = (__int64 *)(v163 + 2);
    *v163 = v161;
    v165 = (__int64 *)&v163[2 * v164 + 2];
    v147 = v164 + 1;
    *v165 = v144;
    v163[1] = v147;
    if ( !v40 )
    {
LABEL_194:
      v166 = sub_186B270(0xAu);
      *(_BYTE *)(v166 + 8) = 0;
      v40 = (char *)(v166 + 8);
      *(_QWORD *)v166 = 0x100000002LL;
      goto LABEL_190;
    }
  }
  else
  {
    v168 = (_QWORD *)sub_186B270(0x18u);
    v39 = v168 + 1;
    *v168 = 2;
    v147 = 1;
    v146 = v168 + 1;
LABEL_174:
    *v146 = v144;
    *((_DWORD *)v39 - 1) = v147;
    if ( !v40 )
      goto LABEL_194;
  }
  v148 = *((_DWORD *)v40 - 1);
  if ( v148 == *((_DWORD *)v40 - 2) )
  {
    v158 = (3 * v148 + 1) >> 1;
    if ( v148 + 8 >= v158 + 8 || v148 >= v158 )
    {
      v12 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0((__int64 *)v206, "Overflow encountered when expanding vector");
      *v12 = (char *)off_1C63128;
      sub_2333C0(v12 + 1, v206);
      sub_233E40((__int64)v206);
      __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v159 = (unsigned int *)sub_186B300(v40 - 8, v158 + 8);
    v160 = v159[1];
    *v159 = v158;
    v40 = (char *)(v159 + 2);
    *((_BYTE *)v159 + v160 + 8) = 0;
    v159[1] = v160 + 1;
LABEL_190:
    v147 = *((_DWORD *)v39 - 1);
    v149 = *(_QWORD *)(a1 + 24) + 656LL;
    v150 = a3 + 72;
  }
  else
  {
    v40[v148] = 0;
    *((_DWORD *)v40 - 1) = v148 + 1;
    v149 = *(_QWORD *)(a1 + 24) + 656LL;
    v150 = a3 + 72;
  }
  v151 = sub_62C680(v149, v181, v147, (_DWORD)v39, (_DWORD)v40, v150, 1);
  sub_63DAD0(v170, v151, *(double *)a5.m128i_i64);
  sub_629AF0(v151, *(_QWORD *)(a1 + 24));
  sub_186B220(v40 - 8);
  sub_186B220(v39 - 1);
  if ( v179 )
    sub_186B220((void *)(v179 - 8));
  result = (__int64)v199;
  if ( v199 )
    result = sub_186B220(v199 - 2);
  if ( v20 )
    return sub_186B220(v20 - 8);
  return result;
}

