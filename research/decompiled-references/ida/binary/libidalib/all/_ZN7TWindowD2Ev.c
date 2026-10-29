void __fastcall TWindow::~TWindow(TWindow *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  TGroup::~TGroup(this);
}

