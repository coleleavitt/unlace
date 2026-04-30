_BOOL8 __fastcall sub_5392A0(
        __int64 a1,
        __int64 a2,
        const char *a3,
        unsigned int a4,
        double a5,
        __int64 a6,
        __int64 a7)
{
  if ( a3 )
    return sub_5390E0(a1, a2, a3, *(_DWORD *)(a1 + 120) | a4, nullptr, a7, a5);
  else
    return sub_5390E0(a1, a2, *(const char **)(a1 + 96), *(_DWORD *)(a1 + 120) | a4, nullptr, a7, a5);
}
