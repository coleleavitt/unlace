unsigned __int64 __fastcall sub_19A73F0(
        __m128i *a1,
        unsigned __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  unsigned __int64 v13; // rax
  unsigned __int64 v14[8]; // [rsp+8h] [rbp-40h] BYREF

  v10 = sub_6F3470(*(_QWORD *)(a1[15].m128i_i64[1] + 17504), "expr-type", 9u);
  v11 = sub_BBE1D0((_QWORD *)a1[15].m128i_i64[1], a1[34].m128i_i64[0], 0, 0, a6, 0, v10, 1, 0, 1u, 0);
  if ( (unsigned __int8)sub_1CD1E20(a1, a4, a5, v11, 0, 1) )
    return sub_19A54F0(a1, a2, 0, a3, 0);
  v14[0] = v11;
  v13 = sub_BC21A0((_QWORD *)a1[15].m128i_i64[1], 0, 0, (__int64)v14, 1, 0, nullptr);
  sub_A55640(v14, v13);
  return sub_19A54F0(a1, a2, 0, a3, v14[0]);
}
