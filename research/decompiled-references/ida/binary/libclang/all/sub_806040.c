__int64 __fastcall sub_806040(const __m128i *a1)
{
  __m128i v2; // [rsp+0h] [rbp-18h] BYREF

  if ( (a1->m128i_i8[2] & 8) == 0 )
    return a1->m128i_u32[1];
  v2 = _mm_loadu_si128(a1 + 2);
  return sub_A7BB10(&v2);
}

