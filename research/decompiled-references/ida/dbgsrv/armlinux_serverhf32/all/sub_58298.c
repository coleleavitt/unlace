/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_58298
// Address: 0x00058298

//----- (00058298) --------------------------------------------------------
int __fastcall sub_58298(int result, char a2, char a3)
{
  *(_BYTE *)(result + 96) = a2;
  *(_BYTE *)(result + 97) = a3;
  return result;
}
