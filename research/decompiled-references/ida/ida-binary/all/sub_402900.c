QT::QObject *__fastcall xref_tree_desktop_widget_factory_t__::vfunc_3(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi

  v3 = a3[1];
  if ( !v3 )
    return nullptr;
  v4 = *a3;
  v5 = 0;
  while ( !*(_QWORD *)(v4 + 8) || strcmp(*(const char **)v4, "target_ea") )
  {
    ++v5;
    v4 += 40;
    if ( v3 == v5 )
      return nullptr;
  }
  if ( *(_DWORD *)(v4 + 24) == 1 && (v6 = *(_QWORD *)(v4 + 32), v6 != -1) )
    return sub_4026C0(v6, 0);
  else
    return nullptr;
}
