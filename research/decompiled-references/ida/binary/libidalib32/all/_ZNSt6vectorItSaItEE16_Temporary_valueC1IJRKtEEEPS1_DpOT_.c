// Alternative name is '_ZNSt6vectorItSaItEE16_Temporary_valueC2IJRKtEEEPS1_DpOT_'
__int64 __fastcall std::vector<unsigned short>::_Temporary_value::_Temporary_value<unsigned short const&>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax

  *a1 = a2;
  v3 = std::forward<unsigned short const&>(a3);
  v4 = std::vector<unsigned short>::_Temporary_value::_M_ptr(a1);
  return std::allocator_traits<std::allocator<unsigned short>>::construct<unsigned short,unsigned short const&>(
           *a1,
           v4,
           v3);
}

