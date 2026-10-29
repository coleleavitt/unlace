unsigned __int64 __fastcall sub_5080E0(__int64 *a1, __int64 a2)
{
  const char *v2; // r12
  void *v4; // r12
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rax
  void *v8; // rdi
  char *v9; // rax
  char *v10; // rbx
  const char *v11; // r13
  size_t v12; // r15
  __int64 v13; // r8
  void *v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // r13
  size_t v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  void *v31; // rbx
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  __int64 v34; // rax
  void *v35; // rdi
  __m128i v36; // xmm0
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // [rsp+0h] [rbp-68h] BYREF
  void *dest; // [rsp+10h] [rbp-58h] BYREF
  __m128i v42; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+28h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) )
    return v43 - __readfsqword(0x28u);
  v2 = *(const char **)a2;
  if ( !**(_BYTE **)a2 )
    return v43 - __readfsqword(0x28u);
  while ( 1 )
  {
    v9 = strchr(v2, 10);
    v10 = v9;
    if ( !v9 )
      break;
    v11 = v9 + 1;
    if ( v9 == v2 )
    {
      dest = nullptr;
      v42 = 0;
      goto LABEL_17;
    }
    if ( *(v9 - 1) == 13 )
    {
      dest = nullptr;
      v42 = 0;
      v12 = v9 - 1 - v2;
      if ( v9 - 1 == v2 )
        goto LABEL_17;
      v13 = v9 - v2;
      if ( v12 != -1 )
      {
LABEL_25:
        v40.m128i_i64[0] = v13;
        dest = (void *)qvector_reserve(&dest, 0, v13, 1);
        v13 = v40.m128i_i64[0];
        v14 = dest;
        goto LABEL_16;
      }
    }
    else
    {
      dest = nullptr;
      v12 = v9 - v2;
      v42 = 0;
      v13 = v9 - v2 + 1;
      if ( v9 - v2 != -1 )
        goto LABEL_25;
    }
    v14 = dest;
LABEL_16:
    v42.m128i_i64[0] = v13;
    memmove(v14, v2, v12);
    *((_BYTE *)dest + v12) = 0;
LABEL_17:
    v23 = a1[1];
    v22 = *a1;
    v15 = a1[2];
    v16 = v23 + 1;
    if ( (unsigned __int64)&dest < *a1 || (unsigned __int64)&dest >= v22 + 24 * v15 )
    {
      if ( v15 < v16 )
      {
        v20 = qvector_reserve(a1, v22, v23 + 1, 24);
        *a1 = v20;
        v22 = v20;
        v23 = a1[1];
      }
      v17 = _mm_loadu_si128(&v42);
      v18 = v22 + 24 * v23;
      *(_QWORD *)v18 = dest;
      *(__m128i *)(v18 + 8) = v17;
      ++a1[1];
      if ( !v10[1] )
        return v43 - __readfsqword(0x28u);
    }
    else
    {
      v4 = dest;
      v5 = _mm_loadl_epi64(&v42);
      dest = nullptr;
      v6 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
      v42 = 0;
      if ( v15 < v16 )
      {
        v40.m128i_i64[1] = v6.m128i_i64[0];
        v40.m128i_i64[0] = v5.m128i_i64[0];
        v21 = qvector_reserve(a1, v22, v23 + 1, 24);
        *a1 = v21;
        v22 = v21;
        v23 = a1[1];
        v6 = _mm_loadl_epi64((const __m128i *)&v40.m128i_u64[1]);
        v5 = _mm_loadl_epi64(&v40);
      }
      v7 = v22 + 24 * v23;
      *(_QWORD *)v7 = v4;
      *(__m128i *)(v7 + 8) = _mm_unpacklo_epi64(v5, v6);
      v8 = dest;
      ++a1[1];
      if ( v8 )
      {
        v42.m128i_i64[0] = 0;
        qfree(v8);
      }
      if ( !v10[1] )
        return v43 - __readfsqword(0x28u);
    }
    v2 = v11;
  }
  dest = nullptr;
  v42 = 0;
  if ( v2 )
  {
    v24 = strlen(v2);
    v25 = v24 + 1;
    v26 = v24;
    dest = (void *)qvector_reserve(&dest, 0, v24 + 1, 1);
    v42.m128i_i64[0] = v25;
    memmove(dest, v2, v26);
    *((_BYTE *)dest + v26) = 0;
  }
  v27 = a1[1];
  v28 = *a1;
  v29 = a1[2];
  v30 = v27 + 1;
  if ( (unsigned __int64)&dest < *a1 || (unsigned __int64)&dest >= v28 + 24 * v29 )
  {
    if ( v29 < v30 )
    {
      v38 = qvector_reserve(a1, v28, v27 + 1, 24);
      *a1 = v38;
      v28 = v38;
      v27 = a1[1];
    }
    v36 = _mm_loadu_si128(&v42);
    v37 = v28 + 24 * v27;
    *(_QWORD *)v37 = dest;
    *(__m128i *)(v37 + 8) = v36;
    ++a1[1];
  }
  else
  {
    v31 = dest;
    v32 = _mm_loadl_epi64(&v42);
    dest = nullptr;
    v33 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
    v42 = 0;
    if ( v29 < v30 )
    {
      v40.m128i_i64[1] = v33.m128i_i64[0];
      v40.m128i_i64[0] = v32.m128i_i64[0];
      v39 = qvector_reserve(a1, v28, v27 + 1, 24);
      *a1 = v39;
      v28 = v39;
      v27 = a1[1];
      v33 = _mm_loadl_epi64((const __m128i *)&v40.m128i_u64[1]);
      v32 = _mm_loadl_epi64(&v40);
    }
    v34 = v28 + 24 * v27;
    *(_QWORD *)v34 = v31;
    *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v32, v33);
    v35 = dest;
    ++a1[1];
    if ( v35 )
    {
      v42.m128i_i64[0] = 0;
      qfree(v35);
    }
  }
  return v43 - __readfsqword(0x28u);
}

