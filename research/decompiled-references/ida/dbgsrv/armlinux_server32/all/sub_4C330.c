/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C330
// Address: 0x0004C330

//----- (0004C330) --------------------------------------------------------
int __fastcall sub_4C330(int result, int a2)
{
  *(_QWORD *)(result + 8) |= *(_QWORD *)(a2 + 8);
  return result;
}
