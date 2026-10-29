void __fastcall sub_1A1A60(TStaticText *a1)
{
  *(_QWORD *)a1 = &off_23FC70;
  TStaticText::~TStaticText(a1);
  operator delete(a1, 0x60u);
}

