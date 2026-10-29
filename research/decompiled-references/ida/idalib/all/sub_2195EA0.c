unsigned int *__fastcall sub_2195EA0(unsigned int *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __m128i v6; // xmm0
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  if ( (unsigned __int64)a3 < sub_215DEC0(a2) || (v4 = sub_215DEC0(a2), (unsigned __int64)&a3[1].m128i_u64[1] > v5 + v4) )
    sub_2195DF0();
  v6 = _mm_loadu_si128(a3);
  *((_QWORD *)a1 + 2) = a3[1].m128i_i64[0];
  v7 = *(unsigned int *)(a2 + 8);
  *(__m128i *)a1 = v6;
  if ( (unsigned int)v7 <= 0x14 )
  {
    v8 = 1398784;
    if ( _bittest64(&v8, v7) )
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
