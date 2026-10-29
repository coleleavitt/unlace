/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809B370
// Address: 0x0809B370

//----- (0809B370) --------------------------------------------------------
int __cdecl sub_809B370(int a1, unsigned int a2, int a3)
{
  __m128i v3; // xmm0
  unsigned __int64 v5; // [esp+0h] [ebp-24h]

  v3 = _mm_cvtsi32_si128(a2);
  v5 = _mm_unpacklo_epi32(v3, v3).m128i_u64[0];
  while ( *(_DWORD *)(a1 + 32) )
    sub_80925F0((_DWORD *)a1);
  *(_DWORD *)(a1 + 120) = a2;
  *(_DWORD *)(a1 + 112) = (char *)&qword_811CFF4 - 568404;
  *(_DWORD *)(a1 + 116) = a1 + 120;
  *(_BYTE *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 76) = 0;
  *(_QWORD *)a1 = v5;
  if ( a3 )
    return sub_809A780(a1, a3, 0);
  else
    return 0;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
