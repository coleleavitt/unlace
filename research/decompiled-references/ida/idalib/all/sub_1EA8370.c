unsigned __int64 __fastcall sub_1EA8370(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // [rsp+0h] [rbp-48h]
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __m128i v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+38h] [rbp-10h]

  v4 = a2;
  v6 = 0;
  sub_1FDD8F0(a1 + 160, sub_1EE1020, &v4, 0);
  v3 = _mm_loadu_si128(&v5).m128i_u64[0];
  if ( v6 )
    return v3;
  else
    return 0;
}
