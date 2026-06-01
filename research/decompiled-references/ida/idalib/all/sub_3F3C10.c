void __fastcall sub_3F3C10(__int64 a1)
{
  char *v1; // rbp
  __m128i v2; // xmm0
  char *v3; // rbp

  v1 = *(char **)a1;
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v1 )
  {
    if ( *v1 )
      sub_3F1AB0((size_t *)a1, v1);
    qfree(v1);
    v2 = 0;
  }
  v3 = *(char **)(a1 + 24);
  *(__m128i *)(a1 + 32) = v2;
  *(_QWORD *)(a1 + 24) = 0;
  if ( v3 )
  {
    if ( *v3 )
      sub_3F1AB0((size_t *)(a1 + 24), v3);
    qfree(v3);
  }
}
