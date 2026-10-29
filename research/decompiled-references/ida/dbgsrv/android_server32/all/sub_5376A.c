/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5376A
// Address: 0x0005376A

//----- (0005376A) --------------------------------------------------------
int __fastcall sub_5376A(int result, int a2)
{
  *(_QWORD *)(result + 8) -= *(_QWORD *)(a2 + 8);
  return result;
}
