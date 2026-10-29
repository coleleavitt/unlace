/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C17C
// Address: 0x0004C17C

//----- (0004C17C) --------------------------------------------------------
int __fastcall sub_4C17C(int result, int a2)
{
  *(_QWORD *)(result + 8) &= *(_QWORD *)(a2 + 8);
  return result;
}
