char __fastcall sub_C12AB0(__int64 a1, const __m128i *a2)
{
  char result; // al
  __int8 v3; // dl
  __int64 v4; // rbp
  _OWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF

  v5[0] = _mm_load_si128(a2);
  result = sub_A4F700(v5);
  if ( result )
  {
    v3 = a2[1].m128i_i8[8];
    if ( (v3 & 3) != 0
      || (a2[3].m128i_i32[2] != 1 || (result = 0, (v3 & 4) == 0))
      && (result = 0, (a2[1].m128i_i8[8] & 8) != 0)
      && *(_QWORD *)(a2[3].m128i_i64[0] + 8LL * (((unsigned __int32)a2[1].m128i_i32[2] >> 4) - 1)) == a2[2].m128i_i64[0] )
    {
      v5[0] = _mm_load_si128(a2);
      v4 = sub_A4F310(v5);
      result = sub_F62670(*(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFF0LL), 0);
      if ( !result && (a2[1].m128i_i8[8] & 1) == 0 )
        return a2[1].m128i_i64[0] == sub_AAE980(a1, v4);
    }
  }
  return result;
}
