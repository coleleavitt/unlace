/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_714B0
// Address: 0x000714B0

//----- (000714B0) --------------------------------------------------------
int __cdecl sub_714B0(int a1, int a2)
{
  *(_QWORD *)(a1 + 4) = *(_QWORD *)(a2 + 4);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  return a1;
}
