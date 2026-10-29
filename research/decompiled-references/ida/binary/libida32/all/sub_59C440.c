unsigned __int64 __fastcall sub_59C440(__int64 a1, __int64 *a2)
{
  void *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v19; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v19 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 14, 1);
  v19.m128i_i64[0] = 14;
  strcpy((char *)ptr, "Frame address");
  v3 = ptr;
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = v4 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v5 + 24 * v6 )
  {
    v11 = _mm_loadl_epi64(&v19);
    v12 = _mm_loadl_epi64((const __m128i *)&v19.m128i_u64[1]);
    ptr = nullptr;
    v19 = 0;
    if ( v6 < v7 )
    {
      v17.m128i_i64[1] = v12.m128i_i64[0];
      v17.m128i_i64[0] = v11.m128i_i64[0];
      v16 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v16;
      v5 = v16;
      v4 = a2[1];
      v12 = _mm_loadl_epi64((const __m128i *)&v17.m128i_u64[1]);
      v11 = _mm_loadl_epi64(&v17);
    }
    v13 = v5 + 24 * v4;
    *(_QWORD *)v13 = v3;
    v14 = ptr;
    *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v11, v12);
    ++a2[1];
    if ( v14 )
    {
      v19.m128i_i64[0] = 0;
      qfree(v14);
    }
  }
  else
  {
    if ( v6 < v7 )
    {
      v15 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v15;
      v5 = v15;
      v3 = ptr;
      v4 = a2[1];
    }
    v8 = _mm_loadu_si128(&v19);
    v9 = v5 + 24 * v4;
    *(_QWORD *)v9 = v3;
    *(__m128i *)(v9 + 8) = v8;
    ++a2[1];
  }
  return v20 - __readfsqword(0x28u);
}

