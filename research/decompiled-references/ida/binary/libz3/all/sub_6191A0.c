_QWORD *__fastcall sub_6191A0(_QWORD *a1, __int64 a2, __int64 a3)
{
  char **exception; // r12
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128i *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  int v14; // edi
  size_t v15; // r14
  __m128i *v16; // r15
  __int64 v17; // r11
  __m128i *v18; // r10
  __m128i *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  int v22; // esi
  unsigned int v23; // ebx
  __m128i *v24; // rdx
  __m128i *v25; // rdi
  __int64 v26; // rcx
  __m128i *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rax
  unsigned int v30; // edx
  __int64 v31; // rcx
  int v32; // edx
  __int64 *v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r14
  __int64 v36; // rcx
  __int64 v37; // rsi
  __m128i *v38; // rdx
  __m128i *v39; // rbx
  __m128i *i; // r9
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  int v44; // r11d
  unsigned int v45; // r9d
  __m128i *v46; // rcx
  __m128i *v47; // rdi
  __int64 v48; // rsi
  __m128i *v49; // rcx
  __m128i *v50; // rsi
  __int64 v51; // rcx
  _QWORD *v52; // rdx
  unsigned int v53; // eax
  __int64 v54; // rcx
  int v55; // eax
  __int64 *v56; // rcx
  __int64 *v57; // rdx
  __int64 v58; // r9
  __int64 v59; // rax
  int v60; // esi
  unsigned int v61; // r10d
  __int64 *v62; // rcx
  __int64 v63; // r10
  __int64 *v64; // rdi
  __int64 *v65; // r15
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // rbx
  _QWORD *v71; // rdx
  unsigned int v72; // eax
  __int64 v73; // rcx
  int v74; // eax
  __int64 *v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // ecx
  size_t v78; // rsi
  unsigned int *v79; // rax
  __int64 v80; // rcx
  _QWORD *v81; // rax
  unsigned int v82; // ebx
  unsigned int v83; // ecx
  unsigned int *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  _QWORD *v88; // rax
  _QWORD *v89; // rbx
  __int64 v90; // rdx
  unsigned int v91; // eax
  __int64 v92; // rdx
  __int64 v93; // r14
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // r14
  unsigned int v97; // eax
  unsigned int v98; // edx
  unsigned int v99; // ecx
  unsigned int v100; // r15d
  unsigned int *v101; // rax
  __int64 v103; // rbx
  __m128i *v104; // rax
  int v105; // r9d
  __m128i *v106; // rdi
  __m128i *v107; // rdx
  const __m128i *v108; // rax
  int v109; // r11d
  __m128i *v110; // r10
  __m128i *v111; // rdi
  __int64 v112; // rdx
  __m128i *v113; // rsi
  __m128i *v114; // rdx
  __m128i v115; // xmm0
  int v116; // esi
  __int64 v117; // rax
  __int64 v118; // r14
  _QWORD *v119; // rax
  unsigned int v120; // edx
  __int64 v121; // rcx
  int v122; // edx
  __int64 *v123; // rcx
  unsigned __int64 v124; // r12
  __int64 *v125; // r14
  __int64 v126; // rsi
  unsigned int v128; // r12d
  unsigned int v129; // ecx
  unsigned int *v130; // rdx
  __int64 v131; // rcx
  _QWORD *v132; // rdx
  unsigned int v133; // ebx
  unsigned int v134; // ecx
  unsigned int *v135; // rdx
  __int64 v136; // rcx
  __m128i *v137; // rax
  __m128i *v138; // rdi
  __m128i *v139; // rdx
  const __m128i *v140; // rcx
  __m128i *v141; // r10
  __m128i *v142; // rdi
  __int64 v143; // rax
  __m128i *v144; // rdx
  __m128i *v145; // rax
  _QWORD *v146; // rax
  _QWORD *v147; // rax
  int v148; // [rsp+10h] [rbp-C0h]
  unsigned int v149; // [rsp+24h] [rbp-ACh]
  unsigned int v150; // [rsp+28h] [rbp-A8h]
  size_t v151; // [rsp+28h] [rbp-A8h]
  unsigned __int64 v152; // [rsp+38h] [rbp-98h]
  __int64 v153; // [rsp+40h] [rbp-90h]
  unsigned int v154; // [rsp+40h] [rbp-90h]
  __m128i *v156; // [rsp+58h] [rbp-78h]
  __m128i *v157; // [rsp+58h] [rbp-78h]
  unsigned int j; // [rsp+58h] [rbp-78h]
  unsigned int v159; // [rsp+58h] [rbp-78h]
  __int64 v160; // [rsp+70h] [rbp-60h] BYREF
  __int64 v161[10]; // [rsp+80h] [rbp-50h] BYREF

  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(unsigned int *)(a2 + 136);
  v11 = *(__m128i **)(a2 + 128);
  a1[1] = 0;
  *a1 = v9;
  v12 = *(_DWORD *)(a3 + 12);
  v13 = v10 - 1;
  v156 = v11;
  v14 = v10;
  v15 = 16 * v10;
  v16 = &v11[v10];
  v17 = 16LL * (v12 & (unsigned int)(v10 - 1));
  v18 = &v11[(unsigned __int64)v17 / 0x10];
  if ( v17 != 16 * v10 )
  {
    v19 = &v11[(unsigned __int64)v17 / 0x10];
    while ( 1 )
    {
      v20 = v19->m128i_i64[0];
      if ( v19->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v20 + 12) == v12 && a3 == v20 )
        {
LABEL_44:
          v157 = v11;
          v149 = v19->m128i_u32[2];
          goto LABEL_45;
        }
      }
      else if ( !v20 )
      {
LABEL_8:
        v156 = v11;
        goto LABEL_9;
      }
      if ( v16 == ++v19 )
      {
        v156 = v11;
        break;
      }
    }
  }
  if ( v11 != v18 )
  {
    v19 = v11;
    while ( 1 )
    {
      v34 = v19->m128i_i64[0];
      if ( v19->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v34 + 12) == v12 && a3 == v34 )
          goto LABEL_44;
      }
      else if ( !v34 )
      {
        goto LABEL_8;
      }
      if ( v18 == ++v19 )
        goto LABEL_8;
    }
  }
LABEL_9:
  v21 = *(_QWORD *)(a2 + 160);
  if ( v21 )
    v149 = *(_DWORD *)(v21 - 4);
  else
    v149 = 0;
  v22 = *(_DWORD *)(a2 + 144);
  v23 = 2 * v10;
  if ( 3 * (int)v10 < (unsigned int)(4 * (v22 + *(_DWORD *)(a2 + 140))) )
  {
    v15 = 16LL * v23;
    v137 = (__m128i *)sub_186B270(v15);
    v156 = v137;
    v138 = v137;
    v139 = &v137[v15 / 0x10];
    if ( v23 )
    {
      do
      {
        v137->m128i_i64[0] = 0;
        ++v137;
        v137[-1].m128i_i32[2] = 0;
      }
      while ( v137 != v139 );
      v156 = v138;
    }
    v140 = *(const __m128i **)(a2 + 128);
    v154 = v23 - 1;
    v141 = (__m128i *)&v140[*(unsigned int *)(a2 + 136)];
    v16 = &v156[v15 / 0x10];
    if ( v140 != v141 )
    {
      do
      {
        if ( v140->m128i_i64[0] > 1uLL )
        {
          v142 = v156;
          v143 = 16LL * (*(_DWORD *)(v140->m128i_i64[0] + 12) & v154);
          v144 = &v156[(unsigned __int64)v143 / 0x10];
          if ( v15 == v143 )
          {
LABEL_202:
            v142 = v156;
            if ( v156 == v144 )
            {
LABEL_214:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v145 = v156;
            while ( v145->m128i_i64[0] )
            {
              if ( v144 == ++v145 )
                goto LABEL_214;
            }
          }
          else
          {
            v145 = &v156[(unsigned __int64)v143 / 0x10];
            while ( v145->m128i_i64[0] )
            {
              if ( v16 == ++v145 )
                goto LABEL_202;
            }
          }
          v156 = v142;
          *v145 = _mm_loadu_si128(v140);
        }
        ++v140;
      }
      while ( v141 != v140 );
      v141 = *(__m128i **)(a2 + 128);
    }
    if ( v141 )
      sub_186B220(v141);
    v12 = *(_DWORD *)(a3 + 12);
    *(_DWORD *)(a2 + 136) = v23;
    v22 = 0;
    *(_DWORD *)(a2 + 144) = 0;
    v17 = 16LL * (v12 & v154);
    *(_QWORD *)(a2 + 128) = v156;
    v18 = &v156[(unsigned __int64)v17 / 0x10];
  }
  if ( v17 == v15 )
  {
    v27 = v156;
    v25 = nullptr;
LABEL_21:
    if ( v27 == v18 )
    {
LABEL_29:
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v28 = v27->m128i_i64[0];
        if ( v27->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v28 + 12) == v12 && a3 == v28 )
        {
          v27->m128i_i64[0] = a3;
          v27->m128i_i32[2] = v149;
          goto LABEL_30;
        }
        if ( ++v27 == v18 )
          goto LABEL_29;
      }
      if ( !v28 )
        break;
      v25 = v27++;
      if ( v27 == v18 )
        goto LABEL_29;
    }
    if ( v25 )
      goto LABEL_212;
    v25 = v27;
  }
  else
  {
    v24 = v18;
    v25 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = v24->m128i_i64[0];
        if ( v24->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v26 + 12) == v12 && a3 == v26 )
        {
          v24->m128i_i64[0] = a3;
          v24->m128i_i32[2] = v149;
          goto LABEL_30;
        }
        if ( ++v24 == v16 )
          goto LABEL_20;
      }
      if ( !v26 )
        break;
      v25 = v24++;
      if ( v24 == v16 )
      {
LABEL_20:
        v27 = v156;
        goto LABEL_21;
      }
    }
    if ( v25 )
LABEL_212:
      *(_DWORD *)(a2 + 144) = v22 - 1;
    else
      v25 = v24;
  }
  v25->m128i_i64[0] = a3;
  v25->m128i_i32[2] = v149;
  ++*(_DWORD *)(a2 + 140);
LABEL_30:
  v29 = *(_QWORD **)(a2 + 160);
  ++*(_DWORD *)(a3 + 8);
  if ( v29 )
  {
    v30 = *((_DWORD *)v29 - 1);
    if ( v30 == *((_DWORD *)v29 - 2) )
    {
      v133 = (3 * v30 + 1) >> 1;
      v134 = 8 * v133 + 8;
      if ( 8 * v30 + 8 >= v134 || v30 >= v133 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v161, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v161);
        sub_233E40((__int64)v161);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v135 = (unsigned int *)sub_186B300(v29 - 1, v134);
      v29 = v135 + 2;
      v136 = v135[1];
      *v135 = v133;
      *(_QWORD *)(a2 + 160) = v135 + 2;
      LODWORD(v135) = v136;
      v33 = &v29[v136];
      v32 = (_DWORD)v135 + 1;
    }
    else
    {
      v31 = v30;
      v32 = v30 + 1;
      v33 = &v29[v31];
    }
  }
  else
  {
    v147 = (_QWORD *)sub_186B270(0x18u);
    *v147 = 2;
    v29 = v147 + 1;
    v32 = 1;
    *(_QWORD *)(a2 + 160) = v29;
    v33 = v29;
  }
  *v33 = a3;
  *((_DWORD *)v29 - 1) = v32;
  v10 = *(unsigned int *)(a2 + 136);
  v157 = *(__m128i **)(a2 + 128);
  v12 = *(_DWORD *)(a3 + 12);
  v14 = v10;
  v13 = v10 - 1;
LABEL_45:
  v35 = v149;
  v152 = v149 | 0x100000000LL;
  while ( 2 )
  {
    v36 = 16 * v10;
    v37 = 16LL * (v12 & v13);
    v38 = &v157[(unsigned __int64)v37 / 0x10];
    v39 = (__m128i *)((char *)v157 + v36);
    if ( v37 != v36 )
    {
      for ( i = &v157[(unsigned __int64)v37 / 0x10]; v39 != i; ++i )
      {
        v41 = i->m128i_i64[0];
        if ( i->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v41 + 12) == v12 && a3 == v41 )
          {
LABEL_78:
            v43 = i->m128i_u32[2];
            goto LABEL_79;
          }
        }
        else if ( !v41 )
        {
          goto LABEL_53;
        }
      }
    }
    if ( v38 == v157 )
    {
LABEL_53:
      v42 = *(_QWORD *)(a2 + 160);
      if ( !v42 )
        goto LABEL_104;
LABEL_54:
      v43 = *(unsigned int *)(v42 - 4);
      goto LABEL_55;
    }
    i = v157;
    while ( 1 )
    {
      v68 = i->m128i_i64[0];
      if ( i->m128i_i64[0] <= 1uLL )
        break;
      if ( *(_DWORD *)(v68 + 12) == v12 && a3 == v68 )
        goto LABEL_78;
LABEL_100:
      if ( v38 == ++i )
        goto LABEL_53;
    }
    if ( v68 )
      goto LABEL_100;
    v42 = *(_QWORD *)(a2 + 160);
    if ( v42 )
      goto LABEL_54;
LABEL_104:
    v43 = 0;
LABEL_55:
    v44 = *(_DWORD *)(a2 + 144);
    v45 = 2 * v14;
    if ( 3 * v14 < (unsigned int)(4 * (v44 + *(_DWORD *)(a2 + 140))) )
    {
      v103 = v45;
      v148 = 2 * v14;
      v151 = 16LL * v45;
      v104 = (__m128i *)sub_186B270(v151);
      v105 = v148;
      v157 = v104;
      v106 = v104;
      v36 = v151;
      v107 = &v104[v103];
      if ( v148 )
      {
        do
        {
          v104->m128i_i64[0] = 0;
          ++v104;
          v104[-1].m128i_i32[2] = 0;
        }
        while ( v104 != v107 );
        v157 = v106;
      }
      v108 = *(const __m128i **)(a2 + 128);
      v109 = v148 - 1;
      v110 = (__m128i *)&v108[*(unsigned int *)(a2 + 136)];
      v39 = &v157[v151 / 0x10];
      if ( v108 != v110 )
      {
        do
        {
          while ( v108->m128i_i64[0] <= 1uLL )
          {
            if ( v110 == ++v108 )
              goto LABEL_153;
          }
          v111 = v157;
          v112 = 16LL * (*(_DWORD *)(v108->m128i_i64[0] + 12) & (unsigned int)v109);
          v113 = &v157[(unsigned __int64)v112 / 0x10];
          if ( v151 == v112 )
          {
LABEL_157:
            v111 = v157;
            if ( v157 == v113 )
            {
LABEL_176:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v114 = v157;
            while ( v114->m128i_i64[0] )
            {
              if ( v113 == ++v114 )
                goto LABEL_176;
            }
          }
          else
          {
            v114 = &v157[(unsigned __int64)v112 / 0x10];
            while ( v114->m128i_i64[0] )
            {
              if ( v39 == ++v114 )
                goto LABEL_157;
            }
          }
          v115 = _mm_loadu_si128(v108++);
          v157 = v111;
          *v114 = v115;
        }
        while ( v110 != v108 );
LABEL_153:
        v110 = *(__m128i **)(a2 + 128);
      }
      if ( v110 )
      {
        sub_186B220(v110);
        v105 = v148;
        v109 = v148 - 1;
        v36 = v151;
      }
      v12 = *(_DWORD *)(a3 + 12);
      v116 = v109;
      *(_DWORD *)(a2 + 136) = v105;
      *(_DWORD *)(a2 + 144) = 0;
      v44 = 0;
      *(_QWORD *)(a2 + 128) = v157;
      v37 = 16LL * (v12 & (unsigned int)v116);
      v38 = &v157[(unsigned __int64)v37 / 0x10];
    }
    if ( v37 == v36 )
    {
      v49 = v157;
      v47 = nullptr;
LABEL_65:
      if ( v49 == v38 )
      {
LABEL_73:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v50 = v49;
      while ( 1 )
      {
        while ( 1 )
        {
          v51 = v50->m128i_i64[0];
          if ( v50->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v51 + 12) == v12 && a3 == v51 )
          {
            v50->m128i_i64[0] = a3;
            v50->m128i_i32[2] = v43;
            goto LABEL_74;
          }
          if ( ++v50 == v38 )
            goto LABEL_73;
        }
        if ( !v51 )
          break;
        v47 = v50++;
        if ( v50 == v38 )
          goto LABEL_73;
      }
      if ( v47 )
        goto LABEL_163;
      v47 = v50;
    }
    else
    {
      v46 = v38;
      v47 = nullptr;
      while ( 1 )
      {
        while ( 1 )
        {
          v48 = v46->m128i_i64[0];
          if ( v46->m128i_i64[0] <= 1uLL )
            break;
          if ( *(_DWORD *)(v48 + 12) == v12 && a3 == v48 )
          {
            v46->m128i_i64[0] = a3;
            v46->m128i_i32[2] = v43;
            goto LABEL_74;
          }
          if ( ++v46 == v39 )
            goto LABEL_64;
        }
        if ( !v48 )
          break;
        v47 = v46++;
        if ( v46 == v39 )
        {
LABEL_64:
          v49 = v157;
          goto LABEL_65;
        }
      }
      if ( v47 )
LABEL_163:
        *(_DWORD *)(a2 + 144) = v44 - 1;
      else
        v47 = v46;
    }
    v47->m128i_i64[0] = a3;
    v47->m128i_i32[2] = v43;
    ++*(_DWORD *)(a2 + 140);
LABEL_74:
    v52 = *(_QWORD **)(a2 + 160);
    ++*(_DWORD *)(a3 + 8);
    if ( v52 )
    {
      v53 = *((_DWORD *)v52 - 1);
      if ( v53 == *((_DWORD *)v52 - 2) )
      {
        v82 = (3 * v53 + 1) >> 1;
        v83 = 8 * v82 + 8;
        if ( 8 * v53 + 8 >= v83 || v53 >= v82 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v161, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v161);
          sub_233E40((__int64)v161);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v84 = (unsigned int *)sub_186B300(v52 - 1, v83);
        v85 = v84[1];
        v52 = v84 + 2;
        *v84 = v82;
        *(_QWORD *)(a2 + 160) = v84 + 2;
        LODWORD(v84) = v85;
        v56 = &v52[v85];
        v55 = (_DWORD)v84 + 1;
      }
      else
      {
        v54 = v53;
        v55 = v53 + 1;
        v56 = &v52[v54];
      }
    }
    else
    {
      v132 = (_QWORD *)sub_186B270(0x18u);
      *v132 = 2;
      v55 = 1;
      v52 = v132 + 1;
      *(_QWORD *)(a2 + 160) = v52;
      v56 = v52;
    }
    *v56 = a3;
    *((_DWORD *)v52 - 1) = v55;
LABEL_79:
    if ( ((v152 ^ v43 & 0xFFFFFF00FFFFFFFFLL) & 0xFFFFFFFFFFLL) != 0 )
    {
      sub_616E40(a2 + 80, *(_QWORD *)(*(_QWORD *)(a2 + 160) + 8 * v35));
      v57 = *(__int64 **)(a2 + 80);
      v58 = *(_QWORD *)(*(_QWORD *)(a2 + 160) + 8 * v35);
      v59 = *(unsigned int *)(a2 + 88);
      v60 = *(_DWORD *)(v58 + 12);
      v61 = v59 - 1;
      v59 *= 16;
      v62 = (__int64 *)((char *)v57 + v59);
      v63 = 16LL * (v60 & v61);
      v64 = &v57[(unsigned __int64)v63 / 8];
      if ( v63 == v59 )
      {
LABEL_88:
        while ( v64 != v57 )
        {
          v67 = *v57;
          if ( (unsigned __int64)*v57 > 1 )
          {
            if ( *(_DWORD *)(v67 + 12) == v60 && v58 == v67 )
            {
              v65 = v57;
              goto LABEL_107;
            }
          }
          else if ( !v67 )
          {
            break;
          }
          v57 += 2;
        }
LABEL_223:
        BUG();
      }
      v65 = &v57[(unsigned __int64)v63 / 8];
      while ( 1 )
      {
        while ( 1 )
        {
          v66 = *v65;
          if ( (unsigned __int64)*v65 > 1 )
            break;
          if ( !v66 )
            goto LABEL_223;
          v65 += 2;
          if ( v62 == v65 )
            goto LABEL_88;
        }
        if ( *(_DWORD *)(v66 + 12) == v60 && v58 == v66 )
          break;
        v65 += 2;
        if ( v62 == v65 )
          goto LABEL_88;
      }
LABEL_107:
      v69 = v65[1];
      for ( j = 0; v69; ++j )
      {
        if ( j >= *(_DWORD *)(v69 - 4) )
          break;
        sub_617430(&v160, a2, a3, *(_QWORD *)(v69 + 8LL * j));
        v70 = v160;
        v71 = (_QWORD *)a1[1];
        if ( v71 )
        {
          v72 = *((_DWORD *)v71 - 1);
          if ( v72 == *((_DWORD *)v71 - 2) )
          {
            v77 = (3 * v72 + 1) >> 1;
            v78 = 8 * v77 + 8;
            if ( 8 * v72 + 8 >= (unsigned int)v78 || v72 >= v77 )
              JUMPOUT(0xFE428);
            v150 = (3 * v72 + 1) >> 1;
            v79 = (unsigned int *)sub_186B300(v71 - 1, v78);
            v71 = v79 + 2;
            *v79 = v150;
            v80 = v79[1];
            a1[1] = v79 + 2;
            LODWORD(v79) = v80;
            v75 = &v71[v80];
            v74 = (_DWORD)v79 + 1;
          }
          else
          {
            v73 = v72;
            v74 = v72 + 1;
            v75 = &v71[v73];
          }
        }
        else
        {
          v81 = (_QWORD *)sub_186B270(0x18u);
          v71 = v81 + 1;
          v75 = v81 + 1;
          *v81 = 2;
          a1[1] = v81 + 1;
          v74 = 1;
        }
        *v75 = v70;
        *((_DWORD *)v71 - 1) = v74;
        v69 = v65[1];
      }
      v76 = *(_QWORD *)(a2 + 104);
      if ( v76 )
      {
        if ( v149 < *(_DWORD *)(v76 - 4) )
        {
          v35 = *(unsigned int *)(*(_QWORD *)(a2 + 120) + 4 * v35);
          v149 = v35;
        }
      }
      v10 = *(unsigned int *)(a2 + 136);
      v14 = v10;
      v13 = v10 - 1;
      v152 = v35 & 0xFFFFFF00FFFFFFFFLL | v152 & 0xFFFFFF0000000000LL;
      v157 = *(__m128i **)(a2 + 128);
      v12 = *(_DWORD *)(a3 + 12);
      continue;
    }
    break;
  }
  v86 = a1[1];
  if ( !v86 || !*(_DWORD *)(v86 - 4) )
  {
    v160 = *(_QWORD *)(a2 + 24);
    v87 = v160;
    ++*(_DWORD *)(a3 + 8);
    v153 = v87;
    v88 = (_QWORD *)sub_186B270(0x18u);
    v88[1] = a3;
    v89 = v88 + 1;
    v159 = 0;
    *v88 = 0x100000002LL;
    while ( 1 )
    {
      v90 = *(_QWORD *)(sub_15D1F10(a3) + 24);
      v91 = -1;
      if ( v90 )
      {
        v92 = *(_QWORD *)(v90 + 8);
        if ( v92 )
          v91 = *(_DWORD *)(v92 - 4) - 1;
      }
      if ( v159 >= v91 )
        break;
      v93 = *(_QWORD *)(a2 + 24);
      v94 = *(_QWORD *)(*(_QWORD *)(sub_15D1F10(a3) + 24) + 8LL) + 16LL * v159;
      if ( *(_BYTE *)(v94 + 8) != 1 )
        sub_A8ADA((__int64)"std::get: wrong index for variant");
      v95 = sub_15DB5C0(v93, *(unsigned int *)(a2 + 168), *(_QWORD *)v94);
      v96 = v95;
      if ( v95 )
        ++*(_DWORD *)(v95 + 8);
      v97 = *((_DWORD *)v89 - 1);
      if ( v97 == *((_DWORD *)v89 - 2) )
      {
        v98 = (3 * v97 + 1) >> 1;
        v99 = 8 * v98 + 8;
        v100 = v98;
        if ( 8 * v97 + 8 >= v99 || v97 >= v98 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v161, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v161);
          sub_233E40((__int64)v161);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v101 = (unsigned int *)sub_186B300(v89 - 1, v99);
        *v101 = v100;
        v89 = v101 + 2;
        v97 = v101[1];
      }
      ++*(_DWORD *)(a2 + 168);
      ++v159;
      v89[v97] = v96;
      *((_DWORD *)v89 - 1) = v97 + 1;
    }
    v117 = sub_15DCAD0(*(_QWORD *)(a2 + 48), (int)v89, 0);
    v118 = v117;
    if ( v117 )
      ++*(_DWORD *)(v117 + 8);
    v119 = (_QWORD *)a1[1];
    if ( v119 )
    {
      v120 = *((_DWORD *)v119 - 1);
      if ( v120 == *((_DWORD *)v119 - 2) )
      {
        v128 = (3 * v120 + 1) >> 1;
        v129 = 8 * v128 + 8;
        if ( 8 * v120 + 8 >= v129 || v120 >= v128 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v161, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v161);
          sub_233E40((__int64)v161);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v130 = (unsigned int *)sub_186B300(v119 - 1, v129);
        v119 = v130 + 2;
        v131 = v130[1];
        *v130 = v128;
        a1[1] = v130 + 2;
        LODWORD(v130) = v131;
        v123 = &v119[v131];
        v122 = (_DWORD)v130 + 1;
      }
      else
      {
        v121 = v120;
        v122 = v120 + 1;
        v123 = &v119[v121];
      }
    }
    else
    {
      v146 = (_QWORD *)sub_186B270(0x18u);
      *v146 = 2;
      v119 = v146 + 1;
      v122 = 1;
      v123 = v119;
      a1[1] = v119;
    }
    *v123 = v118;
    *((_DWORD *)v119 - 1) = v122;
    v124 = (unsigned __int64)&v89[*((unsigned int *)v89 - 1)];
    if ( (unsigned __int64)v89 < v124 )
    {
      v125 = v89;
      do
      {
        v126 = *v125;
        if ( *v125 )
        {
          if ( (*(_DWORD *)(v126 + 8))-- == 1 )
            sub_15D7BC0(v153, v126);
        }
        ++v125;
      }
      while ( (unsigned __int64)v125 < v124 );
    }
    sub_186B220(v89 - 1);
  }
  return a1;
}

