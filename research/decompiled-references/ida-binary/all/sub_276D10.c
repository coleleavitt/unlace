unsigned __int64 __fastcall sub_276D10(
        unsigned __int64 *dest,
        unsigned __int64 *src,
        unsigned __int64 *a3,
        char *a4,
        const __m128i *a5)
{
  __int64 v6; // rdx
  __int32 v7; // eax
  __m128i v9; // xmm0
  __int32 v10; // edx
  __m128i v11; // xmm0
  __int64 v12; // rdx
  __int32 v13; // edx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v18; // [rsp+10h] [rbp-68h] BYREF
  __m128i v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+30h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-40h]

  v6 = a5[2].m128i_i64[0];
  v7 = a5->m128i_i32[2];
  v21 = __readfsqword(0x28u);
  v9 = _mm_loadu_si128(a5 + 1);
  v20 = v6;
  v18.m128i_i32[2] = v7;
  v19 = v9;
  v18.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
  sub_276B20(dest, src, a4, &v18);
  v10 = a5->m128i_i32[2];
  v11 = _mm_loadu_si128(a5 + 1);
  v18.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
  v18.m128i_i32[2] = v10;
  v12 = a5[2].m128i_i64[0];
  v19 = v11;
  v20 = v12;
  sub_276B20(src, a3, a4, &v18);
  v13 = a5->m128i_i32[2];
  v14 = a5[2].m128i_i64[0];
  v15 = _mm_loadu_si128(a5 + 1);
  v18.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
  v18.m128i_i32[2] = v13;
  v19 = v15;
  v20 = v14;
  sub_275D40((char *)dest, (char *)src, (char *)a3, src - dest, a3 - src, a4, (__int64)&v18);
  return v21 - __readfsqword(0x28u);
}
