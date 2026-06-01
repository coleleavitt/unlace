__int64 __fastcall std::_Vector_base<unsigned short>::_M_allocate(__int64 a1, __int64 a2)
{
  if ( a2 )
    return std::allocator_traits<std::allocator<unsigned short>>::allocate(a1, a2);
  else
    return 0;
}

