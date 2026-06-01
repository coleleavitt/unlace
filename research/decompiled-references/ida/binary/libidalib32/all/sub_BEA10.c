__int64 __fastcall sub_BEA10(int a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rdi
  __int64 v6; // r13
  __int64 i; // rbp
  __int64 v8; // rax
  __m128i v9; // xmm3
  __int64 v11; // r14
  __int128 v12; // xmm0
  __int64 v13; // rbp
  __int64 v14; // r13
  void *v15; // rax
  size_t v16; // rdx
  __m128i v17; // [rsp+0h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]

  if ( !a1 )
    return 0;
  v1 = qword_251410;
  v2 = qword_251410 + 232 * xmmword_251418;
  if ( qword_251410 == v2 )
    return 0;
  while ( a1 != *(_DWORD *)v1 )
  {
    v1 += 232;
    if ( v2 == v1 )
      return 0;
  }
  if ( !v1 )
    return 0;
  v3 = *(_QWORD *)(v1 + 48);
  v4 = 0;
  v17 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v3 )
  {
    v11 = 0;
    v12 = 0;
    v4 = qalloc_or_throw();
    v13 = v4;
    do
    {
      v14 = *(_QWORD *)(v1 + 40) + 32 * v11;
      *(_DWORD *)v13 = -2;
      *(_QWORD *)(v13 + 24) = 0;
      *(_OWORD *)(v13 + 8) = v12;
      if ( v13 != v14 )
      {
        if ( *(int *)v14 >= -1 )
        {
          *(_QWORD *)(v13 + 8) = 0;
          *(_OWORD *)(v13 + 16) = 0;
          if ( *(_QWORD *)(v14 + 16) )
          {
            n = *(_QWORD *)(v14 + 16);
            v15 = (void *)qalloc_or_throw();
            v16 = n;
            *(_QWORD *)(v13 + 8) = v15;
            *(_QWORD *)(v13 + 24) = v16;
            memcpy(v15, *(const void **)(v14 + 8), v16);
            v12 = 0;
            *(_QWORD *)(v13 + 16) = n;
          }
        }
        else
        {
          *(_QWORD *)(v13 + 8) = *(_QWORD *)(v14 + 8);
        }
        *(_DWORD *)v13 = *(_DWORD *)v14;
      }
      ++v11;
      v13 += 32;
    }
    while ( v3 != v11 );
  }
  v5 = *(_QWORD *)(v1 + 64);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v1 + 72);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = v5 + 32 * i;
        if ( *(int *)v8 >= -1 )
        {
          if ( *(_QWORD *)(v8 + 8) )
          {
            *(_QWORD *)(v8 + 16) = 0;
            qfree();
            v5 = *(_QWORD *)(v1 + 64);
          }
        }
      }
    }
    *(_QWORD *)(v1 + 72) = 0;
    qfree();
  }
  v9 = _mm_load_si128(&v17);
  *(_QWORD *)(v1 + 64) = v4;
  *(__m128i *)(v1 + 72) = v9;
  return 1;
}

