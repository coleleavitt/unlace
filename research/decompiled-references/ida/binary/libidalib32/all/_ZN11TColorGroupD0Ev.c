void __fastcall TColorGroup::~TColorGroup(TColorGroup *this)
{
  TColorGroup::~TColorGroup(this);
  operator delete(this, 0x20u);
}

