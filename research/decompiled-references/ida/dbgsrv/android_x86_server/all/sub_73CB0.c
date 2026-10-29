/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_73CB0
// Address: 0x00073CB0

//----- (00073CB0) --------------------------------------------------------
int __cdecl sub_73CB0(int a1, int a2)
{
  *(_DWORD *)(a1 + 4) = (*(_QWORD *)(a1 + 4) | *(_QWORD *)(a2 + 4)) != 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = 0;
  return a1;
}
