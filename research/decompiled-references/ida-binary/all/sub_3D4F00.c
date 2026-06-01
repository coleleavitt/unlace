__int64 __fastcall sub_3D4F00(
        const QT::QObject **a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rax
  QT::QPlainTextEdit **v10; // rbx
  double v11; // xmm4_8
  double v12; // xmm5_8
  QT::QWidget *v13; // rax

  v9 = QT::QMetaObject::cast((QT::QMetaObject *)&off_891AA0, *a1);
  if ( !v9 )
    return 0;
  v10 = *(QT::QPlainTextEdit ***)(v9 + 304);
  if ( v10 )
  {
    if ( *(char *)(*(_QWORD *)(QT::QCompleter::popup(*(QT::QCompleter **)(v9 + 304)) + 32LL) + 9LL) >= 0 )
    {
      sub_3D45F0(v10, nullptr, 1, a2, a3, a4, a5, v11, v12, a8, a9);
    }
    else
    {
      v13 = (QT::QWidget *)QT::QCompleter::popup((QT::QCompleter *)v10);
      QT::QWidget::hide(v13);
    }
  }
  return 1;
}
