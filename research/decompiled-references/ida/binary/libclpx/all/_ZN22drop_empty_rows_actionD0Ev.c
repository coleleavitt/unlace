void __fastcall drop_empty_rows_action::~drop_empty_rows_action(drop_empty_rows_action *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &off_4D1DB8;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  operator delete(this);
}

