void __fastcall sub_4CA8E0(__m128i *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *a1 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_1C4F2C8), (__m128i)(unsigned __int64)qword_1C65E98);
  v2 = a1[1].m128i_i64[1];
  if ( v2 )
    sub_186B220((void *)(v2 - 8));
  v3 = a1[1].m128i_i64[0];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  operator delete(a1, 0x30u);
}

