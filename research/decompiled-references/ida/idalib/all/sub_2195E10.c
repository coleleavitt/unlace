__m128i *__fastcall sub_2195E10(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edx

  if ( (unsigned __int64)a3 < sub_215DEC0(a2) || (v4 = sub_215DEC0(a2), (unsigned __int64)a3[1].m128i_u64 + 4 > v5 + v4) )
    sub_2195DF0();
  v6 = a3[1].m128i_u32[0];
  v7 = *(unsigned int *)(a2 + 8);
  *a1 = _mm_loadu_si128(a3);
  a1[1].m128i_i32[0] = v6;
  if ( (unsigned int)v7 <= 0x14 )
  {
    v8 = 1398784;
    if ( _bittest64(&v8, v7) )
    {
      v9 = a1->m128i_i32[0];
      a1[1].m128i_i32[0] = _byteswap_ulong(v6);
      a1->m128i_i32[0] = _byteswap_ulong(v9);
      a1->m128i_i32[1] = _byteswap_ulong(a1->m128i_u32[1]);
      a1->m128i_i32[2] = _byteswap_ulong(a1->m128i_u32[2]);
      a1->m128i_i32[3] = _byteswap_ulong(a1->m128i_u32[3]);
    }
  }
  return a1;
}
