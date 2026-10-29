void __fastcall forcing_constraint_action::~forcing_constraint_action(forcing_constraint_action *this)
{
  forcing_constraint_action::~forcing_constraint_action(this);
  operator delete(this);
}

