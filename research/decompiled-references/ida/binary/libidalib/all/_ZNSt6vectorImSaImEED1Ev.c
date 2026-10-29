// Alternative name is '_ZNSt6vectorImSaImEED2Ev'
void __fastcall std::vector<unsigned long>::~vector(_QWORD *a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<unsigned long>::_M_get_Tp_allocator(a1);
  std::_Destroy<unsigned long *,unsigned long>(*a1, a1[1], Tp_allocator);
  sub_180CD0((__int64)a1);
}

