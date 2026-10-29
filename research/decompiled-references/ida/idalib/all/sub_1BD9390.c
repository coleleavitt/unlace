__m128i *__fastcall sub_1BD9390(__m128i *a1, const __m128i *a2)
{
  __m128i *v4; // rdi

  if ( (a1->m128i_i32[0] & 0x7FFFFFFF) == 3 )
  {
    v4 = (__m128i *)a1[2].m128i_i64[0];
    if ( v4 != &a1[3] )
      free(v4);
  }
  sub_1A0B340(a1, a2);
  return a1;
}
