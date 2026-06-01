// Alternative name is '_ZN22slack_doubleton_actionD1Ev'
void __fastcall slack_doubleton_action::~slack_doubleton_action(slack_doubleton_action *this)
{
  void *v1; // rdi

  *(_QWORD *)this = &off_4D1F80;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

