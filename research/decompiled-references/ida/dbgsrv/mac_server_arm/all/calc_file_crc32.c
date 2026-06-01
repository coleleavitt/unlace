/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: calc_file_crc32
// Address: 0x0000000100064C60

//----- (0000000100064C60) ----------------------------------------------------
__int64 __fastcall calc_file_crc32(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x21
  __int64 v4; // x20
  __int64 v5; // x22
  bool v6; // cc
  unsigned __int8 v8[4096]; // [xsp+8h] [xbp-1038h] BYREF

  qlseek(a1, 0, 0);
  v2 = qlsize(a1);
  if ( v2 < 1 )
    return 0;
  v3 = v2;
  LODWORD(v4) = 0;
  while ( 1 )
  {
    v5 = (unsigned __int64)v3 >= 0x1000 ? 4096LL : v3;
    if ( qlread(a1, v8, v5) != v5 )
      break;
    v4 = sub_1000748A0(v4, v8, v5);
    v6 = v3 <= v5;
    v3 -= v5;
    if ( v6 )
      return v4;
  }
  return 0xFFFFFFFFLL;
}
