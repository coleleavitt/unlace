__int64 __fastcall sub_477A50(__int64 *a1, __int64 a2)
{
  const char *v3; // r15
  void *v5; // r15
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __int64 v8; // rax
  void *v9; // rdi
  char *v10; // rax
  char *v11; // rbx
  const char *v12; // r12
  size_t v13; // r14
  __int64 v14; // r9
  void *v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  size_t v24; // rax
  __int64 v25; // r12
  size_t v26; // rbx
  unsigned __int8 v27; // [rsp+Fh] [rbp-69h]
  __m128i v28; // [rsp+10h] [rbp-68h] BYREF
  void *dest; // [rsp+20h] [rbp-58h] BYREF
  __m128i v30; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v31; // [rsp+38h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a2 + 8) )
    return 0;
  v3 = *(const char **)a2;
  if ( !**(_BYTE **)a2 )
    return 0;
  v27 = 0;
  while ( 1 )
  {
    v10 = strchr(v3, 10);
    v11 = v10;
    if ( !v10 )
      break;
    v12 = v10 + 1;
    if ( v10 == v3 )
    {
      dest = nullptr;
      v30 = 0;
      goto LABEL_19;
    }
    if ( *(v10 - 1) == 13 )
    {
      v27 = 1;
      v30 = 0;
      dest = nullptr;
      v13 = v10 - 1 - v3;
      if ( v10 - 1 == v3 )
        goto LABEL_19;
      v14 = v10 - v3;
      if ( v13 != -1 )
      {
LABEL_26:
        v28.m128i_i64[0] = v14;
        dest = (void *)qvector_reserve(&dest, 0, v14, 1);
        v14 = v28.m128i_i64[0];
        v15 = dest;
        goto LABEL_18;
      }
    }
    else
    {
      dest = nullptr;
      v13 = v10 - v3;
      v30 = 0;
      v14 = v10 - v3 + 1;
      if ( v10 - v3 != -1 )
        goto LABEL_26;
    }
    v15 = dest;
LABEL_18:
    v30.m128i_i64[0] = v14;
    memmove(v15, v3, v13);
    *((_BYTE *)dest + v13) = 0;
LABEL_19:
    v23 = a1[1];
    v22 = *a1;
    v16 = a1[2];
    v17 = v23 + 1;
    if ( (unsigned __int64)&dest < *a1 || (unsigned __int64)&dest >= v22 + 24 * v16 )
    {
      if ( v16 < v17 )
      {
        v20 = qvector_reserve(a1, v22, v23 + 1, 24);
        *a1 = v20;
        v22 = v20;
        v23 = a1[1];
      }
      v18 = _mm_loadu_si128(&v30);
      v19 = v22 + 24 * v23;
      *(_QWORD *)v19 = dest;
      *(__m128i *)(v19 + 8) = v18;
      ++a1[1];
    }
    else
    {
      v5 = dest;
      v6 = _mm_loadl_epi64(&v30);
      dest = nullptr;
      v7 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
      v30 = 0;
      if ( v16 < v17 )
      {
        v28.m128i_i64[1] = v7.m128i_i64[0];
        v28.m128i_i64[0] = v6.m128i_i64[0];
        v21 = qvector_reserve(a1, v22, v23 + 1, 24);
        *a1 = v21;
        v22 = v21;
        v7 = _mm_loadl_epi64((const __m128i *)&v28.m128i_u64[1]);
        v23 = a1[1];
        v6 = _mm_loadl_epi64(&v28);
      }
      v8 = v22 + 24 * v23;
      *(_QWORD *)v8 = v5;
      *(__m128i *)(v8 + 8) = _mm_unpacklo_epi64(v6, v7);
      v9 = dest;
      ++a1[1];
      if ( v9 )
      {
        v30.m128i_i64[0] = 0;
        qfree(v9);
      }
    }
    if ( !v11[1] )
      return v27;
    v3 = v12;
  }
  dest = nullptr;
  v30 = 0;
  if ( v3 )
  {
    v24 = strlen(v3);
    v25 = v24 + 1;
    v26 = v24;
    dest = (void *)qvector_reserve(&dest, 0, v24 + 1, 1);
    v30.m128i_i64[0] = v25;
    memmove(dest, v3, v26);
    *((_BYTE *)dest + v26) = 0;
  }
  sub_464BE0(a1, (unsigned __int64)&dest);
  if ( dest )
  {
    v30.m128i_i64[0] = 0;
    qfree(dest);
  }
  return v27;
}

