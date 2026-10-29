__int64 __fastcall __gnu_cxx::new_allocator<std::_List_node<google_breakpad::MappingEntry>>::allocate(
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 > __gnu_cxx::new_allocator<std::_List_node<google_breakpad::MappingEntry>>::max_size(a1) )
    std::__throw_bad_alloc();
  return operator new(328 * a2);
}

