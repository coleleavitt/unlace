unsigned __int64 __fastcall sub_520C30(__int64 a1, __int64 *a2)
{
  _BYTE *v3; // rax
  void *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __m128i v9; // xmm0
  __int64 v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  void *v19; // rbp
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  void *v23; // rdi
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __int64 v26; // rax
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __m128i v32; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v34; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v35; // [rsp+28h] [rbp-20h]

  v35 = __readfsqword(0x28u);
  v34 = 0;
  ptr = nullptr;
  v3 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
  ptr = v3;
  v34.m128i_i64[0] = 10;
  *(_QWORD *)v3 = 0x7475626972747441LL;
  v3[8] = 101;
  v4 = ptr;
  *((_BYTE *)ptr + 9) = 0;
  v5 = a2[1];
  v6 = *a2;
  v7 = a2[2];
  v8 = v5 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v6 + 24 * v7 )
  {
    v24 = _mm_loadl_epi64(&v34);
    v25 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
    ptr = nullptr;
    v34 = 0;
    if ( v7 < v8 )
    {
      v32.m128i_i64[1] = v25.m128i_i64[0];
      v32.m128i_i64[0] = v24.m128i_i64[0];
      v30 = qvector_reserve(a2, v6, v5 + 1, 24);
      *a2 = v30;
      v6 = v30;
      v5 = a2[1];
      v25 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
      v24 = _mm_loadl_epi64(&v32);
    }
    v26 = v6 + 24 * v5;
    *(_QWORD *)v26 = v4;
    *(__m128i *)(v26 + 8) = _mm_unpacklo_epi64(v24, v25);
    v27 = ptr;
    ++a2[1];
    if ( v27 )
    {
      v34.m128i_i64[0] = 0;
      qfree(v27);
    }
  }
  else
  {
    if ( v7 < v8 )
    {
      v28 = qvector_reserve(a2, v6, v5 + 1, 24);
      *a2 = v28;
      v6 = v28;
      v4 = ptr;
      v5 = a2[1];
    }
    v9 = _mm_loadu_si128(&v34);
    v10 = v6 + 24 * v5;
    *(_QWORD *)v10 = v4;
    *(__m128i *)(v10 + 8) = v9;
    ++a2[1];
  }
  v34 = 0;
  ptr = nullptr;
  v11 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v11;
  v34.m128i_i64[0] = 6;
  *(_DWORD *)v11 = 1970037078;
  v11[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  v12 = a2[1];
  v13 = *a2;
  v14 = a2[2];
  v15 = v12 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v13 + 24 * v14 )
  {
    v19 = ptr;
    v20 = _mm_loadl_epi64(&v34);
    ptr = nullptr;
    v21 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
    v34 = 0;
    if ( v14 < v15 )
    {
      v32.m128i_i64[1] = v21.m128i_i64[0];
      v32.m128i_i64[0] = v20.m128i_i64[0];
      v31 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v31;
      v13 = v31;
      v12 = a2[1];
      v21 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
      v20 = _mm_loadl_epi64(&v32);
    }
    v22 = v13 + 24 * v12;
    *(_QWORD *)v22 = v19;
    *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
    v23 = ptr;
    ++a2[1];
    if ( v23 )
    {
      v34.m128i_i64[0] = 0;
      qfree(v23);
    }
  }
  else
  {
    if ( v14 < v15 )
    {
      v29 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v29;
      v13 = v29;
      v12 = a2[1];
    }
    v16 = _mm_loadu_si128(&v34);
    v17 = v13 + 24 * v12;
    *(_QWORD *)v17 = ptr;
    *(__m128i *)(v17 + 8) = v16;
    ++a2[1];
  }
  return v35 - __readfsqword(0x28u);
}
