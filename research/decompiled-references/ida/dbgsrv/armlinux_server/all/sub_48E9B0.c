/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48E9B0
// Address: 0x000000000048E9B0

//----- (000000000048E9B0) ----------------------------------------------------
__int64 __fastcall sub_48E9B0(__int64 a1, _QWORD *a2, char *name)
{
  unsigned int v6; // w20
  int v8; // w1
  __int16 v9; // w0
  __int64 v10; // x0
  int v11; // w1
  struct tm tp; // [xsp+30h] [xbp-1090h] BYREF
  _BYTE v13[12]; // [xsp+68h] [xbp-1058h] BYREF
  int v14; // [xsp+74h] [xbp-104Ch]
  __int64 v15; // [xsp+90h] [xbp-1030h]
  unsigned int v16; // [xsp+ACh] [xbp-1014h]
  char v17[4096]; // [xsp+B8h] [xbp-1008h] BYREF

  v6 = fnmatch((const char *)(a1 + 8224), name, 21);
  if ( !v6 )
  {
    sub_48F278(v17, 4096, (unsigned __int8 *)(a1 + 4128), name, 0);
    v6 = sub_4901F0(v17, (__int64)v13);
    if ( v6 )
      return 1;
    v8 = *(_DWORD *)(a1 + 12320);
    v9 = v14;
    *(_DWORD *)a1 = v14;
    if ( (v8 & 0x4000) == 0 && (v9 & 0x4000) != 0 )
    {
      return 1;
    }
    else
    {
      sub_4860D8(a1 + 4, (unsigned __int8 *)name, 4096);
      v10 = v15;
      *(_DWORD *)(a1 + 4100) = v15;
      if ( a2 )
        *a2 = v10;
      sub_4927E0(&tp, v16);
      v11 = 32 * tp.tm_min + (tp.tm_hour << 11) + tp.tm_sec / 2;
      *(_WORD *)(a1 + 4104) = 32 * (LOWORD(tp.tm_mon) + 1) + ((LOWORD(tp.tm_year) - 80) << 9) + LOWORD(tp.tm_mday);
      *(_WORD *)(a1 + 4106) = v11;
    }
  }
  return v6;
}
