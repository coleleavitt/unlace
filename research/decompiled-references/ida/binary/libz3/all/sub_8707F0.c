__int64 __fastcall sub_8707F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __m128i si128; // [rsp+0h] [rbp-58h] BYREF
  __m128i v4; // [rsp+10h] [rbp-48h]
  __m128i v5[3]; // [rsp+20h] [rbp-38h] BYREF

  v5[0].m128i_i64[0] = a1;
  *(__m128i *)((char *)v5 + 8) = 0;
  si128 = _mm_load_si128(v5);
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55748), (__m128i)(unsigned __int64)sub_86A4D0);
  sub_870370(a1, a2, (__int64)&si128);
  result = v4.m128i_i64[0];
  if ( v4.m128i_i64[0] )
    return ((__int64 (__fastcall *)(__m128i *, __m128i *, __int64))v4.m128i_i64[0])(&si128, &si128, 3);
  return result;
}

