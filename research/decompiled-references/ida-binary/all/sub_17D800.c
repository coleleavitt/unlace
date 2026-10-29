void __fastcall sub_17D800(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 (__fastcall *v3)(__int64); // rdx
  _QWORD *v4; // rcx
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rdi

  v1 = *a1;
  if ( *a1 && QT::QCoreApplication::self )
  {
    v3 = IDAApplication__::vfunc_10;
    v4 = QT::QCoreApplication::self + 2;
    v5 = *(__int64 (__fastcall **)(__int64))(QT::QCoreApplication::self[2] + 80LL);
    if ( v5 == IDAApplication__::vfunc_10 )
    {
      v6 = QT::QCoreApplication::self + 85;
LABEL_5:
      (*(void (__fastcall **)(_QWORD *, __int64, __int64 (__fastcall *)(__int64), _QWORD *))(*v6 + 56LL))(
        v6,
        v1,
        v3,
        v4);
      return;
    }
    v6 = (_QWORD *)v5((__int64)(QT::QCoreApplication::self + 2));
    if ( v6 )
    {
      v1 = *a1;
      goto LABEL_5;
    }
  }
}
