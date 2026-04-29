void __fastcall sub_58F40(__int64 a1, __int64 a2)
{
  void *v2; // r13
  unsigned __int64 v4; // rbp
  __int64 v5; // rdi

  v2 = nullptr;
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = a2;
  if ( v4 )
  {
    v2 = (void *)qalloc_or_throw(8 * v4);
    memcpy(v2, *(const void **)a2, 8 * v4);
    v5 = *(_QWORD *)(a1 + 8);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 16) = 0;
      qfree(v5);
    }
  }
  *(_QWORD *)(a1 + 8) = v2;
  *(__m128i *)(a1 + 16) = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v4);
}
