__int64 __fastcall sub_3110E0(
        QT::QWidget *this,
        QT::QCloseEvent *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  QT::QBasicTimer *v12; // rdi
  char merge_state; // al
  __int64 v14; // rdx
  char *v15; // rcx
  double v16; // xmm4_8
  double v17; // xmm5_8
  QT::QApplication *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdi

  result = sub_310FB0(a3, a4, a5, a6, a7, a8, a9, a10, (__int64)this, (__int64)a2);
  byte_8CD800 = result;
  if ( (_BYTE)result )
  {
    **((_BYTE **)this + 44) = 0;
    QT::QBasicTimer::stop((QT::QBasicTimer *)(*((_QWORD *)this + 44) + 96LL));
    QT::QBasicTimer::stop((QT::QBasicTimer *)(*((_QWORD *)this + 44) + 100LL));
    v12 = (QT::QBasicTimer *)(*((_QWORD *)this + 44) + 104LL);
    QT::QBasicTimer::stop(v12);
    merge_state = get_merge_state(v12);
    v18 = (QT::QApplication *)((char *)&dword_0 + 2);
    if ( (merge_state & 3) == 0 )
      v18 = (QT::QApplication *)(((unsigned int)get_merge_state((char *)&dword_0 + 2) >> 1) & 2);
    if ( (unsigned __int8)sub_308340((char)v18, (__int64)a2, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10) )
    {
      QT::QApplication::closeAllWindows(v18);
      *((_BYTE *)a2 + 12) = 1;
      v19 = *((_QWORD *)this + 40);
      if ( v19 )
      {
        v20 = QT::QMetaObject::cast(
                (QT::QMetaObject *)&off_887F00,
                *(const QT::QObject **)(*(_QWORD *)(v19 + 8) + 16LL));
        if ( v20 )
          QT::QWidget::setFocus(v20, 7);
      }
      return QT::QWidget::closeEvent(this, a2);
    }
    else
    {
      *((_BYTE *)a2 + 12) = 0;
      return sub_310C50((__int64)this);
    }
  }
  else
  {
    *((_BYTE *)a2 + 12) = 0;
  }
  return result;
}
