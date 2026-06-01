void __fastcall tripleton_action::~tripleton_action(tripleton_action *this)
{
  tripleton_action::~tripleton_action(this);
  operator delete(this);
}

