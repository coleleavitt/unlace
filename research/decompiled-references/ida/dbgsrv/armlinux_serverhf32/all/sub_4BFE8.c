/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BFE8
// Address: 0x0004BFE8

//----- (0004BFE8) --------------------------------------------------------
int __fastcall sub_4BFE8(int result, int a2)
{
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
