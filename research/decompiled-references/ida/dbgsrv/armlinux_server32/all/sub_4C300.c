/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C300
// Address: 0x0004C300

//----- (0004C300) --------------------------------------------------------
int __fastcall sub_4C300(int result, int a2)
{
  *(_QWORD *)(result + 8) &= *(_QWORD *)(a2 + 8);
  return result;
}
