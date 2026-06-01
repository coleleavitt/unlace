__int64 __fastcall sub_13E980(__int64 a1, unsigned __int16 a2, unsigned int a3)
{
  TWindow::setState();
  if ( (a2 & 0x10) != 0 && a3 )
    TView::drawView((TView *)(a1 - 176));
  return sub_17C510(a1, a2, a3);
}

