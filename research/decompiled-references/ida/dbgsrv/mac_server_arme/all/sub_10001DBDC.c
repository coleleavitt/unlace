/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10001DBDC
// Address: 0x000000010001DBDC

//----- (000000010001DBDC) ----------------------------------------------------
__int64 __fastcall sub_10001DBDC(__int64 a1)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int v8; // w21
  int *v9; // x0
  size_t v11; // [xsp+18h] [xbp-38h] BYREF
  unsigned int v12; // [xsp+24h] [xbp-2Ch] BYREF

  v12 = 0;
  v11 = 4;
  v8 = sysctlbyname("hw.optional.breakpoint", &v12, &v11, nullptr, 0);
  if ( v8 )
  {
    v9 = __error();
    winerr(*v9);
  }
  sub_1000593FC(a1, "sysctlbyname(\"%s\") => %d (%s)\n", v2, v3, v4, v5, v6, v7, (char)"hw.optional.breakpoint");
  if ( v8 )
    return 0xFFFFFFFFLL;
  else
    return v12;
}
// 10001DC6C: variable 'v2' is possibly undefined
// 10001DC6C: variable 'v3' is possibly undefined
// 10001DC6C: variable 'v4' is possibly undefined
// 10001DC6C: variable 'v5' is possibly undefined
// 10001DC6C: variable 'v6' is possibly undefined
// 10001DC6C: variable 'v7' is possibly undefined
