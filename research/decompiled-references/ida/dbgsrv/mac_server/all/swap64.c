/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap64
// Address: 0x000000010007A510

//----- (000000010007A510) ----------------------------------------------------
unsigned __int64 __fastcall swap64(__int64 a1)
{
  return ((unsigned __int64)_byteswap_ulong(a1) << 32) | _byteswap_ulong(HIDWORD(a1));
}
