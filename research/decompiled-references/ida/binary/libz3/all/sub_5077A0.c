void *__fastcall sub_5077A0(__int64 a1, const void *a2)
{
  const void **v2; // rax
  const void **v3; // r12
  void *v4; // rax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, __int64, _QWORD *); // rax
  void *v7; // r13
  unsigned int *v8; // rbx
  __int64 v9; // r9
  unsigned int *v10; // rbx
  unsigned int *v11; // rbp
  unsigned int v12; // r14d
  unsigned int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // rax
  unsigned int *v16; // rax
  __int64 v17; // rax
  unsigned int *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rsi
  unsigned int v21; // eax
  __int64 v22; // rdx
  unsigned int v23; // ecx
  _QWORD *v24; // r8
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  _QWORD *v28; // rdx
  _QWORD *v29; // r15
  _DWORD *v30; // rax
  __m128i v31; // xmm1
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rsi
  size_t v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rax
  __m128i v38; // xmm1
  __int64 v39; // rax
  __int64 v40; // rax
  _DWORD *v41; // rsi
  size_t v42; // rdx
  __int64 v43; // r15
  unsigned int v44; // r14d
  _QWORD *v45; // r9
  unsigned int v46; // eax
  __int64 v47; // rdx
  unsigned int v48; // ecx
  _QWORD *v49; // rdx
  _QWORD *v50; // r10
  _DWORD *v51; // rax
  __m128i v52; // xmm1
  __int64 v53; // rax
  __int64 v54; // rax
  _DWORD *v55; // rsi
  size_t v56; // rdx
  __int64 v57; // rdi
  __int64 v58; // rax
  __m128i v59; // xmm1
  __int64 v60; // rax
  __int64 v61; // rax
  _DWORD *v62; // rsi
  size_t v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // rax
  __int64 v66; // r8
  unsigned int v67; // r14d
  _QWORD *v68; // r15
  unsigned int v69; // eax
  __int64 v70; // rdx
  unsigned int v71; // ecx
  _QWORD *v72; // rdx
  _QWORD *v73; // r9
  _DWORD *v74; // rax
  __m128i v75; // xmm1
  __int64 v76; // rax
  __int64 v77; // rax
  _DWORD *v78; // rsi
  size_t v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rax
  __m128i v82; // xmm1
  __int64 v83; // rax
  __int64 v84; // rax
  _DWORD *v85; // rsi
  size_t v86; // rdx
  unsigned int v87; // eax
  unsigned int v88; // r14d
  __int64 v89; // r11
  unsigned int *v90; // rdx
  unsigned int v91; // eax
  unsigned int v92; // r15d
  __int64 (__fastcall *v93)(__int64, _QWORD *, unsigned int, unsigned int *); // rax
  _QWORD *v94; // rsi
  unsigned int v96; // edx
  size_t v97; // rsi
  unsigned int v98; // r15d
  unsigned int *v99; // rax
  unsigned int v100; // edx
  size_t v101; // rsi
  unsigned int *v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rsi
  unsigned int v107; // ecx
  unsigned int v108; // r15d
  __int64 v109; // rdi
  unsigned int v110; // r10d
  __int64 v111; // rcx
  _QWORD *v112; // r10
  __int64 v113; // rax
  __int64 v114; // rdx
  int *v115; // rax
  int *v116; // rdx
  int v117; // ecx
  __int64 v118; // rax
  __int64 v119; // rcx
  _QWORD *v120; // rdx
  unsigned int v121; // eax
  __int64 v122; // rsi
  int v123; // eax
  __int64 *v124; // rsi
  unsigned int v125; // r15d
  size_t v126; // rsi
  unsigned int *v127; // rax
  __int64 v128; // rsi
  _QWORD *v129; // rax
  _QWORD *v130; // rax
  char **v131; // r13
  char **v132; // r13
  char **exception; // r13
  unsigned int *ptr; // [rsp+8h] [rbp-B0h]
  unsigned int ptra; // [rsp+8h] [rbp-B0h]
  unsigned int ptrc; // [rsp+8h] [rbp-B0h]
  _QWORD *ptrb; // [rsp+8h] [rbp-B0h]
  _QWORD *v138; // [rsp+10h] [rbp-A8h]
  unsigned int v139; // [rsp+10h] [rbp-A8h]
  _QWORD *v140; // [rsp+10h] [rbp-A8h]
  _QWORD *v141; // [rsp+10h] [rbp-A8h]
  unsigned int v142; // [rsp+10h] [rbp-A8h]
  _QWORD *v143; // [rsp+10h] [rbp-A8h]
  unsigned int v144; // [rsp+10h] [rbp-A8h]
  _QWORD *v145; // [rsp+10h] [rbp-A8h]
  unsigned int v146; // [rsp+10h] [rbp-A8h]
  __int64 v147; // [rsp+10h] [rbp-A8h]
  __int64 v148; // [rsp+10h] [rbp-A8h]
  __int64 v149; // [rsp+10h] [rbp-A8h]
  unsigned int v150; // [rsp+18h] [rbp-A0h]
  _QWORD *v151; // [rsp+18h] [rbp-A0h]
  unsigned int v152; // [rsp+18h] [rbp-A0h]
  _QWORD *v153; // [rsp+18h] [rbp-A0h]
  _QWORD *v154; // [rsp+18h] [rbp-A0h]
  __int64 v155; // [rsp+18h] [rbp-A0h]
  __int64 v156; // [rsp+18h] [rbp-A0h]
  _DWORD **v157; // [rsp+20h] [rbp-98h]
  _QWORD *v158; // [rsp+20h] [rbp-98h]
  _QWORD *v159; // [rsp+20h] [rbp-98h]
  unsigned int v160; // [rsp+2Ch] [rbp-8Ch]
  _QWORD *v161; // [rsp+30h] [rbp-88h]
  _QWORD *v162; // [rsp+30h] [rbp-88h]
  unsigned int v163; // [rsp+30h] [rbp-88h]
  __int64 v164; // [rsp+30h] [rbp-88h]
  __int64 v165; // [rsp+30h] [rbp-88h]
  _DWORD **v166; // [rsp+38h] [rbp-80h]
  _QWORD *v167; // [rsp+40h] [rbp-78h]
  _QWORD *v168; // [rsp+40h] [rbp-78h]
  unsigned int *v169; // [rsp+48h] [rbp-70h]
  __int64 v170[11]; // [rsp+60h] [rbp-58h] BYREF

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
LABEL_5:
    v7 = __dynamic_cast(
           v7,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::bound_relation,
           0);
    goto LABEL_6;
  }
  v7 = (void *)v6(v5, 0, (_QWORD *)(a1 + 8));
  if ( v7 )
    goto LABEL_5;
LABEL_6:
  v8 = *(unsigned int **)(a1 + 16);
  v169 = v8;
  v9 = *(_QWORD *)v3[6];
  if ( v8 )
  {
    v160 = *(v8 - 1);
    if ( v9 )
    {
LABEL_8:
      v10 = nullptr;
      v11 = nullptr;
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= *(_DWORD *)(v9 - 4) )
          goto LABEL_37;
        v13 = v12;
        do
        {
          v14 = v13;
          v13 = *(_DWORD *)(*((_QWORD *)v3[15] + 2) + 4LL * v13);
        }
        while ( v14 != v13 );
        if ( !v11 )
          break;
        v15 = *(v11 - 1);
        if ( (_DWORD)v15 != *(v11 - 2) )
        {
          v16 = &v11[v15];
          goto LABEL_15;
        }
        v100 = (unsigned int)(3 * v15 + 1) >> 1;
        v101 = 4 * v100 + 8;
        if ( 4 * (int)v15 + 8 >= (unsigned int)v101 || (unsigned int)v15 >= v100 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v170, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v170);
          sub_233E40((__int64)v170);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        ptrc = (unsigned int)(3 * v15 + 1) >> 1;
        v102 = (unsigned int *)sub_186B300(v11 - 2, v101);
        v11 = v102 + 2;
        *v102 = ptrc;
        v102[v102[1]++ + 2] = v14;
        if ( v10 )
        {
LABEL_16:
          v17 = *(v10 - 1);
          if ( (_DWORD)v17 == *(v10 - 2) )
          {
            v96 = (unsigned int)(3 * v17 + 1) >> 1;
            v97 = 4 * v96 + 8;
            v98 = v96;
            if ( 4 * (int)v17 + 8 >= (unsigned int)v97 || (unsigned int)v17 >= v96 )
            {
              v131 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v170, "Overflow encountered when expanding vector");
              *v131 = (char *)off_1C63128;
              sub_2333C0(v131 + 1, v170);
              sub_233E40((__int64)v170);
              __cxa_throw(v131, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v99 = (unsigned int *)sub_186B300(v10 - 2, v97);
            v10 = v99 + 2;
            *v99 = v98;
            v18 = &v99[v99[1] + 2];
          }
          else
          {
            v18 = &v10[v17];
          }
          goto LABEL_18;
        }
LABEL_105:
        v103 = (_QWORD *)sub_186B270(0x10u);
        *v103 = 2;
        v18 = (unsigned int *)(v103 + 1);
        v10 = v18;
LABEL_18:
        *v18 = -1;
        v19 = v3[15];
        ++*(v10 - 1);
        v20 = v19[2];
        v21 = v12;
        do
        {
          v22 = v21;
          v23 = v21;
          v21 = *(_DWORD *)(v20 + 4LL * v21);
        }
        while ( v23 != v21 );
        v24 = (_QWORD *)(*(_QWORD *)v3[6] + 16 * v22);
        v25 = v12;
        do
        {
          v26 = v25;
          v27 = v25;
          v25 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 15) + 16LL) + 4LL * v25);
        }
        while ( v27 != v25 );
        v28 = (_QWORD *)(**((_QWORD **)v7 + 6) + 16 * v26);
        v29 = v28;
        if ( v28 != v24 )
        {
          if ( *v28 )
          {
            v138 = v24;
            sub_186B220((void *)(*v28 - 8LL));
            v24 = v138;
          }
          v30 = (_DWORD *)*v24;
          if ( *v24 )
          {
            v31 = _mm_cvtsi32_si128(*(v30 - 1));
            v32 = (unsigned int)*(v30 - 2);
            v157 = (_DWORD **)v24;
            v139 = v32;
            v33 = sub_186B270(4 * v32 + 8);
            v24 = v157;
            *(_QWORD *)v33 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v139), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v31))).m128i_u64[0];
            *v29 = v33 + 8;
            v34 = *v157;
            if ( *v157 )
            {
              v35 = 4LL * (unsigned int)*(v34 - 1);
              if ( v35 <= 4 )
              {
                if ( v35 == 4 )
                  *(_DWORD *)(v33 + 8) = *v34;
              }
              else
              {
                memmove((void *)(v33 + 8), v34, v35);
                v24 = v157;
              }
            }
          }
          else
          {
            *v29 = 0;
          }
        }
        if ( v29 + 1 != v24 + 1 )
        {
          v36 = v29[1];
          if ( v36 )
          {
            v140 = v24;
            sub_186B220((void *)(v36 - 8));
            v24 = v140;
          }
          v37 = v24[1];
          v141 = v24;
          if ( v37 )
          {
            v38 = _mm_cvtsi32_si128(*(_DWORD *)(v37 - 4));
            v39 = *(unsigned int *)(v37 - 8);
            v150 = v39;
            v40 = sub_186B270(4 * v39 + 8);
            *(_QWORD *)v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v150), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v38))).m128i_u64[0];
            v29[1] = v40 + 8;
            v41 = (_DWORD *)v141[1];
            if ( v41 )
            {
              v42 = 4LL * (unsigned int)*(v41 - 1);
              if ( v42 <= 4 )
              {
                if ( v42 == 4 )
                  *(_DWORD *)(v40 + 8) = *v41;
              }
              else
              {
                memmove((void *)(v40 + 8), v41, v42);
              }
            }
          }
          else
          {
            v29[1] = 0;
          }
        }
        ++v12;
        v9 = *(_QWORD *)v3[6];
        if ( !v9 )
          goto LABEL_37;
      }
      v129 = (_QWORD *)sub_186B270(0x10u);
      *v129 = 2;
      v16 = (unsigned int *)(v129 + 1);
      v11 = v16;
LABEL_15:
      *v16 = v14;
      ++*(v11 - 1);
      if ( v10 )
        goto LABEL_16;
      goto LABEL_105;
    }
    v10 = nullptr;
    v11 = nullptr;
LABEL_37:
    if ( v160 > 1 )
    {
      ptr = v169;
      do
      {
        v43 = *ptr;
        v142 = ptr[1];
        v44 = *ptr;
        v45 = (_QWORD *)(16 * v43 + v9);
        v46 = v142;
        do
        {
          v47 = v46;
          v48 = v46;
          v46 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 15) + 16LL) + 4LL * v46);
        }
        while ( v48 != v46 );
        v49 = (_QWORD *)(**((_QWORD **)v7 + 6) + 16 * v47);
        v50 = v49;
        if ( v49 != v45 )
        {
          if ( *v49 )
          {
            v161 = v49;
            v151 = v45;
            sub_186B220((void *)(*v49 - 8LL));
            v50 = v161;
            v45 = v151;
          }
          v51 = (_DWORD *)*v45;
          if ( *v45 )
          {
            v52 = _mm_cvtsi32_si128(*(v51 - 1));
            v53 = (unsigned int)*(v51 - 2);
            v167 = v50;
            v166 = (_DWORD **)v45;
            v152 = v53;
            v54 = sub_186B270(4 * v53 + 8);
            v50 = v167;
            v45 = v166;
            *(_QWORD *)v54 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v152), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v52))).m128i_u64[0];
            *v167 = v54 + 8;
            v55 = *v166;
            if ( *v166 )
            {
              v56 = 4LL * (unsigned int)*(v55 - 1);
              if ( v56 <= 4 )
              {
                if ( v56 == 4 )
                  *(_DWORD *)(v54 + 8) = *v55;
              }
              else
              {
                memmove((void *)(v54 + 8), v55, v56);
                v45 = v166;
                v50 = v167;
              }
            }
          }
          else
          {
            *v50 = 0;
          }
        }
        if ( v50 + 1 != v45 + 1 )
        {
          v57 = v50[1];
          if ( v57 )
          {
            v162 = v50;
            v153 = v45;
            sub_186B220((void *)(v57 - 8));
            v50 = v162;
            v45 = v153;
          }
          v58 = v45[1];
          v154 = v45;
          if ( v58 )
          {
            v59 = _mm_cvtsi32_si128(*(_DWORD *)(v58 - 4));
            v60 = *(unsigned int *)(v58 - 8);
            v168 = v50;
            v163 = v60;
            v61 = sub_186B270(4 * v60 + 8);
            *(_QWORD *)v61 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v163), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v59))).m128i_u64[0];
            v168[1] = v61 + 8;
            v62 = (_DWORD *)v154[1];
            if ( v62 )
            {
              v63 = 4LL * (unsigned int)*(v62 - 1);
              if ( v63 <= 4 )
              {
                if ( v63 == 4 )
                  *(_DWORD *)(v61 + 8) = *v62;
              }
              else
              {
                memmove((void *)(v61 + 8), v62, v63);
              }
            }
          }
          else
          {
            v50[1] = 0;
          }
        }
        while ( 1 )
        {
          v64 = v44;
          v44 = *(_DWORD *)(*((_QWORD *)v3[15] + 2) + 4 * v43);
          if ( v64 == v44 )
            break;
          v43 = v44;
        }
        ++ptr;
        v9 = *(_QWORD *)v3[6];
        v11[v142] = v44;
      }
      while ( ptr != &v169[v160 - 1] );
    }
    v65 = v160 - 1;
  }
  else
  {
    if ( v9 )
    {
      v160 = 0;
      goto LABEL_8;
    }
    v160 = 0;
    v11 = nullptr;
    v10 = nullptr;
    v65 = 0xFFFFFFFFLL;
  }
  v66 = v169[v65];
  ptra = *v169;
  v67 = v169[v65];
  v68 = (_QWORD *)(v9 + 16 * v66);
  v69 = *v169;
  do
  {
    v70 = v69;
    v71 = v69;
    v69 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 15) + 16LL) + 4LL * v69);
  }
  while ( v71 != v69 );
  v72 = (_QWORD *)(**((_QWORD **)v7 + 6) + 16 * v70);
  v73 = v72;
  if ( v72 != v68 )
  {
    if ( *v72 )
    {
      v155 = v66;
      v143 = v72;
      sub_186B220((void *)(*v72 - 8LL));
      v66 = v155;
      v73 = v143;
    }
    v74 = (_DWORD *)*v68;
    if ( *v68 )
    {
      v75 = _mm_cvtsi32_si128(*(v74 - 1));
      v76 = (unsigned int)*(v74 - 2);
      v164 = v66;
      v158 = v73;
      v144 = v76;
      v77 = sub_186B270(4 * v76 + 8);
      v73 = v158;
      v66 = v164;
      *(_QWORD *)v77 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v144), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v75))).m128i_u64[0];
      *v158 = v77 + 8;
      v78 = (_DWORD *)*v68;
      if ( *v68 )
      {
        v79 = 4LL * (unsigned int)*(v78 - 1);
        if ( v79 <= 4 )
        {
          if ( v79 == 4 )
            *(_DWORD *)(v77 + 8) = *v78;
        }
        else
        {
          memmove((void *)(v77 + 8), v78, v79);
          v73 = v158;
          v66 = v164;
        }
      }
    }
    else
    {
      *v73 = 0;
    }
  }
  if ( v73 + 1 != v68 + 1 )
  {
    v80 = v73[1];
    if ( v80 )
    {
      v156 = v66;
      v145 = v73;
      sub_186B220((void *)(v80 - 8));
      v66 = v156;
      v73 = v145;
    }
    v81 = v68[1];
    if ( v81 )
    {
      v82 = _mm_cvtsi32_si128(*(_DWORD *)(v81 - 4));
      v83 = *(unsigned int *)(v81 - 8);
      v165 = v66;
      v159 = v73;
      v146 = v83;
      v84 = sub_186B270(4 * v83 + 8);
      v66 = v165;
      *(_QWORD *)v84 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v146), _mm_cvtsi32_si128(_mm_cvtsi128_si32(v82))).m128i_u64[0];
      v159[1] = v84 + 8;
      v85 = (_DWORD *)v68[1];
      if ( v85 )
      {
        v86 = 4LL * (unsigned int)*(v85 - 1);
        if ( v86 <= 4 )
        {
          if ( v86 == 4 )
            *(_DWORD *)(v84 + 8) = *v85;
        }
        else
        {
          memmove((void *)(v84 + 8), v85, v86);
          v66 = v165;
        }
      }
    }
    else
    {
      v73[1] = 0;
    }
  }
  while ( 1 )
  {
    v87 = v67;
    v67 = *(_DWORD *)(*((_QWORD *)v3[15] + 2) + 4 * v66);
    if ( v87 == v67 )
      break;
    v66 = v67;
  }
  v11[ptra] = v67;
  v88 = 0;
  v89 = *(_QWORD *)v3[6];
  if ( v89 )
  {
    while ( v88 < *(_DWORD *)(v89 - 4) )
    {
      v90 = &v10[v11[v88]];
      v91 = *v90;
      if ( *v90 == -1 )
      {
        *v90 = v88;
      }
      else
      {
        v104 = *((_QWORD **)v7 + 15);
        v105 = v104[2];
        do
        {
          v106 = v91;
          v107 = v91;
          v91 = *(_DWORD *)(v105 + 4LL * v91);
        }
        while ( v107 != v91 );
        v108 = v88;
        do
        {
          v109 = v108;
          v110 = v108;
          v108 = *(_DWORD *)(v105 + 4LL * v108);
        }
        while ( v110 != v108 );
        if ( v107 != v108 )
        {
          v111 = v104[3];
          if ( *(_DWORD *)(v111 + 4 * v109) >= *(_DWORD *)(v111 + 4 * v106) )
          {
            v108 = v91;
            v91 = v110;
          }
          v112 = (_QWORD *)v104[1];
          v147 = *((_QWORD *)v7 + 15);
          *(_DWORD *)(v105 + 4LL * v108) = v91;
          v113 = 4LL * v91;
          ptrb = v112;
          *(_DWORD *)(v111 + v113) += *(_DWORD *)(v111 + 4LL * v108);
          v114 = v104[4];
          v115 = (int *)(v114 + v113);
          v116 = (int *)(v114 + 4LL * v108);
          v117 = *v116;
          *v116 = *v115;
          *v115 = v117;
          v118 = sub_180C100(v112 + 2, 24);
          v119 = v118;
          *(_QWORD *)v118 = off_1C4F500;
          v120 = (_QWORD *)*ptrb;
          *(_QWORD *)(v118 + 8) = v147;
          *(_DWORD *)(v118 + 16) = v108;
          if ( v120 )
          {
            v121 = *((_DWORD *)v120 - 1);
            if ( v121 == *((_DWORD *)v120 - 2) )
            {
              v125 = (3 * v121 + 1) >> 1;
              v126 = 8 * v125 + 8;
              if ( 8 * v121 + 8 >= (unsigned int)v126 || v121 >= v125 )
              {
                v132 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v170, "Overflow encountered when expanding vector");
                *v132 = (char *)off_1C63128;
                sub_2333C0(v132 + 1, v170);
                sub_233E40((__int64)v170);
                __cxa_throw(v132, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v148 = v119;
              v127 = (unsigned int *)sub_186B300(v120 - 1, v126);
              v128 = v127[1];
              v120 = v127 + 2;
              v119 = v148;
              *ptrb = v127 + 2;
              *v127 = v125;
              LODWORD(v127) = v128;
              v124 = &v120[v128];
              v123 = (_DWORD)v127 + 1;
            }
            else
            {
              v122 = v121;
              v123 = v121 + 1;
              v124 = &v120[v122];
            }
          }
          else
          {
            v149 = v118;
            v130 = (_QWORD *)sub_186B270(0x18u);
            v119 = v149;
            *v130 = 2;
            v120 = v130 + 1;
            v123 = 1;
            *ptrb = v120;
            v124 = v120;
          }
          *v124 = v119;
          ++v88;
          *((_DWORD *)v120 - 1) = v123;
          v89 = *(_QWORD *)v3[6];
          if ( !v89 )
            goto LABEL_90;
          continue;
        }
      }
      ++v88;
    }
    v92 = 0;
    while ( 1 )
    {
      if ( v92 >= *(_DWORD *)(v89 - 4) )
        goto LABEL_90;
      v93 = *(__int64 (__fastcall **)(__int64, _QWORD *, unsigned int, unsigned int *))(*(_QWORD *)v7 + 216LL);
      v94 = (_QWORD *)(**((_QWORD **)v7 + 6) + 16LL * v92);
      if ( v93 != sub_504C70 )
        break;
      if ( v160 )
      {
        sub_504830((__int64)v7, v94, v160, v169);
LABEL_89:
        ++v92;
        v89 = *(_QWORD *)v3[6];
        if ( !v89 )
          goto LABEL_90;
      }
      else
      {
        ++v92;
      }
    }
    v93((__int64)v7, v94, v160, v169);
    goto LABEL_89;
  }
LABEL_90:
  if ( v10 )
    sub_186B220(v10 - 2);
  if ( v11 )
    sub_186B220(v11 - 2);
  return v7;
}

