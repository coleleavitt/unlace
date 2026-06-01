unsigned __int64 __fastcall sub_67A740(__int64 *a1, __int64 a2)
{
  void *v2; // r14
  size_t v3; // rbp
  __int64 v5; // rax
  void *v6; // r13
  __int64 v7; // rax
  void *v8; // r15
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rsi
  __m128i v13; // xmm0
  __m128i v14; // xmm0
  __int64 v16; // rax
  size_t v17; // r15
  __m128i v18; // [rsp+8h] [rbp-B0h] BYREF
  size_t n; // [rsp+18h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-50h]
  unsigned __int64 v21; // [rsp+78h] [rbp-40h]

  v2 = nullptr;
  v3 = *(_QWORD *)(a2 + 8);
  v21 = __readfsqword(0x28u);
  if ( v3 )
  {
    v2 = (void *)qalloc_or_throw(v3);
    memcpy(v2, *(const void **)a2, v3);
  }
  v5 = *(_QWORD *)(a2 + 32);
  v6 = nullptr;
  v18.m128i_i64[0] = v5;
  if ( v5 )
  {
    v17 = v5;
    v6 = (void *)qalloc_or_throw(v5);
    memcpy(v6, *(const void **)(a2 + 24), v17);
  }
  v7 = *(_QWORD *)(a2 + 56);
  v8 = nullptr;
  v18.m128i_i64[1] = v7;
  if ( v7 )
  {
    n = 16 * v7;
    v8 = (void *)qalloc_or_throw(16 * v7);
    memcpy(v8, *(const void **)(a2 + 48), n);
  }
  v9 = *(_DWORD *)(a2 + 72);
  v10 = a1[1];
  v11 = *a1;
  v20 = *(_DWORD *)(a2 + 72);
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    LODWORD(n) = v9;
    v16 = qvector_reserve(a1, v11, v10 + 1, 80);
    *a1 = v16;
    v11 = v16;
    v9 = n;
    v10 = a1[1];
  }
  v12 = 80 * v10 + v11;
  *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v13 = _mm_loadl_epi64(&v18);
  *(_QWORD *)v12 = v2;
  *(_QWORD *)(v12 + 24) = v6;
  *(__m128i *)(v12 + 32) = _mm_unpacklo_epi64(v13, v13);
  v14 = _mm_loadl_epi64((const __m128i *)&v18.m128i_u64[1]);
  *(_QWORD *)(v12 + 48) = v8;
  *(_DWORD *)(v12 + 72) = v9;
  *(__m128i *)(v12 + 56) = _mm_unpacklo_epi64(v14, v14);
  ++a1[1];
  return v21 - __readfsqword(0x28u);
}
