_QWORD *__fastcall ui_action_t__::vfunc_5(__int64 a1, int a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax

  if ( a2 > 0 )
  {
    v2 = *(_QWORD *)(a1 + 104);
    result = (_QWORD *)(v2 | *(_QWORD *)(a1 + 96));
    if ( *(_OWORD *)(a1 + 96) != 0 )
    {
      result = QT::QCoreApplication::self;
      if ( QT::QCoreApplication::self )
        return (_QWORD *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(QT::QCoreApplication::self[2]
                                                                                       + 176LL))(
                           QT::QCoreApplication::self + 2,
                           *(_QWORD *)(a1 + 96),
                           v2,
                           1);
    }
  }
  return result;
}
