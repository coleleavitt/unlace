__int64 __fastcall std::_List_base<google_breakpad::MappingEntry>::_M_put_node(__int64 a1, __int64 a2)
{
  return std::allocator_traits<std::allocator<std::_List_node<google_breakpad::MappingEntry>>>::deallocate(a1, a2, 1);
}

