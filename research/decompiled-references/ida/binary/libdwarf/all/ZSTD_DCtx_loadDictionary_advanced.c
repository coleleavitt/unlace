__int64 __fastcall ZSTD_DCtx_loadDictionary_advanced(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 result; // rax
  int v9; // r8d
  int v10; // r9d
  __int64 DDict_advanced; // rdx

  result = -60;
  if ( !*(_DWORD *)(a1 + 30236) )
  {
    ZSTD_freeDDict(*(void **)(a1 + 30184));
    *(_QWORD *)(a1 + 30184) = 0;
    *(_QWORD *)(a1 + 30192) = 0;
    *(_DWORD *)(a1 + 30208) = 0;
    if ( a2 && a3 )
    {
      DDict_advanced = ZSTD_createDDict_advanced(
                         a2,
                         a3,
                         a4,
                         a5,
                         v9,
                         v10,
                         *(_OWORD *)(a1 + 30128),
                         *(_QWORD *)(a1 + 30144));
      *(_QWORD *)(a1 + 30184) = DDict_advanced;
      result = -64;
      if ( DDict_advanced )
      {
        *(_QWORD *)(a1 + 30192) = DDict_advanced;
        *(_DWORD *)(a1 + 30208) = -1;
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

