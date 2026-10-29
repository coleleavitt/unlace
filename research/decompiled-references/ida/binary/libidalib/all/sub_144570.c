void __fastcall sub_144570(TGroup *a1)
{
  *(_QWORD *)a1 = &unk_239B28;
  TGroup::~TGroup(a1);
  operator delete(a1, 0x90u);
}

