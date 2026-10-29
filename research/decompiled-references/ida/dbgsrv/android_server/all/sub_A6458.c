/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6458
// Address: 0x00000000000A6458

//----- (00000000000A6458) ----------------------------------------------------
__int64 __fastcall sub_A6458(__int64 result)
{
  **(_DWORD **)result = bswap32(*(_DWORD *)(result + 8) - 5);
  return result;
}
