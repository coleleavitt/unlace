void __fastcall sub_1A0D30(TListBox *a1)
{
  *(_QWORD *)a1 = &off_23E790;
  TListBox::~TListBox(a1);
  operator delete(a1, 0x80u);
}

