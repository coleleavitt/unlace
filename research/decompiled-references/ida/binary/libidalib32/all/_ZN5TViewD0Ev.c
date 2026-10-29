void __fastcall TView::~TView(TView *this)
{
  TView::~TView(this);
  operator delete(this, 0x48u);
}

