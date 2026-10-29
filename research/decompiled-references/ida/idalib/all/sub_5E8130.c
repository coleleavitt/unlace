__int64 __fastcall sub_5E8130(__m128i *a1)
{
  __int64 v1; // rax
  __int32 v2; // edx

  sub_5E8070((__int64)a1);
  v1 = sub_5E7430((__int64)a1);
  v2 = a1[30].m128i_i32[2];
  a1[8].m128i_i64[0] = v1;
  a1[7] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v1, (__m128i)(unsigned __int64)v1);
  *(_DWORD *)(v1 + 188) = v2;
  return 0;
}
