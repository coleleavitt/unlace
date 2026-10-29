void __fastcall sub_140A5B0(__m128i *a1, char *a2, unsigned __int8 (__fastcall *a3)(const __m128i *, __int64))
{
  __int64 v4; // rbx

  if ( a2 - (char *)a1 <= 1008 )
  {
    sub_1403ED0((__int64)a1, a2, a3);
  }
  else
  {
    v4 = 72 * ((__int64)(0x8E38E38E38E38E39LL * ((a2 - (char *)a1) >> 3)) >> 1);
    sub_140A5B0(a1, &a1->m128i_i8[v4]);
    sub_140A5B0(&a1->m128i_i8[v4], a2);
    sub_140A2D0(
      a1,
      (__m128i *)((char *)a1 + v4),
      (__int64)a2,
      0x8E38E38E38E38E39LL * (v4 >> 3),
      0x8E38E38E38E38E39LL * ((a2 - &a1->m128i_i8[v4]) >> 3),
      (unsigned __int8 (__fastcall *)(__m128i *, __m128i *))a3);
  }
}
