unsigned __int64 __fastcall sub_514610(__int64 a1, __int64 *a2)
{
  _BYTE *v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __m128i v8; // xmm0
  __int64 v9; // rax
  void *v11; // rbp
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
  v3 = (_BYTE *)qvector_reserve(&ptr, 0, 6, 1);
  ptr = v3;
  v20.m128i_i64[0] = 6;
  *(_DWORD *)v3 = 1735287122;
  v3[4] = 101;
  *((_BYTE *)ptr + 5) = 0;
  v4 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v7 = v4 + 1;
  if ( (unsigned __int64)&ptr >= *a2 && (unsigned __int64)&ptr < v5 + 24 * v6 )
  {
    v11 = ptr;
    v12 = _mm_loadl_epi64(&v20);
    ptr = nullptr;
    v13 = _mm_loadl_epi64((const __m128i *)&v20.m128i_u64[1]);
    v20 = 0;
    if ( v6 < v7 )
    {
      v18.m128i_i64[1] = v13.m128i_i64[0];
      v18.m128i_i64[0] = v12.m128i_i64[0];
      v17 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v17;
      v5 = v17;
      v4 = a2[1];
      v13 = _mm_loadl_epi64((const __m128i *)&v18.m128i_u64[1]);
      v12 = _mm_loadl_epi64(&v18);
    }
    v14 = v5 + 24 * v4;
    *(_QWORD *)v14 = v11;
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
    if ( v6 < v7 )
    {
      v16 = qvector_reserve(a2, v5, v4 + 1, 24);
      *a2 = v16;
      v5 = v16;
      v4 = a2[1];
    }
    v8 = _mm_loadu_si128(&v20);
    v9 = v5 + 24 * v4;
    *(_QWORD *)v9 = ptr;
    *(__m128i *)(v9 + 8) = v8;
    ++a2[1];
  }
  return v21 - __readfsqword(0x28u);
}
