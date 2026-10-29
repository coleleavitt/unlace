__int64 __fastcall sub_8C18B0(__int64 a1)
{
  const __m128i *v1; // rax
  __m128i v3; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(const __m128i **)(a1 + 16);
  if ( !v1 )
    return *(unsigned int *)(a1 + 4);
  v3 = _mm_unpacklo_epi64(_mm_loadl_epi64(v1), (__m128i)(unsigned __int64)&v1->m128i_u64[1]);
  return sub_B1E2D0(&v3);
}

