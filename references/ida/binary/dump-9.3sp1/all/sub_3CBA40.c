void __fastcall sub_3CBA40(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r13
  size_t v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi
  __m128i v11; // xmm2
  __int64 *v12; // r15
  __int64 v13; // rbx
  __int64 v14; // rax
  size_t v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r14
  void *v21; // rax
  const void **v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  size_t v25; // [rsp+20h] [rbp-48h]
  const void **v26; // [rsp+28h] [rbp-40h]

  v3 = 0;
  v5 = a2[1];
  v23 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
  if ( v5 )
  {
    n = v5;
    v12 = a2;
    v13 = 0;
    v14 = qalloc_or_throw(24 * v5, (__int64)a2, a3, v5);
    v15 = n;
    v16 = 0;
    v3 = v14;
    v17 = v14;
    do
    {
      v18 = *v12;
      *(_QWORD *)v17 = 0;
      *(_OWORD *)(v17 + 8) = v16;
      v19 = v18 + 24 * v13;
      v20 = *(_QWORD *)(v19 + 8);
      if ( v20 )
      {
        v25 = v15;
        v26 = (const void **)v19;
        n = 4 * v20;
        v21 = (void *)qalloc_or_throw(4 * v20, (__int64)a2, v19, v15);
        v22 = v26;
        *(_QWORD *)(v17 + 16) = v20;
        *(_QWORD *)v17 = v21;
        a2 = (__int64 *)*v22;
        memcpy(v21, *v22, n);
        *(_QWORD *)(v17 + 8) = v20;
        v15 = v25;
        v16 = 0;
      }
      ++v13;
      v17 += 24;
    }
    while ( v15 != v13 );
  }
  v6 = *a1;
  if ( *a1 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = (__int64 *)(v6 + 24 * i);
        v10 = *v9;
        if ( *v9 )
        {
          v9[1] = 0;
          qfree(v10);
          v6 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v6);
  }
  v11 = _mm_load_si128(&v23);
  *a1 = v3;
  *(__m128i *)(a1 + 1) = v11;
}
