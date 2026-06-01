__int64 __fastcall std::list<google_breakpad::AppMemory>::_M_insert<google_breakpad::AppMemory const&>(
        __int64 a1,
        std::__detail::_List_node_base *a2,
        __int64 a3)
{
  __int64 v3; // rax
  std::__detail::_List_node_base *v5; // [rsp+28h] [rbp-8h]

  v3 = std::forward<google_breakpad::AppMemory const&>(a3);
  v5 = (std::__detail::_List_node_base *)std::list<google_breakpad::AppMemory>::_M_create_node<google_breakpad::AppMemory const&>(
                                           a1,
                                           v3);
  std::__detail::_List_node_base::_M_hook(v5, a2);
  return std::_List_base<google_breakpad::AppMemory>::_M_inc_size(a1, 1);
}

