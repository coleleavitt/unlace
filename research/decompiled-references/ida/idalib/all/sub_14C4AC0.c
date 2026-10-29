__int64 __fastcall sub_14C4AC0(const __m128i *a1, unsigned int a2, __m128i a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx

  v3 = a1[6].m128i_i64[0];
  sub_18C74E0(v3, 4, 0, 4);
  *(_BYTE *)(*(_QWORD *)(a1[6].m128i_i64[0] + 4616) + 640LL * *(unsigned int *)(a1[6].m128i_i64[0] + 4624) - 38) = 1;
  v4 = sub_14BDA20((__int64)a1, 0, 0, 0, 0, nullptr, a3);
  v5 = sub_14BE680(a1, v4, 3, a3);
  v6 = sub_1C367D0(a1[6].m128i_i64[0], a2, v5);
  sub_190D5E0(v3);
  return v6;
}
