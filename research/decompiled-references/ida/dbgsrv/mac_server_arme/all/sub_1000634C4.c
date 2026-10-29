/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000634C4
// Address: 0x00000001000634C4

//----- (00000001000634C4) ----------------------------------------------------
__int64 __fastcall sub_1000634C4(__int64 result)
{
  **(_DWORD **)result = bswap32(*(_DWORD *)(result + 8) - 5);
  return result;
}
