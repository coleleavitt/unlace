void __fastcall sub_DBA400(__int64 a1, unsigned __int64 a2)
{
  *(__m128i *)a1 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 48) = 0;
}

