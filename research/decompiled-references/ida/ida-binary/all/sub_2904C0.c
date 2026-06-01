void __fastcall sub_2904C0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  size_t v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __m128i v10; // xmm2
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  size_t v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r14
  void *v20; // rax
  const void **v21; // rdx
  __m128i v22; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  size_t v24; // [rsp+20h] [rbp-48h]
  const void **v25; // [rsp+28h] [rbp-40h]

  v2 = 0;
  v4 = a2[1];
  v22 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    n = v4;
    v11 = a2;
    v12 = 0;
    v13 = qalloc_or_throw(24 * v4);
    v14 = n;
    v15 = 0;
    v2 = v13;
    v16 = v13;
    do
    {
      v17 = *v11;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = v15;
      v18 = v17 + 24 * v12;
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
      {
        v24 = v14;
        v25 = (const void **)v18;
        n = 4 * v19;
        v20 = (void *)qalloc_or_throw(4 * v19);
        v21 = v25;
        *(_QWORD *)(v16 + 16) = v19;
        *(_QWORD *)v16 = v20;
        a2 = (__int64 *)*v21;
        memcpy(v20, *v21, n);
        *(_QWORD *)(v16 + 8) = v19;
        v14 = v24;
        v15 = 0;
      }
      ++v12;
      v16 += 24;
    }
    while ( v14 != v12 );
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
          qfree(v9, (const char *)a2);
          v5 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v5, (const char *)a2);
  }
  v10 = _mm_load_si128(&v22);
  *a1 = v2;
  *(__m128i *)(a1 + 1) = v10;
}
