__int64 __fastcall sub_632470(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        const char **a5,
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
  __int64 v49; // rdx
  __int64 v50; // r15
  void *v51; // r14
  __m128i v52; // xmm0
  __int64 v53; // rax
  char *v54; // rdi
  __int64 *v55; // r15
  size_t v56; // r15
  __int64 v57; // [rsp+0h] [rbp-B0h]
  int v58; // [rsp+Ch] [rbp-A4h]
  char *v59; // [rsp+10h] [rbp-A0h]
  __m128i n; // [rsp+20h] [rbp-90h] BYREF
  const char **v61; // [rsp+30h] [rbp-80h]
  __int64 v62; // [rsp+38h] [rbp-78h]
  int v63; // [rsp+40h] [rbp-70h]
  unsigned __int8 v64; // [rsp+47h] [rbp-69h]
  __int64 v65; // [rsp+48h] [rbp-68h]
  unsigned __int8 v66; // [rsp+57h] [rbp-59h] BYREF
  char *v67; // [rsp+58h] [rbp-58h] BYREF
  char *s1; // [rsp+60h] [rbp-50h] BYREF
  __int128 v69; // [rsp+68h] [rbp-48h]
  unsigned __int64 v70; // [rsp+78h] [rbp-38h]

  v65 = a1;
  v8 = *a6;
  n.m128i_i64[1] = a3;
  v62 = a4;
  v61 = a5;
  v70 = __readfsqword(0x28u);
  if ( (v8 & 0x3F) != 0x2D )
  {
    v64 = 1;
    v9 = nullptr;
    if ( !a1 )
      return v64;
    goto LABEL_3;
  }
  sub_630250(&s1, (__int64)a6, a7, 0, &v66, nullptr);
  v9 = s1;
  v64 = v66;
  if ( v66 )
  {
    if ( v65 )
      goto LABEL_3;
    if ( !s1 )
      return v64;
LABEL_26:
    v64 = 1;
    goto LABEL_44;
  }
  if ( !s1 )
  {
    if ( !v65 )
      return v64;
    goto LABEL_3;
  }
  v21 = 0;
  v63 = a8 & 4;
  do
  {
    v22 = v21;
    if ( (unsigned __int64)v21 >= *((_QWORD *)v9 + 1) )
    {
LABEL_25:
      v64 = 1;
      if ( v65 )
        goto LABEL_3;
      goto LABEL_26;
    }
    while ( 1 )
    {
      v23 = haystack;
      v24 = *(_QWORD *)v9 + 56 * v22;
      if ( *(_QWORD *)(v24 + 8) )
        v23 = *(const char **)v24;
      if ( (unsigned int)get_named_type(v62, (int)v23, 64, (int)&v67, 0, 0, 0, 0, 0) != 1 )
        goto LABEL_24;
      s1 = nullptr;
      v69 = 0;
      if ( !v63 )
        break;
      v25 = v67++;
      if ( *v25 != 61 )
        break;
      v23 = (const char *)&v67;
      if ( !(unsigned __int8)sub_54DE00((__int64)&s1, &v67) || (unsigned __int64)v61[1] <= 1 )
        break;
      v23 = *v61;
      v54 = (char *)haystack;
      if ( (_QWORD)v69 )
        v54 = s1;
      if ( strcmp(v54, v23) )
        break;
      if ( s1 )
      {
        *(_QWORD *)&v69 = 0;
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
      v27 = (void *)qalloc_or_throw(n.m128i_i64[0], v23);
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
    v31 = v69;
    ++a2[1];
    n.m128i_i64[0] = v31;
    if ( v61[1] )
    {
      v33 = (char *)haystack;
      v32 = *v61;
      if ( n.m128i_i64[0] )
LABEL_38:
        v33 = s1;
      if ( strcmp(v33, v32) )
      {
        v44 = *(_QWORD *)(n.m128i_i64[1] + 8);
        v45 = *(_QWORD *)n.m128i_i64[1];
        if ( *(_QWORD *)n.m128i_i64[1] != *(_QWORD *)n.m128i_i64[1] + 24 * v44 )
        {
          v58 = v21;
          v46 = *(_QWORD *)n.m128i_i64[1];
          v47 = v65;
          v59 = v9;
          v48 = *(_QWORD *)n.m128i_i64[1] + 24 * v44;
          v65 = *(_QWORD *)n.m128i_i64[1];
          v57 = v47;
          while ( 1 )
          {
            v32 = haystack;
            if ( *(_QWORD *)(v65 + 8) )
              v32 = *(const char **)v65;
            if ( !strcmp(v33, v32) )
              break;
            v65 += 24;
            if ( v48 == v65 )
            {
              v45 = v46;
              v9 = v59;
              v21 = v58;
              v65 = v57;
              goto LABEL_65;
            }
          }
          v49 = v48;
          v45 = v46;
          v50 = v65;
          v21 = v58;
          v65 = v57;
          v9 = v59;
          if ( v50 != v49 )
            goto LABEL_40;
        }
LABEL_65:
        v51 = nullptr;
        if ( n.m128i_i64[0] )
        {
          v56 = n.m128i_i64[0];
          v51 = (void *)qalloc_or_throw(n.m128i_i64[0], v32);
          memcpy(v51, s1, v56);
          v44 = *(_QWORD *)(n.m128i_i64[1] + 8);
          v45 = *(_QWORD *)n.m128i_i64[1];
        }
        if ( *(_QWORD *)(n.m128i_i64[1] + 16) < (unsigned __int64)(v44 + 1) )
        {
          v55 = (__int64 *)n.m128i_i64[1];
          v45 = qvector_reserve(n.m128i_i64[1], v45, v44 + 1, 24);
          *v55 = v45;
          v44 = v55[1];
        }
        v52 = _mm_loadl_epi64(&n);
        v53 = v45 + 24 * v44;
        *(_QWORD *)v53 = v51;
        *(__m128i *)(v53 + 8) = _mm_unpacklo_epi64(v52, v52);
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
      *(_QWORD *)&v69 = 0;
      qfree(s1);
    }
    ++v21;
  }
  while ( v63 );
  if ( v65 )
  {
LABEL_3:
    v10 = *(char **)v65;
    *(_QWORD *)v65 = v9;
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
    return v64;
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
  return v64;
}

