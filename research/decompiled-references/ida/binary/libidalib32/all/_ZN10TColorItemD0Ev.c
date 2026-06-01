void __fastcall TColorItem::~TColorItem(TColorItem *this)
{
  TColorItem::~TColorItem(this);
  operator delete(this, 0x20u);
}

