__int64 __fastcall sub_77AB90(__int64 a1)
{
  const __m128i *v1; // rdx
  __int64 result; // rax
  __m128i v3; // [rsp+0h] [rbp-18h] BYREF

  v1 = (const __m128i *)(*(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a1 + 56) & 4) != 0 )
    v1 = (const __m128i *)v1[2].m128i_i64[0];
  result = 0;
  if ( v1 )
  {
    v3 = _mm_unpacklo_epi64(_mm_loadl_epi64(v1), (__m128i)(unsigned __int64)&v1->m128i_u64[1]);
    return sub_B1E2D0(&v3);
  }
  return result;
}

