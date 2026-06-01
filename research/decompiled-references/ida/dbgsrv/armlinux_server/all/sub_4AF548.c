/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AF548
// Address: 0x00000000004AF548

//----- (00000000004AF548) ----------------------------------------------------
__int64 __fastcall sub_4AF548(void *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _BYTE *v3; // x5
  unsigned __int64 v4; // x4
  size_t v5; // x19
  _BYTE v8[24]; // [xsp+18h] [xbp-18h] BYREF

  v3 = v8;
  do
  {
    v4 = a3 % 0xA;
    a3 /= 0xAu;
    *--v3 = a0123456789_0[v4];
  }
  while ( a3 );
  v5 = v8 - v3;
  if ( v8 - v3 > a2 )
    return 0xFFFFFFFFLL;
  memcpy(a1, v8 - 8 * v5 + 32, v5);
  return (unsigned int)v5;
}
