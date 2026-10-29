__int64 __fastcall sub_1DF9980(
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  double v19; // xmm4_8
  double v20; // xmm5_8
  __int64 v21; // rbp
  __m128i v23; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+10h] [rbp-28h]

  v12 = *a1;
  v13 = a2->m128i_i32[3];
  v14 = a2->m128i_i32[2];
  v23.m128i_i64[0] = 0;
  v15 = *(__int64 **)(v12 + 760);
  v23.m128i_i32[2] = 0;
  v24 = 0;
  sub_1B5B570(v15, v14, &v23, 0, v13);
  v21 = sub_1DF8AB0(a1, a2, a3, a4, a5, a6, v19, v20, a9, a10, v16, v17, v18);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v21 & 0xFFFFFFFFFFFFFFFELL, a3, *(double *)a4.m128_u64);
  return v21;
}
