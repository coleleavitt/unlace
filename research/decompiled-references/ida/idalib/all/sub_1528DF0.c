__int64 __fastcall sub_1528DF0(__int64 a1, const __m128i *a2, const void *a3, __int64 a4)
{
  unsigned int v4; // ebx
  size_t v5; // r8
  __m128i v7; // xmm0

  v4 = *(unsigned __int8 *)(a1 + 32);
  if ( (_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 != a4 || v5 && memcmp(*(const void **)a1, a3, v5) )
    return v4;
  v7 = _mm_loadu_si128(a2);
  *(_BYTE *)(a1 + 32) = 1;
  *(__m128i *)(a1 + 16) = v7;
  return 1;
}
