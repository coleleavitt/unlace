unsigned __int64 __fastcall ZSTD_DCtx_refPrefix_advanced(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 result; // rax

  result = ZSTD_DCtx_loadDictionary_advanced(a1, a2, a3, 1, a4);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
  {
    *(_DWORD *)(a1 + 30208) = 1;
    return 0;
  }
  return result;
}

