__int64 __fastcall std::list<google_breakpad::AppMemory>::_M_create_node<google_breakpad::AppMemory const&>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  _BYTE v6[16]; // [rsp+10h] [rbp-30h] BYREF
  __int64 Node_allocator; // [rsp+20h] [rbp-20h]
  __int64 node; // [rsp+28h] [rbp-18h]

  node = std::_List_base<google_breakpad::AppMemory>::_M_get_node(a1);
  Node_allocator = std::_List_base<google_breakpad::AppMemory>::_M_get_Node_allocator(a1);
  std::__allocated_ptr<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::__allocated_ptr(
    v6,
    Node_allocator,
    node);
  v2 = std::forward<google_breakpad::AppMemory const&>(a2);
  v3 = std::_List_node<google_breakpad::AppMemory>::_M_valptr(node);
  std::allocator_traits<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::construct<google_breakpad::AppMemory,google_breakpad::AppMemory const&>(
    Node_allocator,
    v3,
    v2);
  std::__allocated_ptr<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::operator=(v6, 0);
  v4 = node;
  std::__allocated_ptr<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::~__allocated_ptr(v6);
  return v4;
}

