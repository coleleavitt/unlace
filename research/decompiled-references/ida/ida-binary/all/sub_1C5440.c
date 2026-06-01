void __fastcall sub_1C5440(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r13
  unsigned __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __m128i v10; // xmm2
  __int64 *v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int128 v15; // xmm0
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rdx
  size_t v19; // r14
  __int64 v20; // rdi
  void *v21; // rax
  const void **v22; // rdx
  __m128i v23; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+10h] [rbp-48h]
  const void **v25; // [rsp+18h] [rbp-40h]

  v2 = 0;
  v4 = a2[1];
  v23 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v24 = v4;
    v11 = a2;
    v12 = 0;
    v13 = qalloc_or_throw(24 * v4);
    v14 = v24;
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
        v20 = *(_QWORD *)(v18 + 8);
        v24 = v14;
        v25 = (const void **)v18;
        v21 = (void *)qalloc_or_throw(v20);
        v22 = v25;
        *(_QWORD *)(v16 + 16) = v19;
        *(_QWORD *)v16 = v21;
        a2 = (__int64 *)*v22;
        memcpy(v21, *v22, v19);
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
  v10 = _mm_load_si128(&v23);
  *a1 = v2;
  *(__m128i *)(a1 + 1) = v10;
}
