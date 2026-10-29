__int64 __fastcall sub_22D320(int a1, const void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 i; // rbp
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm3
  __int64 v13; // r14
  __int128 v14; // xmm0
  __int64 v15; // rbp
  __int64 v16; // r13
  void *v17; // rax
  size_t v18; // rdx
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]

  if ( !a1 )
    return 0;
  v2 = qword_8CC430;
  v3 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
  if ( qword_8CC430 == v3 )
    return 0;
  while ( a1 != *(_DWORD *)v2 )
  {
    v2 += 256;
    if ( v3 == v2 )
      return 0;
  }
  if ( !v2 )
    return 0;
  v4 = *(_QWORD *)(v2 + 48);
  v5 = 0;
  v19 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
  if ( v4 )
  {
    v13 = 0;
    v14 = 0;
    v5 = qalloc_or_throw(32 * v4);
    v15 = v5;
    do
    {
      v16 = *(_QWORD *)(v2 + 40) + 32 * v13;
      *(_DWORD *)v15 = -2;
      *(_QWORD *)(v15 + 24) = 0;
      *(_OWORD *)(v15 + 8) = v14;
      if ( v15 != v16 )
      {
        if ( *(int *)v16 >= -1 )
        {
          *(_QWORD *)(v15 + 8) = 0;
          *(_OWORD *)(v15 + 16) = 0;
          if ( *(_QWORD *)(v16 + 16) )
          {
            n = *(_QWORD *)(v16 + 16);
            v17 = (void *)qalloc_or_throw(n);
            v18 = n;
            *(_QWORD *)(v15 + 8) = v17;
            *(_QWORD *)(v15 + 24) = v18;
            a2 = *(const void **)(v16 + 8);
            memcpy(v17, a2, v18);
            v14 = 0;
            *(_QWORD *)(v15 + 16) = n;
          }
        }
        else
        {
          *(_QWORD *)(v15 + 8) = *(_QWORD *)(v16 + 8);
        }
        *(_DWORD *)v15 = *(_DWORD *)v16;
      }
      ++v13;
      v15 += 32;
    }
    while ( v4 != v13 );
  }
  v6 = *(_QWORD *)(v2 + 64);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v2 + 72);
    if ( v7 )
    {
      for ( i = 0; i != v7; ++i )
      {
        v9 = v6 + 32 * i;
        if ( *(int *)v9 >= -1 )
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( v10 )
          {
            *(_QWORD *)(v9 + 16) = 0;
            qfree(v10, (const char *)a2);
            v6 = *(_QWORD *)(v2 + 64);
          }
        }
      }
    }
    *(_QWORD *)(v2 + 72) = 0;
    qfree(v6, (const char *)a2);
  }
  v11 = _mm_load_si128(&v19);
  *(_QWORD *)(v2 + 64) = v5;
  *(__m128i *)(v2 + 72) = v11;
  return 1;
}
