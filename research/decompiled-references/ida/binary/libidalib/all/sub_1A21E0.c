void __fastcall sub_1A21E0(TWindow *a1)
{
  *(_QWORD *)a1 = &off_23DEF8;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xB0u);
}

