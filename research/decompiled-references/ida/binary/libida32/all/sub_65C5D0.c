unsigned __int64 __fastcall sub_65C5D0(__int64 *a1, const char *a2)
{
  void *v2; // r14
  size_t v3; // rbp
  const char *v4; // rbx
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
  void *v16; // rax
  __int64 v17; // rax
  size_t v18; // r15
  void *v19; // rax
  __m128i v20; // [rsp+8h] [rbp-B0h] BYREF
  size_t n; // [rsp+18h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-50h]
  unsigned __int64 v23; // [rsp+78h] [rbp-40h]

  v2 = nullptr;
  v3 = *((_QWORD *)a2 + 1);
  v23 = __readfsqword(0x28u);
  v4 = a2;
  if ( v3 )
  {
    v16 = (void *)qalloc_or_throw(v3, a2);
    a2 = *(const char **)a2;
    v2 = v16;
    memcpy(v16, a2, v3);
  }
  v5 = *((_QWORD *)v4 + 4);
  v6 = nullptr;
  v20.m128i_i64[0] = v5;
  if ( v5 )
  {
    v18 = v5;
    v19 = (void *)qalloc_or_throw(v5, a2);
    a2 = *((const char **)v4 + 3);
    v6 = v19;
    memcpy(v19, a2, v18);
  }
  v7 = *((_QWORD *)v4 + 7);
  v8 = nullptr;
  v20.m128i_i64[1] = v7;
  if ( v7 )
  {
    n = 8 * v7;
    v8 = (void *)qalloc_or_throw(8 * v7, a2);
    memcpy(v8, *((const void **)v4 + 6), n);
  }
  v9 = *((_DWORD *)v4 + 18);
  v10 = a1[1];
  v11 = *a1;
  v22 = v9;
  if ( a1[2] < (unsigned __int64)(v10 + 1) )
  {
    LODWORD(n) = v9;
    v17 = qvector_reserve(a1, v11, v10 + 1, 80);
    *a1 = v17;
    v11 = v17;
    v9 = n;
    v10 = a1[1];
  }
  v12 = 80 * v10 + v11;
  *(__m128i *)(v12 + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  v13 = _mm_loadl_epi64(&v20);
  *(_QWORD *)v12 = v2;
  *(_QWORD *)(v12 + 24) = v6;
  *(__m128i *)(v12 + 32) = _mm_unpacklo_epi64(v13, v13);
  v14 = _mm_loadl_epi64((const __m128i *)&v20.m128i_u64[1]);
  *(_QWORD *)(v12 + 48) = v8;
  *(_DWORD *)(v12 + 72) = v9;
  *(__m128i *)(v12 + 56) = _mm_unpacklo_epi64(v14, v14);
  ++a1[1];
  return v23 - __readfsqword(0x28u);
}

