void __fastcall sub_425850(std::__future_base::_Result_base *this)
{
  bool v2; // zf
  void *v3; // rdi

  v2 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = off_2AFE938;
  if ( !v2 )
  {
    v3 = *((void **)this + 2);
    if ( v3 )
    {
      *((_QWORD *)this + 3) = 0;
      qfree(v3);
    }
  }
  std::__future_base::_Result_base::~_Result_base(this);
  operator delete(this, 0x30u);
}

