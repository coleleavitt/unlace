__m128i *__fastcall sub_13DFA10(__m128i *a1, __int64 a2)
{
  __m128i v2; // xmm0
  __int64 v4; // rax
  __m128i v5; // xmm3
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+10h] [rbp-28h]

  if ( *(_BYTE *)(a2 + 48) )
  {
    v2 = _mm_loadu_si128((const __m128i *)(a2 + 24));
    a1[1].m128i_i64[0] = *(_QWORD *)(a2 + 40);
    *a1 = v2;
    return a1;
  }
  else
  {
    sub_13DD4A0((__int64)&v8, a2);
    if ( *(_BYTE *)(a2 + 48) )
    {
      v7 = _mm_load_si128(&v8);
      v4 = v9;
      *(__m128i *)(a2 + 24) = v7;
      v6 = v7;
      *(_QWORD *)(a2 + 40) = v4;
    }
    else
    {
      v4 = v9;
      v5 = _mm_load_si128(&v8);
      *(_BYTE *)(a2 + 48) = 1;
      *(_QWORD *)(a2 + 40) = v4;
      v6 = v5;
      *(__m128i *)(a2 + 24) = v5;
    }
    a1[1].m128i_i64[0] = v4;
    *a1 = v6;
    return a1;
  }
}
