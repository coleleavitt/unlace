/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_714D0
// Address: 0x000714D0

//----- (000714D0) --------------------------------------------------------
int __cdecl sub_714D0(int a1, int a2)
{
  *(_DWORD *)(a1 + 4) = *(_QWORD *)(a2 + 4) == 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)a1 = *(_BYTE *)a2;
  return a1;
}
