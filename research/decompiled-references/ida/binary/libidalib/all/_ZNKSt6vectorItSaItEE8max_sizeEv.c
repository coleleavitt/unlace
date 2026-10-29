__int64 __fastcall std::vector<unsigned short>::max_size(__int64 a1)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(a1);
  return std::allocator_traits<std::allocator<unsigned short>>::max_size(Tp_allocator);
}

