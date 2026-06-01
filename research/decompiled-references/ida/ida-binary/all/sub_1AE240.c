unsigned __int64 __fastcall sub_1AE240(__int64 a1, const char *a2)
{
  unsigned __int64 v2; // rdx
  size_t v5; // rax
  __int64 v6; // r14
  size_t v7; // r12
  const char *v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  void *v11; // rbp
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  char *v14; // rax
  void *v15; // rdi
  __m128i v16; // xmm0
  char *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  void *v21; // [rsp+10h] [rbp-48h] BYREF
  __m128i v22; // [rsp+18h] [rbp-40h] BYREF
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 <= 0x1F )
  {
    v21 = nullptr;
    v22 = 0;
    if ( a2 )
    {
      v5 = strlen(a2);
      v6 = v5 + 1;
      v7 = v5;
      v21 = (void *)qvector_reserve(&v21, 0, v5 + 1, 1);
      v22.m128i_i64[0] = v6;
      memmove(v21, a2, v7);
      *((_BYTE *)v21 + v7) = 0;
      v2 = *(_QWORD *)(a1 + 8);
    }
    v8 = *(const char **)a1;
    v9 = *(_QWORD *)(a1 + 16);
    v10 = v2 + 1;
    if ( (unsigned __int64)&v21 < *(_QWORD *)a1 || &v21 >= (void **)&v8[24 * v9] )
    {
      if ( v9 < v10 )
      {
        v18 = qvector_reserve(a1, v8, v2 + 1, 24);
        *(_QWORD *)a1 = v18;
        v2 = *(_QWORD *)(a1 + 8);
        v8 = (const char *)v18;
      }
      v16 = _mm_loadu_si128(&v22);
      v17 = (char *)&v8[24 * v2];
      *(_QWORD *)v17 = v21;
      *(__m128i *)(v17 + 8) = v16;
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v11 = v21;
      v12 = _mm_loadl_epi64(&v22);
      v21 = nullptr;
      v13 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
      v22 = 0;
      if ( v9 < v10 )
      {
        v20.m128i_i64[1] = v13.m128i_i64[0];
        v20.m128i_i64[0] = v12.m128i_i64[0];
        v19 = qvector_reserve(a1, v8, v2 + 1, 24);
        v2 = *(_QWORD *)(a1 + 8);
        v12 = _mm_loadl_epi64(&v20);
        *(_QWORD *)a1 = v19;
        v8 = (const char *)v19;
        v13 = _mm_loadl_epi64((const __m128i *)&v20.m128i_u64[1]);
      }
      v14 = (char *)&v8[24 * v2];
      *(_QWORD *)v14 = v11;
      v15 = v21;
      *(__m128i *)(v14 + 8) = _mm_unpacklo_epi64(v12, v13);
      ++*(_QWORD *)(a1 + 8);
      if ( v15 )
      {
        v22.m128i_i64[0] = 0;
        qfree(v15, v8);
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}
