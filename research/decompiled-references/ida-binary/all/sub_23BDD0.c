__int64 __fastcall sub_23BDD0(QT::QApplication *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = QT::QCoreApplication::self;
  if ( !QT::QCoreApplication::self )
    return 0;
  result = QT::QApplication::activeModalWidget(a1);
  if ( !result || v1[15] == result )
    return 0;
  return result;
}
