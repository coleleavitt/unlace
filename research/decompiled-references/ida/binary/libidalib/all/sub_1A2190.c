void __fastcall sub_1A2190(TWindow *a1)
{
  *(_QWORD *)a1 = &off_23FAD0;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xB0u);
}

