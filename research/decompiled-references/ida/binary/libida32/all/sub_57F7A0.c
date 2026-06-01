unsigned __int64 __fastcall sub_57F7A0(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rax
  void *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  void *v28; // rdi
  void *v29; // r12
  __m128i v30; // xmm0
  __m128i v31; // xmm1
  __int64 v32; // rax
  void *v33; // rdi
  void *v34; // r12
  __m128i v35; // xmm0
  __m128i v36; // xmm1
  __int64 v37; // rax
  void *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v47; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v48; // [rsp+28h] [rbp-20h]

  v48 = __readfsqword(0x28u);
  v47 = 0;
  ptr = nullptr;
  v3 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
  ptr = v3;
  v47.m128i_i64[0] = 8;
  *v3 = 1919181889;
  *(_DWORD *)((char *)v3 + 3) = 1936942450;
  *((_BYTE *)ptr + 7) = 0;
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = v4 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v5 + 24 * v6 )
  {
    v34 = ptr;
    v35 = _mm_loadl_epi64(&v47);
    ptr = nullptr;
    v36 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
    v47 = 0;
    if ( v6 < v7 )
    {
      v45.m128i_i64[1] = v36.m128i_i64[0];
      v45.m128i_i64[0] = v35.m128i_i64[0];
      v42 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v42;
      v5 = v42;
      v4 = a2[1];
      v36 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
      v35 = _mm_loadl_epi64(&v45);
    }
    v37 = v5 + 24 * v4;
    *(_QWORD *)v37 = v34;
    *(__m128i *)(v37 + 8) = _mm_unpacklo_epi64(v35, v36);
    v38 = ptr;
    ++a2[1];
    if ( v38 )
    {
      v47.m128i_i64[0] = 0;
      qfree(v38);
    }
  }
  else
  {
    if ( v6 < v7 )
    {
      v41 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v41;
      v5 = v41;
      v4 = a2[1];
    }
    v8 = _mm_loadu_si128(&v47);
    v9 = v5 + 24 * v4;
    *(_QWORD *)v9 = ptr;
    *(__m128i *)(v9 + 8) = v8;
    ++a2[1];
  }
  v47 = 0;
  ptr = nullptr;
  v10 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v10;
  v47.m128i_i64[0] = 6;
  *(_DWORD *)v10 = 1970037078;
  v10[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  v11 = a2[1];
  v12 = *a2;
  v13 = a2[2];
  v14 = v11 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v12 + 24 * v13 )
  {
    v29 = ptr;
    v30 = _mm_loadl_epi64(&v47);
    ptr = nullptr;
    v31 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
    v47 = 0;
    if ( v13 < v14 )
    {
      v45.m128i_i64[1] = v31.m128i_i64[0];
      v45.m128i_i64[0] = v30.m128i_i64[0];
      v43 = qvector_reserve(a2, v12, v11 + 1, 24);
      *a2 = v43;
      v12 = v43;
      v11 = a2[1];
      v31 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
      v30 = _mm_loadl_epi64(&v45);
    }
    v32 = v12 + 24 * v11;
    *(_QWORD *)v32 = v29;
    *(__m128i *)(v32 + 8) = _mm_unpacklo_epi64(v30, v31);
    v33 = ptr;
    ++a2[1];
    if ( v33 )
    {
      v47.m128i_i64[0] = 0;
      qfree(v33);
    }
  }
  else
  {
    if ( v13 < v14 )
    {
      v40 = qvector_reserve(a2, v12, v11 + 1, 24);
      *a2 = v40;
      v12 = v40;
      v11 = a2[1];
    }
    v15 = _mm_loadu_si128(&v47);
    v16 = v12 + 24 * v11;
    *(_QWORD *)v16 = ptr;
    *(__m128i *)(v16 + 8) = v15;
    ++a2[1];
  }
  v47 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
  v47.m128i_i64[0] = 9;
  strcpy((char *)ptr, "Original");
  v17 = ptr;
  v18 = a2[1];
  v19 = *a2;
  v20 = a2[2];
  v21 = v18 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v19 + 24 * v20 )
  {
    v25 = _mm_loadl_epi64(&v47);
    v26 = _mm_loadl_epi64((const __m128i *)&v47.m128i_u64[1]);
    ptr = nullptr;
    v47 = 0;
    if ( v20 < v21 )
    {
      v45.m128i_i64[1] = v26.m128i_i64[0];
      v45.m128i_i64[0] = v25.m128i_i64[0];
      v44 = qvector_reserve(a2, v19, v18 + 1, 24);
      *a2 = v44;
      v19 = v44;
      v18 = a2[1];
      v26 = _mm_loadl_epi64((const __m128i *)&v45.m128i_u64[1]);
      v25 = _mm_loadl_epi64(&v45);
    }
    v27 = v19 + 24 * v18;
    *(_QWORD *)v27 = v17;
    *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
    v28 = ptr;
    ++a2[1];
    if ( v28 )
    {
      v47.m128i_i64[0] = 0;
      qfree(v28);
    }
  }
  else
  {
    if ( v20 < v21 )
    {
      v39 = qvector_reserve(a2, v19, v18 + 1, 24);
      *a2 = v39;
      v19 = v39;
      v17 = ptr;
      v18 = a2[1];
    }
    v22 = _mm_loadu_si128(&v47);
    v23 = v19 + 24 * v18;
    *(_QWORD *)v23 = v17;
    *(__m128i *)(v23 + 8) = v22;
    ++a2[1];
  }
  return v48 - __readfsqword(0x28u);
}

