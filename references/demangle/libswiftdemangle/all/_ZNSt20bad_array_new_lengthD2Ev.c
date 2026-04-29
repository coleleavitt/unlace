// Alternative name is '_ZNSt20bad_array_new_lengthD1Ev'
void __fastcall std::bad_array_new_length::~bad_array_new_length(std::bad_array_new_length *this)
{
  *(_QWORD *)this = std::bad_array_new_length___vtable;
  std::bad_alloc::~bad_alloc(this);
}
