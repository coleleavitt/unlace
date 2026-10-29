_QWORD *__fastcall sub_466860(__int64 *a1)
{
  _QWORD *v1; // rbx
  __m128i v3; // [rsp+0h] [rbp-40h] BYREF
  __m128i v4; // [rsp+10h] [rbp-30h]
  unsigned __int64 v5; // [rsp+28h] [rbp-18h]

  v5 = __readfsqword(0x28u);
  v3.m128i_i64[1] = 0;
  v3.m128i_i64[0] = (__int64)sub_462360;
  v4 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B29200), (__m128i)(unsigned __int64)sub_4542A0);
  v1 = create_nodeval_merge_handler(a1, (__int64)"Watchpoints", -1, "$ watch list", 65, 321, &v3, 1);
  if ( v4.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v4.m128i_i64[0])(&v3, &v3, 3);
  return v1;
}
