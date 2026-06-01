// Alternative name is '_ZN22slack_singleton_actionD1Ev'
void __fastcall slack_singleton_action::~slack_singleton_action(slack_singleton_action *this)
{
  void *v1; // rdi

  *(_QWORD *)this = &off_4D1FB0;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

