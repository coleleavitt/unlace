unsigned __int64 __fastcall sub_2762C0(unsigned __int64 *src, unsigned __int64 *a2, const __m128i *a3)
{
  __int32 v3; // ecx
  __m128i v4; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 *v8; // r15
  __int32 v9; // edx
  __int64 v10; // rdx
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v14; // [rsp+8h] [rbp-70h]
  __int64 (__fastcall **v15)(); // [rsp+10h] [rbp-68h] BYREF
  __int32 v16; // [rsp+18h] [rbp-60h]
  __m128i v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  unsigned __int64 v19; // [rsp+38h] [rbp-40h]

  v3 = a3->m128i_i32[2];
  v4 = _mm_loadu_si128(a3 + 1);
  v19 = __readfsqword(0x28u);
  v6 = a3[2].m128i_i64[0];
  if ( (char *)a2 - (char *)src <= 112 )
  {
    v18 = v6;
    v16 = v3;
    v15 = diffpos_sorting_strategy_t___vtable;
    v17 = v4;
    sub_275F80(src, a2, (__int64)&v15);
  }
  else
  {
    v7 = ((char *)a2 - (char *)src) >> 4;
    v18 = v6;
    v16 = v3;
    v8 = &src[v7];
    v14 = 8 * v7;
    v17 = v4;
    v15 = diffpos_sorting_strategy_t___vtable;
    sub_2762C0(src);
    v9 = a3->m128i_i32[2];
    v15 = diffpos_sorting_strategy_t___vtable;
    v16 = v9;
    v10 = a3[2].m128i_i64[0];
    v17 = _mm_loadu_si128(a3 + 1);
    v18 = v10;
    sub_2762C0(v8);
    v11 = _mm_loadu_si128(a3 + 1);
    v12 = a3[2].m128i_i64[0];
    v16 = a3->m128i_i32[2];
    v15 = diffpos_sorting_strategy_t___vtable;
    v18 = v12;
    v17 = v11;
    sub_276070((char *)src, (char *)v8, (__int64)a2, v14 >> 3, a2 - v8, (__int64)&v15);
  }
  return v19 - __readfsqword(0x28u);
}
