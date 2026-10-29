// Alternative name is '_ZN10TInputLineD1Ev'
void __fastcall TInputLine::~TInputLine(TInputLine *this)
{
  *(_QWORD *)this = off_23EBB0;
  if ( *((_QWORD *)this + 9) )
  {
    *((_QWORD *)this + 10) = 0;
    qfree();
  }
  TView::~TView(this);
}

