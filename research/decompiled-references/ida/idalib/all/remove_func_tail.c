__int64 __fastcall remove_func_tail(__int64 a1, unsigned __int64 a2, double a3, double a4, double a5)
{
  __m128i *v5; // rbp
  unsigned __int64 *v6; // rax

  v5 = *(__m128i **)(qword_2CCB598 + 1672);
  v6 = sub_5C93A0(v5, a1, a2);
  return sub_5CE320(v5, a1, v6, 1, a3, a4, a5);
}
