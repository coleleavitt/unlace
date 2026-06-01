__int64 __fastcall sub_4DCC40(__int64 a1, char a2, __int64 (__fastcall *a3)(__int64, __int64))
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 (*v7)(); // rax
  __int64 (*v8)(); // rax
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 80LL))(QT::QCoreApplication::self + 2);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 80LL))(v4, a1);
  if ( !v5 )
    return 6;
  v6 = v5;
  if ( (a2 & 1) != 0 )
  {
    v7 = *(__int64 (**)())(*(_QWORD *)v5 + 72LL);
    if ( v7 != vault_files_dirtree_widget_t__::vfunc_9 && !((unsigned __int8 (__fastcall *)(__int64))v7)(v6) )
      return 6;
  }
  if ( (a2 & 2) != 0 )
  {
    v8 = *(__int64 (**)())(*(_QWORD *)v6 + 80LL);
    if ( v8 != vault_files_dirtree_widget_t__::vfunc_10 && !((unsigned __int8 (__fastcall *)(__int64))v8)(v6) )
      return 6;
  }
  result = 2;
  if ( a3 )
    return a3(a1, v6);
  return result;
}
