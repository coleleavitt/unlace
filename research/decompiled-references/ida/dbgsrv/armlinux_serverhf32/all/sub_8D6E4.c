/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D6E4
// Address: 0x0008D6E4

//----- (0008D6E4) --------------------------------------------------------
_DWORD *__fastcall sub_8D6E4(_DWORD *a1, int a2)
{
  *a1 = a1 + 2;
  sub_8D69C(a1, *(_BYTE **)a2, *(_DWORD *)a2 + *(_DWORD *)(a2 + 4), 0);
  return a1;
}
