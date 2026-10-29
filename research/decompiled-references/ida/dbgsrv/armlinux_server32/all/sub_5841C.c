/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5841C
// Address: 0x0005841C

//----- (0005841C) --------------------------------------------------------
int __fastcall sub_5841C(int result, char a2, char a3)
{
  *(_BYTE *)(result + 96) = a2;
  *(_BYTE *)(result + 97) = a3;
  return result;
}
