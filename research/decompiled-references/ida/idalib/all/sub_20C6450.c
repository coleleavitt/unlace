void __fastcall sub_20C6450(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 *v9; // r12
  unsigned int v10; // r13d
  int v11; // eax
  __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rdi
  unsigned __int32 v20; // eax
  unsigned __int64 v21; // rbp
  bool v22; // zf
  unsigned __int64 *v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // r15
  __int64 v27; // rdi
  __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r12
  __int64 *v32; // r13
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // rdi
  int v39; // r10d
  __int64 v40; // rcx
  __m128i *v41; // rdx
  unsigned __int64 v42; // rsi
  __int64 *v43; // rdx
  int j; // r11d
  __int64 v45; // rcx
  unsigned int v46; // esi
  _QWORD *v47; // r8
  __int64 v48; // r9
  int v49; // eax
  int v50; // ecx
  __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rdx
  int v54; // r9d
  __int64 *v55; // r10
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // ecx
  __int64 v62; // rdx
  __int64 *v63; // r9
  __int64 v64; // r10
  __int64 v65; // rsi
  __m128i *v66; // rdx
  unsigned __int64 v67; // rdi
  __int64 *v68; // rdx
  __int64 v69; // r11
  unsigned int v70; // esi
  _QWORD *v71; // rdi
  __int64 v72; // r8
  int v73; // ecx
  int v74; // r9d
  __int64 *v75; // r11
  __int64 v76; // rsi
  __int64 v77; // rsi
  __m128i *v78; // rcx
  unsigned __int64 v79; // rdi
  __int64 v80; // rdi
  __int64 v81; // rdi
  __m128i *v82; // rsi
  unsigned __int64 v83; // r8
  int v84; // r9d
  __int64 *v85; // r11
  __int64 *v86; // r10
  unsigned __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r15
  __int64 *v92; // rdi
  int v93; // r13d
  __int64 v94; // rcx
  __m128i *v95; // rdx
  unsigned __int64 v96; // rsi
  __m128i v97; // xmm0
  __int64 *v98; // rdx
  int i; // r14d
  __int64 v100; // rcx
  unsigned int v101; // esi
  _QWORD *v102; // r8
  __int64 v103; // r9
  int v104; // ecx
  __int64 v105; // r8
  int v106; // edx
  __int64 *v107; // rdi
  __int64 v108; // rcx
  __int64 v109; // rcx
  __m128i *v110; // rsi
  unsigned __int64 v111; // rdx
  __m128i v112; // xmm0
  _QWORD *v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rsi
  __int64 v117; // r14
  int v118; // r15d
  __int64 v119; // rsi
  __m128i *v120; // rdx
  unsigned __int64 v121; // rcx
  __m128i si128; // xmm0
  __int64 *v123; // rdx
  __int64 v124; // rcx
  unsigned int v125; // esi
  _QWORD *v126; // rdi
  __int64 v127; // r9
  int v128; // r13d
  __int64 v129; // rcx
  int v130; // edx
  __int64 v131; // rcx
  __int64 v132; // rcx
  __m128i *v133; // rsi
  unsigned __int64 v134; // rdx
  __m128i v135; // xmm0
  _QWORD *v136; // rcx
  int v137; // r11d
  _QWORD *v138; // r10
  int v139; // r11d
  _QWORD *v140; // r10
  __int64 v141; // [rsp+8h] [rbp-B0h]
  unsigned int v142; // [rsp+10h] [rbp-A8h]
  __int64 v143; // [rsp+10h] [rbp-A8h]
  int v144; // [rsp+10h] [rbp-A8h]
  int v145; // [rsp+10h] [rbp-A8h]
  unsigned int v146; // [rsp+18h] [rbp-A0h]
  __int64 v147; // [rsp+18h] [rbp-A0h]
  _QWORD *v148; // [rsp+18h] [rbp-A0h]
  int v149; // [rsp+28h] [rbp-90h]
  _QWORD *v150; // [rsp+28h] [rbp-90h]
  int v151; // [rsp+30h] [rbp-88h]
  __m128 v152; // [rsp+40h] [rbp-78h] BYREF
  __m128 ptr; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v154[11]; // [rsp+60h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a1 + 88);
  v9 = *(__int64 **)(a1 + 72);
  v141 = a1 + 72;
  if ( (_DWORD)v8 )
  {
    a4 = (unsigned int)(v8 - 1);
    v10 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
    v11 = a4 & v10;
    v12 = &v9[(unsigned int)a4 & v10];
    v13 = *v12;
    if ( *v12 == a2 )
    {
LABEL_3:
      sub_2015770(&ptr, v12, &v9[v8], v141, 1);
      return;
    }
    a5 = 1;
    v14 = nullptr;
    if ( v13 != -4096 )
    {
      while ( 1 )
      {
        if ( !v14 && v13 == -8192 )
          v14 = v12;
        a6 = (unsigned int)(a5 + 1);
        v11 = a4 & (a5 + v11);
        v12 = &v9[v11];
        v13 = *v12;
        if ( *v12 == a2 )
          goto LABEL_3;
        if ( v13 == -4096 )
          break;
        a5 = (unsigned int)a6;
      }
      if ( v14 )
        v12 = v14;
    }
    v15 = *(_DWORD *)(a1 + 80) + 1;
    if ( 4 * v15 < (unsigned int)(3 * v8) )
    {
      if ( (int)v8 - *(_DWORD *)(a1 + 84) - v15 > (unsigned int)v8 >> 3 )
      {
        v16 = *v12;
        goto LABEL_9;
      }
      v114 = (((((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
              | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
              | ((a4 | (a4 >> 1)) >> 2)
              | a4
              | (a4 >> 1)) >> 16)
            | ((((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4) | ((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 8)
            | ((((a4 | (a4 >> 1)) >> 2) | a4 | (a4 >> 1)) >> 4)
            | ((a4 | (a4 >> 1)) >> 2)
            | a4
            | (a4 >> 1))
           + 1;
      if ( (unsigned int)v114 < 0x40 )
        LODWORD(v114) = 64;
      *(_DWORD *)(a1 + 88) = v114;
      v115 = sub_22300B0(8LL * (unsigned int)v114, 8, 64, a4, a5, a6);
      *(_QWORD *)(a1 + 72) = v115;
      if ( v9 )
      {
        v116 = *(unsigned int *)(a1 + 88);
        v117 = v8;
        *(_QWORD *)(a1 + 80) = 0;
        v118 = v116;
        v119 = 8 * v116;
        if ( v115 != v115 + v119 )
        {
          v120 = (__m128i *)v115;
          v121 = ((unsigned __int64)(v119 - 8) >> 3) + 1;
          if ( v119 == 8 )
            goto LABEL_153;
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          do
            *v120++ = si128;
          while ( v120 != (__m128i *)(v115 + 16 * (v121 >> 1)) );
          v120 = (__m128i *)(v115 + 8 * (v121 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v121 & 0xFFFFFFFFFFFFFFFELL) != v121 )
LABEL_153:
            v120->m128i_i64[0] = -4096;
        }
        v123 = v9;
        v145 = v118 - 1;
        do
        {
          v124 = *v123;
          if ( *v123 != -8192 && v124 != -4096 )
          {
            if ( !v118 )
            {
              *(_QWORD *)&dword_0 = *v123;
              BUG();
            }
            v125 = v145 & (((unsigned int)v124 >> 9) ^ ((unsigned int)v124 >> 4));
            v126 = (_QWORD *)(v115 + 8LL * v125);
            v127 = *v126;
            if ( v124 != *v126 )
            {
              v137 = 1;
              v138 = nullptr;
              if ( v127 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v138 && v127 == -8192 )
                    v138 = v126;
                  v125 = v145 & (v137 + v125);
                  v126 = (_QWORD *)(v115 + 8LL * v125);
                  v127 = *v126;
                  if ( v124 == *v126 )
                    break;
                  if ( v127 == -4096 )
                  {
                    if ( v138 )
                      v126 = v138;
                    break;
                  }
                  ++v137;
                }
              }
            }
            ++*(_DWORD *)(a1 + 80);
            *v126 = v124;
          }
          ++v123;
        }
        while ( &v9[v117] != v123 );
        operator delete(v9, v117 * 8, 8);
        v9 = *(__int64 **)(a1 + 72);
        v8 = *(unsigned int *)(a1 + 88);
        v15 = *(_DWORD *)(a1 + 80) + 1;
LABEL_162:
        if ( (_DWORD)v8 )
        {
          v128 = (v8 - 1) & v10;
          v12 = &v9[v128];
          v16 = a2;
          v129 = *v12;
          if ( *v12 == a2 )
            goto LABEL_9;
          v130 = 1;
          v107 = nullptr;
          if ( v129 != -4096 )
          {
            while ( 1 )
            {
              if ( !v107 && v129 == -8192 )
                v107 = v12;
              v128 = (v8 - 1) & (v130 + v128);
              v12 = &v9[v128];
              v129 = *v12;
              if ( *v12 == a2 )
                break;
              if ( v129 == -4096 )
                goto LABEL_225;
              ++v130;
            }
LABEL_169:
            v16 = a2;
LABEL_9:
            *(_DWORD *)(a1 + 80) = v15;
            if ( v16 != -4096 )
              --*(_DWORD *)(a1 + 84);
            goto LABEL_11;
          }
          goto LABEL_137;
        }
LABEL_246:
        ++*(_DWORD *)(a1 + 80);
        BUG();
      }
      v131 = *(unsigned int *)(a1 + 88);
      *(_QWORD *)(a1 + 80) = 0;
      v8 = v131;
      v132 = 8 * v131;
      v9 = (__int64 *)(v115 + v132);
      if ( v115 == v115 + v132 )
      {
        v15 = 1;
        goto LABEL_162;
      }
      v133 = (__m128i *)v115;
      v134 = ((unsigned __int64)(v132 - 8) >> 3) + 1;
      if ( v132 == 8 )
      {
        v136 = (_QWORD *)v115;
      }
      else
      {
        v135 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        do
          *v133++ = v135;
        while ( v133 != (__m128i *)(v115 + 16 * (v134 >> 1)) );
        v136 = (_QWORD *)(v115 + 8 * (v134 & 0xFFFFFFFFFFFFFFFELL));
        if ( (v134 & 0xFFFFFFFFFFFFFFFELL) == v134 )
          goto LABEL_176;
      }
      *v136 = -4096;
LABEL_176:
      v9 = (__int64 *)v115;
      v15 = 1;
      goto LABEL_162;
    }
  }
  v87 = (((((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v8 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v8 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v8 - 1) | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v8 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v8 - 1) >> 1);
  v88 = ((v87 >> 16) | v87) + 1;
  if ( (unsigned int)v88 < 0x40 )
    LODWORD(v88) = 64;
  *(_DWORD *)(a1 + 88) = v88;
  v89 = sub_22300B0(8LL * (unsigned int)v88, 8, 64, a4, a5, a6);
  *(_QWORD *)(a1 + 72) = v89;
  if ( !v9 )
  {
    v108 = *(unsigned int *)(a1 + 88);
    *(_QWORD *)(a1 + 80) = 0;
    v8 = v108;
    v109 = 8 * v108;
    v9 = (__int64 *)(v89 + v109);
    if ( v89 == v89 + v109 )
    {
      v15 = 1;
      goto LABEL_134;
    }
    v110 = (__m128i *)v89;
    v111 = ((unsigned __int64)(v109 - 8) >> 3) + 1;
    if ( v109 == 8 )
    {
      v113 = (_QWORD *)v89;
    }
    else
    {
      v112 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      do
        *v110++ = v112;
      while ( v110 != (__m128i *)(v89 + 16 * (v111 >> 1)) );
      v113 = (_QWORD *)(v89 + 8 * (v111 & 0xFFFFFFFFFFFFFFFELL));
      if ( (v111 & 0xFFFFFFFFFFFFFFFELL) == v111 )
        goto LABEL_144;
    }
    *v113 = -4096;
LABEL_144:
    v9 = (__int64 *)v89;
    v15 = 1;
    goto LABEL_134;
  }
  v90 = *(unsigned int *)(a1 + 88);
  v91 = 8 * v8;
  *(_QWORD *)(a1 + 80) = 0;
  v92 = &v9[v8];
  v93 = v90;
  v94 = 8 * v90;
  if ( v89 != v89 + v94 )
  {
    v95 = (__m128i *)v89;
    v96 = ((unsigned __int64)(v94 - 8) >> 3) + 1;
    if ( v94 == 8 )
      goto LABEL_125;
    v97 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
    do
      *v95++ = v97;
    while ( v95 != (__m128i *)(v89 + 16 * (v96 >> 1)) );
    v95 = (__m128i *)(v89 + 8 * (v96 & 0xFFFFFFFFFFFFFFFELL));
    if ( (v96 & 0xFFFFFFFFFFFFFFFELL) != v96 )
LABEL_125:
      v95->m128i_i64[0] = -4096;
  }
  v98 = v9;
  for ( i = v93 - 1; v92 != v98; ++v98 )
  {
    v100 = *v98;
    if ( *v98 != -4096 && v100 != -8192 )
    {
      if ( !v93 )
      {
        *(_QWORD *)&dword_0 = *v98;
        BUG();
      }
      v101 = i & (((unsigned int)v100 >> 9) ^ ((unsigned int)v100 >> 4));
      v102 = (_QWORD *)(v89 + 8LL * v101);
      v103 = *v102;
      if ( v100 != *v102 )
      {
        v139 = 1;
        v140 = nullptr;
        if ( v103 != -4096 )
        {
          while ( 1 )
          {
            if ( !v140 && v103 == -8192 )
              v140 = v102;
            v101 = i & (v139 + v101);
            v102 = (_QWORD *)(v89 + 8LL * v101);
            v103 = *v102;
            if ( v100 == *v102 )
              break;
            if ( v103 == -4096 )
            {
              if ( v140 )
                v102 = v140;
              break;
            }
            ++v139;
          }
        }
      }
      ++*(_DWORD *)(a1 + 80);
      *v102 = v100;
    }
  }
  operator delete(v9, v91, 8);
  v9 = *(__int64 **)(a1 + 72);
  v8 = *(unsigned int *)(a1 + 88);
  v15 = *(_DWORD *)(a1 + 80) + 1;
LABEL_134:
  if ( !(_DWORD)v8 )
    goto LABEL_246;
  v104 = (v8 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = &v9[v104];
  v16 = a2;
  v105 = *v12;
  if ( *v12 == a2 )
    goto LABEL_9;
  v106 = 1;
  v107 = nullptr;
  if ( v105 != -4096 )
  {
    while ( 1 )
    {
      if ( !v107 && v105 == -8192 )
        v107 = v12;
      v104 = (v8 - 1) & (v106 + v104);
      v12 = &v9[v104];
      v105 = *v12;
      if ( *v12 == a2 )
        goto LABEL_169;
      if ( v105 == -4096 )
      {
LABEL_225:
        if ( !v107 )
          break;
        v16 = *v107;
        v12 = v107;
        goto LABEL_9;
      }
      ++v106;
    }
  }
LABEL_137:
  *(_DWORD *)(a1 + 80) = v15;
LABEL_11:
  *v12 = a2;
  sub_2015770(&ptr, v12, &v9[v8], v141, 1);
  v19 = v154;
  v154[0] = a2;
  v20 = 1;
  ptr.m128_u64[0] = (unsigned __int64)v154;
  ptr.m128_i32[3] = 4;
  do
  {
    v21 = v19[v20 - 1];
    ptr.m128_i32[2] = v20 - 1;
    if ( *(_BYTE *)(v21 + 8) == 15 )
    {
      v22 = *(_BYTE *)(a1 + 120) == 0;
      v152.m128_u64[0] = v21;
      if ( v22 || *(_QWORD *)(v21 + 24) )
      {
        v23 = *(unsigned __int64 **)(a1 + 104);
        if ( v23 == *(unsigned __int64 **)(a1 + 112) )
        {
          sub_20200A0(a1 + 96, v23, (__int64 *)&v152);
        }
        else
        {
          *v23 = v21;
          *(_QWORD *)(a1 + 104) = v23 + 1;
        }
      }
    }
    v24 = *(_QWORD *)(v21 + 16);
    v25 = v24 + 8LL * *(unsigned int *)(v21 + 12);
    v26 = v24;
    if ( v25 != v24 )
    {
      while ( 1 )
      {
        v30 = *(unsigned int *)(a1 + 88);
        v31 = *(_QWORD *)(v25 - 8);
        v32 = *(__int64 **)(a1 + 72);
        if ( !(_DWORD)v30 )
          break;
        v17 = (unsigned int)(v30 - 1);
        LODWORD(v27) = v17 & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
        v28 = &v32[(unsigned int)v27];
        v29 = *v28;
        if ( v31 == *v28 )
        {
LABEL_20:
          v25 -= 8;
          sub_2015770(&v152, v28, &v32[v30], v141, 1);
          if ( v26 == v25 )
            goto LABEL_45;
        }
        else
        {
          v54 = 1;
          v55 = nullptr;
          if ( v29 != -4096 )
          {
            while ( 1 )
            {
              if ( v29 == -8192 && !v55 )
                v55 = v28;
              v27 = (unsigned int)v17 & ((_DWORD)v27 + v54);
              v28 = &v32[v27];
              v29 = *v28;
              if ( v31 == *v28 )
                goto LABEL_20;
              if ( v29 == -4096 )
                break;
              ++v54;
            }
            if ( v55 )
              v28 = v55;
          }
          v49 = *(_DWORD *)(a1 + 80) + 1;
          v18 = (unsigned int)(4 * v49);
          if ( (unsigned int)v18 >= 3 * (int)v30 )
            break;
          v56 = (unsigned int)v30 >> 3;
          if ( (int)v30 - *(_DWORD *)(a1 + 84) - v49 > (unsigned int)v56 )
          {
LABEL_51:
            v51 = *v28;
            goto LABEL_40;
          }
          v146 = *(_DWORD *)(a1 + 88);
          v57 = (((v17 >> 1) | v17 | (((v17 >> 1) | v17) >> 2)) >> 4) | (v17 >> 1) | v17 | (((v17 >> 1) | v17) >> 2);
          v58 = v57 >> 8;
          v59 = (((v58 | v57) >> 16) | v58 | v57) + 1;
          if ( (unsigned int)v59 < 0x40 )
            LODWORD(v59) = 64;
          *(_DWORD *)(a1 + 88) = v59;
          v60 = sub_22300B0(
                  8LL * (unsigned int)v59,
                  8,
                  v30,
                  ((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4),
                  v58,
                  v56);
          v61 = ((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4);
          v62 = v146;
          *(_QWORD *)(a1 + 72) = v60;
          if ( v32 )
          {
            *(_QWORD *)(a1 + 80) = 0;
            v147 = 8LL * v146;
            v63 = &v32[v62];
            v64 = *(unsigned int *)(a1 + 88);
            v65 = 8 * v64;
            if ( v60 != v60 + 8 * v64 )
            {
              v66 = (__m128i *)v60;
              v67 = ((unsigned __int64)(v65 - 8) >> 3) + 1;
              if ( v65 == 8 )
                goto LABEL_68;
              do
              {
                ++v66;
                v66[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( (__m128i *)(v60 + 16 * (v67 >> 1)) != v66 );
              v66 = (__m128i *)(v60 + 8 * (v67 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v67 & 0xFFFFFFFFFFFFFFFELL) != v67 )
LABEL_68:
                v66->m128i_i64[0] = -4096;
            }
            v68 = v32;
            v144 = v64 - 1;
            do
            {
              v69 = *v68;
              if ( *v68 != -8192 && v69 != -4096 )
              {
                if ( !(_DWORD)v64 )
                {
                  *(_QWORD *)&dword_0 = *v68;
                  BUG();
                }
                v70 = v144 & (((unsigned int)v69 >> 9) ^ ((unsigned int)v69 >> 4));
                v71 = (_QWORD *)(v60 + 8LL * v70);
                v72 = *v71;
                if ( v69 != *v71 && v72 != -4096 )
                {
                  v151 = 1;
                  v150 = nullptr;
                  while ( 1 )
                  {
                    if ( v72 == -8192 )
                    {
                      if ( v150 )
                        v71 = v150;
                      v150 = v71;
                    }
                    v70 = v144 & (v151 + v70);
                    v71 = (_QWORD *)(v60 + 8LL * v70);
                    v72 = *v71;
                    if ( v69 == *v71 )
                      break;
                    if ( v72 == -4096 )
                    {
                      if ( v150 )
                        v71 = v150;
                      break;
                    }
                    ++v151;
                  }
                }
                ++*(_DWORD *)(a1 + 80);
                *v71 = v69;
              }
              ++v68;
            }
            while ( v63 != v68 );
            operator delete(v32, v147, 8);
            v32 = *(__int64 **)(a1 + 72);
            v30 = *(unsigned int *)(a1 + 88);
            v61 = ((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4);
            v49 = *(_DWORD *)(a1 + 80) + 1;
          }
          else
          {
            v80 = *(unsigned int *)(a1 + 88);
            *(_QWORD *)(a1 + 80) = 0;
            v30 = v80;
            v81 = 8 * v80;
            v32 = (__int64 *)(v60 + v81);
            if ( v60 == v60 + v81 )
            {
              v49 = 1;
            }
            else
            {
              v82 = (__m128i *)v60;
              v83 = ((unsigned __int64)(v81 - 8) >> 3) + 1;
              if ( v81 == 8 )
                goto LABEL_91;
              do
              {
                ++v82;
                v82[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
              }
              while ( (__m128i *)(v60 + 16 * (v83 >> 1)) != v82 );
              v82 = (__m128i *)(v60 + 8 * (v83 & 0xFFFFFFFFFFFFFFFELL));
              if ( (v83 & 0xFFFFFFFFFFFFFFFELL) != v83 )
LABEL_91:
                v82->m128i_i64[0] = -4096;
              v32 = (__int64 *)v60;
              v49 = 1;
            }
          }
          if ( !(_DWORD)v30 )
          {
LABEL_241:
            ++*(_DWORD *)(a1 + 80);
            BUG();
          }
          v73 = (v30 - 1) & v61;
          v28 = &v32[v73];
          v51 = *v28;
          if ( v31 == *v28 )
            goto LABEL_40;
          v74 = 1;
          v75 = nullptr;
          if ( v51 != -4096 )
          {
            while ( 1 )
            {
              if ( v75 || v51 != -8192 )
                v28 = v75;
              v73 = (v30 - 1) & (v74 + v73);
              v86 = &v32[v73];
              v51 = *v86;
              if ( v31 == *v86 )
                break;
              if ( v51 == -4096 )
              {
LABEL_182:
                if ( v28 )
                  goto LABEL_51;
                v28 = v86;
                goto LABEL_80;
              }
              ++v74;
              v75 = v28;
              v28 = &v32[v73];
            }
LABEL_114:
            v28 = v86;
LABEL_40:
            *(_DWORD *)(a1 + 80) = v49;
            if ( v51 != -4096 )
              --*(_DWORD *)(a1 + 84);
            goto LABEL_42;
          }
LABEL_80:
          *(_DWORD *)(a1 + 80) = v49;
LABEL_42:
          *v28 = v31;
          sub_2015770(&v152, v28, &v32[v30], v141, 1);
          v52 = ptr.m128_u32[2];
          v53 = ptr.m128_u32[2] + 1LL;
          if ( v53 > ptr.m128_u32[3] )
          {
            sub_2237220(&ptr, v154, v53, 8);
            v52 = ptr.m128_u32[2];
          }
          v25 -= 8;
          *(_QWORD *)(ptr.m128_u64[0] + 8 * v52) = v31;
          ++ptr.m128_i32[2];
          if ( v26 == v25 )
            goto LABEL_45;
        }
      }
      v142 = *(_DWORD *)(a1 + 88);
      v33 = (((((((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v30 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v30 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v30 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v30 - 1) | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v30 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v30 - 1) >> 1);
      v34 = ((v33 >> 16) | v33) + 1;
      if ( (unsigned int)v34 < 0x40 )
        LODWORD(v34) = 64;
      *(_DWORD *)(a1 + 88) = v34;
      v35 = sub_22300B0(8LL * (unsigned int)v34, 8, v30, 64, v17, v18);
      v36 = v142;
      *(_QWORD *)(a1 + 72) = v35;
      if ( v32 )
      {
        v37 = *(unsigned int *)(a1 + 88);
        *(_QWORD *)(a1 + 80) = 0;
        v143 = 8LL * v142;
        v38 = &v32[v36];
        v39 = v37;
        v40 = 8 * v37;
        if ( v35 != v35 + v40 )
        {
          v41 = (__m128i *)v35;
          v42 = ((unsigned __int64)(v40 - 8) >> 3) + 1;
          if ( v40 == 8 )
            goto LABEL_29;
          do
          {
            ++v41;
            v41[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          }
          while ( v41 != (__m128i *)(v35 + 16 * (v42 >> 1)) );
          v41 = (__m128i *)(v35 + 8 * (v42 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v42 & 0xFFFFFFFFFFFFFFFELL) != v42 )
LABEL_29:
            v41->m128i_i64[0] = -4096;
        }
        v43 = v32;
        for ( j = v39 - 1; v38 != v43; ++v43 )
        {
          v45 = *v43;
          if ( *v43 != -8192 && v45 != -4096 )
          {
            if ( !v39 )
            {
              *(_QWORD *)&dword_0 = *v43;
              BUG();
            }
            v46 = j & (((unsigned int)v45 >> 9) ^ ((unsigned int)v45 >> 4));
            v47 = (_QWORD *)(v35 + 8LL * v46);
            v48 = *v47;
            if ( v45 != *v47 && v48 != -4096 )
            {
              v149 = 1;
              v148 = nullptr;
              while ( 1 )
              {
                if ( v48 == -8192 )
                {
                  if ( v148 )
                    v47 = v148;
                  v148 = v47;
                }
                v46 = j & (v149 + v46);
                v47 = (_QWORD *)(v35 + 8LL * v46);
                v48 = *v47;
                if ( v45 == *v47 )
                  break;
                if ( v48 == -4096 )
                {
                  if ( v148 )
                    v47 = v148;
                  break;
                }
                ++v149;
              }
            }
            ++*(_DWORD *)(a1 + 80);
            *v47 = v45;
          }
        }
        operator delete(v32, v143, 8);
        v32 = *(__int64 **)(a1 + 72);
        v30 = *(unsigned int *)(a1 + 88);
        v49 = *(_DWORD *)(a1 + 80) + 1;
      }
      else
      {
        v76 = *(unsigned int *)(a1 + 88);
        *(_QWORD *)(a1 + 80) = 0;
        v30 = v76;
        v77 = 8 * v76;
        v32 = (__int64 *)(v35 + v77);
        if ( v35 == v35 + v77 )
        {
          v49 = 1;
        }
        else
        {
          v78 = (__m128i *)v35;
          v79 = ((unsigned __int64)(v77 - 8) >> 3) + 1;
          if ( v77 == 8 )
            goto LABEL_85;
          do
          {
            ++v78;
            v78[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          }
          while ( (__m128i *)(v35 + 16 * (v79 >> 1)) != v78 );
          v78 = (__m128i *)(v35 + 8 * (v79 & 0xFFFFFFFFFFFFFFFELL));
          if ( (v79 & 0xFFFFFFFFFFFFFFFELL) != v79 )
LABEL_85:
            v78->m128i_i64[0] = -4096;
          v32 = (__int64 *)v35;
          v49 = 1;
        }
      }
      if ( !(_DWORD)v30 )
        goto LABEL_241;
      v50 = (v30 - 1) & (((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4));
      v28 = &v32[v50];
      v51 = *v28;
      if ( v31 == *v28 )
        goto LABEL_40;
      v84 = 1;
      v85 = nullptr;
      if ( v51 != -4096 )
      {
        while ( 1 )
        {
          if ( v51 != -8192 || v85 )
            v28 = v85;
          v50 = (v30 - 1) & (v84 + v50);
          v86 = &v32[v50];
          v51 = *v86;
          if ( v31 == *v86 )
            goto LABEL_114;
          if ( v51 == -4096 )
            goto LABEL_182;
          ++v84;
          v85 = v28;
          v28 = &v32[v50];
        }
      }
      goto LABEL_80;
    }
LABEL_45:
    v20 = ptr.m128_u32[2];
    v19 = (_QWORD *)ptr.m128_u64[0];
  }
  while ( ptr.m128_i32[2] );
  if ( (_QWORD *)ptr.m128_u64[0] != v154 )
    free((void *)ptr.m128_u64[0]);
}
