void __fastcall slack_doubleton_action::~slack_doubleton_action(slack_doubleton_action *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &off_4D1F80;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
}

