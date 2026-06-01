char __fastcall actions_inspector_chooser_widget_t__::vfunc_8(__int64 a1)
{
  char result; // al

  result = vault_files_dirtree_widget_t__::vfunc_8(a1);
  if ( !result )
  {
    if ( QT::QCoreApplication::self )
      return *((_DWORD *)QT::QCoreApplication::self + 187) > 0;
  }
  return result;
}
