_QWORD **__fastcall sub_17D780(__int64 *a1, __int64 a2)
{
  _QWORD **result; // rax
  __int64 (__fastcall *v3)(__int64); // rdx
  _QWORD *v4; // rcx
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax

  result = &QT::QCoreApplication::self;
  *a1 = 0;
  if ( QT::QCoreApplication::self )
  {
    v3 = IDAApplication__::vfunc_10;
    v4 = QT::QCoreApplication::self + 2;
    v5 = *(__int64 (__fastcall **)(__int64))(QT::QCoreApplication::self[2] + 80LL);
    if ( v5 == IDAApplication__::vfunc_10 )
    {
      v6 = QT::QCoreApplication::self + 85;
LABEL_4:
      v7 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 (__fastcall *)(__int64), _QWORD *))(*v6 + 40LL))(
             v6,
             a2,
             v3,
             v4);
      *a1 = v7;
      return (_QWORD **)(*(__int64 (__fastcall **)(_QWORD *, __int64))(*v6 + 24LL))(v6, v7);
    }
    result = (_QWORD **)v5((__int64)(QT::QCoreApplication::self + 2));
    v6 = result;
    if ( result )
      goto LABEL_4;
  }
  return result;
}
