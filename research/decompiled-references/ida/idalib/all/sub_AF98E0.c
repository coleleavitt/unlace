// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall sub_AF98E0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __m128i *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r12
  __m128i *v27; // rcx
  __m128i v28; // xmm0
  __m128i *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rsi
  int v32; // r11d
  __int32 v33; // r8d
  __int64 v34; // r9
  int v35; // r11d
  int v36; // r14d
  __int32 *v37; // r13
  int j; // edx
  __int32 *v39; // rdi
  __int64 v40; // r15
  int v41; // edx
  __int64 v42; // r8
  bool v43; // zf
  __int64 v44; // rdx
  __m128i si128; // xmm0
  __m128i *i; // rdx
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  __m128i *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // r12
  __m128i *v52; // rcx
  __m128i v53; // xmm0
  __m128i *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rsi
  int v57; // r11d
  __int32 v58; // r8d
  __int64 v59; // r9
  int v60; // r11d
  int v61; // r14d
  __int32 *v62; // r13
  int k; // edx
  __int32 *v64; // rdi
  __int64 v65; // r15
  int v66; // edx
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rdx
  __m128i v70; // xmm0
  __m128i *m; // rdx
  __m128i v72; // [rsp+8h] [rbp-70h] BYREF
  __int64 v73; // [rsp+18h] [rbp-60h] BYREF
  int v74; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v75; // [rsp+28h] [rbp-50h]
  unsigned __int64 v76; // [rsp+30h] [rbp-48h]

  do
  {
    v4 = *(unsigned __int64 **)(a1 + 40);
    if ( v4 == *(unsigned __int64 **)(a1 + 72) )
      return 0;
    v5 = *v4;
    v6 = v4[1];
    if ( v4 == (unsigned __int64 *)(*(_QWORD *)(a1 + 56) - 16LL) )
    {
      operator delete(*(void **)(a1 + 48));
      v19 = *(_QWORD *)(a1 + 64);
      v72.m128i_i64[0] = *(_QWORD *)(v19 + 8);
      v20 = _mm_loadl_epi64(&v72);
      *(__m128i *)(a1 + 40) = _mm_unpacklo_epi64(v20, v20);
      v72.m128i_i64[0] = v19 + 8;
      *(__m128 *)(a1 + 56) = _mm_loadh_ps((const double *)v72.m128i_i64);
    }
    else
    {
      *(_QWORD *)(a1 + 40) = v4 + 2;
    }
    v7 = sub_B8BF90(v5);
    v8 = sub_B8BF90(v6);
    LOBYTE(v1) = v7 != 0;
  }
  while ( (v7 != 0) == (v8 != 0)
       && (!v7 || (unsigned __int8)sub_AEDD20(a1, v7, v8))
       && sub_AF8E50(a1, v5, v6, v1, v2, v3) );
  v9 = *(_QWORD *)(a1 + 128);
  v10 = *(unsigned __int8 *)(a1 + 144);
  v75 = v6;
  v76 = v5;
  v11 = *(unsigned int *)(v9 + 16);
  v12 = *(_QWORD *)v9;
  v74 = v10;
  if ( !(_DWORD)v11 )
  {
    v73 = 0;
    goto LABEL_19;
  }
  v3 = 1;
  v13 = (unsigned int)(v11 - 1);
  v14 = 0;
  v15 = v13
      & (((0xBF58476D1CE4E5B9LL
         * ((unsigned int)((0xBF58476D1CE4E5B9LL
                          * ((unsigned int)(1512728442 * v10)
                           | ((unsigned __int64)(((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)) << 32))) >> 31)
          ^ (-1747130070 * v10)
          | ((unsigned __int64)(((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4)) << 32))) >> 31)
       ^ (484763065
        * (((0xBF58476D1CE4E5B9LL
           * ((unsigned int)(1512728442 * v10)
            | ((unsigned __int64)(((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)) << 32))) >> 31)
         ^ (-1747130070 * v10))));
  while ( 2 )
  {
    v16 = v12 + 24LL * v15;
    v17 = *(_QWORD *)(v16 + 16);
    if ( v5 == v17 && v6 == *(_QWORD *)(v16 + 8) && v10 == *(_DWORD *)v16 )
      return 1;
    if ( v17 != -4096 )
    {
      if ( v17 == -8192 && *(_QWORD *)(v16 + 8) == -8192 && *(_DWORD *)v16 == 0x80000000 && !v14 )
        v14 = v12 + 24LL * v15;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v16 + 8) != -4096 || *(_DWORD *)v16 != 0x7FFFFFFF )
    {
LABEL_15:
      v18 = v3 + v15;
      v3 = (unsigned int)(v3 + 1);
      v15 = v13 & v18;
      continue;
    }
    break;
  }
  if ( !v14 )
    v14 = v12 + 24LL * v15;
  v1 = (unsigned int)(*(_DWORD *)(v9 + 8) + 1);
  v73 = v14;
  v2 = (unsigned int)(4 * v1);
  if ( (unsigned int)v2 >= 3 * (int)v11 )
  {
LABEL_19:
    v22 = (((((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v11 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v11 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v11 - 1) | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v11 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v11 - 1) >> 1);
    v23 = ((v22 >> 16) | v22) + 1;
    if ( (unsigned int)v23 < 0x40 )
      LODWORD(v23) = 64;
    *(_DWORD *)(v9 + 16) = v23;
    v24 = (__m128i *)sub_22300B0(24LL * (unsigned int)v23, 8, 64, v1, v2, v3);
    *(_QWORD *)v9 = v24;
    if ( !v12 )
    {
      v44 = *(unsigned int *)(v9 + 16);
      *(_QWORD *)(v9 + 8) = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      for ( i = (__m128i *)((char *)v24 + 24 * v44); i != v24; v24[-1] = si128 )
      {
        v24->m128i_i32[0] = 0x7FFFFFFF;
        v24 = (__m128i *)((char *)v24 + 24);
      }
      goto LABEL_49;
    }
    *(_QWORD *)(v9 + 8) = 0;
    v25 = *(unsigned int *)(v9 + 16);
    v72.m128i_i64[0] = 24 * v11;
    v26 = v12 + 24 * v11;
    v27 = (__m128i *)((char *)v24 + 24 * v25);
    if ( v24 != v27 )
    {
      v28 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      v29 = v24;
      do
      {
        v29->m128i_i32[0] = 0x7FFFFFFF;
        v29 = (__m128i *)((char *)v29 + 24);
        v29[-1] = v28;
      }
      while ( v27 != v29 );
    }
    v30 = v12;
    if ( v12 == v26 )
    {
LABEL_56:
      operator delete(v12, v72.m128i_i64[0], 8);
      goto LABEL_49;
    }
    while ( 1 )
    {
      v31 = *(_QWORD *)(v30 + 16);
      if ( v31 == -4096 )
      {
        if ( *(_QWORD *)(v30 + 8) != -4096 || *(_DWORD *)v30 != 0x7FFFFFFF )
        {
LABEL_28:
          v32 = *(_DWORD *)(v9 + 16);
          if ( !v32 )
          {
            *(_QWORD *)&word_10 = *(_QWORD *)(v30 + 16);
            BUG();
          }
          v33 = *(_DWORD *)v30;
          v34 = *(_QWORD *)(v30 + 8);
          v35 = v32 - 1;
          v36 = 1;
          v37 = nullptr;
          for ( j = v35
                  & (((0xBF58476D1CE4E5B9LL
                     * (((unsigned __int64)(((unsigned int)v31 >> 9) ^ ((unsigned int)v31 >> 4)) << 32)
                      | (unsigned int)((0xBF58476D1CE4E5B9LL
                                      * ((unsigned int)(1512728442 * v33)
                                       | ((unsigned __int64)(((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4)) << 32))) >> 31)
                      ^ (-1747130070 * v33))) >> 31)
                   ^ (484763065
                    * (((0xBF58476D1CE4E5B9LL
                       * ((unsigned int)(1512728442 * v33)
                        | ((unsigned __int64)(((unsigned int)v34 >> 9) ^ ((unsigned int)v34 >> 4)) << 32))) >> 31)
                     ^ (-1747130070 * v33)))); ; j = v35 & v41 )
          {
            v39 = &v24->m128i_i32[6 * j];
            v40 = *((_QWORD *)v39 + 2);
            if ( v31 == v40 && v34 == *((_QWORD *)v39 + 1) && v33 == *v39 )
              break;
            if ( v40 == -4096 )
            {
              if ( *((_QWORD *)v39 + 1) == -4096 && *v39 == 0x7FFFFFFF )
              {
                if ( v37 )
                  v39 = v37;
                break;
              }
            }
            else if ( v40 == -8192 && *((_QWORD *)v39 + 1) == -8192 && *v39 == 0x80000000 && !v37 )
            {
              v37 = &v24->m128i_i32[6 * j];
            }
            v41 = v36 + j;
            ++v36;
          }
          *((_QWORD *)v39 + 2) = v31;
          v67 = *(_QWORD *)(v30 + 8);
          *v39 = v33;
          *((_QWORD *)v39 + 1) = v67;
          ++*(_DWORD *)(v9 + 8);
        }
      }
      else if ( v31 != -8192 || *(_QWORD *)(v30 + 8) != -8192 || *(_DWORD *)v30 != 0x80000000 )
      {
        goto LABEL_28;
      }
      v30 += 24;
      if ( v26 == v30 )
        goto LABEL_56;
    }
  }
  v42 = (unsigned int)v11 >> 3;
  if ( (int)v11 - *(_DWORD *)(v9 + 12) - (int)v1 > (unsigned int)v42 )
    goto LABEL_44;
  v47 = (v13 >> 1) | v13;
  v48 = (((((((v47 | (v47 >> 2)) >> 4) | v47 | (v47 >> 2)) >> 8) | ((v47 | (v47 >> 2)) >> 4) | v47 | (v47 >> 2)) >> 16)
       | ((((v47 | (v47 >> 2)) >> 4) | v47 | (v47 >> 2)) >> 8)
       | ((v47 | (v47 >> 2)) >> 4)
       | v47
       | (v47 >> 2))
      + 1;
  if ( (unsigned int)v48 < 0x40 )
    LODWORD(v48) = 64;
  *(_DWORD *)(v9 + 16) = v48;
  v49 = (__m128i *)sub_22300B0(24LL * (unsigned int)v48, 8, 64, v1, v42, v3);
  *(_QWORD *)v9 = v49;
  if ( v12 )
  {
    *(_QWORD *)(v9 + 8) = 0;
    v50 = *(unsigned int *)(v9 + 16);
    v72.m128i_i64[0] = 24 * v11;
    v51 = v12 + 24 * v11;
    v52 = (__m128i *)((char *)v49 + 24 * v50);
    if ( v49 != v52 )
    {
      v53 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
      v54 = v49;
      do
      {
        v54->m128i_i32[0] = 0x7FFFFFFF;
        v54 = (__m128i *)((char *)v54 + 24);
        v54[-1] = v53;
      }
      while ( v52 != v54 );
    }
    v55 = v12;
    while ( 1 )
    {
      v56 = *(_QWORD *)(v55 + 16);
      if ( v56 == -4096 )
      {
        if ( *(_QWORD *)(v55 + 8) != -4096 || *(_DWORD *)v55 != 0x7FFFFFFF )
        {
LABEL_69:
          v57 = *(_DWORD *)(v9 + 16);
          if ( !v57 )
          {
            *(_QWORD *)&word_10 = *(_QWORD *)(v55 + 16);
            BUG();
          }
          v58 = *(_DWORD *)v55;
          v59 = *(_QWORD *)(v55 + 8);
          v60 = v57 - 1;
          v61 = 1;
          v62 = nullptr;
          for ( k = v60
                  & (((0xBF58476D1CE4E5B9LL
                     * (((unsigned __int64)(((unsigned int)v56 >> 9) ^ ((unsigned int)v56 >> 4)) << 32)
                      | (unsigned int)((0xBF58476D1CE4E5B9LL
                                      * ((unsigned int)(1512728442 * v58)
                                       | ((unsigned __int64)(((unsigned int)v59 >> 9) ^ ((unsigned int)v59 >> 4)) << 32))) >> 31)
                      ^ (-1747130070 * v58))) >> 31)
                   ^ (484763065
                    * (((0xBF58476D1CE4E5B9LL
                       * ((unsigned int)(1512728442 * v58)
                        | ((unsigned __int64)(((unsigned int)v59 >> 9) ^ ((unsigned int)v59 >> 4)) << 32))) >> 31)
                     ^ (-1747130070 * v58)))); ; k = v60 & v66 )
          {
            v64 = &v49->m128i_i32[6 * k];
            v65 = *((_QWORD *)v64 + 2);
            if ( v56 == v65 && v59 == *((_QWORD *)v64 + 1) && v58 == *v64 )
              break;
            if ( v65 == -4096 )
            {
              if ( *((_QWORD *)v64 + 1) == -4096 && *v64 == 0x7FFFFFFF )
              {
                if ( v62 )
                  v64 = v62;
                break;
              }
            }
            else if ( v65 == -8192 && *((_QWORD *)v64 + 1) == -8192 && *v64 == 0x80000000 && !v62 )
            {
              v62 = &v49->m128i_i32[6 * k];
            }
            v66 = v61 + k;
            ++v61;
          }
          *((_QWORD *)v64 + 2) = v56;
          v68 = *(_QWORD *)(v55 + 8);
          *v64 = v58;
          *((_QWORD *)v64 + 1) = v68;
          ++*(_DWORD *)(v9 + 8);
        }
      }
      else if ( v56 != -8192 || *(_QWORD *)(v55 + 8) != -8192 || *(_DWORD *)v55 != 0x80000000 )
      {
        goto LABEL_69;
      }
      v55 += 24;
      if ( v51 == v55 )
        goto LABEL_56;
    }
  }
  v69 = *(unsigned int *)(v9 + 16);
  *(_QWORD *)(v9 + 8) = 0;
  v70 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
  for ( m = (__m128i *)((char *)v49 + 24 * v69); m != v49; v49[-1] = v70 )
  {
    v49->m128i_i32[0] = 0x7FFFFFFF;
    v49 = (__m128i *)((char *)v49 + 24);
  }
LABEL_49:
  sub_AEDB60((__int64 *)v9, &v74, &v73);
  v5 = v76;
  v10 = v74;
  LODWORD(v1) = *(_DWORD *)(v9 + 8) + 1;
  v14 = v73;
LABEL_44:
  v43 = *(_QWORD *)(v14 + 16) == -4096;
  *(_DWORD *)(v9 + 8) = v1;
  if ( !v43 || *(_QWORD *)(v14 + 8) != -4096 || *(_DWORD *)v14 != 0x7FFFFFFF )
    --*(_DWORD *)(v9 + 12);
  v72.m128i_i64[0] = v5;
  *(_DWORD *)v14 = v10;
  *(__m128 *)(v14 + 8) = _mm_loadh_ps((const double *)v72.m128i_i64);
  return 1;
}
