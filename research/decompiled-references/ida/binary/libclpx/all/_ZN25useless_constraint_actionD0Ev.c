void __fastcall useless_constraint_action::~useless_constraint_action(useless_constraint_action *this)
{
  useless_constraint_action::~useless_constraint_action(this);
  operator delete(this);
}

