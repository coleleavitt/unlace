__int64 __fastcall sub_51D7C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 (*v5)(); // rax

  v2 = *(_QWORD *)(a2 + 240);
  v3 = *(_QWORD *)(a2 + 248);
  if ( v2 )
  {
    if ( !v3 )
      return 6;
  }
  else
  {
    if ( !v3 )
      return 6;
    v2 = sub_4E0E80(*(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL));
  }
  if ( !v2 )
    return 6;
  v5 = *(__int64 (**)())(*(_QWORD *)v2 + 80LL);
  if ( v5 != vault_files_dirtree_widget_t__::vfunc_10 && !(unsigned __int8)v5() )
    return 6;
  return 2;
}
