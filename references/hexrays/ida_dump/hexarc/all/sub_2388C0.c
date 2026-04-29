__int64 __fastcall sub_2388C0(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 result; // rax
  _QWORD *v3; // rdx
  const __m128i *v4; // rcx
  __m128i v5; // xmm0
  int v6; // ecx
  const __m128i *v7; // r12
  const __m128i *i; // rbx
  __m128i v9; // xmm0
  int v10; // ecx
  __int64 v11; // rax

  v1 = *(__int64 **)(*(_QWORD *)(a1 + 216) + 824LL);
  result = *v1;
  if ( !*v1 )
  {
    v3 = *(_QWORD **)(a1 + 8);
    v4 = (const __m128i *)v3[1];
    if ( v4 )
    {
      v5 = _mm_loadu_si128(v4);
      v6 = 4 * ((int)log2ceil(_mm_xor_si128(v5, _mm_srli_si128(v5, 8)).m128i_u64[0]) / 4) + 4;
      result = -1;
      if ( (unsigned __int64)v6 <= 0x3F )
        result = (1LL << v6) - 1;
      *v1 = result;
    }
    else
    {
      v7 = (const __m128i *)v3[2];
      for ( i = &v7[v3[3]]; i != v7; *v1 = result )
      {
        v9 = _mm_loadu_si128(v7);
        v10 = 4 * ((int)log2ceil(_mm_xor_si128(v9, _mm_srli_si128(v9, 8)).m128i_u64[0]) / 4) + 4;
        v11 = -1;
        if ( (unsigned __int64)v10 <= 0x3F )
          v11 = (1LL << v10) - 1;
        result = *v1 | v11;
        ++v7;
      }
    }
  }
  return result;
}
