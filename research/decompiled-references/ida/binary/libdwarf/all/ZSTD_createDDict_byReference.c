__int64 __fastcall ZSTD_createDDict_byReference(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6)
{
  return ZSTD_createDDict_advanced(a1, a2, 1, 0, a5, a6, 0, 0);
}

