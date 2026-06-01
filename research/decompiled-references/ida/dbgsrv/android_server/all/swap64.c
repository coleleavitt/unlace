/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap64
// Address: 0x00000000000BAC4C

//----- (00000000000BAC4C) ----------------------------------------------------
unsigned __int64 __fastcall swap64(__int64 a1)
{
  return bswap32(HIDWORD(a1)) | ((unsigned __int64)bswap32(a1) << 32);
}
