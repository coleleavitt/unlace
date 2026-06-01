__int64 __fastcall sub_13E0C0(TView *this, unsigned __int16 a2, unsigned int a3)
{
  TWindow::setState();
  if ( (a2 & 0x10) != 0 && a3 )
    TView::drawView(this);
  return sub_17BA00((char *)this + 176, a2, a3);
}

