/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: calc_file_crc32
// Address: 0x0000000100071C00

//----- (0000000100071C00) ----------------------------------------------------
__int64 __fastcall calc_file_crc32(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v2; // rax
  unsigned __int64 v3; // r15
  signed __int64 v4; // r13
  bool v5; // cc
  _BYTE v7[4096]; // [rsp+0h] [rbp-1030h] BYREF

  v1 = 0;
  qlseek(a1, 0, 0);
  v2 = qlsize(a1);
  if ( v2 > 0 )
  {
    v3 = v2;
    v1 = 0;
    while ( 1 )
    {
      v4 = 4096;
      if ( v3 < 0x1000 )
        v4 = v3;
      if ( qlread(a1, v7, v4) != v4 )
        break;
      v1 = sub_100082460(v1, v7, v4);
      v5 = (__int64)v3 <= v4;
      v3 -= v4;
      if ( v5 )
        return v1;
    }
    return (unsigned int)-1;
  }
  return v1;
}
