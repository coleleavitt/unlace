void __fastcall subst_constraint_action::~subst_constraint_action(subst_constraint_action *this)
{
  subst_constraint_action::~subst_constraint_action(this);
  operator delete(this);
}

