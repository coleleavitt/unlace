__m128i *__fastcall sub_2198510(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rdx
  __int64 m128i_i64; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm3
  __m128i v12; // xmm4
  __m128i si128; // xmm5
  __int64 v14; // [rsp+8h] [rbp-50h] BYREF
  __m128i v15; // [rsp+10h] [rbp-48h] BYREF
  __m128i v16; // [rsp+20h] [rbp-38h] BYREF
  __m128i v17[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int64)a3 >= sub_215DEC0(a2)
    && (v6 = sub_215DEC0(a2), m128i_i64 = (__int64)a3[3].m128i_i64, (unsigned __int64)&a3[3] <= v4 + v6) )
  {
    v9 = *(unsigned int *)(a2 + 8);
    v15 = _mm_loadu_si128(a3);
    v16 = _mm_loadu_si128(a3 + 1);
    v17[0] = _mm_loadu_si128(a3 + 2);
    if ( (unsigned int)v9 <= 0x14 )
    {
      v10 = 1398784;
      if ( _bittest64(&v10, v9) )
        sub_21984B0((unsigned int *)&v15);
    }
    v11 = _mm_load_si128(&v15);
    v12 = _mm_load_si128(&v16);
    si128 = _mm_load_si128(v17);
    a1[3].m128i_i8[0] &= ~1u;
    *a1 = v11;
    a1[1] = v12;
    a1[2] = si128;
    return a1;
  }
  else
  {
    v15.m128i_i64[0] = (__int64)"Structure read out-of-range";
    v17[0].m128i_i16[0] = 259;
    sub_21967F0(&v14, v15.m128i_i64, v4, m128i_i64);
    v7 = v14;
    a1[3].m128i_i8[0] |= 1u;
    a1->m128i_i64[0] = v7;
    return a1;
  }
}
