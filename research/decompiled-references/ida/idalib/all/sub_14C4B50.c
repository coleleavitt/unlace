__int64 __fastcall sub_14C4B50(const __m128i *a1, unsigned int a2, __m128i a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = sub_14BDA20((__int64)a1, 0, 0, a2, 0, nullptr, a3);
  v4 = sub_14BE680(a1, v3, 3, a3);
  return sub_19146D0(a1[6].m128i_i64[0], v4);
}
