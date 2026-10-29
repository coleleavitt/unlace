void __fastcall remove_dual_action::~remove_dual_action(remove_dual_action *this)
{
  remove_dual_action::~remove_dual_action(this);
  operator delete(this);
}

