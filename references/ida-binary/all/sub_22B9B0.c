__int64 __fastcall sub_22B9B0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 i; // rbp
  _QWORD *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 result; // rax
  __m128i v12; // xmm2
  __int64 v13; // r15
  __int64 v14; // r13
  __int128 v15; // xmm0
  __int64 v16; // rbx
  __int64 *v17; // rbp
  __int64 v18; // rax
  void *v19; // rax
  size_t v20; // rcx
  void *v21; // rax
  size_t v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+10h] [rbp-48h]
  size_t n; // [rsp+18h] [rbp-40h]

  v3 = a2[1];
  v23.m128i_i64[0] = (__int64)a2;
  v24 = 0;
  if ( v3 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v24 = qalloc_or_throw(56 * v3);
    v16 = v24;
    do
    {
      v17 = (__int64 *)(v13 + *(_QWORD *)v23.m128i_i64[0]);
      v18 = *v17;
      *(_QWORD *)(v16 + 8) = 0;
      *(_OWORD *)(v16 + 16) = v15;
      *(_QWORD *)v16 = v18;
      if ( v17[2] )
      {
        n = v17[2];
        v21 = (void *)qalloc_or_throw(n);
        v22 = n;
        *(_QWORD *)(v16 + 8) = v21;
        *(_QWORD *)(v16 + 24) = v22;
        a2 = (_QWORD *)v17[1];
        memcpy(v21, a2, v22);
        v15 = 0;
        *(_QWORD *)(v16 + 16) = n;
      }
      *(_QWORD *)(v16 + 32) = 0;
      *(_OWORD *)(v16 + 40) = v15;
      if ( v17[5] )
      {
        n = v17[5];
        v19 = (void *)qalloc_or_throw(n);
        v20 = n;
        *(_QWORD *)(v16 + 32) = v19;
        *(_QWORD *)(v16 + 48) = v20;
        a2 = (_QWORD *)v17[4];
        memcpy(v19, a2, v20);
        v15 = 0;
        *(_QWORD *)(v16 + 40) = n;
      }
      ++v14;
      v13 += 56;
      v16 += 56;
    }
    while ( v3 != v14 );
  }
  v4 = *a1;
  v23 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      v6 = 0;
      for ( i = 0; i != v5; ++i )
      {
        v8 = (_QWORD *)(v4 + v6);
        v9 = *(_QWORD *)(v4 + v6 + 32);
        if ( v9 )
        {
          v8[5] = 0;
          qfree(v9, (const char *)a2);
        }
        v10 = v8[1];
        if ( v10 )
        {
          v8[2] = 0;
          qfree(v10, (const char *)a2);
        }
        v4 = *a1;
        v6 += 56;
      }
    }
    a1[1] = 0;
    qfree(v4, (const char *)a2);
  }
  result = v24;
  v12 = _mm_load_si128(&v23);
  *a1 = v24;
  *(__m128i *)(a1 + 1) = v12;
  return result;
}
