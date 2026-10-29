__int64 __fastcall sub_4A88B0(__int64 a1)
{
  unsigned __int64 (__fastcall *v1)(__int64); // rax

  vault_files_dirtree_widget_t__::vfunc_30(a1 + 104);
  v1 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 568LL);
  if ( v1 != sub_4A76D0 )
    return v1(a1);
  if ( *(_DWORD *)(a1 + 2376) == 2 )
    return sub_4A72C0(a1, *(QT::QAbstractScrollArea **)(a1 + 2384));
  return sub_4A72C0(a1, *(QT::QAbstractScrollArea **)(a1 + 2472));
}
