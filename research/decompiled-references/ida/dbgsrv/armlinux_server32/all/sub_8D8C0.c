/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D8C0
// Address: 0x0008D8C0

//----- (0008D8C0) --------------------------------------------------------
_DWORD *__fastcall sub_8D8C0(_DWORD *a1, int a2, int a3)
{
  *a1 = a1 + 2;
  sub_8D83C(a1, *(_BYTE **)a2, *(_DWORD *)a2 + *(_DWORD *)(a2 + 4));
  sub_8CE68(a1, *(_BYTE **)a3, *(_DWORD *)(a3 + 4));
  return a1;
}
