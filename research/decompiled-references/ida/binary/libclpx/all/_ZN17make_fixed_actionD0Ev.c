void __fastcall make_fixed_action::~make_fixed_action(make_fixed_action *this)
{
  void *v2; // rdi
  void *v3; // rbp
  remove_fixed_action *v4; // rdi
  void (__fastcall *v5)(remove_fixed_action *); // rax

  *(_QWORD *)this = &off_4D1E48;
  v2 = *((void **)this + 3);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 5);
  if ( !v3 )
    goto LABEL_6;
  v4 = *((remove_fixed_action **)this + 5);
  v5 = *(void (__fastcall **)(remove_fixed_action *))(*(_QWORD *)v3 + 24LL);
  if ( v5 == remove_fixed_action::~remove_fixed_action )
  {
    remove_fixed_action::~remove_fixed_action(v4);
    operator delete(v3);
LABEL_6:
    operator delete(this);
    return;
  }
  v5(v4);
  operator delete(this);
}

