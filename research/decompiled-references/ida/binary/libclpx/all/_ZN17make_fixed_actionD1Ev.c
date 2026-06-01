// Alternative name is '_ZN17make_fixed_actionD2Ev'
void __fastcall make_fixed_action::~make_fixed_action(make_fixed_action *this)
{
  void *v2; // rdi
  remove_fixed_action *v3; // rbx
  void (__fastcall *v4)(remove_fixed_action *); // rax

  *(_QWORD *)this = &off_4D1E48;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  v3 = *((remove_fixed_action **)this + 5);
  if ( v3 )
  {
    v4 = *(void (__fastcall **)(remove_fixed_action *))(*(_QWORD *)v3 + 24LL);
    if ( v4 == remove_fixed_action::~remove_fixed_action )
    {
      remove_fixed_action::~remove_fixed_action(v3);
      operator delete(v3);
    }
    else
    {
      v4(v3);
    }
  }
}

