void __fastcall sub_18EB20(TGroup *this)
{
  _QWORD *v2; // rdi

  v2 = (_QWORD *)((char *)this + 128);
  *(v2 - 16) = &off_23C1E0;
  sub_176A50(v2);
  TGroup::~TGroup(this);
  operator delete(this, 0xA8u);
}

