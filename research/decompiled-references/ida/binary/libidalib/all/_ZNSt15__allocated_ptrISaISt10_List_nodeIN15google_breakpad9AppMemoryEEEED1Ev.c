// Alternative name is '_ZNSt15__allocated_ptrISaISt10_List_nodeIN15google_breakpad9AppMemoryEEEED2Ev'
__int64 __fastcall std::__allocated_ptr<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::~__allocated_ptr(
        _QWORD *a1)
{
  __int64 result; // rax

  result = a1[1];
  if ( result )
    return std::allocator_traits<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::deallocate(*a1, a1[1], 1);
  return result;
}

