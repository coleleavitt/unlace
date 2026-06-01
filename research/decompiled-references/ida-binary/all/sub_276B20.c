unsigned __int64 __fastcall sub_276B20(unsigned __int64 *src, unsigned __int64 *a2, char *a3, const __m128i *a4)
{
  unsigned __int64 *v6; // r15
  __m128i v7; // xmm1
  unsigned __int64 *v8; // rdi
  __m128i v9; // xmm3
  __int64 v10; // r15
  __int32 v11; // edx
  __m128i v12; // xmm0
  __int64 v13; // rdx
  __int32 v14; // edx
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v17; // rdx
  __m128i v19; // xmm4
  __int32 v21; // [rsp+Ch] [rbp-9Ch]
  __m128i v22; // [rsp+10h] [rbp-98h] BYREF
  __int64 v23; // [rsp+20h] [rbp-88h]
  char *v24; // [rsp+28h] [rbp-80h]
  __int64 v25; // [rsp+30h] [rbp-78h]
  __int64 v26; // [rsp+38h] [rbp-70h]
  __m128i v27; // [rsp+40h] [rbp-68h] BYREF
  __m128i v28; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  v22 = _mm_loadu_si128(a4 + 1);
  v26 = (char *)a2 - (char *)src;
  v25 = a2 - src;
  v24 = &a3[(char *)a2 - (char *)src];
  v21 = a4->m128i_i32[2];
  v23 = a4[2].m128i_i64[0];
  if ( (char *)a2 - (char *)src <= 48 )
  {
    v19 = _mm_load_si128(&v22);
    v27.m128i_i32[2] = v21;
    v27.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
    v28 = v19;
    v29 = v23;
    sub_275F80(src, a2, (__int64)&v27);
  }
  else
  {
    v6 = src;
    do
    {
      v7 = _mm_load_si128(&v22);
      v8 = v6;
      v6 += 7;
      v27.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
      v27.m128i_i32[2] = v21;
      v28 = v7;
      v29 = v23;
      sub_275F80(v8, v6, (__int64)&v27);
    }
    while ( (char *)a2 - (char *)v6 > 48 );
    v9 = _mm_load_si128(&v22);
    v27.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
    v27.m128i_i32[2] = v21;
    v28 = v9;
    v29 = v23;
    sub_275F80(v6, a2, (__int64)&v27);
    if ( v26 > 56 )
    {
      v10 = 7;
      do
      {
        v11 = a4->m128i_i32[2];
        v12 = _mm_loadu_si128(a4 + 1);
        v27.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
        v27.m128i_i32[2] = v11;
        v13 = a4[2].m128i_i64[0];
        v28 = v12;
        v29 = v13;
        sub_2769D0((char *)src, (char *)a2, a3, v10, &v27);
        v14 = a4->m128i_i32[2];
        v15 = _mm_loadu_si128(a4 + 1);
        v16 = 2 * v10;
        v27.m128i_i64[0] = (__int64)diffpos_sorting_strategy_t___vtable;
        v27.m128i_i32[2] = v14;
        v17 = a4[2].m128i_i64[0];
        v10 *= 4;
        v28 = v15;
        v29 = v17;
        sub_2769D0(a3, v24, src, v16, &v27);
      }
      while ( v25 > v10 );
    }
  }
  return v30 - __readfsqword(0x28u);
}
