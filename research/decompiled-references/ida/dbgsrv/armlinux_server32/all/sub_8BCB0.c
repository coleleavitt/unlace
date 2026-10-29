/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BCB0
// Address: 0x0008BCB0

//----- (0008BCB0) --------------------------------------------------------
_DWORD *__fastcall sub_8BCB0(_DWORD *a1, int a2)
{
  *a1 = a1 + 2;
  sub_8BC0C(a1, *(_BYTE **)a2, *(_DWORD *)(a2 + 4) + *(_DWORD *)a2);
  return a1;
}
