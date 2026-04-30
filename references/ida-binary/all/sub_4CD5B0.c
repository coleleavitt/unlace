__int64 __fastcall sub_4CD5B0(QT::QWidget *this, QT::QWidget *a2, char a3, __int64 a4)
{
  __int64 v6; // rax
  QT::QWidget *v7; // rbp
  QT::QLayout *v8; // rax
  QT::QLayout *v9; // rax
  __int64 result; // rax

  *((_BYTE *)this + 52) = 1;
  v6 = sub_4CD420(this, 1u);
  if ( v6 )
  {
    v7 = (QT::QWidget *)v6;
    v8 = (QT::QLayout *)QT::QWidget::layout(this);
    QT::QLayout::removeWidget(v8, v7);
    if ( a3 )
      (*(void (__fastcall **)(QT::QWidget *))(*(_QWORD *)v7 + 32LL))(v7);
  }
  if ( a4 )
    QT::QWidget::resize(a2, a4);
  v9 = (QT::QLayout *)QT::QWidget::layout(this);
  result = QT::QLayout::addWidget(v9, a2);
  *((_BYTE *)this + 52) = 0;
  return result;
}
