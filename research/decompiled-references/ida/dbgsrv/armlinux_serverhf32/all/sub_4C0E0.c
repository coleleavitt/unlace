/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C0E0
// Address: 0x0004C0E0

//----- (0004C0E0) --------------------------------------------------------
int __fastcall sub_4C0E0(int result, int a2)
{
  *(_QWORD *)(result + 8) -= *(_QWORD *)(a2 + 8);
  return result;
}
