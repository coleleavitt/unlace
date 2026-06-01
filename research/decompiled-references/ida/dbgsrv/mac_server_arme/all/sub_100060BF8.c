/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060BF8
// Address: 0x0000000100060BF8

//----- (0000000100060BF8) ----------------------------------------------------
__int64 __fastcall sub_100060BF8(__int64 a1, char *a2, va_list a3)
{
  __darwin_time_t v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x7
  __int64 result; // x0
  __int64 v12; // x19
  void *v13; // [xsp+20h] [xbp-50h] BYREF
  __int64 v14; // [xsp+28h] [xbp-48h]
  __int64 v15; // [xsp+30h] [xbp-40h]
  char v16[25]; // [xsp+3Fh] [xbp-31h] BYREF

  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  sub_10000BACC((char **)&v13, a2, a3);
  v3 = qtime64();
  format_timestamp(v16, 0x19u, v3, 0);
  result = sub_100065520("%s [%u] %s", v4, v5, v6, v7, v8, v9, v10, (char)v16);
  if ( v13 )
  {
    v14 = 0;
    v12 = result;
    qfree(v13);
    return v12;
  }
  return result;
}
// 100060C74: variable 'v4' is possibly undefined
// 100060C74: variable 'v5' is possibly undefined
// 100060C74: variable 'v6' is possibly undefined
// 100060C74: variable 'v7' is possibly undefined
// 100060C74: variable 'v8' is possibly undefined
// 100060C74: variable 'v9' is possibly undefined
// 100060C74: variable 'v10' is possibly undefined
