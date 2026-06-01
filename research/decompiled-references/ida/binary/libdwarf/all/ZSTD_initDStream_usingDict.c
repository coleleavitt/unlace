unsigned __int64 __fastcall ZSTD_initDStream_usingDict(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  result = ZSTD_DCtx_reset(a1, 1);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    result = ZSTD_DCtx_loadDictionary(a1, a2, a3);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
      return *(_DWORD *)(a1 + 30104) == 0 ? 5LL : 1LL;
  }
  return result;
}

