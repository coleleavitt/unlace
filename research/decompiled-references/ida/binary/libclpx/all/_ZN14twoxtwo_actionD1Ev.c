// Alternative name is '_ZN14twoxtwo_actionD2Ev'
void __fastcall twoxtwo_action::~twoxtwo_action(twoxtwo_action *this)
{
  void *v1; // rdi

  *(_QWORD *)this = &off_4D1D28;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

