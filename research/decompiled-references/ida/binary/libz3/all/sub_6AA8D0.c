__int64 __fastcall sub_6AA8D0(__m128i *a1, unsigned __int64 a2, __int64 a3)
{
  a1[1].m128i_i64[0] = 0;
  *a1 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  return sub_15EEF60(a3);
}

