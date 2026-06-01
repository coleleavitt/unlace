__int64 sub_452490()
{
  __int64 nodeval_merge_handler; // rbx
  _QWORD v2[2]; // [rsp+0h] [rbp-40h] BYREF
  __m128i v3; // [rsp+10h] [rbp-30h]
  unsigned __int64 v4; // [rsp+28h] [rbp-18h]

  v4 = __readfsqword(0x28u);
  v2[1] = 0;
  v2[0] = sub_44DFD0;
  v3 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2AFF240), (__m128i)(unsigned __int64)sub_440560);
  nodeval_merge_handler = create_nodeval_merge_handler();
  if ( v3.m128i_i64[0] )
    ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v3.m128i_i64[0])(v2, v2, 3);
  return nodeval_merge_handler;
}

