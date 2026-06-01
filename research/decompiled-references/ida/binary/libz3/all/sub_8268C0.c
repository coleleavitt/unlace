void __fastcall sub_8268C0(__m128i *a1)
{
  unsigned int v1; // esi
  __m128i *v2; // rax
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rax

  v1 = a1[2].m128i_u32[0];
  a1[1].m128i_i32[0] ^= 1u;
  if ( v1 )
  {
    if ( v1 - 1 <= 2 )
    {
      v5 = 0;
    }
    else
    {
      v2 = a1;
      v3 = _mm_shuffle_epi32(_mm_cvtsi32_si128(1u), 0);
      do
      {
        v4 = _mm_loadu_si128(v2 + 4);
        ++v2;
        v2[3] = _mm_xor_si128(v4, v3);
      }
      while ( v2 != &a1[v1 >> 2] );
      if ( (v1 & 3) == 0 )
        goto LABEL_10;
      v5 = v1 & 0xFFFFFFFC;
    }
    a1[4].m128i_i32[v5] ^= 1u;
    v6 = v5 + 1;
    if ( (unsigned int)v6 < v1 )
    {
      v7 = v5 + 2;
      a1[4].m128i_i32[v6] ^= 1u;
      if ( (unsigned int)v7 < v1 )
        a1[4].m128i_i32[v7] ^= 1u;
    }
  }
LABEL_10:
  a1[3].m128i_i32[3] = v1 + 1 - a1[3].m128i_i32[3];
}

