__m128i *__fastcall sub_462C30(__m128i *a1, __int64 *a2, int *a3)
{
  __int64 v4; // r13
  int *v5; // rax

  sub_45BA50(a2, a3);
  sub_45B600(a2, (__int64)a3);
  v4 = *a2;
  v5 = sub_462100((__int64)a2, (__int64)a3);
  ++v5[2];
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)(unsigned __int64)v4);
  sub_45B180((__int64)a2);
  return a1;
}

