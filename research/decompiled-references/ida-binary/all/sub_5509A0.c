__int64 __fastcall liblicui::license_dialog_t__::vfunc_9(
        double a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v9; // r9

  if ( a3 )
  {
    if ( a5 )
    {
      result = (*(_DWORD *)(a3 + 12) - 6) & 0xFFFFFFFD;
      if ( ((*(_DWORD *)(a3 + 12) - 6) & 0xFFFFFFFD) == 0 )
      {
        result = sub_5390E0(a5, (__int64)"LicenseManagerBorrow", nullptr, 0, nullptr, a7, a1);
        if ( *(_DWORD *)(a3 + 12) == 8 )
          return sub_5390E0(a5, (__int64)"LicenseManagerReturn", nullptr, 0, nullptr, v9, a1);
      }
    }
  }
  return result;
}
