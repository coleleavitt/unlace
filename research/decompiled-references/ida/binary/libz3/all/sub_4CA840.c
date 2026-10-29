__int64 *__fastcall sub_4CA840(__m128i *a1)
{
  __int64 *result; // rax
  __int64 v3; // rdi
  __int64 v4; // rdi

  result = qword_1C65E98;
  *a1 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4F2D0), (__m128i)(unsigned __int64)qword_1C65E98);
  v3 = a1[1].m128i_i64[1];
  if ( v3 )
    result = (__int64 *)sub_186B220((void *)(v3 - 8));
  v4 = a1[1].m128i_i64[0];
  if ( v4 )
    return (__int64 *)sub_186B220((void *)(v4 - 8));
  return result;
}

