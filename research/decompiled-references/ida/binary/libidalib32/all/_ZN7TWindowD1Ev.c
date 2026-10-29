void __fastcall TWindow::~TWindow(TWindow *this)
{
  *(_QWORD *)this = off_23CD18;
  TGroup::~TGroup(this);
}

