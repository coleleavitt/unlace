void __fastcall sub_184780(TButton *a1)
{
  *(_QWORD *)a1 = &off_23CE60;
  TButton::~TButton(a1);
  operator delete(a1, 0x60u);
}

