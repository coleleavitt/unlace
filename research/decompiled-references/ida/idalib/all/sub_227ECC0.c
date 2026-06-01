__int64 __fastcall sub_227ECC0(__int64 a1)
{
  const char *v2; // r8
  __int64 v3; // rdx
  int v4; // r12d
  size_t v5; // r13
  char *v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  char *v10; // rbx
  size_t v11; // rdx
  int v12; // eax
  __int64 v13; // r12
  char v14; // cl
  const char *v15; // rax
  char v16; // si
  __int64 v17; // rcx
  char v18; // dl
  char v19; // dl
  char *v20; // rax
  char v21; // al
  unsigned __int8 v22; // al
  const char *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // r12
  __m128i v26; // xmm0
  __int64 result; // rax
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdi
  int v31; // eax
  size_t v32; // r14
  void *v33; // rax
  __int64 v34; // rdx
  char *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rsi
  __m128i v38; // xmm2
  __int64 v39; // rdx
  __m128i v40; // xmm6
  __m128i v41; // xmm2
  __m128i si128; // xmm3
  __m128i v43; // xmm8
  __m128i v44; // xmm7
  __m128i v45; // xmm6
  __m128i v46; // xmm5
  __m128i v47; // xmm0
  __m128i v48; // xmm0
  __m128i v49; // xmm11
  __m128i v50; // xmm9
  __m128i v51; // xmm0
  __m128 v52; // xmm10
  __m128 v53; // xmm0
  int v54; // edx
  int v55; // ecx
  int v56; // edx
  __int64 v57; // rdx
  __int64 v58; // rcx
  void *v59; // rdi
  int v60; // eax
  const char *v61; // rdx
  char v62; // r13
  int v63; // r12d
  const char *v64; // r13
  char v65; // al
  const unsigned __int16 **v66; // rax
  const char *v67; // rdx
  const unsigned __int16 *v68; // rcx
  size_t v69; // r12
  const char *v70; // r14
  char **v71; // r15
  __m128i v72; // xmm0
  char *v73; // rax
  unsigned __int8 v74; // dl
  _BYTE *v75; // rcx
  const char *i; // r12
  __int64 v77; // rdi
  __int64 v78; // r13
  size_t v79; // rax
  void *v80; // rdi
  size_t v81; // rsi
  char *v82; // rax
  void *v83; // rdi
  int v84; // eax
  __m128i v85; // xmm0
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  __m128i v88; // xmm0
  __m128i v89; // xmm0
  __m128i v90; // xmm0
  __m128i v91; // xmm0
  __m128i v92; // xmm0
  __int64 v93; // rcx
  char v94; // al
  int v95; // edx
  __m128i v96; // xmm0
  __int32 v97; // edi
  bool v98; // zf
  int v99; // edx
  signed int v100; // r15d
  __int64 v101; // r12
  __int64 v102; // r13
  unsigned __int8 v103; // r14
  unsigned __int8 v104; // al
  int v105; // eax
  char *v106; // rcx
  unsigned __int8 v107; // dl
  char v108; // si
  _BYTE *v109; // rdi
  unsigned __int8 v110; // r8
  int v111; // esi
  __int64 j; // rdx
  __int64 v113; // rax
  unsigned __int8 v114; // cl
  __int64 v115; // rax
  __int64 v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rax
  __int64 v119; // rax
  int v120; // edx
  __m128i v121; // xmm0
  __int64 v122; // rdx
  __int64 v123; // rcx
  void *v124; // rdi
  unsigned __int64 v125; // r15
  char v126; // r14
  __int64 v127; // rdx
  unsigned __int64 v128; // r13
  char *v129; // rcx
  __int64 v130; // r9
  unsigned __int8 v131; // r8
  unsigned __int8 v132; // r11
  __int64 v133; // rdx
  __int64 v134; // rdx
  __int64 v135; // rbx
  __m128i v136; // xmm1
  __int64 v137; // rbx
  __m128i v138; // xmm1
  void *v139; // rax
  void *v140; // rax
  __m128i v141; // xmm1
  __m128i v142; // xmm1
  __m128i v143[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *(const char **)a1;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) > 5 )
  {
    if ( !memcmp(v2, "[:<:]]", 6u) )
    {
      if ( !*(_DWORD *)(a1 + 16) )
      {
        v57 = *(_QWORD *)(a1 + 40);
        v58 = *(_QWORD *)(a1 + 32);
        v59 = *(void **)(a1 + 24);
        if ( v57 >= v58 )
        {
          v135 = 3 * ((v58 + 1) / 2);
          if ( v58 < v135 )
          {
            if ( (unsigned __int64)v135 <= 0x1FFFFFFFFFFFFFFFLL )
            {
              v139 = realloc(v59, 24 * ((v58 + 1) / 2));
              v59 = v139;
              if ( v139 )
              {
                v57 = *(_QWORD *)(a1 + 40);
                v2 = *(const char **)a1;
                *(_QWORD *)(a1 + 24) = v139;
                *(_QWORD *)(a1 + 32) = v135;
              }
              else
              {
                if ( !*(_DWORD *)(a1 + 16) )
                  *(_DWORD *)(a1 + 16) = 12;
                v59 = *(void **)(a1 + 24);
                v57 = *(_QWORD *)(a1 + 40);
                v143[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
                v141 = _mm_loadl_epi64(v143);
                v2 = (const char *)v141.m128i_i64[0];
                *(__m128i *)a1 = _mm_unpacklo_epi64(v141, v141);
              }
            }
            else
            {
              *(_DWORD *)(a1 + 16) = 12;
              v143[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
              v136 = _mm_loadl_epi64(v143);
              v2 = (const char *)v136.m128i_i64[0];
              *(__m128i *)a1 = _mm_unpacklo_epi64(v136, v136);
            }
          }
        }
        *(_QWORD *)(a1 + 40) = v57 + 1;
        *((_QWORD *)v59 + v57) = 2550136832LL;
      }
    }
    else
    {
      if ( memcmp(v2, "[:>:]]", 6u) )
        goto LABEL_4;
      if ( !*(_DWORD *)(a1 + 16) )
      {
        v122 = *(_QWORD *)(a1 + 40);
        v123 = *(_QWORD *)(a1 + 32);
        v124 = *(void **)(a1 + 24);
        if ( v122 >= v123 )
        {
          v137 = 3 * ((v123 + 1) / 2);
          if ( v123 < v137 )
          {
            if ( (unsigned __int64)v137 <= 0x1FFFFFFFFFFFFFFFLL )
            {
              v140 = realloc(v124, 24 * ((v123 + 1) / 2));
              v124 = v140;
              if ( v140 )
              {
                v122 = *(_QWORD *)(a1 + 40);
                v2 = *(const char **)a1;
                *(_QWORD *)(a1 + 24) = v140;
                *(_QWORD *)(a1 + 32) = v137;
              }
              else
              {
                if ( !*(_DWORD *)(a1 + 16) )
                  *(_DWORD *)(a1 + 16) = 12;
                v124 = *(void **)(a1 + 24);
                v122 = *(_QWORD *)(a1 + 40);
                v143[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
                v142 = _mm_loadl_epi64(v143);
                v2 = (const char *)v142.m128i_i64[0];
                *(__m128i *)a1 = _mm_unpacklo_epi64(v142, v142);
              }
            }
            else
            {
              *(_DWORD *)(a1 + 16) = 12;
              v143[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
              v138 = _mm_loadl_epi64(v143);
              v2 = (const char *)v138.m128i_i64[0];
              *(__m128i *)a1 = _mm_unpacklo_epi64(v138, v138);
            }
          }
        }
        *(_QWORD *)(a1 + 40) = v122 + 1;
        *((_QWORD *)v124 + v122) = 2684354560LL;
      }
    }
    result = (__int64)(v2 + 6);
    *(_QWORD *)a1 = v2 + 6;
    return result;
  }
LABEL_4:
  v3 = *(_QWORD *)(a1 + 56);
  v4 = *(_DWORD *)(v3 + 20);
  v5 = *(int *)(v3 + 16);
  v6 = *(char **)(v3 + 24);
  *(_DWORD *)(v3 + 20) = v4 + 1;
  v7 = *(_DWORD *)(a1 + 48);
  if ( v4 >= v7 )
  {
    v31 = v7 + 8;
    *(_DWORD *)(a1 + 48) = v31;
    if ( (unsigned __int64)v31 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v32 = v5 * ((unsigned __int64)v31 >> 3);
      v33 = realloc(v6, 32LL * v31);
      if ( v33 )
      {
        v34 = *(_QWORD *)(a1 + 56);
        *(_QWORD *)(v34 + 24) = v33;
        v35 = (char *)realloc(*(void **)(v34 + 32), v32);
        if ( v35 )
        {
          v36 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(v36 + 32) = v35;
          if ( v4 > 0 )
          {
            v37 = *(_QWORD *)(v36 + 24);
            if ( (unsigned int)(v4 - 1) <= 2 )
            {
              v54 = 0;
              goto LABEL_48;
            }
            v143[0].m128i_i64[0] = v5;
            v38 = _mm_loadl_epi64(v143);
            v39 = v37;
            v143[0].m128i_i64[0] = (__int64)v35;
            v40 = _mm_loadl_epi64(v143);
            v41 = _mm_unpacklo_epi64(v38, v38);
            si128 = _mm_load_si128((const __m128i *)&xmmword_23AB8D0);
            v43 = _mm_load_si128((const __m128i *)&xmmword_23AB8F0);
            v44 = _mm_load_si128((const __m128i *)&xmmword_23ABCF0);
            v45 = _mm_unpacklo_epi64(v40, v40);
            v46 = _mm_srli_epi64(v41, 0x20u);
            do
            {
              v39 += 128;
              v47 = _mm_add_epi32(_mm_and_si128(_mm_cmpgt_epi32((__m128i)0LL, si128), v44), si128);
              si128 = _mm_add_epi32(si128, v43);
              v48 = _mm_srai_epi32(v47, 3u);
              v49 = _mm_cmpgt_epi32((__m128i)0LL, v48);
              v50 = _mm_unpacklo_epi32(v48, v49);
              v51 = _mm_unpackhi_epi32(v48, v49);
              v52 = (__m128)_mm_add_epi64(
                              _mm_add_epi64(
                                _mm_slli_epi64(
                                  _mm_add_epi64(_mm_mul_epu32(_mm_srli_epi64(v50, 0x20u), v41), _mm_mul_epu32(v50, v46)),
                                  0x20u),
                                _mm_mul_epu32(v50, v41)),
                              v45);
              *(_QWORD *)(v39 - 128) = v52.m128_u64[0];
              _mm_storeh_ps((double *)(v39 - 96), v52);
              v53 = (__m128)_mm_add_epi64(
                              _mm_add_epi64(
                                _mm_mul_epu32(v51, v41),
                                _mm_slli_epi64(
                                  _mm_add_epi64(_mm_mul_epu32(_mm_srli_epi64(v51, 0x20u), v41), _mm_mul_epu32(v51, v46)),
                                  0x20u)),
                              v45);
              *(_QWORD *)(v39 - 64) = v53.m128_u64[0];
              _mm_storeh_ps((double *)(v39 - 32), v53);
            }
            while ( v39 != v37 + ((unsigned __int64)((unsigned int)v4 >> 2) << 7) );
            v54 = v4 & 0x7FFFFFFC;
            if ( (v4 & 0xFFFFFFFC) != v4 )
            {
LABEL_48:
              *(_QWORD *)(v37 + 32LL * v54) = &v35[v5 * (v54 >> 3)];
              v55 = v54 + 1;
              if ( v4 > v54 + 1 )
              {
                v56 = v54 + 2;
                *(_QWORD *)(v37 + 32LL * v55) = &v35[v5 * (v55 >> 3)];
                if ( v4 > v56 )
                  *(_QWORD *)(v37 + 32LL * v56) = &v35[v5 * (v56 >> 3)];
              }
            }
          }
          memset(&v35[v32 - v5], 0, v5);
          v3 = *(_QWORD *)(a1 + 56);
          v6 = *(char **)(v3 + 24);
          goto LABEL_5;
        }
      }
      v6 = *(char **)(*(_QWORD *)(a1 + 56) + 24LL);
    }
LABEL_159:
    free(v6);
    v119 = *(_QWORD *)(a1 + 56);
    *(_QWORD *)(v119 + 24) = 0;
    free(*(void **)(v119 + 32));
    v120 = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 32LL) = 0;
    if ( !v120 )
      *(_DWORD *)(a1 + 16) = 12;
    v143[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
    v121 = _mm_loadl_epi64(v143);
    *(__m128i *)a1 = _mm_unpacklo_epi64(v121, v121);
    return (__int64)byte_2D0ADA8;
  }
LABEL_5:
  if ( !v6 )
    goto LABEL_159;
  v8 = *(_QWORD *)(v3 + 32);
  if ( !v8 )
    goto LABEL_159;
  v9 = v4 + 7;
  v10 = &v6[32 * v4];
  if ( v4 >= 0 )
    v9 = v4;
  v10[9] = 0;
  *((_QWORD *)v10 + 2) = 0;
  *((_QWORD *)v10 + 3) = 0;
  v11 = v8 + v5 * (v9 >> 3);
  *(_QWORD *)v10 = v11;
  v12 = 1 << (v4 % 8);
  v10[8] = v12;
  v13 = *(_QWORD *)(a1 + 8);
  v14 = v12;
  v15 = *(const char **)a1;
  if ( v13 - *(_QWORD *)a1 <= 0 )
    goto LABEL_32;
  v16 = *v15;
  v143[0].m128i_i32[3] = 0;
  if ( v16 != 94 )
  {
    if ( v16 != 93 )
      goto LABEL_12;
LABEL_169:
    *(_QWORD *)a1 = v15 + 1;
    *(_BYTE *)(v11 + 93) |= v14;
    v10[9] += 93;
    v13 = *(_QWORD *)(a1 + 8);
    v15 = *(const char **)a1;
    goto LABEL_14;
  }
  *(_QWORD *)a1 = v15 + 1;
  if ( v13 - (__int64)(v15 + 1) <= 0 )
  {
LABEL_32:
    v143[0].m128i_i32[0] = *(_DWORD *)(a1 + 16);
LABEL_33:
    if ( !v143[0].m128i_i32[0] )
      *(_DWORD *)(a1 + 16) = 7;
    v25 = *(_QWORD *)(a1 + 56);
    v143[0].m128i_i64[0] = (__int64)byte_2D0ADA8;
    v26 = _mm_loadl_epi64(v143);
    result = *(int *)(v25 + 16);
    *(__m128i *)a1 = _mm_unpacklo_epi64(v26, v26);
    goto LABEL_36;
  }
  v16 = v15[1];
  v143[0].m128i_i32[3] = 1;
  ++v15;
  if ( v16 == 93 )
    goto LABEL_169;
LABEL_12:
  if ( v16 == 45 )
  {
    *(_QWORD *)a1 = v15 + 1;
    *(_BYTE *)(v11 + 45) |= v14;
    v10[9] += 45;
    v13 = *(_QWORD *)(a1 + 8);
    v15 = *(const char **)a1;
  }
  while ( 1 )
  {
LABEL_14:
    v17 = v13 - (_QWORD)v15;
    if ( v13 - (__int64)v15 <= 0 )
      goto LABEL_32;
    v18 = *v15;
    if ( *v15 == 93 )
      goto LABEL_125;
    if ( v17 != 1 && v18 == 45 )
      break;
    if ( v18 == 45 )
      goto LABEL_64;
    if ( v18 != 91 || v17 == 1 )
      goto LABEL_57;
    v19 = v15[1];
    if ( v19 == 58 )
    {
      v64 = v15 + 2;
      *(_QWORD *)a1 = v15 + 2;
      if ( v13 - (__int64)(v15 + 2) <= 0 )
      {
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 7;
        v88 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        *(__m128i *)a1 = _mm_unpacklo_epi64(v88, v88);
        if ( byte_2D0ADA8[0] != 45 )
        {
          v69 = 0;
          v64 = byte_2D0ADA8;
          if ( byte_2D0ADA8[0] != 93 )
            goto LABEL_73;
        }
      }
      else
      {
        v65 = v15[2];
        if ( v65 != 93 && v65 != 45 )
        {
          v66 = __ctype_b_loc();
          v67 = v64;
          v68 = *v66;
          do
          {
            if ( (v68[*(unsigned __int8 *)v67] & 0x400) == 0 )
              break;
            *(_QWORD *)a1 = ++v67;
          }
          while ( v13 - (__int64)v67 > 0 );
          v69 = v67 - v64;
          goto LABEL_73;
        }
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 4;
      }
      v89 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
      v69 = 0;
      v64 = byte_2D0ADA8;
      *(__m128i *)a1 = _mm_unpacklo_epi64(v89, v89);
LABEL_73:
      v70 = off_2CCAEA0;
      if ( !off_2CCAEA0 )
      {
LABEL_78:
        if ( !*(_DWORD *)(a1 + 16) )
        {
          v72 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          *(_DWORD *)(a1 + 16) = 4;
          *(__m128i *)a1 = _mm_unpacklo_epi64(v72, v72);
LABEL_31:
          v24 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          *(__m128i *)a1 = _mm_unpacklo_epi64(v24, v24);
          goto LABEL_32;
        }
        v91 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        *(__m128i *)a1 = _mm_unpacklo_epi64(v91, v91);
LABEL_111:
        v92 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        *(__m128i *)a1 = _mm_unpacklo_epi64(v92, v92);
        goto LABEL_31;
      }
      v71 = &off_2CCAEA0;
      while ( strncmp(v70, v64, v69) || v70[v69] )
      {
        v71 += 3;
        v70 = *v71;
        if ( !*v71 )
          goto LABEL_78;
      }
      v73 = v71[1];
      v74 = *v73;
      v75 = v73 + 1;
      if ( *v73 )
      {
        do
        {
          ++v75;
          *(_BYTE *)(*(_QWORD *)v10 + v74) |= v10[8];
          v10[9] += v74;
          v74 = *(v75 - 1);
        }
        while ( v74 );
      }
      for ( i = v71[2]; *i; i += strlen(i) + 1 )
      {
        v78 = *((_QWORD *)v10 + 2);
        v79 = strlen(i);
        v80 = *((void **)v10 + 3);
        v81 = v78 + v79 + 1;
        *((_QWORD *)v10 + 2) = v81;
        v82 = (char *)realloc(v80, v81);
        if ( v82 )
        {
          v77 = *((_QWORD *)v10 + 2);
          *((_QWORD *)v10 + 3) = v82;
          sub_2287340(&v82[v78 - 1], i, v77 + 1 - v78);
        }
        else
        {
          v83 = *((void **)v10 + 3);
          if ( v83 )
            free(v83);
          v84 = *(_DWORD *)(a1 + 16);
          *((_QWORD *)v10 + 3) = 0;
          if ( !v84 )
            *(_DWORD *)(a1 + 16) = 12;
          v85 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          *(__m128i *)a1 = _mm_unpacklo_epi64(v85, v85);
        }
      }
      v13 = *(_QWORD *)(a1 + 8);
      v23 = *(const char **)a1;
      if ( v13 - *(_QWORD *)a1 <= 0 )
      {
LABEL_97:
        if ( !*(_DWORD *)(a1 + 16) )
        {
          v86 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          *(_DWORD *)(a1 + 16) = 7;
          *(__m128i *)a1 = _mm_unpacklo_epi64(v86, v86);
          goto LABEL_31;
        }
        goto LABEL_111;
      }
      if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 == 1 || *v23 != 58 || v23[1] != 93 )
      {
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 4;
        goto LABEL_31;
      }
LABEL_163:
      v15 = v23 + 2;
      *(_QWORD *)a1 = v15;
    }
    else
    {
      if ( v19 == 61 )
      {
        v20 = (char *)(v15 + 2);
        *(_QWORD *)a1 = v20;
        if ( v13 - (__int64)v20 <= 0 )
        {
          if ( !*(_DWORD *)(a1 + 16) )
            *(_DWORD *)(a1 + 16) = 7;
          v90 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          v20 = byte_2D0ADA8;
          *(__m128i *)a1 = _mm_unpacklo_epi64(v90, v90);
        }
        v21 = *v20;
        if ( v21 == 45 || v21 == 93 )
        {
          if ( !*(_DWORD *)(a1 + 16) )
            *(_DWORD *)(a1 + 16) = 3;
          v87 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
          *(__m128i *)a1 = _mm_unpacklo_epi64(v87, v87);
        }
        v22 = sub_227DF00((const char **)a1, 61);
        *(_BYTE *)(*(_QWORD *)v10 + v22) |= v10[8];
        v10[9] += v22;
        v13 = *(_QWORD *)(a1 + 8);
        v23 = *(const char **)a1;
        if ( v13 - *(_QWORD *)a1 <= 0 )
          goto LABEL_97;
        if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 == 1 || *v23 != 61 || v23[1] != 93 )
        {
          if ( !*(_DWORD *)(a1 + 16) )
            *(_DWORD *)(a1 + 16) = 3;
          goto LABEL_31;
        }
        goto LABEL_163;
      }
LABEL_57:
      LOBYTE(v60) = sub_227E030(a1);
      v61 = *(const char **)a1;
      v62 = v60;
      v63 = (char)v60;
      if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) <= 0
        || *v61 != 45
        || *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 == 1
        || v61[1] == 93 )
      {
        v60 = (char)v60;
        goto LABEL_61;
      }
      v93 = *(_QWORD *)(a1 + 8) - (_QWORD)(v61 + 1);
      *(_QWORD *)a1 = v61 + 1;
      if ( v93 > 0 && (v94 = v61[1], v94 == 45) )
      {
        *(_QWORD *)a1 = v61 + 2;
        v95 = 45;
      }
      else
      {
        v94 = sub_227E030(a1);
        v95 = v94;
      }
      if ( v62 > v94 )
      {
        if ( !*(_DWORD *)(a1 + 16) )
          *(_DWORD *)(a1 + 16) = 11;
        v96 = _mm_loadl_epi64((const __m128i *)&off_2BEC050);
        *(__m128i *)a1 = _mm_unpacklo_epi64(v96, v96);
      }
      if ( v95 >= v63 )
      {
        v60 = v63;
        v63 = v95;
        do
        {
LABEL_61:
          *(_BYTE *)(*(_QWORD *)v10 + (unsigned __int8)v60) |= v10[8];
          v10[9] += v60++;
        }
        while ( v60 != v63 + 1 );
      }
      v13 = *(_QWORD *)(a1 + 8);
      v15 = *(const char **)a1;
    }
  }
  if ( v15[1] != 93 )
  {
LABEL_64:
    if ( !*(_DWORD *)(a1 + 16) )
      *(_DWORD *)(a1 + 16) = 11;
    goto LABEL_31;
  }
  *(_QWORD *)a1 = v15 + 1;
  *(_BYTE *)(*(_QWORD *)v10 + 45LL) |= v10[8];
  v10[9] += 45;
  v15 = *(const char **)a1;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) <= 0 )
    goto LABEL_32;
LABEL_125:
  v97 = *(_DWORD *)(a1 + 16);
  *(_QWORD *)a1 = v15 + 1;
  v98 = *v15 == 93;
  v143[0].m128i_i32[0] = v97;
  if ( !v98 )
    goto LABEL_33;
  v25 = *(_QWORD *)(a1 + 56);
  result = *(int *)(v25 + 16);
  if ( v143[0].m128i_i32[0] )
  {
LABEL_36:
    v28 = *(_QWORD *)(v25 + 24);
    v29 = 0;
    v30 = 32LL * *(int *)(v25 + 20);
    if ( result )
    {
      do
      {
        *(_BYTE *)(*(_QWORD *)v10 + (unsigned __int8)v29) &= ~v10[8];
        v10[9] -= v29++;
      }
      while ( result != v29 );
    }
    goto LABEL_38;
  }
  v99 = *(_DWORD *)(v25 + 40);
  if ( (v99 & 2) == 0 )
    goto LABEL_136;
  v100 = result - 1;
  if ( (int)result - 1 < 0 )
  {
    if ( v143[0].m128i_i32[3] )
      goto LABEL_143;
  }
  else
  {
    v101 = v100;
    do
    {
      v102 = *(_QWORD *)v10;
      v103 = v10[8];
      if ( (v103 & *(_BYTE *)(*(_QWORD *)v10 + (unsigned __int8)v100)) != 0 && ((*__ctype_b_loc())[v101] & 0x400) != 0 )
      {
        v104 = sub_227E110(v100);
        if ( (char)v104 != v100 )
        {
          *(_BYTE *)(v102 + v104) |= v103;
          v10[9] += v104;
        }
      }
      --v100;
      --v101;
    }
    while ( v100 != -1 );
    v25 = *(_QWORD *)(a1 + 56);
    result = *(int *)(v25 + 16);
LABEL_136:
    if ( v143[0].m128i_i32[3] )
    {
      v105 = result - 1;
      if ( v105 >= 0 )
      {
        do
        {
          while ( 1 )
          {
            v106 = (char *)(*(_QWORD *)v10 + (unsigned __int8)v105);
            v107 = v10[8];
            v108 = *v106;
            if ( ((unsigned __int8)*v106 & v107) == 0 )
              break;
            *v106 = v108 & ~v107;
            v10[9] -= v105--;
            if ( v105 == -1 )
              goto LABEL_142;
          }
          *v106 = v108 | v107;
          v10[9] += v105--;
        }
        while ( v105 != -1 );
LABEL_142:
        v25 = *(_QWORD *)(a1 + 56);
        v99 = *(_DWORD *)(v25 + 40);
      }
      else
      {
        v99 = *(_DWORD *)(v25 + 40);
      }
LABEL_143:
      if ( (v99 & 8) != 0 )
      {
        *(_BYTE *)(*(_QWORD *)v10 + 10LL) &= ~v10[8];
        v10[9] -= 10;
        v25 = *(_QWORD *)(a1 + 56);
      }
      result = *(int *)(v25 + 16);
    }
  }
  if ( !result )
    goto LABEL_173;
  v109 = *(_BYTE **)v10;
  v110 = v10[8];
  v111 = 0;
  for ( j = 0; ; ++j )
  {
    v111 -= ((v110 & v109[(unsigned __int8)j]) == 0) - 1;
    if ( result == j + 1 )
      break;
  }
  if ( v111 == 1 )
  {
    if ( (v110 & *v109) == 0 )
    {
      v113 = 0;
      while ( 1 )
      {
        v114 = v113 + 1;
        if ( v113 == j )
          break;
        ++v113;
        if ( (v110 & v109[v114]) != 0 )
        {
          v143[0].m128i_i32[0] = (char)v113;
          break;
        }
      }
    }
    sub_227FC30(a1, v143[0].m128i_u32[0]);
    v115 = *(_QWORD *)(a1 + 56);
    v116 = *(int *)(v115 + 20);
    v117 = *(int *)(v115 + 16);
    v28 = *(_QWORD *)(v115 + 24);
    v118 = 0;
    v30 = 32 * v116;
    if ( v117 )
    {
      do
      {
        *(_BYTE *)(*(_QWORD *)v10 + (unsigned __int8)v118) &= ~v10[8];
        v10[9] -= v118++;
      }
      while ( v117 != v118 );
    }
LABEL_38:
    result = v28 + v30 - 32;
    if ( v10 == (char *)result )
    {
      result = *(_QWORD *)(a1 + 56);
      --*(_DWORD *)(result + 20);
    }
  }
  else
  {
LABEL_173:
    v125 = *(_QWORD *)(v25 + 24);
    v126 = v10[9];
    v127 = 32LL * *(int *)(v25 + 20);
    v128 = v125 + v127;
    v143[0].m128i_i64[0] = v127;
    if ( v125 < v125 + v127 )
    {
      v129 = (char *)v125;
      while ( 1 )
      {
        if ( v129[9] == v126 && v10 != v129 )
        {
          if ( !result )
          {
            if ( v128 <= (unsigned __int64)v129 )
              goto LABEL_191;
            result = v125;
            goto LABEL_188;
          }
          v130 = *(_QWORD *)v10;
          v131 = v10[8];
          v132 = v129[8];
          if ( ((v131 & **(_BYTE **)v10) != 0) == ((v132 & **(_BYTE **)v129) != 0) )
            break;
        }
LABEL_175:
        v129 += 32;
        if ( v128 <= (unsigned __int64)v129 )
          goto LABEL_191;
      }
      v133 = 0;
      while ( result != ++v133 )
      {
        if ( ((v132 & *(_BYTE *)(*(_QWORD *)v129 + (unsigned __int8)v133)) != 0) != ((v131
                                                                                    & *(_BYTE *)(v130
                                                                                               + (unsigned __int8)v133)) != 0) )
          goto LABEL_175;
      }
      if ( v128 > (unsigned __int64)v129 )
      {
        v134 = 0;
        while ( 1 )
        {
          *(_BYTE *)(v130 + (unsigned __int8)v134) &= ~v131;
          v10[9] -= v134++;
          if ( result == v134 )
            break;
          v130 = *(_QWORD *)v10;
          v131 = v10[8];
        }
        v25 = *(_QWORD *)(a1 + 56);
        result = *(_QWORD *)(v25 + 24);
LABEL_188:
        if ( v10 == (char *)(v125 + v143[0].m128i_i64[0] - 32) )
          --*(_DWORD *)(v25 + 20);
        v125 = result;
        v10 = v129;
      }
    }
LABEL_191:
    if ( !*(_DWORD *)(a1 + 16) )
      return (__int64)sub_227E170((__m128i *)a1, 805306368, (int)((__int64)&v10[-v125] >> 5));
  }
  return result;
}
