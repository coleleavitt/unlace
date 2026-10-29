__int64 __fastcall ZSTD_DCtx_loadDictionary_byReference(__int64 a1, __int64 a2, __int64 a3)
{
  return ZSTD_DCtx_loadDictionary_advanced(a1, a2, a3, 1, 0);
}

