/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67AF0
// Address: 0x00067AF0

//----- (00067AF0) --------------------------------------------------------
int __fastcall sub_67AF0(int result)
{
  **(_DWORD **)result = bswap32(*(_DWORD *)(result + 4) - 5);
  return result;
}
