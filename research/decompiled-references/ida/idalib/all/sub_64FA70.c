__int64 __fastcall sub_64FA70(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        char a8)
{
  char v8; // al
  char *v9; // rbx
  char *v10; // r13
  void *v11; // rdi
  char *v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 i; // r15
  char *v16; // rbx
  void *v17; // rdi
  void *v18; // rdi
  int v21; // r13d
  __int64 v22; // rax
  const char *v23; // rsi
  __int64 v24; // r15
  char *v25; // rax
  __int64 v26; // r8
  void *v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  const char *v32; // rsi
  char *v33; // r14
  void *v34; // rdi
  char *v35; // rdi
  __int64 v36; // r14
  __int64 v37; // r13
  __int64 j; // r12
  char *v39; // rax
  void *v40; // rdi
  char *v41; // r15
  void *v42; // rdi
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rax
  __int64 v48; // rbx
  const char *v49; // rsi
  __int64 v50; // rdx
  __int64 v51; // r15
  void *v52; // r14
  __m128i v53; // xmm0
  __int64 v54; // rax
  char *v55; // rdi
  __int64 *v56; // r15
  size_t v57; // r15
  __int64 v58; // [rsp+0h] [rbp-B0h]
  int v59; // [rsp+Ch] [rbp-A4h]
  char *v60; // [rsp+10h] [rbp-A0h]
  __m128i n; // [rsp+20h] [rbp-90h] BYREF
  __int64 v62; // [rsp+30h] [rbp-80h]
  __int64 v63; // [rsp+38h] [rbp-78h]
  int v64; // [rsp+40h] [rbp-70h]
  unsigned __int8 v65; // [rsp+47h] [rbp-69h]
  __int64 v66; // [rsp+48h] [rbp-68h]
  unsigned __int8 v67; // [rsp+57h] [rbp-59h] BYREF
  char *v68; // [rsp+58h] [rbp-58h] BYREF
  char *s1; // [rsp+60h] [rbp-50h] BYREF
  __int128 v70; // [rsp+68h] [rbp-48h]
  unsigned __int64 v71; // [rsp+78h] [rbp-38h]

  v66 = a1;
  v8 = *a6;
  n.m128i_i64[1] = a3;
  v63 = a4;
  v62 = a5;
  v71 = __readfsqword(0x28u);
  if ( (v8 & 0x3F) != 0x2D )
  {
    v65 = 1;
    v9 = nullptr;
    if ( !a1 )
      return v65;
    goto LABEL_3;
  }
  sub_64D850(&s1, (__int64)a6, a7, 0, &v67, nullptr);
  v9 = s1;
  v65 = v67;
  if ( v67 )
  {
    if ( v66 )
      goto LABEL_3;
    if ( !s1 )
      return v65;
LABEL_26:
    v65 = 1;
    goto LABEL_44;
  }
  if ( !s1 )
  {
    if ( !v66 )
      return v65;
    goto LABEL_3;
  }
  v21 = 0;
  v64 = a8 & 4;
  do
  {
    v22 = v21;
    if ( (unsigned __int64)v21 >= *((_QWORD *)v9 + 1) )
    {
LABEL_25:
      v65 = 1;
      if ( v66 )
        goto LABEL_3;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v23 = haystack;
      v24 = *(_QWORD *)v9 + 56 * v22;
      if ( *(_QWORD *)(v24 + 8) )
        v23 = *(const char **)v24;
      if ( (unsigned int)get_named_type(v63, (_DWORD)v23, 64, (unsigned int)&v68, 0, 0, 0, 0, 0) != 1 )
        goto LABEL_24;
      s1 = nullptr;
      v70 = 0;
      if ( !v64 )
        break;
      v25 = v68++;
      if ( *v25 != 61 || !(unsigned __int8)sub_567540((__int64)&s1, &v68) || *(_QWORD *)(v62 + 8) <= 1u )
        break;
      v55 = (char *)haystack;
      if ( (_QWORD)v70 )
        v55 = s1;
      if ( strcmp(v55, *(const char **)v62) )
        break;
      if ( s1 )
      {
        *(_QWORD *)&v70 = 0;
        qfree(s1);
      }
LABEL_24:
      v22 = ++v21;
      if ( (unsigned __int64)v21 >= *((_QWORD *)v9 + 1) )
        goto LABEL_25;
    }
    v26 = *(_QWORD *)(v24 + 8);
    v27 = nullptr;
    if ( v26 )
    {
      n.m128i_i64[0] = *(_QWORD *)(v24 + 8);
      v27 = (void *)qalloc_or_throw(n.m128i_i64[0]);
      memcpy(v27, *(const void **)v24, n.m128i_u64[0]);
      v26 = n.m128i_i64[0];
    }
    v28 = a2[1];
    v29 = *a2;
    if ( a2[2] < (unsigned __int64)(v28 + 1) )
    {
      n.m128i_i64[0] = v26;
      v43 = qvector_reserve(a2, v29, v28 + 1, 24);
      *a2 = v43;
      v28 = a2[1];
      v29 = v43;
      v26 = n.m128i_i64[0];
    }
    v30 = v29 + 24 * v28;
    *(__m128i *)(v30 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v26, (__m128i)(unsigned __int64)v26);
    *(_QWORD *)v30 = v27;
    v31 = v70;
    ++a2[1];
    n.m128i_i64[0] = v31;
    if ( *(_QWORD *)(v62 + 8) )
    {
      v33 = (char *)haystack;
      v32 = *(const char **)v62;
      if ( n.m128i_i64[0] )
LABEL_38:
        v33 = s1;
      if ( strcmp(v33, v32) )
      {
        v44 = *(_QWORD *)(n.m128i_i64[1] + 8);
        v45 = *(_QWORD *)n.m128i_i64[1];
        if ( *(_QWORD *)n.m128i_i64[1] != *(_QWORD *)n.m128i_i64[1] + 24 * v44 )
        {
          v59 = v21;
          v46 = *(_QWORD *)n.m128i_i64[1];
          v47 = v66;
          v60 = v9;
          v48 = *(_QWORD *)n.m128i_i64[1] + 24 * v44;
          v66 = *(_QWORD *)n.m128i_i64[1];
          v58 = v47;
          while ( 1 )
          {
            v49 = haystack;
            if ( *(_QWORD *)(v66 + 8) )
              v49 = *(const char **)v66;
            if ( !strcmp(v33, v49) )
              break;
            v66 += 24;
            if ( v48 == v66 )
            {
              v45 = v46;
              v9 = v60;
              v21 = v59;
              v66 = v58;
              goto LABEL_65;
            }
          }
          v50 = v48;
          v45 = v46;
          v51 = v66;
          v21 = v59;
          v66 = v58;
          v9 = v60;
          if ( v51 != v50 )
            goto LABEL_40;
        }
LABEL_65:
        v52 = nullptr;
        if ( n.m128i_i64[0] )
        {
          v57 = n.m128i_i64[0];
          v52 = (void *)qalloc_or_throw(n.m128i_i64[0]);
          memcpy(v52, s1, v57);
          v44 = *(_QWORD *)(n.m128i_i64[1] + 8);
          v45 = *(_QWORD *)n.m128i_i64[1];
        }
        if ( *(_QWORD *)(n.m128i_i64[1] + 16) < (unsigned __int64)(v44 + 1) )
        {
          v56 = (__int64 *)n.m128i_i64[1];
          v45 = qvector_reserve(n.m128i_i64[1], v45, v44 + 1, 24);
          *v56 = v45;
          v44 = v56[1];
        }
        v53 = _mm_loadl_epi64(&n);
        v54 = v45 + 24 * v44;
        *(_QWORD *)v54 = v52;
        *(__m128i *)(v54 + 8) = _mm_unpacklo_epi64(v53, v53);
        ++*(_QWORD *)(n.m128i_i64[1] + 8);
      }
    }
    else
    {
      v32 = haystack;
      if ( n.m128i_i64[0] )
        goto LABEL_38;
    }
LABEL_40:
    if ( s1 )
    {
      *(_QWORD *)&v70 = 0;
      qfree(s1);
    }
    ++v21;
  }
  while ( v64 );
  if ( v66 )
  {
LABEL_3:
    v10 = *(char **)v66;
    *(_QWORD *)v66 = v9;
    if ( v10 )
    {
      v11 = *((void **)v10 + 3);
      if ( v11 )
      {
        *((_QWORD *)v10 + 4) = 0;
        qfree(v11);
      }
      v12 = *(char **)v10;
      if ( *(_QWORD *)v10 )
      {
        v13 = *((_QWORD *)v10 + 1);
        if ( v13 )
        {
          v14 = 0;
          for ( i = 0; i != v13; ++i )
          {
            v16 = &v12[v14];
            v17 = *(void **)&v12[v14 + 24];
            if ( v17 )
            {
              *((_QWORD *)v16 + 4) = 0;
              qfree(v17);
            }
            v18 = *(void **)v16;
            if ( *(_QWORD *)v16 )
            {
              *((_QWORD *)v16 + 1) = 0;
              qfree(v18);
            }
            v12 = *(char **)v10;
            v14 += 56;
          }
        }
        *((_QWORD *)v10 + 1) = 0;
        qfree(v12);
      }
      qfree(v10);
    }
    return v65;
  }
LABEL_44:
  v34 = *((void **)v9 + 3);
  if ( v34 )
  {
    *((_QWORD *)v9 + 4) = 0;
    qfree(v34);
  }
  v35 = *(char **)v9;
  if ( *(_QWORD *)v9 )
  {
    v36 = *((_QWORD *)v9 + 1);
    if ( v36 )
    {
      v37 = 0;
      for ( j = 0; j != v36; ++j )
      {
        v39 = &v35[v37];
        v40 = *(void **)&v35[v37 + 24];
        v41 = v39;
        if ( v40 )
        {
          *((_QWORD *)v39 + 4) = 0;
          qfree(v40);
        }
        v42 = *(void **)v41;
        if ( *(_QWORD *)v41 )
        {
          *((_QWORD *)v41 + 1) = 0;
          qfree(v42);
        }
        v35 = *(char **)v9;
        v37 += 56;
      }
    }
    *((_QWORD *)v9 + 1) = 0;
    qfree(v35);
  }
  qfree(v9);
  return v65;
}
