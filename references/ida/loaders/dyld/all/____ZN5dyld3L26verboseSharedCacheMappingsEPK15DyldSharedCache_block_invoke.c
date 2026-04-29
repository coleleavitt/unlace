__int64 __fastcall ___ZN5dyld3L26verboseSharedCacheMappingsEPK15DyldSharedCache_block_invoke(
        __int64 a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return dyld4::console(
           (dyld4 *)"        0x%08llX->0x%08llX init=%x, max=%x %s\n",
           a2,
           *(_QWORD *)(a1 + 32) + a3,
           a4 + *(_QWORD *)(a1 + 32) + a3 - 1,
           a7,
           a8,
           a2);
}
