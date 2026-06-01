void __fastcall sub_1A1590(TWindow *a1)
{
  *(_QWORD *)a1 = &off_23EAD0;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xB0u);
}

