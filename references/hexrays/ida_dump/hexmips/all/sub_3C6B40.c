void __fastcall sub_3C6B40(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  size_t v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __m128i v10; // xmm2
  __int64 v11; // rbx
  __int64 v12; // rax
  size_t v13; // rcx
  __int128 v14; // xmm0
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r14
  void *v19; // rax
  const void **v20; // rdx
  __m128i v21; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  size_t v23; // [rsp+20h] [rbp-48h]
  const void **v24; // [rsp+28h] [rbp-40h]

  v2 = 0;
  v4 = a2[1];
  v21 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    n = v4;
    v11 = 0;
    v12 = qalloc_or_throw(24 * v4);
    v13 = n;
    v14 = 0;
    v2 = v12;
    v15 = v12;
    do
    {
      v16 = *a2;
      *(_QWORD *)v15 = 0;
      *(_OWORD *)(v15 + 8) = v14;
      v17 = v16 + 24 * v11;
      v18 = *(_QWORD *)(v17 + 8);
      if ( v18 )
      {
        v23 = v13;
        v24 = (const void **)v17;
        n = 4 * v18;
        v19 = (void *)qalloc_or_throw(4 * v18);
        v20 = v24;
        *(_QWORD *)(v15 + 16) = v18;
        *(_QWORD *)v15 = v19;
        memcpy(v19, *v20, n);
        *(_QWORD *)(v15 + 8) = v18;
        v13 = v23;
        v14 = 0;
      }
      ++v11;
      v15 += 24;
    }
    while ( v13 != v11 );
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 24 * i);
        v9 = *v8;
        if ( *v8 )
        {
          v8[1] = 0;
          qfree(v9);
          v5 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v5);
  }
  v10 = _mm_load_si128(&v21);
  *a1 = v2;
  *(__m128i *)(a1 + 1) = v10;
}
