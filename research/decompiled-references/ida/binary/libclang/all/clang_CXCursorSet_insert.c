// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall clang_CXCursorSet_insert(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  int v8; // ebx
  unsigned int v10; // r9d
  __int64 v11; // r13
  int v12; // eax
  __int64 v13; // r15
  const __m128i *v14; // r12
  int v15; // esi
  unsigned __int64 v16; // r10
  __int64 v17; // rdi
  unsigned int i; // eax
  unsigned int v19; // eax
  __int8 *v20; // rdx
  int v21; // ecx
  __m128i *v22; // rdi
  _BOOL8 result; // rax
  __int64 v24; // r14
  int v25; // edx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned int v32; // esi
  __int64 v33; // rdx
  __int64 v34; // rax
  __m128i v35; // xmm0
  __int64 v36; // r10
  __int64 v37; // r11
  const __m128i *v38; // r10
  const __m128i *v39; // r15
  __int32 v40; // r9d
  int v41; // r8d
  __int64 v42; // rbx
  __int64 v43; // r14
  int v44; // r8d
  __int64 v45; // r12
  __int64 v46; // r11
  int v47; // edi
  unsigned int m; // eax
  unsigned int v49; // eax
  __int64 v50; // rcx
  int v51; // edx
  __int64 v52; // r10
  unsigned int v53; // r9d
  int v54; // r8d
  unsigned int n; // eax
  unsigned int v56; // eax
  int v57; // esi
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdx
  int v61; // r8d
  int v62; // ecx
  __int64 v63; // rdi
  __int64 v64; // rdx
  __m128i v65; // xmm0
  __int64 v66; // r10
  __int64 v67; // r11
  const __m128i *v68; // rdx
  const __m128i *v69; // r15
  __int32 v70; // r11d
  int v71; // r10d
  __int64 v72; // r12
  __int64 v73; // r14
  int v74; // r10d
  __int64 v75; // r13
  int v76; // r9d
  unsigned int j; // eax
  unsigned int v78; // eax
  __int64 v79; // rdi
  int v80; // ecx
  int v81; // r9d
  int v82; // esi
  unsigned int k; // r8d
  unsigned int v84; // r8d
  int v85; // ecx
  __m128i v86; // xmm0
  __int64 v87; // r10
  __int64 v88; // rdx
  __int64 v89; // r11
  __m128i si128; // xmm0
  __int64 v91; // r10
  __int64 v92; // rsi
  __int64 v93; // r11
  unsigned int v94; // [rsp+8h] [rbp-80h]
  int v95; // [rsp+8h] [rbp-80h]
  unsigned int v96; // [rsp+8h] [rbp-80h]
  int v97; // [rsp+10h] [rbp-78h]
  __int64 v98; // [rsp+18h] [rbp-70h]
  __int64 v99; // [rsp+20h] [rbp-68h]
  __int64 v100; // [rsp+28h] [rbp-60h]
  int v101; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v102[5]; // [rsp+34h] [rbp-54h] BYREF
  __int64 v103; // [rsp+48h] [rbp-40h]

  v8 = a7;
  if ( (unsigned int)(a7 - 70) <= 3 || !a1 )
    return 1;
  v10 = *(_DWORD *)(a1 + 16);
  v11 = *((_QWORD *)&a7 + 1);
  v12 = 0;
  v13 = a8;
  v14 = *(const __m128i **)a1;
  if ( v10 )
  {
    v15 = 1;
    v16 = v10 - 1;
    v17 = 0;
    for ( i = (((0xBF58476D1CE4E5B9LL
               * (((unsigned int)a8 >> 9) ^ ((unsigned int)a8 >> 4)
                | ((unsigned __int64)((DWORD2(a7) >> 9) ^ (DWORD2(a7) >> 4)) << 32))) >> 31)
             ^ (484763065 * (((unsigned int)a8 >> 9) ^ ((unsigned int)a8 >> 4))))
            & (v10 - 1); ; i = v16 & v19 )
    {
      v20 = &v14->m128i_i8[40 * i];
      v21 = *(_DWORD *)v20;
      if ( (_DWORD)a7 != *(_DWORD *)v20 )
        break;
      if ( *(_OWORD *)(v20 + 8) == __PAIR128__(a8, *((unsigned __int64 *)&a7 + 1)) )
      {
        v22 = (__m128i *)(v20 + 32);
        result = *((_DWORD *)v20 + 8) == 0;
        goto LABEL_12;
      }
LABEL_8:
      v19 = v15 + i;
      ++v15;
    }
    if ( v21 != 70 )
    {
      if ( v21 == 71 && !*((_QWORD *)v20 + 1) && !(*((_QWORD *)v20 + 2) | v17) )
        v17 = (__int64)&v14->m128i_i64[5 * i];
      goto LABEL_8;
    }
    if ( *((_QWORD *)v20 + 1) )
      goto LABEL_8;
    v24 = *((_QWORD *)v20 + 2);
    if ( v24 )
      goto LABEL_8;
    if ( !v17 )
      v17 = (__int64)&v14->m128i_i64[5 * i];
    v25 = *(_DWORD *)(a1 + 8) + 1;
    v12 = 2 * v10;
    if ( 4 * v25 < 3 * v10 )
    {
      if ( v10 >> 3 < v10 - *(_DWORD *)(a1 + 12) - v25 )
        goto LABEL_20;
      v97 = ((0xBF58476D1CE4E5B9LL
            * (((unsigned int)a8 >> 9) ^ ((unsigned int)a8 >> 4)
             | ((unsigned __int64)((DWORD2(a7) >> 9) ^ (DWORD2(a7) >> 4)) << 32))) >> 31)
          ^ (484763065 * (((unsigned int)a8 >> 9) ^ ((unsigned int)a8 >> 4)));
      v96 = v10;
      v58 = (((((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 8)
             | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
             | ((v16 | (v16 >> 1)) >> 2)
             | v16
             | (v16 >> 1)) >> 16)
           | ((((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4) | ((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 8)
           | ((((v16 | (v16 >> 1)) >> 2) | v16 | (v16 >> 1)) >> 4)
           | ((v16 | (v16 >> 1)) >> 2)
           | v16
           | (v16 >> 1))
          + 1;
      if ( (unsigned int)v58 < 0x40 )
        LODWORD(v58) = 64;
      *(_DWORD *)(a1 + 16) = v58;
      v59 = sub_25CC9C0(40LL * (unsigned int)v58, 8);
      v60 = *(unsigned int *)(a1 + 16);
      *(_QWORD *)a1 = v59;
      v61 = v97;
      v62 = v60;
      v63 = 40 * v60;
      v64 = v59 + 40 * v60;
      if ( !v14 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        v101 = 70;
        v103 = 0;
        memset(v102, 0, sizeof(v102));
        if ( v59 != v64 )
        {
          si128 = _mm_load_si128((const __m128i *)&v101);
          v91 = *(_QWORD *)&v102[3];
          v92 = v59;
          v93 = v103;
          do
          {
            *(_QWORD *)(v92 + 16) = v91;
            v92 += 40;
            *(__m128i *)(v92 - 40) = si128;
            *(_QWORD *)(v92 - 16) = v93;
          }
          while ( v92 != v64 );
        }
        v25 = 1;
        goto LABEL_103;
      }
      *(_QWORD *)(a1 + 8) = 0;
      memset(v102, 0, sizeof(v102));
      v101 = 70;
      v103 = 0;
      if ( v63 )
      {
        v65 = _mm_load_si128((const __m128i *)&v101);
        v66 = *(_QWORD *)&v102[3];
        v67 = v103;
        do
        {
          *(_QWORD *)(v59 + 16) = v66;
          v59 += 40;
          *(__m128i *)(v59 - 40) = v65;
          *(_QWORD *)(v59 - 16) = v67;
        }
        while ( v59 != v64 );
      }
      v68 = v14;
      v100 = v11;
      v99 = v13;
      v69 = (const __m128i *)((char *)v14 + 40 * v96);
      while ( 1 )
      {
        v70 = v68->m128i_i32[0];
        if ( (v68->m128i_i32[0] == 70 || v70 == 71) && !v68->m128i_i64[1] && !v68[1].m128i_i64[0] )
          goto LABEL_101;
        v71 = *(_DWORD *)(a1 + 16);
        if ( !v71 )
        {
          *(__m128i *)&dword_0 = _mm_loadu_si128(v68);
          *(__m128i *)&word_10 = _mm_loadu_si128(v68 + 1);
          BUG();
        }
        v72 = v68->m128i_i64[1];
        v73 = v68[1].m128i_i64[0];
        v74 = v71 - 1;
        v75 = 0;
        v76 = 1;
        for ( j = v74
                & (((0xBF58476D1CE4E5B9LL
                   * (((unsigned int)v73 >> 9) ^ ((unsigned int)v73 >> 4)
                    | ((unsigned __int64)(((unsigned int)v72 >> 9) ^ ((unsigned int)v72 >> 4)) << 32))) >> 31)
                 ^ (484763065 * (((unsigned int)v73 >> 9) ^ ((unsigned int)v73 >> 4)))); ; j = v74 & v78 )
        {
          v79 = *(_QWORD *)a1 + 40LL * j;
          v80 = *(_DWORD *)v79;
          if ( v70 == *(_DWORD *)v79 && v72 == *(_QWORD *)(v79 + 8) && v73 == *(_QWORD *)(v79 + 16) )
            goto LABEL_100;
          if ( v80 == 70 )
            break;
          if ( v80 == 71 && !*(_QWORD *)(v79 + 8) && !(*(_QWORD *)(v79 + 16) | v75) )
            v75 = *(_QWORD *)a1 + 40LL * j;
LABEL_96:
          v78 = v76 + j;
          ++v76;
        }
        if ( *(_QWORD *)(v79 + 8) || *(_QWORD *)(v79 + 16) )
          goto LABEL_96;
        if ( v75 )
          v79 = v75;
LABEL_100:
        *(__m128i *)v79 = _mm_loadu_si128(v68);
        *(__m128i *)(v79 + 16) = _mm_loadu_si128(v68 + 1);
        *(_DWORD *)(v79 + 32) = v68[2].m128i_i32[0];
        ++*(_DWORD *)(a1 + 8);
LABEL_101:
        v68 = (const __m128i *)((char *)v68 + 40);
        if ( v69 == v68 )
        {
          v24 = 0;
          v13 = v99;
          v11 = v100;
          operator delete();
          v59 = *(_QWORD *)a1;
          v62 = *(_DWORD *)(a1 + 16);
          v61 = v97;
          v25 = *(_DWORD *)(a1 + 8) + 1;
LABEL_103:
          if ( v62 )
          {
            v81 = v62 - 1;
            v82 = 1;
            for ( k = (v62 - 1) & v61; ; k = v81 & v84 )
            {
              v17 = v59 + 40LL * k;
              v85 = *(_DWORD *)v17;
              if ( v8 == *(_DWORD *)v17 )
              {
                if ( *(_QWORD *)(v17 + 8) == v11 && *(_QWORD *)(v17 + 16) == v13 )
                  goto LABEL_20;
              }
              else if ( v85 == 70 )
              {
                if ( !*(_QWORD *)(v17 + 8) && !*(_QWORD *)(v17 + 16) )
                {
                  if ( v24 )
                    v17 = v24;
                  goto LABEL_20;
                }
              }
              else if ( v85 == 71 && !*(_QWORD *)(v17 + 8) && !(*(_QWORD *)(v17 + 16) | v24) )
              {
                v24 = v59 + 40LL * k;
              }
              v84 = v82 + k;
              ++v82;
            }
          }
LABEL_140:
          *(_DWORD *)(a1 + 8) = v25;
          BUG();
        }
      }
    }
  }
  v94 = v10;
  v26 = (unsigned int)(v12 - 1) | ((unsigned __int64)(unsigned int)(v12 - 1) >> 1);
  v27 = (((v26 >> 2) | v26) >> 4) | (v26 >> 2) | v26;
  v28 = ((((v27 >> 8) | v27) >> 16) | (v27 >> 8) | v27) + 1;
  if ( (unsigned int)v28 < 0x40 )
    LODWORD(v28) = 64;
  *(_DWORD *)(a1 + 16) = v28;
  v29 = sub_25CC9C0(40LL * (unsigned int)v28, 8);
  v30 = v94;
  v31 = v29;
  *(_QWORD *)a1 = v29;
  v32 = *(_DWORD *)(a1 + 16);
  v33 = 40LL * v32;
  v34 = v29 + v33;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    memset(v102, 0, sizeof(v102));
    v101 = 70;
    v103 = 0;
    if ( v33 )
    {
      v35 = _mm_load_si128((const __m128i *)&v101);
      v36 = *(_QWORD *)&v102[3];
      v37 = v103;
      do
      {
        *(_QWORD *)(v31 + 16) = v36;
        v31 += 40;
        *(__m128i *)(v31 - 40) = v35;
        *(_QWORD *)(v31 - 16) = v37;
      }
      while ( v31 != v34 );
    }
    v38 = v14;
    if ( v14 != (const __m128i *)((char *)v14 + 40 * v94) )
    {
      v95 = v8;
      v98 = v13;
      v39 = (const __m128i *)((char *)v14 + 40 * v30);
      do
      {
        v40 = v38->m128i_i32[0];
        if ( v38->m128i_i32[0] != 70 && v40 != 71 || v38->m128i_i64[1] || v38[1].m128i_i64[0] )
        {
          v41 = *(_DWORD *)(a1 + 16);
          if ( !v41 )
          {
            *(__m128i *)&dword_0 = _mm_loadu_si128(v38);
            *(__m128i *)&word_10 = _mm_loadu_si128(v38 + 1);
            BUG();
          }
          v42 = v38->m128i_i64[1];
          v43 = v38[1].m128i_i64[0];
          v44 = v41 - 1;
          v45 = 0;
          v46 = *(_QWORD *)a1;
          v47 = 1;
          for ( m = v44
                  & (((0xBF58476D1CE4E5B9LL
                     * (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4)
                      | ((unsigned __int64)(((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4)) << 32))) >> 31)
                   ^ (484763065 * (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4)))); ; m = v44 & v49 )
          {
            v50 = v46 + 40LL * m;
            v51 = *(_DWORD *)v50;
            if ( v40 == *(_DWORD *)v50 && v42 == *(_QWORD *)(v50 + 8) && v43 == *(_QWORD *)(v50 + 16) )
              break;
            if ( v51 == 70 )
            {
              if ( !*(_QWORD *)(v50 + 8) && !*(_QWORD *)(v50 + 16) )
              {
                if ( v45 )
                  v50 = v45;
                break;
              }
            }
            else if ( v51 == 71 && !*(_QWORD *)(v50 + 8) && !(*(_QWORD *)(v50 + 16) | v45) )
            {
              v45 = v46 + 40LL * m;
            }
            v49 = v47 + m;
            ++v47;
          }
          *(__m128i *)v50 = _mm_loadu_si128(v38);
          *(__m128i *)(v50 + 16) = _mm_loadu_si128(v38 + 1);
          *(_DWORD *)(v50 + 32) = v38[2].m128i_i32[0];
          ++*(_DWORD *)(a1 + 8);
        }
        v38 = (const __m128i *)((char *)v38 + 40);
      }
      while ( v39 != v38 );
      v8 = v95;
      v13 = v98;
    }
    operator delete();
    v31 = *(_QWORD *)a1;
    v32 = *(_DWORD *)(a1 + 16);
    v25 = *(_DWORD *)(a1 + 8) + 1;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
    v101 = 70;
    v103 = 0;
    memset(v102, 0, sizeof(v102));
    if ( v31 != v34 )
    {
      v86 = _mm_load_si128((const __m128i *)&v101);
      v87 = *(_QWORD *)&v102[3];
      v88 = v31;
      v89 = v103;
      do
      {
        *(_QWORD *)(v88 + 16) = v87;
        v88 += 40;
        *(__m128i *)(v88 - 40) = v86;
        *(_QWORD *)(v88 - 16) = v89;
      }
      while ( v88 != v34 );
    }
    v25 = 1;
  }
  if ( !v32 )
    goto LABEL_140;
  v52 = 0;
  v53 = v32 - 1;
  v54 = 1;
  for ( n = (v32 - 1)
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4)
              | ((unsigned __int64)(((unsigned int)v11 >> 9) ^ ((unsigned int)v11 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4)))); ; n = v53 & v56 )
  {
    v17 = v31 + 40LL * n;
    v57 = *(_DWORD *)v17;
    if ( v8 != *(_DWORD *)v17 )
      break;
    if ( *(_QWORD *)(v17 + 8) == v11 && *(_QWORD *)(v17 + 16) == v13 )
      goto LABEL_20;
LABEL_58:
    v56 = v54 + n;
    ++v54;
  }
  if ( v57 != 70 )
  {
    if ( v57 == 71 && !*(_QWORD *)(v17 + 8) && !(*(_QWORD *)(v17 + 16) | v52) )
      v52 = v31 + 40LL * n;
    goto LABEL_58;
  }
  if ( *(_QWORD *)(v17 + 8) || *(_QWORD *)(v17 + 16) )
    goto LABEL_58;
  if ( v52 )
    v17 = v52;
LABEL_20:
  *(_DWORD *)(a1 + 8) = v25;
  if ( *(_DWORD *)v17 != 70 || *(_QWORD *)(v17 + 8) || *(_QWORD *)(v17 + 16) )
    --*(_DWORD *)(a1 + 12);
  *(_DWORD *)(v17 + 32) = 0;
  result = 1;
  v22 = (__m128i *)(v17 + 32);
  v22[-2] = _mm_loadu_si128((const __m128i *)&a7);
  v22[-1] = _mm_loadu_si128((const __m128i *)&a8);
LABEL_12:
  v22->m128i_i32[0] = 1;
  return result;
}

