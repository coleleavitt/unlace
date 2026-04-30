__int64 __fastcall sub_22BB70(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __m128i si128; // xmm3
  _QWORD *v12; // r15
  __int64 v13; // r13
  __int128 v14; // xmm0
  __int64 v15; // rbx
  const __m128i *v16; // rbp
  __m128i v17; // xmm1
  void *v18; // rax
  size_t v19; // r8
  void *v20; // rax
  size_t v21; // rdx
  __int64 v22; // [rsp+8h] [rbp-50h]
  size_t n[2]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[1];
  v22 = 0;
  if ( v3 )
  {
    v12 = a2;
    v13 = 0;
    v14 = 0;
    v22 = qalloc_or_throw(80 * v3);
    v15 = v22;
    do
    {
      v16 = (const __m128i *)(*v12 + 80 * v13);
      v17 = _mm_loadu_si128(v16);
      *(_QWORD *)(v15 + 16) = 0;
      *(_OWORD *)(v15 + 24) = v14;
      *(__m128i *)v15 = v17;
      if ( v16[1].m128i_i64[1] )
      {
        n[0] = v16[1].m128i_u64[1];
        v20 = (void *)qalloc_or_throw(n[0]);
        v21 = n[0];
        *(_QWORD *)(v15 + 16) = v20;
        *(_QWORD *)(v15 + 32) = v21;
        a2 = (_QWORD *)v16[1].m128i_i64[0];
        memcpy(v20, a2, v21);
        v14 = 0;
        *(_QWORD *)(v15 + 24) = n[0];
      }
      *(_QWORD *)(v15 + 40) = 0;
      *(_OWORD *)(v15 + 48) = v14;
      if ( v16[3].m128i_i64[0] )
      {
        n[0] = v16[3].m128i_u64[0];
        v18 = (void *)qalloc_or_throw(n[0]);
        v19 = n[0];
        *(_QWORD *)(v15 + 40) = v18;
        *(_QWORD *)(v15 + 56) = v19;
        a2 = (_QWORD *)v16[2].m128i_i64[1];
        memcpy(v18, a2, v19);
        v14 = 0;
        *(_QWORD *)(v15 + 48) = n[0];
      }
      ++v13;
      v15 += 80;
      *(_QWORD *)(v15 - 16) = v16[4].m128i_i64[0];
      *(_WORD *)(v15 - 8) = v16[4].m128i_i16[4];
    }
    while ( v3 != v13 );
  }
  v4 = *a1;
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        v8 = v7[5];
        if ( v8 )
        {
          v7[6] = 0;
          qfree(v8, (const char *)a2);
        }
        v9 = v7[2];
        if ( v9 )
        {
          v7[3] = 0;
          qfree(v9, (const char *)a2);
        }
        v4 = *a1;
      }
    }
    a1[1] = 0;
    qfree(v4, (const char *)a2);
  }
  si128 = _mm_load_si128((const __m128i *)n);
  *a1 = v22;
  *(__m128i *)(a1 + 1) = si128;
  return v22;
}
