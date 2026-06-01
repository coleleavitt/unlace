/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490268
// Address: 0x0000000000490268

//----- (0000000000490268) ----------------------------------------------------
__int64 __fastcall sub_490268(const char *a1)
{
  int v1; // w0
  unsigned int v2; // w1
  _BYTE v4[12]; // [xsp+18h] [xbp-58h] BYREF
  int v5; // [xsp+24h] [xbp-4Ch]

  v1 = sub_4901F0(a1, (__int64)v4);
  v2 = 0;
  if ( !v1 )
    return (v5 & 0xF000) != 0x4000;
  return v2;
}
