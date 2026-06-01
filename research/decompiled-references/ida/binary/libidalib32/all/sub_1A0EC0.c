void __fastcall sub_1A0EC0(TGroup *a1)
{
  *(_QWORD *)a1 = &off_23E508;
  TGroup::~TGroup(a1);
  operator delete(a1, 0x90u);
}

