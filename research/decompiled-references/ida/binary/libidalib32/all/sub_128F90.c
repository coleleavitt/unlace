__int64 __fastcall sub_128F90(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rbx
  const char *v4; // rbp
  size_t v5; // rbx
  char *v6; // rax
  signed __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rax
  int v10; // r12d
  const char *v11; // rsi
  char *v12; // rbp
  size_t v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  const char *v19; // rbp
  size_t v20; // r14
  char *v21; // rax
  signed __int64 v22; // rdx
  void *v23; // rbp
  __int64 v24; // rax
  void *v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rax
  void *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  void *src; // [rsp+10h] [rbp-78h]
  size_t v36; // [rsp+18h] [rbp-70h]
  char *s1; // [rsp+30h] [rbp-58h]
  size_t n[2]; // [rsp+38h] [rbp-50h]
  size_t na; // [rsp+38h] [rbp-50h]

  sub_128060(a1);
  v1 = sub_9E220();
  result = 0;
  if ( v1 != 1 )
    return result;
  v3 = a1[13];
  if ( v3 )
  {
    v4 = (const char *)a1[12];
    v5 = v3 - 1;
    v6 = strchr(v4, 45);
    src = nullptr;
    v36 = 0;
    v7 = v6 - v4;
    if ( v5 <= v6 - v4 )
      v7 = v5;
    if ( v6 )
      v5 = v7;
    if ( v5 )
    {
      src = (void *)qvector_reserve();
      v36 = v5 + 1;
      memmove(src, v4, v5);
      *((_BYTE *)src + v5) = 0;
    }
  }
  else
  {
    src = nullptr;
    v36 = 0;
  }
  v8 = 0;
  v9 = 0;
  v10 = -1;
  if ( a1[1] )
  {
    while ( 1 )
    {
      v17 = *a1 + 24 * v9;
      v18 = *(_QWORD *)(v17 + 8);
      if ( !v18 )
        break;
      v19 = *(const char **)v17;
      v20 = v18 - 1;
      v21 = strchr(*(const char **)v17, 45);
      s1 = nullptr;
      *(_OWORD *)n = 0;
      v22 = v21 - v19;
      if ( v20 <= v21 - v19 )
        v22 = v20;
      if ( v21 )
        v20 = v22;
      if ( !v20 )
        goto LABEL_12;
      s1 = (char *)qvector_reserve();
      na = v20 + 1;
      memmove(s1, v19, v20);
      s1[v20] = 0;
      v13 = v20 + 1;
      v12 = s1;
      if ( v36 )
      {
        v11 = (const char *)src;
        if ( na )
        {
LABEL_30:
          if ( !strcmp(s1, v11) )
            v10 = v8;
          if ( v13 != 1 )
            goto LABEL_33;
LABEL_15:
          if ( n[1] <= 0xD )
            goto LABEL_37;
          goto LABEL_16;
        }
        goto LABEL_14;
      }
      v11 = ::s1;
      if ( na )
        goto LABEL_30;
LABEL_36:
      v10 = v8;
      if ( n[1] <= 0xD )
      {
LABEL_37:
        s1 = (char *)qvector_reserve();
        v12 = s1;
      }
LABEL_16:
      qmemcpy(v12, "<generic abi>", 13);
      s1[13] = 0;
      v13 = 14;
LABEL_33:
      v23 = (void *)qalloc_or_throw();
      memcpy(v23, s1, v13);
      v14 = a1[4];
      v15 = a1[3];
      if ( a1[5] < (unsigned __int64)(v14 + 1) )
      {
        v24 = qvector_reserve();
        a1[3] = v24;
        v14 = a1[4];
        v15 = v24;
      }
      v16 = v15 + 24 * v14;
      *(_QWORD *)v16 = v23;
      *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
      ++a1[4];
      if ( s1 )
        qfree();
      v9 = ++v8;
      if ( v8 >= (unsigned __int64)a1[1] )
      {
        if ( v10 != -1 )
          goto LABEL_39;
        goto LABEL_43;
      }
    }
    s1 = nullptr;
    *(_OWORD *)n = 0;
LABEL_12:
    if ( !v36 )
    {
      v10 = v8;
      v12 = nullptr;
      goto LABEL_15;
    }
    v11 = (const char *)src;
    v12 = nullptr;
LABEL_14:
    if ( *v11 )
      goto LABEL_15;
    goto LABEL_36;
  }
LABEL_43:
  v10 = *((_DWORD *)a1 + 8);
  v25 = nullptr;
  if ( v36 )
  {
    v25 = (void *)qalloc_or_throw();
    memcpy(v25, src, v36);
  }
  v26 = a1[1];
  v27 = *a1;
  if ( a1[2] < (unsigned __int64)(v26 + 1) )
  {
    v34 = qvector_reserve();
    *a1 = v34;
    v26 = a1[1];
    v27 = v34;
  }
  v28 = v27 + 24 * v26;
  *(_QWORD *)v28 = v25;
  v29 = nullptr;
  *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
  ++a1[1];
  if ( v36 )
  {
    v29 = (void *)qalloc_or_throw();
    memcpy(v29, src, v36);
  }
  v30 = a1[4];
  v31 = a1[3];
  if ( a1[5] < (unsigned __int64)(v30 + 1) )
  {
    v33 = qvector_reserve();
    a1[3] = v33;
    v30 = a1[4];
    v31 = v33;
  }
  v32 = v31 + 24 * v30;
  *(_QWORD *)v32 = v29;
  *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64((__m128i)v36, (__m128i)v36);
  ++a1[4];
LABEL_39:
  sub_128D50((__int64)a1, v10);
  if ( src )
    qfree();
  return 1;
}

