void __fastcall isolated_constraint_action::~isolated_constraint_action(isolated_constraint_action *this)
{
  isolated_constraint_action::~isolated_constraint_action(this);
  operator delete(this);
}

