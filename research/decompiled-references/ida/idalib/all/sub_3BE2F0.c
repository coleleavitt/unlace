__int64 __fastcall sub_3BE2F0(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __m128i si128; // xmm0

  sub_505430(a1 + 359);
  sub_505430(a1 + 315);
  sub_505430(a1 + 165);
  sub_505430(a1 + 175);
  sub_505430(a1 + 213);
  result = sub_505430(a1 + 203);
  if ( (unsigned int)(a2 - 4) <= 1 )
  {
    sub_3FC2D0(a1, -1, -1);
    invalidate_dbgmem_config();
    *((_BYTE *)a1 + 1200) = 1;
    v4 = *a1;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    a1[151] = -1;
    *((__m128i *)a1 + 99) = si128;
    *((_OWORD *)a1 + 100) = -1;
    *(__m128i *)(a1 + 153) = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    return sub_510270(v4);
  }
  return result;
}
