__int64 __fastcall std::_Vector_base<unsigned long>::_M_allocate(__int64 a1, __int64 a2)
{
  if ( a2 )
    return std::allocator_traits<std::allocator<unsigned long>>::allocate(a1, a2);
  else
    return 0;
}

