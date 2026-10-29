__int64 __fastcall sub_14C4CD0(const __m128i *a1, __m128i a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rbx

  v2 = a1[6].m128i_i64[0];
  sub_18C74E0(v2, 4, 0, 4);
  v3 = sub_14BDA20((__int64)a1, 0, 0, 0, 0, nullptr, a2);
  v4 = sub_14BE680(a1, v3, 3, a2);
  v5 = sub_19146D0(a1[6].m128i_i64[0], v4);
  sub_190D5E0(v2);
  return v5;
}
