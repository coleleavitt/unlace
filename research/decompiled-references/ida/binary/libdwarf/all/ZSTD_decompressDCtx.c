__int64 __fastcall ZSTD_decompressDCtx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax

  v8 = sub_619A0(a1);
  return ZSTD_decompress_usingDDict(a1, a2, a3, a4, a5, v8);
}

