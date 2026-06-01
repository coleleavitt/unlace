/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D81C
// Address: 0x0008D81C

//----- (0008D81C) --------------------------------------------------------
_DWORD *__fastcall sub_8D81C(_DWORD *a1, int a2)
{
  *a1 = a1 + 2;
  sub_8D7D4(a1, *(_BYTE **)a2, *(_DWORD *)a2 + *(_DWORD *)(a2 + 4), 0);
  return a1;
}
