__int64 __fastcall sub_1C9FB70(
        __int64 *a1,
        const __m128i *a2,
        double a3,
        __m128 a4,
        __m128i a5,
        __m128i a6,
        double a7,
        double a8,
        __m128 a9,
        __m128i a10)
{
  __m128 v11; // xmm0
  int v12; // r8d
  __int64 *v13; // rdi
  __int64 v14; // rax
  double v15; // xmm4_8
  double v16; // xmm5_8
  __int64 v17; // rbx
  __m128i v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h]

  v11 = (__m128)_mm_loadu_si128(a2 + 2);
  v12 = a2->m128i_i32[3];
  v13 = *(__int64 **)(*a1 + 760);
  v14 = a2[3].m128i_i64[0];
  v19 = (__m128i)v11;
  v20 = v14;
  sub_1B5B570(v13, 11, &v19, 0, v12);
  v17 = sub_1C9D960(a1, a2, v11, a4, a5, a6, v15, v16, a9, a10);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v17 & 0xFFFFFFFFFFFFFFFELL, v11, *(double *)a4.m128_u64);
  return v17;
}
