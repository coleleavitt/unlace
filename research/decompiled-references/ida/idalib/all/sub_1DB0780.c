__int64 __fastcall sub_1DB0780(
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
  __int64 v12; // rax
  int v13; // r8d
  int v14; // esi
  __int64 *v15; // rdi
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rbp
  __m128i v20; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+10h] [rbp-28h]

  v12 = *a1;
  v13 = a2->m128i_i32[3];
  v14 = a2->m128i_i32[2];
  v20.m128i_i64[0] = 0;
  v15 = *(__int64 **)(v12 + 760);
  v20.m128i_i32[2] = 0;
  v21 = 0;
  sub_1B5B570(v15, v14, &v20, 0, v13);
  v18 = sub_1DAF6F0(a1, a2, a3, a4, a5, a6, v16, v17, a9, a10);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v18 & 0xFFFFFFFFFFFFFFFELL, a3, *(double *)a4.m128_u64);
  return v18;
}
