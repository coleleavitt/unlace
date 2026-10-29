unsigned __int64 __fastcall sub_777D20(__int64 a1)
{
  return _mm_shuffle_epi32(_mm_loadl_epi64((const __m128i *)(a1 + 84)), 225).m128i_u64[0];
}

