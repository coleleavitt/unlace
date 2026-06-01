__int64 __fastcall sub_1D5F900(__int64 *a1, const __m128i *a2, double a3, __m128 a4, __m128i a5)
{
  __m128 v6; // xmm0
  int v7; // r8d
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rbx
  __m128i v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+10h] [rbp-28h]

  v6 = (__m128)_mm_loadu_si128(a2 + 2);
  v7 = a2->m128i_i32[3];
  v8 = *(__int64 **)(*a1 + 760);
  v9 = a2[3].m128i_i64[0];
  v12 = (__m128i)v6;
  v13 = v9;
  sub_1B5B570(v8, 11, &v12, 0, v7);
  v10 = sub_1D5D6F0(a1, a2, v6, a4, a5);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v10 & 0xFFFFFFFFFFFFFFFELL, v6, *(double *)a4.m128_u64);
  return v10;
}
