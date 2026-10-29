__int64 __fastcall sub_1A0B2F0(__int64 a1)
{
  __m128i si128; // xmm0
  __m128i v3; // [rsp+0h] [rbp-58h] BYREF
  __int64 v4; // [rsp+10h] [rbp-48h]
  __m128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]

  sub_EE9E50(&v5, a1);
  si128 = _mm_load_si128((const __m128i *)&v5);
  v4 = v6;
  v3 = si128;
  if ( (si128.m128i_i8[8] & 3) != 0 )
    return *(_QWORD *)sub_EF2B30((__int64)&v3);
  else
    return *(_QWORD *)si128.m128i_i64[0];
}
