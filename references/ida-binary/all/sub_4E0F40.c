__int64 __fastcall sub_4E0F40(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 (*v5)(); // rax
  __int64 result; // rax

  v2 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, a2);
  if ( !v3 )
    return 6;
  v4 = v3;
  v5 = *(__int64 (**)())(*(_QWORD *)v3 + 80LL);
  if ( v5 != vault_files_dirtree_widget_t__::vfunc_10 && !((unsigned __int8 (__fastcall *)(__int64))v5)(v4) )
    return 6;
  result = 7;
  if ( *(_QWORD *)(v4 + 1856) )
    return 3;
  return result;
}
