__int64 __fastcall sub_7637C0(__int64 *a1, const char *a2)
{
  __int64 v2; // r13
  size_t v4; // rax
  __int64 v5; // r15
  size_t v6; // r12
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __m128i v11; // xmm0
  __int64 v12; // rax
  void *v14; // rbp
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rax
  void *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-68h] BYREF
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __m128i v23; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v2 = a1[1];
  v24 = __readfsqword(0x28u);
  v23 = 0;
  ptr = nullptr;
  if ( a2 )
  {
    v4 = strlen(a2);
    v5 = v4 + 1;
    v6 = v4;
    ptr = (void *)qvector_reserve(&ptr, 0, v4 + 1, 1);
    v23.m128i_i64[0] = v5;
    memmove(ptr, a2, v6);
    *((_BYTE *)ptr + v6) = 0;
    v7 = a1[1];
  }
  else
  {
    v7 = v2;
  }
  v8 = *a1;
  v9 = a1[2];
  v10 = v7 + 1;
  if ( (unsigned __int64)&ptr >= *a1 && (unsigned __int64)&ptr < v8 + 24 * v9 )
  {
    v14 = ptr;
    v15 = _mm_loadl_epi64(&v23);
    ptr = nullptr;
    v16 = _mm_loadl_epi64((const __m128i *)&v23.m128i_u64[1]);
    v23 = 0;
    if ( v9 < v10 )
    {
      v21.m128i_i64[1] = v16.m128i_i64[0];
      v21.m128i_i64[0] = v15.m128i_i64[0];
      v20 = qvector_reserve(a1, v8, v7 + 1, 24);
      *a1 = v20;
      v8 = v20;
      v7 = a1[1];
      v16 = _mm_loadl_epi64((const __m128i *)&v21.m128i_u64[1]);
      v15 = _mm_loadl_epi64(&v21);
    }
    v17 = v8 + 24 * v7;
    *(_QWORD *)v17 = v14;
    v18 = ptr;
    *(__m128i *)(v17 + 8) = _mm_unpacklo_epi64(v15, v16);
    ++a1[1];
    if ( v18 )
    {
      v23.m128i_i64[0] = 0;
      qfree(v18);
    }
  }
  else
  {
    if ( v9 < v10 )
    {
      v19 = qvector_reserve(a1, v8, v7 + 1, 24);
      *a1 = v19;
      v8 = v19;
      v7 = a1[1];
    }
    v11 = _mm_loadu_si128(&v23);
    v12 = v8 + 24 * v7;
    *(_QWORD *)v12 = ptr;
    *(__m128i *)(v12 + 8) = v11;
    ++a1[1];
  }
  return v2;
}

