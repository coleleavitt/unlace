void __fastcall remove_fixed_action::~remove_fixed_action(remove_fixed_action *this)
{
  remove_fixed_action::~remove_fixed_action(this);
  operator delete(this);
}

