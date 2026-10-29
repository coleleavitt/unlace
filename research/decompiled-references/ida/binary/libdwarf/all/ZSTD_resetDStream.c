unsigned __int64 __fastcall ZSTD_resetDStream(__int64 a1)
{
  unsigned __int64 result; // rax

  result = ZSTD_DCtx_reset(a1, 1);
  if ( result <= 0xFFFFFFFFFFFFFF88LL )
    return *(_DWORD *)(a1 + 30104) == 0 ? 5LL : 1LL;
  return result;
}

