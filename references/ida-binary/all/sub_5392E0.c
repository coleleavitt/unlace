_BOOL8 __fastcall sub_5392E0(
        __int64 a1,
        const char *a2,
        unsigned int a3,
        double a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  if ( a2 )
    return sub_5390E0(a1, 0, a2, *(_DWORD *)(a1 + 120) | a3, nullptr, a7, a4);
  else
    return sub_5390E0(a1, 0, *(const char **)(a1 + 96), *(_DWORD *)(a1 + 120) | a3, nullptr, a7, a4);
}
