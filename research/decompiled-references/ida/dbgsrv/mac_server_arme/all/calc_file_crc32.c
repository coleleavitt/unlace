/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: calc_file_crc32
// Address: 0x00000001000698CC

//----- (00000001000698CC) ----------------------------------------------------
__int64 calc_file_crc32()
{
  __int64 v0; // x19
  __int64 v1; // x0
  __int64 v2; // x21
  __int64 v3; // x20
  __int64 v4; // x22
  bool v5; // cc
  unsigned __int8 v7[4096]; // [xsp+8h] [xbp-1038h] BYREF

  v0 = __chkstk_darwin();
  qlseek(v0, 0, 0);
  v1 = qlsize(v0);
  if ( v1 < 1 )
    return 0;
  v2 = v1;
  LODWORD(v3) = 0;
  while ( 1 )
  {
    v4 = (unsigned __int64)v2 >= 0x1000 ? 4096LL : v2;
    if ( qlread(v0, v7, v4) != v4 )
      break;
    v3 = sub_100079980((unsigned int)v3, v7, v4);
    v5 = v2 <= v4;
    v2 -= v4;
    if ( v5 )
      return v3;
  }
  return 0xFFFFFFFFLL;
}
// 1000A6A30: using guessed type __int64 __chkstk_darwin(void);
