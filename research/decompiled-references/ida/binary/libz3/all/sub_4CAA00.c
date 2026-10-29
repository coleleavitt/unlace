void __fastcall sub_4CAA00(__int64 a1)
{
  void *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi

  v1 = (void *)(a1 - 8);
  *(__m128i *)(a1 - 8) = _mm_unpacklo_epi64(
                           _mm_loadl_epi64((const __m128i *)off_1C4F2D0),
                           (__m128i)(unsigned __int64)qword_1C65E98);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    sub_186B220((void *)(v3 - 8));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
    sub_186B220((void *)(v4 - 8));
  operator delete(v1, 0x30u);
}

