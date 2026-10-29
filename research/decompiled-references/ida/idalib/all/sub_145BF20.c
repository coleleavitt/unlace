unsigned __int64 __fastcall sub_145BF20(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ecx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __m128i v10; // xmm0
  char *v11; // rsi
  __m128i v12; // xmm1
  __m128i v13; // xmm2
  __int64 v14; // r9

  v1 = *(_QWORD *)(a1 + 144);
  v2 = v1 + 8LL * *(unsigned int *)(a1 + 152);
  if ( v1 == v2 )
  {
    v4 = 0;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 144);
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = (unsigned int)((v3 - v1) >> 3) >> 7;
        if ( v5 <= 0x1D )
          break;
        v3 += 8;
        v4 += 0x40000000000LL;
        if ( v3 == v2 )
          goto LABEL_5;
      }
      v3 += 8;
      v4 += 4096LL << v5;
    }
    while ( v3 != v2 );
  }
LABEL_5:
  v6 = *(_QWORD **)(a1 + 192);
  v7 = &v6[2 * *(unsigned int *)(a1 + 200)];
  if ( v6 != v7 )
  {
    v8 = *(_QWORD *)(a1 + 192);
    v9 = 16LL * *(unsigned int *)(a1 + 200) - 16;
    if ( v9 > 0x40 )
    {
      v10 = 0;
      v11 = (char *)v6 + (v9 & 0xFFFFFFFFFFFFFFE0LL);
      do
      {
        v12 = _mm_loadu_si128((const __m128i *)(v8 + 8));
        v13 = _mm_loadu_si128((const __m128i *)(v8 + 24));
        v8 += 32;
        v10 = _mm_add_epi64(v10, _mm_unpacklo_epi64(v12, v13));
      }
      while ( (char *)v8 != v11 );
      v6 += 2 * (((16 * (unsigned __int64)*(unsigned int *)(a1 + 200) - 16) >> 4) & 0xFFFFFFFFFFFFFFFELL);
      v4 += _mm_add_epi64(v10, _mm_srli_si128(v10, 8)).m128i_u64[0];
    }
    v4 += v6[1];
    if ( v7 != v6 + 2 )
    {
      v4 += v6[3];
      if ( v7 != v6 + 4 )
      {
        v4 += v6[5];
        if ( v7 != v6 + 6 )
        {
          v4 += v6[7];
          if ( v7 != v6 + 8 )
            v4 += v6[9];
        }
      }
    }
  }
  if ( *(_QWORD *)(a1 + 2360) == a1 + 2376 )
    v14 = 15;
  else
    v14 = *(_QWORD *)(a1 + 2376);
  return 24LL * *(unsigned int *)(a1 + 2484)
       + 32LL * *(unsigned int *)(a1 + 2288)
       + *(_QWORD *)(a1 + 728)
       - *(_QWORD *)(a1 + 712)
       + 16 * (*(unsigned int *)(*(_QWORD *)(a1 + 1704) + 16LL) + (unsigned __int64)*(unsigned int *)(a1 + 3048))
       + v4
       + v14;
}
