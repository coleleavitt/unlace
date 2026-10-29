void __fastcall TListBox::~TListBox(TListBox *this)
{
  TListBox::~TListBox(this);
  operator delete(this, 0x78u);
}

