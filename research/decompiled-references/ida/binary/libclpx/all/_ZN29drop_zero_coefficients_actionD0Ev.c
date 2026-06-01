void __fastcall drop_zero_coefficients_action::~drop_zero_coefficients_action(drop_zero_coefficients_action *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &off_4D2118;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
}

