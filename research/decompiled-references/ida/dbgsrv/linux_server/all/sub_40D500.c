/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D500
// Address: 0x000000000040D500

//----- (000000000040D500) ----------------------------------------------------
const __m128i *__fastcall sub_40D500(__int64 a1, __int64 a2, __int64 a3)
{
  const __m128i *result; // rax
  __int64 v4; // rdx

  result = (const __m128i *)(a2 + 8);
  if ( *(int *)a2 >= -1 )
    result = *(const __m128i **)(a2 + 8);
  v4 = 16 * a3;
  *(__m128i *)(a1 + v4 + 992) = _mm_load_si128(result);
  *(__m128i *)(a1 + v4 + 1408) = _mm_load_si128(result + 1);
  *(_BYTE *)(a1 + 1344) |= 6u;
  return result;
}
