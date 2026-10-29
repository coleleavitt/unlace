/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BB64
// Address: 0x0008BB64

//----- (0008BB64) --------------------------------------------------------
_DWORD *__fastcall sub_8BB64(_DWORD *a1, int a2)
{
  *a1 = a1 + 2;
  sub_8BAC0(a1, *(_BYTE **)a2, *(_DWORD *)(a2 + 4) + *(_DWORD *)a2);
  return a1;
}
