// Alternative name is '_ZN22drop_empty_cols_actionD1Ev'
void __fastcall drop_empty_cols_action::~drop_empty_cols_action(drop_empty_cols_action *this)
{
  void *v1; // rdi

  *(_QWORD *)this = &off_4D1D88;
  v1 = *((void **)this + 3);
  if ( v1 )
    operator delete[](v1);
}

