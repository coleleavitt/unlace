// attributes: thunk
char __fastcall clang_getInstantiationLocation(
        unsigned __int64 *a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9)
{
  return clang_getExpansionLocation(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}

