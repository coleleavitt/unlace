/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80548A0
// Address: 0x080548A0

//----- (080548A0) --------------------------------------------------------
int __cdecl sub_80548A0(int a1, int *a2, int a3)
{
  int result; // eax
  const __m128i *v4; // ecx
  int v5; // edx

  result = a1;
  v4 = (const __m128i *)(a2 + 1);
  if ( *a2 >= -1 )
    v4 = (const __m128i *)a2[1];
  v5 = 16 * a3;
  *(__m128i *)(a1 + v5 + 904) = _mm_loadu_si128(v4);
  *(__m128i *)(a1 + v5 + 1320) = _mm_loadu_si128(v4 + 1);
  *(_BYTE *)(a1 + 1256) |= 6u;
  return result;
}
