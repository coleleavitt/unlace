__int64 __fastcall sub_1B947B0(__int64 *a1, const __m128i *a2, double a3, __m128 a4)
{
  __m128 v4; // xmm0
  int v5; // r8d
  __int64 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __m128i v10; // [rsp+0h] [rbp-38h] BYREF
  __int64 v11; // [rsp+10h] [rbp-28h]

  v4 = (__m128)_mm_loadu_si128(a2 + 2);
  v5 = a2->m128i_i32[3];
  v6 = *(__int64 **)(*a1 + 760);
  v7 = a2[3].m128i_i64[0];
  v10 = (__m128i)v4;
  v11 = v7;
  sub_1B585F0(v6[1], 11, &v10, 0, v5);
  sub_18C74E0(*v6, 6, 0, 4);
  v8 = sub_1B91CF0(a1, a2, v4, a4);
  sub_1B335B0(*(__int64 **)(*a1 + 760), v8 & 0xFFFFFFFFFFFFFFFELL, v4, *(double *)a4.m128_u64);
  return v8;
}
