// Alternative name is '_ZN29drop_zero_coefficients_actionD1Ev'
void __fastcall drop_zero_coefficients_action::~drop_zero_coefficients_action(drop_zero_coefficients_action *this)
{
  void *v1; // rdi

  *(_QWORD *)this = &off_4D2118;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

