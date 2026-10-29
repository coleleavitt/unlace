void __fastcall implied_free_action::~implied_free_action(implied_free_action *this)
{
  implied_free_action::~implied_free_action(this);
  operator delete(this);
}

