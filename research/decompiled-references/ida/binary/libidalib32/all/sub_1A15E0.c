void __fastcall sub_1A15E0(TWindow *a1)
{
  *(_QWORD *)a1 = &off_23CEF8;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xB0u);
}

