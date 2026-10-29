/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_534D8
// Address: 0x000534D8

//----- (000534D8) --------------------------------------------------------
int __fastcall sub_534D8(int result, int a2)
{
  *(_QWORD *)(result + 8) = -*(_QWORD *)(a2 + 8);
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
