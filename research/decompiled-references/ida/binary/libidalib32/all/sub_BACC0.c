void __fastcall sub_BACC0(TView *this)
{
  bool v1; // cc

  v1 = *((_DWORD *)this + 24) < -1;
  *(_QWORD *)this = off_236000;
  if ( !v1 && *((_QWORD *)this + 13) )
  {
    *((_QWORD *)this + 14) = 0;
    qfree();
  }
  if ( *((_QWORD *)this + 9) )
  {
    *((_QWORD *)this + 10) = 0;
    qfree();
  }
  TView::~TView(this);
}

