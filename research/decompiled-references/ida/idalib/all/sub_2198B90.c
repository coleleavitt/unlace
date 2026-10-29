__m128i *__fastcall sub_2198B90(__m128i *a1, __int64 a2)
{
  const __m128i *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *(const __m128i **)(a2 + 280);
  if ( v2 )
  {
    if ( (unsigned __int64)v2 < sub_215DEC0(a2) || (v3 = sub_215DEC0(a2), (unsigned __int64)&v2[5] > v4 + v3) )
      sub_2221C70("Malformed MachO file.", 1);
    v5 = *(unsigned int *)(a2 + 8);
    *a1 = _mm_loadu_si128(v2);
    a1[1] = _mm_loadu_si128(v2 + 1);
    a1[2] = _mm_loadu_si128(v2 + 2);
    a1[3] = _mm_loadu_si128(v2 + 3);
    a1[4] = _mm_loadu_si128(v2 + 4);
    if ( (unsigned int)v5 <= 0x14 )
    {
      v6 = 1398784;
      if ( _bittest64(&v6, v5) )
        sub_21985F0((unsigned int *)a1);
    }
    return a1;
  }
  else
  {
    *a1 = _mm_load_si128((const __m128i *)&xmmword_23AB750);
    a1[1] = 0;
    a1[2] = 0;
    a1[3] = 0;
    a1[4] = 0;
    return a1;
  }
}
