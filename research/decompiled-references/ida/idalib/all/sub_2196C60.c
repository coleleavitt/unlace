__m128i *__fastcall sub_2196C60(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // xmm3
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edx

  if ( (unsigned __int64)a3 < sub_215DEC0(a2) || (v4 = sub_215DEC0(a2), (unsigned __int64)a3[4].m128i_u64 + 4 > v5 + v4) )
    sub_2221C70("Malformed MachO file.", 1);
  v6 = _mm_loadu_si128(a3 + 1);
  v7 = _mm_loadu_si128(a3 + 2);
  v8 = _mm_loadu_si128(a3 + 3);
  v9 = a3[4].m128i_u32[0];
  v10 = *(unsigned int *)(a2 + 8);
  *a1 = _mm_loadu_si128(a3);
  a1[1] = v6;
  a1[2] = v7;
  a1[3] = v8;
  a1[4].m128i_i32[0] = v9;
  if ( (unsigned int)v10 <= 0x14 )
  {
    v11 = 1398784;
    if ( _bittest64(&v11, v10) )
    {
      v12 = a1[2].m128i_u32[0];
      a1[4].m128i_i32[0] = _byteswap_ulong(v9);
      a1[2].m128i_i32[0] = _byteswap_ulong(v12);
      a1[2].m128i_i32[1] = _byteswap_ulong(a1[2].m128i_u32[1]);
      a1[2].m128i_i32[2] = _byteswap_ulong(a1[2].m128i_u32[2]);
      a1[2].m128i_i32[3] = _byteswap_ulong(a1[2].m128i_u32[3]);
      a1[3].m128i_i32[0] = _byteswap_ulong(a1[3].m128i_u32[0]);
      a1[3].m128i_i32[1] = _byteswap_ulong(a1[3].m128i_u32[1]);
      a1[3].m128i_i32[2] = _byteswap_ulong(a1[3].m128i_u32[2]);
      a1[3].m128i_i32[3] = _byteswap_ulong(a1[3].m128i_u32[3]);
    }
  }
  return a1;
}
