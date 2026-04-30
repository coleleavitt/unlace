void __fastcall diff_source_generic_chooser_t__::vfunc_6(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r13
  char *v6; // r12
  __int64 *v7; // r15
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 i; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm2
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int128 v18; // xmm0
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rdx
  size_t v22; // r14
  __int64 v23; // rdi
  void *v24; // rax
  const void **v25; // rdx
  __m128i v26; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+10h] [rbp-48h]
  const void **v28; // [rsp+18h] [rbp-40h]

  v5 = 0;
  v6 = (char *)a2;
  v7 = (__int64 *)(32 * a5 + **(_QWORD **)(a1 + 192));
  v8 = v7[1];
  v26 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)v8);
  if ( v8 )
  {
    v27 = v8;
    v15 = 0;
    v16 = qalloc_or_throw(24 * v8);
    v17 = v27;
    v18 = 0;
    v5 = v16;
    v19 = v16;
    do
    {
      v20 = *v7;
      *(_QWORD *)v19 = 0;
      *(_OWORD *)(v19 + 8) = v18;
      v21 = v20 + 24 * v15;
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v21 + 8);
        v27 = v17;
        v28 = (const void **)v21;
        v24 = (void *)qalloc_or_throw(v23);
        v25 = v28;
        *(_QWORD *)(v19 + 16) = v22;
        *(_QWORD *)v19 = v24;
        a2 = (const char *)*v25;
        memcpy(v24, *v25, v22);
        *(_QWORD *)(v19 + 8) = v22;
        v17 = v27;
        v18 = 0;
      }
      ++v15;
      v19 += 24;
    }
    while ( v17 != v15 );
  }
  v9 = *(_QWORD *)v6;
  if ( *(_QWORD *)v6 )
  {
    v10 = *((_QWORD *)v6 + 1);
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = (__int64 *)(v9 + 24 * i);
        v13 = *v12;
        if ( *v12 )
        {
          v12[1] = 0;
          qfree(v13, a2);
          v9 = *(_QWORD *)v6;
        }
      }
    }
    *((_QWORD *)v6 + 1) = 0;
    qfree(v9, a2);
  }
  v14 = _mm_load_si128(&v26);
  *(_QWORD *)v6 = v5;
  *(__m128i *)(v6 + 8) = v14;
}
