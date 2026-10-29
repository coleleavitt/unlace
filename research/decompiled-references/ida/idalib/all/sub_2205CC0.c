unsigned __int64 __fastcall sub_2205CC0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx

  v2 = *(_QWORD *)a1;
  v3 = *a2;
  result = *(unsigned int *)(a1 + 8) + 63LL;
  v5 = result >> 6;
  if ( result >> 6 )
  {
    if ( (v3 >= v2 + 16 || v2 >= v3 + 16) && v5 - 1 > 2 )
    {
      result >>= 7;
      v6 = 0;
      do
      {
        *(__m128i *)(v2 + v6) = _mm_xor_si128(
                                  _mm_loadu_si128((const __m128i *)(v2 + v6)),
                                  _mm_loadu_si128((const __m128i *)(v3 + v6)));
        v6 += 16;
      }
      while ( 16 * result != v6 );
      if ( v5 != 2 * result )
      {
        result *= 16LL;
        *(_QWORD *)(v2 + result) ^= *(_QWORD *)(v3 + result);
      }
    }
    else
    {
      result = 0;
      do
      {
        *(_QWORD *)(v2 + 8 * result) ^= *(_QWORD *)(v3 + 8 * result);
        ++result;
      }
      while ( v5 != result );
    }
  }
  return result;
}
