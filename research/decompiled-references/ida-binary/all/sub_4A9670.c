__int64 __fastcall actions_inspector_chooser_widget_t__::vfunc_24(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = vault_files_dirtree_widget_t__::vfunc_24(a1);
  if ( a2 > 0xFFFFFFFFFFFFFFFDLL )
    *(_DWORD *)(a1 + 1908) &= 0xFFFFFF87;
  return result;
}
