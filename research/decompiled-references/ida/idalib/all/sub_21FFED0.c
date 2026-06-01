void *__fastcall sub_21FFED0(__m128i *a1, __m128i *a2)
{
  *a1 = _mm_loadu_si128(a2);
  a2->m128i_i64[0] = (__int64)&unk_26F7B40;
  a2->m128i_i64[1] = 0;
  return &unk_26F7B40;
}
