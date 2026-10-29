__int64 __fastcall sub_8EA1B0(__int64 a1, unsigned int *a2)
{
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
    *(_QWORD *)(a1 + 812) = _mm_shuffle_epi32(_mm_cvtsi32_si128(*a2), 224).m128i_u64[0];
  return 1;
}

