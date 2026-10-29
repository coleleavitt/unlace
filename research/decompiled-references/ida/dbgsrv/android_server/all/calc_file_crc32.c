/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: calc_file_crc32
// Address: 0x00000000000AD564

//----- (00000000000AD564) ----------------------------------------------------
__int64 __fastcall calc_file_crc32(__int64 a1)
{
  int v2; // w1
  __int64 v3; // x0
  __int64 v4; // x21
  unsigned int v5; // w20
  size_t v6; // x22
  _QWORD v8[513]; // [xsp+8h] [xbp-1048h] BYREF
  int8x16x2_t v9; // 0:q0.32

  v8[512] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  qlseek(a1, 0, 0);
  v3 = qlsize(a1, v2, v9);
  if ( v3 < 1 )
  {
    return 0;
  }
  else
  {
    v4 = v3;
    v5 = 0;
    while ( 1 )
    {
      v6 = (unsigned __int64)v4 >= 0x1000 ? 4096LL : v4;
      if ( qlread(a1, v8, v6) != v6 )
        break;
      v4 -= v6;
      v5 = sub_C8324(v5, v8, (unsigned int)v6);
      if ( v4 <= 0 )
        return v5;
    }
    return (unsigned int)-1;
  }
}
// AD59C: variable 'v2' is possibly undefined
// AD59C: variable 'v9' is possibly undefined
