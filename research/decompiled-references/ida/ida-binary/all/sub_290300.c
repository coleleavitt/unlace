void __fastcall sub_290300(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // r12
  size_t v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 i; // rbx
  __int64 *v8; // rax
  __int64 v9; // rdi
  __m128i v10; // xmm2
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rcx
  size_t v14; // r8
  __int128 v15; // xmm0
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // r15
  void *v19; // rax
  size_t v20; // rdx
  __m128i v21; // [rsp+0h] [rbp-68h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  size_t v23; // [rsp+20h] [rbp-48h]
  _QWORD *v24; // [rsp+28h] [rbp-40h]

  v2 = 0;
  v4 = a2[1];
  v21 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    n = v4;
    v11 = 0;
    v23 = (size_t)a2;
    v12 = qalloc_or_throw(32 * v4);
    v13 = a2;
    v14 = n;
    v15 = 0;
    v2 = v12;
    v16 = v12;
    do
    {
      v17 = *v13 + 32 * v11;
      *(_QWORD *)v16 = 0;
      *(_OWORD *)(v16 + 8) = v15;
      v18 = *(_QWORD *)(v17 + 8);
      if ( v18 )
      {
        v24 = v13;
        v23 = v14;
        n = 4 * v18;
        v19 = (void *)qalloc_or_throw(4 * v18);
        *(_QWORD *)(v16 + 16) = v18;
        v20 = n;
        *(_QWORD *)v16 = v19;
        a2 = *(_QWORD **)v17;
        memcpy(v19, *(const void **)v17, v20);
        *(_QWORD *)(v16 + 8) = v18;
        v13 = v24;
        v15 = 0;
        v14 = v23;
      }
      ++v11;
      v16 += 32;
      *(_QWORD *)(v16 - 8) = *(_QWORD *)(v17 + 24);
    }
    while ( v14 != v11 );
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = a1[1];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = (__int64 *)(v5 + 32 * i);
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
  v10 = _mm_load_si128(&v21);
  *a1 = v2;
  *(__m128i *)(a1 + 1) = v10;
}
