__int64 __fastcall sub_311AF0(__int64 a1, __int64 a2, __int64 a3)
{
  QT::QMainWindow *v3; // r12
  QT::QToolBar *v6; // rbx
  QT::QToolBar *v7; // rax

  v3 = qword_8CD748;
  if ( !qword_8CD748 || sub_53C820(qword_8CD748, a1) )
    return 0;
  v6 = (QT::QToolBar *)sub_53CA10(v3, a1, a2);
  if ( a3 && (v7 = (QT::QToolBar *)sub_53C820(v3, a3)) != nullptr )
    QT::QMainWindow::insertToolBar(v3, v7, v6);
  else
    QT::QMainWindow::addToolBar(v3, v6);
  return 1;
}
