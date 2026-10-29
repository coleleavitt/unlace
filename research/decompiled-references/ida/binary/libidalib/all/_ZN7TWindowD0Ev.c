void __fastcall TWindow::~TWindow(TWindow *this)
{
  TWindow::~TWindow(this);
  operator delete(this, 0xB0u);
}

