unsigned int *__fastcall sub_2198930(unsigned int *a1, __int64 a2)
{
  const __m128i *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __m128i v5; // xmm1
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __m128i si128; // xmm0

  v2 = *(const __m128i **)(a2 + 272);
  if ( v2 )
  {
    if ( (unsigned __int64)v2 < sub_215DEC0(a2)
      || (v3 = sub_215DEC0(a2), (unsigned __int64)&v2[1].m128i_u64[1] > v4 + v3) )
    {
      sub_2195DF0();
    }
    v5 = _mm_loadu_si128(v2);
    *((_QWORD *)a1 + 2) = v2[1].m128i_i64[0];
    v6 = *(unsigned int *)(a2 + 8);
    *(__m128i *)a1 = v5;
    if ( (unsigned int)v6 <= 0x14 )
    {
      v7 = 1398784;
      if ( _bittest64(&v7, v6) )
      {
        *a1 = _byteswap_ulong(*a1);
        a1[1] = _byteswap_ulong(a1[1]);
        a1[2] = _byteswap_ulong(a1[2]);
        a1[3] = _byteswap_ulong(a1[3]);
        a1[4] = _byteswap_ulong(a1[4]);
        a1[5] = _byteswap_ulong(a1[5]);
      }
    }
    return a1;
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AB740);
    *((_QWORD *)a1 + 2) = 0;
    *(__m128i *)a1 = si128;
    return a1;
  }
}
