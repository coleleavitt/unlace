/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80732D0
// Address: 0x080732D0

//----- (080732D0) --------------------------------------------------------
int __cdecl sub_80732D0(int a1, int a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // xmm0_8
  unsigned __int64 v5; // [esp+0h] [ebp-14h]

  v2 = sub_80D02A0();
  v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v2), _mm_cvtsi32_si128(HIDWORD(v2))).m128i_u64[0];
  sub_8089430(a2);
  v3 = v5;
  *(_BYTE *)a2 = 9;
  *(_QWORD *)(a2 + 4) = v3;
  return 0;
}
