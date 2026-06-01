__int64 __fastcall sub_1D07A00(__int64 *a1, const __m128i *a2, __m128 a3, __m128 a4, __m128i a5)
{
  __int64 v7; // rax
  int v8; // r8d
  int v9; // esi
  __int64 *v10; // rdi
  __int64 v11; // rbp
  __m128i v13; // [rsp+0h] [rbp-38h] BYREF
  __int64 v14; // [rsp+10h] [rbp-28h]

  v7 = *a1;
  v8 = a2->m128i_i32[3];
  v9 = a2->m128i_i32[2];
  v13.m128i_i64[0] = 0;
  v10 = *(__int64 **)(v7 + 760);
  v13.m128i_i32[2] = 0;
  v14 = 0;
  sub_1B5B570(v10, v9, &v13, 0, v8);
  v11 = sub_1D06B30(a1, a2, a3, a4, a5);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v11 & 0xFFFFFFFFFFFFFFFELL, a3, *(double *)a4.m128_u64);
  return v11;
}
