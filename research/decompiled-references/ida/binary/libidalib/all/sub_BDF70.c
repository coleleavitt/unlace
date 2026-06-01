__int64 __fastcall sub_BDF70(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 i; // rbp
  _QWORD *v7; // rbx
  __m128i si128; // xmm3
  __int64 v10; // r13
  __int128 v11; // xmm0
  __int64 v12; // rbx
  __int64 v13; // rbp
  __m128i v14; // xmm1
  void *v15; // rax
  size_t v16; // r8
  void *v17; // rax
  size_t v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-50h]
  size_t n[2]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2[1];
  v19 = 0;
  if ( v3 )
  {
    v10 = 0;
    v11 = 0;
    v19 = qalloc_or_throw();
    v12 = v19;
    do
    {
      v13 = *a2 + 80 * v10;
      v14 = _mm_loadu_si128((const __m128i *)v13);
      *(_QWORD *)(v12 + 16) = 0;
      *(_OWORD *)(v12 + 24) = v11;
      *(__m128i *)v12 = v14;
      if ( *(_QWORD *)(v13 + 24) )
      {
        n[0] = *(_QWORD *)(v13 + 24);
        v17 = (void *)qalloc_or_throw();
        v18 = n[0];
        *(_QWORD *)(v12 + 16) = v17;
        *(_QWORD *)(v12 + 32) = v18;
        memcpy(v17, *(const void **)(v13 + 16), v18);
        v11 = 0;
        *(_QWORD *)(v12 + 24) = n[0];
      }
      *(_QWORD *)(v12 + 40) = 0;
      *(_OWORD *)(v12 + 48) = v11;
      if ( *(_QWORD *)(v13 + 48) )
      {
        n[0] = *(_QWORD *)(v13 + 48);
        v15 = (void *)qalloc_or_throw();
        v16 = n[0];
        *(_QWORD *)(v12 + 40) = v15;
        *(_QWORD *)(v12 + 56) = v16;
        memcpy(v15, *(const void **)(v13 + 40), v16);
        v11 = 0;
        *(_QWORD *)(v12 + 48) = n[0];
      }
      ++v10;
      v12 += 80;
      *(_QWORD *)(v12 - 16) = *(_QWORD *)(v13 + 64);
      *(_WORD *)(v12 - 8) = *(_WORD *)(v13 + 72);
    }
    while ( v3 != v10 );
  }
  v4 = *a1;
  *(__m128i *)n = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  if ( v4 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (_QWORD *)(v4 + 80 * i);
        if ( v7[5] )
        {
          v7[6] = 0;
          qfree();
        }
        if ( v7[2] )
        {
          v7[3] = 0;
          qfree();
        }
        v4 = *a1;
      }
    }
    a1[1] = 0;
    qfree();
  }
  si128 = _mm_load_si128((const __m128i *)n);
  *a1 = v19;
  *(__m128i *)(a1 + 1) = si128;
  return v19;
}

