void __fastcall dupcol_action::~dupcol_action(dupcol_action *this)
{
  dupcol_action::~dupcol_action(this);
  operator delete(this);
}

