__int64 __fastcall sub_3F4800(const QT::QObject **a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8934E0, *a1);
  result = 0;
  if ( v1 )
  {
    sub_1DDCB0(*(_QWORD *)(v1 + 144), 0);
    QT::QWidget::setFocus(*(_QWORD *)(v1 + 152), 7);
    QT::QLineEdit::selectAll(*(QT::QLineEdit **)(v1 + 152));
    return 1;
  }
  return result;
}
