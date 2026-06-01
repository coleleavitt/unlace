void __fastcall doubleton_action::~doubleton_action(doubleton_action *this)
{
  doubleton_action::~doubleton_action(this);
  operator delete(this);
}

