/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C9790
// Address: 0x080C9790

//----- (080C9790) --------------------------------------------------------
unsigned int __cdecl sub_80C9790(__int64 a1, int a2)
{
  unsigned __int64 v2; // rt0
  unsigned int result; // eax
  __int64 v4; // [esp+0h] [ebp-4Ch]
  _WORD v5[14]; // [esp+10h] [ebp-3Ch] BYREF
  unsigned int v6; // [esp+2Ch] [ebp-20h]

  v4 = a1;
  v6 = __readgsdword(0x14u);
  memset(v5, 0, 22);
  if ( a1 < 0 )
  {
    v5[0] = -1;
    v4 = -a1;
  }
  else if ( !a1 )
  {
    goto LABEL_4;
  }
  HIDWORD(v2) = HIDWORD(v4);
  LODWORD(v2) = HIDWORD(v4);
  *(_QWORD *)&v5[2] = _mm_unpacklo_epi32(
                        _mm_cvtsi32_si128(v2 >> 16),
                        _mm_cvtsi32_si128((unsigned int)WORD1(v4) | ((_DWORD)v4 << 16))).m128i_u64[0];
  v5[1] = 16430 - sub_80C7F40((int)v5);
LABEL_4:
  sub_80C8700(v5, a2);
  result = v6 - __readgsdword(0x14u);
  if ( result )
    sub_80D7AB0();
  return result;
}
