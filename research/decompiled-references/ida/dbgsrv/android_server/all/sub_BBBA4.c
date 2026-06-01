/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BBBA4
// Address: 0x00000000000BBBA4

//----- (00000000000BBBA4) ----------------------------------------------------
__int64 __fastcall sub_BBBA4(__int64 a1, _QWORD *a2, char *name)
{
  __int64 result; // x0
  int v7; // w0
  __int16 v8; // w8
  __int64 v9; // x8
  __int64 v10; // [xsp+0h] [xbp-10C0h] BYREF
  int v11; // [xsp+Ch] [xbp-10B4h]
  __int64 v12; // [xsp+28h] [xbp-1098h]
  unsigned int v13; // [xsp+44h] [xbp-107Ch]
  struct tm tp; // [xsp+50h] [xbp-1070h] BYREF
  char v15[4096]; // [xsp+88h] [xbp-1038h] BYREF
  __int64 v16; // [xsp+1088h] [xbp-38h]

  v16 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = fnmatch((const char *)(a1 + 8224), name, 22);
  if ( !(_DWORD)result )
  {
    qmakepath((size_t)v15, 0x1000u, (char *)(a1 + 4128), name, 0);
    qstat(v15, (__int64)&v10);
    if ( v7 )
      return 1;
    v8 = v11;
    *(_DWORD *)a1 = v11;
    if ( (v8 & 0x4000) != 0 && (*(_DWORD *)(a1 + 12320) & 0x4000) == 0 )
    {
      return 1;
    }
    else
    {
      qustrncpy(a1 + 4, (__int64)name, 4096);
      v9 = v12;
      *(_DWORD *)(a1 + 4100) = v12;
      if ( a2 )
        *a2 = v9;
      qlocaltime(&tp, v13);
      *(_WORD *)(a1 + 4106) = 32 * LOWORD(tp.tm_min) + (LOWORD(tp.tm_hour) << 11) + tp.tm_sec / 2;
      *(_WORD *)(a1 + 4104) = (LOWORD(tp.tm_year) << 9) + 32 * LOWORD(tp.tm_mon) + LOWORD(tp.tm_mday) + 24608;
      return 0;
    }
  }
  return result;
}
// BBC10: variable 'v7' is possibly undefined
