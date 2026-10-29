__int64 __fastcall sub_1B70210(_QWORD *a1, const __m128i *a2, __m128 a3, __m128 a4)
{
  __int64 v4; // rax
  int v5; // r8d
  __int64 *v6; // r12
  __int64 v7; // rbp
  __m128i v9; // [rsp+0h] [rbp-38h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h]

  v4 = *a1;
  v5 = a2->m128i_i32[3];
  v9.m128i_i32[2] = 0;
  v6 = *(__int64 **)(v4 + 760);
  v9.m128i_i64[0] = 0;
  v10 = 0;
  sub_1B585F0(v6[1], 114, &v9, 0, v5);
  sub_18C74E0(*v6, 6, 0, 4);
  v7 = sub_1B6ED40(a1, a2, a3, a4);
  sub_1B335B0(*(__int64 **)(*a1 + 760LL), v7 & 0xFFFFFFFFFFFFFFFELL, a3, *(double *)a4.m128_u64);
  return v7;
}
