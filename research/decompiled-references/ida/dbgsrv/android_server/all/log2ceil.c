/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: log2ceil
// Address: 0x00000000000AD2B4

//----- (00000000000AD2B4) ----------------------------------------------------
__int64 __fastcall log2ceil(unsigned __int64 a1)
{
  unsigned __int64 v1; // x8
  int v2; // w9
  unsigned int v3; // w8

  v1 = HIDWORD(a1);
  if ( !HIDWORD(a1) )
    v1 = a1;
  v2 = (32 * (HIDWORD(a1) != 0)) | 0x10;
  if ( v1 >> 16 )
    v1 >>= 16;
  else
    v2 = 32 * (HIDWORD(a1) != 0);
  if ( v1 > 0xFF )
  {
    v1 >>= 8;
    v2 |= 8u;
  }
  if ( v1 > 0xF )
  {
    v1 >>= 4;
    v2 |= 4u;
  }
  if ( v1 > 3 )
  {
    v1 >>= 2;
    v2 |= 2u;
  }
  v3 = v2 | (v1 > 1);
  if ( ((a1 - 1) & a1) != 0 )
    return v3 + 1;
  else
    return v3;
}
