char __fastcall sub_824700(__int64 a1, const __m128i *a2)
{
  __int8 v2; // al
  __int64 v3; // r12
  char result; // al
  _OWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v5[0] = _mm_loadu_si128(a2);
  if ( sub_69F610(v5) )
  {
    v2 = a2[1].m128i_i8[8];
    if ( (v2 & 3) == 0 )
    {
      if ( a2[3].m128i_i32[2] == 1 && (v2 & 4) != 0 )
        return 0;
      if ( (v2 & 8) == 0 )
        return 0;
      if ( *(_QWORD *)(a2[3].m128i_i64[0] + 8LL * (((unsigned __int32)a2[1].m128i_i32[2] >> 4) - 1)) != a2[2].m128i_i64[0] )
        return 0;
    }
    v5[0] = _mm_loadu_si128(a2);
    v3 = sub_69F240((__int64 *)v5);
    result = sub_B19120(*(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFF0LL), 0);
    if ( result )
      return result;
    if ( (a2[1].m128i_i8[8] & 1) == 0 )
      return a2[1].m128i_i64[0] == sub_70E2F0(a1, v3);
  }
  return 0;
}

