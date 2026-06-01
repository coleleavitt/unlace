/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D3E00
// Address: 0x080D3E00

//----- (080D3E00) --------------------------------------------------------
unsigned __int64 __cdecl sub_80D3E00(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v3; // xmm0_8
  unsigned __int64 v4; // [esp+0h] [ebp-14h]

  v1 = sub_80CD930(*a1);
  v4 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v1), _mm_cvtsi32_si128(HIDWORD(v1))).m128i_u64[0];
  result = sub_80CD930(a1[1]);
  v3 = v4;
  *a1 = result;
  a1[1] = v3;
  return result;
}
