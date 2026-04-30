__int64 __fastcall sub_53C990(QT::QToolBar ***this, const char *a2)
{
  unsigned int v2; // ebp
  QT::QToolBar *v4; // rax
  QT::QToolBar *v5; // rbx
  QT::QToolBar **v6; // rdi
  QT::QToolBar **v7; // rdx

  v4 = (QT::QToolBar *)sub_53C820((__int64)this, a2);
  LOBYTE(v2) = v4 != nullptr;
  if ( v4 )
  {
    v5 = v4;
    QT::QMainWindow::removeToolBar((QT::QMainWindow *)this, v4);
    v6 = *(this + 9);
    v7 = &v6[(_QWORD)*(this + 10)];
    if ( v6 != v7 )
    {
      while ( v5 != *v6 )
      {
        if ( v7 == ++v6 )
          goto LABEL_8;
      }
      if ( v7 != v6 )
      {
        memmove(v6, v6 + 1, (char *)v7 - (char *)v6 - 8);
        *(this + 10) = (QT::QToolBar **)((char *)*(this + 10) - 1);
      }
    }
LABEL_8:
    (*(void (__fastcall **)(QT::QToolBar *))(*(_QWORD *)v5 + 32LL))(v5);
  }
  return v2;
}
