unsigned __int64 __fastcall sub_520890(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __m128i v7; // xmm0
  __int64 v8; // rax
  void *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rax
  __m128i v17; // xmm0
  __m128i v18; // xmm1
  __int64 v19; // rax
  void *v20; // rdi
  void *v21; // r12
  __m128i v22; // xmm0
  __m128i v23; // xmm1
  __int64 v24; // rax
  void *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __m128i v30; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v32; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v33; // [rsp+28h] [rbp-20h]

  v33 = __readfsqword(0x28u);
  v32 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v32.m128i_i64[0] = 5;
  strcpy((char *)ptr, "Name");
  v3 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v6 = v3 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v4 + 24 * v5 )
  {
    v21 = ptr;
    v22 = _mm_loadl_epi64(&v32);
    ptr = nullptr;
    v23 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
    v32 = 0;
    if ( v5 < v6 )
    {
      v30.m128i_i64[1] = v23.m128i_i64[0];
      v30.m128i_i64[0] = v22.m128i_i64[0];
      v28 = qvector_reserve(a2, v4, v3 + 1, 24);
      *a2 = v28;
      v4 = v28;
      v3 = a2[1];
      v23 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
      v22 = _mm_loadl_epi64(&v30);
    }
    v24 = v4 + 24 * v3;
    *(_QWORD *)v24 = v21;
    *(__m128i *)(v24 + 8) = _mm_unpacklo_epi64(v22, v23);
    v25 = ptr;
    ++a2[1];
    if ( v25 )
    {
      v32.m128i_i64[0] = 0;
      qfree(v25);
    }
  }
  else
  {
    if ( v5 < v6 )
    {
      v26 = qvector_reserve(a2, v4, v3 + 1, 24);
      *a2 = v26;
      v4 = v26;
      v3 = a2[1];
    }
    v7 = _mm_loadu_si128(&v32);
    v8 = v4 + 24 * v3;
    *(_QWORD *)v8 = ptr;
    *(__m128i *)(v8 + 8) = v7;
    ++a2[1];
  }
  v32 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
  v32.m128i_i64[0] = 9;
  strcpy((char *)ptr, "Language");
  v9 = ptr;
  v10 = a2[1];
  v11 = *a2;
  v12 = a2[2];
  v13 = v10 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v11 + 24 * v12 )
  {
    v17 = _mm_loadl_epi64(&v32);
    v18 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
    ptr = nullptr;
    v32 = 0;
    if ( v12 < v13 )
    {
      v30.m128i_i64[1] = v18.m128i_i64[0];
      v30.m128i_i64[0] = v17.m128i_i64[0];
      v29 = qvector_reserve(a2, v11, v10 + 1, 24);
      *a2 = v29;
      v11 = v29;
      v10 = a2[1];
      v18 = _mm_loadl_epi64((const __m128i *)&v30.m128i_u64[1]);
      v17 = _mm_loadl_epi64(&v30);
    }
    v19 = v11 + 24 * v10;
    *(_QWORD *)v19 = v9;
    *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v17, v18);
    v20 = ptr;
    ++a2[1];
    if ( v20 )
    {
      v32.m128i_i64[0] = 0;
      qfree(v20);
    }
  }
  else
  {
    if ( v12 < v13 )
    {
      v27 = qvector_reserve(a2, v11, v10 + 1, 24);
      *a2 = v27;
      v11 = v27;
      v9 = ptr;
      v10 = a2[1];
    }
    v14 = _mm_loadu_si128(&v32);
    v15 = v11 + 24 * v10;
    *(_QWORD *)v15 = v9;
    *(__m128i *)(v15 + 8) = v14;
    ++a2[1];
  }
  return v33 - __readfsqword(0x28u);
}
