/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89F10
// Address: 0x0000000000089F10

//----- (0000000000089F10) ----------------------------------------------------
__int64 __fastcall sub_89F10(__int64 result, char a2, char a3)
{
  *(_BYTE *)(result + 168) = a2 & 1;
  *(_BYTE *)(result + 169) = a3 & 1;
  return result;
}
