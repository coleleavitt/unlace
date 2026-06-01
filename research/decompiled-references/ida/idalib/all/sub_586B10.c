unsigned __int64 __fastcall sub_586B10(__int64 a1, __int64 *a2)
{
  __m128i *v3; // rax
  _BYTE *v4; // r12
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  void *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // [rsp+0h] [rbp-48h] BYREF
  void *ptr; // [rsp+10h] [rbp-38h] BYREF
  __m128i v20; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-20h]

  v21 = __readfsqword(0x28u);
  v20 = 0;
  ptr = nullptr;
  v3 = (__m128i *)qvector_reserve(&ptr, 0, 23, 1);
  ptr = v3;
  v20.m128i_i64[0] = 23;
  *v3 = _mm_load_si128((const __m128i *)&xmmword_23A7BF0);
  v4 = ptr;
  *(__int64 *)((char *)&v3->m128i_i64[1] + 6) = 0x656C626174206E6FLL;
  v4[22] = 0;
  v5 = a2[1];
  v6 = *a2;
  v7 = a2[2];
  v8 = v5 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v6 + 24 * v7 )
  {
    v12 = _mm_loadl_epi64(&v20);
    v13 = _mm_loadl_epi64((const __m128i *)&v20.m128i_u64[1]);
    ptr = nullptr;
    v20 = 0;
    if ( v7 < v8 )
    {
      v18.m128i_i64[1] = v13.m128i_i64[0];
      v18.m128i_i64[0] = v12.m128i_i64[0];
      v17 = qvector_reserve(a2, v6, v5 + 1, 24);
      *a2 = v17;
      v6 = v17;
      v5 = a2[1];
      v13 = _mm_loadl_epi64((const __m128i *)&v18.m128i_u64[1]);
      v12 = _mm_loadl_epi64(&v18);
    }
    v14 = v6 + 24 * v5;
    *(_QWORD *)v14 = v4;
    v15 = ptr;
    *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v12, v13);
    ++a2[1];
    if ( v15 )
    {
      v20.m128i_i64[0] = 0;
      qfree(v15);
    }
  }
  else
  {
    if ( v7 < v8 )
    {
      v16 = qvector_reserve(a2, v6, v5 + 1, 24);
      *a2 = v16;
      v6 = v16;
      v4 = ptr;
      v5 = a2[1];
    }
    v9 = _mm_loadu_si128(&v20);
    v10 = v6 + 24 * v5;
    *(_QWORD *)v10 = v4;
    *(__m128i *)(v10 + 8) = v9;
    ++a2[1];
  }
  return v21 - __readfsqword(0x28u);
}
