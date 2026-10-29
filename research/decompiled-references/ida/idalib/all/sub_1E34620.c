__int64 __fastcall sub_1E34620(
        __int64 *a1,
        const __m128i *a2,
        __m128 a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __int64 v11; // rax
  int v12; // r8d
  __int64 *v13; // rdi
  double v14; // xmm4_8
  double v15; // xmm5_8
  __int64 v16; // rbp
  __m128i v18; // [rsp+0h] [rbp-38h] BYREF
  __int64 v19; // [rsp+10h] [rbp-28h]

  v11 = *a1;
  v12 = a2->m128i_i32[3];
  v18.m128i_i64[0] = 0;
  v13 = *(__int64 **)(v11 + 760);
  v18.m128i_i32[2] = 0;
  v19 = 0;
  sub_1B5B570(v13, 91, &v18, 0, v12);
  v16 = sub_1E332F0(a1, a2, a3, a4, a5, a6, v14, v15, a9, a10);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v16 & 0xFFFFFFFFFFFFFFFELL, a3, *(double *)a4.m128_u64);
  return v16;
}
