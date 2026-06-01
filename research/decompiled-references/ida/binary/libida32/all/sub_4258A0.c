void __fastcall sub_4258A0(std::__future_base::_Result_base *this)
{
  void (*v2)(void); // rax
  bool v3; // zf
  void *v4; // rdi

  if ( this )
  {
    v2 = *(void (**)(void))(*(_QWORD *)this + 16LL);
    if ( (char *)v2 == (char *)sub_425850 )
    {
      v3 = *((_BYTE *)this + 40) == 0;
      *(_QWORD *)this = off_2AFE938;
      if ( !v3 )
      {
        v4 = *((void **)this + 2);
        if ( v4 )
        {
          *((_QWORD *)this + 3) = 0;
          qfree(v4);
        }
      }
      std::__future_base::_Result_base::~_Result_base(this);
      operator delete(this, 0x30u);
    }
    else
    {
      v2();
    }
  }
}

