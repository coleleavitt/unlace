/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: swap64
// Address: 0x00000000000BF910

//----- (00000000000BF910) ----------------------------------------------------
unsigned __int64 __fastcall swap64(__int64 a1)
{
  return _byteswap_ulong(HIDWORD(a1)) | ((unsigned __int64)_byteswap_ulong(a1) << 32);
}
