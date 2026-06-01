void *__fastcall sub_508500(__int64 a1, const void *a2)
{
  const void **v2; // rax
  const void **v3; // r15
  void *v4; // rax
  __int64 v5; // rbp
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD *); // rax
  void *v7; // rbx
  _DWORD *v8; // rax
  __int64 v9; // rax
  unsigned int v10; // eax
  _DWORD *v11; // r12
  unsigned int v12; // r13d
  _QWORD *v13; // rax
  unsigned int v14; // ebp
  size_t v15; // rsi
  unsigned int *v16; // rax
  unsigned int v17; // eax
  _QWORD *v18; // rbp
  unsigned int v19; // r14d
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned int v22; // edx
  _QWORD *v23; // r9
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  _QWORD *v27; // rdx
  _QWORD *v28; // r8
  _DWORD *v29; // rax
  __m128i v30; // xmm1
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rsi
  size_t v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128i v37; // xmm1
  __int64 v38; // rax
  __int64 v39; // rax
  _DWORD *v40; // rsi
  size_t v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // edx
  __int64 v44; // rax
  unsigned int *v45; // rax
  __int64 v46; // r14
  unsigned int v47; // r15d
  unsigned int *v48; // rcx
  unsigned int v49; // eax
  _QWORD *v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // rdi
  unsigned int v53; // r8d
  __int64 v54; // r9
  unsigned int v55; // r10d
  __int64 v56; // r8
  _QWORD *v57; // r9
  __int64 v58; // rax
  __int64 v59; // rsi
  int *v60; // rax
  int *v61; // rsi
  int v62; // edi
  __int64 v63; // rax
  __int64 v64; // r8
  _QWORD *v65; // rcx
  unsigned int v66; // eax
  __int64 v67; // rsi
  int v68; // eax
  __int64 *v69; // rsi
  unsigned int v70; // edx
  __int64 v71; // r14
  unsigned int v72; // r8d
  unsigned int v73; // ecx
  unsigned int v74; // eax
  unsigned int v75; // r15d
  __int64 v76; // rax
  unsigned int *v77; // rax
  unsigned int v78; // r9d
  __int64 v79; // rax
  unsigned int *v80; // rax
  unsigned int v81; // r15d
  unsigned int v82; // eax
  __int64 v83; // rdi
  unsigned int v84; // edx
  __int64 *v85; // rdi
  unsigned int v87; // r8d
  size_t v88; // rsi
  unsigned int *v89; // rax
  unsigned int v90; // r15d
  size_t v91; // rsi
  unsigned int *v92; // rax
  __int64 v93; // rsi
  unsigned int v94; // r9d
  size_t v95; // rsi
  unsigned int *v96; // rax
  unsigned int v97; // r8d
  unsigned int v98; // eax
  unsigned int v99; // r15d
  unsigned int v100; // eax
  __int64 v101; // rcx
  unsigned int *v102; // rdx
  unsigned int v103; // r15d
  size_t v104; // rsi
  unsigned int *v105; // rax
  unsigned int v106; // edx
  unsigned int v107; // ecx
  unsigned int *v108; // rax
  _QWORD *v109; // rax
  _QWORD *v110; // rax
  _QWORD *v111; // rax
  _DWORD *v112; // rax
  _QWORD *v113; // rax
  char **exception; // rbp
  char **v115; // r14
  char **v116; // r14
  char **v117; // r15
  char **v118; // r15
  unsigned int v119; // [rsp+0h] [rbp-A8h]
  unsigned int v120; // [rsp+4h] [rbp-A4h]
  unsigned int v121; // [rsp+4h] [rbp-A4h]
  _DWORD *v122; // [rsp+8h] [rbp-A0h]
  unsigned int v123; // [rsp+8h] [rbp-A0h]
  unsigned int v124; // [rsp+10h] [rbp-98h]
  _QWORD *v125; // [rsp+10h] [rbp-98h]
  unsigned int v126; // [rsp+10h] [rbp-98h]
  unsigned int v127; // [rsp+10h] [rbp-98h]
  unsigned int v128; // [rsp+10h] [rbp-98h]
  unsigned int v129; // [rsp+10h] [rbp-98h]
  unsigned int v130; // [rsp+18h] [rbp-90h]
  __int64 v131; // [rsp+18h] [rbp-90h]
  __int64 v132; // [rsp+18h] [rbp-90h]
  unsigned int v133; // [rsp+18h] [rbp-90h]
  unsigned int v134; // [rsp+18h] [rbp-90h]
  unsigned int v135; // [rsp+18h] [rbp-90h]
  __int64 v136; // [rsp+18h] [rbp-90h]
  _QWORD *v137; // [rsp+20h] [rbp-88h]
  unsigned int v138; // [rsp+20h] [rbp-88h]
  _QWORD *v139; // [rsp+20h] [rbp-88h]
  _QWORD *v140; // [rsp+20h] [rbp-88h]
  unsigned int v141; // [rsp+20h] [rbp-88h]
  unsigned int v142; // [rsp+20h] [rbp-88h]
  unsigned int v143; // [rsp+20h] [rbp-88h]
  unsigned int v144; // [rsp+20h] [rbp-88h]
  unsigned int v145; // [rsp+20h] [rbp-88h]
  _QWORD *v146; // [rsp+28h] [rbp-80h]
  _QWORD *v147; // [rsp+28h] [rbp-80h]
  unsigned int v148; // [rsp+28h] [rbp-80h]
  unsigned int v149; // [rsp+28h] [rbp-80h]
  unsigned int v150; // [rsp+28h] [rbp-80h]
  _DWORD **v151; // [rsp+30h] [rbp-78h]
  _QWORD *v152; // [rsp+38h] [rbp-70h]
  _QWORD *v153; // [rsp+38h] [rbp-70h]
  __int64 v154[11]; // [rsp+50h] [rbp-58h] BYREF

  v2 = (const void **)__dynamic_cast(
                        a2,
                        (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                        (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
                        0);
  if ( !v2
    || (v3 = v2,
        v4 = __dynamic_cast(
               v2[1],
               (const struct __class_type_info *)&`typeinfo for'datalog::relation_plugin,
               (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation_plugin,
               0),
        (v5 = (__int64)v4) == 0) )
  {
    __cxa_bad_cast();
  }
  v6 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v4 + 64LL);
  if ( v6 == sub_505450 )
  {
    v7 = (void *)sub_186B270(0x88u);
    sub_504C90((__int64)v7, v5, (_QWORD *)(a1 + 8), 0);
    goto LABEL_5;
  }
  v7 = (void *)v6(v5, 0, (_QWORD *)(a1 + 8));
  if ( v7 )
  {
LABEL_5:
    v7 = __dynamic_cast(
           v7,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
           0);
    v8 = *(_DWORD **)(a1 + 16);
    v122 = v8;
    if ( v8 )
      goto LABEL_6;
    goto LABEL_115;
  }
  v8 = *(_DWORD **)(a1 + 16);
  v122 = v8;
  if ( v8 )
  {
LABEL_6:
    v120 = *(v8 - 1);
    v9 = *((_QWORD *)v7 + 2);
    if ( v9 )
      goto LABEL_7;
LABEL_116:
    v112 = v3[2];
    if ( !v112 )
      return v7;
    v12 = *(v112 - 1);
    if ( !v12 )
      return v7;
    v119 = 0;
LABEL_9:
    v13 = (_QWORD *)sub_186B270(0x10u);
    v11 = v13 + 1;
    *v13 = 2;
    while ( 1 )
    {
      v17 = *(v11 - 2);
      if ( v17 >= v12 )
        break;
      v14 = (3 * v17 + 1) >> 1;
      v15 = 4 * v14 + 8;
      if ( 4 * v17 + 8 >= (unsigned int)v15 || v17 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v154, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v154);
        sub_233E40((__int64)v154);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v11 - 2, v15);
      *v16 = v14;
      v11 = v16 + 2;
    }
    *(v11 - 1) = v12;
    v18 = nullptr;
    v19 = 0;
    memset(v11, 255, 4LL * v12);
    v130 = 0;
    v124 = 0;
    do
    {
      while ( v124 < v120 && v122[v124] == v19 )
      {
        ++v19;
        ++v124;
        if ( v19 == v12 )
          goto LABEL_42;
      }
      v20 = v19;
      do
      {
        v21 = v20;
        v22 = v20;
        v20 = *(_DWORD *)(*((_QWORD *)v3[15] + 2) + 4LL * v20);
      }
      while ( v22 != v20 );
      v23 = (_QWORD *)(*(_QWORD *)v3[6] + 16 * v21);
      v24 = v130;
      do
      {
        v25 = v24;
        v26 = v24;
        v24 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 15) + 16LL) + 4LL * v24);
      }
      while ( v26 != v24 );
      v27 = (_QWORD *)(**((_QWORD **)v7 + 6) + 16 * v25);
      v28 = v27;
      if ( v27 != v23 )
      {
        if ( *v27 )
        {
          v146 = v27;
          v137 = v23;
          sub_186B220((void *)(*v27 - 8LL));
          v28 = v146;
          v23 = v137;
        }
        v29 = (_DWORD *)*v23;
        if ( *v23 )
        {
          v30 = _mm_cvtsi32_si128(*(v29 - 1));
          v31 = (unsigned int)*(v29 - 2);
          v152 = v28;
          v151 = (_DWORD **)v23;
          v138 = v31;
          v32 = sub_186B270(4 * v31 + 8);
          v28 = v152;
          v23 = v151;
          *(_QWORD *)v32 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v138), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v30))).m128i_u64[0];
          *v152 = v32 + 8;
          v33 = *v151;
          if ( *v151 )
          {
            v34 = 4LL * (unsigned int)*(v33 - 1);
            if ( v34 <= 4 )
            {
              if ( v34 == 4 )
                *(_DWORD *)(v32 + 8) = *v33;
            }
            else
            {
              memmove((void *)(v32 + 8), v33, v34);
              v23 = v151;
              v28 = v152;
            }
          }
        }
        else
        {
          *v28 = 0;
        }
      }
      if ( v28 + 1 != v23 + 1 )
      {
        v35 = v28[1];
        if ( v35 )
        {
          v147 = v28;
          v139 = v23;
          sub_186B220((void *)(v35 - 8));
          v28 = v147;
          v23 = v139;
        }
        v36 = v23[1];
        v140 = v23;
        if ( v36 )
        {
          v37 = _mm_cvtsi32_si128(*(_DWORD *)(v36 - 4));
          v38 = *(unsigned int *)(v36 - 8);
          v153 = v28;
          v148 = v38;
          v39 = sub_186B270(4 * v38 + 8);
          *(_QWORD *)v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v148), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v37))).m128i_u64[0];
          v153[1] = v39 + 8;
          v40 = (_DWORD *)v140[1];
          if ( v40 )
          {
            v41 = 4LL * (unsigned int)*(v40 - 1);
            if ( v41 <= 4 )
            {
              if ( v41 == 4 )
                *(_DWORD *)(v39 + 8) = *v40;
            }
            else
            {
              memmove((void *)(v39 + 8), v40, v41);
            }
          }
        }
        else
        {
          v28[1] = 0;
        }
      }
      v42 = v19;
      do
      {
        v43 = v42;
        v42 = *(_DWORD *)(*((_QWORD *)v3[15] + 2) + 4LL * v42);
      }
      while ( v43 != v42 );
      if ( v18 )
      {
        v44 = *((unsigned int *)v18 - 1);
        if ( (_DWORD)v44 == *((_DWORD *)v18 - 2) )
        {
          v87 = (unsigned int)(3 * v44 + 1) >> 1;
          v88 = 4 * v87 + 8;
          if ( 4 * (int)v44 + 8 >= (unsigned int)v88 || (unsigned int)v44 >= v87 )
          {
            v116 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v154, "Overflow encountered when expanding vector");
            *v116 = (char *)off_1C63128;
            sub_2333C0(v116 + 1, v154);
            sub_233E40((__int64)v154);
            __cxa_throw(v116, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v149 = v43;
          v141 = (unsigned int)(3 * v44 + 1) >> 1;
          v89 = (unsigned int *)sub_186B300(v18 - 1, v88);
          v18 = v89 + 2;
          v43 = v149;
          *v89 = v141;
          v45 = &v89[v89[1] + 2];
        }
        else
        {
          v45 = (unsigned int *)v18 + v44;
        }
      }
      else
      {
        v144 = v43;
        v109 = (_QWORD *)sub_186B270(0x10u);
        v18 = v109 + 1;
        v43 = v144;
        *v109 = 2;
        v45 = (unsigned int *)(v109 + 1);
      }
      ++v19;
      *v45 = v43;
      ++v130;
      ++*((_DWORD *)v18 - 1);
    }
    while ( v19 != v12 );
LABEL_42:
    if ( !v119 )
      goto LABEL_58;
    goto LABEL_43;
  }
LABEL_115:
  v9 = *((_QWORD *)v7 + 2);
  v120 = 0;
  if ( !v9 )
    goto LABEL_116;
LABEL_7:
  v10 = *(_DWORD *)(v9 - 4);
  v11 = v3[2];
  v119 = v10;
  if ( v11 )
  {
    v12 = *(v11 - 1);
    if ( v12 )
      goto LABEL_9;
    v18 = nullptr;
    v11 = nullptr;
    if ( !v10 )
      return v7;
  }
  else
  {
    v18 = nullptr;
    v12 = 0;
    if ( !v10 )
      return v7;
  }
LABEL_43:
  v46 = 0;
  do
  {
    while ( 1 )
    {
      v47 = v46;
      v48 = &v11[*((unsigned int *)v18 + v46)];
      v49 = *v48;
      if ( *v48 != -1 )
        break;
      *v48 = v46;
LABEL_45:
      if ( (unsigned int)++v46 >= v119 )
        goto LABEL_57;
    }
    v50 = *((_QWORD **)v7 + 15);
    v51 = v50[2];
    do
    {
      v52 = v49;
      v53 = v49;
      v49 = *(_DWORD *)(v51 + 4LL * v49);
    }
    while ( v53 != v49 );
    do
    {
      v54 = v47;
      v55 = v47;
      v47 = *(_DWORD *)(v51 + 4LL * v47);
    }
    while ( v55 != v47 );
    if ( v53 == v47 )
      goto LABEL_45;
    v56 = v50[3];
    if ( *(_DWORD *)(v56 + 4 * v54) >= *(_DWORD *)(v56 + 4 * v52) )
    {
      v47 = v49;
      v49 = v55;
    }
    v57 = (_QWORD *)v50[1];
    v131 = *((_QWORD *)v7 + 15);
    *(_DWORD *)(v51 + 4LL * v47) = v49;
    v58 = 4LL * v49;
    v125 = v57;
    *(_DWORD *)(v56 + v58) += *(_DWORD *)(v56 + 4LL * v47);
    v59 = v50[4];
    v60 = (int *)(v59 + v58);
    v61 = (int *)(v59 + 4LL * v47);
    v62 = *v61;
    *v61 = *v60;
    *v60 = v62;
    v63 = sub_180C100(v57 + 2, 24);
    v64 = v63;
    *(_QWORD *)v63 = off_1C4F500;
    *(_QWORD *)(v63 + 8) = v131;
    v65 = (_QWORD *)*v125;
    *(_DWORD *)(v63 + 16) = v47;
    if ( v65 )
    {
      v66 = *((_DWORD *)v65 - 1);
      if ( v66 == *((_DWORD *)v65 - 2) )
      {
        v90 = (3 * v66 + 1) >> 1;
        v91 = 8 * v90 + 8;
        if ( 8 * v66 + 8 >= (unsigned int)v91 || v66 >= v90 )
        {
          v115 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v154, "Overflow encountered when expanding vector");
          *v115 = (char *)off_1C63128;
          sub_2333C0(v115 + 1, v154);
          sub_233E40((__int64)v154);
          __cxa_throw(v115, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v132 = v64;
        v92 = (unsigned int *)sub_186B300(v65 - 1, v91);
        v93 = v92[1];
        v65 = v92 + 2;
        v64 = v132;
        *v125 = v92 + 2;
        *v92 = v90;
        LODWORD(v92) = v93;
        v69 = &v65[v93];
        v68 = (_DWORD)v92 + 1;
      }
      else
      {
        v67 = v66;
        v68 = v66 + 1;
        v69 = &v65[v67];
      }
    }
    else
    {
      v136 = v63;
      v111 = (_QWORD *)sub_186B270(0x18u);
      v64 = v136;
      *v111 = 2;
      v65 = v111 + 1;
      v68 = 1;
      *v125 = v65;
      v69 = v65;
    }
    *v69 = v64;
    ++v46;
    *((_DWORD *)v65 - 1) = v68;
  }
  while ( (unsigned int)v46 < v119 );
LABEL_57:
  if ( !v12 )
  {
    v71 = 0;
    goto LABEL_75;
  }
LABEL_58:
  if ( v120 )
  {
    if ( !*v122 )
    {
      v113 = (_QWORD *)sub_186B270(0x10u);
      *v113 = 2;
      v70 = 0;
      v73 = 0;
      v71 = (__int64)(v113 + 1);
      v72 = 0;
      v80 = (unsigned int *)(v113 + 1);
      goto LABEL_73;
    }
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v73 = 0;
  }
  else
  {
    v70 = 0;
    v72 = 0;
    v73 = 0;
    v71 = 0;
  }
  while ( 1 )
  {
    v74 = v72;
    do
    {
      v75 = v74;
      v74 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 15) + 16LL) + 4LL * v74);
    }
    while ( v75 != v74 );
    if ( v71 )
    {
      v76 = *(unsigned int *)(v71 - 4);
      if ( (_DWORD)v76 == *(_DWORD *)(v71 - 8) )
      {
        v94 = (unsigned int)(3 * v76 + 1) >> 1;
        v95 = 4 * v94 + 8;
        if ( 4 * (int)v76 + 8 >= (unsigned int)v95 || (unsigned int)v76 >= v94 )
        {
LABEL_134:
          v118 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v154, "Overflow encountered when expanding vector");
          *v118 = (char *)off_1C63128;
          sub_2333C0(v118 + 1, v154);
          sub_233E40((__int64)v154);
          __cxa_throw(v118, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v150 = v70;
        v142 = v73;
        v133 = v72;
        v126 = (unsigned int)(3 * v76 + 1) >> 1;
        v96 = (unsigned int *)sub_186B300((void *)(v71 - 8), v95);
        v71 = (__int64)(v96 + 2);
        v72 = v133;
        v73 = v142;
        v70 = v150;
        *v96 = v126;
        v77 = &v96[v96[1] + 2];
      }
      else
      {
        v77 = (unsigned int *)(v71 + 4 * v76);
      }
    }
    else
    {
      v145 = v70;
      v135 = v73;
      v129 = v72;
      v110 = (_QWORD *)sub_186B270(0x10u);
      v71 = (__int64)(v110 + 1);
      *v110 = 2;
      v72 = v129;
      v73 = v135;
      v70 = v145;
      v77 = (unsigned int *)(v110 + 1);
    }
    v78 = v73 + 1;
    *v77 = v75;
    ++*(_DWORD *)(v71 - 4);
    if ( v73 + 1 >= v12 )
      break;
    if ( v70 >= v120 )
    {
      v97 = v72 - v73;
      while ( 1 )
      {
        v98 = v97 + v78;
        do
        {
          v99 = v98;
          v98 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 15) + 16LL) + 4LL * v98);
        }
        while ( v98 != v99 );
        v100 = *(_DWORD *)(v71 - 8);
        v101 = *(unsigned int *)(v71 - 4);
        v102 = (unsigned int *)(v71 + 4 * v101);
        if ( v100 == (_DWORD)v101 )
        {
          v128 = v97;
          v106 = (3 * v100 + 1) >> 1;
          v123 = v78;
          v107 = 4 * v106 + 8;
          if ( 4 * v100 + 8 >= v107 )
            goto LABEL_134;
          v121 = (3 * v100 + 1) >> 1;
          if ( v100 >= v106 )
            goto LABEL_134;
          v108 = (unsigned int *)sub_186B300((void *)(v71 - 8), v107);
          v71 = (__int64)(v108 + 2);
          v97 = v128;
          v78 = v123;
          *v108 = v121;
          v102 = &v108[v108[1] + 2];
        }
        ++v78;
        *v102 = v99;
        ++*(_DWORD *)(v71 - 4);
        if ( v78 >= v12 )
          goto LABEL_74;
      }
    }
    ++v72;
    ++v73;
    while ( v70 < v120 && v122[v70] == v73 )
    {
      v79 = *(unsigned int *)(v71 - 4);
      if ( (_DWORD)v79 == *(_DWORD *)(v71 - 8) )
      {
        v103 = (unsigned int)(3 * v79 + 1) >> 1;
        v104 = 4 * v103 + 8;
        if ( 4 * (int)v79 + 8 >= (unsigned int)v104 || (unsigned int)v79 >= v103 )
        {
          v117 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v154, "Overflow encountered when expanding vector");
          *v117 = (char *)off_1C63128;
          sub_2333C0(v117 + 1, v154);
          sub_233E40((__int64)v154);
          __cxa_throw(v117, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v143 = v70;
        v134 = v73;
        v127 = v72;
        v105 = (unsigned int *)sub_186B300((void *)(v71 - 8), v104);
        v71 = (__int64)(v105 + 2);
        v72 = v127;
        v73 = v134;
        *v105 = v103;
        v70 = v143;
        v80 = &v105[v105[1] + 2];
      }
      else
      {
        v80 = (unsigned int *)(v71 + 4 * v79);
      }
LABEL_73:
      ++v73;
      *v80 = -1;
      ++v70;
      ++*(_DWORD *)(v71 - 4);
      if ( v73 >= v12 )
        goto LABEL_74;
    }
  }
LABEL_74:
  if ( !v119 )
    goto LABEL_93;
LABEL_75:
  v81 = 0;
  do
  {
    v82 = v81;
    do
    {
      v83 = v82;
      v84 = v82;
      v82 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 15) + 16LL) + 4LL * v82);
    }
    while ( v84 != v82 );
    v85 = (__int64 *)(**((_QWORD **)v7 + 6) + 16 * v83);
    v154[0] = v71;
    sub_503D90(v85, v154);
    ++v81;
  }
  while ( v81 < v119 );
  if ( v71 )
LABEL_93:
    sub_186B220((void *)(v71 - 8));
  if ( v11 )
    sub_186B220(v11 - 2);
  if ( v18 )
    sub_186B220(v18 - 1);
  return v7;
}

