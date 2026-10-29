__int64 *__fastcall sub_FD8C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r12
  const __m128i *v10; // r13
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _OWORD *v14; // r8
  const __m128i *v15; // r9
  _OWORD *n; // rax
  const __m128i *v17; // r8
  __int64 *v18; // r10
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r14
  int v22; // eax
  int v23; // edi
  __m128i *v24; // rsi
  __int64 v25; // rcx
  int v26; // r11d
  unsigned int ii; // eax
  __m128i *v28; // rdx
  __int64 v29; // r15
  unsigned int v30; // eax
  __int64 v31; // rdi
  int v32; // r15d
  int v33; // eax
  __m128i v34; // xmm0
  int v35; // edi
  __int64 *v36; // rdx
  unsigned int i; // eax
  __int64 *v38; // rcx
  __int64 v39; // rsi
  unsigned int v40; // eax
  __int64 *v41; // rbp
  int v43; // eax
  int v44; // esi
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // r9d
  _OWORD *v50; // rdx
  _OWORD *v51; // rax
  int v52; // eax
  int v53; // esi
  __int64 *v54; // rdi
  int v55; // r9d
  unsigned int jj; // eax
  unsigned int v57; // eax
  __int64 v58; // rax
  const __m128i *v59; // r13
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __m128i v62; // xmm0
  _OWORD *v63; // r8
  const __m128i *v64; // r9
  _OWORD *j; // rax
  const __m128i *v66; // r8
  __int64 v67; // rdi
  int v68; // r11d
  __int64 v69; // rax
  int v70; // ebp
  int v71; // eax
  __int64 v72; // r10
  int v73; // r11d
  int v74; // edx
  __int64 v75; // rdi
  __m128i *v76; // r11
  unsigned int k; // eax
  __m128i *v78; // rcx
  __int64 v79; // rsi
  unsigned int v80; // eax
  int v81; // r9d
  int v82; // eax
  int v83; // esi
  int v84; // r9d
  unsigned int m; // eax
  unsigned int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  _OWORD *v89; // rdx
  _OWORD *v90; // rax
  __m128i v91; // [rsp+0h] [rbp-78h] BYREF
  __int64 v92; // [rsp+18h] [rbp-60h]
  __int64 v93; // [rsp+20h] [rbp-58h]
  __int64 v94; // [rsp+28h] [rbp-50h]
  __m128i v95; // [rsp+30h] [rbp-48h] BYREF

  v7 = *(unsigned int *)(a1 + 256);
  v8 = *(_QWORD *)(a2 + 32);
  v9 = *(_QWORD *)(a2 + 40);
  v10 = *(const __m128i **)(a1 + 240);
  if ( (_DWORD)v7 )
  {
    v31 = *(_QWORD *)(a2 + 32);
    v32 = v7 - 1;
    v91.m128i_i64[0] = *(_QWORD *)(a2 + 40);
    v95 = (__m128i)_mm_loadh_ps((const double *)v91.m128i_i64);
    v91 = v95;
    v33 = sub_FD6890(v31, &v95.m128i_i64[1]);
    v34 = _mm_load_si128(&v91);
    v35 = 1;
    v36 = nullptr;
    for ( i = v32 & v33; ; i = v32 & v40 )
    {
      v38 = &v10->m128i_i64[3 * i];
      v39 = *v38;
      if ( v8 == *v38 && v9 == v38[1] )
      {
        v41 = v38 + 2;
        if ( v38[2] )
          return v41;
        goto LABEL_33;
      }
      if ( v39 == -1 )
        break;
      if ( v39 == -2 && v38[1] == -2 && !v36 )
        v36 = &v10->m128i_i64[3 * i];
LABEL_20:
      v40 = v35 + i;
      ++v35;
    }
    if ( v38[1] != -1 )
      goto LABEL_20;
    v43 = *(_DWORD *)(a1 + 248);
    v7 = *(unsigned int *)(a1 + 256);
    if ( !v36 )
      v36 = v38;
    v44 = v43 + 1;
    a4 = (unsigned int)(4 * (v43 + 1));
    if ( (unsigned int)a4 >= 3 * (int)v7 )
    {
      v10 = *(const __m128i **)(a1 + 240);
      goto LABEL_2;
    }
    v45 = (unsigned int)v7 >> 3;
    if ( (int)v7 - *(_DWORD *)(a1 + 252) - v44 > (unsigned int)v45 )
    {
      v46 = *v36;
      goto LABEL_30;
    }
    v59 = *(const __m128i **)(a1 + 240);
    v91 = v34;
    v60 = ((((((((((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
               | (unsigned int)(v7 - 1)
               | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 4)
             | (((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
             | (unsigned int)(v7 - 1)
             | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 8)
           | (((((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
             | (unsigned int)(v7 - 1)
             | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 4)
           | (((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
           | (unsigned int)(v7 - 1)
           | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 16)
         | (((((((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
             | (unsigned int)(v7 - 1)
             | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 4)
           | (((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
           | (unsigned int)(v7 - 1)
           | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 8)
         | (((((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
           | (unsigned int)(v7 - 1)
           | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 4)
         | (((unsigned int)(v7 - 1) | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1)) >> 2)
         | (unsigned int)(v7 - 1)
         | ((unsigned __int64)(unsigned int)(v7 - 1) >> 1))
        + 1;
    if ( (unsigned int)v60 < 0x40 )
      LODWORD(v60) = 64;
    *(_DWORD *)(a1 + 256) = v60;
    v61 = sub_22300B0(24LL * (unsigned int)v60, 8, 64, v45, a5, a6);
    v62 = _mm_load_si128(&v91);
    v63 = (_OWORD *)v61;
    *(_QWORD *)(a1 + 240) = v61;
    if ( v59 )
    {
      *(_QWORD *)(a1 + 248) = 0;
      v93 = 24 * v7;
      v64 = (const __m128i *)((char *)v59 + 24 * v7);
      for ( j = (_OWORD *)(v61 + 24LL * *(unsigned int *)(a1 + 256)); j != v63; v63 = (_OWORD *)((char *)v63 + 24) )
        *v63 = -1;
      v66 = v59;
      if ( v59 != v64 )
      {
        v94 = v8;
        while ( 1 )
        {
          v67 = v66->m128i_i64[0];
          if ( v66->m128i_i64[0] == -1 )
          {
            if ( v66->m128i_i64[1] != -1 )
              goto LABEL_70;
          }
          else if ( v67 != -2 || v66->m128i_i64[1] != -2 )
          {
LABEL_70:
            v68 = *(_DWORD *)(a1 + 256);
            v91 = v62;
            if ( !v68 )
            {
              *(__m128i *)&dword_0 = _mm_loadu_si128(v66);
              BUG();
            }
            v69 = v66->m128i_i64[1];
            v95.m128i_i64[0] = v67;
            v70 = 1;
            v95.m128i_i64[1] = v69;
            v71 = sub_FD6890(v67, &v95.m128i_i64[1]);
            v62 = _mm_load_si128(&v91);
            v74 = v73 - 1;
            v75 = v66->m128i_i64[0];
            v76 = nullptr;
            LODWORD(v92) = v74;
            for ( k = v74 & v71; ; k = v92 & v80 )
            {
              v78 = (__m128i *)(v72 + 24LL * k);
              v79 = v78->m128i_i64[0];
              if ( v75 == v78->m128i_i64[0] && v66->m128i_i64[1] == v78->m128i_i64[1] )
                break;
              if ( v79 == -1 )
              {
                if ( v78->m128i_i64[1] == -1 )
                {
                  if ( v76 )
                    v78 = v76;
                  break;
                }
              }
              else if ( v79 == -2 && v78->m128i_i64[1] == -2 && !v76 )
              {
                v76 = (__m128i *)(v72 + 24LL * k);
              }
              v80 = v70 + k;
              ++v70;
            }
            v87 = v66[1].m128i_i64[0];
            *v78 = _mm_loadu_si128(v66);
            v78[1].m128i_i64[0] = v87;
            ++*(_DWORD *)(a1 + 248);
          }
          v66 = (const __m128i *)((char *)v66 + 24);
          if ( v64 == v66 )
          {
            v8 = v94;
            break;
          }
        }
      }
      v91 = v62;
      operator delete(v59, v93, 8);
      v62 = _mm_load_si128(&v91);
      v81 = *(_DWORD *)(a1 + 256);
    }
    else
    {
      v88 = *(unsigned int *)(a1 + 256);
      *(_QWORD *)(a1 + 248) = 0;
      v81 = v88;
      v89 = (_OWORD *)((char *)v63 + 24 * v88);
      if ( v63 != v89 )
      {
        v90 = v63;
        do
        {
          *v90 = -1;
          v90 = (_OWORD *)((char *)v90 + 24);
        }
        while ( v89 != v90 );
      }
    }
    if ( v81 )
    {
      v95 = v62;
      v91 = v62;
      v82 = sub_FD6890(v8, &v95.m128i_i64[1]);
      v34 = _mm_load_si128(&v91);
      v83 = 1;
      v54 = nullptr;
      a6 = (unsigned int)(v84 - 1);
      for ( m = a6 & v82; ; m = a6 & v86 )
      {
        v36 = (__int64 *)(a5 + 24LL * m);
        v46 = *v36;
        if ( v8 == *v36 && v9 == v36[1] )
          break;
        if ( v46 == -1 )
        {
          if ( v36[1] == -1 )
          {
LABEL_107:
            v44 = *(_DWORD *)(a1 + 248) + 1;
            if ( !v54 )
            {
              *(_DWORD *)(a1 + 248) = v44;
              goto LABEL_59;
            }
            v46 = *v54;
            v36 = v54;
            goto LABEL_30;
          }
        }
        else if ( v46 == -2 && v36[1] == -2 && !v54 )
        {
          v54 = (__int64 *)(a5 + 24LL * m);
        }
        v86 = v83 + m;
        ++v83;
      }
      goto LABEL_95;
    }
LABEL_130:
    ++*(_DWORD *)(a1 + 248);
    BUG();
  }
LABEL_2:
  v11 = (((((((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v7 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 4)
        | (((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v7 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 8)
      | (((((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
        | (unsigned int)(2 * v7 - 1)
        | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 4)
      | (((unsigned int)(2 * v7 - 1) | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1)) >> 2)
      | (unsigned int)(2 * v7 - 1)
      | ((unsigned __int64)(unsigned int)(2 * v7 - 1) >> 1);
  v12 = ((v11 >> 16) | v11) + 1;
  if ( (unsigned int)v12 < 0x40 )
    LODWORD(v12) = 64;
  *(_DWORD *)(a1 + 256) = v12;
  v13 = sub_22300B0(24LL * (unsigned int)v12, 8, 64, a4, a5, a6);
  v14 = (_OWORD *)v13;
  *(_QWORD *)(a1 + 240) = v13;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    v92 = 24 * v7;
    v15 = (const __m128i *)((char *)v10 + 24 * v7);
    for ( n = (_OWORD *)(v13 + 24LL * *(unsigned int *)(a1 + 256)); n != v14; v14 = (_OWORD *)((char *)v14 + 24) )
      *v14 = -1;
    v17 = v10;
    v18 = (__int64 *)&v95;
    while ( v15 != v17 )
    {
      v19 = v17->m128i_i64[0];
      if ( v17->m128i_i64[0] == -1 )
      {
        if ( v17->m128i_i64[1] != -1 )
          goto LABEL_10;
      }
      else if ( v19 != -2 || v17->m128i_i64[1] != -2 )
      {
LABEL_10:
        if ( !*(_DWORD *)(a1 + 256) )
        {
          *(__m128i *)&dword_0 = _mm_loadu_si128(v17);
          BUG();
        }
        v20 = v17->m128i_i64[1];
        v95.m128i_i64[0] = v17->m128i_i64[0];
        v21 = *(_QWORD *)(a1 + 240);
        v95.m128i_i64[1] = v20;
        v22 = sub_FD6890(v19, v18 + 1);
        v23 = 1;
        v24 = nullptr;
        v25 = v17->m128i_i64[0];
        v91.m128i_i32[0] = v26 - 1;
        for ( ii = (v26 - 1) & v22; ; ii = v91.m128i_i32[0] & v30 )
        {
          v28 = (__m128i *)(v21 + 24LL * ii);
          v29 = v28->m128i_i64[0];
          if ( v25 == v28->m128i_i64[0] && v17->m128i_i64[1] == v28->m128i_i64[1] )
            break;
          if ( v29 == -1 )
          {
            if ( v28->m128i_i64[1] == -1 )
            {
              if ( v24 )
                v28 = v24;
              break;
            }
          }
          else if ( v29 == -2 && v28->m128i_i64[1] == -2 && !v24 )
          {
            v24 = (__m128i *)(v21 + 24LL * ii);
          }
          v30 = v23 + ii;
          ++v23;
        }
        v58 = v17[1].m128i_i64[0];
        *v28 = _mm_loadu_si128(v17);
        v28[1].m128i_i64[0] = v58;
        ++*(_DWORD *)(a1 + 248);
      }
      v17 = (const __m128i *)((char *)v17 + 24);
    }
    operator delete(v10, v92, 8);
    v49 = *(_DWORD *)(a1 + 256);
  }
  else
  {
    v48 = *(unsigned int *)(a1 + 256);
    *(_QWORD *)(a1 + 248) = 0;
    v49 = v48;
    v50 = (_OWORD *)((char *)v14 + 24 * v48);
    if ( v14 != v50 )
    {
      v51 = v14;
      do
      {
        *v51 = -1;
        v51 = (_OWORD *)((char *)v51 + 24);
      }
      while ( v50 != v51 );
    }
  }
  if ( !v49 )
    goto LABEL_130;
  v91.m128i_i64[0] = v9;
  v95 = (__m128i)_mm_loadh_ps((const double *)v91.m128i_i64);
  v91 = v95;
  v52 = sub_FD6890(v8, &v95.m128i_i64[1]);
  v34 = _mm_load_si128(&v91);
  v53 = 1;
  v54 = nullptr;
  a6 = (unsigned int)(v55 - 1);
  for ( jj = a6 & v52; ; jj = a6 & v57 )
  {
    v36 = (__int64 *)(a5 + 24LL * jj);
    v46 = *v36;
    if ( v8 == *v36 && v9 == v36[1] )
      break;
    if ( v46 == -1 )
    {
      if ( v36[1] == -1 )
        goto LABEL_107;
    }
    else if ( v46 == -2 && v36[1] == -2 && !v54 )
    {
      v54 = (__int64 *)(a5 + 24LL * jj);
    }
    v57 = v53 + jj;
    ++v53;
  }
LABEL_95:
  v44 = *(_DWORD *)(a1 + 248) + 1;
LABEL_30:
  *(_DWORD *)(a1 + 248) = v44;
  if ( v46 == -1 )
  {
LABEL_59:
    if ( v36[1] == -1 )
      goto LABEL_32;
  }
  --*(_DWORD *)(a1 + 252);
LABEL_32:
  v36[2] = 0;
  v41 = v36 + 2;
  *(__m128i *)v36 = v34;
LABEL_33:
  v47 = *(_QWORD *)(a1 + 144);
  ++*(_QWORD *)(a1 + 224);
  if ( *(_QWORD *)(a1 + 152) >= (unsigned __int64)(v47 + 1) && v47 )
    *(_QWORD *)(a1 + 144) = v47 + 1;
  else
    v47 = sub_986170(a1 + 144, 1, 1, 0, a5, a6);
  *v41 = v47;
  return v41;
}
