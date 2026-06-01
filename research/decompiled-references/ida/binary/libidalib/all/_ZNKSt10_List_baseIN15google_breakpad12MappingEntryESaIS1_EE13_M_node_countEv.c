__int64 __fastcall std::_List_base<google_breakpad::MappingEntry>::_M_node_count(_QWORD *a1)
{
  __int64 v1; // rax

  v1 = std::__addressof<std::__detail::_List_node_base const>(a1);
  return std::_List_base<google_breakpad::MappingEntry>::_S_distance(*a1, v1);
}

