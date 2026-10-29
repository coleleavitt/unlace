__int64 __fastcall form_actions_impl_t__::vfunc_8(__int64 a1, int a2)
{
  QT::QObject *v2; // rax
  __int64 v3; // rdi

  v2 = *(QT::QObject **)(a1 + 8);
  v3 = *((_QWORD *)v2 + 46);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 432LL))(v3, a2 == 0 ? -1 : 1);
  else
    return sub_482660((__int64)(QT::QCoreApplication::self + 2), v2, 8u);
}
