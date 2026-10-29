void __fastcall sub_183C40(TButton *a1)
{
  *(_QWORD *)a1 = &off_23BE60;
  TButton::~TButton(a1);
  operator delete(a1, 0x60u);
}

