unsigned __int64 __fastcall swap_idcvs(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm1
  __m128i v3; // xmm0
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  if ( !a1 || !a2 )
  {
    if ( !under_debugger )
      interr(2657);
    BUG();
  }
  v2 = _mm_loadu_si128(a1);
  v3 = _mm_loadu_si128(a1 + 1);
  *a1 = _mm_loadu_si128(a2);
  a1[1] = _mm_loadu_si128(a2 + 1);
  *a2 = v2;
  a2[1] = v3;
  return v5 - __readfsqword(0x28u);
}

