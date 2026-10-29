void __fastcall std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int_____::vfunc_0(
        std::__future_base::_Result_base *this)
{
  void (*v2)(void); // rax
  bool v3; // zf
  void *v4; // rdi

  if ( this )
  {
    v2 = *(void (**)(void))(*(_QWORD *)this + 16LL);
    if ( (char *)v2 == (char *)std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int_____::vfunc_2 )
    {
      v3 = *((_BYTE *)this + 40) == 0;
      *(_QWORD *)this = std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int______vtable;
      if ( !v3 )
      {
        v4 = *((void **)this + 2);
        if ( v4 )
          operator delete(v4, *((_QWORD *)this + 4) - (_QWORD)v4);
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
