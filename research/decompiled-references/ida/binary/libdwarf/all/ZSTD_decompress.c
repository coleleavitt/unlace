__int64 __fastcall ZSTD_decompress(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbp
  __m128i *DCtx_advanced_0; // rax
  __m128i *v10; // rbx

  v8 = -64;
  DCtx_advanced_0 = ZSTD_createDCtx_advanced_0(a1, a2, a3, a4, a5, a6, 0, 0);
  if ( DCtx_advanced_0 )
  {
    v10 = DCtx_advanced_0;
    v8 = ZSTD_decompressDCtx(DCtx_advanced_0, a1, a2, a3, a4);
    ZSTD_freeDCtx(v10);
  }
  return v8;
}

