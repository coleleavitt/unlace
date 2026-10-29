/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67C6C
// Address: 0x00067C6C

//----- (00067C6C) --------------------------------------------------------
int __fastcall sub_67C6C(int result)
{
  **(_DWORD **)result = bswap32(*(_DWORD *)(result + 4) - 5);
  return result;
}
