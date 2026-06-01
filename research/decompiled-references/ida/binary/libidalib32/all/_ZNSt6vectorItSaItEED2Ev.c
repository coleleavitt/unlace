// Alternative name is '_ZNSt6vectorItSaItEED1Ev'
__int64 __fastcall std::vector<unsigned short>::~vector(_QWORD *a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(a1);
  std::_Destroy<unsigned short *,unsigned short>(*a1, a1[1], Tp_allocator);
  return std::_Vector_base<unsigned short>::~_Vector_base(a1);
}

