// Alternative name is '_ZN26isolated_constraint_actionD1Ev'
void __fastcall isolated_constraint_action::~isolated_constraint_action(isolated_constraint_action *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  *(_QWORD *)this = &off_4D1F20;
  v2 = *((void **)this + 5);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 6);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 7);
  if ( v4 )
    operator delete[](v4);
}

