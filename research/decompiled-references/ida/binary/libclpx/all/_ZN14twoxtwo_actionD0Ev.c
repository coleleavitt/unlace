void __fastcall twoxtwo_action::~twoxtwo_action(twoxtwo_action *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &off_4D1D28;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
}

