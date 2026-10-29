// Alternative name is '_ZN19remove_fixed_actionD1Ev'
void __fastcall remove_fixed_action::~remove_fixed_action(remove_fixed_action *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *(_QWORD *)this = &off_4D1E18;
  v2 = *((void **)this + 5);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 3);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 2);
  if ( v4 )
    operator delete[](v4);
}

