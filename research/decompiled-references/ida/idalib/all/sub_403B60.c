unsigned __int64 __fastcall sub_403B60(__int64 a1, __int64 *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  _BYTE *v10; // rax
  void *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __m128i v16; // xmm0
  __int64 v17; // rax
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  __int64 v21; // rax
  void *v22; // rdi
  void *v23; // r12
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
  v3 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v3;
  v34.m128i_i64[0] = 6;
  *(_DWORD *)v3 = 1685024361;
  v3[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = v4 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v5 + 24 * v6 )
  {
    v23 = ptr;
    v24 = _mm_loadl_epi64(&v34);
    ptr = nullptr;
    v25 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
    v34 = 0;
    if ( v6 < v7 )
    {
      v32.m128i_i64[1] = v25.m128i_i64[0];
      v32.m128i_i64[0] = v24.m128i_i64[0];
      v30 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v30;
      v5 = v30;
      v4 = a2[1];
      v25 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
      v24 = _mm_loadl_epi64(&v32);
    }
    v26 = v5 + 24 * v4;
    *(_QWORD *)v26 = v23;
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
    if ( v6 < v7 )
    {
      v28 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v28;
      v5 = v28;
      v4 = a2[1];
    }
    v8 = _mm_loadu_si128(&v34);
    v9 = v5 + 24 * v4;
    *(_QWORD *)v9 = ptr;
    *(__m128i *)(v9 + 8) = v8;
    ++a2[1];
  }
  v34 = 0;
  ptr = nullptr;
  v10 = (_BYTE *)qvector_reserve(&ptr, 0, 10, 1);
  ptr = v10;
  v34.m128i_i64[0] = 10;
  *(_QWORD *)v10 = 0x726F746365726944LL;
  v10[8] = 121;
  v11 = ptr;
  *((_BYTE *)ptr + 9) = 0;
  v12 = a2[1];
  v13 = *a2;
  v14 = a2[2];
  v15 = v12 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v13 + 24 * v14 )
  {
    v19 = _mm_loadl_epi64(&v34);
    v20 = _mm_loadl_epi64((const __m128i *)&v34.m128i_u64[1]);
    ptr = nullptr;
    v34 = 0;
    if ( v14 < v15 )
    {
      v32.m128i_i64[1] = v20.m128i_i64[0];
      v32.m128i_i64[0] = v19.m128i_i64[0];
      v31 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v31;
      v13 = v31;
      v12 = a2[1];
      v20 = _mm_loadl_epi64((const __m128i *)&v32.m128i_u64[1]);
      v19 = _mm_loadl_epi64(&v32);
    }
    v21 = v13 + 24 * v12;
    *(_QWORD *)v21 = v11;
    *(__m128i *)(v21 + 8) = _mm_unpacklo_epi64(v19, v20);
    v22 = ptr;
    ++a2[1];
    if ( v22 )
    {
      v34.m128i_i64[0] = 0;
      qfree(v22);
    }
  }
  else
  {
    if ( v14 < v15 )
    {
      v29 = qvector_reserve(a2, v13, v12 + 1, 24);
      *a2 = v29;
      v13 = v29;
      v11 = ptr;
      v12 = a2[1];
    }
    v16 = _mm_loadu_si128(&v34);
    v17 = v13 + 24 * v12;
    *(_QWORD *)v17 = v11;
    *(__m128i *)(v17 + 8) = v16;
    ++a2[1];
  }
  return v35 - __readfsqword(0x28u);
}
