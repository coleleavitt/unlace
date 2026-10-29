__int64 _base_app_mixin_t::is_long_op_cancelled()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  void (__fastcall ***v2)(_QWORD); // rdi
  _QWORD *v3; // rbx
  __int64 v4; // r12
  unsigned __int64 v5; // r14

  v0 = (unsigned int)(xmmword_8D25B8 - 1);
  v1 = 8 * v0;
  if ( (int)v0 >= 0 )
  {
    do
    {
      LODWORD(v0) = v0 - 1;
      v2 = *(void (__fastcall ****)(_QWORD))(qword_8D25B0 + v1);
      v1 -= 8;
      (**v2)(v2);
    }
    while ( (_DWORD)v0 != -1 );
  }
  v3 = QT::QCoreApplication::self;
  if ( !QT::QCoreApplication::self )
    return 0;
  v4 = QT::QCoreApplication::self[15];
  if ( !v4 )
    return 0;
  if ( !(unsigned __int8)QT::QElapsedTimer::isValid((QT::QElapsedTimer *)&unk_8C3190) )
  {
    QT::QElapsedTimer::start((QT::QElapsedTimer *)&unk_8C3190);
    goto LABEL_11;
  }
  v5 = QT::QElapsedTimer::elapsed((QT::QElapsedTimer *)&unk_8C3190);
  if ( *(char *)(*(_QWORD *)(v4 + 32) + 9LL) >= 0 )
  {
    if ( (unsigned __int8)QT::QTimer::isActive((QT::QTimer *)(v3 + 82)) )
    {
      if ( v5 > 0x31 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*QT::QCoreApplication::self + 448LL))(
          QT::QCoreApplication::self,
          1000,
          1);
        QT::QElapsedTimer::restart((QT::QElapsedTimer *)&unk_8C3190);
      }
    }
    else if ( v5 > 0x3E7 )
    {
      (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*QT::QCoreApplication::self + 448LL))(
        QT::QCoreApplication::self,
        2000,
        1);
      QT::QElapsedTimer::restart((QT::QElapsedTimer *)&unk_8C3190);
    }
LABEL_11:
    if ( *(char *)(*(_QWORD *)(v4 + 32) + 9LL) >= 0 )
      return 0;
    goto LABEL_8;
  }
  if ( v5 > 0xC7 )
  {
    QT::QWidget::update((QT::QWidget *)v4);
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*QT::QCoreApplication::self + 448LL))(
      QT::QCoreApplication::self,
      1000,
      0);
    QT::QElapsedTimer::restart((QT::QElapsedTimer *)&unk_8C3190);
    goto LABEL_11;
  }
LABEL_8:
  if ( *((int *)QT::QCoreApplication::self + 25) <= 0 )
    return *(unsigned __int8 *)(v4 + 72);
  return 0;
}
