__int64 __fastcall sub_D9C240(__int64 a1)
{
  char **v1; // r13
  char **v2; // r13
  char **exception; // r13
  _QWORD *v5; // r13
  __m128i v6; // xmm0
  int v7; // ebp
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  size_t v11; // rdx
  _QWORD *v12; // r15
  __int64 v13; // r8
  _QWORD *v14; // r14
  _DWORD *v15; // rdx
  _QWORD *v16; // rbp
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  void *v22; // rdi
  _DWORD **v23; // rax
  _QWORD *v24; // rcx
  _QWORD *v25; // r13
  __int64 v26; // r10
  __int64 v27; // rax
  __int64 *v28; // r11
  int v29; // edi
  unsigned int v30; // edx
  __int64 *v31; // rsi
  __int64 v32; // rdx
  __int64 *v33; // r9
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *v36; // r15
  __int64 v37; // rdx
  __int64 *v38; // r14
  __int64 v39; // rsi
  _QWORD *v40; // rbp
  __int64 *v41; // rax
  _QWORD *v42; // r13
  _QWORD *v43; // r15
  __int64 v44; // r10
  __int64 v45; // rax
  __int64 *v46; // r11
  int v47; // edi
  unsigned int v48; // edx
  __int64 *v49; // rsi
  __int64 v50; // rdx
  __int64 *v51; // r9
  __int64 *j; // rax
  __int64 v53; // rdx
  unsigned int v54; // ebp
  unsigned int v56; // eax
  __int64 v57; // rcx
  int v58; // eax
  __int64 *v59; // rsi
  __int64 v60; // rax
  void *v61; // rdi
  unsigned int v62; // ecx
  size_t v63; // rsi
  unsigned int *v64; // rax
  __int64 v65; // rdx
  _QWORD *v66; // rdi
  unsigned int v67; // edx
  int v68; // eax
  unsigned int v69; // eax
  size_t v70; // r14
  __m128i *v71; // rax
  __m128i *v72; // r9
  __m128i *v73; // rdx
  __int64 v74; // rdx
  const __m128i *v75; // rax
  unsigned int v76; // r14d
  __m128i *v77; // r11
  __m128i *v78; // r10
  __int64 v79; // rdx
  __m128i *v80; // rsi
  __m128i *v81; // rdx
  __int64 v82; // rdx
  _QWORD *v83; // rdi
  unsigned int v84; // edx
  int v85; // eax
  unsigned int v86; // eax
  char v87; // al
  size_t v88; // r14
  __m128i *v89; // rax
  __m128i *v90; // r15
  __m128i *v91; // rdx
  __int64 v92; // rdx
  const __m128i *v93; // rax
  unsigned int v94; // r14d
  __m128i *v95; // r11
  __m128i *v96; // r10
  __int64 v97; // rdx
  __m128i *v98; // rsi
  __m128i *v99; // rdx
  unsigned int v100; // edx
  unsigned int v101; // ecx
  unsigned int *v102; // rax
  __int64 v103; // rax
  unsigned int v104; // esi
  __int64 v105; // rbp
  int v106; // edi
  unsigned int v107; // r13d
  _DWORD *v108; // rax
  void *v109; // r9
  __int16 v110; // ax
  __int64 v111; // rdx
  unsigned int **v112; // r14
  __int64 v113; // r13
  __int64 v114; // rdx
  char v115; // di
  __int64 v116; // rcx
  int v117; // eax
  unsigned int **v118; // rcx
  unsigned int *v119; // r15
  unsigned int v120; // eax
  unsigned int v121; // ecx
  size_t v122; // rsi
  unsigned int *v123; // rax
  __int16 v124; // dx
  _QWORD *v125; // rbp
  _QWORD *v126; // rbp
  _DWORD *v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  unsigned int **v130; // r13
  _DWORD *v131; // rdx
  unsigned int v132; // ecx
  unsigned int **i; // r14
  unsigned int v134; // ecx
  _QWORD *v135; // rbx
  __int64 v136; // rax
  __int64 v137; // [rsp+0h] [rbp-B8h]
  __int64 v138; // [rsp+0h] [rbp-B8h]
  __int64 v139; // [rsp+0h] [rbp-B8h]
  __int64 v140; // [rsp+0h] [rbp-B8h]
  unsigned int v141; // [rsp+0h] [rbp-B8h]
  __int64 v142; // [rsp+0h] [rbp-B8h]
  unsigned int v143; // [rsp+8h] [rbp-B0h]
  unsigned int v144; // [rsp+8h] [rbp-B0h]
  __int64 v145; // [rsp+8h] [rbp-B0h]
  _QWORD *v146; // [rsp+8h] [rbp-B0h]
  unsigned int v147; // [rsp+8h] [rbp-B0h]
  __int64 v148; // [rsp+8h] [rbp-B0h]
  unsigned int v149; // [rsp+8h] [rbp-B0h]
  __int64 v150; // [rsp+8h] [rbp-B0h]
  __m128i *v151; // [rsp+8h] [rbp-B0h]
  unsigned int v152; // [rsp+8h] [rbp-B0h]
  unsigned int v153; // [rsp+8h] [rbp-B0h]
  _QWORD *v154; // [rsp+10h] [rbp-A8h]
  __int64 v155; // [rsp+48h] [rbp-70h] BYREF
  void *v156; // [rsp+50h] [rbp-68h]
  __int64 v157[11]; // [rsp+60h] [rbp-58h] BYREF

  v5 = *(_QWORD **)(a1 + 16);
  if ( *v5 )
  {
    v6 = _mm_loadl_epi64((const __m128i *)(*v5 - 8LL));
    v7 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v6, 229));
    v8 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v6) + 8);
    v9 = (_QWORD *)*v5;
    v10 = v8 + 1;
    *v8 = v6.m128i_i64[0];
    if ( v9 )
    {
      v11 = 8LL * *((unsigned int *)v9 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v8[1] = *v9;
      }
      else
      {
        memmove(v8 + 1, v9, v11);
      }
    }
    v155 = 0;
    v156 = nullptr;
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_7;
      v103 = (unsigned int)(v7 - 1);
      v104 = v155;
      v105 = v10[v103];
      v106 = v103;
      v107 = *(_DWORD *)v105;
      if ( *(_DWORD *)v105 >= (unsigned int)v155 )
      {
        v110 = *(_WORD *)(v105 + 4);
        if ( v110 == 1 )
        {
          sub_186B510(&v155, v107 + 1, 0);
          v108 = v156;
LABEL_178:
          v108[v107 >> 5] |= 1 << v107;
          --*((_DWORD *)v10 - 1);
          goto LABEL_145;
        }
        if ( v110 == 2 )
        {
          v109 = v156;
LABEL_173:
          v54 = 0;
          if ( v109 )
            sub_186B220(v109);
LABEL_80:
          sub_186B220(v10 - 1);
          return v54;
        }
        if ( v110 )
          goto LABEL_79;
        v111 = *(unsigned int *)(v105 + 24);
        v112 = (unsigned int **)(v105 + 32);
        if ( !(_DWORD)v111 )
          goto LABEL_225;
      }
      else
      {
        v108 = v156;
        v109 = v156;
        if ( (*((_DWORD *)v156 + (v107 >> 5)) & (1 << v107)) != 0 )
        {
          *((_DWORD *)v10 - 1) = v106;
          goto LABEL_145;
        }
        v124 = *(_WORD *)(v105 + 4);
        if ( v124 == 1 )
          goto LABEL_178;
        if ( v124 == 2 )
          goto LABEL_173;
        if ( v124 )
        {
LABEL_79:
          sub_1872CE0("");
          sub_1873130(114, 306);
        }
        v111 = *(unsigned int *)(v105 + 24);
        v112 = (unsigned int **)(v105 + 32);
        if ( !(_DWORD)v111 )
          goto LABEL_207;
      }
      v113 = v105;
      v114 = v105 + 8 * v111;
      v115 = 1;
      while ( 1 )
      {
        v119 = *(unsigned int **)(v113 + 32);
        if ( *v119 >= v104 || (*((_DWORD *)v156 + (*v119 >> 5)) & (1 << *v119)) == 0 )
        {
          if ( v10 )
          {
            v120 = *((_DWORD *)v10 - 1);
            if ( v120 == *((_DWORD *)v10 - 2) )
            {
              v121 = (3 * v120 + 1) >> 1;
              v122 = 8 * v121 + 8;
              if ( 8 * v120 + 8 >= (unsigned int)v122 || v120 >= v121 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v157, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v157);
                sub_233E40((__int64)v157);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v150 = v114;
              v141 = (3 * v120 + 1) >> 1;
              v123 = (unsigned int *)sub_186B300(v10 - 1, v122);
              v10 = v123 + 2;
              v114 = v150;
              *v123 = v141;
              LODWORD(v123) = v123[1];
              v118 = (unsigned int **)&v10[(unsigned int)v123];
              v117 = (_DWORD)v123 + 1;
            }
            else
            {
              v116 = v120;
              v117 = v120 + 1;
              v118 = (unsigned int **)&v10[v116];
            }
          }
          else
          {
            v142 = v114;
            v135 = (_QWORD *)sub_186B270(0x18u);
            *v135 = 2;
            v114 = v142;
            v117 = 1;
            v10 = v135 + 1;
            v118 = (unsigned int **)v10;
          }
          *v118 = v119;
          v115 = 0;
          *((_DWORD *)v10 - 1) = v117;
        }
        v113 += 8;
        if ( v114 == v113 )
          break;
        v104 = v155;
      }
      if ( v115 )
        break;
LABEL_180:
      if ( !*(_WORD *)(v105 + 4) )
      {
        v127 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL);
        if ( v127 )
        {
          if ( *(_DWORD *)(a1 + 24) == *v127 )
          {
            if ( v127[1] != 13
              || (v136 = sub_1684260(a1 + 24, v105), sub_15D0A90(a1 + 232, v136, 1), !*(_WORD *)(v105 + 4))
              && (v127 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL)) != nullptr
              && *(_DWORD *)(a1 + 24) == *v127 )
            {
              if ( v127[1] == 5 )
              {
                v128 = sub_1684280(a1 + 24);
                sub_15D0A90(a1 + 232, v128, 1);
              }
            }
          }
        }
      }
      if ( !v10 )
      {
        v10 = nullptr;
        goto LABEL_7;
      }
LABEL_145:
      v7 = *((_DWORD *)v10 - 1);
    }
    v107 = *(_DWORD *)v105;
    v108 = v156;
    if ( *(_DWORD *)v105 >= (unsigned int)v155 )
    {
LABEL_225:
      sub_186B510(&v155, v107 + 1, 0);
      v108 = v156;
    }
LABEL_207:
    v108[v107 >> 5] |= 1 << v107;
    --*((_DWORD *)v10 - 1);
    v129 = 8LL * *(unsigned int *)(v105 + 24);
    v130 = &v112[(unsigned __int64)v129 / 8];
    if ( !*(_WORD *)(v105 + 4)
      && (v131 = *(_DWORD **)(*(_QWORD *)(v105 + 16) + 24LL)) != nullptr
      && *(_DWORD *)(a1 + 144) == *v131
      && v131[1] == 1 )
    {
      if ( v129 )
      {
        for ( i = v112 + 1; i != v130; *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * (v134 >> 5)) |= 1 << v134 )
        {
          v134 = **i;
          if ( v134 >= *(_DWORD *)(a1 + 216) )
          {
            v153 = **i;
            sub_186B510(a1 + 216, v134 + 1, 0);
            v134 = v153;
          }
          ++i;
        }
      }
    }
    else if ( v129 )
    {
      do
      {
        v132 = **v112;
        if ( v132 >= *(_DWORD *)(a1 + 216) )
        {
          v152 = **v112;
          sub_186B510(a1 + 216, v132 + 1, 0);
          v132 = v152;
        }
        ++v112;
        *(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * (v132 >> 5)) |= 1 << v132;
      }
      while ( v130 != v112 );
    }
    sub_D99420(a1 + 120, (void **)(a1 + 56), (void **)(a1 + 80), v105);
    goto LABEL_180;
  }
  v155 = 0;
  v10 = nullptr;
  v156 = nullptr;
LABEL_7:
  v12 = *(_QWORD **)(a1 + 80);
  v13 = 2LL * *(unsigned int *)(a1 + 88);
  v14 = &v12[v13];
  if ( v12 == &v12[v13] )
    goto LABEL_40;
  while ( *v12 <= 1u )
  {
    v12 += 2;
    if ( v14 == v12 )
      goto LABEL_40;
  }
  if ( v14 == v12 )
    goto LABEL_40;
  v15 = (_DWORD *)*v12;
  v16 = nullptr;
  do
  {
    if ( *v15 < *(_DWORD *)(a1 + 216) && (*(_DWORD *)(*(_QWORD *)(a1 + 224) + 4LL * (*v15 >> 5)) & (1 << *v15)) != 0 )
    {
      if ( v16 )
      {
        v17 = *((_DWORD *)v16 - 1);
        if ( v17 == *((_DWORD *)v16 - 2) )
        {
          v100 = (3 * v17 + 1) >> 1;
          v101 = 8 * v100 + 8;
          if ( 8 * v17 + 8 >= v101 || v17 >= v100 )
          {
            v2 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v157, "Overflow encountered when expanding vector");
            *v2 = (char *)off_1C63128;
            sub_2333C0(v2 + 1, v157);
            sub_233E40((__int64)v157);
            __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v149 = (3 * v17 + 1) >> 1;
          v102 = (unsigned int *)sub_186B300(v16 - 1, v101);
          v16 = v102 + 2;
          *v102 = v149;
          LODWORD(v102) = v102[1];
          v20 = &v16[(unsigned int)v102];
          v15 = (_DWORD *)*v12;
          v19 = (_DWORD)v102 + 1;
        }
        else
        {
          v18 = v17;
          v19 = v17 + 1;
          v20 = &v16[v18];
        }
      }
      else
      {
        v126 = (_QWORD *)sub_186B270(0x18u);
        *v126 = 2;
        v15 = (_DWORD *)*v12;
        v19 = 1;
        v16 = v126 + 1;
        v20 = v16;
      }
      *v20 = v15;
      *((_DWORD *)v16 - 1) = v19;
      v21 = v12[1];
      if ( v21 )
      {
        v22 = *(void **)(v21 + 24);
        if ( v22 )
        {
          v137 = v12[1];
          sub_186B220(v22);
          v21 = v137;
        }
        if ( *(_QWORD *)v21 )
        {
          v138 = v21;
          sub_186B220(*(void **)v21);
          v21 = v138;
        }
        sub_186B220((void *)v21);
      }
    }
    v23 = (_DWORD **)(v12 + 2);
    if ( v14 == v12 + 2 )
      break;
    while ( 1 )
    {
      v15 = *v23;
      v12 = v23;
      if ( (unsigned __int64)*v23 > 1 )
        break;
      v23 += 2;
      if ( v14 == v23 )
        goto LABEL_29;
    }
  }
  while ( v14 != v23 );
LABEL_29:
  if ( !v16 )
    goto LABEL_40;
  v24 = v16;
  v25 = &v16[*((unsigned int *)v16 - 1)];
  if ( v16 == v25 )
    goto LABEL_39;
LABEL_31:
  while ( 2 )
  {
    while ( 2 )
    {
      v26 = *v24;
      v27 = *(unsigned int *)(a1 + 88);
      v28 = *(__int64 **)(a1 + 80);
      v29 = *(_DWORD *)(*v24 + 12LL);
      v30 = v27 - 1;
      v27 *= 16;
      v31 = (__int64 *)((char *)v28 + v27);
      v32 = 16LL * (v29 & v30);
      v33 = &v28[(unsigned __int64)v32 / 8];
      if ( v32 == v27 )
      {
LABEL_110:
        if ( v28 == v33 )
        {
LABEL_38:
          if ( v25 == ++v24 )
            goto LABEL_39;
          continue;
        }
        v34 = *(__int64 **)(a1 + 80);
        while ( 1 )
        {
          v82 = *v34;
          if ( (unsigned __int64)*v34 > 1 )
          {
            if ( *(_DWORD *)(v82 + 12) == v29 && v26 == v82 )
              goto LABEL_119;
          }
          else if ( !v82 )
          {
            if ( v25 == ++v24 )
              goto LABEL_39;
            goto LABEL_31;
          }
          v34 += 2;
          if ( v33 == v34 )
            goto LABEL_38;
        }
      }
      break;
    }
    v34 = &v28[(unsigned __int64)v32 / 8];
    while ( 1 )
    {
      v35 = *v34;
      if ( (unsigned __int64)*v34 > 1 )
        break;
      if ( !v35 )
        goto LABEL_38;
LABEL_35:
      v34 += 2;
      if ( v31 == v34 )
        goto LABEL_110;
    }
    if ( *(_DWORD *)(v35 + 12) != v29 || v26 != v35 )
      goto LABEL_35;
LABEL_119:
    v83 = v34 + 2;
    if ( v31 == v34 + 2 )
      v83 = *(_QWORD **)(a1 + 80);
    v84 = *(_DWORD *)(a1 + 92) - 1;
    if ( *v83 )
    {
      *v34 = 1;
      v85 = *(_DWORD *)(a1 + 96);
      *(_DWORD *)(a1 + 92) = v84;
      v86 = v85 + 1;
      if ( v84 < 0x40 )
        v84 = 64;
      *(_DWORD *)(a1 + 96) = v86;
      if ( v84 < v86 )
      {
        v146 = v24;
        v87 = sub_186AF10(v83);
        v24 = v146;
        if ( !v87 )
        {
          v154 = v146;
          v147 = *(_DWORD *)(a1 + 88);
          v88 = v147;
          v89 = (__m128i *)sub_186B270(v88 * 16);
          v24 = v154;
          v90 = v89;
          v91 = &v89[v88];
          if ( v147 )
          {
            if ( ((16 * (_BYTE)v147) & 0x10) == 0 || (*v89 = 0, ++v89, v91 != v89) )
            {
              do
              {
                *v89 = 0;
                v89 += 2;
                v89[-1] = 0;
              }
              while ( v91 != v89 );
            }
          }
          v92 = *(unsigned int *)(a1 + 88);
          v93 = *(const __m128i **)(a1 + 80);
          v94 = v92 - 1;
          v95 = (__m128i *)&v93[v92];
          v148 = 16 * v92;
          v96 = &v90[v92];
          if ( v93 != v95 )
          {
            do
            {
              if ( v93->m128i_i64[0] > 1uLL )
              {
                v97 = 16LL * (*(_DWORD *)(v93->m128i_i64[0] + 12) & v94);
                v98 = &v90[(unsigned __int64)v97 / 0x10];
                if ( v148 == v97 )
                {
LABEL_188:
                  if ( v90 == v98 )
                  {
LABEL_224:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v99 = v90;
                  while ( v99->m128i_i64[0] )
                  {
                    if ( v98 == ++v99 )
                      goto LABEL_224;
                  }
                }
                else
                {
                  v99 = &v90[(unsigned __int64)v97 / 0x10];
                  while ( v99->m128i_i64[0] )
                  {
                    if ( v96 == ++v99 )
                      goto LABEL_188;
                  }
                }
                *v99 = _mm_loadu_si128(v93);
              }
              ++v93;
            }
            while ( v95 != v93 );
            v95 = *(__m128i **)(a1 + 80);
          }
          if ( v95 )
          {
            sub_186B220(v95);
            v24 = v154;
          }
          *(_QWORD *)(a1 + 80) = v90;
          *(_DWORD *)(a1 + 96) = 0;
        }
      }
      goto LABEL_38;
    }
    ++v24;
    *v34 = 0;
    *(_DWORD *)(a1 + 92) = v84;
    if ( v25 != v24 )
      continue;
    break;
  }
LABEL_39:
  sub_186B220(v16 - 1);
LABEL_40:
  v36 = *(__int64 **)(a1 + 56);
  v37 = 2LL * *(unsigned int *)(a1 + 64);
  v38 = &v36[v37];
  if ( v36 != &v36[v37] )
  {
    while ( (unsigned __int64)*v36 <= 1 )
    {
      v36 += 2;
      if ( v38 == v36 )
        goto LABEL_63;
    }
    if ( v36 != v38 )
    {
      v39 = *v36;
      v40 = nullptr;
      do
      {
        if ( (unsigned __int8)sub_15D37A0(a1 + 232, v39) )
        {
          if ( v40 )
          {
            v56 = *((_DWORD *)v40 - 1);
            if ( v56 == *((_DWORD *)v40 - 2) )
            {
              v62 = (3 * v56 + 1) >> 1;
              v63 = 8 * v62 + 8;
              if ( 8 * v56 + 8 >= (unsigned int)v63 || v56 >= v62 )
              {
                v1 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v157, "Overflow encountered when expanding vector");
                *v1 = (char *)off_1C63128;
                sub_2333C0(v1 + 1, v157);
                sub_233E40((__int64)v157);
                __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v143 = (3 * v56 + 1) >> 1;
              v64 = (unsigned int *)sub_186B300(v40 - 1, v63);
              v40 = v64 + 2;
              *v64 = v143;
              LODWORD(v64) = v64[1];
              v59 = &v40[(unsigned int)v64];
              v58 = (_DWORD)v64 + 1;
            }
            else
            {
              v57 = v56;
              v58 = v56 + 1;
              v59 = &v40[v57];
            }
          }
          else
          {
            v125 = (_QWORD *)sub_186B270(0x18u);
            *v125 = 2;
            v58 = 1;
            v40 = v125 + 1;
            v59 = v40;
          }
          *v59 = *v36;
          *((_DWORD *)v40 - 1) = v58;
          v60 = v36[1];
          if ( v60 )
          {
            v61 = *(void **)(v60 + 24);
            if ( v61 )
            {
              v139 = v36[1];
              sub_186B220(v61);
              v60 = v139;
            }
            if ( *(_QWORD *)v60 )
            {
              v140 = v60;
              sub_186B220(*(void **)v60);
              v60 = v140;
            }
            sub_186B220((void *)v60);
          }
        }
        v41 = v36 + 2;
        if ( v38 == v36 + 2 )
          break;
        while ( 1 )
        {
          v39 = *v41;
          v36 = v41;
          if ( (unsigned __int64)*v41 > 1 )
            break;
          v41 += 2;
          if ( v38 == v41 )
            goto LABEL_52;
        }
      }
      while ( v38 != v41 );
LABEL_52:
      if ( !v40 )
        goto LABEL_63;
      v42 = v40;
      v43 = &v40[*((unsigned int *)v40 - 1)];
      if ( v43 == v40 )
        goto LABEL_62;
      while ( 1 )
      {
LABEL_54:
        v44 = *v42;
        v45 = *(unsigned int *)(a1 + 64);
        v46 = *(__int64 **)(a1 + 56);
        v47 = *(_DWORD *)(*v42 + 12LL);
        v48 = v45 - 1;
        v45 *= 16;
        v49 = (__int64 *)((char *)v46 + v45);
        v50 = 16LL * (v47 & v48);
        v51 = &v46[(unsigned __int64)v50 / 8];
        if ( v50 != v45 )
        {
          for ( j = &v46[(unsigned __int64)v50 / 8]; v49 != j; j += 2 )
          {
            v53 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(v53 + 12) == v47 && v44 == v53 )
              {
LABEL_90:
                v66 = j + 2;
                if ( v49 == j + 2 )
                  v66 = *(_QWORD **)(a1 + 56);
                v67 = *(_DWORD *)(a1 + 68) - 1;
                if ( *v66 )
                {
                  *j = 1;
                  v68 = *(_DWORD *)(a1 + 72);
                  *(_DWORD *)(a1 + 68) = v67;
                  v69 = v68 + 1;
                  if ( v67 < 0x40 )
                    v67 = 64;
                  *(_DWORD *)(a1 + 72) = v69;
                  if ( v67 < v69 && !(unsigned __int8)sub_186AF10(v66) )
                  {
                    v144 = *(_DWORD *)(a1 + 64);
                    v70 = v144;
                    v71 = (__m128i *)sub_186B270(v70 * 16);
                    v72 = v71;
                    v73 = &v71[v70];
                    if ( v144 )
                    {
                      if ( ((16 * (_BYTE)v144) & 0x10) == 0 || (*v71 = 0, ++v71, v71 != v73) )
                      {
                        do
                        {
                          *v71 = 0;
                          v71 += 2;
                          v71[-1] = 0;
                        }
                        while ( v71 != v73 );
                      }
                    }
                    v74 = *(unsigned int *)(a1 + 64);
                    v75 = *(const __m128i **)(a1 + 56);
                    v76 = v74 - 1;
                    v77 = (__m128i *)&v75[v74];
                    v145 = 16 * v74;
                    v78 = &v72[v74];
                    if ( v75 != v77 )
                    {
                      do
                      {
                        if ( v75->m128i_i64[0] > 1uLL )
                        {
                          v79 = 16LL * (*(_DWORD *)(v75->m128i_i64[0] + 12) & v76);
                          v80 = &v72[(unsigned __int64)v79 / 0x10];
                          if ( v145 == v79 )
                          {
LABEL_193:
                            if ( v72 == v80 )
                            {
LABEL_223:
                              sub_1872CE0("");
                              sub_1873130(114, 213);
                            }
                            v81 = v72;
                            while ( v81->m128i_i64[0] )
                            {
                              if ( v80 == ++v81 )
                                goto LABEL_223;
                            }
                          }
                          else
                          {
                            v81 = &v72[(unsigned __int64)v79 / 0x10];
                            while ( v81->m128i_i64[0] )
                            {
                              if ( v78 == ++v81 )
                                goto LABEL_193;
                            }
                          }
                          *v81 = _mm_loadu_si128(v75);
                        }
                        ++v75;
                      }
                      while ( v77 != v75 );
                      v77 = *(__m128i **)(a1 + 56);
                    }
                    if ( v77 )
                    {
                      v151 = v72;
                      sub_186B220(v77);
                      v72 = v151;
                    }
                    *(_QWORD *)(a1 + 56) = v72;
                    *(_DWORD *)(a1 + 72) = 0;
                  }
                  goto LABEL_61;
                }
                ++v42;
                *j = 0;
                *(_DWORD *)(a1 + 68) = v67;
                if ( v43 != v42 )
                  goto LABEL_54;
LABEL_62:
                sub_186B220(v40 - 1);
                goto LABEL_63;
              }
            }
            else if ( !v53 )
            {
              goto LABEL_61;
            }
          }
        }
        if ( v46 != v51 )
          break;
LABEL_61:
        if ( v43 == ++v42 )
          goto LABEL_62;
      }
      j = *(__int64 **)(a1 + 56);
      while ( 1 )
      {
        v65 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *(_DWORD *)(v65 + 12) == v47 && v44 == v65 )
            goto LABEL_90;
        }
        else if ( !v65 )
        {
          if ( v43 == ++v42 )
            goto LABEL_62;
          goto LABEL_54;
        }
        j += 2;
        if ( v51 == j )
          goto LABEL_61;
      }
    }
  }
LABEL_63:
  if ( v156 )
    sub_186B220(v156);
  v54 = 1;
  if ( v10 )
    goto LABEL_80;
  return v54;
}

