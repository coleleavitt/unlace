/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C178
// Address: 0x0004C178

//----- (0004C178) --------------------------------------------------------
int __fastcall sub_4C178(int result, int a2)
{
  *(_QWORD *)(result + 8) = *(_QWORD *)(a2 + 8);
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
