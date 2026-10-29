// Alternative name is '_ZNSt15__allocated_ptrISaISt10_List_nodeIN15google_breakpad12MappingEntryEEEEC2ERS4_PS3_'
_QWORD *__fastcall std::__allocated_ptr<std::allocator<std::_List_node<google_breakpad::MappingEntry>>>::__allocated_ptr(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  *a1 = std::__addressof<std::allocator<std::_List_node<google_breakpad::MappingEntry>>>(a2);
  a1[1] = a3;
  return a1;
}

