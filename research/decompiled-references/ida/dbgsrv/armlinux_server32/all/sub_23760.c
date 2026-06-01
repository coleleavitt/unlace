/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_23760
// Address: 0x00023760

//----- (00023760) --------------------------------------------------------
_DWORD *__fastcall sub_23760(_DWORD *a1)
{
  __int64 v2; // r2

  LODWORD(v2) = a1[2];
  HIDWORD(v2) = *(_DWORD *)(*a1 + 372);
  sub_74D98(*(_DWORD *)(*a1 + 364), v2 + __PAIR64__(a1[3], *(_DWORD *)(*a1 + 368)), 0);
  return a1;
}
