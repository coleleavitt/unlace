unsigned __int64 __fastcall sub_3D400(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned __int64 v10; // r15
  char v12; // al
  _QWORD *v13; // rbp
  __int64 v14; // rcx
  const __m128i *v15; // rdx
  __m128i *v16; // rcx
  unsigned int v17; // eax
  __m128i v18; // xmm0

  v2 = a1[4];
  v3 = (v2 - 8) & 0xFFFFFFFFFFFFFFF7LL;
  if ( v3 )
    return 0;
  v4 = a1[8];
  v5 = a2;
  if ( v4 )
  {
    if ( !is_mul_ok(v2, v4) )
      return 0;
  }
  if ( a2 && !is_mul_ok(a2, v2) )
    return 0;
  v6 = a1[1];
  v7 = qlseek(*(_QWORD *)(v6 + 472), 0, 1);
  v8 = *(_QWORD *)(v6 + 480);
  v9 = v7 - v8;
  if ( qlseek(*(_QWORD *)(v6 + 472), v8 + a1[2] + a1[4] * a1[8], 0) != -1
    && (v10 = a2 * a1[4], v10 == qlread(*(_QWORD *)(a1[1] + 472LL), a1[5], v10)) )
  {
    v12 = *(_BYTE *)(a1[1] + 616LL);
    if ( a1[4] == 8 )
    {
      v14 = a1[5];
      v15 = (const __m128i *)(v14 + 8 * a2 - 8);
      v16 = (__m128i *)(v14 + 16 * a2 - 16);
      if ( a2 )
      {
        if ( v12 )
        {
          do
          {
            v17 = v15->m128i_u32[1];
            ++v3;
            v15 = (const __m128i *)((char *)v15 - 8);
            --v16;
            v16[1] = _mm_unpacklo_epi32(
                       _mm_unpacklo_epi32(
                         _mm_cvtsi32_si128(_byteswap_ulong(v15->m128i_u32[2])),
                         _mm_cvtsi32_si128(_byteswap_ulong(v17))),
                       (__m128i)0LL);
          }
          while ( a2 != v3 );
        }
        else
        {
          do
          {
            v18 = _mm_loadl_epi64(v15);
            ++v3;
            v15 = (const __m128i *)((char *)v15 - 8);
            --v16;
            v16[1] = _mm_unpacklo_epi32(v18, (__m128i)0LL);
          }
          while ( a2 != v3 );
        }
      }
    }
    else if ( v12 )
    {
      v13 = (_QWORD *)a1[5];
      if ( a2 )
      {
        do
        {
          *v13 = swap64(*v13);
          ++v3;
          v13[1] = swap64(v13[1]);
          v13 += 2;
        }
        while ( a2 != v3 );
      }
    }
  }
  else
  {
    v5 = 0;
  }
  qlseek(*(_QWORD *)(v6 + 472), v9 + *(_QWORD *)(v6 + 480), 0);
  return v5;
}

