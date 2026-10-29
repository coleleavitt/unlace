_QWORD **__fastcall std::_List_base<google_breakpad::AppMemory>::_M_clear(_QWORD **a1)
{
  _QWORD **result; // rax
  __int64 Node_allocator; // rax
  __int64 v3; // [rsp+18h] [rbp-18h]
  _QWORD *v4; // [rsp+20h] [rbp-10h]
  _QWORD *v5; // [rsp+28h] [rbp-8h]

  v5 = *a1;
  while ( 1 )
  {
    result = a1;
    if ( v5 == a1 )
      break;
    v4 = v5;
    v5 = (_QWORD *)*v5;
    v3 = std::_List_node<google_breakpad::AppMemory>::_M_valptr(v4);
    Node_allocator = std::_List_base<google_breakpad::AppMemory>::_M_get_Node_allocator(a1);
    std::allocator_traits<std::allocator<std::_List_node<google_breakpad::AppMemory>>>::destroy<google_breakpad::AppMemory>(
      Node_allocator,
      v3);
    std::_List_base<google_breakpad::AppMemory>::_M_put_node(a1, v4);
  }
  return result;
}

