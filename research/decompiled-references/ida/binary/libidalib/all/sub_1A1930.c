void __fastcall sub_1A1930(TListBox *a1)
{
  *(_QWORD *)a1 = &off_23F790;
  TListBox::~TListBox(a1);
  operator delete(a1, 0x80u);
}

