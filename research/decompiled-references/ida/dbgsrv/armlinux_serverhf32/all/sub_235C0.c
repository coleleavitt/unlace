/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_235C0
// Address: 0x000235C0

//----- (000235C0) --------------------------------------------------------
_DWORD *__fastcall sub_235C0(_DWORD *a1)
{
  __int64 v2; // r2

  LODWORD(v2) = a1[2];
  HIDWORD(v2) = *(_DWORD *)(*a1 + 372);
  sub_74C30(*(_DWORD *)(*a1 + 364), v2 + __PAIR64__(a1[3], *(_DWORD *)(*a1 + 368)), 0);
  return a1;
}
