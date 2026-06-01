__int64 __fastcall std::vector<unsigned short>::_M_erase_at_end(__int64 a1, __int64 a2)
{
  __int64 Tp_allocator; // rax

  Tp_allocator = std::_Vector_base<unsigned short>::_M_get_Tp_allocator(a1);
  std::_Destroy<unsigned short *,unsigned short>(a2, *(_QWORD *)(a1 + 8), Tp_allocator);
  *(_QWORD *)(a1 + 8) = a2;
  return a1;
}

