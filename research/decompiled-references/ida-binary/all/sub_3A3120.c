char __fastcall sub_3A3120(__int64 a1)
{
  char result; // al

  result = vault_files_dirtree_widget_t__::vfunc_8(a1 + 104);
  if ( !result )
  {
    if ( QT::QCoreApplication::self )
      return *((_DWORD *)QT::QCoreApplication::self + 187) > 0;
  }
  return result;
}
