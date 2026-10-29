/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9B00
// Address: 0x080B9B00

//----- (080B9B00) --------------------------------------------------------
int __cdecl sub_80B9B00(int a1, int a2, _DWORD *a3)
{
  unsigned int v3; // eax

  v3 = *(_DWORD *)(a1 + 496);
  if ( v3 < a3[1] )
    *(_QWORD *)(*a3 + 16 * v3 + 4) = _mm_and_si128(
                                       _mm_loadl_epi64((const __m128i *)(*a3 + 16 * v3 + 4)),
                                       _mm_load_si128((const __m128i *)&xmmword_80DE290)).m128i_u64[0];
  return 1;
}
// 80DE290: using guessed type __int128 xmmword_80DE290;
