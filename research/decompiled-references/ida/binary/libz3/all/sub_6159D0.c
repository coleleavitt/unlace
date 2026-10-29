__int64 __fastcall sub_6159D0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10)
{
  char **exception; // r13
  __int64 v12; // rbp
  char *v13; // rax
  char *v14; // r12
  const __m128i *v15; // rax
  __m128i v16; // xmm1
  _OWORD *v17; // rax
  _QWORD *v18; // rax
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r13
  __int64 *v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // rdx
  double v28; // xmm4_8
  double v29; // xmm5_8
  __m128i *v30; // rcx
  __int64 v31; // rax
  __m128i *v32; // rbx
  unsigned int v33; // eax
  __int64 v34; // rcx
  unsigned int v35; // ecx
  size_t v36; // rsi
  unsigned int *v37; // rax
  __int64 v38; // r13
  __int64 *v39; // rax
  __int64 *v40; // r15
  unsigned __int64 v41; // rdx
  double v42; // xmm4_8
  double v43; // xmm5_8
  __m128i *v44; // r13
  __m128i *v45; // rbp
  __int64 v46; // rbx
  unsigned int v47; // ecx
  __int64 v48; // rdx
  __int64 *v49; // rax
  __int64 *v50; // rsi
  __int64 v51; // rdi
  size_t v52; // rdx
  __int64 *v53; // rax
  unsigned int v54; // ecx
  __int64 *v55; // rsi
  __m128i *v56; // rax
  __m128i *v57; // r13
  __int64 v58; // r15
  __int64 v59; // rdx
  __int64 *v60; // rsi
  unsigned int v61; // ecx
  __int64 *v62; // rdi
  __int64 v63; // r8
  int v64; // eax
  __int64 v65; // rcx
  __int64 *v66; // r10
  __int64 *v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rsi
  char *i; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  char v74; // al
  int v75; // ecx
  int v76; // r8d
  int v77; // r9d
  __m128i *v78; // r15
  unsigned __int64 v79; // rax
  __int64 *v80; // r13
  __int64 v81; // rdx
  __int64 *v82; // r14
  __int64 v83; // rsi
  __int64 *v84; // rax
  __m128i *v85; // rbp
  __int64 *v86; // rbx
  __int64 v87; // r12
  unsigned int v88; // ecx
  __int64 *v89; // rax
  __int64 *v90; // rsi
  __int64 v91; // rcx
  char **v92; // rsi
  unsigned int v93; // r10d
  char *v94; // rdi
  __int64 v95; // r10
  char **v96; // r9
  __int64 v97; // rcx
  unsigned int v98; // r11d
  __int64 v99; // r10
  char *v100; // r9
  __int64 v101; // rcx
  char *v102; // rsi
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 *v105; // rsi
  unsigned int v106; // ecx
  __int64 *v107; // rdi
  __int64 v108; // rcx
  __int64 *v109; // r15
  __int64 *v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r13
  __int64 v116; // rax
  __int64 v117; // rbp
  _DWORD *v118; // r14
  __int64 *v120; // rbp
  __m128i *v121; // r13
  __int64 v122; // rsi
  __int64 *v123; // rbx
  unsigned __int64 v124; // rbp
  __int64 v125; // rsi
  __int64 v127; // r15
  __int64 v128; // rsi
  __int64 v129; // rax
  unsigned int v130; // r15d
  int v131; // ecx
  __int64 v132; // r11
  char *v133; // rsi
  char *v134; // rax
  char *v135; // rdi
  _QWORD *v136; // rax
  _QWORD *v137; // rcx
  char *v138; // r9
  _QWORD *v139; // rax
  char *v140; // rax
  char *j; // r15
  __int64 v142; // rdx
  _QWORD *v143; // rsi
  _QWORD *v144; // rdx
  __int64 v145; // rsi
  __int64 *v146; // rsi
  __int64 v147; // [rsp+0h] [rbp-138h]
  __int64 *v148; // [rsp+8h] [rbp-130h]
  __m128i *v149; // [rsp+8h] [rbp-130h]
  __int64 v150; // [rsp+10h] [rbp-128h]
  unsigned int v151; // [rsp+18h] [rbp-120h]
  unsigned int v152; // [rsp+18h] [rbp-120h]
  char *v153; // [rsp+18h] [rbp-120h]
  unsigned __int8 v154; // [rsp+20h] [rbp-118h]
  int v155; // [rsp+28h] [rbp-110h]
  __int64 v156; // [rsp+28h] [rbp-110h]
  int v158; // [rsp+3Ch] [rbp-FCh]
  __int64 v159; // [rsp+48h] [rbp-F0h]
  unsigned int v160; // [rsp+48h] [rbp-F0h]
  __int64 v161; // [rsp+50h] [rbp-E8h]
  __int64 v162; // [rsp+50h] [rbp-E8h]
  __int64 v163; // [rsp+50h] [rbp-E8h]
  char *v164; // [rsp+58h] [rbp-E0h]
  _QWORD *v165; // [rsp+58h] [rbp-E0h]
  char *v166; // [rsp+60h] [rbp-D8h]
  char *v167; // [rsp+60h] [rbp-D8h]
  __int64 v168; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v169; // [rsp+98h] [rbp-A0h]
  __m128i v170; // [rsp+B0h] [rbp-88h] BYREF
  __int64 *v171; // [rsp+C0h] [rbp-78h]
  void *v172[2]; // [rsp+C8h] [rbp-70h] BYREF
  int v173; // [rsp+D8h] [rbp-60h]
  void *v174; // [rsp+E0h] [rbp-58h]
  __int64 v175; // [rsp+E8h] [rbp-50h]
  int v176; // [rsp+F0h] [rbp-48h]

  v12 = a1;
  v13 = (char *)sub_186B270(0x40u);
  *(_OWORD *)v13 = 0;
  v14 = v13;
  *((_OWORD *)v13 + 1) = 0;
  *((_OWORD *)v13 + 2) = 0;
  *((_OWORD *)v13 + 3) = 0;
  v15 = *(const __m128i **)(a1 + 32);
  v171 = nullptr;
  v16 = (__m128i)(unsigned __int64)&v15[41];
  v170 = _mm_unpacklo_epi64(_mm_loadl_epi64(v15), v16);
  v17 = (_OWORD *)sub_186B270(0x80u);
  v172[0] = v17;
  *v17 = 0;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 0;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  v172[1] = &byte_8;
  v173 = 0;
  v18 = (_QWORD *)sub_186B270(0x80u);
  *v18 = 0;
  v21 = *(__int64 **)(a2 + 24);
  v18[2] = 0;
  v18[4] = 0;
  v18[6] = 0;
  v18[8] = 0;
  v18[10] = 0;
  v18[12] = 0;
  v18[14] = 0;
  v174 = v18;
  v22 = *(_QWORD *)(a1 + 32);
  v175 = 8;
  v176 = 0;
  v150 = v22 + 656;
  if ( !v21 || (v23 = *((unsigned int *)v21 - 1), !(_DWORD)v23) )
  {
    sub_63DFA0(a3, a2, v21, 0.0, *(double *)v16.m128i_i64, a6, a7, v19, v20, a10);
    if ( !*(_DWORD *)(a1 + 68) || !*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2952LL) )
    {
      v154 = 0;
      goto LABEL_132;
    }
    v154 = 0;
    v32 = nullptr;
    goto LABEL_45;
  }
  v24 = *v21;
  v25 = v21;
  v148 = &v21[v23];
  sub_62A000(v150, *v21);
  v26 = (_QWORD *)sub_186B270(0x18u);
  v30 = (__m128i *)(v26 + 1);
  *v26 = 2;
  v31 = 1;
  v32 = v30;
  while ( 1 )
  {
    ++v25;
    v30->m128i_i64[0] = v24;
    v32[-1].m128i_i32[3] = v31;
    if ( v25 == v148 )
      break;
    v24 = *v25;
    sub_62A000(v150, *v25);
    v33 = v32[-1].m128i_u32[3];
    if ( v33 == v32[-1].m128i_i32[2] )
    {
      v35 = (3 * v33 + 1) >> 1;
      v36 = 8 * v35 + 8;
      if ( 8 * v33 + 8 >= (unsigned int)v36 || v33 >= v35 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v168, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v168);
        sub_233E40((__int64)&v168);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v151 = (3 * v33 + 1) >> 1;
      v37 = (unsigned int *)sub_186B300(&v32[-1].m128i_u64[1], v36);
      v32 = (__m128i *)(v37 + 2);
      *v37 = v151;
      LODWORD(v37) = v37[1];
      v30 = (__m128i *)((char *)v32 + 8 * (unsigned int)v37);
      v31 = (unsigned int)((_DWORD)v37 + 1);
    }
    else
    {
      v34 = v33;
      v31 = v33 + 1;
      v30 = (__m128i *)((char *)v32 + 8 * v34);
    }
  }
  v38 = 8 * v31;
  v39 = &v32->m128i_i64[v31];
  v149 = (__m128i *)v39;
  if ( v39 == (__int64 *)v32 )
  {
    sub_63DFA0(a3, a2, v27, 0.0, *(double *)v16.m128i_i64, a6, a7, v28, v29, a10);
    v154 = 0;
    if ( !*(_DWORD *)(a1 + 68) )
      goto LABEL_129;
LABEL_44:
    if ( !*(_QWORD *)(*(_QWORD *)(v12 + 32) + 2952LL) )
      goto LABEL_129;
LABEL_45:
    v78 = (__m128i *)sub_186B270(0x50u);
    v79 = *(_QWORD *)(v12 + 24);
    v80 = *(__int64 **)(v12 + 56);
    strcpy(&v78[3].m128i_i8[8], "dl-subsumption");
    v78->m128i_i32[2] = 0;
    v78->m128i_i64[0] = (__int64)&off_1C60CE8;
    v81 = *(unsigned int *)(v12 + 64);
    v78[1].m128i_i64[0] = 0;
    v78[1].m128i_i8[8] = 1;
    v82 = &v80[v81];
    v78[3].m128i_i64[0] = 14;
    v78[4].m128i_i64[1] = 0;
    v78[2] = _mm_unpacklo_epi64((__m128i)v79, (__m128i)(unsigned __int64)&v78[3].m128i_u64[1]);
    if ( v80 != v82 )
    {
      while ( (unsigned __int64)*v80 <= 1 )
      {
        if ( v82 == ++v80 )
          goto LABEL_123;
      }
      if ( v82 != v80 )
      {
        v83 = *v80;
        while ( 1 )
        {
          sub_13333D0((_DWORD)v78, v83, *(_QWORD *)(v79 + 856), v75, v76, v77, v147);
          v84 = v80 + 1;
          if ( v82 == v80 + 1 )
            break;
          while ( 1 )
          {
            v83 = *v84;
            v80 = v84;
            if ( (unsigned __int64)*v84 > 1 )
              break;
            if ( v82 == ++v84 )
              goto LABEL_123;
          }
          if ( v82 == v84 )
            break;
          v79 = *(_QWORD *)(v12 + 24);
        }
      }
    }
LABEL_123:
    v115 = *(_QWORD *)(v12 + 32);
    v116 = sub_1336AB0(*(_QWORD *)(v115 + 2952), v78);
    v117 = v116;
    if ( v116 )
      ++*(_DWORD *)(v116 + 8);
    v118 = *(_DWORD **)(v115 + 2952);
    if ( v118 )
    {
      if ( v118[2]-- == 1 )
      {
        (**(void (__fastcall ***)(_DWORD *))v118)(v118);
        sub_186B220(v118);
      }
    }
    *(_QWORD *)(v115 + 2952) = v117;
    if ( v32 )
      goto LABEL_129;
    goto LABEL_132;
  }
  v40 = &v32->m128i_i64[1];
  _BitScanReverse64(&v41, v38 >> 3);
  sub_613850(v32, v39, 2LL * (int)v41, (__int64)sub_613840);
  if ( (unsigned __int64)v38 <= 0x80 )
  {
    if ( v38 == 8 )
      goto LABEL_27;
    v85 = v32;
    v86 = &v32->m128i_i64[1];
    v153 = v14;
    do
    {
      while ( 1 )
      {
        v87 = *v86;
        v88 = *(_DWORD *)(*v86 + 56);
        if ( v88 < *(_DWORD *)(v85->m128i_i64[0] + 56) )
          break;
        v52 = *(v86 - 1);
        v89 = v86 - 1;
        if ( v88 >= *(_DWORD *)(v52 + 56) )
        {
          *v86 = v87;
        }
        else
        {
          do
          {
            v89[1] = v52;
            v90 = v89;
            v52 = *--v89;
          }
          while ( v88 < *(_DWORD *)(v52 + 56) );
          *v90 = v87;
        }
        if ( v149 == (__m128i *)++v86 )
          goto LABEL_67;
      }
      v52 = (char *)v86 - (char *)v85;
      if ( (char *)v86 - (char *)v85 <= 8 )
      {
        if ( (char *)v86 - (char *)v85 == 8 )
          *v86 = v85->m128i_i64[0];
      }
      else
      {
        memmove(&v85->m128i_u64[1], v85, v52);
      }
      ++v86;
      v85->m128i_i64[0] = v87;
    }
    while ( v149 != (__m128i *)v86 );
LABEL_67:
    v32 = v85;
    v14 = v153;
    v12 = a1;
    v56 = (__m128i *)((char *)v32 + 8 * v32[-1].m128i_u32[3]);
    v149 = v56;
  }
  else
  {
    v44 = v32 + 8;
    v45 = v32;
    do
    {
      while ( 1 )
      {
        v46 = *v40;
        v47 = *(_DWORD *)(*v40 + 56);
        if ( v47 < *(_DWORD *)(v45->m128i_i64[0] + 56) )
          break;
        v48 = *(v40 - 1);
        v49 = v40 - 1;
        if ( v47 >= *(_DWORD *)(v48 + 56) )
        {
          *v40 = v46;
        }
        else
        {
          do
          {
            v49[1] = v48;
            v50 = v49;
            v48 = *--v49;
          }
          while ( v47 < *(_DWORD *)(v48 + 56) );
          *v50 = v46;
        }
        if ( v44 == (__m128i *)++v40 )
          goto LABEL_21;
      }
      if ( (char *)v40 - (char *)v45 <= 8 )
      {
        if ( (char *)v40 - (char *)v45 == 8 )
          *v40 = v45->m128i_i64[0];
      }
      else
      {
        memmove(&v45->m128i_u64[1], v45, (char *)v40 - (char *)v45);
      }
      ++v40;
      v45->m128i_i64[0] = v46;
    }
    while ( v44 != (__m128i *)v40 );
LABEL_21:
    v32 = v45;
    v12 = a1;
    do
    {
      while ( 1 )
      {
        v51 = v44->m128i_i64[0];
        v52 = v44[-1].m128i_u64[1];
        v53 = &v44[-1].m128i_i64[1];
        v54 = *(_DWORD *)(v44->m128i_i64[0] + 56);
        if ( v54 < *(_DWORD *)(v52 + 56) )
          break;
        v146 = (__int64 *)v44;
        v44 = (__m128i *)((char *)v44 + 8);
        *v146 = v51;
        if ( v149 == v44 )
          goto LABEL_25;
      }
      do
      {
        v53[1] = v52;
        v55 = v53;
        v52 = *--v53;
      }
      while ( v54 < *(_DWORD *)(v52 + 56) );
      v44 = (__m128i *)((char *)v44 + 8);
      *v55 = v51;
    }
    while ( v149 != v44 );
LABEL_25:
    v56 = (__m128i *)((char *)v32 + 8 * v32[-1].m128i_u32[3]);
    v149 = v56;
  }
  if ( v32 == v56 )
  {
    sub_63DFA0(a3, a2, v52, 0.0, *(double *)v16.m128i_i64, a6, a7, v42, v43, a10);
    v32 = v149;
    v154 = 0;
    if ( !*(_DWORD *)(v12 + 68) )
      goto LABEL_129;
    goto LABEL_44;
  }
LABEL_27:
  v154 = 0;
  v57 = v32;
  v155 = 0;
  v158 = 0;
  v152 = 8;
  do
  {
    v58 = v57->m128i_i64[0];
    v59 = *(unsigned int *)(v12 + 64);
    v60 = *(__int64 **)(v12 + 56);
    v61 = v59 - 1;
    v59 *= 8;
    v62 = (__int64 *)((char *)v60 + v59);
    v63 = *(_QWORD *)(*(_QWORD *)(v57->m128i_i64[0] + 40) + 16LL);
    v64 = *(_DWORD *)(v63 + 12);
    v65 = 8LL * (v64 & v61);
    v66 = &v60[(unsigned __int64)v65 / 8];
    if ( v65 == v59 )
    {
LABEL_99:
      while ( v66 != v60 )
      {
        v113 = *v60;
        if ( (unsigned __int64)*v60 > 1 )
        {
          if ( *(_DWORD *)(v113 + 12) == v64 && v63 == v113 )
            goto LABEL_68;
        }
        else if ( !v113 )
        {
          break;
        }
        ++v60;
      }
LABEL_35:
      v69 = *(_QWORD *)(v12 + 32);
      v70 = v57->m128i_i64[0];
      v161 = *(_QWORD *)(*(_QWORD *)(v57->m128i_i64[0] + 40) + 16LL);
      v168 = 0;
      v169 = v69 + 656;
      if ( (unsigned __int8)sub_615260(v12, v70, (__int64)&v170, &v168) )
      {
        if ( *(_BYTE *)(v12 + 129) )
        {
          v74 = sub_614550(v12, v168);
          v73 = v161;
          if ( v74 )
            sub_6147C0(v12, v161, v168);
        }
        if ( !(unsigned __int8)sub_64AA80(&v170, v168, i, v72, v73) )
        {
          v154 |= v58 != v168;
          sub_63DAD0(a3, v168, 0.0);
          sub_64A560(&v170, v168);
          if ( v168 )
            sub_62A410(v169, v168);
          goto LABEL_42;
        }
      }
      if ( v168 )
      {
        sub_62A410(v169, v168);
        v154 = 1;
        goto LABEL_42;
      }
LABEL_75:
      v154 = 1;
      goto LABEL_42;
    }
    v67 = &v60[(unsigned __int64)v65 / 8];
    while ( 1 )
    {
      v68 = *v67;
      if ( (unsigned __int64)*v67 > 1 )
        break;
      if ( !v68 )
        goto LABEL_35;
LABEL_32:
      if ( v62 == ++v67 )
        goto LABEL_99;
    }
    if ( *(_DWORD *)(v68 + 12) != v64 || v63 != v68 )
      goto LABEL_32;
LABEL_68:
    v91 = *(unsigned int *)(a2 + 160);
    v92 = *(char ***)(a2 + 152);
    v93 = v91 - 1;
    v91 *= 8;
    v94 = (char *)v92 + v91;
    v95 = 8LL * (v64 & v93);
    v96 = &v92[(unsigned __int64)v95 / 8];
    i = (char *)&v92[(unsigned __int64)v95 / 8];
    if ( v95 == v91 )
    {
LABEL_107:
      if ( v92 != v96 )
      {
        while ( 1 )
        {
          i = *v92;
          if ( (unsigned __int64)*v92 > 1 )
          {
            if ( *((_DWORD *)i + 3) == v64 && (char *)v63 == i )
              goto LABEL_76;
          }
          else if ( !i )
          {
            v154 = 1;
            goto LABEL_42;
          }
          if ( v96 == ++v92 )
            goto LABEL_75;
        }
      }
      goto LABEL_75;
    }
    while ( 2 )
    {
      v97 = *(_QWORD *)i;
      if ( *(_QWORD *)i <= 1u )
      {
        if ( !v97 )
          goto LABEL_75;
        goto LABEL_72;
      }
      if ( *(_DWORD *)(v97 + 12) != v64 || v63 != v97 )
      {
LABEL_72:
        i += 8;
        if ( v94 == i )
          goto LABEL_107;
        continue;
      }
      break;
    }
LABEL_76:
    v98 = v152 - 1;
    v99 = 8LL * v152;
    v100 = &v14[v99];
    v101 = 8LL * ((v152 - 1) & v64);
    v102 = &v14[v101];
    i = &v14[v101];
    if ( v101 != v99 )
    {
      do
      {
        v103 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v103 + 12) == v64 && v63 == v103 )
            goto LABEL_75;
        }
        else if ( !v103 )
        {
          goto LABEL_83;
        }
        i += 8;
      }
      while ( v100 != i );
    }
    if ( v14 != v102 )
    {
      for ( i = v14; v102 != i; i += 8 )
      {
        v114 = *(_QWORD *)i;
        if ( *(_QWORD *)i > 1u )
        {
          if ( *(_DWORD *)(v114 + 12) == v64 && v63 == v114 )
            goto LABEL_75;
        }
        else if ( !v114 )
        {
          break;
        }
      }
    }
LABEL_83:
    v104 = *(unsigned int *)(v12 + 88);
    v105 = *(__int64 **)(v12 + 80);
    v106 = v104 - 1;
    v104 *= 16;
    v107 = (__int64 *)((char *)v105 + v104);
    v108 = 16LL * (v64 & v106);
    v109 = &v105[(unsigned __int64)v108 / 8];
    if ( v108 == v104 )
    {
LABEL_91:
      while ( v109 != v105 )
      {
        v112 = *v105;
        if ( (unsigned __int64)*v105 > 1 )
        {
          if ( *(_DWORD *)(v112 + 12) == v64 && v63 == v112 )
          {
            v110 = v105;
            goto LABEL_147;
          }
        }
        else if ( !v112 )
        {
          break;
        }
        v105 += 2;
      }
LABEL_213:
      BUG();
    }
    v110 = &v105[(unsigned __int64)v108 / 8];
    while ( 1 )
    {
      while ( 1 )
      {
        v111 = *v110;
        if ( (unsigned __int64)*v110 > 1 )
          break;
        if ( !v111 )
          goto LABEL_213;
        v110 += 2;
        if ( v107 == v110 )
          goto LABEL_91;
      }
      if ( *(_DWORD *)(v111 + 12) == v64 && v63 == v111 )
        break;
      v110 += 2;
      if ( v107 == v110 )
        goto LABEL_91;
    }
LABEL_147:
    v127 = v110[1];
    if ( v127 )
    {
      v128 = v110[1];
      v166 = &v14[v99];
      v129 = *(_QWORD *)(v12 + 32) + 656LL;
      v159 = *(_QWORD *)(*(_QWORD *)(v57->m128i_i64[0] + 40) + 16LL);
      v168 = 0;
      v169 = v129;
      if ( !(unsigned __int8)sub_615260(v12, v128, (__int64)&v170, &v168) )
      {
        sub_1872CE0("");
        sub_1873130(114, 210);
      }
      v154 |= v127 != v168;
      sub_63DAD0(a3, v168, 0.0);
      v63 = v159;
      v98 = v152 - 1;
      v99 = 8LL * v152;
      v100 = v166;
      if ( v168 )
      {
        sub_62A410(v169, v168);
        v63 = v159;
        v98 = v152 - 1;
        v99 = 8LL * v152;
        v100 = v166;
      }
    }
    else
    {
      v154 = 1;
    }
    v130 = 2 * v152;
    if ( 3 * v152 < 4 * (v158 + v155) )
    {
      v164 = v100;
      v162 = v63;
      v152 *= 2;
      v136 = (_QWORD *)sub_186B270(8LL * v130);
      v99 = 8LL * v130;
      v137 = v136;
      v63 = v162;
      v138 = v164;
      if ( v130 )
      {
        v139 = memset(v136, 0, 8LL * v130);
        v63 = v162;
        v99 = 8LL * v130;
        v138 = v164;
        v137 = v139;
      }
      v98 = v130 - 1;
      v140 = (char *)v137 + v99;
      for ( j = v14; v138 != j; *v144 = v145 )
      {
        while ( *(_QWORD *)j <= 1u )
        {
          j += 8;
          if ( v138 == j )
            goto LABEL_183;
        }
        v142 = 8LL * (*(_DWORD *)(*(_QWORD *)j + 12LL) & v98);
        v143 = &v137[(unsigned __int64)v142 / 8];
        if ( v99 == v142 )
        {
LABEL_186:
          if ( v137 == v143 )
          {
LABEL_192:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v144 = v137;
          while ( *v144 )
          {
            if ( v143 == ++v144 )
              goto LABEL_192;
          }
        }
        else
        {
          v144 = &v137[(unsigned __int64)v142 / 8];
          while ( *v144 )
          {
            if ( v140 == (char *)++v144 )
              goto LABEL_186;
          }
        }
        v145 = *(_QWORD *)j;
        j += 8;
      }
LABEL_183:
      if ( v14 )
      {
        v167 = (char *)v137 + v99;
        v165 = v137;
        v163 = v99;
        v160 = v98;
        v156 = v63;
        sub_186B220(v14);
        v140 = v167;
        v137 = v165;
        v99 = v163;
        v98 = v160;
        v63 = v156;
      }
      v155 = 0;
      v100 = v140;
      v14 = (char *)v137;
    }
    v131 = *(_DWORD *)(v63 + 12);
    v132 = 8LL * (v131 & v98);
    v133 = &v14[v132];
    if ( v132 == v99 )
    {
      v135 = nullptr;
LABEL_160:
      if ( v133 != v14 )
      {
        v134 = v14;
        do
        {
          while ( 1 )
          {
            i = *(char **)v134;
            if ( *(_QWORD *)v134 <= 1u )
              break;
            if ( *((_DWORD *)i + 3) == v131 && (char *)v63 == i )
              goto LABEL_193;
            v134 += 8;
            if ( v133 == v134 )
              goto LABEL_168;
          }
          if ( !i )
            goto LABEL_169;
          v135 = v134;
          v134 += 8;
        }
        while ( v133 != v134 );
      }
LABEL_168:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v134 = &v14[v132];
    v135 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        i = *(char **)v134;
        if ( *(_QWORD *)v134 <= 1u )
          break;
        if ( *((_DWORD *)i + 3) == v131 && (char *)v63 == i )
        {
LABEL_193:
          *(_QWORD *)v134 = v63;
          goto LABEL_42;
        }
        v134 += 8;
        if ( v134 == v100 )
          goto LABEL_160;
      }
      if ( !i )
        break;
      v135 = v134;
      v134 += 8;
      if ( v134 == v100 )
        goto LABEL_160;
    }
LABEL_169:
    if ( v135 )
      --v155;
    else
      v135 = v134;
    *(_QWORD *)v135 = v63;
    ++v158;
LABEL_42:
    v57 = (__m128i *)((char *)v57 + 8);
  }
  while ( v149 != v57 );
  sub_63DFA0(a3, a2, i, 0.0, *(double *)v16.m128i_i64, a6, a7, v42, v43, a10);
  if ( *(_DWORD *)(v12 + 68) )
    goto LABEL_44;
LABEL_129:
  v120 = (__int64 *)v32;
  v121 = (__m128i *)((char *)v32 + 8 * v32[-1].m128i_u32[3]);
  if ( v32 < v121 )
  {
    do
    {
      v122 = *v120++;
      sub_62A410(v150, v122);
    }
    while ( v120 < (__int64 *)v121 );
  }
  sub_186B220(&v32[-1].m128i_u64[1]);
LABEL_132:
  sub_616AE0(v172);
  if ( v174 )
    sub_186B220(v174);
  if ( v172[0] )
    sub_186B220(v172[0]);
  v123 = v171;
  if ( v171 )
  {
    v124 = (unsigned __int64)&v171[*((unsigned int *)v171 - 1)];
    if ( (unsigned __int64)v171 >= v124 )
      goto LABEL_140;
    do
    {
      v125 = *v123++;
      sub_62A410(v170.m128i_i64[1], v125);
    }
    while ( (unsigned __int64)v123 < v124 );
    v123 = v171;
    if ( v171 )
LABEL_140:
      sub_186B220(v123 - 1);
  }
  if ( v14 )
    sub_186B220(v14);
  return v154;
}

