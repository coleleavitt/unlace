void __fastcall sub_143E10(TGroup *a1)
{
  *(_QWORD *)a1 = &unk_238B28;
  TGroup::~TGroup(a1);
  operator delete(a1, 0x90u);
}

