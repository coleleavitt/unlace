__int64 *__fastcall sub_4CAAD0(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 *result; // rax
  __int64 v5; // rdi

  *(__m128i *)(a1 - 1) = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)off_1C4F2D8),
                           (__m128i)(unsigned __int64)off_1C4F068);
  v2 = a1[4];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[2];
  result = qword_1C65E98;
  *a1 = qword_1C65E98;
  if ( v3 )
    result = (__int64 *)sub_186B220((void *)(v3 - 8));
  v5 = a1[1];
  if ( v5 )
    return (__int64 *)sub_186B220((void *)(v5 - 8));
  return result;
}

