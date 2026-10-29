__int64 __fastcall ui_core_action_handler_t__::vfunc_1(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  __int64 (__fastcall *v6)(__int64, __int64, __int64, _QWORD *); // rax
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = QT::QCoreApplication::self;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(v3 + 24);
  if ( !v6 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
             QT::QCoreApplication::self + 2,
             v4,
             a2);
  if ( *(char *)(v3 + 82) >= 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(QT::QCoreApplication::self[2] + 40LL))(
               QT::QCoreApplication::self + 2,
               v4,
               a2);
    if ( (int)result > 3 )
      return result;
    v4 = *(_QWORD *)(a1 + 16);
    v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)(a1 + 24) + 24LL);
  }
  return v6(v4, a2, v3, v5);
}
