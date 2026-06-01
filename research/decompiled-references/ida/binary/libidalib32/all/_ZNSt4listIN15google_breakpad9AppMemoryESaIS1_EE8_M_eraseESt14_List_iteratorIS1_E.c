__int64 __fastcall std::list<google_breakpad::AppMemory>::_M_erase(__int64 a1, std::__detail::_List_node_base *a2)
{
  __int64 v2; // rbx
  __int64 Node_allocator; // rax

  std::_List_base<google_breakpad::AppMemory>::_M_dec_size(a1, 1);
  std::__detail::_List_node_base::_M_unhook(a2);
  v2 = std::_List_node<google_breakpad::AppMemory>::_M_valptr(a2);
  Node_allocator = std::_List_base<google_breakpad::AppMemory>::_M_get_Node_allocator(a1);
  std::allocator_traits<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::destroy<google_breakpad::AppMemory>(
    Node_allocator,
    v2);
  return std::_List_base<google_breakpad::AppMemory>::_M_put_node(a1, a2);
}

