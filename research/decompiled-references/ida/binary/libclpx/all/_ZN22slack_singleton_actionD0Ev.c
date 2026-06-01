void __fastcall slack_singleton_action::~slack_singleton_action(slack_singleton_action *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &off_4D1FB0;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
}

