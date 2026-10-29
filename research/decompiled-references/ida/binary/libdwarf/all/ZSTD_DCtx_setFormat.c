__int64 __fastcall ZSTD_DCtx_setFormat(__int64 a1, unsigned int a2)
{
  return ZSTD_DCtx_setParameter(a1, 1000, a2);
}

