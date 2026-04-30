void __fastcall std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int_____::vfunc_2(
        std::__future_base::_Result_base *this)
{
  bool v2; // zf
  void *v3; // rdi

  v2 = *((_BYTE *)this + 40) == 0;
  *(_QWORD *)this = std::__future_base::_Result_std::vector_unsigned_int__std::allocator_unsigned_int______vtable;
  if ( !v2 )
  {
    v3 = *((void **)this + 2);
    if ( v3 )
      operator delete(v3, *((_QWORD *)this + 4) - (_QWORD)v3);
  }
  std::__future_base::_Result_base::~_Result_base(this);
  operator delete(this, 0x30u);
}
