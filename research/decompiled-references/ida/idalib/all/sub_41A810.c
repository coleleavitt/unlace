unsigned __int64 __fastcall sub_41A810(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i *v10; // rax
  __m128i si128; // xmm0
  void *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  __m128i v17; // xmm0
  __int64 v18; // rax
  __m128i v20; // xmm0
  __m128i v21; // xmm1
  __int64 v22; // rax
  void *v23; // rdi
  void *v24; // r12
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 v27; // rax
  void *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __m128i v33; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v35; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v36; // [rsp+28h] [rbp-20h]

  v36 = __readfsqword(0x28u);
  v35 = 0;
  ptr = nullptr;
  v3 = (_DWORD *)qvector_reserve(&ptr, 0, 8, 1);
  ptr = v3;
  v35.m128i_i64[0] = 8;
  *v3 = 1919181889;
  *(_DWORD *)((char *)v3 + 3) = 1936942450;
  *((_BYTE *)ptr + 7) = 0;
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = v4 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v5 + 24 * v6 )
  {
    v24 = ptr;
    v25 = _mm_loadl_epi64(&v35);
    ptr = nullptr;
    v26 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
    v35 = 0;
    if ( v6 < v7 )
    {
      v33.m128i_i64[1] = v26.m128i_i64[0];
      v33.m128i_i64[0] = v25.m128i_i64[0];
      v31 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v31;
      v5 = v31;
      v4 = a2[1];
      v26 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
      v25 = _mm_loadl_epi64(&v33);
    }
    v27 = v5 + 24 * v4;
    *(_QWORD *)v27 = v24;
    *(__m128i *)(v27 + 8) = _mm_unpacklo_epi64(v25, v26);
    v28 = ptr;
    ++a2[1];
    if ( v28 )
    {
      v35.m128i_i64[0] = 0;
      qfree(v28);
    }
  }
  else
  {
    if ( v6 < v7 )
    {
      v29 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v29;
      v5 = v29;
      v4 = a2[1];
    }
    v8 = _mm_loadu_si128(&v35);
    v9 = v5 + 24 * v4;
    *(_QWORD *)v9 = ptr;
    *(__m128i *)(v9 + 8) = v8;
    ++a2[1];
  }
  v35 = 0;
  ptr = nullptr;
  v10 = (__m128i *)qvector_reserve(&ptr, 0, 18, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7940);
  ptr = v10;
  v35.m128i_i64[0] = 18;
  v10[1].m128i_i8[0] = 110;
  *v10 = si128;
  v12 = ptr;
  *((_BYTE *)ptr + 17) = 0;
  v13 = a2[1];
  v14 = *a2;
  v15 = a2[2];
  v16 = v13 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v14 + 24 * v15 )
  {
    v20 = _mm_loadl_epi64(&v35);
    v21 = _mm_loadl_epi64((const __m128i *)&v35.m128i_u64[1]);
    ptr = nullptr;
    v35 = 0;
    if ( v15 < v16 )
    {
      v33.m128i_i64[1] = v21.m128i_i64[0];
      v33.m128i_i64[0] = v20.m128i_i64[0];
      v32 = qvector_reserve(a2, v14, v13 + 1, 24);
      *a2 = v32;
      v14 = v32;
      v13 = a2[1];
      v21 = _mm_loadl_epi64((const __m128i *)&v33.m128i_u64[1]);
      v20 = _mm_loadl_epi64(&v33);
    }
    v22 = v14 + 24 * v13;
    *(_QWORD *)v22 = v12;
    *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v20, v21);
    v23 = ptr;
    ++a2[1];
    if ( v23 )
    {
      v35.m128i_i64[0] = 0;
      qfree(v23);
    }
  }
  else
  {
    if ( v15 < v16 )
    {
      v30 = qvector_reserve(a2, v14, v13 + 1, 24);
      *a2 = v30;
      v14 = v30;
      v12 = ptr;
      v13 = a2[1];
    }
    v17 = _mm_loadu_si128(&v35);
    v18 = v14 + 24 * v13;
    *(_QWORD *)v18 = v12;
    *(__m128i *)(v18 + 8) = v17;
    ++a2[1];
  }
  return v36 - __readfsqword(0x28u);
}
