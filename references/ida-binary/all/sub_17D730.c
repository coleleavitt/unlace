__int64 __fastcall sub_17D730(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rdi

  v1 = QT::QApplication::focusWidget((QT::QApplication *)a1);
  result = QT::QMainWindow::menuBar(qword_8CD748);
  if ( v1 == result && !*(_BYTE *)(a1 + 24) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( v3 )
      return QT::QWidget::setFocus(v3, 7);
  }
  return result;
}
