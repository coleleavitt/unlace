void __fastcall gubrow_action::~gubrow_action(gubrow_action *this)
{
  gubrow_action::~gubrow_action(this);
  operator delete(this);
}

