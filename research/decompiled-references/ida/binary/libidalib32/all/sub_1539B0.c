unsigned __int64 __fastcall sub_1539B0(TView ***a1, TView *this)
{
  TView **v3; // rsi
  TView **v4; // rsi
  TView **v5; // rsi
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  TView::getExtent(this);
  TWindow::handleEvent();
  if ( a1[7] != (TView **)this )
    TGroup::insert(this, (TView *)a1);
  if ( a1[120] )
  {
    TWindow::handleEvent();
    v3 = a1[120];
    if ( v3[7] != this )
      TGroup::insert(this, (TView *)v3);
  }
  if ( a1[121] )
  {
    TWindow::handleEvent();
    v4 = a1[121];
    if ( v4[7] != this )
      TGroup::insert(this, (TView *)v4);
  }
  if ( a1[122] )
  {
    TWindow::handleEvent();
    v5 = a1[122];
    if ( v5[7] != this )
      TGroup::insert(this, (TView *)v5);
  }
  return v7 - __readfsqword(0x28u);
}

