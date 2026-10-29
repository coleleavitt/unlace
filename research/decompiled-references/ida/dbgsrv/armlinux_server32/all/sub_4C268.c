/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C268
// Address: 0x0004C268

//----- (0004C268) --------------------------------------------------------
int __fastcall sub_4C268(int result, int a2)
{
  *(_QWORD *)(result + 8) -= *(_QWORD *)(a2 + 8);
  return result;
}
