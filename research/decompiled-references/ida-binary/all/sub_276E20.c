unsigned __int64 __fastcall sub_276E20(
        unsigned __int64 *dest,
        unsigned __int64 *a2,
        char *a3,
        __int64 a4,
        const __m128i *a5)
{
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  unsigned __int64 *v10; // r15
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int32 v14; // edx
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v18; // [rsp+8h] [rbp-70h]
  __m128i v19; // [rsp+10h] [rbp-68h] BYREF
  __m128i v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+30h] [rbp-48h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v6 = (a2 - dest + 1) / 2;
  v7 = _mm_loadu_si128(a5 + 1);
  v8 = a5[2].m128i_i64[0];
  v22 = __readfsqword(0x28u);
  v18 = 8 * v6;
  v10 = &dest[v6];
  if ( v6 <= a4 )
  {
    v19.m128i_i32[2] = a5->m128i_i32[2];
    v21 = v8;
    v19.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
    v20 = v7;
    sub_276D10(dest, v10, a2, a3, &v19);
  }
  else
  {
    v19.m128i_i32[2] = a5->m128i_i32[2];
    v19.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
    v21 = v8;
    v20 = v7;
    sub_276E20(dest);
    v12 = _mm_loadu_si128(a5 + 1);
    v19.m128i_i32[2] = a5->m128i_i32[2];
    v13 = a5[2].m128i_i64[0];
    v19.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
    v21 = v13;
    v20 = v12;
    sub_276E20(v10);
    v14 = a5->m128i_i32[2];
    v15 = _mm_loadu_si128(a5 + 1);
    v19.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
    v16 = a5[2].m128i_i64[0];
    v19.m128i_i32[2] = v14;
    v21 = v16;
    v20 = v15;
    sub_276400((char *)dest, (char *)v10, (char *)a2, v18 >> 3, a2 - v10, a3, a4, &v19);
  }
  return v22 - __readfsqword(0x28u);
}
