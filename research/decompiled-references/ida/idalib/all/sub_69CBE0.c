__int64 __fastcall sub_69CBE0(__int64 *a1)
{
  __m128i v2; // [rsp+0h] [rbp-40h] BYREF
  __m128i v3; // [rsp+10h] [rbp-30h]
  unsigned __int64 v4; // [rsp+28h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  v3 = 0u;
  v2 = 0;
  if ( sub_698100 )
  {
    v2.m128i_i64[0] = (__int64)sub_698100;
    v3 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B37A38), (__m128i)(unsigned __int64)sub_4542A0);
  }
  create_nodeval_merge_handler(a1, 0, -1, "$ tryblks", 84, 288, &v2, 1);
  if ( v3.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v3.m128i_i64[0])(&v2, &v2, 3);
  return 0;
}
