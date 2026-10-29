/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4C018
// Address: 0x0004C018

//----- (0004C018) --------------------------------------------------------
int __fastcall sub_4C018(int result, int a2)
{
  *(_QWORD *)(result + 8) = ~*(_QWORD *)(a2 + 8);
  *(_BYTE *)result = *(_BYTE *)a2;
  return result;
}
