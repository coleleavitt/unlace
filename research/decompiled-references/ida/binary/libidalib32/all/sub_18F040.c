__int64 __fastcall sub_18F040(__int64 a1, __int64 *a2)
{
  const void **v2; // rcx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  _QWORD *v7; // rax
  __m128i v8; // xmm2
  const void **v10; // rbx
  __int64 v11; // rax
  const void **v12; // rcx
  __int128 v13; // xmm0
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx
  size_t v17; // r15
  void *v18; // rax
  const void **v19; // rdx
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  const void **v21; // [rsp+10h] [rbp-48h]
  const void **v22; // [rsp+18h] [rbp-40h]

  if ( a2 )
  {
    v2 = *(const void ***)(a1 + 2136);
    v3 = 0;
    v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v2);
    if ( v2 )
    {
      v21 = v2;
      v10 = nullptr;
      v11 = qalloc_or_throw();
      v12 = v21;
      v13 = 0;
      v3 = v11;
      v14 = v11;
      do
      {
        v15 = *(_QWORD *)(a1 + 2128);
        *(_QWORD *)v14 = 0;
        *(_OWORD *)(v14 + 8) = v13;
        v16 = v15 + 24LL * (_QWORD)v10;
        v17 = *(_QWORD *)(v16 + 8);
        if ( v17 )
        {
          v22 = v12;
          v21 = (const void **)v16;
          v18 = (void *)qalloc_or_throw();
          v19 = v21;
          *(_QWORD *)(v14 + 16) = v17;
          *(_QWORD *)v14 = v18;
          memcpy(v18, *v19, v17);
          *(_QWORD *)(v14 + 8) = v17;
          v12 = v22;
          v13 = 0;
        }
        v10 = (const void **)((char *)v10 + 1);
        v14 += 24;
      }
      while ( v10 != v12 );
    }
    v4 = *a2;
    if ( *a2 )
    {
      v5 = a2[1];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = (_QWORD *)(v4 + 24 * i);
          if ( *v7 )
          {
            v7[1] = 0;
            qfree();
            v4 = *a2;
          }
        }
      }
      a2[1] = 0;
      qfree();
    }
    v8 = _mm_load_si128(&v20);
    *a2 = v3;
    *(__m128i *)(a2 + 1) = v8;
  }
  return *(_QWORD *)(a1 + 2136);
}

