/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8D768
// Address: 0x0008D768

//----- (0008D768) --------------------------------------------------------
_DWORD *__fastcall sub_8D768(_DWORD *a1, int a2)
{
  *a1 = a1 + 2;
  sub_8D704(a1, *(_BYTE **)a2, *(_DWORD *)a2 + *(_DWORD *)(a2 + 4));
  return a1;
}
