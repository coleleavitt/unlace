__int64 __fastcall sub_AC9FE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 *v8; // r9
  __int64 *v9; // rdx
  __int64 v10; // r8
  int v11; // esi
  __int64 v12; // rdi
  __m128i v13; // xmm0
  int v14; // r10d
  unsigned int i; // edx
  unsigned int v16; // edx
  __int64 v17; // r14
  __int64 *v18; // rbp
  __int64 *v19; // rsi
  unsigned int j; // edx
  __int64 v21; // rdi
  int v22; // edx
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // rax
  int v28; // r10d
  __int64 v29; // rax
  __int64 *v30; // r9
  __m128i si128; // xmm0
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  __int64 *v35; // rsi
  int v36; // r13d
  __int64 v37; // rcx
  __int64 v38; // rdx
  int v39; // r14d
  __int64 *v40; // r11
  unsigned int k; // eax
  __int64 *v42; // rdi
  __int64 v43; // r15
  unsigned int v44; // eax
  int v45; // eax
  int v46; // edx
  bool v47; // zf
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // r10d
  __int64 *v52; // r9
  unsigned int m; // ecx
  __int64 v54; // r11
  unsigned int v55; // ecx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r9d
  __int64 v62; // rax
  __int64 *v63; // r11
  __m128i v64; // xmm0
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  __int64 *v68; // rcx
  int v69; // r13d
  __int64 v70; // rsi
  __int64 v71; // rdx
  int v72; // r14d
  __int64 *v73; // r10
  unsigned int n; // eax
  __int64 *v75; // rdi
  __int64 v76; // r15
  unsigned int v77; // eax
  int v78; // r10d
  unsigned int ii; // ecx
  __int64 v80; // r11
  unsigned int v81; // ecx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __m128i v85; // xmm0
  unsigned __int64 v86; // rdx
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  __m128i v92; // xmm0
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  __int64 v96; // [rsp+8h] [rbp-60h] BYREF
  __m128i v97; // [rsp+10h] [rbp-58h] BYREF
  __m128 v98[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 32LL))(a3);
  v96 = v5;
  v9 = *(__int64 **)(a1 + 128);
  v96 = v6;
  v10 = *((unsigned int *)v9 + 4);
  v11 = *(unsigned __int8 *)(a1 + 144);
  v12 = *v9;
  v13 = (__m128i)_mm_loadh_ps((const double *)&v96);
  v97 = v13;
  if ( (_DWORD)v10 )
  {
    v10 = (unsigned int)(v10 - 1);
    v14 = 1;
    for ( i = v10
            & (((0xBF58476D1CE4E5B9LL
               * ((unsigned int)((0xBF58476D1CE4E5B9LL
                                * ((unsigned int)(1512728442 * v11)
                                 | ((unsigned __int64)(((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)) << 32))) >> 31)
                ^ (-1747130070 * v11)
                | ((unsigned __int64)(((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4)) << 32))) >> 31)
             ^ (484763065
              * (((0xBF58476D1CE4E5B9LL
                 * ((unsigned int)(1512728442 * v11)
                  | ((unsigned __int64)(((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)) << 32))) >> 31)
               ^ (-1747130070 * v11)))); ; i = v10 & v16 )
    {
      v7 = v12 + 24LL * i;
      v8 = *(__int64 **)(v7 + 16);
      if ( (__int64 *)v5 == v8 && v6 == *(_QWORD *)(v7 + 8) && v11 == *(_DWORD *)v7 )
        return 0;
      if ( v8 == (__int64 *)-4096LL && *(_QWORD *)(v7 + 8) == -4096 && *(_DWORD *)v7 == 0x7FFFFFFF )
        break;
      v16 = v14 + i;
      ++v14;
    }
  }
  v17 = *(unsigned int *)(a1 + 120);
  v18 = *(__int64 **)(a1 + 104);
  if ( !(_DWORD)v17 )
    goto LABEL_22;
  v10 = 1;
  v7 = (unsigned int)(v17 - 1);
  v19 = nullptr;
  for ( j = v7
          & (((0xBF58476D1CE4E5B9LL
             * (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)
              | ((unsigned __int64)(((unsigned int)v5 >> 9) ^ ((unsigned int)v5 >> 4)) << 32))) >> 31)
           ^ (484763065 * (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4)))); ; j = v7 & v22 )
  {
    v8 = &v18[2 * j];
    v21 = *v8;
    if ( v5 == *v8 && v6 == v8[1] )
    {
      sub_AC9F60(v98, &v18[2 * j], &v18[2 * (unsigned int)v17], a1 + 104, 1);
      return 1;
    }
    if ( v21 == -4096 )
      break;
    if ( v21 == -8192 && v8[1] == -8192 && !v19 )
      v19 = &v18[2 * j];
LABEL_16:
    v22 = v10 + j;
    v10 = (unsigned int)(v10 + 1);
  }
  if ( v8[1] != -4096 )
    goto LABEL_16;
  v45 = *(_DWORD *)(a1 + 112);
  if ( !v19 )
    v19 = &v18[2 * j];
  v46 = v45 + 1;
  if ( 4 * (v45 + 1) >= (unsigned int)(3 * v17) )
  {
LABEL_22:
    v24 = (((((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v17 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v17 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 8)
        | (((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v17 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v17 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1);
    v25 = ((v24 >> 16) | v24) + 1;
    if ( (unsigned int)v25 < 0x40 )
      LODWORD(v25) = 64;
    *(_DWORD *)(a1 + 120) = v25;
    v26 = sub_220C370(16LL * (unsigned int)v25, 8, 64, v7, v10, v8);
    *(_QWORD *)(a1 + 104) = v26;
    if ( v18 )
    {
      v27 = *(unsigned int *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = 0;
      v28 = v27;
      v29 = 16 * v27;
      v96 = 16LL * (unsigned int)v17;
      v30 = (__int64 *)((char *)v18 + v96);
      if ( v26 != v26 + v29 )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        v32 = ((unsigned __int64)(v29 - 16) >> 4) + 1;
        v33 = 0;
        do
        {
          v34 = v33++;
          *(__m128i *)(v26 + 16 * v34) = si128;
        }
        while ( v33 < v32 );
      }
      v35 = v18;
      v36 = v28 - 1;
      while ( v30 != v35 )
      {
        v37 = *v35;
        if ( *v35 == -4096 )
        {
          if ( v35[1] != -4096 )
            goto LABEL_31;
        }
        else if ( v37 != -8192 || v35[1] != -8192 )
        {
LABEL_31:
          if ( !v28 )
          {
            *(_QWORD *)&dword_0 = *v35;
            BUG();
          }
          v38 = v35[1];
          v39 = 1;
          v40 = nullptr;
          for ( k = v36
                  & (((0xBF58476D1CE4E5B9LL
                     * (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4)
                      | ((unsigned __int64)(((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4)) << 32))) >> 31)
                   ^ (484763065 * (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4)))); ; k = v36 & v44 )
          {
            v42 = (__int64 *)(v26 + 16LL * k);
            v43 = *v42;
            if ( v37 == *v42 && v38 == v42[1] )
              break;
            if ( v43 == -4096 )
            {
              if ( v42[1] == -4096 )
              {
                if ( v40 )
                  v42 = v40;
                break;
              }
            }
            else if ( v43 == -8192 && v42[1] == -8192 && !v40 )
            {
              v40 = (__int64 *)(v26 + 16LL * k);
            }
            v44 = v39 + k;
            ++v39;
          }
          *v42 = v37;
          v56 = v35[1];
          ++*(_DWORD *)(a1 + 112);
          v42[1] = v56;
        }
        v35 += 2;
      }
      operator delete();
      v26 = *(_QWORD *)(a1 + 104);
      v17 = *(unsigned int *)(a1 + 120);
      v46 = *(_DWORD *)(a1 + 112) + 1;
    }
    else
    {
      v83 = *(unsigned int *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = 0;
      v17 = v83;
      v84 = 16 * v83;
      if ( v26 != v26 + v84 )
      {
        v85 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        v86 = ((unsigned __int64)(v84 - 16) >> 4) + 1;
        v87 = 0;
        do
        {
          v88 = v87++;
          *(__m128i *)(v26 + 16 * v88) = v85;
        }
        while ( v87 < v86 );
      }
      v46 = 1;
    }
    if ( (_DWORD)v17 )
    {
      v50 = v97.m128i_i64[1];
      v51 = 1;
      v52 = nullptr;
      for ( m = (v17 - 1)
              & (((0xBF58476D1CE4E5B9LL
                 * (((unsigned __int32)v97.m128i_i32[2] >> 9) ^ ((unsigned __int32)v97.m128i_i32[2] >> 4)
                  | ((unsigned __int64)(((unsigned __int32)v97.m128i_i32[0] >> 9)
                                      ^ ((unsigned __int32)v97.m128i_i32[0] >> 4)) << 32))) >> 31)
               ^ (484763065 * (((unsigned __int32)v97.m128i_i32[2] >> 9) ^ ((unsigned __int32)v97.m128i_i32[2] >> 4))));
            ;
            m = (v17 - 1) & v55 )
      {
        v19 = (__int64 *)(v26 + 16LL * m);
        v54 = *v19;
        if ( *(_OWORD *)&v97 == *(_OWORD *)v19 )
          break;
        if ( v54 == -4096 )
        {
          if ( v19[1] == -4096 )
          {
LABEL_122:
            v18 = (__int64 *)v26;
            if ( v52 )
              v19 = v52;
            v96 = v50;
            v13 = (__m128i)_mm_loadh_ps((const double *)&v96);
            goto LABEL_45;
          }
        }
        else if ( v54 == -8192 && v19[1] == -8192 && !v52 )
        {
          v52 = (__int64 *)(v26 + 16LL * m);
        }
        v55 = v51 + m;
        ++v51;
      }
      goto LABEL_111;
    }
LABEL_128:
    ++*(_DWORD *)(a1 + 112);
    BUG();
  }
  if ( (int)v17 - *(_DWORD *)(a1 + 116) - v46 <= (unsigned int)v17 >> 3 )
  {
    v57 = (v7 >> 1) | v7 | (((v7 >> 1) | v7) >> 2);
    v58 = v57 >> 4;
    v59 = (((((v58 | v57) >> 8) | v58 | v57) >> 16) | ((v58 | v57) >> 8) | v58 | v57) + 1;
    if ( (unsigned int)v59 < 0x40 )
      LODWORD(v59) = 64;
    *(_DWORD *)(a1 + 120) = v59;
    v26 = sub_220C370(16LL * (unsigned int)v59, 8, 64, v58, v10, v8);
    *(_QWORD *)(a1 + 104) = v26;
    if ( v18 )
    {
      v60 = *(unsigned int *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = 0;
      v61 = v60;
      v62 = 16 * v60;
      v96 = 16LL * (unsigned int)v17;
      v63 = (__int64 *)((char *)v18 + v96);
      if ( v26 != v26 + v62 )
      {
        v64 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
        v65 = ((unsigned __int64)(v62 - 16) >> 4) + 1;
        v66 = 0;
        do
        {
          v67 = v66++;
          *(__m128i *)(v26 + 16 * v67) = v64;
        }
        while ( v66 < v65 );
      }
      v68 = v18;
      v69 = v61 - 1;
      while ( 1 )
      {
        v70 = *v68;
        if ( *v68 == -4096 )
        {
          if ( v68[1] != -4096 )
            goto LABEL_78;
        }
        else if ( v70 != -8192 || v68[1] != -8192 )
        {
LABEL_78:
          if ( !v61 )
          {
            *(_QWORD *)&dword_0 = *v68;
            BUG();
          }
          v71 = v68[1];
          v72 = 1;
          v73 = nullptr;
          for ( n = v69
                  & (((0xBF58476D1CE4E5B9LL
                     * (((unsigned int)v71 >> 9) ^ ((unsigned int)v71 >> 4)
                      | ((unsigned __int64)(((unsigned int)v70 >> 9) ^ ((unsigned int)v70 >> 4)) << 32))) >> 31)
                   ^ (484763065 * (((unsigned int)v71 >> 9) ^ ((unsigned int)v71 >> 4)))); ; n = v69 & v77 )
          {
            v75 = (__int64 *)(v26 + 16LL * n);
            v76 = *v75;
            if ( v70 == *v75 && v71 == v75[1] )
              break;
            if ( v76 == -4096 )
            {
              if ( v75[1] == -4096 )
              {
                if ( v73 )
                  v75 = v73;
                break;
              }
            }
            else if ( v76 == -8192 && v75[1] == -8192 && !v73 )
            {
              v73 = (__int64 *)(v26 + 16LL * n);
            }
            v77 = v72 + n;
            ++v72;
          }
          *v75 = v70;
          v82 = v68[1];
          ++*(_DWORD *)(a1 + 112);
          v75[1] = v82;
        }
        v68 += 2;
        if ( v63 == v68 )
        {
          operator delete();
          v26 = *(_QWORD *)(a1 + 104);
          v17 = *(unsigned int *)(a1 + 120);
          v46 = *(_DWORD *)(a1 + 112) + 1;
          goto LABEL_90;
        }
      }
    }
    v89 = *(unsigned int *)(a1 + 120);
    *(_QWORD *)(a1 + 112) = 0;
    v17 = v89;
    v90 = 16 * v89;
    if ( v26 != v26 + v90 )
    {
      v91 = v90 - 16;
      v92 = _mm_load_si128((const __m128i *)&xmmword_2384C40);
      v93 = 0;
      v94 = (v91 >> 4) + 1;
      do
      {
        v95 = v93++;
        *(__m128i *)(v26 + 16 * v95) = v92;
      }
      while ( v93 < v94 );
    }
    v46 = 1;
LABEL_90:
    if ( (_DWORD)v17 )
    {
      v50 = v97.m128i_i64[1];
      v78 = 1;
      v52 = nullptr;
      for ( ii = (v17 - 1)
               & (((0xBF58476D1CE4E5B9LL
                  * (((unsigned __int32)v97.m128i_i32[2] >> 9) ^ ((unsigned __int32)v97.m128i_i32[2] >> 4)
                   | ((unsigned __int64)(((unsigned __int32)v97.m128i_i32[0] >> 9)
                                       ^ ((unsigned __int32)v97.m128i_i32[0] >> 4)) << 32))) >> 31)
                ^ (484763065 * (((unsigned __int32)v97.m128i_i32[2] >> 9) ^ ((unsigned __int32)v97.m128i_i32[2] >> 4))));
            ;
            ii = (v17 - 1) & v81 )
      {
        v19 = (__int64 *)(v26 + 16LL * ii);
        v80 = *v19;
        if ( *(_OWORD *)&v97 == *(_OWORD *)v19 )
          break;
        if ( v80 == -4096 )
        {
          if ( v19[1] == -4096 )
            goto LABEL_122;
        }
        else if ( v80 == -8192 && v19[1] == -8192 && !v52 )
        {
          v52 = (__int64 *)(v26 + 16LL * ii);
        }
        v81 = v78 + ii;
        ++v78;
      }
LABEL_111:
      v18 = (__int64 *)v26;
      v96 = v50;
      v13 = (__m128i)_mm_loadh_ps((const double *)&v96);
      goto LABEL_45;
    }
    goto LABEL_128;
  }
LABEL_45:
  v47 = *v19 == -4096;
  *(_DWORD *)(a1 + 112) = v46;
  if ( !v47 || v19[1] != -4096 )
    --*(_DWORD *)(a1 + 116);
  *(__m128i *)v19 = v13;
  sub_AC9F60(v98, v19, &v18[2 * v17], a1 + 104, 1);
  v48 = *(_QWORD *)(a1 + 72);
  if ( v48 == *(_QWORD *)(a1 + 88) - 16LL )
  {
    sub_AC9C50(a1 + 24, &v97);
  }
  else
  {
    v49 = v48 + 16;
    *(__m128i *)(v49 - 16) = _mm_load_si128(&v97);
    *(_QWORD *)(a1 + 72) = v49;
  }
  return 1;
}

