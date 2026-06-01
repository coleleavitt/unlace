unsigned __int64 __fastcall sub_192B10(TView **a1, TView *this)
{
  unsigned __int64 v3; // [rsp+58h] [rbp-20h]

  v3 = __readfsqword(0x28u);
  TView::getExtent(this);
  TWindow::handleEvent();
  TGroup::insert(this, (TView *)a1);
  if ( a1[326] )
  {
    TWindow::handleEvent();
    TGroup::insert(this, a1[326]);
  }
  if ( a1[327] )
  {
    TWindow::handleEvent();
    TGroup::insert(this, a1[327]);
  }
  if ( a1[328] )
  {
    TWindow::handleEvent();
    TGroup::insert(this, a1[328]);
  }
  if ( a1[329] )
  {
    TWindow::handleEvent();
    TGroup::insert(this, a1[329]);
  }
  return v3 - __readfsqword(0x28u);
}

