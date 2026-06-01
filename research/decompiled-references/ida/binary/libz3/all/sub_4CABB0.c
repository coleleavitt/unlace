void __fastcall sub_4CABB0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v1 = a1 - 1;
  *(__m128i *)(a1 - 1) = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)off_1C4F2D8),
                           (__m128i)(unsigned __int64)off_1C4F068);
  v3 = a1[4];
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = a1[2];
  *a1 = qword_1C65E98;
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  v5 = a1[1];
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
  operator delete(v1, 0x30u);
}

