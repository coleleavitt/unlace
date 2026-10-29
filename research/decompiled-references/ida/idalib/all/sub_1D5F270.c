__int64 __fastcall sub_1D5F270(__int64 *a1, const __m128i *a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int64 v6; // rax
  int v7; // r8d
  __int64 *v8; // rdi
  __int64 v9; // rbp
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]

  v6 = *a1;
  v7 = a2->m128i_i32[3];
  v11.m128i_i64[0] = 0;
  v8 = *(__int64 **)(v6 + 760);
  v11.m128i_i32[2] = 0;
  v12 = 0;
  sub_1B5B570(v8, 43, &v11, 0, v7);
  v9 = sub_1D5D6F0(a1, a2, a3, a4, a5);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v9 & 0xFFFFFFFFFFFFFFFELL, a3, *(double *)a4.m128_u64);
  return v9;
}
