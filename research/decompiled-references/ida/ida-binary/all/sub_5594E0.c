double __fastcall liblicui::menu_license_manager_borrow(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  double result; // xmm0_8

  if ( *(_DWORD *)(a2 + 12) == 1 )
    return callui(203, 1, a1, 1, (_DWORD)callui, a6);
  return result;
}
