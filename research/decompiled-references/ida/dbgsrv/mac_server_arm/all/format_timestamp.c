/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: format_timestamp
// Address: 0x000000010005E5A0

//----- (000000010005E5A0) ----------------------------------------------------
bool __fastcall format_timestamp(char *a1, size_t a2, unsigned __int64 a3, char a4)
{
  unsigned int v5; // w20
  time_t v8; // x1
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  _BOOL8 result; // x0
  int v15; // w0
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  char *v21; // x22
  size_t v22; // x21
  int v23; // w0
  tm v24; // [xsp+40h] [xbp-60h] BYREF

  v5 = a3;
  v8 = HIDWORD(a3);
  if ( (a4 & 1) != 0 )
  {
    result = qgmtime(&v24, v8);
    if ( !result )
      return result;
  }
  else if ( !qlocaltime(&v24, v8) )
  {
    return 0;
  }
  v15 = qsnprintf(a1, a2, "%04u-%02u-%02u%s%02u:%02u:%02u", v9, v10, v11, v12, v13, LOBYTE(v24.tm_year) + 108);
  v21 = &a1[v15];
  v22 = a2 - v15;
  if ( (a4 & 4) != 0 )
  {
    v23 = qsnprintf(v21, v22, ".%03u", v16, v17, v18, v19, v20, v5 / 0x3E8);
    v21 += v23;
    v22 -= v23;
  }
  result = 1;
  if ( (a4 & 2) != 0 && (a4 & 1) != 0 && v22 >= 2 )
    *(_WORD *)v21 = 90;
  return result;
}
// 10005E644: variable 'v9' is possibly undefined
// 10005E644: variable 'v10' is possibly undefined
// 10005E644: variable 'v11' is possibly undefined
// 10005E644: variable 'v12' is possibly undefined
// 10005E644: variable 'v13' is possibly undefined
// 10005E680: variable 'v16' is possibly undefined
// 10005E680: variable 'v17' is possibly undefined
// 10005E680: variable 'v18' is possibly undefined
// 10005E680: variable 'v19' is possibly undefined
// 10005E680: variable 'v20' is possibly undefined
