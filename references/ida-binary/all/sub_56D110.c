__m128i *__fastcall sub_56D110(__int64 a1, __m128i *a2)
{
  __m128i *v2; // rbp

  if ( ((unsigned __int8)a2 & 1) != 0 || a2->m128i_i32[0] == 1 )
    return a2;
  v2 = sub_56B9A0(a2);
  sub_56C9A0(a1, a2->m128i_i32);
  return v2;
}
