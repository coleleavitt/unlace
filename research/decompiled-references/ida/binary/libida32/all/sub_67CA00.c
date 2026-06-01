__int64 sub_67CA00()
{
  __int128 v1; // [rsp+0h] [rbp-40h] BYREF
  __m128i v2; // [rsp+10h] [rbp-30h]
  unsigned __int64 v3; // [rsp+28h] [rbp-18h]

  v3 = __readfsqword(0x28u);
  v2 = 0u;
  v1 = 0;
  if ( sub_6782E0 )
  {
    *(_QWORD *)&v1 = sub_6782E0;
    v2 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B0DA78), (__m128i)(unsigned __int64)sub_440560);
  }
  create_nodeval_merge_handler();
  if ( v2.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v2.m128i_i64[0])(&v1, &v1, 3);
  return 0;
}

