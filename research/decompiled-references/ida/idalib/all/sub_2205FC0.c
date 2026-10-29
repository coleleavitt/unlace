unsigned __int64 *__fastcall sub_2205FC0(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v2; // rcx
  const __m128i *v3; // rax
  __m128i v4; // xmm0
  __int64 v5; // rax

  v1 = *a1;
  v2 = ((unsigned __int64)*((unsigned int *)a1 + 2) + 63) >> 6;
  if ( v2 )
  {
    if ( (_DWORD)v2 == 1 )
    {
      v5 = 0;
LABEL_6:
      *(_QWORD *)(v1 + 8 * v5) = ~*(_QWORD *)(v1 + 8 * v5);
      return sub_CF8100(a1);
    }
    v3 = (const __m128i *)*a1;
    do
    {
      v4 = _mm_loadu_si128(v3++);
      v3[-1] = _mm_xor_si128(v4, (__m128i)-1LL);
    }
    while ( (const __m128i *)(v1 + 16 * (v2 >> 1)) != v3 );
    v5 = (unsigned int)v2 & 0xFFFFFFFE;
    if ( (_DWORD)v2 != (_DWORD)v5 )
      goto LABEL_6;
  }
  return sub_CF8100(a1);
}
