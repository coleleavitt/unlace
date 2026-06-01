/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: log2floor
// Address: 0x00000000000AD338

//----- (00000000000AD338) ----------------------------------------------------
__int64 __fastcall log2floor(unsigned __int64 a1)
{
  unsigned __int64 v1; // x8
  unsigned __int64 v2; // x12
  int v3; // w9

  v1 = HIDWORD(a1);
  if ( !HIDWORD(a1) )
    v1 = a1;
  v2 = v1 >> 16;
  v3 = (32 * (HIDWORD(a1) != 0)) | 0x10;
  if ( v1 >> 16 )
    v1 >>= 16;
  if ( !v2 )
    v3 = 32 * (HIDWORD(a1) != 0);
  if ( v1 > 0xFF )
  {
    v1 >>= 8;
    v3 |= 8u;
  }
  if ( v1 > 0xF )
  {
    v1 >>= 4;
    v3 |= 4u;
  }
  if ( v1 > 3 )
  {
    v1 >>= 2;
    v3 |= 2u;
  }
  return v3 | (unsigned int)(v1 > 1);
}
