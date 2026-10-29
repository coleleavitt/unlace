/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006A390
// Address: 0x000000014006A390

//----- (000000014006A390) ----------------------------------------------------
__int64 __fastcall sub_14006A390(__int64 a1)
{
  return ((__int64)(int)_byteswap_ulong(a1) << 32) | _byteswap_ulong(HIDWORD(a1));
}
