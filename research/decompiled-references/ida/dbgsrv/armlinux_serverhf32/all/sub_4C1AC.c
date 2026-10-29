/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C1AC
// Address: 0x0004C1AC

//----- (0004C1AC) --------------------------------------------------------
int __fastcall sub_4C1AC(int result, int a2)
{
  *(_QWORD *)(result + 8) |= *(_QWORD *)(a2 + 8);
  return result;
}
