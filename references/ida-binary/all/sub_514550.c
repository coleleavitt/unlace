__int64 __fastcall sub_514550(QT::QWidget *this, __int64 a2, char a3)
{
  __int64 result; // rax
  const char *v4; // rsi
  _QWORD *v5; // r12
  __int64 (*v6)(); // rax
  __int64 (*v7)(); // rax

  result = sub_513D60((_BYTE *)this + 40, a2, a3);
  if ( result )
  {
    v4 = (_BYTE *)&stru_2710;
    v5 = QT::QCoreApplication::self;
    v6 = *(__int64 (**)())(*QT::QCoreApplication::self + 280LL);
    if ( v6 != sub_467940 )
      v4 = (const char *)((__int64 (__fastcall *)(_QWORD *, __int64))v6)(QT::QCoreApplication::self, 10000);
    sub_5120D0((__int64)this + 40, v4);
    v7 = *(__int64 (**)())(*v5 + 272LL);
    if ( v7 == sub_467930
      || ((unsigned __int8 (__fastcall *)(_QWORD *))v7)(v5)
      || (unsigned __int8)sub_47B650((__int64)v5) )
    {
      return QT::QWidget::update(this);
    }
    else
    {
      return QT::QWidget::repaint(this);
    }
  }
  return result;
}
