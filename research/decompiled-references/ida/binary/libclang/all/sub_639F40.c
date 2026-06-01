__int64 __fastcall sub_639F40(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)a1 = 500;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi32((__m128i)a2, (__m128i)0LL);
  return a1;
}

