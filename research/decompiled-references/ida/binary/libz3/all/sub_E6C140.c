__int64 __fastcall sub_E6C140(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // ebp
  bool v6; // r14
  bool v7; // r12
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  bool *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __m128i *v15; // r14
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int8 *v18; // r13
  int v19; // edi
  __int64 v20; // rdx
  __m128i *v21; // r8
  __m128i *v22; // rax
  __m128i *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int v28; // r13d
  unsigned int *v29; // rax
  _DWORD *v30; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  _QWORD *v36; // rdx
  unsigned __int64 v37; // r14
  unsigned int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  _QWORD *v41; // rdx
  unsigned int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rdx
  char v45; // bl
  __int64 v46; // rdi
  __int64 v47; // rax
  char *v48; // rdi
  unsigned int v50; // r14d
  size_t v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  _DWORD *v54; // r13
  __int64 v55; // r9
  __int64 v56; // rax
  int v57; // r8d
  __int64 *v58; // r10
  unsigned __int64 v59; // rdi
  __int64 v60; // rax
  unsigned __int64 v61; // rdi
  __m128i v62; // xmm0
  unsigned __int64 v63; // rax
  __int64 v64; // r10
  unsigned __int64 v65; // r9
  unsigned int v66; // r15d
  _QWORD *v67; // rbp
  _QWORD *v68; // rbx
  void *v69; // rdi
  unsigned int v70; // r14d
  size_t v71; // rdi
  __int64 v72; // rax
  unsigned __int64 v73; // rdx
  _DWORD *v74; // r14
  __int64 v75; // r9
  __int64 v76; // rax
  int v77; // r8d
  __int64 *v78; // r10
  unsigned __int64 v79; // rdi
  __int64 v80; // rax
  unsigned __int64 v81; // rdi
  __m128i v82; // xmm0
  unsigned __int64 v83; // rdi
  __int64 *v84; // rax
  __int64 v85; // r10
  unsigned __int64 v86; // r9
  unsigned int v87; // r15d
  _QWORD *v88; // rbp
  _QWORD *v89; // rbx
  void *v90; // rdi
  unsigned int v91; // r12d
  size_t v92; // rsi
  unsigned int *v93; // rax
  _DWORD *v94; // rdi
  __int64 v95; // rax
  int v96; // r13d
  __m128i *v97; // rax
  __m128i *v98; // r10
  const __m128i *v99; // r8
  __int64 v100; // rsi
  __m128i *v101; // r11
  __m128i *v102; // rax
  __int64 v103; // r10
  __int8 *v104; // r15
  bool v105; // r13
  const __m128i *v106; // r12
  __int64 v107; // r11
  const __m128i *v108; // rbx
  unsigned int v109; // r8d
  __m128i *v110; // rbp
  __int64 v111; // rax
  __m128i *v112; // rdx
  __m128i *v113; // rax
  __m128i v114; // xmm0
  _QWORD *v115; // rax
  __int64 *v116; // rax
  unsigned __int64 v117; // rdi
  __int64 v118; // rcx
  __int64 *v119; // rax
  unsigned __int64 v120; // rdi
  __int64 v121; // rcx
  _QWORD *v122; // rax
  _QWORD *v123; // rax
  _QWORD *v124; // rax
  char **exception; // rbx
  __int64 v126; // [rsp+8h] [rbp-80h]
  __int64 v127; // [rsp+8h] [rbp-80h]
  size_t v128; // [rsp+8h] [rbp-80h]
  __int64 v129; // [rsp+10h] [rbp-78h]
  __int64 v130; // [rsp+10h] [rbp-78h]
  int v131; // [rsp+18h] [rbp-70h]
  unsigned int v132; // [rsp+18h] [rbp-70h]
  unsigned int v133; // [rsp+18h] [rbp-70h]
  __int64 v134[11]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 632);
  if ( v4 )
    v5 = *(_DWORD *)(v4 - 4);
  else
    v5 = 0;
  v134[0] = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v6 = 0;
  v7 = 0;
  sub_E67160((unsigned int **)(a1 + 632), v134);
  v8 = *(_DWORD **)(sub_15D1F10(a2) + 24);
  if ( v8 && *v8 == 5 )
  {
    v7 = v8[1] == 1;
    v6 = v7;
  }
  v9 = *(_QWORD *)(a1 + 608);
  if ( v9 )
  {
    v10 = *(unsigned int *)(v9 - 4);
    if ( (_DWORD)v10 == *(_DWORD *)(v9 - 8) )
    {
      v26 = (unsigned int)(3 * v10 + 1) >> 1;
      v27 = v26 + 8;
      v28 = v26;
      if ( (int)v10 + 8 >= (unsigned int)v27 || (unsigned int)v10 >= v26 )
        goto LABEL_135;
      v29 = (unsigned int *)sub_186B300((void *)(v9 - 8), v27);
      v30 = v29 + 2;
      *v29 = v28;
      v31 = v29[1];
      *(_QWORD *)(v2 + 608) = v30;
      v11 = (bool *)v30 + v31;
    }
    else
    {
      v11 = (bool *)(v10 + v9);
    }
  }
  else
  {
    v122 = (_QWORD *)sub_186B270(0xAu);
    *v122 = 2;
    v11 = (bool *)(v122 + 1);
    *(_QWORD *)(v2 + 608) = v122 + 1;
  }
  *v11 = v6;
  ++*(_DWORD *)(*(_QWORD *)(v2 + 608) - 4LL);
  v12 = *(_QWORD *)(v2 + 664);
  if ( !v12 || (v13 = *(unsigned int *)(v12 - 4), (_DWORD)v13 == *(_DWORD *)(v12 - 8)) )
  {
    sub_2FD3F0((unsigned int **)(v2 + 664));
    v12 = *(_QWORD *)(v2 + 664);
    v13 = *(unsigned int *)(v12 - 4);
  }
  *(_DWORD *)(v12 + 4 * v13) = -1;
  ++*(_DWORD *)(v12 - 4);
  v14 = *(unsigned int *)(v2 + 648);
  v131 = 2 * v14;
  if ( 3 * (int)v14 < (unsigned int)(4 * (*(_DWORD *)(v2 + 652) + *(_DWORD *)(v2 + 656))) )
  {
    v96 = 2 * v14;
    v128 = 16LL * (unsigned int)(2 * v14);
    v97 = (__m128i *)sub_186B270(v128);
    v17 = v128;
    v15 = v97;
    v98 = &v97[v128 / 0x10];
    if ( v96 )
    {
      do
      {
        v97->m128i_i64[0] = 0;
        ++v97;
        v97[-1].m128i_i32[2] = 0;
      }
      while ( v98 != v97 );
    }
    v99 = *(const __m128i **)(v2 + 640);
    v18 = (__int8 *)v98;
    v100 = *(unsigned int *)(v2 + 648);
    v101 = (__m128i *)&v99[v100];
    v16 = v131 - 1;
    if ( v99 != &v99[v100] )
    {
      v102 = v98;
      v103 = v2;
      v104 = v18;
      v105 = v7;
      v106 = &v99[v100];
      v107 = v3;
      v108 = v99;
      v109 = v5;
      v110 = v102;
      do
      {
        while ( v108->m128i_i64[0] <= 1uLL )
        {
          if ( v106 == ++v108 )
            goto LABEL_103;
        }
        v111 = 16LL * (*(_DWORD *)(v108->m128i_i64[0] + 12) & v16);
        v112 = &v15[(unsigned __int64)v111 / 0x10];
        if ( v128 == v111 )
        {
LABEL_107:
          if ( v15 == v112 )
          {
LABEL_122:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v113 = v15;
          while ( v113->m128i_i64[0] )
          {
            if ( v112 == ++v113 )
              goto LABEL_122;
          }
        }
        else
        {
          v113 = &v15[(unsigned __int64)v111 / 0x10];
          while ( v113->m128i_i64[0] )
          {
            if ( v110 == ++v113 )
              goto LABEL_107;
          }
        }
        v114 = _mm_loadu_si128(v108++);
        *v113 = v114;
      }
      while ( v106 != v108 );
LABEL_103:
      v3 = v107;
      v101 = *(__m128i **)(v103 + 640);
      v7 = v105;
      v5 = v109;
      v18 = v104;
      v2 = v103;
    }
    if ( v101 )
    {
      sub_186B220(v101);
      v17 = v128;
      v16 = v131 - 1;
    }
    *(_QWORD *)(v2 + 640) = v15;
    *(_DWORD *)(v2 + 656) = 0;
    *(_DWORD *)(v2 + 648) = v131;
  }
  else
  {
    v15 = *(__m128i **)(v2 + 640);
    v16 = v14 - 1;
    v17 = 16 * v14;
    v18 = &v15->m128i_i8[v17];
  }
  v19 = *(_DWORD *)(v3 + 12);
  v20 = 16LL * (v19 & v16);
  v21 = &v15[(unsigned __int64)v20 / 0x10];
  if ( v20 != v17 )
  {
    v22 = &v15[(unsigned __int64)v20 / 0x10];
    v23 = nullptr;
    while ( 1 )
    {
      v24 = v22->m128i_i64[0];
      if ( v22->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v24 + 12) == v19 && v3 == v24 )
        {
          v22->m128i_i64[0] = v3;
          v22->m128i_i32[2] = v5;
          goto LABEL_35;
        }
      }
      else
      {
        if ( !v24 )
        {
          if ( v23 )
            goto LABEL_113;
          v23 = v22;
          goto LABEL_114;
        }
        v23 = v22;
      }
      if ( ++v22 == (__m128i *)v18 )
        goto LABEL_26;
    }
  }
  v23 = nullptr;
  while ( 1 )
  {
LABEL_26:
    if ( v21 == v15 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v25 = v15->m128i_i64[0];
    if ( v15->m128i_i64[0] <= 1uLL )
    {
      if ( v25 )
      {
        v23 = v15;
        goto LABEL_25;
      }
      if ( v23 )
LABEL_113:
        --*(_DWORD *)(v2 + 656);
      else
        v23 = v15;
LABEL_114:
      v32 = *(_QWORD *)(v2 + 672);
      v23->m128i_i64[0] = v3;
      v23->m128i_i32[2] = v5;
      ++*(_DWORD *)(v2 + 652);
      if ( !v32 )
        goto LABEL_115;
LABEL_36:
      v33 = *(_DWORD *)(v32 - 4);
      if ( v33 != *(_DWORD *)(v32 - 8) )
      {
        v34 = v33;
        v35 = v33 + 1;
        v36 = (_QWORD *)(v32 + 8 * v34);
        goto LABEL_38;
      }
      v70 = (3 * v33 + 1) >> 1;
      v71 = 8 * v70 + 8;
      v133 = v70;
      if ( 8 * v33 + 8 < (unsigned int)v71 && v33 < v70 )
      {
        v72 = sub_186B270(v71);
        v73 = *(_QWORD *)(v2 + 672);
        v74 = (_DWORD *)v72;
        v32 = v72 + 8;
        if ( v73 )
        {
          v75 = *(unsigned int *)(v73 - 4);
          *(_DWORD *)(v72 + 4) = v75;
          v76 = 8 * v75;
          v77 = v75;
          v78 = (__int64 *)(v73 + 8 * v75);
          if ( v78 != (__int64 *)v73 )
          {
            v79 = v76 - 8;
            if ( (unsigned __int64)(v76 - 8) <= 8 || v32 < v73 + 16 && v73 < (unsigned __int64)(v74 + 6) )
            {
              v116 = (__int64 *)v73;
              v117 = v32;
              do
              {
                v118 = *v116;
                *v116++ = 0;
                v117 += 8LL;
                *(_QWORD *)(v117 - 8) = v118;
              }
              while ( v78 != v116 );
            }
            else
            {
              v80 = 0;
              v81 = (v79 >> 3) + 1;
              do
              {
                v82 = _mm_loadu_si128((const __m128i *)(v73 + v80 * 4));
                *(_OWORD *)(v73 + v80 * 4) = 0;
                *(__m128i *)&v74[v80 + 2] = v82;
                v80 += 4;
              }
              while ( 4 * (v81 >> 1) != v80 );
              if ( (v81 & 1) != 0 )
              {
                v83 = v81 & 0xFFFFFFFFFFFFFFFELL;
                v84 = (__int64 *)(v73 + 8 * v83);
                v85 = *v84;
                *v84 = 0;
                *(_QWORD *)(v32 + 8 * v83) = v85;
              }
            }
          }
          v86 = v73 + 8 * v75;
          if ( v77 )
          {
            v127 = v2;
            v87 = v5;
            v88 = (_QWORD *)v86;
            v130 = v3;
            v89 = (_QWORD *)v73;
            do
            {
              while ( *v89 )
              {
                v90 = (void *)(*v89++ - 8LL);
                sub_186B220(v90);
                if ( v89 == v88 )
                  goto LABEL_84;
              }
              ++v89;
            }
            while ( v89 != v88 );
LABEL_84:
            v5 = v87;
            v2 = v127;
            v3 = v130;
            v73 = *(_QWORD *)(v127 + 672);
          }
          sub_186B220((void *)(v73 - 8));
          v36 = (_QWORD *)(v32 + 8LL * (unsigned int)v74[1]);
          v35 = v74[1] + 1;
        }
        else
        {
          *(_DWORD *)(v72 + 4) = 0;
          v36 = (_QWORD *)(v72 + 8);
          v35 = 1;
        }
        *(_QWORD *)(v2 + 672) = v32;
        *v74 = v133;
        goto LABEL_38;
      }
LABEL_135:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_E65BE0(v134, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v134);
      sub_233E40((__int64)v134);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    if ( *(_DWORD *)(v25 + 12) == v19 && v3 == v25 )
      break;
LABEL_25:
    ++v15;
  }
  v15->m128i_i64[0] = v3;
  v15->m128i_i32[2] = v5;
LABEL_35:
  v32 = *(_QWORD *)(v2 + 672);
  if ( v32 )
    goto LABEL_36;
LABEL_115:
  v115 = (_QWORD *)sub_186B270(0x18u);
  v32 = (unsigned __int64)(v115 + 1);
  *v115 = 2;
  v35 = 1;
  *(_QWORD *)(v2 + 672) = v32;
  v36 = (_QWORD *)v32;
LABEL_38:
  v37 = *(_QWORD *)(v2 + 680);
  *v36 = 0;
  *(_DWORD *)(v32 - 4) = v35;
  if ( !v37 )
  {
    v124 = (_QWORD *)sub_186B270(0x18u);
    v37 = (unsigned __int64)(v124 + 1);
    *v124 = 2;
    v40 = 1;
    *(_QWORD *)(v2 + 680) = v37;
    v41 = (_QWORD *)v37;
    goto LABEL_41;
  }
  v38 = *(_DWORD *)(v37 - 4);
  if ( v38 != *(_DWORD *)(v37 - 8) )
  {
    v39 = v38;
    v40 = v38 + 1;
    v41 = (_QWORD *)(v37 + 8 * v39);
    goto LABEL_41;
  }
  v50 = (3 * v38 + 1) >> 1;
  v51 = 8 * v50 + 8;
  v132 = v50;
  if ( 8 * v38 + 8 >= (unsigned int)v51 || v38 >= v50 )
    goto LABEL_135;
  v52 = sub_186B270(v51);
  v53 = *(_QWORD *)(v2 + 680);
  v54 = (_DWORD *)v52;
  v37 = v52 + 8;
  if ( v53 )
  {
    v55 = *(unsigned int *)(v53 - 4);
    *(_DWORD *)(v52 + 4) = v55;
    v56 = 8 * v55;
    v57 = v55;
    v58 = (__int64 *)(v53 + 8 * v55);
    if ( v58 != (__int64 *)v53 )
    {
      v59 = v56 - 8;
      if ( (unsigned __int64)(v56 - 8) <= 8 || v37 < v53 + 16 && v53 < (unsigned __int64)(v54 + 6) )
      {
        v119 = (__int64 *)v53;
        v120 = v37;
        do
        {
          v121 = *v119;
          *v119++ = 0;
          v120 += 8LL;
          *(_QWORD *)(v120 - 8) = v121;
        }
        while ( v58 != v119 );
      }
      else
      {
        v60 = 0;
        v61 = (v59 >> 3) + 1;
        do
        {
          v62 = _mm_loadu_si128((const __m128i *)(v53 + v60 * 4));
          *(_OWORD *)(v53 + v60 * 4) = 0;
          *(__m128i *)&v54[v60 + 2] = v62;
          v60 += 4;
        }
        while ( 4 * (v61 >> 1) != v60 );
        if ( (v61 & 1) != 0 )
        {
          v63 = 8 * (v61 & 0xFFFFFFFFFFFFFFFELL);
          v64 = *(_QWORD *)(v53 + v63);
          *(_QWORD *)(v53 + v63) = 0;
          *(_QWORD *)&v54[v63 / 4 + 2] = v64;
        }
      }
    }
    v65 = v53 + 8 * v55;
    if ( v57 )
    {
      v126 = v2;
      v66 = v5;
      v67 = (_QWORD *)v65;
      v129 = v3;
      v68 = (_QWORD *)v53;
      do
      {
        while ( *v68 )
        {
          v69 = (void *)(*v68++ - 8LL);
          sub_186B220(v69);
          if ( v67 == v68 )
            goto LABEL_64;
        }
        ++v68;
      }
      while ( v68 != v67 );
LABEL_64:
      v5 = v66;
      v2 = v126;
      v3 = v129;
      v53 = *(_QWORD *)(v126 + 680);
    }
    sub_186B220((void *)(v53 - 8));
    v41 = (_QWORD *)(v37 + 8LL * (unsigned int)v54[1]);
    v40 = v54[1] + 1;
  }
  else
  {
    *(_DWORD *)(v52 + 4) = 0;
    v41 = (_QWORD *)(v52 + 8);
    v40 = 1;
  }
  *(_QWORD *)(v2 + 680) = v37;
  *v54 = v132;
LABEL_41:
  *v41 = 0;
  *(_DWORD *)(v37 - 4) = v40;
  v42 = *(_DWORD *)(v3 + 16);
  v43 = *(_QWORD *)(v2 + 688);
  v44 = v42 >> 5;
  if ( !v43 || (unsigned int)v44 >= *(_DWORD *)(v43 - 4) || (v45 = 1, (*(_DWORD *)(v43 + 4 * v44) & (1 << v42)) == 0) )
    v45 = v7 & *(_BYTE *)(v2 + 728);
  v46 = *(_QWORD *)(v2 + 616);
  if ( !v46 )
  {
    v123 = (_QWORD *)sub_186B270(0xAu);
    *v123 = 2;
    v48 = (char *)(v123 + 1);
    *(_QWORD *)(v2 + 616) = v123 + 1;
    goto LABEL_48;
  }
  v47 = *(unsigned int *)(v46 - 4);
  if ( (_DWORD)v47 == *(_DWORD *)(v46 - 8) )
  {
    v91 = (unsigned int)(3 * v47 + 1) >> 1;
    v92 = v91 + 8;
    if ( (int)v47 + 8 < (unsigned int)v92 && (unsigned int)v47 < v91 )
    {
      v93 = (unsigned int *)sub_186B300((void *)(v46 - 8), v92);
      v94 = v93 + 2;
      *v93 = v91;
      v95 = v93[1];
      *(_QWORD *)(v2 + 616) = v94;
      v48 = (char *)v94 + v95;
      goto LABEL_48;
    }
    goto LABEL_135;
  }
  v48 = (char *)(v47 + v46);
LABEL_48:
  *v48 = v45;
  ++*(_DWORD *)(*(_QWORD *)(v2 + 616) - 4LL);
  return v5;
}

