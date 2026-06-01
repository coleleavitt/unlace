void __fastcall sub_18C5D40(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  __int64 v12; // rbx
  size_t v13; // rdx
  const void *v14; // rsi

  v3 = 16 * a3;
  v4 = a2 + v3;
  v5 = a1[1];
  if ( a2 != a2 + v3 )
  {
    v6 = a2;
    if ( (unsigned __int64)(v3 - 16) <= 0x40 )
    {
      v10 = a1[1];
    }
    else
    {
      v7 = 0;
      do
      {
        v8 = _mm_loadu_si128((const __m128i *)(v6 + 8));
        v9 = _mm_loadu_si128((const __m128i *)(v6 + 24));
        v6 += 32;
        v7 = _mm_add_epi64(v7, _mm_unpacklo_epi64(v8, v9));
      }
      while ( v6 != a2 + ((v3 - 16) & 0xFFFFFFFFFFFFFFE0LL) );
      v6 = a2 + 16 * (((unsigned __int64)(v3 - 16) >> 4) & 0xFFFFFFFFFFFFFFFELL);
      v10 = v5 + _mm_add_epi64(v7, _mm_srli_si128(v7, 8)).m128i_u64[0];
    }
    v11 = *(_QWORD *)(v6 + 8) + v10;
    if ( v4 != v6 + 16 )
    {
      v11 += *(_QWORD *)(v6 + 24);
      if ( v4 != v6 + 32 )
      {
        v11 += *(_QWORD *)(v6 + 40);
        if ( v4 != v6 + 48 )
        {
          v11 += *(_QWORD *)(v6 + 56);
          if ( v4 != v6 + 64 )
            v11 += *(_QWORD *)(v6 + 72);
        }
      }
    }
    v12 = a2;
    if ( v5 != v11 )
    {
      if ( v5 <= v11 && v11 > a1[2] )
      {
        sub_2236E10(a1, a1 + 3, v11, 1);
        a1[1] = v11;
      }
      else
      {
        a1[1] = v11;
      }
    }
    do
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 )
          break;
        v12 += 16;
        if ( v4 == v12 )
          return;
      }
      v14 = *(const void **)v12;
      v12 += 16;
      memmove((void *)(v5 + *a1), v14, v13);
      v5 += *(_QWORD *)(v12 - 8);
    }
    while ( v4 != v12 );
  }
}
