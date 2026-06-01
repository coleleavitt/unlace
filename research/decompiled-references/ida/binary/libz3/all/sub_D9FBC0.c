__int64 __fastcall sub_D9FBC0(__int64 *a1, _QWORD *a2)
{
  unsigned int i; // ebp
  __m128i v5; // xmm0
  unsigned int v6; // r13d
  _QWORD *v7; // rax
  void *v8; // r12
  void *v9; // rcx
  _QWORD *v10; // rsi
  size_t v11; // rdx
  __int64 v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rbx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned int j; // ebx
  __int64 *v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // edi
  unsigned int v23; // edx
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 *v26; // r8
  __int64 *k; // rax
  __int64 v28; // rdx
  __int64 *v29; // rbx
  __int64 *v30; // rbp
  __int64 v31; // rcx
  __int64 *v32; // rax
  __m128i *v33; // rax
  __int64 *v34; // rbx
  __m128i *v35; // r13
  const __m128i *v36; // rbp
  __int64 result; // rax
  size_t v38; // rcx
  __int64 v39; // r12
  size_t v40; // r8
  int v41; // esi
  __int64 v42; // r9
  __int64 v43; // rax
  __m128i *v44; // rdi
  const __m128i *m; // rax
  __int64 v46; // rdx
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // rsi
  size_t v50; // r8
  unsigned int v51; // r10d
  size_t v52; // r9
  unsigned int v53; // edx
  int v54; // esi
  __m128 v55; // xmm0
  __int64 v56; // r10
  __m128 *v57; // rdi
  __m128 *v58; // rax
  __m128 *v59; // r9
  unsigned __int64 v60; // rdx
  unsigned __int64 v61; // rdx
  const __m128i *v62; // rbx
  __int64 v63; // r12
  __int64 v64; // rdi
  int v65; // eax
  int v66; // edx
  int v67; // ecx
  int v68; // r8d
  int v69; // r9d
  __int64 v70; // rdx
  __m128i *v71; // rax
  int v72; // edx
  __m128i *v73; // r11
  const __m128i *n; // rax
  __int64 v75; // rdx
  __m128i *v76; // rsi
  __m128i *v77; // rdx
  __m128i v78; // xmm0
  __int64 v79; // [rsp+0h] [rbp-88h] BYREF
  _QWORD **v80; // [rsp+8h] [rbp-80h]
  __m128i *v81; // [rsp+10h] [rbp-78h]
  __int64 v82; // [rsp+18h] [rbp-70h]
  size_t v83; // [rsp+20h] [rbp-68h]
  size_t v84; // [rsp+28h] [rbp-60h]
  __int64 v85; // [rsp+30h] [rbp-58h]
  const __m128i *v86; // [rsp+38h] [rbp-50h]
  unsigned int v87; // [rsp+40h] [rbp-48h]
  int v88; // [rsp+44h] [rbp-44h]
  __m128i *v89; // [rsp+48h] [rbp-40h]

  for ( i = 0; ; ++i )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a1[2] + 24LL))(*(_QWORD *)a1[2]);
    v14 = *(_QWORD *)a1[2];
    if ( i >= v13 )
      break;
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, i);
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)a1[2] + 16LL))(*(_QWORD *)a1[2], v15);
    if ( *v16 )
    {
      v5 = _mm_loadl_epi64((const __m128i *)(*v16 - 8LL));
      v80 = (_QWORD **)v16;
      v79 = v5.m128i_i64[0];
      v6 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v5, 229));
      v7 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v5) + 8);
      v8 = v7;
      v9 = v7 + 1;
      v10 = *v80;
      *v7 = v5.m128i_i64[0];
      if ( !v10 )
        goto LABEL_5;
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        v12 = *a2;
        if ( v11 == 8 )
          v7[1] = *v10;
      }
      else
      {
        v9 = memmove(v7 + 1, v10, v11);
LABEL_5:
        v12 = *a2;
      }
      sub_1376FA0(v12, v15, v6, v9);
      sub_186B220(v8);
      continue;
    }
    sub_1376FA0(*a2, v15, 0, 0);
  }
  v17 = *(_QWORD *)(v14 + 88);
  for ( j = 0; v17; v17 = *(_QWORD *)(v14 + 88) )
  {
    if ( j >= *(_DWORD *)(v17 - 4) )
      break;
    v19 = *(__int64 **)(v14 + 48);
    v20 = *(_QWORD *)(v17 + 8LL * j);
    v21 = *(unsigned int *)(v14 + 56);
    v22 = *(_DWORD *)(v20 + 12);
    v23 = v21 - 1;
    v21 *= 16;
    v24 = (__int64 *)((char *)v19 + v21);
    v25 = 16LL * (v22 & v23);
    v26 = &v19[(unsigned __int64)v25 / 8];
    if ( v25 != v21 )
    {
      for ( k = &v19[(unsigned __int64)v25 / 8]; v24 != k; k += 2 )
      {
        v28 = *k;
        if ( (unsigned __int64)*k > 1 )
        {
          if ( *(_DWORD *)(v28 + 12) == v22 && v20 == v28 )
            goto LABEL_94;
        }
        else if ( !v28 )
        {
          goto LABEL_20;
        }
      }
    }
    if ( v19 == v26 )
    {
LABEL_103:
      v28 = 0;
    }
    else
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v28 = *v19;
          if ( (unsigned __int64)*v19 > 1 )
            break;
          if ( !v28 )
            goto LABEL_20;
          v19 += 2;
          if ( v26 == v19 )
            goto LABEL_103;
        }
        if ( *(_DWORD *)(v28 + 12) == v22 && v20 == v28 )
          break;
        v19 += 2;
        if ( v26 == v19 )
          goto LABEL_103;
      }
      k = v19;
LABEL_94:
      v28 = k[1];
    }
LABEL_20:
    ++j;
    sub_135F980(*a2, v20, v28);
    v14 = *(_QWORD *)a1[2];
  }
  v29 = (__int64 *)a1[77];
  v30 = &v29[2 * *((unsigned int *)a1 + 156)];
  if ( v29 != v30 )
  {
    while ( (unsigned __int64)*v29 <= 1 )
    {
      v29 += 2;
      if ( v30 == v29 )
        goto LABEL_34;
    }
    if ( v30 != v29 )
    {
      v31 = *v29;
      do
      {
        if ( !*(_DWORD *)(v31 + 24) )
          sub_135F9B0(*a2, *(_QWORD *)(v31 + 16), v29[1]);
        v32 = v29 + 2;
        if ( v30 == v29 + 2 )
          break;
        while ( 1 )
        {
          v31 = *v32;
          v29 = v32;
          if ( (unsigned __int64)*v32 > 1 )
            break;
          v32 += 2;
          if ( v30 == v32 )
            goto LABEL_34;
        }
      }
      while ( v30 != v32 );
    }
  }
LABEL_34:
  v33 = (__m128i *)sub_186B270(0x80u);
  v34 = (__int64 *)a1[74];
  v35 = v33;
  *v33 = 0;
  v33[1] = 0;
  v36 = v33 + 8;
  v33[2] = 0;
  v33[3] = 0;
  v33[4] = 0;
  v33[5] = 0;
  v33[6] = 0;
  v33[7] = 0;
  result = 3LL * *((unsigned int *)a1 + 150);
  v38 = (size_t)&v34[3 * *((unsigned int *)a1 + 150)];
  if ( v34 == (__int64 *)v38 )
    goto LABEL_72;
  while ( (unsigned __int64)*v34 <= 1 )
  {
    v34 += 3;
    if ( (__int64 *)v38 == v34 )
      goto LABEL_72;
  }
  if ( (__int64 *)v38 == v34 )
    goto LABEL_72;
  LODWORD(v86) = 0;
  v39 = *v34;
  v88 = 0;
  v87 = 8;
  do
  {
    v40 = *(_QWORD *)(v39 + 16);
    v41 = *(_DWORD *)(v40 + 12);
    v80 = (_QWORD **)v34[1];
    v42 = 16LL * v87;
    v36 = &v35[(unsigned __int64)v42 / 0x10];
    v43 = 16LL * ((v87 - 1) & v41);
    v44 = &v35[(unsigned __int64)v43 / 0x10];
    if ( v43 != v42 )
    {
      for ( m = &v35[(unsigned __int64)v43 / 0x10]; v36 != m; ++m )
      {
        v46 = m->m128i_i64[0];
        if ( m->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v46 + 12) == v41 && v40 == v46 )
          {
LABEL_65:
            v79 = m->m128i_i64[1];
            goto LABEL_66;
          }
        }
        else if ( !v46 )
        {
          goto LABEL_47;
        }
      }
    }
    if ( v44 != v35 )
    {
      for ( m = v35; v44 != m; ++m )
      {
        v70 = m->m128i_i64[0];
        if ( m->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v70 + 12) == v41 && v40 == v70 )
            goto LABEL_65;
        }
        else if ( !v70 )
        {
          break;
        }
      }
    }
LABEL_47:
    v47 = *(_DWORD *)(v40 + 32);
    v85 = 16LL * v87;
    LODWORD(v84) = v87 - 1;
    v83 = v38;
    v82 = v40;
    LODWORD(v81) = v47;
    v48 = sub_186B270(0x38u);
    v49 = *a1;
    v79 = v48;
    sub_13478B0(v48, v49, (unsigned int)v81);
    v50 = v82;
    v38 = v83;
    v51 = v84;
    v52 = v85;
    v53 = 2 * v87;
    if ( 3 * v87 < 4 * (v88 + (int)v86) )
    {
      v85 = v82;
      v87 *= 2;
      v84 = v83;
      LODWORD(v83) = v53;
      v82 = 16LL * v53;
      v71 = (__m128i *)sub_186B270(v82);
      v72 = v83;
      v52 = v82;
      v81 = v71;
      v38 = v84;
      v50 = v85;
      v73 = (__m128i *)((char *)v71 + v82);
      if ( (_DWORD)v83 )
      {
        if ( (v82 & 0x10) == 0 || (*v71 = 0, ++v71, v71 != v73) )
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
      v51 = v72 - 1;
      for ( n = v35; v36 != n; *v77 = v78 )
      {
        while ( n->m128i_i64[0] <= 1uLL )
        {
          if ( v36 == ++n )
            goto LABEL_120;
        }
        v75 = 16LL * (*(_DWORD *)(n->m128i_i64[0] + 12) & v51);
        v76 = &v81[(unsigned __int64)v75 / 0x10];
        if ( v52 == v75 )
        {
LABEL_123:
          if ( v81 == v76 )
          {
LABEL_128:
            v89 = v73;
            v86 = n;
            v85 = v52;
            LODWORD(v84) = v51;
            v83 = v50;
            v82 = v38;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v77 = v81;
          while ( v77->m128i_i64[0] )
          {
            if ( v76 == ++v77 )
              goto LABEL_128;
          }
        }
        else
        {
          v77 = &v81[(unsigned __int64)v75 / 0x10];
          while ( v77->m128i_i64[0] )
          {
            if ( v73 == ++v77 )
              goto LABEL_123;
          }
        }
        v78 = _mm_loadu_si128(n++);
      }
LABEL_120:
      if ( v35 )
      {
        v86 = v73;
        v85 = v52;
        LODWORD(v84) = v51;
        v83 = v50;
        v82 = v38;
        sub_186B220(v35);
        v73 = (__m128i *)v86;
        v52 = v85;
        v51 = v84;
        v50 = v83;
        v38 = v82;
      }
      LODWORD(v86) = 0;
      v35 = v81;
      v36 = v73;
    }
    v54 = *(_DWORD *)(v50 + 12);
    v55 = _mm_loadh_ps((const double *)&v79);
    v56 = 16LL * (v54 & v51);
    v57 = (__m128 *)&v35[(unsigned __int64)v56 / 0x10];
    if ( v56 == v52 )
    {
      v59 = nullptr;
LABEL_56:
      if ( v35 != (__m128i *)v57 )
      {
        v58 = (__m128 *)v35;
        do
        {
          while ( 1 )
          {
            v61 = v58->m128_u64[0];
            if ( v58->m128_u64[0] <= 1 )
              break;
            if ( *(_DWORD *)(v61 + 12) == v54 && v50 == v61 )
              goto LABEL_129;
            if ( v57 == ++v58 )
              goto LABEL_64;
          }
          if ( !v61 )
            goto LABEL_104;
          v59 = v58++;
        }
        while ( v57 != v58 );
      }
LABEL_64:
      v81 = (__m128i *)v38;
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v58 = (__m128 *)&v35[(unsigned __int64)v56 / 0x10];
    v59 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v60 = v58->m128_u64[0];
        if ( v58->m128_u64[0] <= 1 )
          break;
        if ( *(_DWORD *)(v60 + 12) == v54 && v50 == v60 )
        {
LABEL_129:
          *v58 = v55;
          goto LABEL_66;
        }
        if ( ++v58 == (__m128 *)v36 )
          goto LABEL_56;
      }
      if ( !v60 )
        break;
      v59 = v58++;
      if ( v58 == (__m128 *)v36 )
        goto LABEL_56;
    }
LABEL_104:
    if ( v59 )
      LODWORD(v86) = (_DWORD)v86 - 1;
    else
      v59 = v58;
    *v59 = v55;
    ++v88;
LABEL_66:
    v81 = (__m128i *)v38;
    sub_1348F50(v79, v39 + 32, v80);
    v38 = (size_t)v81;
    result = (__int64)(v34 + 3);
    if ( v81 == (__m128i *)(v34 + 3) )
      break;
    while ( 1 )
    {
      v39 = *(_QWORD *)result;
      v34 = (__int64 *)result;
      if ( *(_QWORD *)result > 1u )
        break;
      result += 24;
      if ( v81 == (__m128i *)result )
        goto LABEL_71;
    }
  }
  while ( v81 != (__m128i *)result );
LABEL_71:
  if ( v35 != v36 )
  {
LABEL_72:
    v62 = v35;
    while ( v62->m128i_i64[0] <= 1uLL )
    {
      if ( ++v62 == v36 )
        goto LABEL_82;
    }
    if ( v62 != v36 )
    {
      v63 = v62->m128i_i64[0];
      do
      {
        v64 = *a1;
        v79 = v62->m128i_i64[1];
        v65 = sub_15E1950(v64);
        sub_1349280(v79, v65, v66, v67, v68, v69);
        sub_135F980(*a2, v63, v79);
        result = (__int64)v62[1].m128i_i64;
        if ( &v62[1] == v36 )
          break;
        while ( 1 )
        {
          v63 = *(_QWORD *)result;
          v62 = (const __m128i *)result;
          if ( *(_QWORD *)result > 1u )
            break;
          result += 16;
          if ( v36 == (const __m128i *)result )
            goto LABEL_82;
        }
      }
      while ( (const __m128i *)result != v36 );
    }
  }
LABEL_82:
  if ( v35 )
    return sub_186B220(v35);
  return result;
}

