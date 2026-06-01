void __fastcall TWindow::~TWindow(TWindow *this)
{
  *(_QWORD *)this = off_23DD18;
  TGroup::~TGroup(this);
}

