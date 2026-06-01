// Alternative name is '_ZNSt6vectorItSaItEE16_Temporary_valueD2Ev'
__int64 __fastcall std::vector<unsigned short>::_Temporary_value::~_Temporary_value(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = std::vector<unsigned short>::_Temporary_value::_M_ptr(a1);
  return std::allocator_traits<std::allocator<unsigned short>>::destroy<unsigned short>(*a1, v1);
}

