/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100072D98
// Address: 0x0000000100072D98

//----- (0000000100072D98) ----------------------------------------------------
__int64 __fastcall sub_100072D98(__int64 a1, _QWORD *a2, char *a3)
{
  __int64 result; // x0
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x5
  __int64 v10; // x6
  __int64 v11; // x7
  int v12; // w0
  __int16 v13; // w8
  __int64 v14; // x8
  __int16 tm_mday; // w11
  _BYTE v16[12]; // [xsp+10h] [xbp-4B0h] BYREF
  int v17; // [xsp+1Ch] [xbp-4A4h]
  __int64 v18; // [xsp+38h] [xbp-488h]
  unsigned int v19; // [xsp+54h] [xbp-46Ch]
  tm v20; // [xsp+60h] [xbp-460h] BYREF
  char v21[1024]; // [xsp+98h] [xbp-428h] BYREF

  result = fnmatch((const char *)(a1 + 2080), a3, 22);
  if ( !(_DWORD)result )
  {
    qmakepath(v21, 1024, (const char *)(a1 + 1056), v7, v8, v9, v10, v11, a3);
    qstat(v21, (__int64)v16);
    if ( v12 )
      return 1;
    v13 = v17;
    *(_DWORD *)a1 = v17;
    if ( (*(_BYTE *)(a1 + 3105) & 0x40) == 0 && (v13 & 0x4000) != 0 )
    {
      return 1;
    }
    else
    {
      qustrncpy(a1 + 4, (__int64)a3, 1024);
      v14 = v18;
      *(_DWORD *)(a1 + 1028) = v18;
      if ( a2 )
        *a2 = v14;
      qlocaltime(&v20, v19);
      tm_mday = v20.tm_mday;
      *(_WORD *)(a1 + 1034) = 32 * LOWORD(v20.tm_min) + (LOWORD(v20.tm_hour) << 11) + v20.tm_sec / 2;
      *(_WORD *)(a1 + 1032) = (LOWORD(v20.tm_year) << 9) + 32 * LOWORD(v20.tm_mon) + tm_mday + 24608;
      return 0;
    }
  }
  return result;
}
// 100072DF0: variable 'v7' is possibly undefined
// 100072DF0: variable 'v8' is possibly undefined
// 100072DF0: variable 'v9' is possibly undefined
// 100072DF0: variable 'v10' is possibly undefined
// 100072DF0: variable 'v11' is possibly undefined
// 100072E00: variable 'v12' is possibly undefined
