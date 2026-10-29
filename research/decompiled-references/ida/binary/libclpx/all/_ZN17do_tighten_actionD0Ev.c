void __fastcall do_tighten_action::~do_tighten_action(do_tighten_action *this)
{
  do_tighten_action::~do_tighten_action(this);
  operator delete(this);
}

