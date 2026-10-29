unsigned __int64 __fastcall sub_623090(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __m128i v7; // xmm0
  __int64 v8; // rax
  _WORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  __int64 v15; // rax
  void *v17; // rbp
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rax
  void *v21; // rdi
  void *v22; // r12
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __m128i v31; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v33; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v34; // [rsp+28h] [rbp-20h]

  v34 = __readfsqword(0x28u);
  v33 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v33.m128i_i64[0] = 5;
  strcpy((char *)ptr, "Name");
  v3 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  v6 = v3 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v4 + 24 * v5 )
  {
    v22 = ptr;
    v23 = _mm_loadl_epi64(&v33);
    ptr = nullptr;
    v24 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
    v33 = 0;
    if ( v5 < v6 )
    {
      v31.m128i_i64[1] = v24.m128i_i64[0];
      v31.m128i_i64[0] = v23.m128i_i64[0];
      v29 = qvector_reserve(a2, v4, v3 + 1, 24);
      *a2 = v29;
      v4 = v29;
      v3 = a2[1];
      v24 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v23 = _mm_loadl_epi64(&v31);
    }
    v25 = v4 + 24 * v3;
    *(_QWORD *)v25 = v22;
    *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64(v23, v24);
    v26 = ptr;
    ++a2[1];
    if ( v26 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v26);
    }
  }
  else
  {
    if ( v5 < v6 )
    {
      v27 = qvector_reserve(a2, v4, v3 + 1, 24);
      *a2 = v27;
      v4 = v27;
      v3 = a2[1];
    }
    v7 = _mm_loadu_si128(&v33);
    v8 = v4 + 24 * v3;
    *(_QWORD *)v8 = ptr;
    *(__m128i *)(v8 + 8) = v7;
    ++a2[1];
  }
  v33 = 0;
  ptr = nullptr;
  v9 = (_WORD *)qvector_reserve(&ptr, 0, 7, 1);
  ptr = v9;
  v33.m128i_i64[0] = 7;
  *(_DWORD *)v9 = 1969516365;
  v9[2] = 25964;
  *((_BYTE *)ptr + 6) = 0;
  v10 = a2[1];
  v11 = *a2;
  v12 = a2[2];
  v13 = v10 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v11 + 24 * v12 )
  {
    v17 = ptr;
    v18 = _mm_loadl_epi64(&v33);
    ptr = nullptr;
    v19 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
    v33 = 0;
    if ( v12 < v13 )
    {
      v31.m128i_i64[1] = v19.m128i_i64[0];
      v31.m128i_i64[0] = v18.m128i_i64[0];
      v30 = qvector_reserve(a2, v11, v10 + 1, 24);
      *a2 = v30;
      v11 = v30;
      v10 = a2[1];
      v19 = _mm_loadl_epi64((const __m128i *)&v31.m128i_u64[1]);
      v18 = _mm_loadl_epi64(&v31);
    }
    v20 = v11 + 24 * v10;
    *(_QWORD *)v20 = v17;
    *(__m128i *)(v20 + 8) = _mm_unpacklo_epi64(v18, v19);
    v21 = ptr;
    ++a2[1];
    if ( v21 )
    {
      v33.m128i_i64[0] = 0;
      qfree(v21);
    }
  }
  else
  {
    if ( v12 < v13 )
    {
      v28 = qvector_reserve(a2, v11, v10 + 1, 24);
      *a2 = v28;
      v11 = v28;
      v10 = a2[1];
    }
    v14 = _mm_loadu_si128(&v33);
    v15 = v11 + 24 * v10;
    *(_QWORD *)v15 = ptr;
    *(__m128i *)(v15 + 8) = v14;
    ++a2[1];
  }
  return v34 - __readfsqword(0x28u);
}
