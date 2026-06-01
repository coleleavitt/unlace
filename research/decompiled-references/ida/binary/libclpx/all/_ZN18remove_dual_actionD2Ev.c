// Alternative name is '_ZN18remove_dual_actionD1Ev'
void __fastcall remove_dual_action::~remove_dual_action(remove_dual_action *this)
{
  void *v1; // rdi

  *(_QWORD *)this = &off_4D1BC0;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

