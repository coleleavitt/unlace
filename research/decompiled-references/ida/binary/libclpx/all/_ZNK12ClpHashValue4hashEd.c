__int64 __fastcall ClpHashValue::hash(ClpHashValue *this, __m128i a2)
{
  __int64 v2; // kr00_8

  v2 = (int)(249133 * ((int)((unsigned __int64)a2.m128i_i64[0] >> 16) >> 24)
           + 254291 * (_mm_cvtsi128_si32(a2) >> 24)
           + 262139 * a2.m128i_i8[0]
           + 259459 * a2.m128i_i8[1]
           + 256889 * (_mm_cvtsi128_si32(a2) << 8 >> 24)
           + 251701 * ((int)((unsigned __int64)a2.m128i_i64[0] >> 8) >> 24)
           + 246709 * ((int)((unsigned __int64)a2.m128i_i64[0] >> 24) >> 24)
           + 244247 * (a2.m128i_i64[0] >> 56));
  return (unsigned int)((int)((HIDWORD(v2) ^ v2) - HIDWORD(v2)) % *((_DWORD *)this + 5));
}

