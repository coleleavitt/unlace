bool __fastcall ___ZN5dyld44APIs26NSVersionOfLinkTimeLibraryEPKc_block_invoke(
        __int64 a1,
        dyld4 *this,
        const char *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  _BOOL8 result; // x0

  result = dyld4::nameMatch(this, *(const char **)(a1 + 40), a3);
  if ( result )
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = a7;
  return result;
}
