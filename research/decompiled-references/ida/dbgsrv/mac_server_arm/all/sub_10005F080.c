/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F080
// Address: 0x000000010005F080

//----- (000000010005F080) ----------------------------------------------------
__int64 __fastcall sub_10005F080(__int64 result)
{
  **(_DWORD **)result = bswap32(*(_DWORD *)(result + 8) - 5);
  return result;
}
