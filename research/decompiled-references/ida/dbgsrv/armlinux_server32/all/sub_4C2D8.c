/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C2D8
// Address: 0x0004C2D8

//----- (0004C2D8) --------------------------------------------------------
int __fastcall sub_4C2D8(int result, int a2)
{
  *(_QWORD *)(result + 8) <<= *(_DWORD *)(a2 + 8);
  return result;
}
