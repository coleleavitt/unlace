__int64 __fastcall navigator_t__::vfunc_6(QT::QObject *this, QT::QObject *a2, QT::QEvent *a3)
{
  QT::QEvent *v4; // [rsp+8h] [rbp-10h]

  if ( *((_WORD *)a3 + 4) == 10 )
  {
    v4 = a3;
    sub_2D2250((__int64)this + 96);
    a3 = v4;
    if ( qword_8CCE70 )
    {
      if ( *(char *)(*((_QWORD *)qword_8CCE70 + 4) + 9LL) < 0 )
      {
        QT::QWidget::close(qword_8CCE70);
        a3 = v4;
      }
    }
  }
  return QT::QObject::eventFilter(this, a2, a3);
}
